/*
 * struct sqlite3_file
 * Defined in file sqlite3.h @ line 635
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3File_TYPE

/*
 * Class Methods
 */

#if BIND_Sqlite3File_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3File_initialize(mrb_state* mrb, mrb_value self) {
  struct sqlite3_file* native_object = (struct sqlite3_file*)malloc(sizeof(struct sqlite3_file));
  mruby_gift_struct sqlite3_file_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SQLite_Sqlite3File_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SQLite::Sqlite3File.disown only accepts objects of type SQLite::Sqlite3File");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SQLite_Sqlite3File_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SQLite::Sqlite3File.belongs_to_ruby only accepts objects of type SQLite::Sqlite3File");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}

/*
 * Fields
 */

#if BIND_Sqlite3File_pMethods_FIELD
/* get_pMethods
 *
 * Return Type: const struct sqlite3_io_methods *
 */
mrb_value
mrb_SQLite_Sqlite3File_get_pMethods(mrb_state* mrb, mrb_value self) {
  struct sqlite3_file * native_self = mruby_unbox_struct sqlite3_file(self);

  const struct sqlite3_io_methods * native_field = native_self->pMethods;

  mrb_value ruby_field = (native_field == NULL ? mrb_nil_value() : mruby_box_sqlite3_io_methods(mrb, native_field));

  return ruby_field;
}

/* set_pMethods
 *
 * Parameters:
 * - value: const struct sqlite3_io_methods *
 */
mrb_value
mrb_SQLite_Sqlite3File_set_pMethods(mrb_state* mrb, mrb_value self) {
  struct sqlite3_file * native_self = mruby_unbox_struct sqlite3_file(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, Sqlite3IoMethods_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3IoMethods expected");
    return mrb_nil_value();
  }

  const struct sqlite3_io_methods * native_field = (mrb_nil_p(ruby_field) ? NULL : mruby_unbox_sqlite3_io_methods(ruby_field));

  native_self->pMethods = native_field;

  return ruby_field;
}
#endif


void mrb_SQLite_Sqlite3File_init(mrb_state* mrb) {
  RClass* Sqlite3File_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Sqlite3File", mrb->object_class);
  MRB_SET_INSTANCE_TT(Sqlite3File_class, MRB_TT_DATA);

#if BIND_Sqlite3File_INITIALIZE
  mrb_define_method(mrb, Sqlite3File_class, "initialize", mrb_SQLite_Sqlite3File_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Sqlite3File_class, "disown", mrb_SQLite_Sqlite3File_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Sqlite3File_class, "belongs_to_ruby?", mrb_SQLite_Sqlite3File_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_Sqlite3File_pMethods_FIELD
  mrb_define_method(mrb, Sqlite3File_class, "pMethods", mrb_SQLite_Sqlite3File_get_pMethods, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3File_class, "pMethods=", mrb_SQLite_Sqlite3File_set_pMethods, MRB_ARGS_ARG(1, 0));
#endif

}

#endif