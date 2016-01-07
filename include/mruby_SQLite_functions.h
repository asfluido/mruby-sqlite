#ifndef MRUBY_SQLite_FUNCTIONS_HEADER
#define MRUBY_SQLite_FUNCTIONS_HEADER

#define BIND_sqlite3_aggregate_context_FUNCTION FALSE
#define BIND_sqlite3_aggregate_count_FUNCTION TRUE
#define BIND_sqlite3_auto_extension_FUNCTION FALSE
#define BIND_sqlite3_backup_finish_FUNCTION TRUE
#define BIND_sqlite3_backup_init_FUNCTION TRUE
#define BIND_sqlite3_backup_pagecount_FUNCTION TRUE
#define BIND_sqlite3_backup_remaining_FUNCTION TRUE
#define BIND_sqlite3_backup_step_FUNCTION TRUE
#define BIND_sqlite3_bind_blob_FUNCTION TRUE
#define BIND_sqlite3_bind_blob64_FUNCTION FALSE
#define BIND_sqlite3_bind_double_FUNCTION TRUE
#define BIND_sqlite3_bind_int_FUNCTION TRUE
#define BIND_sqlite3_bind_int64_FUNCTION TRUE
#define BIND_sqlite3_bind_null_FUNCTION TRUE
#define BIND_sqlite3_bind_parameter_count_FUNCTION TRUE
#define BIND_sqlite3_bind_parameter_index_FUNCTION TRUE
#define BIND_sqlite3_bind_parameter_name_FUNCTION TRUE
#define BIND_sqlite3_bind_text_FUNCTION TRUE
#define BIND_sqlite3_bind_text16_FUNCTION FALSE
#define BIND_sqlite3_bind_text64_FUNCTION FALSE
#define BIND_sqlite3_bind_value_FUNCTION TRUE
#define BIND_sqlite3_bind_zeroblob_FUNCTION TRUE
#define BIND_sqlite3_blob_bytes_FUNCTION TRUE
#define BIND_sqlite3_blob_close_FUNCTION TRUE
#define BIND_sqlite3_blob_open_FUNCTION FALSE
#define BIND_sqlite3_blob_read_FUNCTION FALSE
#define BIND_sqlite3_blob_reopen_FUNCTION TRUE
#define BIND_sqlite3_blob_write_FUNCTION FALSE
#define BIND_sqlite3_busy_handler_FUNCTION FALSE
#define BIND_sqlite3_busy_timeout_FUNCTION TRUE
#define BIND_sqlite3_cancel_auto_extension_FUNCTION FALSE
#define BIND_sqlite3_changes_FUNCTION TRUE
#define BIND_sqlite3_clear_bindings_FUNCTION TRUE
#define BIND_sqlite3_close_FUNCTION TRUE
#define BIND_sqlite3_close_v2_FUNCTION TRUE
#define BIND_sqlite3_collation_needed_FUNCTION FALSE
#define BIND_sqlite3_collation_needed16_FUNCTION FALSE
#define BIND_sqlite3_column_blob_FUNCTION TRUE
#define BIND_sqlite3_column_bytes_FUNCTION TRUE
#define BIND_sqlite3_column_bytes16_FUNCTION TRUE
#define BIND_sqlite3_column_count_FUNCTION TRUE
#define BIND_sqlite3_column_database_name_FUNCTION TRUE
#define BIND_sqlite3_column_database_name16_FUNCTION FALSE
#define BIND_sqlite3_column_decltype_FUNCTION TRUE
#define BIND_sqlite3_column_decltype16_FUNCTION FALSE
#define BIND_sqlite3_column_double_FUNCTION TRUE
#define BIND_sqlite3_column_int_FUNCTION TRUE
#define BIND_sqlite3_column_int64_FUNCTION TRUE
#define BIND_sqlite3_column_name_FUNCTION TRUE
#define BIND_sqlite3_column_name16_FUNCTION FALSE
#define BIND_sqlite3_column_origin_name_FUNCTION TRUE
#define BIND_sqlite3_column_origin_name16_FUNCTION FALSE
#define BIND_sqlite3_column_table_name_FUNCTION TRUE
#define BIND_sqlite3_column_table_name16_FUNCTION FALSE
#define BIND_sqlite3_column_text_FUNCTION TRUE
#define BIND_sqlite3_column_text16_FUNCTION FALSE
#define BIND_sqlite3_column_type_FUNCTION TRUE
#define BIND_sqlite3_column_value_FUNCTION TRUE
#define BIND_sqlite3_commit_hook_FUNCTION FALSE
#define BIND_sqlite3_compileoption_get_FUNCTION TRUE
#define BIND_sqlite3_compileoption_used_FUNCTION TRUE
#define BIND_sqlite3_complete_FUNCTION TRUE
#define BIND_sqlite3_complete16_FUNCTION FALSE
#define BIND_sqlite3_config_FUNCTION TRUE
#define BIND_sqlite3_context_db_handle_FUNCTION TRUE
#define BIND_sqlite3_create_collation_FUNCTION FALSE
#define BIND_sqlite3_create_collation16_FUNCTION FALSE
#define BIND_sqlite3_create_collation_v2_FUNCTION FALSE
#define BIND_sqlite3_create_function_FUNCTION FALSE
#define BIND_sqlite3_create_function16_FUNCTION FALSE
#define BIND_sqlite3_create_function_v2_FUNCTION FALSE
#define BIND_sqlite3_create_module_FUNCTION FALSE
#define BIND_sqlite3_create_module_v2_FUNCTION FALSE
#define BIND_sqlite3_data_count_FUNCTION TRUE
#define BIND_sqlite3_db_config_FUNCTION TRUE
#define BIND_sqlite3_db_filename_FUNCTION TRUE
#define BIND_sqlite3_db_handle_FUNCTION TRUE
#define BIND_sqlite3_db_readonly_FUNCTION TRUE
#define BIND_sqlite3_db_release_memory_FUNCTION TRUE
#define BIND_sqlite3_db_status_FUNCTION FALSE
#define BIND_sqlite3_declare_vtab_FUNCTION TRUE
#define BIND_sqlite3_enable_load_extension_FUNCTION TRUE
#define BIND_sqlite3_enable_shared_cache_FUNCTION TRUE
#define BIND_sqlite3_errcode_FUNCTION TRUE
#define BIND_sqlite3_errmsg_FUNCTION TRUE
#define BIND_sqlite3_errmsg16_FUNCTION FALSE
#define BIND_sqlite3_errstr_FUNCTION TRUE
#define BIND_sqlite3_exec_FUNCTION FALSE
#define BIND_sqlite3_expired_FUNCTION TRUE
#define BIND_sqlite3_extended_errcode_FUNCTION TRUE
#define BIND_sqlite3_extended_result_codes_FUNCTION TRUE
#define BIND_sqlite3_file_control_FUNCTION FALSE
#define BIND_sqlite3_finalize_FUNCTION TRUE
#define BIND_sqlite3_free_FUNCTION FALSE
#define BIND_sqlite3_free_table_FUNCTION FALSE
#define BIND_sqlite3_get_autocommit_FUNCTION TRUE
#define BIND_sqlite3_get_auxdata_FUNCTION FALSE
#define BIND_sqlite3_get_table_FUNCTION FALSE
#define BIND_sqlite3_global_recover_FUNCTION TRUE
#define BIND_sqlite3_initialize_FUNCTION TRUE
#define BIND_sqlite3_interrupt_FUNCTION TRUE
#define BIND_sqlite3_last_insert_rowid_FUNCTION TRUE
#define BIND_sqlite3_libversion_FUNCTION TRUE
#define BIND_sqlite3_libversion_number_FUNCTION TRUE
#define BIND_sqlite3_limit_FUNCTION TRUE
#define BIND_sqlite3_load_extension_FUNCTION FALSE
#define BIND_sqlite3_log_FUNCTION TRUE
#define BIND_sqlite3_malloc_FUNCTION FALSE
#define BIND_sqlite3_malloc64_FUNCTION FALSE
#define BIND_sqlite3_memory_alarm_FUNCTION FALSE
#define BIND_sqlite3_memory_highwater_FUNCTION TRUE
#define BIND_sqlite3_memory_used_FUNCTION TRUE
#define BIND_sqlite3_mprintf_FUNCTION FALSE
#define BIND_sqlite3_msize_FUNCTION FALSE
#define BIND_sqlite3_next_stmt_FUNCTION TRUE
#define BIND_sqlite3_open_FUNCTION TRUE
#define BIND_sqlite3_open16_FUNCTION FALSE
#define BIND_sqlite3_open_v2_FUNCTION FALSE
#define BIND_sqlite3_os_end_FUNCTION TRUE
#define BIND_sqlite3_os_init_FUNCTION TRUE
#define BIND_sqlite3_overload_function_FUNCTION TRUE
#define BIND_sqlite3_prepare_FUNCTION FALSE
#define BIND_sqlite3_prepare16_FUNCTION FALSE
#define BIND_sqlite3_prepare16_v2_FUNCTION FALSE
#define BIND_sqlite3_prepare_v2_FUNCTION TRUE
#define BIND_sqlite3_profile_FUNCTION FALSE
#define BIND_sqlite3_progress_handler_FUNCTION FALSE
#define BIND_sqlite3_randomness_FUNCTION FALSE
#define BIND_sqlite3_realloc_FUNCTION FALSE
#define BIND_sqlite3_realloc64_FUNCTION FALSE
#define BIND_sqlite3_release_memory_FUNCTION TRUE
#define BIND_sqlite3_reset_FUNCTION TRUE
#define BIND_sqlite3_reset_auto_extension_FUNCTION TRUE
#define BIND_sqlite3_result_blob_FUNCTION FALSE
#define BIND_sqlite3_result_blob64_FUNCTION FALSE
#define BIND_sqlite3_result_double_FUNCTION TRUE
#define BIND_sqlite3_result_error_FUNCTION TRUE
#define BIND_sqlite3_result_error16_FUNCTION FALSE
#define BIND_sqlite3_result_error_code_FUNCTION TRUE
#define BIND_sqlite3_result_error_nomem_FUNCTION TRUE
#define BIND_sqlite3_result_error_toobig_FUNCTION TRUE
#define BIND_sqlite3_result_int_FUNCTION TRUE
#define BIND_sqlite3_result_int64_FUNCTION TRUE
#define BIND_sqlite3_result_null_FUNCTION TRUE
#define BIND_sqlite3_result_text_FUNCTION FALSE
#define BIND_sqlite3_result_text16_FUNCTION FALSE
#define BIND_sqlite3_result_text16be_FUNCTION FALSE
#define BIND_sqlite3_result_text16le_FUNCTION FALSE
#define BIND_sqlite3_result_text64_FUNCTION FALSE
#define BIND_sqlite3_result_value_FUNCTION TRUE
#define BIND_sqlite3_result_zeroblob_FUNCTION TRUE
#define BIND_sqlite3_rollback_hook_FUNCTION FALSE
#define BIND_sqlite3_rtree_geometry_callback_FUNCTION FALSE
#define BIND_sqlite3_rtree_query_callback_FUNCTION FALSE
#define BIND_sqlite3_set_authorizer_FUNCTION FALSE
#define BIND_sqlite3_set_auxdata_FUNCTION FALSE
#define BIND_sqlite3_shutdown_FUNCTION TRUE
#define BIND_sqlite3_sleep_FUNCTION TRUE
#define BIND_sqlite3_snprintf_FUNCTION FALSE
#define BIND_sqlite3_soft_heap_limit_FUNCTION TRUE
#define BIND_sqlite3_soft_heap_limit64_FUNCTION TRUE
#define BIND_sqlite3_sourceid_FUNCTION TRUE
#define BIND_sqlite3_sql_FUNCTION TRUE
#define BIND_sqlite3_status_FUNCTION FALSE
#define BIND_sqlite3_status64_FUNCTION FALSE
#define BIND_sqlite3_step_FUNCTION TRUE
#define BIND_sqlite3_stmt_busy_FUNCTION TRUE
#define BIND_sqlite3_stmt_readonly_FUNCTION TRUE
#define BIND_sqlite3_stmt_status_FUNCTION TRUE
#define BIND_sqlite3_strglob_FUNCTION TRUE
#define BIND_sqlite3_stricmp_FUNCTION TRUE
#define BIND_sqlite3_strnicmp_FUNCTION TRUE
#define BIND_sqlite3_table_column_metadata_FUNCTION FALSE
#define BIND_sqlite3_test_control_FUNCTION TRUE
#define BIND_sqlite3_thread_cleanup_FUNCTION TRUE
#define BIND_sqlite3_threadsafe_FUNCTION TRUE
#define BIND_sqlite3_total_changes_FUNCTION TRUE
#define BIND_sqlite3_trace_FUNCTION FALSE
#define BIND_sqlite3_transfer_bindings_FUNCTION TRUE
#define BIND_sqlite3_unlock_notify_FUNCTION FALSE
#define BIND_sqlite3_update_hook_FUNCTION FALSE
#define BIND_sqlite3_uri_boolean_FUNCTION TRUE
#define BIND_sqlite3_uri_int64_FUNCTION TRUE
#define BIND_sqlite3_uri_parameter_FUNCTION TRUE
#define BIND_sqlite3_user_data_FUNCTION FALSE
#define BIND_sqlite3_value_blob_FUNCTION FALSE
#define BIND_sqlite3_value_bytes_FUNCTION TRUE
#define BIND_sqlite3_value_bytes16_FUNCTION TRUE
#define BIND_sqlite3_value_double_FUNCTION TRUE
#define BIND_sqlite3_value_int_FUNCTION TRUE
#define BIND_sqlite3_value_int64_FUNCTION TRUE
#define BIND_sqlite3_value_numeric_type_FUNCTION TRUE
#define BIND_sqlite3_value_text_FUNCTION FALSE
#define BIND_sqlite3_value_text16_FUNCTION FALSE
#define BIND_sqlite3_value_text16be_FUNCTION FALSE
#define BIND_sqlite3_value_text16le_FUNCTION FALSE
#define BIND_sqlite3_value_type_FUNCTION TRUE
#define BIND_sqlite3_vfs_find_FUNCTION TRUE
#define BIND_sqlite3_vfs_register_FUNCTION TRUE
#define BIND_sqlite3_vfs_unregister_FUNCTION TRUE
#define BIND_sqlite3_vmprintf_FUNCTION FALSE
#define BIND_sqlite3_vsnprintf_FUNCTION FALSE
#define BIND_sqlite3_vtab_config_FUNCTION TRUE
#define BIND_sqlite3_vtab_on_conflict_FUNCTION TRUE
#define BIND_sqlite3_wal_autocheckpoint_FUNCTION TRUE
#define BIND_sqlite3_wal_checkpoint_FUNCTION TRUE
#define BIND_sqlite3_wal_checkpoint_v2_FUNCTION FALSE
#define BIND_sqlite3_wal_hook_FUNCTION FALSE
#endif
