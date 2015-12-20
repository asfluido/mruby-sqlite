/*
 * struct sqlite3_pcache_methods2
 * Defined in file sqlite3.h @ line 6887
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3PcacheMethods2_TYPE

/*
 * Class Methods
 */

#if BIND_Sqlite3PcacheMethods2_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_initialize(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods2* native_object = (struct sqlite3_pcache_methods2*)calloc(1, sizeof(struct sqlite3_pcache_methods2));
  mruby_giftwrap_sqlite3_pcache_methods2_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SQLite::Sqlite3PcacheMethods2.disown only accepts objects of type SQLite::Sqlite3PcacheMethods2");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SQLite::Sqlite3PcacheMethods2.belongs_to_ruby only accepts objects of type SQLite::Sqlite3PcacheMethods2");
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

#if BIND_Sqlite3PcacheMethods2_iVersion_FIELD_READER
/* get_iVersion
 *
 * Return Type: int
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_get_iVersion(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods2 * native_self = mruby_unbox_sqlite3_pcache_methods2(self);

  int native_iVersion = native_self->iVersion;

  mrb_value iVersion = mrb_fixnum_value(native_iVersion);

  return iVersion;
}
#endif

#if BIND_Sqlite3PcacheMethods2_iVersion_FIELD_WRITER
/* set_iVersion
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_set_iVersion(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods2 * native_self = mruby_unbox_sqlite3_pcache_methods2(self);
  mrb_int native_iVersion;

  mrb_get_args(mrb, "i", &native_iVersion);

  native_self->iVersion = native_iVersion;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3PcacheMethods2_pArg_FIELD_READER
/* get_pArg
 *
 * Return Type: void *
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_get_pArg(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods2 * native_self = mruby_unbox_sqlite3_pcache_methods2(self);

  void * native_pArg = native_self->pArg;

  mrb_value pArg = TODO_mruby_box_void_PTR(mrb, native_pArg);

  return pArg;
}
#endif

#if BIND_Sqlite3PcacheMethods2_pArg_FIELD_WRITER
/* set_pArg
 *
 * Parameters:
 * - value: void *
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_set_pArg(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods2 * native_self = mruby_unbox_sqlite3_pcache_methods2(self);
  mrb_value pArg;

  mrb_get_args(mrb, "o", &pArg);

  /* type checking */
  TODO_type_check_void_PTR(pArg);

  void * native_pArg = TODO_mruby_unbox_void_PTR(pArg);

  native_self->pArg = native_pArg;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3PcacheMethods2_xInit_FIELD_READER
/* get_xInit
 *
 * Return Type: int (*)(void *)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_get_xInit(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods2 * native_self = mruby_unbox_sqlite3_pcache_methods2(self);

  int (*)(void *) native_xInit = native_self->xInit;

  mrb_value xInit = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(mrb, native_xInit);

  return xInit;
}
#endif

#if BIND_Sqlite3PcacheMethods2_xInit_FIELD_WRITER
/* set_xInit
 *
 * Parameters:
 * - value: int (*)(void *)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_set_xInit(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods2 * native_self = mruby_unbox_sqlite3_pcache_methods2(self);
  mrb_value xInit;

  mrb_get_args(mrb, "o", &xInit);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(xInit);

  int (*native_xInit)(void *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(xInit);

  native_self->xInit = native_xInit;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3PcacheMethods2_xShutdown_FIELD_READER
/* get_xShutdown
 *
 * Return Type: void (*)(void *)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_get_xShutdown(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods2 * native_self = mruby_unbox_sqlite3_pcache_methods2(self);

  void (*)(void *) native_xShutdown = native_self->xShutdown;

  mrb_value xShutdown = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(mrb, native_xShutdown);

  return xShutdown;
}
#endif

#if BIND_Sqlite3PcacheMethods2_xShutdown_FIELD_WRITER
/* set_xShutdown
 *
 * Parameters:
 * - value: void (*)(void *)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_set_xShutdown(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods2 * native_self = mruby_unbox_sqlite3_pcache_methods2(self);
  mrb_value xShutdown;

  mrb_get_args(mrb, "o", &xShutdown);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(xShutdown);

  void (*native_xShutdown)(void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(xShutdown);

  native_self->xShutdown = native_xShutdown;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3PcacheMethods2_xCreate_FIELD_READER
/* get_xCreate
 *
 * Return Type: sqlite3_pcache *(*)(int, int, int)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_get_xCreate(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods2 * native_self = mruby_unbox_sqlite3_pcache_methods2(self);

  sqlite3_pcache *(*)(int, int, int) native_xCreate = native_self->xCreate;

  mrb_value xCreate = TODO_mruby_box_sqlite3_pcache_PTR_LPAREN_PTR_RPAREN_LPAREN_intCOMMA_intCOMMA_int_RPAREN(mrb, native_xCreate);

  return xCreate;
}
#endif

#if BIND_Sqlite3PcacheMethods2_xCreate_FIELD_WRITER
/* set_xCreate
 *
 * Parameters:
 * - value: sqlite3_pcache *(*)(int, int, int)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_set_xCreate(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods2 * native_self = mruby_unbox_sqlite3_pcache_methods2(self);
  mrb_value xCreate;

  mrb_get_args(mrb, "o", &xCreate);

  /* type checking */
  TODO_type_check_sqlite3_pcache_PTR_LPAREN_PTR_RPAREN_LPAREN_intCOMMA_intCOMMA_int_RPAREN(xCreate);

  sqlite3_pcache *(*native_xCreate)(int, int, int) = TODO_mruby_unbox_sqlite3_pcache_PTR_LPAREN_PTR_RPAREN_LPAREN_intCOMMA_intCOMMA_int_RPAREN(xCreate);

  native_self->xCreate = native_xCreate;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3PcacheMethods2_xCachesize_FIELD_READER
/* get_xCachesize
 *
 * Return Type: void (*)(sqlite3_pcache *, int)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_get_xCachesize(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods2 * native_self = mruby_unbox_sqlite3_pcache_methods2(self);

  void (*)(sqlite3_pcache *, int) native_xCachesize = native_self->xCachesize;

  mrb_value xCachesize = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_int_RPAREN(mrb, native_xCachesize);

  return xCachesize;
}
#endif

#if BIND_Sqlite3PcacheMethods2_xCachesize_FIELD_WRITER
/* set_xCachesize
 *
 * Parameters:
 * - value: void (*)(sqlite3_pcache *, int)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_set_xCachesize(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods2 * native_self = mruby_unbox_sqlite3_pcache_methods2(self);
  mrb_value xCachesize;

  mrb_get_args(mrb, "o", &xCachesize);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_int_RPAREN(xCachesize);

  void (*native_xCachesize)(sqlite3_pcache *, int) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_int_RPAREN(xCachesize);

  native_self->xCachesize = native_xCachesize;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3PcacheMethods2_xPagecount_FIELD_READER
/* get_xPagecount
 *
 * Return Type: int (*)(sqlite3_pcache *)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_get_xPagecount(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods2 * native_self = mruby_unbox_sqlite3_pcache_methods2(self);

  int (*)(sqlite3_pcache *) native_xPagecount = native_self->xPagecount;

  mrb_value xPagecount = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_RPAREN(mrb, native_xPagecount);

  return xPagecount;
}
#endif

#if BIND_Sqlite3PcacheMethods2_xPagecount_FIELD_WRITER
/* set_xPagecount
 *
 * Parameters:
 * - value: int (*)(sqlite3_pcache *)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_set_xPagecount(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods2 * native_self = mruby_unbox_sqlite3_pcache_methods2(self);
  mrb_value xPagecount;

  mrb_get_args(mrb, "o", &xPagecount);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_RPAREN(xPagecount);

  int (*native_xPagecount)(sqlite3_pcache *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_RPAREN(xPagecount);

  native_self->xPagecount = native_xPagecount;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3PcacheMethods2_xFetch_FIELD_READER
/* get_xFetch
 *
 * Return Type: sqlite3_pcache_page *(*)(sqlite3_pcache *, unsigned int, int)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_get_xFetch(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods2 * native_self = mruby_unbox_sqlite3_pcache_methods2(self);

  sqlite3_pcache_page *(*)(sqlite3_pcache *, unsigned int, int) native_xFetch = native_self->xFetch;

  mrb_value xFetch = TODO_mruby_box_sqlite3_pcache_page_PTR_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_unsigned_intCOMMA_int_RPAREN(mrb, native_xFetch);

  return xFetch;
}
#endif

#if BIND_Sqlite3PcacheMethods2_xFetch_FIELD_WRITER
/* set_xFetch
 *
 * Parameters:
 * - value: sqlite3_pcache_page *(*)(sqlite3_pcache *, unsigned int, int)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_set_xFetch(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods2 * native_self = mruby_unbox_sqlite3_pcache_methods2(self);
  mrb_value xFetch;

  mrb_get_args(mrb, "o", &xFetch);

  /* type checking */
  TODO_type_check_sqlite3_pcache_page_PTR_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_unsigned_intCOMMA_int_RPAREN(xFetch);

  sqlite3_pcache_page *(*native_xFetch)(sqlite3_pcache *, unsigned int, int) = TODO_mruby_unbox_sqlite3_pcache_page_PTR_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_unsigned_intCOMMA_int_RPAREN(xFetch);

  native_self->xFetch = native_xFetch;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3PcacheMethods2_xUnpin_FIELD_READER
/* get_xUnpin
 *
 * Return Type: void (*)(sqlite3_pcache *, sqlite3_pcache_page *, int)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_get_xUnpin(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods2 * native_self = mruby_unbox_sqlite3_pcache_methods2(self);

  void (*)(sqlite3_pcache *, sqlite3_pcache_page *, int) native_xUnpin = native_self->xUnpin;

  mrb_value xUnpin = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_sqlite3_pcache_page_PTR_COMMA_int_RPAREN(mrb, native_xUnpin);

  return xUnpin;
}
#endif

#if BIND_Sqlite3PcacheMethods2_xUnpin_FIELD_WRITER
/* set_xUnpin
 *
 * Parameters:
 * - value: void (*)(sqlite3_pcache *, sqlite3_pcache_page *, int)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_set_xUnpin(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods2 * native_self = mruby_unbox_sqlite3_pcache_methods2(self);
  mrb_value xUnpin;

  mrb_get_args(mrb, "o", &xUnpin);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_sqlite3_pcache_page_PTR_COMMA_int_RPAREN(xUnpin);

  void (*native_xUnpin)(sqlite3_pcache *, sqlite3_pcache_page *, int) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_sqlite3_pcache_page_PTR_COMMA_int_RPAREN(xUnpin);

  native_self->xUnpin = native_xUnpin;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3PcacheMethods2_xRekey_FIELD_READER
/* get_xRekey
 *
 * Return Type: void (*)(sqlite3_pcache *, sqlite3_pcache_page *, unsigned int, unsigned int)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_get_xRekey(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods2 * native_self = mruby_unbox_sqlite3_pcache_methods2(self);

  void (*)(sqlite3_pcache *, sqlite3_pcache_page *, unsigned int, unsigned int) native_xRekey = native_self->xRekey;

  mrb_value xRekey = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_sqlite3_pcache_page_PTR_COMMA_unsigned_intCOMMA_unsigned_int_RPAREN(mrb, native_xRekey);

  return xRekey;
}
#endif

#if BIND_Sqlite3PcacheMethods2_xRekey_FIELD_WRITER
/* set_xRekey
 *
 * Parameters:
 * - value: void (*)(sqlite3_pcache *, sqlite3_pcache_page *, unsigned int, unsigned int)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_set_xRekey(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods2 * native_self = mruby_unbox_sqlite3_pcache_methods2(self);
  mrb_value xRekey;

  mrb_get_args(mrb, "o", &xRekey);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_sqlite3_pcache_page_PTR_COMMA_unsigned_intCOMMA_unsigned_int_RPAREN(xRekey);

  void (*native_xRekey)(sqlite3_pcache *, sqlite3_pcache_page *, unsigned int, unsigned int) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_sqlite3_pcache_page_PTR_COMMA_unsigned_intCOMMA_unsigned_int_RPAREN(xRekey);

  native_self->xRekey = native_xRekey;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3PcacheMethods2_xTruncate_FIELD_READER
/* get_xTruncate
 *
 * Return Type: void (*)(sqlite3_pcache *, unsigned int)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_get_xTruncate(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods2 * native_self = mruby_unbox_sqlite3_pcache_methods2(self);

  void (*)(sqlite3_pcache *, unsigned int) native_xTruncate = native_self->xTruncate;

  mrb_value xTruncate = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_unsigned_int_RPAREN(mrb, native_xTruncate);

  return xTruncate;
}
#endif

#if BIND_Sqlite3PcacheMethods2_xTruncate_FIELD_WRITER
/* set_xTruncate
 *
 * Parameters:
 * - value: void (*)(sqlite3_pcache *, unsigned int)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_set_xTruncate(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods2 * native_self = mruby_unbox_sqlite3_pcache_methods2(self);
  mrb_value xTruncate;

  mrb_get_args(mrb, "o", &xTruncate);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_unsigned_int_RPAREN(xTruncate);

  void (*native_xTruncate)(sqlite3_pcache *, unsigned int) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_unsigned_int_RPAREN(xTruncate);

  native_self->xTruncate = native_xTruncate;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3PcacheMethods2_xDestroy_FIELD_READER
/* get_xDestroy
 *
 * Return Type: void (*)(sqlite3_pcache *)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_get_xDestroy(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods2 * native_self = mruby_unbox_sqlite3_pcache_methods2(self);

  void (*)(sqlite3_pcache *) native_xDestroy = native_self->xDestroy;

  mrb_value xDestroy = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_RPAREN(mrb, native_xDestroy);

  return xDestroy;
}
#endif

#if BIND_Sqlite3PcacheMethods2_xDestroy_FIELD_WRITER
/* set_xDestroy
 *
 * Parameters:
 * - value: void (*)(sqlite3_pcache *)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_set_xDestroy(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods2 * native_self = mruby_unbox_sqlite3_pcache_methods2(self);
  mrb_value xDestroy;

  mrb_get_args(mrb, "o", &xDestroy);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_RPAREN(xDestroy);

  void (*native_xDestroy)(sqlite3_pcache *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_RPAREN(xDestroy);

  native_self->xDestroy = native_xDestroy;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3PcacheMethods2_xShrink_FIELD_READER
/* get_xShrink
 *
 * Return Type: void (*)(sqlite3_pcache *)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_get_xShrink(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods2 * native_self = mruby_unbox_sqlite3_pcache_methods2(self);

  void (*)(sqlite3_pcache *) native_xShrink = native_self->xShrink;

  mrb_value xShrink = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_RPAREN(mrb, native_xShrink);

  return xShrink;
}
#endif

#if BIND_Sqlite3PcacheMethods2_xShrink_FIELD_WRITER
/* set_xShrink
 *
 * Parameters:
 * - value: void (*)(sqlite3_pcache *)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_set_xShrink(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods2 * native_self = mruby_unbox_sqlite3_pcache_methods2(self);
  mrb_value xShrink;

  mrb_get_args(mrb, "o", &xShrink);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_RPAREN(xShrink);

  void (*native_xShrink)(sqlite3_pcache *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_RPAREN(xShrink);

  native_self->xShrink = native_xShrink;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif


void mrb_SQLite_Sqlite3PcacheMethods2_init(mrb_state* mrb) {
  struct RClass* Sqlite3PcacheMethods2_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Sqlite3PcacheMethods2", mrb->object_class);
  MRB_SET_INSTANCE_TT(Sqlite3PcacheMethods2_class, MRB_TT_DATA);

#if BIND_Sqlite3PcacheMethods2_INITIALIZE
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "initialize", mrb_SQLite_Sqlite3PcacheMethods2_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Sqlite3PcacheMethods2_class, "disown", mrb_SQLite_Sqlite3PcacheMethods2_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Sqlite3PcacheMethods2_class, "belongs_to_ruby?", mrb_SQLite_Sqlite3PcacheMethods2_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_Sqlite3PcacheMethods2_iVersion_FIELD_READER
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "iVersion", mrb_SQLite_Sqlite3PcacheMethods2_get_iVersion, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3PcacheMethods2_iVersion_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "iVersion=", mrb_SQLite_Sqlite3PcacheMethods2_set_iVersion, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3PcacheMethods2_pArg_FIELD_READER
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "pArg", mrb_SQLite_Sqlite3PcacheMethods2_get_pArg, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3PcacheMethods2_pArg_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "pArg=", mrb_SQLite_Sqlite3PcacheMethods2_set_pArg, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3PcacheMethods2_xInit_FIELD_READER
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "xInit", mrb_SQLite_Sqlite3PcacheMethods2_get_xInit, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3PcacheMethods2_xInit_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "xInit=", mrb_SQLite_Sqlite3PcacheMethods2_set_xInit, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3PcacheMethods2_xShutdown_FIELD_READER
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "xShutdown", mrb_SQLite_Sqlite3PcacheMethods2_get_xShutdown, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3PcacheMethods2_xShutdown_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "xShutdown=", mrb_SQLite_Sqlite3PcacheMethods2_set_xShutdown, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3PcacheMethods2_xCreate_FIELD_READER
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "xCreate", mrb_SQLite_Sqlite3PcacheMethods2_get_xCreate, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3PcacheMethods2_xCreate_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "xCreate=", mrb_SQLite_Sqlite3PcacheMethods2_set_xCreate, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3PcacheMethods2_xCachesize_FIELD_READER
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "xCachesize", mrb_SQLite_Sqlite3PcacheMethods2_get_xCachesize, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3PcacheMethods2_xCachesize_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "xCachesize=", mrb_SQLite_Sqlite3PcacheMethods2_set_xCachesize, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3PcacheMethods2_xPagecount_FIELD_READER
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "xPagecount", mrb_SQLite_Sqlite3PcacheMethods2_get_xPagecount, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3PcacheMethods2_xPagecount_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "xPagecount=", mrb_SQLite_Sqlite3PcacheMethods2_set_xPagecount, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3PcacheMethods2_xFetch_FIELD_READER
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "xFetch", mrb_SQLite_Sqlite3PcacheMethods2_get_xFetch, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3PcacheMethods2_xFetch_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "xFetch=", mrb_SQLite_Sqlite3PcacheMethods2_set_xFetch, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3PcacheMethods2_xUnpin_FIELD_READER
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "xUnpin", mrb_SQLite_Sqlite3PcacheMethods2_get_xUnpin, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3PcacheMethods2_xUnpin_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "xUnpin=", mrb_SQLite_Sqlite3PcacheMethods2_set_xUnpin, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3PcacheMethods2_xRekey_FIELD_READER
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "xRekey", mrb_SQLite_Sqlite3PcacheMethods2_get_xRekey, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3PcacheMethods2_xRekey_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "xRekey=", mrb_SQLite_Sqlite3PcacheMethods2_set_xRekey, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3PcacheMethods2_xTruncate_FIELD_READER
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "xTruncate", mrb_SQLite_Sqlite3PcacheMethods2_get_xTruncate, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3PcacheMethods2_xTruncate_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "xTruncate=", mrb_SQLite_Sqlite3PcacheMethods2_set_xTruncate, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3PcacheMethods2_xDestroy_FIELD_READER
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "xDestroy", mrb_SQLite_Sqlite3PcacheMethods2_get_xDestroy, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3PcacheMethods2_xDestroy_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "xDestroy=", mrb_SQLite_Sqlite3PcacheMethods2_set_xDestroy, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3PcacheMethods2_xShrink_FIELD_READER
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "xShrink", mrb_SQLite_Sqlite3PcacheMethods2_get_xShrink, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3PcacheMethods2_xShrink_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "xShrink=", mrb_SQLite_Sqlite3PcacheMethods2_set_xShrink, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
