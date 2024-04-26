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
#define STATE_COUNT 332
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 118
#define ALIAS_COUNT 0
#define TOKEN_COUNT 57
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 27
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 44

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
  sym_variant_case = 92,
  sym_enum_items = 93,
  sym_enum_body = 94,
  sym_resource_item = 95,
  sym_resource_body = 96,
  sym_resource_method = 97,
  sym_ty = 98,
  sym_tuple = 99,
  sym_tuple_list = 100,
  sym_list = 101,
  sym_option = 102,
  sym_result = 103,
  sym_handle = 104,
  aux_sym_source_file_repeat1 = 105,
  aux_sym_package_decl_repeat1 = 106,
  aux_sym_package_decl_repeat2 = 107,
  aux_sym_world_body_repeat1 = 108,
  aux_sym_include_names_list_repeat1 = 109,
  aux_sym_interface_body_repeat1 = 110,
  aux_sym_named_type_list_repeat1 = 111,
  aux_sym_use_names_list_repeat1 = 112,
  aux_sym_record_body_repeat1 = 113,
  aux_sym_flags_body_repeat1 = 114,
  aux_sym_variant_body_repeat1 = 115,
  aux_sym_resource_body_repeat1 = 116,
  aux_sym_tuple_list_repeat1 = 117,
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
  [sym_variant_case] = "variant_case",
  [sym_enum_items] = "enum_items",
  [sym_enum_body] = "enum_body",
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
  [aux_sym_variant_body_repeat1] = "variant_body_repeat1",
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
  [sym_variant_case] = sym_variant_case,
  [sym_enum_items] = sym_enum_items,
  [sym_enum_body] = sym_enum_body,
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
  [aux_sym_variant_body_repeat1] = aux_sym_variant_body_repeat1,
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
  [aux_sym_variant_body_repeat1] = {
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
  field_enum_cases = 3,
  field_export_item = 4,
  field_flags_fields = 5,
  field_func = 6,
  field_import_item = 7,
  field_include_item = 8,
  field_include_names_body = 9,
  field_include_names_item = 10,
  field_include_names_list = 11,
  field_interface_items = 12,
  field_name = 13,
  field_param_list = 14,
  field_path = 15,
  field_record_fields = 16,
  field_resource_body = 17,
  field_result_list = 18,
  field_type = 19,
  field_typedef = 20,
  field_typedef_item = 21,
  field_use = 22,
  field_use_item = 23,
  field_use_names_item = 24,
  field_use_path = 25,
  field_variant_cases = 26,
  field_world_items = 27,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_body] = "body",
  [field_enum_cases] = "enum_cases",
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
  [field_variant_cases] = "variant_cases",
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
  [25] = {.index = 30, .length = 1},
  [26] = {.index = 31, .length = 1},
  [27] = {.index = 32, .length = 2},
  [28] = {.index = 34, .length = 2},
  [29] = {.index = 36, .length = 1},
  [30] = {.index = 37, .length = 2},
  [31] = {.index = 39, .length = 2},
  [32] = {.index = 41, .length = 2},
  [33] = {.index = 43, .length = 2},
  [34] = {.index = 45, .length = 2},
  [35] = {.index = 47, .length = 2},
  [36] = {.index = 49, .length = 1},
  [37] = {.index = 50, .length = 2},
  [38] = {.index = 52, .length = 1},
  [39] = {.index = 53, .length = 2},
  [40] = {.index = 55, .length = 3},
  [41] = {.index = 58, .length = 3},
  [42] = {.index = 61, .length = 3},
  [43] = {.index = 64, .length = 3},
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
    {field_variant_cases, 1},
  [31] =
    {field_enum_cases, 1},
  [32] =
    {field_param_list, 1},
    {field_result_list, 2},
  [34] =
    {field_use_names_item, 0},
    {field_use_names_item, 1, .inherited = true},
  [36] =
    {field_include_names_list, 1},
  [37] =
    {field_include_names_item, 0},
    {field_include_names_item, 1, .inherited = true},
  [39] =
    {field_name, 0},
    {field_type, 2},
  [41] =
    {field_record_fields, 1},
    {field_record_fields, 2},
  [43] =
    {field_flags_fields, 1},
    {field_flags_fields, 2},
  [45] =
    {field_variant_cases, 1},
    {field_variant_cases, 2},
  [47] =
    {field_enum_cases, 1},
    {field_enum_cases, 2},
  [49] =
    {field_use_names_item, 1},
  [50] =
    {field_use_names_item, 0, .inherited = true},
    {field_use_names_item, 1, .inherited = true},
  [52] =
    {field_include_names_item, 1},
  [53] =
    {field_include_names_item, 0, .inherited = true},
    {field_include_names_item, 1, .inherited = true},
  [55] =
    {field_record_fields, 1},
    {field_record_fields, 2},
    {field_record_fields, 3},
  [58] =
    {field_flags_fields, 1},
    {field_flags_fields, 2},
    {field_flags_fields, 3},
  [61] =
    {field_variant_cases, 1},
    {field_variant_cases, 2},
    {field_variant_cases, 3},
  [64] =
    {field_enum_cases, 1},
    {field_enum_cases, 2},
    {field_enum_cases, 3},
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
  [10] = 10,
  [11] = 11,
  [12] = 7,
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
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 64,
  [67] = 46,
  [68] = 68,
  [69] = 39,
  [70] = 65,
  [71] = 27,
  [72] = 37,
  [73] = 36,
  [74] = 35,
  [75] = 63,
  [76] = 33,
  [77] = 29,
  [78] = 44,
  [79] = 30,
  [80] = 31,
  [81] = 32,
  [82] = 34,
  [83] = 47,
  [84] = 45,
  [85] = 49,
  [86] = 57,
  [87] = 41,
  [88] = 26,
  [89] = 48,
  [90] = 50,
  [91] = 91,
  [92] = 92,
  [93] = 58,
  [94] = 51,
  [95] = 62,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 104,
  [108] = 108,
  [109] = 106,
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
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 138,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 160,
  [162] = 158,
  [163] = 157,
  [164] = 159,
  [165] = 141,
  [166] = 150,
  [167] = 154,
  [168] = 153,
  [169] = 169,
  [170] = 155,
  [171] = 171,
  [172] = 172,
  [173] = 139,
  [174] = 143,
  [175] = 68,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 145,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 147,
  [192] = 192,
  [193] = 172,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 151,
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
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 214,
  [216] = 216,
  [217] = 217,
  [218] = 208,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 228,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 222,
  [236] = 216,
  [237] = 237,
  [238] = 220,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 231,
  [244] = 244,
  [245] = 245,
  [246] = 232,
  [247] = 233,
  [248] = 234,
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
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 265,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 301,
  [313] = 313,
  [314] = 314,
  [315] = 271,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 300,
  [320] = 269,
  [321] = 268,
  [322] = 260,
  [323] = 266,
  [324] = 324,
  [325] = 294,
  [326] = 309,
  [327] = 327,
  [328] = 270,
  [329] = 313,
  [330] = 281,
  [331] = 331,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(143);
      if (lookahead == '(') ADVANCE(263);
      if (lookahead == ')') ADVANCE(264);
      if (lookahead == ',') ADVANCE(260);
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == '.') ADVANCE(266);
      if (lookahead == '/') ADVANCE(146);
      if (lookahead == ':') ADVANCE(145);
      if (lookahead == ';') ADVANCE(148);
      if (lookahead == '<') ADVANCE(315);
      if (lookahead == '=') ADVANCE(269);
      if (lookahead == '>') ADVANCE(316);
      if (lookahead == '@') ADVANCE(147);
      if (lookahead == '\\') SKIP(142)
      if (lookahead == '_') ADVANCE(323);
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
      if (lookahead == '{') ADVANCE(252);
      if (lookahead == '}') ADVANCE(253);
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
      if (lookahead == '(') ADVANCE(263);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '>') ADVANCE(316);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == '_') ADVANCE(323);
      if (lookahead == 'b') ADVANCE(206);
      if (lookahead == 'c') ADVANCE(189);
      if (lookahead == 'f') ADVANCE(158);
      if (lookahead == 'l') ADVANCE(190);
      if (lookahead == 'o') ADVANCE(215);
      if (lookahead == 'r') ADVANCE(184);
      if (lookahead == 's') ADVANCE(152);
      if (lookahead == 't') ADVANCE(241);
      if (lookahead == 'u') ADVANCE(153);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(248);
      END_STATE();
    case 12:
      if (lookahead == '%') ADVANCE(139);
      if (lookahead == ')') ADVANCE(264);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == '}') ADVANCE(253);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(248);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 13:
      if (lookahead == '%') ADVANCE(139);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == ';') ADVANCE(148);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'e') ADVANCE(201);
      if (lookahead == 'f') ADVANCE(196);
      if (lookahead == 'r') ADVANCE(179);
      if (lookahead == 't') ADVANCE(247);
      if (lookahead == 'u') ADVANCE(230);
      if (lookahead == 'v') ADVANCE(170);
      if (lookahead == '{') ADVANCE(252);
      if (lookahead == '}') ADVANCE(253);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(248);
      END_STATE();
    case 14:
      if (lookahead == '%') ADVANCE(139);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'c') ADVANCE(213);
      if (lookahead == '}') ADVANCE(253);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(248);
      END_STATE();
    case 15:
      if (lookahead == '%') ADVANCE(139);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 'f') ADVANCE(245);
      if (lookahead == 'i') ADVANCE(204);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(248);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(18);
      if (lookahead == '/') ADVANCE(327);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '/') ADVANCE(326);
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
      if (lookahead == '8') ADVANCE(291);
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 22:
      if (lookahead == '1') ADVANCE(34);
      if (lookahead == '3') ADVANCE(25);
      if (lookahead == '6') ADVANCE(31);
      if (lookahead == '8') ADVANCE(283);
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 23:
      if (lookahead == '2') ADVANCE(299);
      END_STATE();
    case 24:
      if (lookahead == '2') ADVANCE(295);
      END_STATE();
    case 25:
      if (lookahead == '2') ADVANCE(287);
      END_STATE();
    case 26:
      if (lookahead == '2') ADVANCE(303);
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
      if (lookahead == '4') ADVANCE(301);
      END_STATE();
    case 30:
      if (lookahead == '4') ADVANCE(297);
      END_STATE();
    case 31:
      if (lookahead == '4') ADVANCE(289);
      END_STATE();
    case 32:
      if (lookahead == '4') ADVANCE(305);
      END_STATE();
    case 33:
      if (lookahead == '6') ADVANCE(293);
      END_STATE();
    case 34:
      if (lookahead == '6') ADVANCE(285);
      END_STATE();
    case 35:
      if (lookahead == '>') ADVANCE(265);
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
      if (lookahead == 'c') ADVANCE(261);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(280);
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
      if (lookahead == 'd') ADVANCE(251);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(270);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(60);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(313);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(278);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 65:
      if (lookahead == 'f') ADVANCE(44);
      END_STATE();
    case 66:
      if (lookahead == 'g') ADVANCE(311);
      END_STATE();
    case 67:
      if (lookahead == 'g') ADVANCE(117);
      END_STATE();
    case 68:
      if (lookahead == 'g') ADVANCE(61);
      END_STATE();
    case 69:
      if (lookahead == 'h') ADVANCE(259);
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
      if (lookahead == 'l') ADVANCE(309);
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
      if (lookahead == 'm') ADVANCE(276);
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
      if (lookahead == 'n') ADVANCE(319);
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
      if (lookahead == 'r') ADVANCE(307);
      END_STATE();
    case 106:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(281);
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
      if (lookahead == 's') ADVANCE(151);
      END_STATE();
    case 117:
      if (lookahead == 's') ADVANCE(272);
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
      if (lookahead == 't') ADVANCE(317);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(254);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(255);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(321);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(274);
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
      if (lookahead == 'w') ADVANCE(324);
      END_STATE();
    case 137:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(250);
      END_STATE();
    case 138:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 139:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(248);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 140:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(327);
      if (lookahead == '\r') ADVANCE(329);
      if (lookahead == '\\') ADVANCE(328);
      END_STATE();
    case 141:
      if (eof) ADVANCE(143);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 142:
      if (eof) ADVANCE(143);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(141)
      END_STATE();
    case 143:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(18);
      if (lookahead == '/') ADVANCE(327);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_use);
      if (lookahead == '-') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '1') ADVANCE(164);
      if (lookahead == '3') ADVANCE(155);
      if (lookahead == '6') ADVANCE(161);
      if (lookahead == '8') ADVANCE(292);
      if (lookahead == 't') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '1') ADVANCE(165);
      if (lookahead == '3') ADVANCE(156);
      if (lookahead == '6') ADVANCE(162);
      if (lookahead == '8') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '2') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '2') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '2') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '2') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '3') ADVANCE(154);
      if (lookahead == '6') ADVANCE(160);
      if (lookahead == 'l') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '3') ADVANCE(157);
      if (lookahead == '6') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '4') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '4') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '4') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '4') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '6') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '6') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'a') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'a') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'a') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'a') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'a') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'a') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'c') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'c') ADVANCE(212);
      if (lookahead == 's') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'c') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'c') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'c') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'd') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'e') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'e') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'e') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'e') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'e') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'e') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'e') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'e') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'f') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'g') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'g') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'h') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'i') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'i') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'i') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'i') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'l') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'l') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'l') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'l') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'm') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'n') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'n') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'n') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'n') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'n') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'n') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'n') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'o') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'o') ADVANCE(194);
      if (lookahead == 'r') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'o') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'o') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'o') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'o') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'o') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'o') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'o') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'p') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'p') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'p') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'r') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'r') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'r') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'r') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'r') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'r') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'r') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'r') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'r') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 's') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 's') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 's') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 's') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 's') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 't') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 't') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 't') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 't') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 't') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 't') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 't') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 't') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'u') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'u') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'u') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'u') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'u') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'u') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'w') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == 'y') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_valid_semver);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_world);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_interface);
      if (lookahead == '-') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_func);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_func);
      if (lookahead == '-') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '-') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_record);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_record);
      if (lookahead == '-') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_flags);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_flags);
      if (lookahead == '-') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_variant);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_variant);
      if (lookahead == '-') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_enum);
      if (lookahead == '-') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_resource);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_resource);
      if (lookahead == '-') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_constructor);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_constructor);
      if (lookahead == '-') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_u8);
      if (lookahead == '-') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_u16);
      if (lookahead == '-') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_u32);
      if (lookahead == '-') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_u64);
      if (lookahead == '-') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_s8);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_s8);
      if (lookahead == '-') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_s16);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_s16);
      if (lookahead == '-') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_s32);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_s32);
      if (lookahead == '-') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_s64);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_s64);
      if (lookahead == '-') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_f32);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_f32);
      if (lookahead == '-') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_f64);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_f64);
      if (lookahead == '-') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_float32);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_float32);
      if (lookahead == '-') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_float64);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_float64);
      if (lookahead == '-') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_char);
      if (lookahead == '-') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '-') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_string);
      if (lookahead == '-') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_tuple);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_tuple);
      if (lookahead == '-') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_list);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_list);
      if (lookahead == '-') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_option);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_option);
      if (lookahead == '-') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_result);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_result);
      if (lookahead == '-') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_borrow);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_borrow);
      if (lookahead == '-') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(327);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(327);
      if (lookahead == '\r') ADVANCE(329);
      if (lookahead == '\\') ADVANCE(328);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(327);
      if (lookahead == '\\') ADVANCE(140);
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
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
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
  [85] = {.lex_state = 13},
  [86] = {.lex_state = 13},
  [87] = {.lex_state = 13},
  [88] = {.lex_state = 13},
  [89] = {.lex_state = 13},
  [90] = {.lex_state = 13},
  [91] = {.lex_state = 13},
  [92] = {.lex_state = 13},
  [93] = {.lex_state = 13},
  [94] = {.lex_state = 13},
  [95] = {.lex_state = 13},
  [96] = {.lex_state = 13},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 14},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 14},
  [107] = {.lex_state = 14},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 14},
  [110] = {.lex_state = 14},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 15},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 15},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 12},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 12},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 12},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 12},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 12},
  [146] = {.lex_state = 12},
  [147] = {.lex_state = 12},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 14},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 12},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 12},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 12},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 12},
  [164] = {.lex_state = 12},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 12},
  [172] = {.lex_state = 12},
  [173] = {.lex_state = 12},
  [174] = {.lex_state = 12},
  [175] = {.lex_state = 14},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 12},
  [178] = {.lex_state = 12},
  [179] = {.lex_state = 12},
  [180] = {.lex_state = 14},
  [181] = {.lex_state = 12},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 12},
  [185] = {.lex_state = 12},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 12},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 12},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 12},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 14},
  [197] = {.lex_state = 12},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 12},
  [200] = {.lex_state = 12},
  [201] = {.lex_state = 12},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 12},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 12},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 12},
  [214] = {.lex_state = 12},
  [215] = {.lex_state = 12},
  [216] = {.lex_state = 12},
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
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 12},
  [229] = {.lex_state = 12},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 12},
  [236] = {.lex_state = 12},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 12},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 12},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 12},
  [250] = {.lex_state = 12},
  [251] = {.lex_state = 12},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 12},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 12},
  [258] = {.lex_state = 12},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 12},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 12},
  [266] = {.lex_state = 12},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 12},
  [269] = {.lex_state = 12},
  [270] = {.lex_state = 12},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 12},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 12},
  [280] = {.lex_state = 12},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 12},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 12},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 12},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 12},
  [299] = {.lex_state = 12},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 12},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
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
  [320] = {.lex_state = 12},
  [321] = {.lex_state = 12},
  [322] = {.lex_state = 12},
  [323] = {.lex_state = 12},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 12},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
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
    [sym_source_file] = STATE(289),
    [sym_package_decl] = STATE(98),
    [sym_toplevel_use_item] = STATE(101),
    [sym_world_item] = STATE(101),
    [sym_interface_item] = STATE(101),
    [aux_sym_source_file_repeat1] = STATE(101),
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
    STATE(317), 1,
      sym_ty,
    STATE(111), 5,
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
    ACTIONS(31), 1,
      anon_sym_GT,
    STATE(252), 1,
      sym_ty,
    STATE(111), 5,
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
    STATE(187), 1,
      sym_ty,
    STATE(286), 1,
      sym_tuple_list,
    STATE(111), 5,
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
      anon_sym_GT,
    STATE(252), 1,
      sym_ty,
    STATE(111), 5,
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
      anon_sym__,
    STATE(207), 1,
      sym_ty,
    STATE(111), 5,
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
    STATE(312), 1,
      sym_ty,
    STATE(111), 5,
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
    STATE(209), 1,
      sym_ty,
    STATE(111), 5,
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
    STATE(318), 1,
      sym_ty,
    STATE(111), 5,
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
    STATE(111), 5,
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
    STATE(244), 1,
      sym_ty,
    STATE(111), 5,
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
    STATE(301), 1,
      sym_ty,
    STATE(111), 5,
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
    STATE(285), 1,
      sym_ty,
    STATE(111), 5,
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
    STATE(252), 1,
      sym_ty,
    STATE(111), 5,
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
    STATE(267), 1,
      sym_ty,
    STATE(111), 5,
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
    STATE(52), 1,
      sym_export_item,
    STATE(53), 1,
      sym_import_item,
    STATE(54), 1,
      sym_include_item,
    STATE(55), 1,
      sym_typedef_item,
    STATE(56), 1,
      sym_use_item,
    STATE(16), 2,
      sym_world_items,
      aux_sym_world_body_repeat1,
    STATE(57), 6,
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
    STATE(52), 1,
      sym_export_item,
    STATE(53), 1,
      sym_import_item,
    STATE(54), 1,
      sym_include_item,
    STATE(55), 1,
      sym_typedef_item,
    STATE(56), 1,
      sym_use_item,
    STATE(16), 2,
      sym_world_items,
      aux_sym_world_body_repeat1,
    STATE(57), 6,
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
    STATE(52), 1,
      sym_export_item,
    STATE(53), 1,
      sym_import_item,
    STATE(54), 1,
      sym_include_item,
    STATE(55), 1,
      sym_typedef_item,
    STATE(56), 1,
      sym_use_item,
    STATE(17), 2,
      sym_world_items,
      aux_sym_world_body_repeat1,
    STATE(57), 6,
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
    ACTIONS(95), 1,
      sym_id,
    ACTIONS(97), 1,
      anon_sym_RBRACE,
    ACTIONS(99), 1,
      anon_sym_type,
    ACTIONS(101), 1,
      anon_sym_record,
    ACTIONS(103), 1,
      anon_sym_flags,
    ACTIONS(105), 1,
      anon_sym_variant,
    ACTIONS(107), 1,
      anon_sym_enum,
    ACTIONS(109), 1,
      anon_sym_resource,
    STATE(91), 1,
      sym_use_item,
    STATE(92), 1,
      sym_func_item,
    STATE(96), 1,
      sym_typedef_item,
    STATE(21), 2,
      sym_interface_items,
      aux_sym_interface_body_repeat1,
    STATE(86), 6,
      sym_type_item,
      sym_record_item,
      sym_flags_items,
      sym_variant_items,
      sym_enum_items,
      sym_resource_item,
  [945] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_use,
    ACTIONS(114), 1,
      sym_id,
    ACTIONS(117), 1,
      anon_sym_RBRACE,
    ACTIONS(119), 1,
      anon_sym_type,
    ACTIONS(122), 1,
      anon_sym_record,
    ACTIONS(125), 1,
      anon_sym_flags,
    ACTIONS(128), 1,
      anon_sym_variant,
    ACTIONS(131), 1,
      anon_sym_enum,
    ACTIONS(134), 1,
      anon_sym_resource,
    STATE(91), 1,
      sym_use_item,
    STATE(92), 1,
      sym_func_item,
    STATE(96), 1,
      sym_typedef_item,
    STATE(20), 2,
      sym_interface_items,
      aux_sym_interface_body_repeat1,
    STATE(86), 6,
      sym_type_item,
      sym_record_item,
      sym_flags_items,
      sym_variant_items,
      sym_enum_items,
      sym_resource_item,
  [997] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_use,
    ACTIONS(95), 1,
      sym_id,
    ACTIONS(99), 1,
      anon_sym_type,
    ACTIONS(101), 1,
      anon_sym_record,
    ACTIONS(103), 1,
      anon_sym_flags,
    ACTIONS(105), 1,
      anon_sym_variant,
    ACTIONS(107), 1,
      anon_sym_enum,
    ACTIONS(109), 1,
      anon_sym_resource,
    ACTIONS(137), 1,
      anon_sym_RBRACE,
    STATE(91), 1,
      sym_use_item,
    STATE(92), 1,
      sym_func_item,
    STATE(96), 1,
      sym_typedef_item,
    STATE(20), 2,
      sym_interface_items,
      aux_sym_interface_body_repeat1,
    STATE(86), 6,
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
    STATE(45), 1,
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
    STATE(84), 1,
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
  [1719] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 11,
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
  [1736] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 11,
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
  [1753] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 11,
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
  [1770] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 11,
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
  [1787] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 11,
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
  [1804] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 11,
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
  [1821] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
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
  [1838] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
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
  [1855] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
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
  [1872] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
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
    ACTIONS(233), 1,
      anon_sym_RBRACE,
    ACTIONS(245), 8,
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
    ACTIONS(157), 1,
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
  [1923] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
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
  [1940] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_RBRACE,
    ACTIONS(251), 8,
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
    ACTIONS(173), 1,
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
  [1974] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_RBRACE,
    ACTIONS(255), 8,
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
    ACTIONS(169), 1,
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
  [2008] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
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
  [2025] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
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
  [2042] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
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
  [2059] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
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
  [2076] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
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
  [2093] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
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
  [2110] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
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
  [2127] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
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
  [2144] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
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
  [2161] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
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
  [2178] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
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
  [2195] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_RBRACE,
    ACTIONS(281), 8,
      anon_sym_use,
      sym_id,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [2212] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_RBRACE,
    ACTIONS(283), 8,
      anon_sym_use,
      sym_id,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [2229] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_RBRACE,
    ACTIONS(285), 8,
      anon_sym_use,
      sym_id,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [2246] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_RBRACE,
    ACTIONS(287), 8,
      anon_sym_use,
      sym_id,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [2263] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_RBRACE,
    ACTIONS(291), 8,
      anon_sym_use,
      sym_id,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [2280] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_RBRACE,
    ACTIONS(295), 8,
      anon_sym_use,
      sym_id,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [2297] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_RBRACE,
    ACTIONS(297), 8,
      anon_sym_use,
      sym_id,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [2314] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_RBRACE,
    ACTIONS(299), 8,
      anon_sym_use,
      sym_id,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [2331] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_RBRACE,
    ACTIONS(301), 8,
      anon_sym_use,
      sym_id,
      anon_sym_type,
      anon_sym_record,
      anon_sym_flags,
      anon_sym_variant,
      anon_sym_enum,
      anon_sym_resource,
  [2348] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_COLON,
    ACTIONS(307), 1,
      anon_sym_SLASH,
    ACTIONS(309), 1,
      anon_sym_AT,
    STATE(102), 1,
      aux_sym_package_decl_repeat2,
    ACTIONS(311), 4,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_with,
      anon_sym_DOT,
  [2370] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(11), 1,
      anon_sym_world,
    ACTIONS(13), 1,
      anon_sym_interface,
    ACTIONS(313), 1,
      ts_builtin_sym_end,
    STATE(99), 4,
      sym_toplevel_use_item,
      sym_world_item,
      sym_interface_item,
      aux_sym_source_file_repeat1,
  [2392] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(11), 1,
      anon_sym_world,
    ACTIONS(13), 1,
      anon_sym_interface,
    ACTIONS(315), 1,
      ts_builtin_sym_end,
    STATE(100), 4,
      sym_toplevel_use_item,
      sym_world_item,
      sym_interface_item,
      aux_sym_source_file_repeat1,
  [2414] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      ts_builtin_sym_end,
    ACTIONS(319), 1,
      anon_sym_use,
    ACTIONS(322), 1,
      anon_sym_world,
    ACTIONS(325), 1,
      anon_sym_interface,
    STATE(100), 4,
      sym_toplevel_use_item,
      sym_world_item,
      sym_interface_item,
      aux_sym_source_file_repeat1,
  [2436] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(11), 1,
      anon_sym_world,
    ACTIONS(13), 1,
      anon_sym_interface,
    ACTIONS(313), 1,
      ts_builtin_sym_end,
    STATE(100), 4,
      sym_toplevel_use_item,
      sym_world_item,
      sym_interface_item,
      aux_sym_source_file_repeat1,
  [2458] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      anon_sym_SLASH,
    ACTIONS(328), 1,
      anon_sym_AT,
    STATE(103), 1,
      aux_sym_package_decl_repeat2,
    ACTIONS(330), 4,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_with,
      anon_sym_DOT,
  [2477] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_SLASH,
    STATE(103), 1,
      aux_sym_package_decl_repeat2,
    ACTIONS(335), 5,
      anon_sym_AT,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_with,
      anon_sym_DOT,
  [2494] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym_id,
    ACTIONS(339), 1,
      anon_sym_RBRACE,
    ACTIONS(341), 1,
      anon_sym_constructor,
    STATE(149), 1,
      sym_func_item,
    STATE(109), 2,
      sym_resource_method,
      aux_sym_resource_body_repeat1,
  [2514] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_SLASH,
    ACTIONS(335), 5,
      anon_sym_AT,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_with,
      anon_sym_DOT,
  [2528] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym_id,
    ACTIONS(341), 1,
      anon_sym_constructor,
    ACTIONS(345), 1,
      anon_sym_RBRACE,
    STATE(149), 1,
      sym_func_item,
    STATE(110), 2,
      sym_resource_method,
      aux_sym_resource_body_repeat1,
  [2548] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym_id,
    ACTIONS(341), 1,
      anon_sym_constructor,
    ACTIONS(347), 1,
      anon_sym_RBRACE,
    STATE(149), 1,
      sym_func_item,
    STATE(106), 2,
      sym_resource_method,
      aux_sym_resource_body_repeat1,
  [2568] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_LT,
    ACTIONS(349), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_GT,
  [2582] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym_id,
    ACTIONS(341), 1,
      anon_sym_constructor,
    ACTIONS(353), 1,
      anon_sym_RBRACE,
    STATE(149), 1,
      sym_func_item,
    STATE(110), 2,
      sym_resource_method,
      aux_sym_resource_body_repeat1,
  [2602] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      sym_id,
    ACTIONS(358), 1,
      anon_sym_RBRACE,
    ACTIONS(360), 1,
      anon_sym_constructor,
    STATE(149), 1,
      sym_func_item,
    STATE(110), 2,
      sym_resource_method,
      aux_sym_resource_body_repeat1,
  [2622] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_GT,
  [2633] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_GT,
  [2644] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      sym_id,
    ACTIONS(369), 1,
      anon_sym_interface,
    ACTIONS(371), 1,
      anon_sym_func,
    STATE(42), 1,
      sym_extern_type,
    STATE(302), 1,
      sym_func_type,
  [2663] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_GT,
  [2674] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_GT,
  [2685] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_GT,
  [2696] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_COLON,
    ACTIONS(377), 4,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_with,
      anon_sym_DOT,
  [2709] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      sym_id,
    ACTIONS(369), 1,
      anon_sym_interface,
    ACTIONS(371), 1,
      anon_sym_func,
    STATE(40), 1,
      sym_extern_type,
    STATE(302), 1,
      sym_func_type,
  [2728] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_GT,
  [2739] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_COLON,
    ACTIONS(307), 1,
      anon_sym_SLASH,
    ACTIONS(381), 1,
      anon_sym_AT,
    ACTIONS(383), 1,
      anon_sym_SEMI,
    STATE(125), 1,
      aux_sym_package_decl_repeat2,
  [2758] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_GT,
  [2769] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_GT,
  [2780] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 4,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_world,
      anon_sym_interface,
  [2790] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 4,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_world,
      anon_sym_interface,
  [2800] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      anon_sym_SLASH,
    ACTIONS(393), 1,
      anon_sym_AT,
    ACTIONS(395), 1,
      anon_sym_SEMI,
    STATE(103), 1,
      aux_sym_package_decl_repeat2,
  [2816] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 4,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_world,
      anon_sym_interface,
  [2826] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 4,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_with,
      anon_sym_DOT,
  [2836] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 4,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_world,
      anon_sym_interface,
  [2846] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 4,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_world,
      anon_sym_interface,
  [2856] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 4,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_world,
      anon_sym_interface,
  [2866] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 4,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_world,
      anon_sym_interface,
  [2876] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      sym_id,
    ACTIONS(411), 1,
      anon_sym_RPAREN,
    STATE(176), 1,
      sym_named_type,
    STATE(291), 1,
      sym_named_type_list,
  [2892] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 4,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_with,
      anon_sym_DOT,
  [2902] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      sym_id,
    ACTIONS(415), 1,
      anon_sym_RPAREN,
    STATE(176), 1,
      sym_named_type,
    STATE(275), 1,
      sym_named_type_list,
  [2918] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 4,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_world,
      anon_sym_interface,
  [2928] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 4,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_world,
      anon_sym_interface,
  [2938] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 4,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_world,
      anon_sym_interface,
  [2948] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_RBRACE,
    ACTIONS(425), 1,
      anon_sym_COMMA,
    STATE(192), 1,
      aux_sym_variant_body_repeat1,
  [2961] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      sym_id,
    ACTIONS(429), 1,
      anon_sym_RBRACE,
    STATE(155), 1,
      sym_record_field,
  [2974] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_SEMI,
    ACTIONS(433), 1,
      anon_sym_DASH_GT,
    STATE(273), 1,
      sym_result_list,
  [2987] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_RBRACE,
    ACTIONS(437), 1,
      anon_sym_COMMA,
    STATE(168), 1,
      aux_sym_flags_body_repeat1,
  [3000] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_as,
    ACTIONS(441), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [3011] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      sym_id,
    STATE(254), 1,
      aux_sym_package_decl_repeat1,
    STATE(330), 1,
      sym_use_path,
  [3024] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_RBRACE,
    ACTIONS(447), 1,
      anon_sym_COMMA,
    STATE(182), 1,
      aux_sym_use_names_list_repeat1,
  [3037] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      sym_id,
    STATE(144), 1,
      sym_use_names_item,
    STATE(325), 1,
      sym_use_names_list,
  [3050] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      sym_id,
    STATE(253), 1,
      sym_use_path,
    STATE(254), 1,
      aux_sym_package_decl_repeat1,
  [3063] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      sym_id,
    ACTIONS(453), 1,
      anon_sym_RBRACE,
    STATE(217), 1,
      sym_variant_case,
  [3076] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_RBRACE,
    ACTIONS(457), 1,
      anon_sym_COMMA,
    STATE(186), 1,
      aux_sym_include_names_list_repeat1,
  [3089] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_RBRACE,
    ACTIONS(459), 2,
      sym_id,
      anon_sym_constructor,
  [3100] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_RBRACE,
    ACTIONS(465), 1,
      anon_sym_COMMA,
    STATE(138), 1,
      aux_sym_variant_body_repeat1,
  [3113] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      sym_id,
    ACTIONS(467), 1,
      anon_sym_RBRACE,
    STATE(211), 1,
      sym_record_field,
  [3126] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    ACTIONS(469), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [3137] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym_RBRACE,
    ACTIONS(475), 1,
      anon_sym_COMMA,
    STATE(202), 1,
      aux_sym_flags_body_repeat1,
  [3150] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      anon_sym_RBRACE,
    ACTIONS(479), 1,
      anon_sym_COMMA,
    STATE(161), 1,
      aux_sym_flags_body_repeat1,
  [3163] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      anon_sym_RBRACE,
    ACTIONS(483), 1,
      anon_sym_COMMA,
    STATE(158), 1,
      aux_sym_record_body_repeat1,
  [3176] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      anon_sym_RBRACE,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    STATE(192), 1,
      aux_sym_variant_body_repeat1,
  [3189] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      sym_id,
    ACTIONS(489), 1,
      anon_sym_RBRACE,
    STATE(211), 1,
      sym_record_field,
  [3202] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_RBRACE,
    ACTIONS(491), 1,
      anon_sym_COMMA,
    STATE(198), 1,
      aux_sym_record_body_repeat1,
  [3215] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      sym_id,
    ACTIONS(485), 1,
      anon_sym_RBRACE,
    STATE(217), 1,
      sym_variant_case,
  [3228] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_RBRACE,
    ACTIONS(495), 1,
      anon_sym_COMMA,
    STATE(202), 1,
      aux_sym_flags_body_repeat1,
  [3241] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      anon_sym_RBRACE,
    ACTIONS(499), 1,
      anon_sym_COMMA,
    STATE(202), 1,
      aux_sym_flags_body_repeat1,
  [3254] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_RBRACE,
    ACTIONS(503), 1,
      anon_sym_COMMA,
    STATE(198), 1,
      aux_sym_record_body_repeat1,
  [3267] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      sym_id,
    ACTIONS(501), 1,
      anon_sym_RBRACE,
    STATE(211), 1,
      sym_record_field,
  [3280] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_RBRACE,
    ACTIONS(451), 1,
      sym_id,
    STATE(217), 1,
      sym_variant_case,
  [3293] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_RBRACE,
    ACTIONS(507), 1,
      anon_sym_COMMA,
    STATE(153), 1,
      aux_sym_flags_body_repeat1,
  [3306] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_RBRACE,
    ACTIONS(511), 1,
      anon_sym_COMMA,
    STATE(156), 1,
      aux_sym_variant_body_repeat1,
  [3319] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_RBRACE,
    ACTIONS(515), 1,
      anon_sym_COMMA,
    STATE(160), 1,
      aux_sym_flags_body_repeat1,
  [3332] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      anon_sym_RBRACE,
    ACTIONS(519), 1,
      anon_sym_COMMA,
    STATE(202), 1,
      aux_sym_flags_body_repeat1,
  [3345] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_func,
    ACTIONS(523), 1,
      anon_sym_static,
    STATE(300), 1,
      sym_func_type,
  [3358] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      anon_sym_RBRACE,
    ACTIONS(527), 1,
      anon_sym_COMMA,
    STATE(162), 1,
      aux_sym_record_body_repeat1,
  [3371] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      sym_id,
    STATE(148), 1,
      sym_include_names_item,
    STATE(324), 1,
      sym_include_names_list,
  [3384] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      sym_id,
    ACTIONS(531), 1,
      anon_sym_RBRACE,
    STATE(166), 1,
      sym_variant_case,
  [3397] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      sym_id,
    ACTIONS(533), 1,
      anon_sym_RBRACE,
    STATE(170), 1,
      sym_record_field,
  [3410] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      sym_id,
    STATE(254), 1,
      aux_sym_package_decl_repeat1,
    STATE(281), 1,
      sym_use_path,
  [3423] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_RBRACE,
    ACTIONS(239), 2,
      sym_id,
      anon_sym_constructor,
  [3434] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_COMMA,
    ACTIONS(537), 1,
      anon_sym_RPAREN,
    STATE(203), 1,
      aux_sym_named_type_list_repeat1,
  [3447] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      sym_id,
    STATE(254), 1,
      aux_sym_package_decl_repeat1,
    STATE(287), 1,
      sym_use_path,
  [3460] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      sym_id,
    STATE(254), 1,
      aux_sym_package_decl_repeat1,
    STATE(296), 1,
      sym_use_path,
  [3473] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      sym_id,
    STATE(237), 1,
      sym_use_path,
    STATE(254), 1,
      aux_sym_package_decl_repeat1,
  [3486] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      anon_sym_RBRACE,
    ACTIONS(543), 2,
      sym_id,
      anon_sym_constructor,
  [3497] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      sym_id,
    ACTIONS(547), 1,
      anon_sym_RBRACE,
    STATE(225), 1,
      sym_use_names_item,
  [3510] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_RBRACE,
    ACTIONS(551), 1,
      anon_sym_COMMA,
    STATE(190), 1,
      aux_sym_use_names_list_repeat1,
  [3523] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_COMMA,
    ACTIONS(556), 1,
      anon_sym_GT,
    STATE(183), 1,
      aux_sym_tuple_list_repeat1,
  [3536] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      sym_id,
    STATE(144), 1,
      sym_use_names_item,
    STATE(294), 1,
      sym_use_names_list,
  [3549] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      sym_id,
    ACTIONS(558), 1,
      anon_sym_RBRACE,
    STATE(227), 1,
      sym_include_names_item,
  [3562] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_RBRACE,
    ACTIONS(562), 1,
      anon_sym_COMMA,
    STATE(194), 1,
      aux_sym_include_names_list_repeat1,
  [3575] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      anon_sym_COMMA,
    ACTIONS(566), 1,
      anon_sym_GT,
    STATE(195), 1,
      aux_sym_tuple_list_repeat1,
  [3588] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      anon_sym_COMMA,
    ACTIONS(571), 1,
      anon_sym_RPAREN,
    STATE(188), 1,
      aux_sym_named_type_list_repeat1,
  [3601] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      sym_id,
    ACTIONS(573), 1,
      anon_sym_RPAREN,
    STATE(245), 1,
      sym_named_type,
  [3614] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_RBRACE,
    ACTIONS(577), 1,
      anon_sym_COMMA,
    STATE(190), 1,
      aux_sym_use_names_list_repeat1,
  [3627] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      sym_id,
    ACTIONS(580), 1,
      anon_sym_RBRACE,
    STATE(217), 1,
      sym_variant_case,
  [3640] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      anon_sym_RBRACE,
    ACTIONS(584), 1,
      anon_sym_COMMA,
    STATE(192), 1,
      aux_sym_variant_body_repeat1,
  [3653] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      sym_id,
    ACTIONS(587), 1,
      anon_sym_RBRACE,
    STATE(150), 1,
      sym_variant_case,
  [3666] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_RBRACE,
    ACTIONS(591), 1,
      anon_sym_COMMA,
    STATE(194), 1,
      aux_sym_include_names_list_repeat1,
  [3679] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(594), 1,
      anon_sym_COMMA,
    STATE(183), 1,
      aux_sym_tuple_list_repeat1,
  [3692] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_RBRACE,
    ACTIONS(596), 2,
      sym_id,
      anon_sym_constructor,
  [3703] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      sym_id,
    ACTIONS(600), 1,
      anon_sym_RBRACE,
    STATE(211), 1,
      sym_record_field,
  [3716] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 1,
      anon_sym_RBRACE,
    ACTIONS(604), 1,
      anon_sym_COMMA,
    STATE(198), 1,
      aux_sym_record_body_repeat1,
  [3729] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      sym_id,
    ACTIONS(607), 1,
      anon_sym_RBRACE,
    STATE(227), 1,
      sym_include_names_item,
  [3742] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      sym_id,
    ACTIONS(609), 1,
      anon_sym_RBRACE,
    STATE(225), 1,
      sym_use_names_item,
  [3755] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      sym_id,
    ACTIONS(611), 1,
      anon_sym_RPAREN,
    STATE(245), 1,
      sym_named_type,
  [3768] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_RBRACE,
    ACTIONS(615), 1,
      anon_sym_COMMA,
    STATE(202), 1,
      aux_sym_flags_body_repeat1,
  [3781] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_RPAREN,
    ACTIONS(618), 1,
      anon_sym_COMMA,
    STATE(188), 1,
      aux_sym_named_type_list_repeat1,
  [3794] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      sym_id,
    STATE(211), 1,
      sym_record_field,
  [3804] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_interface_body,
  [3814] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      anon_sym_LPAREN,
    STATE(303), 1,
      sym_param_list,
  [3824] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      anon_sym_COMMA,
    ACTIONS(626), 1,
      anon_sym_GT,
  [3834] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(628), 1,
      sym_id,
    ACTIONS(630), 1,
      anon_sym_RBRACE,
  [3844] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [3852] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      anon_sym_LPAREN,
    STATE(140), 1,
      sym_param_list,
  [3862] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [3870] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [3878] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 1,
      sym_id,
    STATE(249), 1,
      aux_sym_package_decl_repeat1,
  [3888] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(628), 1,
      sym_id,
    ACTIONS(636), 1,
      anon_sym_RBRACE,
  [3898] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(628), 1,
      sym_id,
    ACTIONS(638), 1,
      anon_sym_RBRACE,
  [3908] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 1,
      sym_id,
    ACTIONS(642), 1,
      anon_sym_RBRACE,
  [3918] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [3926] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(628), 1,
      sym_id,
    ACTIONS(644), 1,
      anon_sym_RBRACE,
  [3936] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_func,
    STATE(261), 1,
      sym_func_type,
  [3946] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 1,
      sym_id,
    ACTIONS(648), 1,
      anon_sym_RBRACE,
  [3956] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 2,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
  [3964] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym_RBRACE,
    ACTIONS(628), 1,
      sym_id,
  [3974] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [3982] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 1,
      anon_sym_LBRACE,
    STATE(38), 1,
      sym_include_names_body,
  [3992] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [4000] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [4008] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [4016] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      anon_sym_RBRACE,
    ACTIONS(628), 1,
      sym_id,
  [4026] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_RBRACE,
    ACTIONS(628), 1,
      sym_id,
  [4036] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_func,
    STATE(319), 1,
      sym_func_type,
  [4046] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 1,
      anon_sym_LBRACE,
    STATE(26), 1,
      sym_enum_body,
  [4056] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      anon_sym_LBRACE,
    STATE(48), 1,
      sym_variant_body,
  [4066] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_LBRACE,
    STATE(50), 1,
      sym_flags_body,
  [4076] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      anon_sym_LBRACE,
    STATE(58), 1,
      sym_record_body,
  [4086] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      anon_sym_RBRACE,
    ACTIONS(628), 1,
      sym_id,
  [4096] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      sym_id,
    ACTIONS(672), 1,
      anon_sym_RBRACE,
  [4106] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      anon_sym_SEMI,
    ACTIONS(676), 1,
      anon_sym_with,
  [4116] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 1,
      sym_id,
    ACTIONS(680), 1,
      anon_sym_RBRACE,
  [4126] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [4134] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 2,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
  [4142] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      sym_id,
    STATE(217), 1,
      sym_variant_case,
  [4152] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_SEMI,
    ACTIONS(686), 1,
      anon_sym_COLON,
  [4162] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      anon_sym_LBRACE,
    STATE(88), 1,
      sym_enum_body,
  [4172] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4180] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4188] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      anon_sym_LBRACE,
    STATE(89), 1,
      sym_variant_body,
  [4198] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      anon_sym_LBRACE,
    STATE(90), 1,
      sym_flags_body,
  [4208] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 1,
      anon_sym_LBRACE,
    STATE(93), 1,
      sym_record_body,
  [4218] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      sym_id,
    STATE(258), 1,
      aux_sym_package_decl_repeat1,
  [4228] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      sym_id,
    STATE(225), 1,
      sym_use_names_item,
  [4238] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      sym_id,
    STATE(227), 1,
      sym_include_names_item,
  [4248] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [4256] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 1,
      anon_sym_SEMI,
    ACTIONS(702), 1,
      anon_sym_as,
  [4266] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      sym_id,
    STATE(258), 1,
      aux_sym_package_decl_repeat1,
  [4276] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 1,
      anon_sym_LBRACE,
    STATE(130), 1,
      sym_world_body,
  [4286] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      anon_sym_LBRACE,
    STATE(128), 1,
      sym_interface_body,
  [4296] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      sym_id,
    STATE(245), 1,
      sym_named_type,
  [4306] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      sym_id,
    STATE(258), 1,
      aux_sym_package_decl_repeat1,
  [4316] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_SEMI,
    ACTIONS(711), 1,
      anon_sym_COLON,
  [4326] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 1,
      sym_id,
  [4333] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 1,
      anon_sym_SEMI,
  [4340] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 1,
      sym_valid_semver,
  [4347] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_SEMI,
  [4354] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 1,
      anon_sym_COLON,
  [4361] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(723), 1,
      sym_id,
  [4368] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 1,
      sym_id,
  [4375] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      anon_sym_GT,
  [4382] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 1,
      sym_id,
  [4389] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 1,
      sym_id,
  [4396] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      sym_id,
  [4403] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(735), 1,
      anon_sym_SEMI,
  [4410] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 1,
      sym_id,
  [4417] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      anon_sym_SEMI,
  [4424] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      anon_sym_COMMA,
  [4431] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      anon_sym_RPAREN,
  [4438] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      sym_valid_semver,
  [4445] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 1,
      anon_sym_SEMI,
  [4452] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      sym_valid_semver,
  [4459] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      sym_id,
  [4466] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 1,
      sym_id,
  [4473] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(753), 1,
      anon_sym_DOT,
  [4480] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 1,
      sym_id,
  [4487] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 1,
      anon_sym_SEMI,
  [4494] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(759), 1,
      sym_id,
  [4501] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 1,
      anon_sym_GT,
  [4508] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(763), 1,
      anon_sym_GT,
  [4515] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(765), 1,
      anon_sym_SEMI,
  [4522] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_COLON,
  [4529] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 1,
      ts_builtin_sym_end,
  [4536] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 1,
      sym_id,
  [4543] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 1,
      anon_sym_RPAREN,
  [4550] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 1,
      anon_sym_SEMI,
  [4557] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(775), 1,
      anon_sym_GT,
  [4564] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(777), 1,
      anon_sym_RBRACE,
  [4571] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(779), 1,
      sym_valid_semver,
  [4578] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_SEMI,
  [4585] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(783), 1,
      anon_sym_COLON,
  [4592] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(628), 1,
      sym_id,
  [4599] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(785), 1,
      sym_id,
  [4606] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(787), 1,
      anon_sym_SEMI,
  [4613] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(789), 1,
      anon_sym_SEMI,
  [4620] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(791), 1,
      anon_sym_SEMI,
  [4627] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(793), 1,
      anon_sym_SEMI,
  [4634] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(795), 1,
      anon_sym_COLON,
  [4641] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(797), 1,
      anon_sym_LT,
  [4648] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(799), 1,
      sym_id,
  [4655] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 1,
      anon_sym_LT,
  [4662] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 1,
      anon_sym_LT,
  [4669] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(805), 1,
      anon_sym_EQ,
  [4676] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(807), 1,
      anon_sym_LT,
  [4683] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(809), 1,
      anon_sym_SEMI,
  [4690] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(811), 1,
      anon_sym_SEMI,
  [4697] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_LBRACE,
  [4704] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      anon_sym_COLON,
  [4711] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(817), 1,
      anon_sym_SEMI,
  [4718] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(819), 1,
      sym_id,
  [4725] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 1,
      anon_sym_SEMI,
  [4732] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(823), 1,
      anon_sym_RPAREN,
  [4739] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
      anon_sym_SEMI,
  [4746] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      sym_id,
  [4753] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(829), 1,
      sym_id,
  [4760] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 1,
      sym_id,
  [4767] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(833), 1,
      sym_id,
  [4774] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_RBRACE,
  [4781] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym_RBRACE,
  [4788] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      anon_sym_EQ,
  [4795] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(841), 1,
      anon_sym_as,
  [4802] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      sym_id,
  [4809] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 1,
      anon_sym_LBRACE,
  [4816] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 1,
      anon_sym_DOT,
  [4823] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(849), 1,
      anon_sym_GT,
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
  [SMALL_STATE(86)] = 2161,
  [SMALL_STATE(87)] = 2178,
  [SMALL_STATE(88)] = 2195,
  [SMALL_STATE(89)] = 2212,
  [SMALL_STATE(90)] = 2229,
  [SMALL_STATE(91)] = 2246,
  [SMALL_STATE(92)] = 2263,
  [SMALL_STATE(93)] = 2280,
  [SMALL_STATE(94)] = 2297,
  [SMALL_STATE(95)] = 2314,
  [SMALL_STATE(96)] = 2331,
  [SMALL_STATE(97)] = 2348,
  [SMALL_STATE(98)] = 2370,
  [SMALL_STATE(99)] = 2392,
  [SMALL_STATE(100)] = 2414,
  [SMALL_STATE(101)] = 2436,
  [SMALL_STATE(102)] = 2458,
  [SMALL_STATE(103)] = 2477,
  [SMALL_STATE(104)] = 2494,
  [SMALL_STATE(105)] = 2514,
  [SMALL_STATE(106)] = 2528,
  [SMALL_STATE(107)] = 2548,
  [SMALL_STATE(108)] = 2568,
  [SMALL_STATE(109)] = 2582,
  [SMALL_STATE(110)] = 2602,
  [SMALL_STATE(111)] = 2622,
  [SMALL_STATE(112)] = 2633,
  [SMALL_STATE(113)] = 2644,
  [SMALL_STATE(114)] = 2663,
  [SMALL_STATE(115)] = 2674,
  [SMALL_STATE(116)] = 2685,
  [SMALL_STATE(117)] = 2696,
  [SMALL_STATE(118)] = 2709,
  [SMALL_STATE(119)] = 2728,
  [SMALL_STATE(120)] = 2739,
  [SMALL_STATE(121)] = 2758,
  [SMALL_STATE(122)] = 2769,
  [SMALL_STATE(123)] = 2780,
  [SMALL_STATE(124)] = 2790,
  [SMALL_STATE(125)] = 2800,
  [SMALL_STATE(126)] = 2816,
  [SMALL_STATE(127)] = 2826,
  [SMALL_STATE(128)] = 2836,
  [SMALL_STATE(129)] = 2846,
  [SMALL_STATE(130)] = 2856,
  [SMALL_STATE(131)] = 2866,
  [SMALL_STATE(132)] = 2876,
  [SMALL_STATE(133)] = 2892,
  [SMALL_STATE(134)] = 2902,
  [SMALL_STATE(135)] = 2918,
  [SMALL_STATE(136)] = 2928,
  [SMALL_STATE(137)] = 2938,
  [SMALL_STATE(138)] = 2948,
  [SMALL_STATE(139)] = 2961,
  [SMALL_STATE(140)] = 2974,
  [SMALL_STATE(141)] = 2987,
  [SMALL_STATE(142)] = 3000,
  [SMALL_STATE(143)] = 3011,
  [SMALL_STATE(144)] = 3024,
  [SMALL_STATE(145)] = 3037,
  [SMALL_STATE(146)] = 3050,
  [SMALL_STATE(147)] = 3063,
  [SMALL_STATE(148)] = 3076,
  [SMALL_STATE(149)] = 3089,
  [SMALL_STATE(150)] = 3100,
  [SMALL_STATE(151)] = 3113,
  [SMALL_STATE(152)] = 3126,
  [SMALL_STATE(153)] = 3137,
  [SMALL_STATE(154)] = 3150,
  [SMALL_STATE(155)] = 3163,
  [SMALL_STATE(156)] = 3176,
  [SMALL_STATE(157)] = 3189,
  [SMALL_STATE(158)] = 3202,
  [SMALL_STATE(159)] = 3215,
  [SMALL_STATE(160)] = 3228,
  [SMALL_STATE(161)] = 3241,
  [SMALL_STATE(162)] = 3254,
  [SMALL_STATE(163)] = 3267,
  [SMALL_STATE(164)] = 3280,
  [SMALL_STATE(165)] = 3293,
  [SMALL_STATE(166)] = 3306,
  [SMALL_STATE(167)] = 3319,
  [SMALL_STATE(168)] = 3332,
  [SMALL_STATE(169)] = 3345,
  [SMALL_STATE(170)] = 3358,
  [SMALL_STATE(171)] = 3371,
  [SMALL_STATE(172)] = 3384,
  [SMALL_STATE(173)] = 3397,
  [SMALL_STATE(174)] = 3410,
  [SMALL_STATE(175)] = 3423,
  [SMALL_STATE(176)] = 3434,
  [SMALL_STATE(177)] = 3447,
  [SMALL_STATE(178)] = 3460,
  [SMALL_STATE(179)] = 3473,
  [SMALL_STATE(180)] = 3486,
  [SMALL_STATE(181)] = 3497,
  [SMALL_STATE(182)] = 3510,
  [SMALL_STATE(183)] = 3523,
  [SMALL_STATE(184)] = 3536,
  [SMALL_STATE(185)] = 3549,
  [SMALL_STATE(186)] = 3562,
  [SMALL_STATE(187)] = 3575,
  [SMALL_STATE(188)] = 3588,
  [SMALL_STATE(189)] = 3601,
  [SMALL_STATE(190)] = 3614,
  [SMALL_STATE(191)] = 3627,
  [SMALL_STATE(192)] = 3640,
  [SMALL_STATE(193)] = 3653,
  [SMALL_STATE(194)] = 3666,
  [SMALL_STATE(195)] = 3679,
  [SMALL_STATE(196)] = 3692,
  [SMALL_STATE(197)] = 3703,
  [SMALL_STATE(198)] = 3716,
  [SMALL_STATE(199)] = 3729,
  [SMALL_STATE(200)] = 3742,
  [SMALL_STATE(201)] = 3755,
  [SMALL_STATE(202)] = 3768,
  [SMALL_STATE(203)] = 3781,
  [SMALL_STATE(204)] = 3794,
  [SMALL_STATE(205)] = 3804,
  [SMALL_STATE(206)] = 3814,
  [SMALL_STATE(207)] = 3824,
  [SMALL_STATE(208)] = 3834,
  [SMALL_STATE(209)] = 3844,
  [SMALL_STATE(210)] = 3852,
  [SMALL_STATE(211)] = 3862,
  [SMALL_STATE(212)] = 3870,
  [SMALL_STATE(213)] = 3878,
  [SMALL_STATE(214)] = 3888,
  [SMALL_STATE(215)] = 3898,
  [SMALL_STATE(216)] = 3908,
  [SMALL_STATE(217)] = 3918,
  [SMALL_STATE(218)] = 3926,
  [SMALL_STATE(219)] = 3936,
  [SMALL_STATE(220)] = 3946,
  [SMALL_STATE(221)] = 3956,
  [SMALL_STATE(222)] = 3964,
  [SMALL_STATE(223)] = 3974,
  [SMALL_STATE(224)] = 3982,
  [SMALL_STATE(225)] = 3992,
  [SMALL_STATE(226)] = 4000,
  [SMALL_STATE(227)] = 4008,
  [SMALL_STATE(228)] = 4016,
  [SMALL_STATE(229)] = 4026,
  [SMALL_STATE(230)] = 4036,
  [SMALL_STATE(231)] = 4046,
  [SMALL_STATE(232)] = 4056,
  [SMALL_STATE(233)] = 4066,
  [SMALL_STATE(234)] = 4076,
  [SMALL_STATE(235)] = 4086,
  [SMALL_STATE(236)] = 4096,
  [SMALL_STATE(237)] = 4106,
  [SMALL_STATE(238)] = 4116,
  [SMALL_STATE(239)] = 4126,
  [SMALL_STATE(240)] = 4134,
  [SMALL_STATE(241)] = 4142,
  [SMALL_STATE(242)] = 4152,
  [SMALL_STATE(243)] = 4162,
  [SMALL_STATE(244)] = 4172,
  [SMALL_STATE(245)] = 4180,
  [SMALL_STATE(246)] = 4188,
  [SMALL_STATE(247)] = 4198,
  [SMALL_STATE(248)] = 4208,
  [SMALL_STATE(249)] = 4218,
  [SMALL_STATE(250)] = 4228,
  [SMALL_STATE(251)] = 4238,
  [SMALL_STATE(252)] = 4248,
  [SMALL_STATE(253)] = 4256,
  [SMALL_STATE(254)] = 4266,
  [SMALL_STATE(255)] = 4276,
  [SMALL_STATE(256)] = 4286,
  [SMALL_STATE(257)] = 4296,
  [SMALL_STATE(258)] = 4306,
  [SMALL_STATE(259)] = 4316,
  [SMALL_STATE(260)] = 4326,
  [SMALL_STATE(261)] = 4333,
  [SMALL_STATE(262)] = 4340,
  [SMALL_STATE(263)] = 4347,
  [SMALL_STATE(264)] = 4354,
  [SMALL_STATE(265)] = 4361,
  [SMALL_STATE(266)] = 4368,
  [SMALL_STATE(267)] = 4375,
  [SMALL_STATE(268)] = 4382,
  [SMALL_STATE(269)] = 4389,
  [SMALL_STATE(270)] = 4396,
  [SMALL_STATE(271)] = 4403,
  [SMALL_STATE(272)] = 4410,
  [SMALL_STATE(273)] = 4417,
  [SMALL_STATE(274)] = 4424,
  [SMALL_STATE(275)] = 4431,
  [SMALL_STATE(276)] = 4438,
  [SMALL_STATE(277)] = 4445,
  [SMALL_STATE(278)] = 4452,
  [SMALL_STATE(279)] = 4459,
  [SMALL_STATE(280)] = 4466,
  [SMALL_STATE(281)] = 4473,
  [SMALL_STATE(282)] = 4480,
  [SMALL_STATE(283)] = 4487,
  [SMALL_STATE(284)] = 4494,
  [SMALL_STATE(285)] = 4501,
  [SMALL_STATE(286)] = 4508,
  [SMALL_STATE(287)] = 4515,
  [SMALL_STATE(288)] = 4522,
  [SMALL_STATE(289)] = 4529,
  [SMALL_STATE(290)] = 4536,
  [SMALL_STATE(291)] = 4543,
  [SMALL_STATE(292)] = 4550,
  [SMALL_STATE(293)] = 4557,
  [SMALL_STATE(294)] = 4564,
  [SMALL_STATE(295)] = 4571,
  [SMALL_STATE(296)] = 4578,
  [SMALL_STATE(297)] = 4585,
  [SMALL_STATE(298)] = 4592,
  [SMALL_STATE(299)] = 4599,
  [SMALL_STATE(300)] = 4606,
  [SMALL_STATE(301)] = 4613,
  [SMALL_STATE(302)] = 4620,
  [SMALL_STATE(303)] = 4627,
  [SMALL_STATE(304)] = 4634,
  [SMALL_STATE(305)] = 4641,
  [SMALL_STATE(306)] = 4648,
  [SMALL_STATE(307)] = 4655,
  [SMALL_STATE(308)] = 4662,
  [SMALL_STATE(309)] = 4669,
  [SMALL_STATE(310)] = 4676,
  [SMALL_STATE(311)] = 4683,
  [SMALL_STATE(312)] = 4690,
  [SMALL_STATE(313)] = 4697,
  [SMALL_STATE(314)] = 4704,
  [SMALL_STATE(315)] = 4711,
  [SMALL_STATE(316)] = 4718,
  [SMALL_STATE(317)] = 4725,
  [SMALL_STATE(318)] = 4732,
  [SMALL_STATE(319)] = 4739,
  [SMALL_STATE(320)] = 4746,
  [SMALL_STATE(321)] = 4753,
  [SMALL_STATE(322)] = 4760,
  [SMALL_STATE(323)] = 4767,
  [SMALL_STATE(324)] = 4774,
  [SMALL_STATE(325)] = 4781,
  [SMALL_STATE(326)] = 4788,
  [SMALL_STATE(327)] = 4795,
  [SMALL_STATE(328)] = 4802,
  [SMALL_STATE(329)] = 4809,
  [SMALL_STATE(330)] = 4816,
  [SMALL_STATE(331)] = 4823,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_list, 3),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_list, 2),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_world_body_repeat1, 2), SHIFT_REPEAT(174),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_world_body_repeat1, 2),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_world_body_repeat1, 2), SHIFT_REPEAT(177),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_world_body_repeat1, 2), SHIFT_REPEAT(178),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_world_body_repeat1, 2), SHIFT_REPEAT(179),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_world_body_repeat1, 2), SHIFT_REPEAT(270),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_world_body_repeat1, 2), SHIFT_REPEAT(269),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_world_body_repeat1, 2), SHIFT_REPEAT(268),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_world_body_repeat1, 2), SHIFT_REPEAT(260),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_world_body_repeat1, 2), SHIFT_REPEAT(266),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_world_body_repeat1, 2), SHIFT_REPEAT(265),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(143),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(264),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_body_repeat1, 2),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(328),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(320),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(321),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(322),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(323),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(290),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_body, 3, .production_id = 14),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource_item, 2, .production_id = 12),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_body, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_resource_item, 2, .production_id = 12),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_items, 3, .production_id = 12),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant_body, 5, .production_id = 42),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_type, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource_body, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant_body, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flags_body, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_item, 5, .production_id = 22),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_body, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_body, 3, .production_id = 23),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flags_body, 3, .production_id = 24),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant_body, 3, .production_id = 25),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_item, 4, .production_id = 17),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 3, .production_id = 26),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_item, 4, .production_id = 12),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource_body, 3),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_item, 4, .production_id = 12),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_names_body, 3, .production_id = 29),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_body, 4, .production_id = 32),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource_item, 3, .production_id = 16),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource_item, 3, .production_id = 12),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flags_body, 4, .production_id = 33),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant_items, 3, .production_id = 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant_body, 4, .production_id = 34),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flags_items, 3, .production_id = 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 4, .production_id = 35),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_world_items, 1, .production_id = 3),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_world_items, 1, .production_id = 4),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_world_items, 1, .production_id = 5),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_world_items, 1, .production_id = 6),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_world_items, 1, .production_id = 7),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef_item, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_item, 3, .production_id = 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_item, 3, .production_id = 15),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_item, 3),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_item, 3),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_item, 7),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flags_body, 5, .production_id = 41),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_body, 5, .production_id = 40),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 5, .production_id = 43),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_body, 5, .production_id = 40),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_resource_item, 3, .production_id = 12),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_item, 4, .production_id = 18),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_item, 4, .production_id = 18),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_body, 3, .production_id = 26),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_body, 5, .production_id = 43),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variant_body, 5, .production_id = 42),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variant_body, 3, .production_id = 25),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flags_body, 3, .production_id = 24),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_body, 3, .production_id = 23),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flags_body, 5, .production_id = 41),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_item, 5, .production_id = 22),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_resource_body, 2),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_body, 4, .production_id = 32),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_body, 2),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variant_body, 2),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flags_body, 2),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_body, 2),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flags_body, 4, .production_id = 33),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_resource_item, 3, .production_id = 16),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variant_body, 4, .production_id = 34),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typedef_item, 1),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_resource_body, 3),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_items, 3, .production_id = 12),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variant_items, 3, .production_id = 2),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flags_items, 3, .production_id = 2),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_items, 1, .production_id = 10),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_items, 1, .production_id = 10),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_items, 1, .production_id = 9),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_items, 1, .production_id = 9),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_item, 3, .production_id = 2),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_body, 4, .production_id = 35),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use_item, 7),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_items, 1, .production_id = 8),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_items, 1, .production_id = 8),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_path, 2),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(146),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(306),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(299),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_path, 3),
  [332] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_package_decl_repeat2, 2), SHIFT_REPEAT(279),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_package_decl_repeat2, 2),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_package_decl_repeat2, 2),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result, 1),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [355] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_resource_body_repeat1, 2), SHIFT_REPEAT(304),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_resource_body_repeat1, 2),
  [360] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_resource_body_repeat1, 2), SHIFT_REPEAT(206),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ty, 1),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_package_decl_repeat1, 2),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 4),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_path, 1),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result, 4),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result, 6),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_handle, 4),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_decl, 4),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_world_body, 3, .production_id = 13),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_decl, 7),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_path, 4),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_item, 3, .production_id = 2),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_toplevel_use_item, 5, .production_id = 11),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_world_item, 3, .production_id = 2),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_decl, 6),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_path, 5),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_decl, 5),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_toplevel_use_item, 3, .production_id = 1),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_world_body, 2),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_type, 2, .production_id = 19),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_names_item, 1),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_names_list, 1, .production_id = 20),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_names_list, 1, .production_id = 21),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_resource_method, 1),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource_method, 1),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant_case, 1, .production_id = 18),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_type_list, 1),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_resource_method, 5),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource_method, 5),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_names_list, 2, .production_id = 20),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_names_list, 2, .production_id = 28),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [553] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_list_repeat1, 2), SHIFT_REPEAT(14),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_list_repeat1, 2),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_names_list, 2, .production_id = 21),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_names_list, 2, .production_id = 30),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_list, 1),
  [568] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_named_type_list_repeat1, 2), SHIFT_REPEAT(257),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_named_type_list_repeat1, 2),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_type_list, 3),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_use_names_list_repeat1, 2, .production_id = 37),
  [577] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_use_names_list_repeat1, 2, .production_id = 37), SHIFT_REPEAT(250),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variant_body_repeat1, 2),
  [584] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variant_body_repeat1, 2), SHIFT_REPEAT(241),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_include_names_list_repeat1, 2, .production_id = 39),
  [591] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_include_names_list_repeat1, 2, .production_id = 39), SHIFT_REPEAT(251),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_resource_method, 3),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource_method, 3),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_body_repeat1, 2),
  [604] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_body_repeat1, 2), SHIFT_REPEAT(204),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_names_list, 3, .production_id = 30),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_names_list, 3, .production_id = 28),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_type_list, 2),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flags_body_repeat1, 2),
  [615] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flags_body_repeat1, 2), SHIFT_REPEAT(298),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_field, 3, .production_id = 31),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 3),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_names_item, 3),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_use_names_list_repeat1, 2, .production_id = 36),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_names_item, 3),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_include_names_list_repeat1, 2, .production_id = 38),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant_case, 4, .production_id = 31),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 2),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_type, 3, .production_id = 31),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [708] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_decl_repeat1, 2), SHIFT_REPEAT(288),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_type, 3, .production_id = 27),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_package_decl_repeat1, 2),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result_list, 4),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [767] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result_list, 3),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result_list, 2),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
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
