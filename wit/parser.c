#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 320
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 122
#define ALIAS_COUNT 0
#define TOKEN_COUNT 57
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 25
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 38

enum ts_symbol_identifiers {
  anon_sym_package = 1,
  anon_sym_COLON = 2,
  anon_sym_SLASH = 3,
  anon_sym_AT = 4,
  anon_sym_SEMI = 5,
  anon_sym_use = 6,
  anon_sym_as = 7,
  sym_id = 8,
  sym_valid_semver = 9,
  anon_sym_world = 10,
  anon_sym_LBRACE = 11,
  anon_sym_RBRACE = 12,
  anon_sym_export = 13,
  anon_sym_import = 14,
  anon_sym_interface = 15,
  anon_sym_include = 16,
  anon_sym_with = 17,
  anon_sym_COMMA = 18,
  anon_sym_func = 19,
  anon_sym_LPAREN = 20,
  anon_sym_RPAREN = 21,
  anon_sym_DASH_GT = 22,
  anon_sym_DOT = 23,
  anon_sym_type = 24,
  anon_sym_EQ = 25,
  anon_sym_record = 26,
  anon_sym_flags = 27,
  anon_sym_variant = 28,
  anon_sym_enum = 29,
  anon_sym_resource = 30,
  anon_sym_static = 31,
  anon_sym_constructor = 32,
  anon_sym_u8 = 33,
  anon_sym_u16 = 34,
  anon_sym_u32 = 35,
  anon_sym_u64 = 36,
  anon_sym_s8 = 37,
  anon_sym_s16 = 38,
  anon_sym_s32 = 39,
  anon_sym_s64 = 40,
  anon_sym_f32 = 41,
  anon_sym_f64 = 42,
  anon_sym_float32 = 43,
  anon_sym_float64 = 44,
  anon_sym_char = 45,
  anon_sym_bool = 46,
  anon_sym_string = 47,
  anon_sym_tuple = 48,
  anon_sym_LT = 49,
  anon_sym_GT = 50,
  anon_sym_list = 51,
  anon_sym_option = 52,
  anon_sym_result = 53,
  anon_sym__ = 54,
  anon_sym_borrow = 55,
  sym_comment = 56,
  sym_source_file = 57,
  sym_package_decl = 58,
  sym_toplevel_use_item = 59,
  sym_use_path = 60,
  sym_world_item = 61,
  sym_world_body = 62,
  sym_world_items = 63,
  sym_export_item = 64,
  sym_import_item = 65,
  sym_extern_type = 66,
  sym_include_item = 67,
  sym_include_names_body = 68,
  sym_include_names_list = 69,
  sym_include_names_item = 70,
  sym_interface_item = 71,
  sym_interface_body = 72,
  sym_interface_items = 73,
  sym_typedef_item = 74,
  sym_func_item = 75,
  sym_func_type = 76,
  sym_param_list = 77,
  sym_result_list = 78,
  sym_named_type_list = 79,
  sym_named_type = 80,
  sym_use_item = 81,
  sym_use_names_list = 82,
  sym_use_names_item = 83,
  sym_type_item = 84,
  sym_record_item = 85,
  sym_record_body = 86,
  sym_record_field = 87,
  sym_flags_items = 88,
  sym_flags_body = 89,
  sym_variant_items = 90,
  sym_variant_body = 91,
  sym_variant_cases = 92,
  sym_variant_case = 93,
  sym_enum_items = 94,
  sym_enum_body = 95,
  sym_enum_cases = 96,
  sym_enum_case = 97,
  sym_resource_item = 98,
  sym_resource_body = 99,
  sym_resource_method = 100,
  sym_ty = 101,
  sym_tuple = 102,
  sym_tuple_list = 103,
  sym_list = 104,
  sym_option = 105,
  sym_result = 106,
  sym_handle = 107,
  aux_sym_source_file_repeat1 = 108,
  aux_sym_package_decl_repeat1 = 109,
  aux_sym_package_decl_repeat2 = 110,
  aux_sym_world_body_repeat1 = 111,
  aux_sym_include_names_list_repeat1 = 112,
  aux_sym_interface_body_repeat1 = 113,
  aux_sym_named_type_list_repeat1 = 114,
  aux_sym_use_names_list_repeat1 = 115,
  aux_sym_record_body_repeat1 = 116,
  aux_sym_flags_body_repeat1 = 117,
  aux_sym_variant_cases_repeat1 = 118,
  aux_sym_enum_cases_repeat1 = 119,
  aux_sym_resource_body_repeat1 = 120,
  aux_sym_tuple_list_repeat1 = 121,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_package] = "package",
  [anon_sym_COLON] = ":",
  [anon_sym_SLASH] = "/",
  [anon_sym_AT] = "@",
  [anon_sym_SEMI] = ";",
  [anon_sym_use] = "use",
  [anon_sym_as] = "as",
  [sym_id] = "id",
  [sym_valid_semver] = "valid_semver",
  [anon_sym_world] = "world",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_export] = "export",
  [anon_sym_import] = "import",
  [anon_sym_interface] = "interface",
  [anon_sym_include] = "include",
  [anon_sym_with] = "with",
  [anon_sym_COMMA] = ",",
  [anon_sym_func] = "func",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_DOT] = ".",
  [anon_sym_type] = "type",
  [anon_sym_EQ] = "=",
  [anon_sym_record] = "record",
  [anon_sym_flags] = "flags",
  [anon_sym_variant] = "variant",
  [anon_sym_enum] = "enum",
  [anon_sym_resource] = "resource",
  [anon_sym_static] = "static",
  [anon_sym_constructor] = "constructor",
  [anon_sym_u8] = "u8",
  [anon_sym_u16] = "u16",
  [anon_sym_u32] = "u32",
  [anon_sym_u64] = "u64",
  [anon_sym_s8] = "s8",
  [anon_sym_s16] = "s16",
  [anon_sym_s32] = "s32",
  [anon_sym_s64] = "s64",
  [anon_sym_f32] = "f32",
  [anon_sym_f64] = "f64",
  [anon_sym_float32] = "float32",
  [anon_sym_float64] = "float64",
  [anon_sym_char] = "char",
  [anon_sym_bool] = "bool",
  [anon_sym_string] = "string",
  [anon_sym_tuple] = "tuple",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_list] = "list",
  [anon_sym_option] = "option",
  [anon_sym_result] = "result",
  [anon_sym__] = "_",
  [anon_sym_borrow] = "borrow",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_package_decl] = "package_decl",
  [sym_toplevel_use_item] = "toplevel_use_item",
  [sym_use_path] = "use_path",
  [sym_world_item] = "world_item",
  [sym_world_body] = "world_body",
  [sym_world_items] = "world_items",
  [sym_export_item] = "export_item",
  [sym_import_item] = "import_item",
  [sym_extern_type] = "extern_type",
  [sym_include_item] = "include_item",
  [sym_include_names_body] = "include_names_body",
  [sym_include_names_list] = "include_names_list",
  [sym_include_names_item] = "include_names_item",
  [sym_interface_item] = "interface_item",
  [sym_interface_body] = "interface_body",
  [sym_interface_items] = "interface_items",
  [sym_typedef_item] = "typedef_item",
  [sym_func_item] = "func_item",
  [sym_func_type] = "func_type",
  [sym_param_list] = "param_list",
  [sym_result_list] = "result_list",
  [sym_named_type_list] = "named_type_list",
  [sym_named_type] = "named_type",
  [sym_use_item] = "use_item",
  [sym_use_names_list] = "use_names_list",
  [sym_use_names_item] = "use_names_item",
  [sym_type_item] = "type_item",
  [sym_record_item] = "record_item",
  [sym_record_body] = "record_body",
  [sym_record_field] = "record_field",
  [sym_flags_items] = "flags_items",
  [sym_flags_body] = "flags_body",
  [sym_variant_items] = "variant_items",
  [sym_variant_body] = "variant_body",
  [sym_variant_cases] = "variant_cases",
  [sym_variant_case] = "variant_case",
  [sym_enum_items] = "enum_items",
  [sym_enum_body] = "enum_body",
  [sym_enum_cases] = "enum_cases",
  [sym_enum_case] = "enum_case",
  [sym_resource_item] = "resource_item",
  [sym_resource_body] = "resource_body",
  [sym_resource_method] = "resource_method",
  [sym_ty] = "ty",
  [sym_tuple] = "tuple",
  [sym_tuple_list] = "tuple_list",
  [sym_list] = "list",
  [sym_option] = "option",
  [sym_result] = "result",
  [sym_handle] = "handle",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_package_decl_repeat1] = "package_decl_repeat1",
  [aux_sym_package_decl_repeat2] = "package_decl_repeat2",
  [aux_sym_world_body_repeat1] = "world_body_repeat1",
  [aux_sym_include_names_list_repeat1] = "include_names_list_repeat1",
  [aux_sym_interface_body_repeat1] = "interface_body_repeat1",
  [aux_sym_named_type_list_repeat1] = "named_type_list_repeat1",
  [aux_sym_use_names_list_repeat1] = "use_names_list_repeat1",
  [aux_sym_record_body_repeat1] = "record_body_repeat1",
  [aux_sym_flags_body_repeat1] = "flags_body_repeat1",
  [aux_sym_variant_cases_repeat1] = "variant_cases_repeat1",
  [aux_sym_enum_cases_repeat1] = "enum_cases_repeat1",
  [aux_sym_resource_body_repeat1] = "resource_body_repeat1",
  [aux_sym_tuple_list_repeat1] = "tuple_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_package] = anon_sym_package,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_use] = anon_sym_use,
  [anon_sym_as] = anon_sym_as,
  [sym_id] = sym_id,
  [sym_valid_semver] = sym_valid_semver,
  [anon_sym_world] = anon_sym_world,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_export] = anon_sym_export,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_interface] = anon_sym_interface,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_with] = anon_sym_with,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_func] = anon_sym_func,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_record] = anon_sym_record,
  [anon_sym_flags] = anon_sym_flags,
  [anon_sym_variant] = anon_sym_variant,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_resource] = anon_sym_resource,
  [anon_sym_static] = anon_sym_static,
  [anon_sym_constructor] = anon_sym_constructor,
  [anon_sym_u8] = anon_sym_u8,
  [anon_sym_u16] = anon_sym_u16,
  [anon_sym_u32] = anon_sym_u32,
  [anon_sym_u64] = anon_sym_u64,
  [anon_sym_s8] = anon_sym_s8,
  [anon_sym_s16] = anon_sym_s16,
  [anon_sym_s32] = anon_sym_s32,
  [anon_sym_s64] = anon_sym_s64,
  [anon_sym_f32] = anon_sym_f32,
  [anon_sym_f64] = anon_sym_f64,
  [anon_sym_float32] = anon_sym_float32,
  [anon_sym_float64] = anon_sym_float64,
  [anon_sym_char] = anon_sym_char,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_tuple] = anon_sym_tuple,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_list] = anon_sym_list,
  [anon_sym_option] = anon_sym_option,
  [anon_sym_result] = anon_sym_result,
  [anon_sym__] = anon_sym__,
  [anon_sym_borrow] = anon_sym_borrow,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_package_decl] = sym_package_decl,
  [sym_toplevel_use_item] = sym_toplevel_use_item,
  [sym_use_path] = sym_use_path,
  [sym_world_item] = sym_world_item,
  [sym_world_body] = sym_world_body,
  [sym_world_items] = sym_world_items,
  [sym_export_item] = sym_export_item,
  [sym_import_item] = sym_import_item,
  [sym_extern_type] = sym_extern_type,
  [sym_include_item] = sym_include_item,
  [sym_include_names_body] = sym_include_names_body,
  [sym_include_names_list] = sym_include_names_list,
  [sym_include_names_item] = sym_include_names_item,
  [sym_interface_item] = sym_interface_item,
  [sym_interface_body] = sym_interface_body,
  [sym_interface_items] = sym_interface_items,
  [sym_typedef_item] = sym_typedef_item,
  [sym_func_item] = sym_func_item,
  [sym_func_type] = sym_func_type,
  [sym_param_list] = sym_param_list,
  [sym_result_list] = sym_result_list,
  [sym_named_type_list] = sym_named_type_list,
  [sym_named_type] = sym_named_type,
  [sym_use_item] = sym_use_item,
  [sym_use_names_list] = sym_use_names_list,
  [sym_use_names_item] = sym_use_names_item,
  [sym_type_item] = sym_type_item,
  [sym_record_item] = sym_record_item,
  [sym_record_body] = sym_record_body,
  [sym_record_field] = sym_record_field,
  [sym_flags_items] = sym_flags_items,
  [sym_flags_body] = sym_flags_body,
  [sym_variant_items] = sym_variant_items,
  [sym_variant_body] = sym_variant_body,
  [sym_variant_cases] = sym_variant_cases,
  [sym_variant_case] = sym_variant_case,
  [sym_enum_items] = sym_enum_items,
  [sym_enum_body] = sym_enum_body,
  [sym_enum_cases] = sym_enum_cases,
  [sym_enum_case] = sym_enum_case,
  [sym_resource_item] = sym_resource_item,
  [sym_resource_body] = sym_resource_body,
  [sym_resource_method] = sym_resource_method,
  [sym_ty] = sym_ty,
  [sym_tuple] = sym_tuple,
  [sym_tuple_list] = sym_tuple_list,
  [sym_list] = sym_list,
  [sym_option] = sym_option,
  [sym_result] = sym_result,
  [sym_handle] = sym_handle,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_package_decl_repeat1] = aux_sym_package_decl_repeat1,
  [aux_sym_package_decl_repeat2] = aux_sym_package_decl_repeat2,
  [aux_sym_world_body_repeat1] = aux_sym_world_body_repeat1,
  [aux_sym_include_names_list_repeat1] = aux_sym_include_names_list_repeat1,
  [aux_sym_interface_body_repeat1] = aux_sym_interface_body_repeat1,
  [aux_sym_named_type_list_repeat1] = aux_sym_named_type_list_repeat1,
  [aux_sym_use_names_list_repeat1] = aux_sym_use_names_list_repeat1,
  [aux_sym_record_body_repeat1] = aux_sym_record_body_repeat1,
  [aux_sym_flags_body_repeat1] = aux_sym_flags_body_repeat1,
  [aux_sym_variant_cases_repeat1] = aux_sym_variant_cases_repeat1,
  [aux_sym_enum_cases_repeat1] = aux_sym_enum_cases_repeat1,
  [aux_sym_resource_body_repeat1] = aux_sym_resource_body_repeat1,
  [aux_sym_tuple_list_repeat1] = aux_sym_tuple_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_package] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_use] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [sym_id] = {
    .visible = true,
    .named = true,
  },
  [sym_valid_semver] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_world] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_export] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_interface] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_func] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_record] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_flags] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_variant] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_resource] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_static] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_constructor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_char] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tuple] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_list] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_option] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_result] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_borrow] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_package_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_toplevel_use_item] = {
    .visible = true,
    .named = true,
  },
  [sym_use_path] = {
    .visible = true,
    .named = true,
  },
  [sym_world_item] = {
    .visible = true,
    .named = true,
  },
  [sym_world_body] = {
    .visible = true,
    .named = true,
  },
  [sym_world_items] = {
    .visible = true,
    .named = true,
  },
  [sym_export_item] = {
    .visible = true,
    .named = true,
  },
  [sym_import_item] = {
    .visible = true,
    .named = true,
  },
  [sym_extern_type] = {
    .visible = true,
    .named = true,
  },
  [sym_include_item] = {
    .visible = true,
    .named = true,
  },
  [sym_include_names_body] = {
    .visible = true,
    .named = true,
  },
  [sym_include_names_list] = {
    .visible = true,
    .named = true,
  },
  [sym_include_names_item] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_item] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_body] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_items] = {
    .visible = true,
    .named = true,
  },
  [sym_typedef_item] = {
    .visible = true,
    .named = true,
  },
  [sym_func_item] = {
    .visible = true,
    .named = true,
  },
  [sym_func_type] = {
    .visible = true,
    .named = true,
  },
  [sym_param_list] = {
    .visible = true,
    .named = true,
  },
  [sym_result_list] = {
    .visible = true,
    .named = true,
  },
  [sym_named_type_list] = {
    .visible = true,
    .named = true,
  },
  [sym_named_type] = {
    .visible = true,
    .named = true,
  },
  [sym_use_item] = {
    .visible = true,
    .named = true,
  },
  [sym_use_names_list] = {
    .visible = true,
    .named = true,
  },
  [sym_use_names_item] = {
    .visible = true,
    .named = true,
  },
  [sym_type_item] = {
    .visible = true,
    .named = true,
  },
  [sym_record_item] = {
    .visible = true,
    .named = true,
  },
  [sym_record_body] = {
    .visible = true,
    .named = true,
  },
  [sym_record_field] = {
    .visible = true,
    .named = true,
  },
  [sym_flags_items] = {
    .visible = true,
    .named = true,
  },
  [sym_flags_body] = {
    .visible = true,
    .named = true,
  },
  [sym_variant_items] = {
    .visible = true,
    .named = true,
  },
  [sym_variant_body] = {
    .visible = true,
    .named = true,
  },
  [sym_variant_cases] = {
    .visible = true,
    .named = true,
  },
  [sym_variant_case] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_items] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_body] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_cases] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_case] = {
    .visible = true,
    .named = true,
  },
  [sym_resource_item] = {
    .visible = true,
    .named = true,
  },
  [sym_resource_body] = {
    .visible = true,
    .named = true,
  },
  [sym_resource_method] = {
    .visible = true,
    .named = true,
  },
  [sym_ty] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_list] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_option] = {
    .visible = true,
    .named = true,
  },
  [sym_result] = {
    .visible = true,
    .named = true,
  },
  [sym_handle] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_package_decl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_package_decl_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_world_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_include_names_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interface_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_named_type_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_use_names_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flags_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variant_cases_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_cases_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_resource_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tuple_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_alias = 1,
  field_body = 2,
  field_export_item = 3,
  field_flags_fields = 4,
  field_func = 5,
  field_import_item = 6,
  field_include_item = 7,
  field_include_names_body = 8,
  field_include_names_item = 9,
  field_include_names_list = 10,
  field_interface_items = 11,
  field_name = 12,
  field_param_list = 13,
  field_path = 14,
  field_record_fields = 15,
  field_resource_body = 16,
  field_result_list = 17,
  field_type = 18,
  field_typedef = 19,
  field_typedef_item = 20,
  field_use = 21,
  field_use_item = 22,
  field_use_names_item = 23,
  field_use_path = 24,
  field_world_items = 25,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_body] = "body",
  [field_export_item] = "export_item",
  [field_flags_fields] = "flags_fields",
  [field_func] = "func",
  [field_import_item] = "import_item",
  [field_include_item] = "include_item",
  [field_include_names_body] = "include_names_body",
  [field_include_names_item] = "include_names_item",
  [field_include_names_list] = "include_names_list",
  [field_interface_items] = "interface_items",
  [field_name] = "name",
  [field_param_list] = "param_list",
  [field_path] = "path",
  [field_record_fields] = "record_fields",
  [field_resource_body] = "resource_body",
  [field_result_list] = "result_list",
  [field_type] = "type",
  [field_typedef] = "typedef",
  [field_typedef_item] = "typedef_item",
  [field_use] = "use",
  [field_use_item] = "use_item",
  [field_use_names_item] = "use_names_item",
  [field_use_path] = "use_path",
  [field_world_items] = "world_items",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 1},
  [7] = {.index = 7, .length = 1},
  [8] = {.index = 8, .length = 1},
  [9] = {.index = 9, .length = 1},
  [10] = {.index = 10, .length = 1},
  [11] = {.index = 11, .length = 3},
  [12] = {.index = 14, .length = 1},
  [13] = {.index = 15, .length = 1},
  [14] = {.index = 16, .length = 1},
  [15] = {.index = 17, .length = 1},
  [16] = {.index = 18, .length = 2},
  [17] = {.index = 20, .length = 2},
  [18] = {.index = 22, .length = 1},
  [19] = {.index = 23, .length = 1},
  [20] = {.index = 24, .length = 1},
  [21] = {.index = 25, .length = 1},
  [22] = {.index = 26, .length = 2},
  [23] = {.index = 28, .length = 1},
  [24] = {.index = 29, .length = 1},
  [25] = {.index = 30, .length = 2},
  [26] = {.index = 32, .length = 2},
  [27] = {.index = 34, .length = 1},
  [28] = {.index = 35, .length = 2},
  [29] = {.index = 37, .length = 2},
  [30] = {.index = 39, .length = 2},
  [31] = {.index = 41, .length = 2},
  [32] = {.index = 43, .length = 1},
  [33] = {.index = 44, .length = 2},
  [34] = {.index = 46, .length = 1},
  [35] = {.index = 47, .length = 2},
  [36] = {.index = 49, .length = 3},
  [37] = {.index = 52, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_path, 1},
  [1] =
    {field_body, 2},
    {field_name, 1},
  [3] =
    {field_export_item, 0},
  [4] =
    {field_import_item, 0},
  [5] =
    {field_include_item, 0},
  [6] =
    {field_typedef_item, 0},
  [7] =
    {field_use_item, 0},
  [8] =
    {field_typedef, 0},
  [9] =
    {field_func, 0},
  [10] =
    {field_use, 0},
  [11] =
    {field_alias, 2},
    {field_alias, 3},
    {field_path, 1},
  [14] =
    {field_name, 1},
  [15] =
    {field_world_items, 1},
  [16] =
    {field_interface_items, 1},
  [17] =
    {field_use_path, 1},
  [18] =
    {field_name, 1},
    {field_resource_body, 2},
  [20] =
    {field_include_names_body, 3},
    {field_use_path, 1},
  [22] =
    {field_name, 0},
  [23] =
    {field_param_list, 1},
  [24] =
    {field_use_names_item, 0},
  [25] =
    {field_include_names_item, 0},
  [26] =
    {field_alias, 1},
    {field_type, 3},
  [28] =
    {field_record_fields, 1},
  [29] =
    {field_flags_fields, 1},
  [30] =
    {field_param_list, 1},
    {field_result_list, 2},
  [32] =
    {field_use_names_item, 0},
    {field_use_names_item, 1, .inherited = true},
  [34] =
    {field_include_names_list, 1},
  [35] =
    {field_include_names_item, 0},
    {field_include_names_item, 1, .inherited = true},
  [37] =
    {field_name, 0},
    {field_type, 2},
  [39] =
    {field_record_fields, 1},
    {field_record_fields, 2},
  [41] =
    {field_flags_fields, 1},
    {field_flags_fields, 2},
  [43] =
    {field_use_names_item, 1},
  [44] =
    {field_use_names_item, 0, .inherited = true},
    {field_use_names_item, 1, .inherited = true},
  [46] =
    {field_include_names_item, 1},
  [47] =
    {field_include_names_item, 0, .inherited = true},
    {field_include_names_item, 1, .inherited = true},
  [49] =
    {field_record_fields, 1},
    {field_record_fields, 2},
    {field_record_fields, 3},
  [52] =
    {field_flags_fields, 1},
    {field_flags_fields, 2},
    {field_flags_fields, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 8,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 23,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 36,
  [61] = 27,
  [62] = 52,
  [63] = 63,
  [64] = 53,
  [65] = 54,
  [66] = 58,
  [67] = 37,
  [68] = 38,
  [69] = 69,
  [70] = 43,
  [71] = 71,
  [72] = 72,
  [73] = 44,
  [74] = 26,
  [75] = 51,
  [76] = 55,
  [77] = 56,
  [78] = 33,
  [79] = 29,
  [80] = 28,
  [81] = 34,
  [82] = 32,
  [83] = 31,
  [84] = 30,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 93,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 96,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 126,
  [149] = 149,
  [150] = 150,
  [151] = 128,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 133,
  [157] = 157,
  [158] = 150,
  [159] = 159,
  [160] = 135,
  [161] = 161,
  [162] = 146,
  [163] = 139,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 157,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 153,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 144,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 63,
  [190] = 130,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 201,
  [213] = 209,
  [214] = 214,
  [215] = 215,
  [216] = 196,
  [217] = 207,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 218,
  [228] = 228,
  [229] = 222,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 202,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 259,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 290,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 257,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 280,
  [304] = 304,
  [305] = 305,
  [306] = 263,
  [307] = 262,
  [308] = 261,
  [309] = 260,
  [310] = 310,
  [311] = 293,
  [312] = 312,
  [313] = 305,
  [314] = 265,
  [315] = 315,
  [316] = 264,
  [317] = 288,
  [318] = 251,
  [319] = 297,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(145);
      if (lookahead == '(') ADVANCE(267);
      if (lookahead == ')') ADVANCE(268);
      if (lookahead == ',') ADVANCE(264);
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == '.') ADVANCE(270);
      if (lookahead == '/') ADVANCE(148);
      if (lookahead == ':') ADVANCE(147);
      if (lookahead == ';') ADVANCE(150);
      if (lookahead == '<') ADVANCE(319);
      if (lookahead == '=') ADVANCE(273);
      if (lookahead == '>') ADVANCE(320);
      if (lookahead == '@') ADVANCE(149);
      if (lookahead == '\\') SKIP(144)
      if (lookahead == '_') ADVANCE(327);
      if (lookahead == 'a') ADVANCE(116);
      if (lookahead == 'b') ADVANCE(91);
      if (lookahead == 'c') ADVANCE(70);
      if (lookahead == 'e') ADVANCE(85);
      if (lookahead == 'f') ADVANCE(27);
      if (lookahead == 'i') ADVANCE(84);
      if (lookahead == 'l') ADVANCE(71);
      if (lookahead == 'o') ADVANCE(100);
      if (lookahead == 'p') ADVANCE(36);
      if (lookahead == 'r') ADVANCE(56);
      if (lookahead == 's') ADVANCE(21);
      if (lookahead == 't') ADVANCE(133);
      if (lookahead == 'u') ADVANCE(22);
      if (lookahead == 'v') ADVANCE(37);
      if (lookahead == 'w') ADVANCE(72);
      if (lookahead == '{') ADVANCE(256);
      if (lookahead == '}') ADVANCE(257);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(11)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(13)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(14)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(14)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(15)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(12)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '%') ADVANCE(139);
      if (lookahead == '(') ADVANCE(267);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '>') ADVANCE(320);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == '_') ADVANCE(327);
      if (lookahead == 'b') ADVANCE(208);
      if (lookahead == 'c') ADVANCE(191);
      if (lookahead == 'f') ADVANCE(160);
      if (lookahead == 'l') ADVANCE(192);
      if (lookahead == 'o') ADVANCE(217);
      if (lookahead == 'r') ADVANCE(186);
      if (lookahead == 's') ADVANCE(154);
      if (lookahead == 't') ADVANCE(243);
      if (lookahead == 'u') ADVANCE(155);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(250);
      END_STATE();
    case 12:
      if (lookahead == '%') ADVANCE(139);
      if (lookahead == ')') ADVANCE(268);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == '}') ADVANCE(257);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(250);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 13:
      if (lookahead == '%') ADVANCE(139);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == ';') ADVANCE(150);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'e') ADVANCE(203);
      if (lookahead == 'f') ADVANCE(198);
      if (lookahead == 'r') ADVANCE(181);
      if (lookahead == 't') ADVANCE(249);
      if (lookahead == 'u') ADVANCE(232);
      if (lookahead == 'v') ADVANCE(172);
      if (lookahead == '{') ADVANCE(256);
      if (lookahead == '}') ADVANCE(257);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(250);
      END_STATE();
    case 14:
      if (lookahead == '%') ADVANCE(139);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'c') ADVANCE(215);
      if (lookahead == '}') ADVANCE(257);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(250);
      END_STATE();
    case 15:
      if (lookahead == '%') ADVANCE(139);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 'f') ADVANCE(247);
      if (lookahead == 'i') ADVANCE(206);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(250);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(18);
      if (lookahead == '/') ADVANCE(331);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '/') ADVANCE(330);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == '*') ADVANCE(17);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '1') ADVANCE(33);
      if (lookahead == '3') ADVANCE(24);
      if (lookahead == '6') ADVANCE(30);
      if (lookahead == '8') ADVANCE(295);
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 22:
      if (lookahead == '1') ADVANCE(34);
      if (lookahead == '3') ADVANCE(25);
      if (lookahead == '6') ADVANCE(31);
      if (lookahead == '8') ADVANCE(287);
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 23:
      if (lookahead == '2') ADVANCE(303);
      END_STATE();
    case 24:
      if (lookahead == '2') ADVANCE(299);
      END_STATE();
    case 25:
      if (lookahead == '2') ADVANCE(291);
      END_STATE();
    case 26:
      if (lookahead == '2') ADVANCE(307);
      END_STATE();
    case 27:
      if (lookahead == '3') ADVANCE(23);
      if (lookahead == '6') ADVANCE(29);
      if (lookahead == 'l') ADVANCE(38);
      if (lookahead == 'u') ADVANCE(87);
      END_STATE();
    case 28:
      if (lookahead == '3') ADVANCE(26);
      if (lookahead == '6') ADVANCE(32);
      END_STATE();
    case 29:
      if (lookahead == '4') ADVANCE(305);
      END_STATE();
    case 30:
      if (lookahead == '4') ADVANCE(301);
      END_STATE();
    case 31:
      if (lookahead == '4') ADVANCE(293);
      END_STATE();
    case 32:
      if (lookahead == '4') ADVANCE(309);
      END_STATE();
    case 33:
      if (lookahead == '6') ADVANCE(297);
      END_STATE();
    case 34:
      if (lookahead == '6') ADVANCE(289);
      END_STATE();
    case 35:
      if (lookahead == '>') ADVANCE(269);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(110);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(67);
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(128);
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(77);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(265);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(284);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(80);
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(62);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(63);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(130);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(97);
      if (lookahead == 's') ADVANCE(94);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(255);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(274);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(60);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(271);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(317);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(282);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 65:
      if (lookahead == 'f') ADVANCE(44);
      END_STATE();
    case 66:
      if (lookahead == 'g') ADVANCE(315);
      END_STATE();
    case 67:
      if (lookahead == 'g') ADVANCE(117);
      END_STATE();
    case 68:
      if (lookahead == 'g') ADVANCE(61);
      END_STATE();
    case 69:
      if (lookahead == 'h') ADVANCE(263);
      END_STATE();
    case 70:
      if (lookahead == 'h') ADVANCE(40);
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(120);
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 77:
      if (lookahead == 'k') ADVANCE(39);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(313);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(132);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(125);
      END_STATE();
    case 83:
      if (lookahead == 'm') ADVANCE(280);
      END_STATE();
    case 84:
      if (lookahead == 'm') ADVANCE(104);
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(131);
      if (lookahead == 'x') ADVANCE(101);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(323);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(78);
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(135);
      if (lookahead == 'u') ADVANCE(82);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 100:
      if (lookahead == 'p') ADVANCE(127);
      END_STATE();
    case 101:
      if (lookahead == 'p') ADVANCE(96);
      END_STATE();
    case 102:
      if (lookahead == 'p') ADVANCE(81);
      END_STATE();
    case 103:
      if (lookahead == 'p') ADVANCE(58);
      END_STATE();
    case 104:
      if (lookahead == 'p') ADVANCE(99);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(311);
      END_STATE();
    case 106:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(285);
      END_STATE();
    case 108:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 116:
      if (lookahead == 's') ADVANCE(153);
      END_STATE();
    case 117:
      if (lookahead == 's') ADVANCE(276);
      END_STATE();
    case 118:
      if (lookahead == 's') ADVANCE(121);
      END_STATE();
    case 119:
      if (lookahead == 's') ADVANCE(129);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(321);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(258);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(259);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(325);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(278);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 130:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 131:
      if (lookahead == 'u') ADVANCE(83);
      END_STATE();
    case 132:
      if (lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 133:
      if (lookahead == 'u') ADVANCE(102);
      if (lookahead == 'y') ADVANCE(103);
      END_STATE();
    case 134:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 135:
      if (lookahead == 'u') ADVANCE(112);
      END_STATE();
    case 136:
      if (lookahead == 'w') ADVANCE(328);
      END_STATE();
    case 137:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(252);
      END_STATE();
    case 138:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 139:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(250);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 140:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 141:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 142:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(331);
      if (lookahead == '\r') ADVANCE(333);
      if (lookahead == '\\') ADVANCE(332);
      END_STATE();
    case 143:
      if (eof) ADVANCE(145);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 144:
      if (eof) ADVANCE(145);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(143)
      END_STATE();
    case 145:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(18);
      if (lookahead == '/') ADVANCE(331);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_use);
      if (lookahead == '-') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '1') ADVANCE(166);
      if (lookahead == '3') ADVANCE(157);
      if (lookahead == '6') ADVANCE(163);
      if (lookahead == '8') ADVANCE(296);
      if (lookahead == 't') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '1') ADVANCE(167);
      if (lookahead == '3') ADVANCE(158);
      if (lookahead == '6') ADVANCE(164);
      if (lookahead == '8') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '2') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '2') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '2') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '2') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '3') ADVANCE(156);
      if (lookahead == '6') ADVANCE(162);
      if (lookahead == 'l') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '3') ADVANCE(159);
      if (lookahead == '6') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '4') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '4') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '4') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '4') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '6') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '6') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'a') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'a') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'a') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'a') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'a') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'a') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'c') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'c') ADVANCE(214);
      if (lookahead == 's') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'c') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'c') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'c') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'd') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'e') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'e') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'e') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'e') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'e') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'e') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'e') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'e') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'f') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'g') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'g') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'h') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'i') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'i') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'i') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'i') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'l') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'l') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'l') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'l') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'm') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'n') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'n') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'n') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'n') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'n') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'n') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'n') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'o') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'o') ADVANCE(196);
      if (lookahead == 'r') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'o') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'o') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'o') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'o') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'o') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'o') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'o') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'p') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'p') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'p') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'r') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'r') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'r') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'r') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'r') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'r') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'r') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'r') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'r') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 's') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 's') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 's') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 's') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 's') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 't') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 't') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 't') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 't') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 't') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 't') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 't') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 't') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'u') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'u') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'u') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'u') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'u') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'u') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'w') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'y') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_valid_semver);
      if (lookahead == '+') ADVANCE(140);
      if (lookahead == '-') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(252);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_valid_semver);
      if (lookahead == '+') ADVANCE(140);
      if (lookahead == '.') ADVANCE(141);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_valid_semver);
      if (lookahead == '.') ADVANCE(140);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_world);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_interface);
      if (lookahead == '-') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_func);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_func);
      if (lookahead == '-') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '-') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_record);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_record);
      if (lookahead == '-') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_flags);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_flags);
      if (lookahead == '-') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_variant);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_variant);
      if (lookahead == '-') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_enum);
      if (lookahead == '-') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_resource);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_resource);
      if (lookahead == '-') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_constructor);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_constructor);
      if (lookahead == '-') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_u8);
      if (lookahead == '-') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_u16);
      if (lookahead == '-') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_u32);
      if (lookahead == '-') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_u64);
      if (lookahead == '-') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_s8);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_s8);
      if (lookahead == '-') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_s16);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_s16);
      if (lookahead == '-') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_s32);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_s32);
      if (lookahead == '-') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_s64);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_s64);
      if (lookahead == '-') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_f32);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_f32);
      if (lookahead == '-') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_f64);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_f64);
      if (lookahead == '-') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_float32);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_float32);
      if (lookahead == '-') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_float64);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_float64);
      if (lookahead == '-') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_char);
      if (lookahead == '-') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '-') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_string);
      if (lookahead == '-') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_tuple);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_tuple);
      if (lookahead == '-') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_list);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_list);
      if (lookahead == '-') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_option);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_option);
      if (lookahead == '-') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_result);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_result);
      if (lookahead == '-') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_borrow);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_borrow);
      if (lookahead == '-') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(331);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(331);
      if (lookahead == '\r') ADVANCE(333);
      if (lookahead == '\\') ADVANCE(332);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(331);
      if (lookahead == '\\') ADVANCE(142);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 11},
  [3] = {.lex_state = 11},
  [4] = {.lex_state = 11},
  [5] = {.lex_state = 11},
  [6] = {.lex_state = 11},
  [7] = {.lex_state = 11},
  [8] = {.lex_state = 11},
  [9] = {.lex_state = 11},
  [10] = {.lex_state = 11},
  [11] = {.lex_state = 11},
  [12] = {.lex_state = 11},
  [13] = {.lex_state = 11},
  [14] = {.lex_state = 11},
  [15] = {.lex_state = 11},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 13},
  [20] = {.lex_state = 13},
  [21] = {.lex_state = 13},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 13},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 13},
  [61] = {.lex_state = 13},
  [62] = {.lex_state = 13},
  [63] = {.lex_state = 13},
  [64] = {.lex_state = 13},
  [65] = {.lex_state = 13},
  [66] = {.lex_state = 13},
  [67] = {.lex_state = 13},
  [68] = {.lex_state = 13},
  [69] = {.lex_state = 13},
  [70] = {.lex_state = 13},
  [71] = {.lex_state = 13},
  [72] = {.lex_state = 13},
  [73] = {.lex_state = 13},
  [74] = {.lex_state = 13},
  [75] = {.lex_state = 13},
  [76] = {.lex_state = 13},
  [77] = {.lex_state = 13},
  [78] = {.lex_state = 13},
  [79] = {.lex_state = 13},
  [80] = {.lex_state = 13},
  [81] = {.lex_state = 13},
  [82] = {.lex_state = 13},
  [83] = {.lex_state = 13},
  [84] = {.lex_state = 13},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 14},
  [93] = {.lex_state = 14},
  [94] = {.lex_state = 14},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 14},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 14},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 15},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 15},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 12},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 12},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 12},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 12},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 12},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 12},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 12},
  [138] = {.lex_state = 14},
  [139] = {.lex_state = 12},
  [140] = {.lex_state = 12},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 12},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 12},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 12},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 12},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 12},
  [157] = {.lex_state = 12},
  [158] = {.lex_state = 12},
  [159] = {.lex_state = 12},
  [160] = {.lex_state = 12},
  [161] = {.lex_state = 12},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 12},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 12},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 12},
  [168] = {.lex_state = 12},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 12},
  [172] = {.lex_state = 14},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 12},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 12},
  [179] = {.lex_state = 12},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 12},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 14},
  [185] = {.lex_state = 12},
  [186] = {.lex_state = 12},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 14},
  [190] = {.lex_state = 12},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 12},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 12},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 12},
  [203] = {.lex_state = 12},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 12},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 12},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 12},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 12},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 12},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 12},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 12},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 12},
  [235] = {.lex_state = 12},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 12},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 12},
  [241] = {.lex_state = 12},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 12},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 12},
  [260] = {.lex_state = 12},
  [261] = {.lex_state = 12},
  [262] = {.lex_state = 12},
  [263] = {.lex_state = 12},
  [264] = {.lex_state = 12},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 12},
  [274] = {.lex_state = 12},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 12},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 12},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 12},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 12},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 12},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 12},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 12},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 12},
  [307] = {.lex_state = 12},
  [308] = {.lex_state = 12},
  [309] = {.lex_state = 12},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 12},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_package] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_use] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [sym_valid_semver] = ACTIONS(1),
    [anon_sym_world] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_export] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_interface] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_func] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_record] = ACTIONS(1),
    [anon_sym_flags] = ACTIONS(1),
    [anon_sym_variant] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_resource] = ACTIONS(1),
    [anon_sym_static] = ACTIONS(1),
    [anon_sym_constructor] = ACTIONS(1),
    [anon_sym_u8] = ACTIONS(1),
    [anon_sym_u16] = ACTIONS(1),
    [anon_sym_u32] = ACTIONS(1),
    [anon_sym_u64] = ACTIONS(1),
    [anon_sym_s8] = ACTIONS(1),
    [anon_sym_s16] = ACTIONS(1),
    [anon_sym_s32] = ACTIONS(1),
    [anon_sym_s64] = ACTIONS(1),
    [anon_sym_f32] = ACTIONS(1),
    [anon_sym_f64] = ACTIONS(1),
    [anon_sym_float32] = ACTIONS(1),
    [anon_sym_float64] = ACTIONS(1),
    [anon_sym_char] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_tuple] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_list] = ACTIONS(1),
    [anon_sym_option] = ACTIONS(1),
    [anon_sym_result] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_borrow] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(283),
    [sym_package_decl] = STATE(85),
    [sym_toplevel_use_item] = STATE(86),
    [sym_world_item] = STATE(86),
    [sym_interface_item] = STATE(86),
    [aux_sym_source_file_repeat1] = STATE(86),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_package] = ACTIONS(7),
    [anon_sym_use] = ACTIONS(9),
    [anon_sym_world] = ACTIONS(11),
    [anon_sym_interface] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_id,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_tuple,
    ACTIONS(23), 1,
      anon_sym_list,
    ACTIONS(25), 1,
      anon_sym_option,
    ACTIONS(27), 1,
      anon_sym_result,
    ACTIONS(29), 1,
      anon_sym_borrow,
    STATE(266), 1,
      sym_ty,
    STATE(103), 5,
      sym_tuple,
      sym_list,
      sym_option,
      sym_result,
      sym_handle,
    ACTIONS(19), 15,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_string,
  [52] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_id,
    ACTIONS(21), 1,
      anon_sym_tuple,
    ACTIONS(23), 1,
      anon_sym_list,
    ACTIONS(25), 1,
      anon_sym_option,
    ACTIONS(27), 1,
      anon_sym_result,
    ACTIONS(29), 1,
      anon_sym_borrow,
    STATE(188), 1,
      sym_ty,
    STATE(278), 1,
      sym_tuple_list,
    STATE(103), 5,
      sym_tuple,
      sym_list,
      sym_option,
      sym_result,
      sym_handle,
    ACTIONS(19), 15,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_string,
  [104] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_id,
    ACTIONS(21), 1,
      anon_sym_tuple,
    ACTIONS(23), 1,
      anon_sym_list,
    ACTIONS(25), 1,
      anon_sym_option,
    ACTIONS(27), 1,
      anon_sym_result,
    ACTIONS(29), 1,
      anon_sym_borrow,
    ACTIONS(31), 1,
      anon_sym_GT,
    STATE(242), 1,
      sym_ty,
    STATE(103), 5,
      sym_tuple,
      sym_list,
      sym_option,
      sym_result,
      sym_handle,
    ACTIONS(19), 15,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_string,
  [156] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_id,
    ACTIONS(21), 1,
      anon_sym_tuple,
    ACTIONS(23), 1,
      anon_sym_list,
    ACTIONS(25), 1,
      anon_sym_option,
    ACTIONS(27), 1,
      anon_sym_result,
    ACTIONS(29), 1,
      anon_sym_borrow,
    ACTIONS(33), 1,
      anon_sym__,
    STATE(193), 1,
      sym_ty,
    STATE(103), 5,
      sym_tuple,
      sym_list,
      sym_option,
      sym_result,
      sym_handle,
    ACTIONS(19), 15,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_string,
  [208] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_id,
    ACTIONS(21), 1,
      anon_sym_tuple,
    ACTIONS(23), 1,
      anon_sym_list,
    ACTIONS(25), 1,
      anon_sym_option,
    ACTIONS(27), 1,
      anon_sym_result,
    ACTIONS(29), 1,
      anon_sym_borrow,
    ACTIONS(35), 1,
      anon_sym_GT,
    STATE(242), 1,
      sym_ty,
    STATE(103), 5,
      sym_tuple,
      sym_list,
      sym_option,
      sym_result,
      sym_handle,
    ACTIONS(19), 15,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_string,
  [260] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_id,
    ACTIONS(21), 1,
      anon_sym_tuple,
    ACTIONS(23), 1,
      anon_sym_list,
    ACTIONS(25), 1,
      anon_sym_option,
    ACTIONS(27), 1,
      anon_sym_result,
    ACTIONS(29), 1,
      anon_sym_borrow,
    STATE(236), 1,
      sym_ty,
    STATE(103), 5,
      sym_tuple,
      sym_list,
      sym_option,
      sym_result,
      sym_handle,
    ACTIONS(19), 15,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_string,
  [309] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_id,
    ACTIONS(21), 1,
      anon_sym_tuple,
    ACTIONS(23), 1,
      anon_sym_list,
    ACTIONS(25), 1,
      anon_sym_option,
    ACTIONS(27), 1,
      anon_sym_result,
    ACTIONS(29), 1,
      anon_sym_borrow,
    STATE(311), 1,
      sym_ty,
    STATE(103), 5,
      sym_tuple,
      sym_list,
      sym_option,
      sym_result,
      sym_handle,
    ACTIONS(19), 15,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_string,
  [358] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_id,
    ACTIONS(21), 1,
      anon_sym_tuple,
    ACTIONS(23), 1,
      anon_sym_list,
    ACTIONS(25), 1,
      anon_sym_option,
    ACTIONS(27), 1,
      anon_sym_result,
    ACTIONS(29), 1,
      anon_sym_borrow,
    STATE(255), 1,
      sym_ty,
    STATE(103), 5,
      sym_tuple,
      sym_list,
      sym_option,
      sym_result,
      sym_handle,
    ACTIONS(19), 15,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_string,
  [407] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_id,
    ACTIONS(21), 1,
      anon_sym_tuple,
    ACTIONS(23), 1,
      anon_sym_list,
    ACTIONS(25), 1,
      anon_sym_option,
    ACTIONS(27), 1,
      anon_sym_result,
    ACTIONS(29), 1,
      anon_sym_borrow,
    STATE(293), 1,
      sym_ty,
    STATE(103), 5,
      sym_tuple,
      sym_list,
      sym_option,
      sym_result,
      sym_handle,
    ACTIONS(19), 15,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_string,
  [456] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_id,
    ACTIONS(21), 1,
      anon_sym_tuple,
    ACTIONS(23), 1,
      anon_sym_list,
    ACTIONS(25), 1,
      anon_sym_option,
    ACTIONS(27), 1,
      anon_sym_result,
    ACTIONS(29), 1,
      anon_sym_borrow,
    STATE(275), 1,
      sym_ty,
    STATE(103), 5,
      sym_tuple,
      sym_list,
      sym_option,
      sym_result,
      sym_handle,
    ACTIONS(19), 15,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_string,
  [505] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_id,
    ACTIONS(21), 1,
      anon_sym_tuple,
    ACTIONS(23), 1,
      anon_sym_list,
    ACTIONS(25), 1,
      anon_sym_option,
    ACTIONS(27), 1,
      anon_sym_result,
    ACTIONS(29), 1,
      anon_sym_borrow,
    STATE(242), 1,
      sym_ty,
    STATE(103), 5,
      sym_tuple,
      sym_list,
      sym_option,
      sym_result,
      sym_handle,
    ACTIONS(19), 15,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_string,
  [554] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_id,
    ACTIONS(21), 1,
      anon_sym_tuple,
    ACTIONS(23), 1,
      anon_sym_list,
    ACTIONS(25), 1,
      anon_sym_option,
    ACTIONS(27), 1,
      anon_sym_result,
    ACTIONS(29), 1,
      anon_sym_borrow,
    STATE(267), 1,
      sym_ty,
    STATE(103), 5,
      sym_tuple,
      sym_list,
      sym_option,
      sym_result,
      sym_handle,
    ACTIONS(19), 15,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_string,
  [603] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_id,
    ACTIONS(21), 1,
      anon_sym_tuple,
    ACTIONS(23), 1,
      anon_sym_list,
    ACTIONS(25), 1,
      anon_sym_option,
    ACTIONS(27), 1,
      anon_sym_result,
    ACTIONS(29), 1,
      anon_sym_borrow,
    STATE(277), 1,
      sym_ty,
    STATE(103), 5,
      sym_tuple,
      sym_list,
      sym_option,
      sym_result,
      sym_handle,
    ACTIONS(19), 15,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_string,
  [652] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_id,
    ACTIONS(21), 1,
      anon_sym_tuple,
    ACTIONS(23), 1,
      anon_sym_list,
    ACTIONS(25), 1,
      anon_sym_option,
    ACTIONS(27), 1,
      anon_sym_result,
    ACTIONS(29), 1,
      anon_sym_borrow,
    STATE(195), 1,
      sym_ty,
    STATE(103), 5,
      sym_tuple,
      sym_list,
      sym_option,
      sym_result,
      sym_handle,
    ACTIONS(19), 15,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_s8,
      anon_sym_s16,
      anon_sym_s32,
      anon_sym_s64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_string,
  [701] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_use,
    ACTIONS(40), 1,
      anon_sym_RBRACE,
    ACTIONS(42), 1,
      anon_sym_export,
    ACTIONS(45), 1,
      anon_sym_import,
    ACTIONS(48), 1,
      anon_sym_include,
    ACTIONS(51), 1,
      anon_sym_type,
    ACTIONS(54), 1,
      anon_sym_record,
    ACTIONS(57), 1,
      anon_sym_flags,
    ACTIONS(60), 1,
      anon_sym_variant,
    ACTIONS(63), 1,
      anon_sym_enum,
    ACTIONS(66), 1,
      anon_sym_resource,
    STATE(46), 1,
      sym_export_item,
    STATE(47), 1,
      sym_import_item,
    STATE(48), 1,
      sym_include_item,
    STATE(49), 1,
      sym_typedef_item,
    STATE(50), 1,
      sym_use_item,
    STATE(16), 2,
      sym_world_items,
      aux_sym_world_body_repeat1,
    STATE(51), 6,
      sym_type_item,
      sym_record_item,
      sym_flags_items,
      sym_variant_items,
      sym_enum_items,
      sym_resource_item,
  [765] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_use,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    ACTIONS(73), 1,
      anon_sym_export,
    ACTIONS(75), 1,
      anon_sym_import,
    ACTIONS(77), 1,
      anon_sym_include,
    ACTIONS(79), 1,
      anon_sym_type,
    ACTIONS(81), 1,
      anon_sym_record,
    ACTIONS(83), 1,
      anon_sym_flags,
    ACTIONS(85), 1,
      anon_sym_variant,
    ACTIONS(87), 1,
      anon_sym_enum,
    ACTIONS(89), 1,
      anon_sym_resource,
    STATE(46), 1,
      sym_export_item,
    STATE(47), 1,
      sym_import_item,
    STATE(48), 1,
      sym_include_item,
    STATE(49), 1,
      sym_typedef_item,
    STATE(50), 1,
      sym_use_item,
    STATE(16), 2,
      sym_world_items,
      aux_sym_world_body_repeat1,
    STATE(51), 6,
      sym_type_item,
      sym_record_item,
      sym_flags_items,
      sym_variant_items,
      sym_enum_items,
      sym_resource_item,
  [829] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_use,
    ACTIONS(73), 1,
      anon_sym_export,
    ACTIONS(75), 1,
      anon_sym_import,
    ACTIONS(77), 1,
      anon_sym_include,
    ACTIONS(79), 1,
      anon_sym_type,
    ACTIONS(81), 1,
      anon_sym_record,
    ACTIONS(83), 1,
      anon_sym_flags,
    ACTIONS(85), 1,
      anon_sym_variant,
    ACTIONS(87), 1,
      anon_sym_enum,
    ACTIONS(89), 1,
      anon_sym_resource,
    ACTIONS(91), 1,
      anon_sym_RBRACE,
    STATE(46), 1,
      sym_export_item,
    STATE(47), 1,
      sym_import_item,
    STATE(48), 1,
      sym_include_item,
    STATE(49), 1,
      sym_typedef_item,
    STATE(50), 1,
      sym_use_item,
    STATE(17), 2,
      sym_world_items,
      aux_sym_world_body_repeat1,
    STATE(51), 6,
      sym_type_item,
      sym_record_item,
      sym_flags_items,
      sym_variant_items,
      sym_enum_items,
      sym_resource_item,
  [893] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_use,
    ACTIONS(96), 1,
      sym_id,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    ACTIONS(101), 1,
      anon_sym_type,
    ACTIONS(104), 1,
      anon_sym_record,
    ACTIONS(107), 1,
      anon_sym_flags,
    ACTIONS(110), 1,
      anon_sym_variant,
    ACTIONS(113), 1,
      anon_sym_enum,
    ACTIONS(116), 1,
      anon_sym_resource,
    STATE(69), 1,
      sym_use_item,
    STATE(71), 1,
      sym_func_item,
    STATE(72), 1,
      sym_typedef_item,
    STATE(19), 2,
      sym_interface_items,
      aux_sym_interface_body_repeat1,
    STATE(75), 6,
      sym_type_item,
      sym_record_item,
      sym_flags_items,
      sym_variant_items,
      sym_enum_items,
      sym_resource_item,
  [945] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_use,
    ACTIONS(121), 1,
      sym_id,
    ACTIONS(123), 1,
      anon_sym_RBRACE,
    ACTIONS(125), 1,
      anon_sym_type,
    ACTIONS(127), 1,
      anon_sym_record,
    ACTIONS(129), 1,
      anon_sym_flags,
    ACTIONS(131), 1,
      anon_sym_variant,
    ACTIONS(133), 1,
      anon_sym_enum,
    ACTIONS(135), 1,
      anon_sym_resource,
    STATE(69), 1,
      sym_use_item,
    STATE(71), 1,
      sym_func_item,
    STATE(72), 1,
      sym_typedef_item,
    STATE(21), 2,
      sym_interface_items,
      aux_sym_interface_body_repeat1,
    STATE(75), 6,
      sym_type_item,
      sym_record_item,
      sym_flags_items,
      sym_variant_items,
      sym_enum_items,
      sym_resource_item,
  [997] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_use,
    ACTIONS(121), 1,
      sym_id,
    ACTIONS(125), 1,
      anon_sym_type,
    ACTIONS(127), 1,
      anon_sym_record,
    ACTIONS(129), 1,
      anon_sym_flags,
    ACTIONS(131), 1,
      anon_sym_variant,
    ACTIONS(133), 1,
      anon_sym_enum,
    ACTIONS(135), 1,
      anon_sym_resource,
    ACTIONS(137), 1,
      anon_sym_RBRACE,
    STATE(69), 1,
      sym_use_item,
    STATE(71), 1,
      sym_func_item,
    STATE(72), 1,
      sym_typedef_item,
    STATE(19), 2,
      sym_interface_items,
      aux_sym_interface_body_repeat1,
    STATE(75), 6,
      sym_type_item,
      sym_record_item,
      sym_flags_items,
      sym_variant_items,
      sym_enum_items,
      sym_resource_item,
  [1049] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 14,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_world,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_interface,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1069] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_SEMI,
    ACTIONS(145), 1,
      anon_sym_LBRACE,
    STATE(29), 1,
      sym_resource_body,
    ACTIONS(143), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1095] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 14,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_world,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_interface,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1115] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_RBRACE,
    ACTIONS(149), 1,
      anon_sym_SEMI,
    ACTIONS(153), 1,
      anon_sym_LBRACE,
    STATE(79), 1,
      sym_resource_body,
    ACTIONS(151), 8,
      anon_sym_use,
      sym_id,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1141] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1158] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1175] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1192] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1226] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1243] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1260] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1277] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1294] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1311] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1345] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1362] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1379] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1396] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1413] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1430] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1447] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1464] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1481] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1498] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1515] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1532] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1549] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1566] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1583] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1600] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1617] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1634] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1651] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1668] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1685] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1702] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 11,
      anon_sym_use,
      anon_sym_RBRACE,
      anon_sym_export,
      anon_sym_import,
      anon_sym_include,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1719] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_RBRACE,
    ACTIONS(223), 8,
      anon_sym_use,
      sym_id,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1736] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_RBRACE,
    ACTIONS(225), 8,
      anon_sym_use,
      sym_id,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1753] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_RBRACE,
    ACTIONS(227), 8,
      anon_sym_use,
      sym_id,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1770] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_RBRACE,
    ACTIONS(229), 8,
      anon_sym_use,
      sym_id,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1787] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_RBRACE,
    ACTIONS(233), 8,
      anon_sym_use,
      sym_id,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1804] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_RBRACE,
    ACTIONS(235), 8,
      anon_sym_use,
      sym_id,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1821] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_RBRACE,
    ACTIONS(237), 8,
      anon_sym_use,
      sym_id,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1838] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_RBRACE,
    ACTIONS(239), 8,
      anon_sym_use,
      sym_id,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1855] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_RBRACE,
    ACTIONS(241), 8,
      anon_sym_use,
      sym_id,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1872] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_RBRACE,
    ACTIONS(243), 8,
      anon_sym_use,
      sym_id,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1889] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_RBRACE,
    ACTIONS(247), 8,
      anon_sym_use,
      sym_id,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1906] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_RBRACE,
    ACTIONS(249), 8,
      anon_sym_use,
      sym_id,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1923] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_RBRACE,
    ACTIONS(253), 8,
      anon_sym_use,
      sym_id,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1940] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_RBRACE,
    ACTIONS(257), 8,
      anon_sym_use,
      sym_id,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1957] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_RBRACE,
    ACTIONS(259), 8,
      anon_sym_use,
      sym_id,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1974] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_RBRACE,
    ACTIONS(261), 8,
      anon_sym_use,
      sym_id,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [1991] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_RBRACE,
    ACTIONS(263), 8,
      anon_sym_use,
      sym_id,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [2008] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_RBRACE,
    ACTIONS(265), 8,
      anon_sym_use,
      sym_id,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [2025] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_RBRACE,
    ACTIONS(267), 8,
      anon_sym_use,
      sym_id,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [2042] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_RBRACE,
    ACTIONS(269), 8,
      anon_sym_use,
      sym_id,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [2059] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_RBRACE,
    ACTIONS(271), 8,
      anon_sym_use,
      sym_id,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [2076] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_RBRACE,
    ACTIONS(273), 8,
      anon_sym_use,
      sym_id,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [2093] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_RBRACE,
    ACTIONS(275), 8,
      anon_sym_use,
      sym_id,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [2110] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_RBRACE,
    ACTIONS(277), 8,
      anon_sym_use,
      sym_id,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [2127] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_RBRACE,
    ACTIONS(279), 8,
      anon_sym_use,
      sym_id,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [2144] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(11), 1,
      anon_sym_world,
    ACTIONS(13), 1,
      anon_sym_interface,
    ACTIONS(281), 1,
      ts_builtin_sym_end,
    STATE(87), 4,
      sym_toplevel_use_item,
      sym_world_item,
      sym_interface_item,
      aux_sym_source_file_repeat1,
  [2166] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(11), 1,
      anon_sym_world,
    ACTIONS(13), 1,
      anon_sym_interface,
    ACTIONS(281), 1,
      ts_builtin_sym_end,
    STATE(88), 4,
      sym_toplevel_use_item,
      sym_world_item,
      sym_interface_item,
      aux_sym_source_file_repeat1,
  [2188] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(11), 1,
      anon_sym_world,
    ACTIONS(13), 1,
      anon_sym_interface,
    ACTIONS(283), 1,
      ts_builtin_sym_end,
    STATE(88), 4,
      sym_toplevel_use_item,
      sym_world_item,
      sym_interface_item,
      aux_sym_source_file_repeat1,
  [2210] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      ts_builtin_sym_end,
    ACTIONS(287), 1,
      anon_sym_use,
    ACTIONS(290), 1,
      anon_sym_world,
    ACTIONS(293), 1,
      anon_sym_interface,
    STATE(88), 4,
      sym_toplevel_use_item,
      sym_world_item,
      sym_interface_item,
      aux_sym_source_file_repeat1,
  [2232] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_COLON,
    ACTIONS(298), 1,
      anon_sym_SLASH,
    ACTIONS(300), 1,
      anon_sym_AT,
    STATE(90), 1,
      aux_sym_package_decl_repeat2,
    ACTIONS(302), 4,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_with,
      anon_sym_DOT,
  [2254] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_SLASH,
    ACTIONS(304), 1,
      anon_sym_AT,
    STATE(91), 1,
      aux_sym_package_decl_repeat2,
    ACTIONS(306), 4,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_with,
      anon_sym_DOT,
  [2273] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_SLASH,
    STATE(91), 1,
      aux_sym_package_decl_repeat2,
    ACTIONS(311), 5,
      anon_sym_AT,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_with,
      anon_sym_DOT,
  [2290] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      sym_id,
    ACTIONS(316), 1,
      anon_sym_RBRACE,
    ACTIONS(318), 1,
      anon_sym_constructor,
    STATE(138), 1,
      sym_func_item,
    STATE(92), 2,
      sym_resource_method,
      aux_sym_resource_body_repeat1,
  [2310] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      sym_id,
    ACTIONS(323), 1,
      anon_sym_RBRACE,
    ACTIONS(325), 1,
      anon_sym_constructor,
    STATE(138), 1,
      sym_func_item,
    STATE(92), 2,
      sym_resource_method,
      aux_sym_resource_body_repeat1,
  [2330] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      sym_id,
    ACTIONS(325), 1,
      anon_sym_constructor,
    ACTIONS(327), 1,
      anon_sym_RBRACE,
    STATE(138), 1,
      sym_func_item,
    STATE(92), 2,
      sym_resource_method,
      aux_sym_resource_body_repeat1,
  [2350] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_LT,
    ACTIONS(329), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_GT,
  [2364] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      sym_id,
    ACTIONS(325), 1,
      anon_sym_constructor,
    ACTIONS(333), 1,
      anon_sym_RBRACE,
    STATE(138), 1,
      sym_func_item,
    STATE(94), 2,
      sym_resource_method,
      aux_sym_resource_body_repeat1,
  [2384] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      anon_sym_SLASH,
    ACTIONS(311), 5,
      anon_sym_AT,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_with,
      anon_sym_DOT,
  [2398] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      sym_id,
    ACTIONS(325), 1,
      anon_sym_constructor,
    ACTIONS(337), 1,
      anon_sym_RBRACE,
    STATE(138), 1,
      sym_func_item,
    STATE(93), 2,
      sym_resource_method,
      aux_sym_resource_body_repeat1,
  [2418] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_GT,
  [2429] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_GT,
  [2440] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_GT,
  [2451] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_COLON,
    ACTIONS(298), 1,
      anon_sym_SLASH,
    ACTIONS(345), 1,
      anon_sym_AT,
    ACTIONS(347), 1,
      anon_sym_SEMI,
    STATE(119), 1,
      aux_sym_package_decl_repeat2,
  [2470] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_GT,
  [2481] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_GT,
  [2492] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_GT,
  [2503] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      sym_id,
    ACTIONS(355), 1,
      anon_sym_interface,
    ACTIONS(357), 1,
      anon_sym_func,
    STATE(57), 1,
      sym_extern_type,
    STATE(295), 1,
      sym_func_type,
  [2522] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_GT,
  [2533] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_GT,
  [2544] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      sym_id,
    ACTIONS(355), 1,
      anon_sym_interface,
    ACTIONS(357), 1,
      anon_sym_func,
    STATE(59), 1,
      sym_extern_type,
    STATE(295), 1,
      sym_func_type,
  [2563] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_COLON,
    ACTIONS(363), 4,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_with,
      anon_sym_DOT,
  [2576] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 4,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_with,
      anon_sym_DOT,
  [2586] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      sym_id,
    ACTIONS(369), 1,
      anon_sym_RPAREN,
    STATE(177), 1,
      sym_named_type,
    STATE(249), 1,
      sym_named_type_list,
  [2602] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 4,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_world,
      anon_sym_interface,
  [2612] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 4,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_world,
      anon_sym_interface,
  [2622] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 4,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_world,
      anon_sym_interface,
  [2632] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 4,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_world,
      anon_sym_interface,
  [2642] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 4,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_with,
      anon_sym_DOT,
  [2652] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 4,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_world,
      anon_sym_interface,
  [2662] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_SLASH,
    ACTIONS(383), 1,
      anon_sym_AT,
    ACTIONS(385), 1,
      anon_sym_SEMI,
    STATE(91), 1,
      aux_sym_package_decl_repeat2,
  [2678] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 4,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_world,
      anon_sym_interface,
  [2688] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 4,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_world,
      anon_sym_interface,
  [2698] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      sym_id,
    ACTIONS(391), 1,
      anon_sym_RPAREN,
    STATE(177), 1,
      sym_named_type,
    STATE(287), 1,
      sym_named_type_list,
  [2714] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 4,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_world,
      anon_sym_interface,
  [2724] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 4,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_world,
      anon_sym_interface,
  [2734] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 4,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_world,
      anon_sym_interface,
  [2744] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_RBRACE,
    ACTIONS(401), 1,
      anon_sym_COMMA,
    STATE(181), 1,
      aux_sym_record_body_repeat1,
  [2757] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      sym_id,
    ACTIONS(405), 1,
      anon_sym_RBRACE,
    STATE(221), 1,
      sym_use_names_item,
  [2770] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_RBRACE,
    ACTIONS(409), 1,
      anon_sym_COMMA,
    STATE(162), 1,
      aux_sym_flags_body_repeat1,
  [2783] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_LPAREN,
    ACTIONS(411), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [2794] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      sym_id,
    STATE(203), 1,
      aux_sym_package_decl_repeat1,
    STATE(318), 1,
      sym_use_path,
  [2807] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_RBRACE,
    ACTIONS(419), 1,
      anon_sym_COMMA,
    STATE(166), 1,
      aux_sym_variant_cases_repeat1,
  [2820] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_COMMA,
    ACTIONS(424), 1,
      anon_sym_GT,
    STATE(132), 1,
      aux_sym_tuple_list_repeat1,
  [2833] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      sym_id,
    STATE(145), 1,
      sym_use_names_item,
    STATE(313), 1,
      sym_use_names_list,
  [2846] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      anon_sym_RBRACE,
    ACTIONS(428), 1,
      anon_sym_COMMA,
    STATE(169), 1,
      aux_sym_enum_cases_repeat1,
  [2859] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      sym_id,
    STATE(134), 1,
      sym_enum_case,
    STATE(297), 1,
      sym_enum_cases,
  [2872] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_COMMA,
    ACTIONS(435), 1,
      anon_sym_RPAREN,
    STATE(136), 1,
      aux_sym_named_type_list_repeat1,
  [2885] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      sym_id,
    ACTIONS(437), 1,
      anon_sym_RPAREN,
    STATE(237), 1,
      sym_named_type,
  [2898] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_RBRACE,
    ACTIONS(439), 2,
      sym_id,
      anon_sym_constructor,
  [2909] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      sym_id,
    STATE(131), 1,
      sym_variant_case,
    STATE(296), 1,
      sym_variant_cases,
  [2922] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      sym_id,
    STATE(203), 1,
      aux_sym_package_decl_repeat1,
    STATE(204), 1,
      sym_use_path,
  [2935] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_SEMI,
    ACTIONS(447), 1,
      anon_sym_DASH_GT,
    STATE(285), 1,
      sym_result_list,
  [2948] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_GT,
    ACTIONS(449), 1,
      anon_sym_COMMA,
    STATE(132), 1,
      aux_sym_tuple_list_repeat1,
  [2961] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_as,
    ACTIONS(453), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [2972] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      sym_id,
    ACTIONS(457), 1,
      anon_sym_RBRACE,
    STATE(197), 1,
      sym_record_field,
  [2985] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      anon_sym_RBRACE,
    ACTIONS(461), 1,
      anon_sym_COMMA,
    STATE(183), 1,
      aux_sym_use_names_list_repeat1,
  [2998] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_RBRACE,
    ACTIONS(465), 1,
      anon_sym_COMMA,
    STATE(180), 1,
      aux_sym_flags_body_repeat1,
  [3011] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_RBRACE,
    ACTIONS(469), 1,
      anon_sym_COMMA,
    STATE(147), 1,
      aux_sym_include_names_list_repeat1,
  [3024] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_RBRACE,
    ACTIONS(474), 1,
      anon_sym_COMMA,
    STATE(181), 1,
      aux_sym_record_body_repeat1,
  [3037] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_RBRACE,
    ACTIONS(478), 1,
      anon_sym_COMMA,
    STATE(187), 1,
      aux_sym_include_names_list_repeat1,
  [3050] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      sym_id,
    ACTIONS(472), 1,
      anon_sym_RBRACE,
    STATE(197), 1,
      sym_record_field,
  [3063] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_RBRACE,
    ACTIONS(482), 1,
      anon_sym_COMMA,
    STATE(146), 1,
      aux_sym_flags_body_repeat1,
  [3076] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      sym_id,
    STATE(149), 1,
      sym_include_names_item,
    STATE(301), 1,
      sym_include_names_list,
  [3089] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_RBRACE,
    ACTIONS(488), 1,
      anon_sym_COMMA,
    STATE(148), 1,
      aux_sym_record_body_repeat1,
  [3102] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      sym_id,
    ACTIONS(490), 1,
      anon_sym_RBRACE,
    STATE(225), 1,
      sym_include_names_item,
  [3115] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      anon_sym_RBRACE,
    ACTIONS(494), 1,
      anon_sym_COMMA,
    STATE(155), 1,
      aux_sym_use_names_list_repeat1,
  [3128] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      sym_id,
    STATE(145), 1,
      sym_use_names_item,
    STATE(305), 1,
      sym_use_names_list,
  [3141] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      sym_id,
    ACTIONS(497), 1,
      anon_sym_RBRACE,
    STATE(153), 1,
      sym_record_field,
  [3154] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_RBRACE,
    ACTIONS(455), 1,
      sym_id,
    STATE(197), 1,
      sym_record_field,
  [3167] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      sym_id,
    STATE(203), 1,
      aux_sym_package_decl_repeat1,
    STATE(245), 1,
      sym_use_path,
  [3180] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      sym_id,
    STATE(134), 1,
      sym_enum_case,
    STATE(319), 1,
      sym_enum_cases,
  [3193] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      sym_id,
    STATE(203), 1,
      aux_sym_package_decl_repeat1,
    STATE(228), 1,
      sym_use_path,
  [3206] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_RBRACE,
    ACTIONS(503), 1,
      anon_sym_COMMA,
    STATE(180), 1,
      aux_sym_flags_body_repeat1,
  [3219] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      sym_id,
    STATE(131), 1,
      sym_variant_case,
    STATE(257), 1,
      sym_variant_cases,
  [3232] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_COMMA,
    ACTIONS(507), 1,
      anon_sym_RPAREN,
    STATE(136), 1,
      aux_sym_named_type_list_repeat1,
  [3245] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      sym_id,
    ACTIONS(509), 1,
      anon_sym_RBRACE,
    STATE(205), 1,
      sym_variant_case,
  [3258] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_RBRACE,
    ACTIONS(511), 1,
      anon_sym_COMMA,
    STATE(176), 1,
      aux_sym_variant_cases_repeat1,
  [3271] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      sym_id,
    ACTIONS(513), 1,
      anon_sym_RBRACE,
    STATE(174), 1,
      sym_record_field,
  [3284] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      sym_id,
    ACTIONS(515), 1,
      anon_sym_RBRACE,
    STATE(208), 1,
      sym_enum_case,
  [3297] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      anon_sym_RBRACE,
    ACTIONS(517), 1,
      anon_sym_COMMA,
    STATE(173), 1,
      aux_sym_enum_cases_repeat1,
  [3310] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_func,
    ACTIONS(521), 1,
      anon_sym_static,
    STATE(292), 1,
      sym_func_type,
  [3323] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      sym_id,
    ACTIONS(507), 1,
      anon_sym_RPAREN,
    STATE(237), 1,
      sym_named_type,
  [3336] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      anon_sym_RBRACE,
    ACTIONS(523), 2,
      sym_id,
      anon_sym_constructor,
  [3347] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_RBRACE,
    ACTIONS(529), 1,
      anon_sym_COMMA,
    STATE(173), 1,
      aux_sym_enum_cases_repeat1,
  [3360] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_RBRACE,
    ACTIONS(534), 1,
      anon_sym_COMMA,
    STATE(126), 1,
      aux_sym_record_body_repeat1,
  [3373] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      sym_id,
    ACTIONS(536), 1,
      anon_sym_RBRACE,
    STATE(208), 1,
      sym_enum_case,
  [3386] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      anon_sym_RBRACE,
    ACTIONS(540), 1,
      anon_sym_COMMA,
    STATE(176), 1,
      aux_sym_variant_cases_repeat1,
  [3399] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      anon_sym_COMMA,
    ACTIONS(545), 1,
      anon_sym_RPAREN,
    STATE(164), 1,
      aux_sym_named_type_list_repeat1,
  [3412] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      sym_id,
    ACTIONS(547), 1,
      anon_sym_RBRACE,
    STATE(205), 1,
      sym_variant_case,
  [3425] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      sym_id,
    STATE(203), 1,
      aux_sym_package_decl_repeat1,
    STATE(250), 1,
      sym_use_path,
  [3438] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_RBRACE,
    ACTIONS(553), 1,
      anon_sym_COMMA,
    STATE(180), 1,
      aux_sym_flags_body_repeat1,
  [3451] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_RBRACE,
    ACTIONS(558), 1,
      anon_sym_COMMA,
    STATE(181), 1,
      aux_sym_record_body_repeat1,
  [3464] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      sym_id,
    ACTIONS(561), 1,
      anon_sym_RBRACE,
    STATE(221), 1,
      sym_use_names_item,
  [3477] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_RBRACE,
    ACTIONS(565), 1,
      anon_sym_COMMA,
    STATE(155), 1,
      aux_sym_use_names_list_repeat1,
  [3490] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_RBRACE,
    ACTIONS(567), 2,
      sym_id,
      anon_sym_constructor,
  [3501] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      sym_id,
    ACTIONS(571), 1,
      anon_sym_RBRACE,
    STATE(197), 1,
      sym_record_field,
  [3514] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      sym_id,
    ACTIONS(573), 1,
      anon_sym_RBRACE,
    STATE(225), 1,
      sym_include_names_item,
  [3527] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_RBRACE,
    ACTIONS(577), 1,
      anon_sym_COMMA,
    STATE(147), 1,
      aux_sym_include_names_list_repeat1,
  [3540] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_COMMA,
    ACTIONS(581), 1,
      anon_sym_GT,
    STATE(142), 1,
      aux_sym_tuple_list_repeat1,
  [3553] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_RBRACE,
    ACTIONS(229), 2,
      sym_id,
      anon_sym_constructor,
  [3564] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      sym_id,
    STATE(203), 1,
      aux_sym_package_decl_repeat1,
    STATE(251), 1,
      sym_use_path,
  [3577] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      anon_sym_LBRACE,
    STATE(123), 1,
      sym_world_body,
  [3587] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      sym_id,
    STATE(192), 1,
      aux_sym_package_decl_repeat1,
  [3597] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      anon_sym_COMMA,
    ACTIONS(590), 1,
      anon_sym_GT,
  [3607] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_LBRACE,
    STATE(121), 1,
      sym_interface_body,
  [3617] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [3625] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 1,
      anon_sym_LBRACE,
    STATE(31), 1,
      sym_enum_body,
  [3635] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [3643] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [3651] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 1,
      sym_id,
    STATE(206), 1,
      aux_sym_package_decl_repeat1,
  [3661] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [3669] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 1,
      anon_sym_LBRACE,
    STATE(32), 1,
      sym_variant_body,
  [3679] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      sym_id,
    ACTIONS(606), 1,
      anon_sym_RBRACE,
  [3689] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      sym_id,
    STATE(192), 1,
      aux_sym_package_decl_repeat1,
  [3699] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 1,
      anon_sym_SEMI,
    ACTIONS(612), 1,
      anon_sym_as,
  [3709] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [3717] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 1,
      sym_id,
    STATE(192), 1,
      aux_sym_package_decl_repeat1,
  [3727] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_LBRACE,
    STATE(60), 1,
      sym_record_body,
  [3737] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [3745] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      anon_sym_LBRACE,
    STATE(81), 1,
      sym_flags_body,
  [3755] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 2,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
  [3763] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_func,
    STATE(254), 1,
      sym_func_type,
  [3773] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      anon_sym_LBRACE,
    STATE(82), 1,
      sym_variant_body,
  [3783] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      anon_sym_LBRACE,
    STATE(34), 1,
      sym_flags_body,
  [3793] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 2,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
  [3801] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(628), 1,
      anon_sym_LBRACE,
    STATE(40), 1,
      sym_include_names_body,
  [3811] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(630), 1,
      anon_sym_LBRACE,
    STATE(83), 1,
      sym_enum_body,
  [3821] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_LBRACE,
    STATE(36), 1,
      sym_record_body,
  [3831] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 1,
      sym_id,
    ACTIONS(636), 1,
      anon_sym_RBRACE,
  [3841] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(638), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [3849] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      sym_id,
    STATE(237), 1,
      sym_named_type,
  [3859] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [3867] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_RBRACE,
    ACTIONS(604), 1,
      sym_id,
  [3877] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      anon_sym_LPAREN,
    STATE(141), 1,
      sym_param_list,
  [3887] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [3895] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [3903] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_LBRACE,
    STATE(35), 1,
      sym_interface_body,
  [3913] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 1,
      sym_id,
    ACTIONS(650), 1,
      anon_sym_RBRACE,
  [3923] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      anon_sym_SEMI,
    ACTIONS(654), 1,
      anon_sym_with,
  [3933] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_RBRACE,
    ACTIONS(604), 1,
      sym_id,
  [3943] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_SEMI,
    ACTIONS(656), 1,
      anon_sym_COLON,
  [3953] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_SEMI,
    ACTIONS(658), 1,
      anon_sym_COLON,
  [3963] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      sym_id,
    STATE(197), 1,
      sym_record_field,
  [3973] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [3981] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      sym_id,
    STATE(205), 1,
      sym_variant_case,
  [3991] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      sym_id,
    STATE(208), 1,
      sym_enum_case,
  [4001] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4009] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4017] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      sym_id,
    ACTIONS(664), 1,
      anon_sym_RBRACE,
  [4027] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      anon_sym_LPAREN,
    STATE(289), 1,
      sym_param_list,
  [4037] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      sym_id,
    STATE(221), 1,
      sym_use_names_item,
  [4047] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      sym_id,
    STATE(225), 1,
      sym_include_names_item,
  [4057] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [4065] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_func,
    STATE(290), 1,
      sym_func_type,
  [4075] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_COLON,
  [4082] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      anon_sym_SEMI,
  [4089] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_SEMI,
  [4096] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      sym_id,
  [4103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 1,
      anon_sym_SEMI,
  [4110] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      anon_sym_RPAREN,
  [4117] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      anon_sym_SEMI,
  [4124] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 1,
      anon_sym_DOT,
  [4131] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 1,
      sym_valid_semver,
  [4138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      anon_sym_COLON,
  [4145] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_SEMI,
  [4152] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      anon_sym_GT,
  [4159] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      sym_valid_semver,
  [4166] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 1,
      anon_sym_RBRACE,
  [4173] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      anon_sym_SEMI,
  [4180] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      sym_id,
  [4187] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 1,
      sym_id,
  [4194] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      sym_id,
  [4201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 1,
      sym_id,
  [4208] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      sym_id,
  [4215] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      sym_id,
  [4222] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 1,
      anon_sym_EQ,
  [4229] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      anon_sym_SEMI,
  [4236] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_RPAREN,
  [4243] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      anon_sym_GT,
  [4250] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 1,
      sym_valid_semver,
  [4257] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 1,
      anon_sym_SEMI,
  [4264] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      sym_valid_semver,
  [4271] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      anon_sym_COMMA,
  [4278] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 1,
      sym_id,
  [4285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      sym_id,
  [4292] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_GT,
  [4299] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      sym_id,
  [4306] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_GT,
  [4313] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 1,
      anon_sym_GT,
  [4320] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      sym_id,
  [4327] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      anon_sym_SEMI,
  [4334] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      sym_id,
  [4341] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_COLON,
  [4348] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      ts_builtin_sym_end,
  [4355] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 1,
      sym_id,
  [4362] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      anon_sym_SEMI,
  [4369] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(744), 1,
      anon_sym_SEMI,
  [4376] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      anon_sym_RPAREN,
  [4383] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 1,
      anon_sym_LBRACE,
  [4390] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 1,
      anon_sym_SEMI,
  [4397] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      anon_sym_SEMI,
  [4404] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      sym_id,
  [4411] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(756), 1,
      anon_sym_SEMI,
  [4418] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      anon_sym_SEMI,
  [4425] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      sym_id,
  [4432] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 1,
      anon_sym_SEMI,
  [4439] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      anon_sym_RBRACE,
  [4446] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      anon_sym_RBRACE,
  [4453] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      sym_id,
  [4460] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_LT,
  [4467] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      anon_sym_LT,
  [4474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_RBRACE,
  [4481] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 1,
      anon_sym_as,
  [4488] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 1,
      anon_sym_SEMI,
  [4495] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 1,
      anon_sym_LT,
  [4502] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 1,
      anon_sym_RBRACE,
  [4509] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 1,
      sym_id,
  [4516] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      sym_id,
  [4523] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 1,
      sym_id,
  [4530] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 1,
      sym_id,
  [4537] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 1,
      anon_sym_LT,
  [4544] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 1,
      anon_sym_SEMI,
  [4551] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 1,
      anon_sym_COLON,
  [4558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 1,
      anon_sym_RBRACE,
  [4565] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 1,
      anon_sym_EQ,
  [4572] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 1,
      anon_sym_COLON,
  [4579] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      sym_id,
  [4586] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 1,
      anon_sym_LBRACE,
  [4593] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(808), 1,
      anon_sym_DOT,
  [4600] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 52,
  [SMALL_STATE(4)] = 104,
  [SMALL_STATE(5)] = 156,
  [SMALL_STATE(6)] = 208,
  [SMALL_STATE(7)] = 260,
  [SMALL_STATE(8)] = 309,
  [SMALL_STATE(9)] = 358,
  [SMALL_STATE(10)] = 407,
  [SMALL_STATE(11)] = 456,
  [SMALL_STATE(12)] = 505,
  [SMALL_STATE(13)] = 554,
  [SMALL_STATE(14)] = 603,
  [SMALL_STATE(15)] = 652,
  [SMALL_STATE(16)] = 701,
  [SMALL_STATE(17)] = 765,
  [SMALL_STATE(18)] = 829,
  [SMALL_STATE(19)] = 893,
  [SMALL_STATE(20)] = 945,
  [SMALL_STATE(21)] = 997,
  [SMALL_STATE(22)] = 1049,
  [SMALL_STATE(23)] = 1069,
  [SMALL_STATE(24)] = 1095,
  [SMALL_STATE(25)] = 1115,
  [SMALL_STATE(26)] = 1141,
  [SMALL_STATE(27)] = 1158,
  [SMALL_STATE(28)] = 1175,
  [SMALL_STATE(29)] = 1192,
  [SMALL_STATE(30)] = 1209,
  [SMALL_STATE(31)] = 1226,
  [SMALL_STATE(32)] = 1243,
  [SMALL_STATE(33)] = 1260,
  [SMALL_STATE(34)] = 1277,
  [SMALL_STATE(35)] = 1294,
  [SMALL_STATE(36)] = 1311,
  [SMALL_STATE(37)] = 1328,
  [SMALL_STATE(38)] = 1345,
  [SMALL_STATE(39)] = 1362,
  [SMALL_STATE(40)] = 1379,
  [SMALL_STATE(41)] = 1396,
  [SMALL_STATE(42)] = 1413,
  [SMALL_STATE(43)] = 1430,
  [SMALL_STATE(44)] = 1447,
  [SMALL_STATE(45)] = 1464,
  [SMALL_STATE(46)] = 1481,
  [SMALL_STATE(47)] = 1498,
  [SMALL_STATE(48)] = 1515,
  [SMALL_STATE(49)] = 1532,
  [SMALL_STATE(50)] = 1549,
  [SMALL_STATE(51)] = 1566,
  [SMALL_STATE(52)] = 1583,
  [SMALL_STATE(53)] = 1600,
  [SMALL_STATE(54)] = 1617,
  [SMALL_STATE(55)] = 1634,
  [SMALL_STATE(56)] = 1651,
  [SMALL_STATE(57)] = 1668,
  [SMALL_STATE(58)] = 1685,
  [SMALL_STATE(59)] = 1702,
  [SMALL_STATE(60)] = 1719,
  [SMALL_STATE(61)] = 1736,
  [SMALL_STATE(62)] = 1753,
  [SMALL_STATE(63)] = 1770,
  [SMALL_STATE(64)] = 1787,
  [SMALL_STATE(65)] = 1804,
  [SMALL_STATE(66)] = 1821,
  [SMALL_STATE(67)] = 1838,
  [SMALL_STATE(68)] = 1855,
  [SMALL_STATE(69)] = 1872,
  [SMALL_STATE(70)] = 1889,
  [SMALL_STATE(71)] = 1906,
  [SMALL_STATE(72)] = 1923,
  [SMALL_STATE(73)] = 1940,
  [SMALL_STATE(74)] = 1957,
  [SMALL_STATE(75)] = 1974,
  [SMALL_STATE(76)] = 1991,
  [SMALL_STATE(77)] = 2008,
  [SMALL_STATE(78)] = 2025,
  [SMALL_STATE(79)] = 2042,
  [SMALL_STATE(80)] = 2059,
  [SMALL_STATE(81)] = 2076,
  [SMALL_STATE(82)] = 2093,
  [SMALL_STATE(83)] = 2110,
  [SMALL_STATE(84)] = 2127,
  [SMALL_STATE(85)] = 2144,
  [SMALL_STATE(86)] = 2166,
  [SMALL_STATE(87)] = 2188,
  [SMALL_STATE(88)] = 2210,
  [SMALL_STATE(89)] = 2232,
  [SMALL_STATE(90)] = 2254,
  [SMALL_STATE(91)] = 2273,
  [SMALL_STATE(92)] = 2290,
  [SMALL_STATE(93)] = 2310,
  [SMALL_STATE(94)] = 2330,
  [SMALL_STATE(95)] = 2350,
  [SMALL_STATE(96)] = 2364,
  [SMALL_STATE(97)] = 2384,
  [SMALL_STATE(98)] = 2398,
  [SMALL_STATE(99)] = 2418,
  [SMALL_STATE(100)] = 2429,
  [SMALL_STATE(101)] = 2440,
  [SMALL_STATE(102)] = 2451,
  [SMALL_STATE(103)] = 2470,
  [SMALL_STATE(104)] = 2481,
  [SMALL_STATE(105)] = 2492,
  [SMALL_STATE(106)] = 2503,
  [SMALL_STATE(107)] = 2522,
  [SMALL_STATE(108)] = 2533,
  [SMALL_STATE(109)] = 2544,
  [SMALL_STATE(110)] = 2563,
  [SMALL_STATE(111)] = 2576,
  [SMALL_STATE(112)] = 2586,
  [SMALL_STATE(113)] = 2602,
  [SMALL_STATE(114)] = 2612,
  [SMALL_STATE(115)] = 2622,
  [SMALL_STATE(116)] = 2632,
  [SMALL_STATE(117)] = 2642,
  [SMALL_STATE(118)] = 2652,
  [SMALL_STATE(119)] = 2662,
  [SMALL_STATE(120)] = 2678,
  [SMALL_STATE(121)] = 2688,
  [SMALL_STATE(122)] = 2698,
  [SMALL_STATE(123)] = 2714,
  [SMALL_STATE(124)] = 2724,
  [SMALL_STATE(125)] = 2734,
  [SMALL_STATE(126)] = 2744,
  [SMALL_STATE(127)] = 2757,
  [SMALL_STATE(128)] = 2770,
  [SMALL_STATE(129)] = 2783,
  [SMALL_STATE(130)] = 2794,
  [SMALL_STATE(131)] = 2807,
  [SMALL_STATE(132)] = 2820,
  [SMALL_STATE(133)] = 2833,
  [SMALL_STATE(134)] = 2846,
  [SMALL_STATE(135)] = 2859,
  [SMALL_STATE(136)] = 2872,
  [SMALL_STATE(137)] = 2885,
  [SMALL_STATE(138)] = 2898,
  [SMALL_STATE(139)] = 2909,
  [SMALL_STATE(140)] = 2922,
  [SMALL_STATE(141)] = 2935,
  [SMALL_STATE(142)] = 2948,
  [SMALL_STATE(143)] = 2961,
  [SMALL_STATE(144)] = 2972,
  [SMALL_STATE(145)] = 2985,
  [SMALL_STATE(146)] = 2998,
  [SMALL_STATE(147)] = 3011,
  [SMALL_STATE(148)] = 3024,
  [SMALL_STATE(149)] = 3037,
  [SMALL_STATE(150)] = 3050,
  [SMALL_STATE(151)] = 3063,
  [SMALL_STATE(152)] = 3076,
  [SMALL_STATE(153)] = 3089,
  [SMALL_STATE(154)] = 3102,
  [SMALL_STATE(155)] = 3115,
  [SMALL_STATE(156)] = 3128,
  [SMALL_STATE(157)] = 3141,
  [SMALL_STATE(158)] = 3154,
  [SMALL_STATE(159)] = 3167,
  [SMALL_STATE(160)] = 3180,
  [SMALL_STATE(161)] = 3193,
  [SMALL_STATE(162)] = 3206,
  [SMALL_STATE(163)] = 3219,
  [SMALL_STATE(164)] = 3232,
  [SMALL_STATE(165)] = 3245,
  [SMALL_STATE(166)] = 3258,
  [SMALL_STATE(167)] = 3271,
  [SMALL_STATE(168)] = 3284,
  [SMALL_STATE(169)] = 3297,
  [SMALL_STATE(170)] = 3310,
  [SMALL_STATE(171)] = 3323,
  [SMALL_STATE(172)] = 3336,
  [SMALL_STATE(173)] = 3347,
  [SMALL_STATE(174)] = 3360,
  [SMALL_STATE(175)] = 3373,
  [SMALL_STATE(176)] = 3386,
  [SMALL_STATE(177)] = 3399,
  [SMALL_STATE(178)] = 3412,
  [SMALL_STATE(179)] = 3425,
  [SMALL_STATE(180)] = 3438,
  [SMALL_STATE(181)] = 3451,
  [SMALL_STATE(182)] = 3464,
  [SMALL_STATE(183)] = 3477,
  [SMALL_STATE(184)] = 3490,
  [SMALL_STATE(185)] = 3501,
  [SMALL_STATE(186)] = 3514,
  [SMALL_STATE(187)] = 3527,
  [SMALL_STATE(188)] = 3540,
  [SMALL_STATE(189)] = 3553,
  [SMALL_STATE(190)] = 3564,
  [SMALL_STATE(191)] = 3577,
  [SMALL_STATE(192)] = 3587,
  [SMALL_STATE(193)] = 3597,
  [SMALL_STATE(194)] = 3607,
  [SMALL_STATE(195)] = 3617,
  [SMALL_STATE(196)] = 3625,
  [SMALL_STATE(197)] = 3635,
  [SMALL_STATE(198)] = 3643,
  [SMALL_STATE(199)] = 3651,
  [SMALL_STATE(200)] = 3661,
  [SMALL_STATE(201)] = 3669,
  [SMALL_STATE(202)] = 3679,
  [SMALL_STATE(203)] = 3689,
  [SMALL_STATE(204)] = 3699,
  [SMALL_STATE(205)] = 3709,
  [SMALL_STATE(206)] = 3717,
  [SMALL_STATE(207)] = 3727,
  [SMALL_STATE(208)] = 3737,
  [SMALL_STATE(209)] = 3745,
  [SMALL_STATE(210)] = 3755,
  [SMALL_STATE(211)] = 3763,
  [SMALL_STATE(212)] = 3773,
  [SMALL_STATE(213)] = 3783,
  [SMALL_STATE(214)] = 3793,
  [SMALL_STATE(215)] = 3801,
  [SMALL_STATE(216)] = 3811,
  [SMALL_STATE(217)] = 3821,
  [SMALL_STATE(218)] = 3831,
  [SMALL_STATE(219)] = 3841,
  [SMALL_STATE(220)] = 3849,
  [SMALL_STATE(221)] = 3859,
  [SMALL_STATE(222)] = 3867,
  [SMALL_STATE(223)] = 3877,
  [SMALL_STATE(224)] = 3887,
  [SMALL_STATE(225)] = 3895,
  [SMALL_STATE(226)] = 3903,
  [SMALL_STATE(227)] = 3913,
  [SMALL_STATE(228)] = 3923,
  [SMALL_STATE(229)] = 3933,
  [SMALL_STATE(230)] = 3943,
  [SMALL_STATE(231)] = 3953,
  [SMALL_STATE(232)] = 3963,
  [SMALL_STATE(233)] = 3973,
  [SMALL_STATE(234)] = 3981,
  [SMALL_STATE(235)] = 3991,
  [SMALL_STATE(236)] = 4001,
  [SMALL_STATE(237)] = 4009,
  [SMALL_STATE(238)] = 4017,
  [SMALL_STATE(239)] = 4027,
  [SMALL_STATE(240)] = 4037,
  [SMALL_STATE(241)] = 4047,
  [SMALL_STATE(242)] = 4057,
  [SMALL_STATE(243)] = 4065,
  [SMALL_STATE(244)] = 4075,
  [SMALL_STATE(245)] = 4082,
  [SMALL_STATE(246)] = 4089,
  [SMALL_STATE(247)] = 4096,
  [SMALL_STATE(248)] = 4103,
  [SMALL_STATE(249)] = 4110,
  [SMALL_STATE(250)] = 4117,
  [SMALL_STATE(251)] = 4124,
  [SMALL_STATE(252)] = 4131,
  [SMALL_STATE(253)] = 4138,
  [SMALL_STATE(254)] = 4145,
  [SMALL_STATE(255)] = 4152,
  [SMALL_STATE(256)] = 4159,
  [SMALL_STATE(257)] = 4166,
  [SMALL_STATE(258)] = 4173,
  [SMALL_STATE(259)] = 4180,
  [SMALL_STATE(260)] = 4187,
  [SMALL_STATE(261)] = 4194,
  [SMALL_STATE(262)] = 4201,
  [SMALL_STATE(263)] = 4208,
  [SMALL_STATE(264)] = 4215,
  [SMALL_STATE(265)] = 4222,
  [SMALL_STATE(266)] = 4229,
  [SMALL_STATE(267)] = 4236,
  [SMALL_STATE(268)] = 4243,
  [SMALL_STATE(269)] = 4250,
  [SMALL_STATE(270)] = 4257,
  [SMALL_STATE(271)] = 4264,
  [SMALL_STATE(272)] = 4271,
  [SMALL_STATE(273)] = 4278,
  [SMALL_STATE(274)] = 4285,
  [SMALL_STATE(275)] = 4292,
  [SMALL_STATE(276)] = 4299,
  [SMALL_STATE(277)] = 4306,
  [SMALL_STATE(278)] = 4313,
  [SMALL_STATE(279)] = 4320,
  [SMALL_STATE(280)] = 4327,
  [SMALL_STATE(281)] = 4334,
  [SMALL_STATE(282)] = 4341,
  [SMALL_STATE(283)] = 4348,
  [SMALL_STATE(284)] = 4355,
  [SMALL_STATE(285)] = 4362,
  [SMALL_STATE(286)] = 4369,
  [SMALL_STATE(287)] = 4376,
  [SMALL_STATE(288)] = 4383,
  [SMALL_STATE(289)] = 4390,
  [SMALL_STATE(290)] = 4397,
  [SMALL_STATE(291)] = 4404,
  [SMALL_STATE(292)] = 4411,
  [SMALL_STATE(293)] = 4418,
  [SMALL_STATE(294)] = 4425,
  [SMALL_STATE(295)] = 4432,
  [SMALL_STATE(296)] = 4439,
  [SMALL_STATE(297)] = 4446,
  [SMALL_STATE(298)] = 4453,
  [SMALL_STATE(299)] = 4460,
  [SMALL_STATE(300)] = 4467,
  [SMALL_STATE(301)] = 4474,
  [SMALL_STATE(302)] = 4481,
  [SMALL_STATE(303)] = 4488,
  [SMALL_STATE(304)] = 4495,
  [SMALL_STATE(305)] = 4502,
  [SMALL_STATE(306)] = 4509,
  [SMALL_STATE(307)] = 4516,
  [SMALL_STATE(308)] = 4523,
  [SMALL_STATE(309)] = 4530,
  [SMALL_STATE(310)] = 4537,
  [SMALL_STATE(311)] = 4544,
  [SMALL_STATE(312)] = 4551,
  [SMALL_STATE(313)] = 4558,
  [SMALL_STATE(314)] = 4565,
  [SMALL_STATE(315)] = 4572,
  [SMALL_STATE(316)] = 4579,
  [SMALL_STATE(317)] = 4586,
  [SMALL_STATE(318)] = 4593,
  [SMALL_STATE(319)] = 4600,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_list, 3),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_list, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_world_body_repeat1, 2), SHIFT_REPEAT(190),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_world_body_repeat1, 2),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_world_body_repeat1, 2), SHIFT_REPEAT(159),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_world_body_repeat1, 2), SHIFT_REPEAT(179),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_world_body_repeat1, 2), SHIFT_REPEAT(161),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_world_body_repeat1, 2), SHIFT_REPEAT(264),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_world_body_repeat1, 2), SHIFT_REPEAT(263),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_world_body_repeat1, 2), SHIFT_REPEAT(262),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_world_body_repeat1, 2), SHIFT_REPEAT(261),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_world_body_repeat1, 2), SHIFT_REPEAT(260),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_world_body_repeat1, 2), SHIFT_REPEAT(259),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(130),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(253),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_body_repeat1, 2),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(316),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(306),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(307),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(308),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(309),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(284),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_body, 3, .production_id = 14),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource_item, 2, .production_id = 12),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_body, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_resource_item, 2, .production_id = 12),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_body, 4, .production_id = 30),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_body, 5, .production_id = 36),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_body, 3, .production_id = 23),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource_item, 3, .production_id = 16),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource_item, 3, .production_id = 12),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_items, 3, .production_id = 12),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant_items, 3, .production_id = 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flags_body, 3, .production_id = 24),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flags_items, 3, .production_id = 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_type, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_item, 3, .production_id = 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant_body, 3),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 3),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_item, 3, .production_id = 15),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_item, 4, .production_id = 17),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_item, 3),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_item, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource_body, 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_body, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_names_body, 3, .production_id = 27),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_world_items, 1, .production_id = 3),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_world_items, 1, .production_id = 4),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_world_items, 1, .production_id = 5),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_world_items, 1, .production_id = 6),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_world_items, 1, .production_id = 7),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef_item, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_item, 5, .production_id = 22),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flags_body, 5, .production_id = 37),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource_body, 2),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flags_body, 4, .production_id = 31),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_item, 7),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_item, 4, .production_id = 12),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flags_body, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_item, 4, .production_id = 12),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_item, 3, .production_id = 2),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_body, 5, .production_id = 36),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_item, 5, .production_id = 22),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_item, 4, .production_id = 18),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_item, 4, .production_id = 18),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flags_body, 5, .production_id = 37),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_resource_body, 2),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flags_body, 2),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variant_body, 3),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_body, 3),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_items, 1, .production_id = 10),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_items, 1, .production_id = 10),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_resource_body, 3),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_items, 1, .production_id = 9),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_items, 1, .production_id = 9),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_items, 1, .production_id = 8),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_items, 1, .production_id = 8),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_body, 2),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_body, 4, .production_id = 30),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typedef_item, 1),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flags_body, 4, .production_id = 31),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use_item, 7),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flags_body, 3, .production_id = 24),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_resource_item, 3, .production_id = 16),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_body, 3, .production_id = 23),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flags_items, 3, .production_id = 2),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variant_items, 3, .production_id = 2),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_items, 3, .production_id = 12),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_resource_item, 3, .production_id = 12),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(140),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(298),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(291),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_path, 2),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_path, 3),
  [308] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_package_decl_repeat2, 2), SHIFT_REPEAT(273),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_package_decl_repeat2, 2),
  [313] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_resource_body_repeat1, 2), SHIFT_REPEAT(315),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_resource_body_repeat1, 2),
  [318] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_resource_body_repeat1, 2), SHIFT_REPEAT(239),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result, 1),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_package_decl_repeat2, 2),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_handle, 4),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result, 4),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ty, 1),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 4),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_package_decl_repeat1, 2),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result, 6),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_path, 1),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_path, 4),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_toplevel_use_item, 5, .production_id = 11),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_decl, 5),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_decl, 6),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_decl, 7),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_path, 5),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_world_body, 2),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_decl, 4),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_item, 3, .production_id = 2),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_world_item, 3, .production_id = 2),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_toplevel_use_item, 3, .production_id = 1),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_world_body, 3, .production_id = 13),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_names_list, 3, .production_id = 26),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant_case, 1, .production_id = 18),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant_cases, 1),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [421] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_list_repeat1, 2), SHIFT_REPEAT(12),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_list_repeat1, 2),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_cases, 1),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [432] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_named_type_list_repeat1, 2), SHIFT_REPEAT(220),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_named_type_list_repeat1, 2),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_type_list, 3),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_resource_method, 1),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource_method, 1),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_type, 2, .production_id = 19),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_names_item, 1),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_names_list, 1, .production_id = 20),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_include_names_list_repeat1, 2, .production_id = 35),
  [469] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_include_names_list_repeat1, 2, .production_id = 35), SHIFT_REPEAT(241),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_names_list, 1, .production_id = 21),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_names_list, 3, .production_id = 28),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_use_names_list_repeat1, 2, .production_id = 33),
  [494] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_use_names_list_repeat1, 2, .production_id = 33), SHIFT_REPEAT(240),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_type_list, 2),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant_cases, 2),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_cases, 2),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_resource_method, 3),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource_method, 3),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_cases_repeat1, 2),
  [529] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_cases_repeat1, 2), SHIFT_REPEAT(235),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_cases, 3),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variant_cases_repeat1, 2),
  [540] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variant_cases_repeat1, 2), SHIFT_REPEAT(234),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_type_list, 1),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant_cases, 3),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flags_body_repeat1, 2),
  [553] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flags_body_repeat1, 2), SHIFT_REPEAT(247),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_body_repeat1, 2),
  [558] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_body_repeat1, 2), SHIFT_REPEAT(232),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_names_list, 2, .production_id = 20),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_names_list, 2, .production_id = 26),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_resource_method, 5),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource_method, 5),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_names_list, 2, .production_id = 21),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_names_list, 2, .production_id = 28),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_list, 1),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [585] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_decl_repeat1, 2), SHIFT_REPEAT(282),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_field, 3, .production_id = 29),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_case, 1, .production_id = 18),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 2),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 3),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_names_item, 3),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_use_names_list_repeat1, 2, .production_id = 32),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_names_item, 3),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_include_names_list_repeat1, 2, .production_id = 34),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant_case, 4, .production_id = 29),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_type, 3, .production_id = 29),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result_list, 3),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result_list, 4),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result_list, 2),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_package_decl_repeat1, 2),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [738] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_type, 3, .production_id = 25),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_wit() {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
