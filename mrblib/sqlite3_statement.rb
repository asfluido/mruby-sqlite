module SQLite3
  class Statement
    include Enumerable

    def initialize(db, sql)
      @db = db
      status, @native_stmt, @remainder = SQLite.prepare_v2(@db.instance_variable_get(:@native_db), sql, -1)
      SQLite3.raise_sqlite_error(@db, status)
      @done = false
      # Statement may come back nil if it's whitespace, or a comment, though no error is returned
      @closed = @native_stmt.nil?
    end

    def assert_open
      raise SQLite3::Exception.new('Attempted to use a closed statement') if @closed
    end

    # Returns true if the statement is currently active, meaning it has an open result set
    def active?
      !done?
    end

    def bind_param(which, value)
      assert_open
      status = SQLite::SQLITE_OK

      if which.kind_of?(Fixnum)
        param_index = which
      else
        which = which.to_s

        unless %w[: @ $].include?(which[0])
          which = ":#{which}"
        end
        
        param_index = SQLite.bind_parameter_index(@native_stmt, which)
        
        if param_index == 0
          raise SQLite3::Exception.new("No such bind parameter #{which}")
        end
      end

      case value
      when Fixnum
        status = SQLite.bind_int(@native_stmt, param_index, value)
      when Float
        status = SQLite.bind_double(@native_stmt, param_index, value)
      when TrueClass
        status = SQLite.bind_int(@native_stmt, param_index, 1)
      when FalseClass
        status = SQLite.bind_int(@native_stmt, param_index, 0)
      when SQLite3::Blob
        status = SQLite.bind_blob(@native_stmt, param_index, value, value.length)
      when String
        status = SQLite.bind_text(@native_stmt, param_index, value, value.length)
      when NilClass
        status = SQLite.bind_null(@native_stmt, param_index)
      else
        raise SQLite3::Exception.new("Can't prepare #{value.type}")
      end

      SQLite3.raise_sqlite_error(@db, status)
    end

    def bind_parameter_count
      assert_open
      SQLite.bind_parameter_count(@native_stmt)
    end

    def bind_params(*varbinds)
      assert_open
      varbinds.flatten.each_with_index do |var, index|
        if var.kind_of?(Hash)
          var.each { |key, val| bind_param key, val }
        else
          bind_param (index + 1), var
        end
      end
    end

    def clear_bindings!
      assert_open
      SQLite.clear_bindings(@native_stmt)
    end

    def close
      assert_open
      @closed = true
      # Ignore the status returned. Step would have raised it already.
      SQLite.finalize(@native_stmt)
      self
    end

    def closed?
      @closed
    end

    def column_count
      assert_open
      SQLite.column_count(@native_stmt)
    end

    def column_decltype(index)
      assert_open
      SQLite.column_decltype(@native_stmt, index)
    end

    def column_name(index)
      assert_open
      SQLite.column_origin_name(@native_stmt, index)
    end

    def columns
      assert_open
      unless @columns
        @columns = []
        (0...(self.column_count)).each do |index|
          @columns.push(self.column_name(index))
        end
      end
      @columns
    end

    def done?
      @done
    end

    def each(&block)
      assert_open
      if block_given?
        while row = self.step
          block[row] unless row.nil?
        end
        self # For API compatability with sqlite3-ruby gem
      else
        self.enum_for(:each)
      end
    end

    def execute(*varbinds, &block)
      assert_open
      reset! if active? || done?
      bind_params(*varbinds) unless varbinds.empty?
      results = ResultSet.new(@connection, self)

      # If this query doesn't return any results,
      # step once to make sure we're done.
      step if 0 == column_count

      block[results] if block_given?
      results
    end

    def execute!(*varbinds, &block)
      execute(*varbinds)
      block_given? ? each(&block) : to_a
    end

    def remainder
      @remainder
    end

    def reset!
      assert_open
      @columns = nil
      @types = nil
      @done = false
      status = SQLite.reset(@native_stmt)
    end

    def step
      assert_open
      return nil if @done

      status = SQLite.step(@native_stmt)
      
      @done = (status == SQLite::SQLITE_DONE)
      return nil if @done

      if !@done && status != SQLite::SQLITE_ROW
        SQLite3.raise_sqlite_error(@db, status)
      end

      row = @db.results_as_hash ? {} : []
      (0...(self.column_count)).each do |index|
        val = nil
        case SQLite.column_type(@native_stmt, index)
        when SQLite3::ColumnType::INTEGER
          val = SQLite.column_int(@native_stmt, index)
        when SQLite3::ColumnType::FLOAT
          val = SQLite.column_double(@native_stmt, index)
        when SQLite3::ColumnType::BLOB
          val = SQLite.column_blob(@native_stmt, index)
        when SQLite3::ColumnType::NULL
          val = nil
        when SQLite3::ColumnType::TEXT
          val = SQLite.column_text(@native_stmt, index)
        else
          val = SQLite.column_text(@native_stmt, index)
        end

        if @db.results_as_hash
          # Each value is keyed by the zero-based column index,
          row[index] = val
          # as well as the column name, as a string. The column name used for an
          # unnamed column is the 1-based index of the column, as a string.
          row[self.column_name(index) || (index + 1).to_s] = val
        else
          row.push(val)
        end
      end
      row
    end

    def types
      assert_open
      unless @types
        @types = []
        (0...(self.column_count)).each do |index|
          @types.push(self.column_decltype(index))
        end
      end
      @types
    end

  end
end
