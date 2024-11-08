#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 164
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 88
#define ALIAS_COUNT 0
#define TOKEN_COUNT 49
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 11
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 24

enum ts_symbol_identifiers {
  sym_block_begin = 1,
  sym_block_end = 2,
  anon_sym_namespace = 3,
  anon_sym_import = 4,
  anon_sym_struct = 5,
  anon_sym_SEMI = 6,
  anon_sym_using = 7,
  anon_sym_EQ = 8,
  anon_sym_LBRACK = 9,
  anon_sym_LPAREN = 10,
  anon_sym_RPAREN = 11,
  anon_sym_RBRACK = 12,
  anon_sym_COLON = 13,
  anon_sym_required = 14,
  anon_sym_required_optional = 15,
  anon_sym_optional = 16,
  anon_sym_view_of = 17,
  anon_sym_COMMA = 18,
  anon_sym_enum = 19,
  anon_sym_string = 20,
  anon_sym_wstring = 21,
  aux_sym_primitive_type_token1 = 22,
  aux_sym_primitive_type_token2 = 23,
  anon_sym_blob = 24,
  anon_sym_float = 25,
  anon_sym_double = 26,
  anon_sym_bool = 27,
  anon_sym_list = 28,
  anon_sym_vector = 29,
  anon_sym_set = 30,
  anon_sym_map = 31,
  anon_sym_nullable = 32,
  anon_sym_maybe = 33,
  anon_sym_bonded = 34,
  anon_sym_LT = 35,
  anon_sym_GT = 36,
  aux_sym_enum_constant_token1 = 37,
  aux_sym_enum_constant_token2 = 38,
  anon_sym__ = 39,
  sym_nothing = 40,
  aux_sym_integer_token1 = 41,
  anon_sym_0 = 42,
  anon_sym_DOT = 43,
  anon_sym_DQUOTE = 44,
  sym_string_content = 45,
  sym_escape_sequence = 46,
  sym_identifier = 47,
  sym_comment = 48,
  sym_source_file = 49,
  sym_namespace = 50,
  sym_import = 51,
  sym_forward_decl = 52,
  sym_using = 53,
  sym_attribute = 54,
  sym_struct = 55,
  sym_struct_body = 56,
  sym_struct_field = 57,
  sym_struct_field_required_variant = 58,
  sym_struct_view = 59,
  sym_struct_view_body = 60,
  sym_enum = 61,
  sym_enum_body = 62,
  sym_enum_field = 63,
  sym_type = 64,
  sym_primitive_type = 65,
  sym_container_type = 66,
  sym_builtin_type = 67,
  sym_user_defined_type = 68,
  sym_generic_type_decl = 69,
  sym_generic_type = 70,
  sym_default_value = 71,
  sym_enum_constant = 72,
  sym_field_name = 73,
  sym_integer = 74,
  sym_full_ident = 75,
  sym_string = 76,
  aux_sym__string_content = 77,
  aux_sym_source_file_repeat1 = 78,
  aux_sym_source_file_repeat2 = 79,
  aux_sym_struct_body_repeat1 = 80,
  aux_sym_struct_view_body_repeat1 = 81,
  aux_sym_enum_body_repeat1 = 82,
  aux_sym_generic_type_decl_repeat1 = 83,
  aux_sym_generic_type_repeat1 = 84,
  aux_sym_enum_constant_repeat1 = 85,
  aux_sym_integer_repeat1 = 86,
  aux_sym_full_ident_repeat1 = 87,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_block_begin] = "block_begin",
  [sym_block_end] = "block_end",
  [anon_sym_namespace] = "namespace",
  [anon_sym_import] = "import",
  [anon_sym_struct] = "struct",
  [anon_sym_SEMI] = ";",
  [anon_sym_using] = "using",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACK] = "[",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COLON] = ":",
  [anon_sym_required] = "required",
  [anon_sym_required_optional] = "required_optional",
  [anon_sym_optional] = "optional",
  [anon_sym_view_of] = "view_of",
  [anon_sym_COMMA] = ",",
  [anon_sym_enum] = "enum",
  [anon_sym_string] = "string",
  [anon_sym_wstring] = "wstring",
  [aux_sym_primitive_type_token1] = "primitive_type_token1",
  [aux_sym_primitive_type_token2] = "primitive_type_token2",
  [anon_sym_blob] = "blob",
  [anon_sym_float] = "float",
  [anon_sym_double] = "double",
  [anon_sym_bool] = "bool",
  [anon_sym_list] = "list",
  [anon_sym_vector] = "vector",
  [anon_sym_set] = "set",
  [anon_sym_map] = "map",
  [anon_sym_nullable] = "nullable",
  [anon_sym_maybe] = "maybe",
  [anon_sym_bonded] = "bonded",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [aux_sym_enum_constant_token1] = "enum_constant_token1",
  [aux_sym_enum_constant_token2] = "enum_constant_token2",
  [anon_sym__] = "_",
  [sym_nothing] = "nothing",
  [aux_sym_integer_token1] = "integer_token1",
  [anon_sym_0] = "0",
  [anon_sym_DOT] = ".",
  [anon_sym_DQUOTE] = "\"",
  [sym_string_content] = "string_content",
  [sym_escape_sequence] = "escape_sequence",
  [sym_identifier] = "identifier",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_namespace] = "namespace",
  [sym_import] = "import",
  [sym_forward_decl] = "forward_decl",
  [sym_using] = "using",
  [sym_attribute] = "attribute",
  [sym_struct] = "struct",
  [sym_struct_body] = "struct_body",
  [sym_struct_field] = "struct_field",
  [sym_struct_field_required_variant] = "struct_field_required_variant",
  [sym_struct_view] = "struct_view",
  [sym_struct_view_body] = "struct_view_body",
  [sym_enum] = "enum",
  [sym_enum_body] = "enum_body",
  [sym_enum_field] = "enum_field",
  [sym_type] = "type",
  [sym_primitive_type] = "primitive_type",
  [sym_container_type] = "container_type",
  [sym_builtin_type] = "builtin_type",
  [sym_user_defined_type] = "user_defined_type",
  [sym_generic_type_decl] = "generic_type_decl",
  [sym_generic_type] = "generic_type",
  [sym_default_value] = "default_value",
  [sym_enum_constant] = "enum_constant",
  [sym_field_name] = "field_name",
  [sym_integer] = "integer",
  [sym_full_ident] = "full_ident",
  [sym_string] = "string",
  [aux_sym__string_content] = "_string_content",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_struct_body_repeat1] = "struct_body_repeat1",
  [aux_sym_struct_view_body_repeat1] = "struct_view_body_repeat1",
  [aux_sym_enum_body_repeat1] = "enum_body_repeat1",
  [aux_sym_generic_type_decl_repeat1] = "generic_type_decl_repeat1",
  [aux_sym_generic_type_repeat1] = "generic_type_repeat1",
  [aux_sym_enum_constant_repeat1] = "enum_constant_repeat1",
  [aux_sym_integer_repeat1] = "integer_repeat1",
  [aux_sym_full_ident_repeat1] = "full_ident_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_block_begin] = sym_block_begin,
  [sym_block_end] = sym_block_end,
  [anon_sym_namespace] = anon_sym_namespace,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_using] = anon_sym_using,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_required] = anon_sym_required,
  [anon_sym_required_optional] = anon_sym_required_optional,
  [anon_sym_optional] = anon_sym_optional,
  [anon_sym_view_of] = anon_sym_view_of,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_wstring] = anon_sym_wstring,
  [aux_sym_primitive_type_token1] = aux_sym_primitive_type_token1,
  [aux_sym_primitive_type_token2] = aux_sym_primitive_type_token2,
  [anon_sym_blob] = anon_sym_blob,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_double] = anon_sym_double,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_list] = anon_sym_list,
  [anon_sym_vector] = anon_sym_vector,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_map] = anon_sym_map,
  [anon_sym_nullable] = anon_sym_nullable,
  [anon_sym_maybe] = anon_sym_maybe,
  [anon_sym_bonded] = anon_sym_bonded,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [aux_sym_enum_constant_token1] = aux_sym_enum_constant_token1,
  [aux_sym_enum_constant_token2] = aux_sym_enum_constant_token2,
  [anon_sym__] = anon_sym__,
  [sym_nothing] = sym_nothing,
  [aux_sym_integer_token1] = aux_sym_integer_token1,
  [anon_sym_0] = anon_sym_0,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_string_content] = sym_string_content,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_identifier] = sym_identifier,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_namespace] = sym_namespace,
  [sym_import] = sym_import,
  [sym_forward_decl] = sym_forward_decl,
  [sym_using] = sym_using,
  [sym_attribute] = sym_attribute,
  [sym_struct] = sym_struct,
  [sym_struct_body] = sym_struct_body,
  [sym_struct_field] = sym_struct_field,
  [sym_struct_field_required_variant] = sym_struct_field_required_variant,
  [sym_struct_view] = sym_struct_view,
  [sym_struct_view_body] = sym_struct_view_body,
  [sym_enum] = sym_enum,
  [sym_enum_body] = sym_enum_body,
  [sym_enum_field] = sym_enum_field,
  [sym_type] = sym_type,
  [sym_primitive_type] = sym_primitive_type,
  [sym_container_type] = sym_container_type,
  [sym_builtin_type] = sym_builtin_type,
  [sym_user_defined_type] = sym_user_defined_type,
  [sym_generic_type_decl] = sym_generic_type_decl,
  [sym_generic_type] = sym_generic_type,
  [sym_default_value] = sym_default_value,
  [sym_enum_constant] = sym_enum_constant,
  [sym_field_name] = sym_field_name,
  [sym_integer] = sym_integer,
  [sym_full_ident] = sym_full_ident,
  [sym_string] = sym_string,
  [aux_sym__string_content] = aux_sym__string_content,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym_struct_body_repeat1] = aux_sym_struct_body_repeat1,
  [aux_sym_struct_view_body_repeat1] = aux_sym_struct_view_body_repeat1,
  [aux_sym_enum_body_repeat1] = aux_sym_enum_body_repeat1,
  [aux_sym_generic_type_decl_repeat1] = aux_sym_generic_type_decl_repeat1,
  [aux_sym_generic_type_repeat1] = aux_sym_generic_type_repeat1,
  [aux_sym_enum_constant_repeat1] = aux_sym_enum_constant_repeat1,
  [aux_sym_integer_repeat1] = aux_sym_integer_repeat1,
  [aux_sym_full_ident_repeat1] = aux_sym_full_ident_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_block_begin] = {
    .visible = true,
    .named = true,
  },
  [sym_block_end] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_namespace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_struct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_using] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
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
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_required] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_required_optional] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_optional] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_view_of] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_wstring] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_primitive_type_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_primitive_type_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_blob] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_double] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_list] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vector] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_map] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nullable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_maybe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bonded] = {
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
  [aux_sym_enum_constant_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_constant_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [sym_nothing] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_integer_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_namespace] = {
    .visible = true,
    .named = true,
  },
  [sym_import] = {
    .visible = true,
    .named = true,
  },
  [sym_forward_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_using] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_struct] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_body] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_field] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_field_required_variant] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_view] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_view_body] = {
    .visible = true,
    .named = true,
  },
  [sym_enum] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_body] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_field] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_primitive_type] = {
    .visible = true,
    .named = true,
  },
  [sym_container_type] = {
    .visible = true,
    .named = true,
  },
  [sym_builtin_type] = {
    .visible = true,
    .named = true,
  },
  [sym_user_defined_type] = {
    .visible = true,
    .named = true,
  },
  [sym_generic_type_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_generic_type] = {
    .visible = true,
    .named = true,
  },
  [sym_default_value] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_field_name] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_full_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__string_content] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_struct_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_struct_view_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_generic_type_decl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_generic_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_constant_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_integer_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_full_ident_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_base_struct = 1,
  field_constant_name = 2,
  field_name = 3,
  field_ordinal = 4,
  field_path = 5,
  field_required_variant = 6,
  field_type = 7,
  field_type_alias = 8,
  field_value = 9,
  field_view_name = 10,
  field_view_of_name = 11,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_base_struct] = "base_struct",
  [field_constant_name] = "constant_name",
  [field_name] = "name",
  [field_ordinal] = "ordinal",
  [field_path] = "path",
  [field_required_variant] = "required_variant",
  [field_type] = "type",
  [field_type_alias] = "type_alias",
  [field_value] = "value",
  [field_view_name] = "view_name",
  [field_view_of_name] = "view_of_name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 1},
  [7] = {.index = 8, .length = 2},
  [8] = {.index = 10, .length = 2},
  [9] = {.index = 12, .length = 2},
  [10] = {.index = 14, .length = 2},
  [11] = {.index = 16, .length = 2},
  [12] = {.index = 18, .length = 2},
  [13] = {.index = 20, .length = 2},
  [14] = {.index = 22, .length = 2},
  [15] = {.index = 24, .length = 2},
  [16] = {.index = 26, .length = 1},
  [17] = {.index = 27, .length = 2},
  [18] = {.index = 29, .length = 1},
  [19] = {.index = 30, .length = 2},
  [20] = {.index = 32, .length = 2},
  [21] = {.index = 34, .length = 2},
  [22] = {.index = 36, .length = 3},
  [23] = {.index = 39, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_path, 1},
  [1] =
    {field_name, 1},
  [2] =
    {field_name, 2},
  [3] =
    {field_base_struct, 3},
    {field_name, 1},
  [5] =
    {field_view_name, 1},
    {field_view_of_name, 3},
  [7] =
    {field_constant_name, 0},
  [8] =
    {field_base_struct, 4},
    {field_name, 1},
  [10] =
    {field_type, 3},
    {field_type_alias, 1},
  [12] =
    {field_base_struct, 4},
    {field_name, 2},
  [14] =
    {field_view_name, 2},
    {field_view_of_name, 4},
  [16] =
    {field_name, 1},
    {field_name, 2, .inherited = true},
  [18] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
  [20] =
    {field_name, 1},
    {field_value, 3},
  [22] =
    {field_constant_name, 0},
    {field_value, 2},
  [24] =
    {field_base_struct, 5},
    {field_name, 2},
  [26] =
    {field_type, 2},
  [27] =
    {field_ordinal, 0},
    {field_type, 2},
  [29] =
    {field_type, 1},
  [30] =
    {field_type, 2},
    {field_type, 3, .inherited = true},
  [32] =
    {field_type, 0, .inherited = true},
    {field_type, 1, .inherited = true},
  [34] =
    {field_ordinal, 1},
    {field_type, 3},
  [36] =
    {field_ordinal, 0},
    {field_required_variant, 2},
    {field_type, 3},
  [39] =
    {field_ordinal, 1},
    {field_required_variant, 3},
    {field_type, 4},
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
  [25] = 25,
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
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
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
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(58);
      ADVANCE_MAP(
        '"', 105,
        '(', 68,
        ')', 69,
        ',', 76,
        '.', 104,
        '/', 3,
        '0', 103,
        ':', 71,
        ';', 64,
        '<', 95,
        '=', 66,
        '>', 96,
        '[', 67,
        '\\', 11,
        ']', 70,
        '_', 100,
        'n', 98,
        '{', 59,
        '}', 60,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(56);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '"') ADVANCE(105);
      if (lookahead == '/') ADVANCE(106);
      if (lookahead == '\\') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(109);
      if (lookahead != 0) ADVANCE(110);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(105);
      if (lookahead == '/') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(195);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(194);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        ',', 76,
        '/', 3,
        ':', 71,
        ';', 64,
        'b', 151,
        'd', 166,
        'f', 152,
        'i', 157,
        'l', 146,
        'm', 118,
        'n', 190,
        'o', 172,
        'r', 131,
        's', 137,
        'u', 145,
        'v', 132,
        'w', 179,
        '}', 60,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 7:
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == ';') ADVANCE(64);
      if (lookahead == '<') ADVANCE(95);
      if (lookahead == '=') ADVANCE(66);
      if (lookahead == '>') ADVANCE(96);
      if (lookahead == '}') ADVANCE(60);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 8:
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == ';') ADVANCE(64);
      if (lookahead == '_') ADVANCE(100);
      if (lookahead == '}') ADVANCE(60);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '0') ADVANCE(103);
      if (lookahead == 'n') ADVANCE(98);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '/', 3,
        '<', 95,
        'b', 151,
        'd', 166,
        'f', 152,
        'i', 157,
        'l', 146,
        'm', 118,
        'n', 190,
        'o', 172,
        's', 137,
        'u', 145,
        'v', 132,
        'w', 179,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 11:
      if (lookahead == 'U') ADVANCE(55);
      if (lookahead == 'u') ADVANCE(51);
      if (lookahead == 'x') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(111);
      END_STATE();
    case 12:
      if (lookahead == '_') ADVANCE(33);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(18);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(44);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 20:
      if (lookahead == 'f') ADVANCE(75);
      END_STATE();
    case 21:
      if (lookahead == 'g') ADVANCE(101);
      END_STATE();
    case 22:
      if (lookahead == 'g') ADVANCE(65);
      END_STATE();
    case 23:
      if (lookahead == 'h') ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 27:
      if (lookahead == 'm') ADVANCE(35);
      END_STATE();
    case 28:
      if (lookahead == 'm') ADVANCE(77);
      END_STATE();
    case 29:
      if (lookahead == 'm') ADVANCE(19);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 33:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 34:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 35:
      if (lookahead == 'p') ADVANCE(34);
      END_STATE();
    case 36:
      if (lookahead == 'p') ADVANCE(14);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 39:
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 40:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 45:
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 46:
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 47:
      if (lookahead == 'w') ADVANCE(12);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(54);
      END_STATE();
    case 56:
      if (eof) ADVANCE(58);
      ADVANCE_MAP(
        '"', 105,
        '(', 68,
        ')', 69,
        ',', 76,
        '.', 104,
        '/', 3,
        '0', 103,
        ':', 71,
        ';', 64,
        '<', 95,
        '=', 66,
        '>', 96,
        '[', 67,
        ']', 70,
        '_', 100,
        'n', 98,
        '{', 59,
        '}', 60,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(56);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 57:
      if (eof) ADVANCE(58);
      ADVANCE_MAP(
        ')', 69,
        '.', 104,
        '/', 3,
        '0', 103,
        ':', 71,
        ';', 64,
        '<', 95,
        '[', 67,
        'e', 31,
        'i', 27,
        'n', 13,
        's', 42,
        'u', 40,
        'v', 25,
        '{', 59,
        '}', 60,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(57);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(102);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_block_begin);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_block_end);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_namespace);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_required);
      if (lookahead == '_') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_required_optional);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_optional);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_view_of);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_wstring);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_primitive_type_token1);
      if (lookahead == '3') ADVANCE(114);
      if (lookahead == '6') ADVANCE(116);
      if (lookahead == '8') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_primitive_type_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_primitive_type_token2);
      if (lookahead == '3') ADVANCE(115);
      if (lookahead == '6') ADVANCE(117);
      if (lookahead == '8') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_primitive_type_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_blob);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_double);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_list);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_vector);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_set);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_map);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_nullable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_maybe);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_bonded);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_enum_constant_token1);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_enum_constant_token1);
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_enum_constant_token2);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_nothing);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '*') ADVANCE(108);
      if (lookahead == '/') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(110);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '*') ADVANCE(107);
      if (lookahead == '/') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '*') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '/') ADVANCE(106);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(109);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(110);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(182);
      if (lookahead == 't') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(164);
      if (lookahead == 'o') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(130);
      if (lookahead == 'o') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(91);
      if (lookahead == 'y') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'q') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(195);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 57},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 10},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 57},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 57},
  [15] = {.lex_state = 57},
  [16] = {.lex_state = 57},
  [17] = {.lex_state = 57},
  [18] = {.lex_state = 57},
  [19] = {.lex_state = 57},
  [20] = {.lex_state = 57},
  [21] = {.lex_state = 57},
  [22] = {.lex_state = 57},
  [23] = {.lex_state = 57},
  [24] = {.lex_state = 57},
  [25] = {.lex_state = 57},
  [26] = {.lex_state = 57},
  [27] = {.lex_state = 57},
  [28] = {.lex_state = 57},
  [29] = {.lex_state = 57},
  [30] = {.lex_state = 57},
  [31] = {.lex_state = 9},
  [32] = {.lex_state = 57},
  [33] = {.lex_state = 57},
  [34] = {.lex_state = 57},
  [35] = {.lex_state = 57},
  [36] = {.lex_state = 9},
  [37] = {.lex_state = 57},
  [38] = {.lex_state = 57},
  [39] = {.lex_state = 57},
  [40] = {.lex_state = 57},
  [41] = {.lex_state = 57},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 57},
  [45] = {.lex_state = 57},
  [46] = {.lex_state = 8},
  [47] = {.lex_state = 57},
  [48] = {.lex_state = 9},
  [49] = {.lex_state = 9},
  [50] = {.lex_state = 9},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 7},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 57},
  [56] = {.lex_state = 7},
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 57},
  [59] = {.lex_state = 57},
  [60] = {.lex_state = 57},
  [61] = {.lex_state = 57},
  [62] = {.lex_state = 57},
  [63] = {.lex_state = 57},
  [64] = {.lex_state = 57},
  [65] = {.lex_state = 57},
  [66] = {.lex_state = 57},
  [67] = {.lex_state = 57},
  [68] = {.lex_state = 57},
  [69] = {.lex_state = 57},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 57},
  [72] = {.lex_state = 57},
  [73] = {.lex_state = 57},
  [74] = {.lex_state = 57},
  [75] = {.lex_state = 57},
  [76] = {.lex_state = 57},
  [77] = {.lex_state = 57},
  [78] = {.lex_state = 57},
  [79] = {.lex_state = 57},
  [80] = {.lex_state = 57},
  [81] = {.lex_state = 57},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 7},
  [85] = {.lex_state = 7},
  [86] = {.lex_state = 57},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 7},
  [89] = {.lex_state = 57},
  [90] = {.lex_state = 57},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 57},
  [93] = {.lex_state = 57},
  [94] = {.lex_state = 57},
  [95] = {.lex_state = 57},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 57},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 7},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 57},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 7},
  [119] = {.lex_state = 7},
  [120] = {.lex_state = 7},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 7},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 7},
  [129] = {.lex_state = 7},
  [130] = {.lex_state = 7},
  [131] = {.lex_state = 7},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 7},
  [137] = {.lex_state = 7},
  [138] = {.lex_state = 7},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 7},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 7},
  [148] = {.lex_state = 7},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 7},
  [151] = {.lex_state = 7},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 7},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 7},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 7},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 7},
  [162] = {.lex_state = 7},
  [163] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_block_begin] = ACTIONS(1),
    [sym_block_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [aux_sym_enum_constant_token1] = ACTIONS(1),
    [aux_sym_enum_constant_token2] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [sym_nothing] = ACTIONS(1),
    [aux_sym_integer_token1] = ACTIONS(1),
    [anon_sym_0] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(140),
    [sym_namespace] = STATE(12),
    [sym_import] = STATE(12),
    [sym_forward_decl] = STATE(17),
    [sym_using] = STATE(17),
    [sym_attribute] = STATE(113),
    [sym_struct] = STATE(17),
    [sym_struct_view] = STATE(17),
    [sym_enum] = STATE(17),
    [aux_sym_source_file_repeat1] = STATE(12),
    [aux_sym_source_file_repeat2] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_namespace] = ACTIONS(7),
    [anon_sym_import] = ACTIONS(9),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_using] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_enum] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_optional,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(9), 1,
      sym_struct_field_required_variant,
    STATE(56), 1,
      sym_primitive_type,
    STATE(57), 1,
      sym_user_defined_type,
    STATE(85), 1,
      sym_generic_type,
    STATE(119), 1,
      sym_type,
    STATE(135), 1,
      sym_builtin_type,
    STATE(163), 1,
      sym_container_type,
    ACTIONS(19), 2,
      anon_sym_required,
      anon_sym_required_optional,
    ACTIONS(25), 7,
      anon_sym_list,
      anon_sym_vector,
      anon_sym_set,
      anon_sym_map,
      anon_sym_nullable,
      anon_sym_maybe,
      anon_sym_bonded,
    ACTIONS(23), 8,
      anon_sym_string,
      anon_sym_wstring,
      aux_sym_primitive_type_token1,
      aux_sym_primitive_type_token2,
      anon_sym_blob,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
  [54] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_optional,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(10), 1,
      sym_struct_field_required_variant,
    STATE(56), 1,
      sym_primitive_type,
    STATE(57), 1,
      sym_user_defined_type,
    STATE(85), 1,
      sym_generic_type,
    STATE(130), 1,
      sym_type,
    STATE(135), 1,
      sym_builtin_type,
    STATE(163), 1,
      sym_container_type,
    ACTIONS(19), 2,
      anon_sym_required,
      anon_sym_required_optional,
    ACTIONS(25), 7,
      anon_sym_list,
      anon_sym_vector,
      anon_sym_set,
      anon_sym_map,
      anon_sym_nullable,
      anon_sym_maybe,
      anon_sym_bonded,
    ACTIONS(23), 8,
      anon_sym_string,
      anon_sym_wstring,
      aux_sym_primitive_type_token1,
      aux_sym_primitive_type_token2,
      anon_sym_blob,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
  [108] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(56), 1,
      sym_primitive_type,
    STATE(57), 1,
      sym_user_defined_type,
    STATE(85), 1,
      sym_generic_type,
    STATE(112), 1,
      sym_type,
    STATE(135), 1,
      sym_builtin_type,
    STATE(163), 1,
      sym_container_type,
    ACTIONS(23), 8,
      anon_sym_string,
      anon_sym_wstring,
      aux_sym_primitive_type_token1,
      aux_sym_primitive_type_token2,
      anon_sym_blob,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
    ACTIONS(25), 8,
      anon_sym_optional,
      anon_sym_list,
      anon_sym_vector,
      anon_sym_set,
      anon_sym_map,
      anon_sym_nullable,
      anon_sym_maybe,
      anon_sym_bonded,
  [153] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(56), 1,
      sym_primitive_type,
    STATE(57), 1,
      sym_user_defined_type,
    STATE(85), 1,
      sym_generic_type,
    STATE(134), 1,
      sym_type,
    STATE(135), 1,
      sym_builtin_type,
    STATE(163), 1,
      sym_container_type,
    ACTIONS(23), 8,
      anon_sym_string,
      anon_sym_wstring,
      aux_sym_primitive_type_token1,
      aux_sym_primitive_type_token2,
      anon_sym_blob,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
    ACTIONS(25), 8,
      anon_sym_optional,
      anon_sym_list,
      anon_sym_vector,
      anon_sym_set,
      anon_sym_map,
      anon_sym_nullable,
      anon_sym_maybe,
      anon_sym_bonded,
  [198] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(56), 1,
      sym_primitive_type,
    STATE(57), 1,
      sym_user_defined_type,
    STATE(85), 1,
      sym_generic_type,
    STATE(99), 1,
      sym_type,
    STATE(135), 1,
      sym_builtin_type,
    STATE(163), 1,
      sym_container_type,
    ACTIONS(23), 8,
      anon_sym_string,
      anon_sym_wstring,
      aux_sym_primitive_type_token1,
      aux_sym_primitive_type_token2,
      anon_sym_blob,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
    ACTIONS(25), 8,
      anon_sym_optional,
      anon_sym_list,
      anon_sym_vector,
      anon_sym_set,
      anon_sym_map,
      anon_sym_nullable,
      anon_sym_maybe,
      anon_sym_bonded,
  [243] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(56), 1,
      sym_primitive_type,
    STATE(57), 1,
      sym_user_defined_type,
    STATE(85), 1,
      sym_generic_type,
    STATE(97), 1,
      sym_type,
    STATE(135), 1,
      sym_builtin_type,
    STATE(163), 1,
      sym_container_type,
    ACTIONS(23), 8,
      anon_sym_string,
      anon_sym_wstring,
      aux_sym_primitive_type_token1,
      aux_sym_primitive_type_token2,
      anon_sym_blob,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
    ACTIONS(25), 8,
      anon_sym_optional,
      anon_sym_list,
      anon_sym_vector,
      anon_sym_set,
      anon_sym_map,
      anon_sym_nullable,
      anon_sym_maybe,
      anon_sym_bonded,
  [288] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(56), 1,
      sym_primitive_type,
    STATE(57), 1,
      sym_user_defined_type,
    STATE(85), 1,
      sym_generic_type,
    STATE(124), 1,
      sym_type,
    STATE(135), 1,
      sym_builtin_type,
    STATE(163), 1,
      sym_container_type,
    ACTIONS(23), 8,
      anon_sym_string,
      anon_sym_wstring,
      aux_sym_primitive_type_token1,
      aux_sym_primitive_type_token2,
      anon_sym_blob,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
    ACTIONS(25), 8,
      anon_sym_optional,
      anon_sym_list,
      anon_sym_vector,
      anon_sym_set,
      anon_sym_map,
      anon_sym_nullable,
      anon_sym_maybe,
      anon_sym_bonded,
  [333] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(56), 1,
      sym_primitive_type,
    STATE(57), 1,
      sym_user_defined_type,
    STATE(85), 1,
      sym_generic_type,
    STATE(131), 1,
      sym_type,
    STATE(135), 1,
      sym_builtin_type,
    STATE(163), 1,
      sym_container_type,
    ACTIONS(23), 8,
      anon_sym_string,
      anon_sym_wstring,
      aux_sym_primitive_type_token1,
      aux_sym_primitive_type_token2,
      anon_sym_blob,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
    ACTIONS(25), 8,
      anon_sym_optional,
      anon_sym_list,
      anon_sym_vector,
      anon_sym_set,
      anon_sym_map,
      anon_sym_nullable,
      anon_sym_maybe,
      anon_sym_bonded,
  [378] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(56), 1,
      sym_primitive_type,
    STATE(57), 1,
      sym_user_defined_type,
    STATE(85), 1,
      sym_generic_type,
    STATE(120), 1,
      sym_type,
    STATE(135), 1,
      sym_builtin_type,
    STATE(163), 1,
      sym_container_type,
    ACTIONS(23), 8,
      anon_sym_string,
      anon_sym_wstring,
      aux_sym_primitive_type_token1,
      aux_sym_primitive_type_token2,
      anon_sym_blob,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
    ACTIONS(25), 8,
      anon_sym_optional,
      anon_sym_list,
      anon_sym_vector,
      anon_sym_set,
      anon_sym_map,
      anon_sym_nullable,
      anon_sym_maybe,
      anon_sym_bonded,
  [423] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LT,
    ACTIONS(29), 17,
      anon_sym_optional,
      anon_sym_string,
      anon_sym_wstring,
      aux_sym_primitive_type_token1,
      aux_sym_primitive_type_token2,
      anon_sym_blob,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_list,
      anon_sym_vector,
      anon_sym_set,
      anon_sym_map,
      anon_sym_nullable,
      anon_sym_maybe,
      anon_sym_bonded,
      sym_identifier,
  [449] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_namespace,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_struct,
    ACTIONS(13), 1,
      anon_sym_using,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_enum,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    STATE(113), 1,
      sym_attribute,
    STATE(19), 3,
      sym_namespace,
      sym_import,
      aux_sym_source_file_repeat1,
    STATE(15), 6,
      sym_forward_decl,
      sym_using,
      sym_struct,
      sym_struct_view,
      sym_enum,
      aux_sym_source_file_repeat2,
  [490] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 17,
      anon_sym_optional,
      anon_sym_string,
      anon_sym_wstring,
      aux_sym_primitive_type_token1,
      aux_sym_primitive_type_token2,
      anon_sym_blob,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_list,
      anon_sym_vector,
      anon_sym_set,
      anon_sym_map,
      anon_sym_nullable,
      anon_sym_maybe,
      anon_sym_bonded,
      sym_identifier,
  [513] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      anon_sym_struct,
    ACTIONS(40), 1,
      anon_sym_using,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(46), 1,
      anon_sym_enum,
    STATE(113), 1,
      sym_attribute,
    STATE(14), 6,
      sym_forward_decl,
      sym_using,
      sym_struct,
      sym_struct_view,
      sym_enum,
      aux_sym_source_file_repeat2,
  [543] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_struct,
    ACTIONS(13), 1,
      anon_sym_using,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_enum,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    STATE(113), 1,
      sym_attribute,
    STATE(14), 6,
      sym_forward_decl,
      sym_using,
      sym_struct,
      sym_struct_view,
      sym_enum,
      aux_sym_source_file_repeat2,
  [573] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      sym_block_begin,
    ACTIONS(55), 1,
      anon_sym_SEMI,
    ACTIONS(57), 1,
      anon_sym_COLON,
    ACTIONS(59), 1,
      anon_sym_view_of,
    ACTIONS(61), 1,
      anon_sym_LT,
    STATE(29), 1,
      sym_generic_type_decl,
    STATE(66), 1,
      sym_struct_body,
    ACTIONS(51), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [605] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_struct,
    ACTIONS(13), 1,
      anon_sym_using,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_enum,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    STATE(113), 1,
      sym_attribute,
    STATE(14), 6,
      sym_forward_decl,
      sym_using,
      sym_struct,
      sym_struct_view,
      sym_enum,
      aux_sym_source_file_repeat2,
  [635] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      sym_block_begin,
    ACTIONS(61), 1,
      anon_sym_LT,
    ACTIONS(65), 1,
      anon_sym_COLON,
    ACTIONS(67), 1,
      anon_sym_view_of,
    STATE(26), 1,
      sym_generic_type_decl,
    STATE(60), 1,
      sym_struct_body,
    ACTIONS(63), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [664] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_namespace,
    ACTIONS(74), 1,
      anon_sym_import,
    STATE(19), 3,
      sym_namespace,
      sym_import,
      aux_sym_source_file_repeat1,
    ACTIONS(69), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [686] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_DOT,
    STATE(22), 1,
      aux_sym_full_ident_repeat1,
    ACTIONS(77), 7,
      ts_builtin_sym_end,
      anon_sym_namespace,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [705] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_DOT,
    STATE(21), 1,
      aux_sym_full_ident_repeat1,
    ACTIONS(81), 7,
      ts_builtin_sym_end,
      anon_sym_namespace,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [724] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_DOT,
    STATE(21), 1,
      aux_sym_full_ident_repeat1,
    ACTIONS(86), 7,
      ts_builtin_sym_end,
      anon_sym_namespace,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [743] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 8,
      ts_builtin_sym_end,
      anon_sym_namespace,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
      anon_sym_DOT,
  [757] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(88), 1,
      sym_block_end,
    ACTIONS(90), 1,
      aux_sym_integer_token1,
    ACTIONS(92), 1,
      anon_sym_0,
    STATE(107), 1,
      sym_attribute,
    STATE(139), 1,
      sym_integer,
    STATE(25), 2,
      sym_struct_field,
      aux_sym_struct_body_repeat1,
  [783] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      sym_block_end,
    ACTIONS(96), 1,
      anon_sym_LBRACK,
    ACTIONS(99), 1,
      aux_sym_integer_token1,
    ACTIONS(102), 1,
      anon_sym_0,
    STATE(107), 1,
      sym_attribute,
    STATE(139), 1,
      sym_integer,
    STATE(25), 2,
      sym_struct_field,
      aux_sym_struct_body_repeat1,
  [809] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      sym_block_begin,
    ACTIONS(107), 1,
      anon_sym_COLON,
    STATE(68), 1,
      sym_struct_body,
    ACTIONS(105), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [829] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(90), 1,
      aux_sym_integer_token1,
    ACTIONS(92), 1,
      anon_sym_0,
    ACTIONS(109), 1,
      sym_block_end,
    STATE(107), 1,
      sym_attribute,
    STATE(139), 1,
      sym_integer,
    STATE(24), 2,
      sym_struct_field,
      aux_sym_struct_body_repeat1,
  [855] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 8,
      ts_builtin_sym_end,
      anon_sym_namespace,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_enum,
  [869] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      sym_block_begin,
    ACTIONS(115), 1,
      anon_sym_COLON,
    STATE(58), 1,
      sym_struct_body,
    ACTIONS(113), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [889] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 8,
      ts_builtin_sym_end,
      anon_sym_namespace,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_enum,
  [903] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      aux_sym_integer_token1,
    ACTIONS(92), 1,
      anon_sym_0,
    ACTIONS(119), 1,
      aux_sym_enum_constant_token1,
    ACTIONS(121), 1,
      sym_nothing,
    STATE(153), 1,
      sym_default_value,
    STATE(100), 2,
      sym_enum_constant,
      sym_integer,
  [926] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 7,
      ts_builtin_sym_end,
      sym_block_begin,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_enum,
  [939] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      sym_block_begin,
    STATE(64), 1,
      sym_struct_body,
    ACTIONS(125), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [956] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      sym_block_begin,
    STATE(71), 1,
      sym_struct_body,
    ACTIONS(127), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [973] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      sym_block_begin,
    STATE(69), 1,
      sym_enum_body,
    ACTIONS(129), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [990] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      aux_sym_integer_token1,
    ACTIONS(92), 1,
      anon_sym_0,
    ACTIONS(119), 1,
      aux_sym_enum_constant_token1,
    ACTIONS(121), 1,
      sym_nothing,
    STATE(116), 1,
      sym_default_value,
    STATE(100), 2,
      sym_enum_constant,
      sym_integer,
  [1013] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      sym_block_begin,
    STATE(73), 1,
      sym_struct_body,
    ACTIONS(133), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1030] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      sym_block_begin,
    STATE(74), 1,
      sym_struct_view_body,
    ACTIONS(135), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1047] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      sym_block_begin,
    STATE(65), 1,
      sym_struct_view_body,
    ACTIONS(139), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1064] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      sym_block_begin,
    STATE(77), 1,
      sym_struct_body,
    ACTIONS(141), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1081] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 7,
      ts_builtin_sym_end,
      sym_block_begin,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_enum,
  [1094] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(46), 1,
      aux_sym_enum_constant_repeat1,
    ACTIONS(145), 3,
      sym_block_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(147), 3,
      aux_sym_enum_constant_token1,
      aux_sym_enum_constant_token2,
      anon_sym__,
  [1111] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(43), 1,
      aux_sym_enum_constant_repeat1,
    ACTIONS(149), 3,
      sym_block_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(151), 3,
      aux_sym_enum_constant_token1,
      aux_sym_enum_constant_token2,
      anon_sym__,
  [1128] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 7,
      ts_builtin_sym_end,
      anon_sym_namespace,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1141] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      sym_block_begin,
    STATE(61), 1,
      sym_enum_body,
    ACTIONS(156), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1158] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(43), 1,
      aux_sym_enum_constant_repeat1,
    ACTIONS(158), 3,
      sym_block_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(160), 3,
      aux_sym_enum_constant_token1,
      aux_sym_enum_constant_token2,
      anon_sym__,
  [1175] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 7,
      ts_builtin_sym_end,
      anon_sym_namespace,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1188] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      aux_sym_integer_token1,
    ACTIONS(92), 1,
      anon_sym_0,
    ACTIONS(119), 1,
      aux_sym_enum_constant_token1,
    ACTIONS(121), 1,
      sym_nothing,
    STATE(133), 1,
      sym_default_value,
    STATE(100), 2,
      sym_enum_constant,
      sym_integer,
  [1211] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      aux_sym_integer_token1,
    ACTIONS(92), 1,
      anon_sym_0,
    ACTIONS(119), 1,
      aux_sym_enum_constant_token1,
    ACTIONS(121), 1,
      sym_nothing,
    STATE(158), 1,
      sym_default_value,
    STATE(100), 2,
      sym_enum_constant,
      sym_integer,
  [1234] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      aux_sym_integer_token1,
    ACTIONS(92), 1,
      anon_sym_0,
    ACTIONS(119), 1,
      aux_sym_enum_constant_token1,
    ACTIONS(121), 1,
      sym_nothing,
    STATE(160), 1,
      sym_default_value,
    STATE(100), 2,
      sym_enum_constant,
      sym_integer,
  [1257] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      aux_sym_enum_constant_token2,
    STATE(51), 1,
      aux_sym_integer_repeat1,
    ACTIONS(164), 4,
      sym_block_end,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_COMMA,
  [1273] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 6,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
  [1285] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      aux_sym_enum_constant_token2,
    STATE(54), 1,
      aux_sym_integer_repeat1,
    ACTIONS(171), 4,
      sym_block_end,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_COMMA,
  [1301] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      aux_sym_enum_constant_token2,
    STATE(51), 1,
      aux_sym_integer_repeat1,
    ACTIONS(175), 4,
      sym_block_end,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_COMMA,
  [1317] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1328] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_LT,
    ACTIONS(181), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_identifier,
  [1341] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_LT,
    ACTIONS(181), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_identifier,
  [1354] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1365] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1376] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1387] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1398] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1409] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1420] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1431] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1442] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1453] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1464] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1475] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1486] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
  [1497] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1508] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1519] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1530] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1541] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1552] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1563] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1574] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1585] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1596] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 4,
      anon_sym_struct,
      anon_sym_enum,
      aux_sym_integer_token1,
      anon_sym_0,
  [1606] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 4,
      sym_block_end,
      anon_sym_LBRACK,
      aux_sym_integer_token1,
      anon_sym_0,
  [1616] = 4,
    ACTIONS(231), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      sym_comment,
    STATE(82), 1,
      aux_sym__string_content,
    ACTIONS(233), 2,
      sym_string_content,
      sym_escape_sequence,
  [1630] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 4,
      sym_block_end,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_COMMA,
  [1640] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_identifier,
  [1650] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_identifier,
  [1660] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 4,
      sym_block_end,
      anon_sym_LBRACK,
      aux_sym_integer_token1,
      anon_sym_0,
  [1670] = 4,
    ACTIONS(236), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    STATE(82), 1,
      aux_sym__string_content,
    ACTIONS(244), 2,
      sym_string_content,
      sym_escape_sequence,
  [1684] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_identifier,
  [1694] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 4,
      sym_block_end,
      anon_sym_LBRACK,
      aux_sym_integer_token1,
      anon_sym_0,
  [1704] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 4,
      sym_block_end,
      anon_sym_LBRACK,
      aux_sym_integer_token1,
      anon_sym_0,
  [1714] = 4,
    ACTIONS(236), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_DQUOTE,
    STATE(87), 1,
      aux_sym__string_content,
    ACTIONS(254), 2,
      sym_string_content,
      sym_escape_sequence,
  [1728] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 4,
      sym_block_end,
      anon_sym_LBRACK,
      aux_sym_integer_token1,
      anon_sym_0,
  [1738] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 4,
      sym_block_end,
      anon_sym_LBRACK,
      aux_sym_integer_token1,
      anon_sym_0,
  [1748] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 4,
      sym_block_end,
      anon_sym_LBRACK,
      aux_sym_integer_token1,
      anon_sym_0,
  [1758] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 4,
      sym_block_end,
      anon_sym_LBRACK,
      aux_sym_integer_token1,
      anon_sym_0,
  [1768] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_COMMA,
    ACTIONS(267), 1,
      anon_sym_GT,
    STATE(96), 1,
      aux_sym_generic_type_decl_repeat1,
  [1781] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    ACTIONS(271), 1,
      anon_sym_GT,
    STATE(105), 1,
      aux_sym_generic_type_decl_repeat1,
  [1794] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_SEMI,
    ACTIONS(275), 1,
      anon_sym_COMMA,
    STATE(104), 1,
      aux_sym_struct_view_body_repeat1,
  [1807] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(279), 1,
      anon_sym_GT,
    STATE(106), 1,
      aux_sym_generic_type_repeat1,
  [1820] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 3,
      sym_block_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1829] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_EQ,
    ACTIONS(283), 2,
      sym_block_end,
      anon_sym_COMMA,
  [1840] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      sym_block_end,
    ACTIONS(289), 1,
      anon_sym_COMMA,
    STATE(102), 1,
      aux_sym_enum_body_repeat1,
  [1853] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      sym_block_end,
    ACTIONS(294), 1,
      anon_sym_COMMA,
    STATE(111), 1,
      aux_sym_enum_body_repeat1,
  [1866] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_COMMA,
    ACTIONS(296), 1,
      anon_sym_SEMI,
    STATE(108), 1,
      aux_sym_struct_view_body_repeat1,
  [1879] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    ACTIONS(298), 1,
      anon_sym_GT,
    STATE(96), 1,
      aux_sym_generic_type_decl_repeat1,
  [1892] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(300), 1,
      anon_sym_GT,
    STATE(110), 1,
      aux_sym_generic_type_repeat1,
  [1905] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      aux_sym_integer_token1,
    ACTIONS(92), 1,
      anon_sym_0,
    STATE(155), 1,
      sym_integer,
  [1918] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_SEMI,
    ACTIONS(304), 1,
      anon_sym_COMMA,
    STATE(108), 1,
      aux_sym_struct_view_body_repeat1,
  [1931] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      sym_block_end,
    ACTIONS(309), 1,
      sym_identifier,
    STATE(103), 1,
      sym_enum_field,
  [1944] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_COMMA,
    ACTIONS(314), 1,
      anon_sym_GT,
    STATE(110), 1,
      aux_sym_generic_type_repeat1,
  [1957] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_COMMA,
    ACTIONS(316), 1,
      sym_block_end,
    STATE(102), 1,
      aux_sym_enum_body_repeat1,
  [1970] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [1978] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_struct,
    ACTIONS(322), 1,
      anon_sym_enum,
  [1988] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [1996] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_SEMI,
    ACTIONS(328), 1,
      anon_sym_EQ,
  [2006] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 2,
      sym_block_end,
      anon_sym_COMMA,
  [2014] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 2,
      sym_block_end,
      anon_sym_COMMA,
  [2022] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      sym_identifier,
    STATE(44), 1,
      sym_full_ident,
  [2032] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      sym_identifier,
    STATE(115), 1,
      sym_field_name,
  [2042] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      sym_identifier,
    STATE(127), 1,
      sym_field_name,
  [2052] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_SEMI,
    ACTIONS(338), 1,
      anon_sym_EQ,
  [2062] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_SEMI,
    ACTIONS(342), 1,
      anon_sym_EQ,
  [2072] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [2080] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [2088] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      anon_sym_SEMI,
    ACTIONS(350), 1,
      sym_identifier,
  [2098] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_DQUOTE,
    STATE(47), 1,
      sym_string,
  [2108] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_SEMI,
    ACTIONS(356), 1,
      anon_sym_EQ,
  [2118] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      sym_identifier,
    STATE(149), 1,
      sym_user_defined_type,
  [2128] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      sym_identifier,
    STATE(117), 1,
      sym_enum_field,
  [2138] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      sym_identifier,
    STATE(121), 1,
      sym_field_name,
  [2148] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      sym_identifier,
    STATE(122), 1,
      sym_field_name,
  [2158] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_DQUOTE,
    STATE(143), 1,
      sym_string,
  [2168] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_SEMI,
  [2175] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      anon_sym_SEMI,
  [2182] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_LT,
  [2189] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      sym_identifier,
  [2196] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      sym_identifier,
  [2203] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      sym_identifier,
  [2210] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_COLON,
  [2217] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      ts_builtin_sym_end,
  [2224] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
  [2231] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      sym_block_end,
  [2238] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_RPAREN,
  [2245] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      sym_identifier,
  [2252] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_RBRACK,
  [2259] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym_block_end,
  [2266] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      sym_identifier,
  [2273] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      sym_identifier,
  [2280] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      anon_sym_EQ,
  [2287] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      sym_identifier,
  [2294] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      sym_identifier,
  [2301] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      sym_block_end,
  [2308] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_SEMI,
  [2315] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      sym_identifier,
  [2322] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      anon_sym_COLON,
  [2329] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LT,
  [2336] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      sym_identifier,
  [2343] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      anon_sym_SEMI,
  [2350] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      sym_identifier,
  [2357] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_SEMI,
  [2364] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      sym_identifier,
  [2371] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      sym_identifier,
  [2378] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_LT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 54,
  [SMALL_STATE(4)] = 108,
  [SMALL_STATE(5)] = 153,
  [SMALL_STATE(6)] = 198,
  [SMALL_STATE(7)] = 243,
  [SMALL_STATE(8)] = 288,
  [SMALL_STATE(9)] = 333,
  [SMALL_STATE(10)] = 378,
  [SMALL_STATE(11)] = 423,
  [SMALL_STATE(12)] = 449,
  [SMALL_STATE(13)] = 490,
  [SMALL_STATE(14)] = 513,
  [SMALL_STATE(15)] = 543,
  [SMALL_STATE(16)] = 573,
  [SMALL_STATE(17)] = 605,
  [SMALL_STATE(18)] = 635,
  [SMALL_STATE(19)] = 664,
  [SMALL_STATE(20)] = 686,
  [SMALL_STATE(21)] = 705,
  [SMALL_STATE(22)] = 724,
  [SMALL_STATE(23)] = 743,
  [SMALL_STATE(24)] = 757,
  [SMALL_STATE(25)] = 783,
  [SMALL_STATE(26)] = 809,
  [SMALL_STATE(27)] = 829,
  [SMALL_STATE(28)] = 855,
  [SMALL_STATE(29)] = 869,
  [SMALL_STATE(30)] = 889,
  [SMALL_STATE(31)] = 903,
  [SMALL_STATE(32)] = 926,
  [SMALL_STATE(33)] = 939,
  [SMALL_STATE(34)] = 956,
  [SMALL_STATE(35)] = 973,
  [SMALL_STATE(36)] = 990,
  [SMALL_STATE(37)] = 1013,
  [SMALL_STATE(38)] = 1030,
  [SMALL_STATE(39)] = 1047,
  [SMALL_STATE(40)] = 1064,
  [SMALL_STATE(41)] = 1081,
  [SMALL_STATE(42)] = 1094,
  [SMALL_STATE(43)] = 1111,
  [SMALL_STATE(44)] = 1128,
  [SMALL_STATE(45)] = 1141,
  [SMALL_STATE(46)] = 1158,
  [SMALL_STATE(47)] = 1175,
  [SMALL_STATE(48)] = 1188,
  [SMALL_STATE(49)] = 1211,
  [SMALL_STATE(50)] = 1234,
  [SMALL_STATE(51)] = 1257,
  [SMALL_STATE(52)] = 1273,
  [SMALL_STATE(53)] = 1285,
  [SMALL_STATE(54)] = 1301,
  [SMALL_STATE(55)] = 1317,
  [SMALL_STATE(56)] = 1328,
  [SMALL_STATE(57)] = 1341,
  [SMALL_STATE(58)] = 1354,
  [SMALL_STATE(59)] = 1365,
  [SMALL_STATE(60)] = 1376,
  [SMALL_STATE(61)] = 1387,
  [SMALL_STATE(62)] = 1398,
  [SMALL_STATE(63)] = 1409,
  [SMALL_STATE(64)] = 1420,
  [SMALL_STATE(65)] = 1431,
  [SMALL_STATE(66)] = 1442,
  [SMALL_STATE(67)] = 1453,
  [SMALL_STATE(68)] = 1464,
  [SMALL_STATE(69)] = 1475,
  [SMALL_STATE(70)] = 1486,
  [SMALL_STATE(71)] = 1497,
  [SMALL_STATE(72)] = 1508,
  [SMALL_STATE(73)] = 1519,
  [SMALL_STATE(74)] = 1530,
  [SMALL_STATE(75)] = 1541,
  [SMALL_STATE(76)] = 1552,
  [SMALL_STATE(77)] = 1563,
  [SMALL_STATE(78)] = 1574,
  [SMALL_STATE(79)] = 1585,
  [SMALL_STATE(80)] = 1596,
  [SMALL_STATE(81)] = 1606,
  [SMALL_STATE(82)] = 1616,
  [SMALL_STATE(83)] = 1630,
  [SMALL_STATE(84)] = 1640,
  [SMALL_STATE(85)] = 1650,
  [SMALL_STATE(86)] = 1660,
  [SMALL_STATE(87)] = 1670,
  [SMALL_STATE(88)] = 1684,
  [SMALL_STATE(89)] = 1694,
  [SMALL_STATE(90)] = 1704,
  [SMALL_STATE(91)] = 1714,
  [SMALL_STATE(92)] = 1728,
  [SMALL_STATE(93)] = 1738,
  [SMALL_STATE(94)] = 1748,
  [SMALL_STATE(95)] = 1758,
  [SMALL_STATE(96)] = 1768,
  [SMALL_STATE(97)] = 1781,
  [SMALL_STATE(98)] = 1794,
  [SMALL_STATE(99)] = 1807,
  [SMALL_STATE(100)] = 1820,
  [SMALL_STATE(101)] = 1829,
  [SMALL_STATE(102)] = 1840,
  [SMALL_STATE(103)] = 1853,
  [SMALL_STATE(104)] = 1866,
  [SMALL_STATE(105)] = 1879,
  [SMALL_STATE(106)] = 1892,
  [SMALL_STATE(107)] = 1905,
  [SMALL_STATE(108)] = 1918,
  [SMALL_STATE(109)] = 1931,
  [SMALL_STATE(110)] = 1944,
  [SMALL_STATE(111)] = 1957,
  [SMALL_STATE(112)] = 1970,
  [SMALL_STATE(113)] = 1978,
  [SMALL_STATE(114)] = 1988,
  [SMALL_STATE(115)] = 1996,
  [SMALL_STATE(116)] = 2006,
  [SMALL_STATE(117)] = 2014,
  [SMALL_STATE(118)] = 2022,
  [SMALL_STATE(119)] = 2032,
  [SMALL_STATE(120)] = 2042,
  [SMALL_STATE(121)] = 2052,
  [SMALL_STATE(122)] = 2062,
  [SMALL_STATE(123)] = 2072,
  [SMALL_STATE(124)] = 2080,
  [SMALL_STATE(125)] = 2088,
  [SMALL_STATE(126)] = 2098,
  [SMALL_STATE(127)] = 2108,
  [SMALL_STATE(128)] = 2118,
  [SMALL_STATE(129)] = 2128,
  [SMALL_STATE(130)] = 2138,
  [SMALL_STATE(131)] = 2148,
  [SMALL_STATE(132)] = 2158,
  [SMALL_STATE(133)] = 2168,
  [SMALL_STATE(134)] = 2175,
  [SMALL_STATE(135)] = 2182,
  [SMALL_STATE(136)] = 2189,
  [SMALL_STATE(137)] = 2196,
  [SMALL_STATE(138)] = 2203,
  [SMALL_STATE(139)] = 2210,
  [SMALL_STATE(140)] = 2217,
  [SMALL_STATE(141)] = 2224,
  [SMALL_STATE(142)] = 2231,
  [SMALL_STATE(143)] = 2238,
  [SMALL_STATE(144)] = 2245,
  [SMALL_STATE(145)] = 2252,
  [SMALL_STATE(146)] = 2259,
  [SMALL_STATE(147)] = 2266,
  [SMALL_STATE(148)] = 2273,
  [SMALL_STATE(149)] = 2280,
  [SMALL_STATE(150)] = 2287,
  [SMALL_STATE(151)] = 2294,
  [SMALL_STATE(152)] = 2301,
  [SMALL_STATE(153)] = 2308,
  [SMALL_STATE(154)] = 2315,
  [SMALL_STATE(155)] = 2322,
  [SMALL_STATE(156)] = 2329,
  [SMALL_STATE(157)] = 2336,
  [SMALL_STATE(158)] = 2343,
  [SMALL_STATE(159)] = 2350,
  [SMALL_STATE(160)] = 2357,
  [SMALL_STATE(161)] = 2364,
  [SMALL_STATE(162)] = 2371,
  [SMALL_STATE(163)] = 2378,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_field_required_variant, 1, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_type, 1, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(147),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(128),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(157),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(161),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 2, 0, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 3, 0, 3),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(118),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(126),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_ident, 1, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_full_ident_repeat1, 2, 0, 0),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_full_ident_repeat1, 2, 0, 0), SHIFT_REPEAT(150),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_ident, 2, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(157),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 4, 0, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 3, 0, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_type_decl, 3, 0, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 4, 0, 4),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 5, 0, 7),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 2, 0, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 5, 0, 9),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_view, 5, 0, 10),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_view, 4, 0, 5),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 6, 0, 15),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_type_decl, 4, 0, 11),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_constant, 1, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_constant_repeat1, 2, 0, 0),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_constant_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 2, 0, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 3, 0, 3),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_constant, 2, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2, 0, 1),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2, 0, 0),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_defined_type, 1, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 2, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using, 5, 0, 8),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type, 1, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 4, 0, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 2, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 4, 0, 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 3, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forward_decl, 3, 0, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 5, 0, 4),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_view, 5, 0, 5),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 3, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 5, 0, 3),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 3, 0, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 6, 0, 7),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 4, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 6, 0, 9),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_view, 6, 0, 10),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 2, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_view_body, 3, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 7, 0, 15),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_view_body, 4, 0, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_view_body, 5, 0, 11),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 6, 0, 13),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field, 9, 0, 23),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_content, 2, 0, 0),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_content, 2, 0, 0), SHIFT_REPEAT(82),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_type, 4, 0, 16),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field, 5, 0, 17),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_type, 5, 0, 19),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field, 6, 0, 21),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field, 6, 0, 22),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field, 7, 0, 23),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field, 7, 0, 17),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field, 8, 0, 21),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field, 8, 0, 22),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_generic_type_decl_repeat1, 2, 0, 12), SHIFT_REPEAT(8),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_generic_type_decl_repeat1, 2, 0, 12),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_value, 1, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 1, 0, 6),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_body_repeat1, 2, 0, 0),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_body_repeat1, 2, 0, 0), SHIFT_REPEAT(129),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_view_body_repeat1, 2, 0, 12),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_view_body_repeat1, 2, 0, 12), SHIFT_REPEAT(148),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_generic_type_repeat1, 2, 0, 20), SHIFT_REPEAT(4),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_generic_type_repeat1, 2, 0, 20),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_generic_type_repeat1, 2, 0, 18),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 1, 0, 0),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 3, 0, 14),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_view_body_repeat1, 2, 0, 2),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_generic_type_decl_repeat1, 2, 0, 2),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [372] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
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

TS_PUBLIC const TSLanguage *tree_sitter_bond(void) {
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
