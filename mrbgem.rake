MRuby::Gem::Specification.new('mruby-sqlite') do |spec|
  spec.author = "Jared Breeden, modified by Carlo Prelz"
  spec.version = "1.0.0.a"
  spec.license = "MIT"

  ['-g','-O6','-funsigned-char','-fPIC','-ffast-math','-Wno-discarded-qualifiers','-Wno-int-conversion','-DSQLITE_ENABLE_COLUMN_METADATA','-DSQLITE_THREADSAFE'].each do |f|
    spec.cc.flags.push(f)
  end
  
  ['../include/'].each do |s|
    spec.cc.include_paths.push(s)
  end

  ['sqlite3','dl'].each do |s|
    spec.linker.libraries.push(s)
  end
end
