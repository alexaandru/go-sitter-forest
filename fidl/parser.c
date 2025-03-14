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
#define STATE_COUNT 300
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 141
#define ALIAS_COUNT 0
#define TOKEN_COUNT 74
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_library = 1,
  anon_sym_SEMI = 2,
  sym_identifier = 3,
  anon_sym_using = 4,
  anon_sym_as = 5,
  anon_sym_DOT = 6,
  anon_sym_const = 7,
  anon_sym_EQ = 8,
  anon_sym_type = 9,
  anon_sym_flexible = 10,
  anon_sym_strict = 11,
  anon_sym_resource = 12,
  anon_sym_COLON = 13,
  anon_sym_struct = 14,
  anon_sym_bits = 15,
  anon_sym_enum = 16,
  anon_sym_union = 17,
  anon_sym_table = 18,
  anon_sym_overlay = 19,
  anon_sym_LBRACE = 20,
  anon_sym_RBRACE = 21,
  anon_sym_reserved = 22,
  anon_sym_protocol = 23,
  anon_sym_open = 24,
  anon_sym_closed = 25,
  anon_sym_ajar = 26,
  anon_sym_DASH_GT = 27,
  anon_sym_error = 28,
  anon_sym_LPAREN = 29,
  anon_sym_RPAREN = 30,
  anon_sym_compose = 31,
  anon_sym_alias = 32,
  anon_sym_resource_definition = 33,
  anon_sym_uint32 = 34,
  anon_sym_properties = 35,
  anon_sym_service = 36,
  anon_sym_AT = 37,
  anon_sym_COMMA = 38,
  anon_sym_bool = 39,
  anon_sym_int8 = 40,
  anon_sym_int16 = 41,
  anon_sym_int32 = 42,
  anon_sym_int64 = 43,
  anon_sym_uint8 = 44,
  anon_sym_uint16 = 45,
  anon_sym_uint64 = 46,
  anon_sym_float32 = 47,
  anon_sym_float64 = 48,
  anon_sym_byte = 49,
  anon_sym_string = 50,
  anon_sym_array = 51,
  anon_sym_vector = 52,
  anon_sym_box = 53,
  anon_sym_zx_DOTHandle = 54,
  anon_sym_zx_DOTStatus = 55,
  anon_sym_client_end = 56,
  anon_sym_server_end = 57,
  anon_sym_LT = 58,
  anon_sym_GT = 59,
  sym_true = 60,
  sym_false = 61,
  aux_sym_numeric_literal_token1 = 62,
  aux_sym_numeric_literal_token2 = 63,
  aux_sym_numeric_literal_token3 = 64,
  aux_sym_numeric_literal_token4 = 65,
  aux_sym_numeric_literal_token5 = 66,
  anon_sym_DQUOTE = 67,
  anon_sym_DQUOTE2 = 68,
  sym__interpreted_string_literal_basic_content = 69,
  sym_escape_sequence = 70,
  anon_sym_PIPE = 71,
  anon_sym_AMP = 72,
  sym_comment = 73,
  sym_source_file = 74,
  sym_library = 75,
  sym_using_list = 76,
  sym_using = 77,
  sym_compound_identifier = 78,
  sym_declaration = 79,
  sym_const_declaration = 80,
  sym_layout_declaration = 81,
  sym_inline_layout = 82,
  sym_declaration_modifiers = 83,
  sym_layout_subtype = 84,
  sym_layout_kind = 85,
  sym_layout_body = 86,
  sym_value_layout = 87,
  sym_value_layout_member = 88,
  sym_struct_layout = 89,
  sym_struct_layout_member = 90,
  sym_ordinal_layout = 91,
  sym_ordinal_layout_member = 92,
  sym_protocol_declaration = 93,
  sym_protocol_attribute = 94,
  sym_protocol_member = 95,
  sym_protocol_method = 96,
  sym_protocol_event = 97,
  sym_parameter_list = 98,
  sym_protocol_compose = 99,
  sym_type_alias_declaration = 100,
  sym_resource_declaration = 101,
  sym_resource_properties = 102,
  sym_service_declaration = 103,
  sym_service_member = 104,
  sym_member_field = 105,
  sym_attribute_list = 106,
  sym_attribute = 107,
  sym_attribute_args = 108,
  sym_attribute_arg = 109,
  sym_primitives_type = 110,
  sym_builtin_complex_type = 111,
  sym_type_constructor = 112,
  sym_layout = 113,
  sym_layout_parameters = 114,
  sym_layout_parameter = 115,
  sym_type_constraints = 116,
  sym_type_constraint_list = 117,
  sym_type_constraint = 118,
  sym_constant = 119,
  sym_literal = 120,
  sym_bool = 121,
  sym_numeric_literal = 122,
  sym_string_literal = 123,
  sym_constant_allows_bit_ops = 124,
  aux_sym_source_file_repeat1 = 125,
  aux_sym_using_list_repeat1 = 126,
  aux_sym_compound_identifier_repeat1 = 127,
  aux_sym_inline_layout_repeat1 = 128,
  aux_sym_value_layout_repeat1 = 129,
  aux_sym_struct_layout_repeat1 = 130,
  aux_sym_ordinal_layout_repeat1 = 131,
  aux_sym_protocol_declaration_repeat1 = 132,
  aux_sym_resource_properties_repeat1 = 133,
  aux_sym_service_declaration_repeat1 = 134,
  aux_sym_attribute_list_repeat1 = 135,
  aux_sym_attribute_args_repeat1 = 136,
  aux_sym_layout_parameters_repeat1 = 137,
  aux_sym_type_constraint_list_repeat1 = 138,
  aux_sym_string_literal_repeat1 = 139,
  aux_sym_constant_allows_bit_ops_repeat1 = 140,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_library] = "library",
  [anon_sym_SEMI] = ";",
  [sym_identifier] = "identifier",
  [anon_sym_using] = "using",
  [anon_sym_as] = "as",
  [anon_sym_DOT] = ".",
  [anon_sym_const] = "const",
  [anon_sym_EQ] = "=",
  [anon_sym_type] = "type",
  [anon_sym_flexible] = "flexible",
  [anon_sym_strict] = "strict",
  [anon_sym_resource] = "resource",
  [anon_sym_COLON] = ":",
  [anon_sym_struct] = "struct",
  [anon_sym_bits] = "bits",
  [anon_sym_enum] = "enum",
  [anon_sym_union] = "union",
  [anon_sym_table] = "table",
  [anon_sym_overlay] = "overlay",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_reserved] = "reserved",
  [anon_sym_protocol] = "protocol",
  [anon_sym_open] = "open",
  [anon_sym_closed] = "closed",
  [anon_sym_ajar] = "ajar",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_error] = "error",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_compose] = "compose",
  [anon_sym_alias] = "alias",
  [anon_sym_resource_definition] = "resource_definition",
  [anon_sym_uint32] = "uint32",
  [anon_sym_properties] = "properties",
  [anon_sym_service] = "service",
  [anon_sym_AT] = "@",
  [anon_sym_COMMA] = ",",
  [anon_sym_bool] = "bool",
  [anon_sym_int8] = "int8",
  [anon_sym_int16] = "int16",
  [anon_sym_int32] = "int32",
  [anon_sym_int64] = "int64",
  [anon_sym_uint8] = "uint8",
  [anon_sym_uint16] = "uint16",
  [anon_sym_uint64] = "uint64",
  [anon_sym_float32] = "float32",
  [anon_sym_float64] = "float64",
  [anon_sym_byte] = "byte",
  [anon_sym_string] = "string",
  [anon_sym_array] = "array",
  [anon_sym_vector] = "vector",
  [anon_sym_box] = "box",
  [anon_sym_zx_DOTHandle] = "zx.Handle",
  [anon_sym_zx_DOTStatus] = "zx.Status",
  [anon_sym_client_end] = "client_end",
  [anon_sym_server_end] = "server_end",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [sym_true] = "true",
  [sym_false] = "false",
  [aux_sym_numeric_literal_token1] = "numeric_literal_token1",
  [aux_sym_numeric_literal_token2] = "numeric_literal_token2",
  [aux_sym_numeric_literal_token3] = "numeric_literal_token3",
  [aux_sym_numeric_literal_token4] = "numeric_literal_token4",
  [aux_sym_numeric_literal_token5] = "numeric_literal_token5",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_DQUOTE2] = "\"",
  [sym__interpreted_string_literal_basic_content] = "_interpreted_string_literal_basic_content",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_PIPE] = "|",
  [anon_sym_AMP] = "&",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_library] = "library",
  [sym_using_list] = "using_list",
  [sym_using] = "using",
  [sym_compound_identifier] = "compound_identifier",
  [sym_declaration] = "declaration",
  [sym_const_declaration] = "const_declaration",
  [sym_layout_declaration] = "layout_declaration",
  [sym_inline_layout] = "inline_layout",
  [sym_declaration_modifiers] = "declaration_modifiers",
  [sym_layout_subtype] = "layout_subtype",
  [sym_layout_kind] = "layout_kind",
  [sym_layout_body] = "layout_body",
  [sym_value_layout] = "value_layout",
  [sym_value_layout_member] = "value_layout_member",
  [sym_struct_layout] = "struct_layout",
  [sym_struct_layout_member] = "struct_layout_member",
  [sym_ordinal_layout] = "ordinal_layout",
  [sym_ordinal_layout_member] = "ordinal_layout_member",
  [sym_protocol_declaration] = "protocol_declaration",
  [sym_protocol_attribute] = "protocol_attribute",
  [sym_protocol_member] = "protocol_member",
  [sym_protocol_method] = "protocol_method",
  [sym_protocol_event] = "protocol_event",
  [sym_parameter_list] = "parameter_list",
  [sym_protocol_compose] = "protocol_compose",
  [sym_type_alias_declaration] = "type_alias_declaration",
  [sym_resource_declaration] = "resource_declaration",
  [sym_resource_properties] = "resource_properties",
  [sym_service_declaration] = "service_declaration",
  [sym_service_member] = "service_member",
  [sym_member_field] = "member_field",
  [sym_attribute_list] = "attribute_list",
  [sym_attribute] = "attribute",
  [sym_attribute_args] = "attribute_args",
  [sym_attribute_arg] = "attribute_arg",
  [sym_primitives_type] = "primitives_type",
  [sym_builtin_complex_type] = "builtin_complex_type",
  [sym_type_constructor] = "type_constructor",
  [sym_layout] = "layout",
  [sym_layout_parameters] = "layout_parameters",
  [sym_layout_parameter] = "layout_parameter",
  [sym_type_constraints] = "type_constraints",
  [sym_type_constraint_list] = "type_constraint_list",
  [sym_type_constraint] = "type_constraint",
  [sym_constant] = "constant",
  [sym_literal] = "literal",
  [sym_bool] = "bool",
  [sym_numeric_literal] = "numeric_literal",
  [sym_string_literal] = "string_literal",
  [sym_constant_allows_bit_ops] = "constant_allows_bit_ops",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_using_list_repeat1] = "using_list_repeat1",
  [aux_sym_compound_identifier_repeat1] = "compound_identifier_repeat1",
  [aux_sym_inline_layout_repeat1] = "inline_layout_repeat1",
  [aux_sym_value_layout_repeat1] = "value_layout_repeat1",
  [aux_sym_struct_layout_repeat1] = "struct_layout_repeat1",
  [aux_sym_ordinal_layout_repeat1] = "ordinal_layout_repeat1",
  [aux_sym_protocol_declaration_repeat1] = "protocol_declaration_repeat1",
  [aux_sym_resource_properties_repeat1] = "resource_properties_repeat1",
  [aux_sym_service_declaration_repeat1] = "service_declaration_repeat1",
  [aux_sym_attribute_list_repeat1] = "attribute_list_repeat1",
  [aux_sym_attribute_args_repeat1] = "attribute_args_repeat1",
  [aux_sym_layout_parameters_repeat1] = "layout_parameters_repeat1",
  [aux_sym_type_constraint_list_repeat1] = "type_constraint_list_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [aux_sym_constant_allows_bit_ops_repeat1] = "constant_allows_bit_ops_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_library] = anon_sym_library,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_identifier] = sym_identifier,
  [anon_sym_using] = anon_sym_using,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_flexible] = anon_sym_flexible,
  [anon_sym_strict] = anon_sym_strict,
  [anon_sym_resource] = anon_sym_resource,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_bits] = anon_sym_bits,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_union] = anon_sym_union,
  [anon_sym_table] = anon_sym_table,
  [anon_sym_overlay] = anon_sym_overlay,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_reserved] = anon_sym_reserved,
  [anon_sym_protocol] = anon_sym_protocol,
  [anon_sym_open] = anon_sym_open,
  [anon_sym_closed] = anon_sym_closed,
  [anon_sym_ajar] = anon_sym_ajar,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_error] = anon_sym_error,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_compose] = anon_sym_compose,
  [anon_sym_alias] = anon_sym_alias,
  [anon_sym_resource_definition] = anon_sym_resource_definition,
  [anon_sym_uint32] = anon_sym_uint32,
  [anon_sym_properties] = anon_sym_properties,
  [anon_sym_service] = anon_sym_service,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_int8] = anon_sym_int8,
  [anon_sym_int16] = anon_sym_int16,
  [anon_sym_int32] = anon_sym_int32,
  [anon_sym_int64] = anon_sym_int64,
  [anon_sym_uint8] = anon_sym_uint8,
  [anon_sym_uint16] = anon_sym_uint16,
  [anon_sym_uint64] = anon_sym_uint64,
  [anon_sym_float32] = anon_sym_float32,
  [anon_sym_float64] = anon_sym_float64,
  [anon_sym_byte] = anon_sym_byte,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_array] = anon_sym_array,
  [anon_sym_vector] = anon_sym_vector,
  [anon_sym_box] = anon_sym_box,
  [anon_sym_zx_DOTHandle] = anon_sym_zx_DOTHandle,
  [anon_sym_zx_DOTStatus] = anon_sym_zx_DOTStatus,
  [anon_sym_client_end] = anon_sym_client_end,
  [anon_sym_server_end] = anon_sym_server_end,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [aux_sym_numeric_literal_token1] = aux_sym_numeric_literal_token1,
  [aux_sym_numeric_literal_token2] = aux_sym_numeric_literal_token2,
  [aux_sym_numeric_literal_token3] = aux_sym_numeric_literal_token3,
  [aux_sym_numeric_literal_token4] = aux_sym_numeric_literal_token4,
  [aux_sym_numeric_literal_token5] = aux_sym_numeric_literal_token5,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_DQUOTE2] = anon_sym_DQUOTE,
  [sym__interpreted_string_literal_basic_content] = sym__interpreted_string_literal_basic_content,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_AMP] = anon_sym_AMP,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_library] = sym_library,
  [sym_using_list] = sym_using_list,
  [sym_using] = sym_using,
  [sym_compound_identifier] = sym_compound_identifier,
  [sym_declaration] = sym_declaration,
  [sym_const_declaration] = sym_const_declaration,
  [sym_layout_declaration] = sym_layout_declaration,
  [sym_inline_layout] = sym_inline_layout,
  [sym_declaration_modifiers] = sym_declaration_modifiers,
  [sym_layout_subtype] = sym_layout_subtype,
  [sym_layout_kind] = sym_layout_kind,
  [sym_layout_body] = sym_layout_body,
  [sym_value_layout] = sym_value_layout,
  [sym_value_layout_member] = sym_value_layout_member,
  [sym_struct_layout] = sym_struct_layout,
  [sym_struct_layout_member] = sym_struct_layout_member,
  [sym_ordinal_layout] = sym_ordinal_layout,
  [sym_ordinal_layout_member] = sym_ordinal_layout_member,
  [sym_protocol_declaration] = sym_protocol_declaration,
  [sym_protocol_attribute] = sym_protocol_attribute,
  [sym_protocol_member] = sym_protocol_member,
  [sym_protocol_method] = sym_protocol_method,
  [sym_protocol_event] = sym_protocol_event,
  [sym_parameter_list] = sym_parameter_list,
  [sym_protocol_compose] = sym_protocol_compose,
  [sym_type_alias_declaration] = sym_type_alias_declaration,
  [sym_resource_declaration] = sym_resource_declaration,
  [sym_resource_properties] = sym_resource_properties,
  [sym_service_declaration] = sym_service_declaration,
  [sym_service_member] = sym_service_member,
  [sym_member_field] = sym_member_field,
  [sym_attribute_list] = sym_attribute_list,
  [sym_attribute] = sym_attribute,
  [sym_attribute_args] = sym_attribute_args,
  [sym_attribute_arg] = sym_attribute_arg,
  [sym_primitives_type] = sym_primitives_type,
  [sym_builtin_complex_type] = sym_builtin_complex_type,
  [sym_type_constructor] = sym_type_constructor,
  [sym_layout] = sym_layout,
  [sym_layout_parameters] = sym_layout_parameters,
  [sym_layout_parameter] = sym_layout_parameter,
  [sym_type_constraints] = sym_type_constraints,
  [sym_type_constraint_list] = sym_type_constraint_list,
  [sym_type_constraint] = sym_type_constraint,
  [sym_constant] = sym_constant,
  [sym_literal] = sym_literal,
  [sym_bool] = sym_bool,
  [sym_numeric_literal] = sym_numeric_literal,
  [sym_string_literal] = sym_string_literal,
  [sym_constant_allows_bit_ops] = sym_constant_allows_bit_ops,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_using_list_repeat1] = aux_sym_using_list_repeat1,
  [aux_sym_compound_identifier_repeat1] = aux_sym_compound_identifier_repeat1,
  [aux_sym_inline_layout_repeat1] = aux_sym_inline_layout_repeat1,
  [aux_sym_value_layout_repeat1] = aux_sym_value_layout_repeat1,
  [aux_sym_struct_layout_repeat1] = aux_sym_struct_layout_repeat1,
  [aux_sym_ordinal_layout_repeat1] = aux_sym_ordinal_layout_repeat1,
  [aux_sym_protocol_declaration_repeat1] = aux_sym_protocol_declaration_repeat1,
  [aux_sym_resource_properties_repeat1] = aux_sym_resource_properties_repeat1,
  [aux_sym_service_declaration_repeat1] = aux_sym_service_declaration_repeat1,
  [aux_sym_attribute_list_repeat1] = aux_sym_attribute_list_repeat1,
  [aux_sym_attribute_args_repeat1] = aux_sym_attribute_args_repeat1,
  [aux_sym_layout_parameters_repeat1] = aux_sym_layout_parameters_repeat1,
  [aux_sym_type_constraint_list_repeat1] = aux_sym_type_constraint_list_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
  [aux_sym_constant_allows_bit_ops_repeat1] = aux_sym_constant_allows_bit_ops_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_library] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_using] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_flexible] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_strict] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_resource] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_struct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bits] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_union] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_table] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_overlay] = {
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
  [anon_sym_reserved] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_protocol] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_open] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_closed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ajar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_error] = {
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
  [anon_sym_compose] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alias] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_resource_definition] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_properties] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_service] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint64] = {
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
  [anon_sym_byte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_array] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vector] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_box] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_zx_DOTHandle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_zx_DOTStatus] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_client_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_server_end] = {
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
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_numeric_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_literal_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_literal_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_literal_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_literal_token5] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [sym__interpreted_string_literal_basic_content] = {
    .visible = false,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
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
  [sym_library] = {
    .visible = true,
    .named = true,
  },
  [sym_using_list] = {
    .visible = true,
    .named = true,
  },
  [sym_using] = {
    .visible = true,
    .named = true,
  },
  [sym_compound_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_const_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_layout_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_layout] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration_modifiers] = {
    .visible = true,
    .named = true,
  },
  [sym_layout_subtype] = {
    .visible = true,
    .named = true,
  },
  [sym_layout_kind] = {
    .visible = true,
    .named = true,
  },
  [sym_layout_body] = {
    .visible = true,
    .named = true,
  },
  [sym_value_layout] = {
    .visible = true,
    .named = true,
  },
  [sym_value_layout_member] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_layout] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_layout_member] = {
    .visible = true,
    .named = true,
  },
  [sym_ordinal_layout] = {
    .visible = true,
    .named = true,
  },
  [sym_ordinal_layout_member] = {
    .visible = true,
    .named = true,
  },
  [sym_protocol_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_protocol_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_protocol_member] = {
    .visible = true,
    .named = true,
  },
  [sym_protocol_method] = {
    .visible = true,
    .named = true,
  },
  [sym_protocol_event] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_protocol_compose] = {
    .visible = true,
    .named = true,
  },
  [sym_type_alias_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_resource_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_resource_properties] = {
    .visible = true,
    .named = true,
  },
  [sym_service_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_service_member] = {
    .visible = true,
    .named = true,
  },
  [sym_member_field] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_list] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_args] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_primitives_type] = {
    .visible = true,
    .named = true,
  },
  [sym_builtin_complex_type] = {
    .visible = true,
    .named = true,
  },
  [sym_type_constructor] = {
    .visible = true,
    .named = true,
  },
  [sym_layout] = {
    .visible = true,
    .named = true,
  },
  [sym_layout_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_layout_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_type_constraints] = {
    .visible = true,
    .named = true,
  },
  [sym_type_constraint_list] = {
    .visible = true,
    .named = true,
  },
  [sym_type_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_numeric_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_constant_allows_bit_ops] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_using_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_compound_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_inline_layout_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_layout_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_struct_layout_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ordinal_layout_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_protocol_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_resource_properties_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_service_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attribute_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attribute_args_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_layout_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_constraint_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constant_allows_bit_ops_repeat1] = {
    .visible = false,
    .named = false,
  },
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
  [42] = 31,
  [43] = 31,
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
  [70] = 21,
  [71] = 21,
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
  [84] = 20,
  [85] = 20,
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
  [101] = 23,
  [102] = 102,
  [103] = 103,
  [104] = 23,
  [105] = 105,
  [106] = 106,
  [107] = 24,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 24,
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
  [154] = 82,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
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
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
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
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
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
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
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
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 286,
  [294] = 227,
  [295] = 286,
  [296] = 227,
  [297] = 297,
  [298] = 298,
  [299] = 299,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(242);
      ADVANCE_MAP(
        '"', 463,
        '&', 471,
        '(', 402,
        ')', 403,
        ',', 413,
        '-', 25,
        '.', 368,
        '/', 12,
        '0', 456,
        ':', 379,
        ';', 244,
        '<', 450,
        '=', 370,
        '>', 451,
        '@', 412,
        '\\', 27,
        'a', 115,
        'b', 99,
        'c', 117,
        'e', 130,
        'f', 31,
        'i', 137,
        'l', 100,
        'o', 159,
        'p', 163,
        'r', 61,
        's', 80,
        't', 34,
        'u', 109,
        'v', 62,
        'z', 222,
        '{', 392,
        '|', 470,
        '}', 393,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(240);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(457);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(11);
      if (lookahead == '"') ADVANCE(463);
      if (lookahead == '/') ADVANCE(465);
      if (lookahead == '\\') ADVANCE(27);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(464);
      if (lookahead != 0) ADVANCE(466);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '"', 462,
        '-', 229,
        '.', 230,
        '/', 12,
        '0', 456,
        '<', 450,
        'f', 263,
        't', 332,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(457);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '"', 462,
        '-', 229,
        '.', 230,
        '/', 12,
        '0', 456,
        '@', 412,
        'a', 331,
        'b', 297,
        'c', 304,
        'e', 314,
        'f', 262,
        'i', 318,
        'o', 357,
        'r', 276,
        's', 287,
        't', 259,
        'u', 301,
        'v', 277,
        'z', 360,
        '}', 393,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(457);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'y')) ADVANCE(364);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(402);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '.') ADVANCE(230);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '0') ADVANCE(456);
      if (lookahead == '@') ADVANCE(412);
      if (lookahead == '}') ADVANCE(393);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(457);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '(', 402,
        '-', 229,
        '.', 230,
        '/', 12,
        '0', 456,
        '@', 412,
        'a', 114,
        'b', 98,
        'c', 126,
        'e', 129,
        'f', 124,
        'l', 100,
        'o', 159,
        'p', 176,
        'r', 86,
        's', 91,
        't', 35,
        'u', 136,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(457);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '(', 402,
        '-', 24,
        '/', 12,
        '@', 412,
        'c', 321,
        'f', 310,
        'r', 276,
        's', 353,
        '}', 393,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        ')', 403,
        '.', 367,
        '/', 12,
        ';', 244,
        '=', 370,
        '@', 412,
        'a', 331,
        'b', 297,
        'c', 304,
        'e', 314,
        'f', 305,
        'i', 318,
        'o', 357,
        'r', 276,
        's', 287,
        't', 260,
        'u', 301,
        'v', 277,
        'z', 360,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'y')) ADVANCE(364);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(26);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '/', 12,
        '@', 412,
        'b', 98,
        'e', 129,
        'f', 124,
        'o', 219,
        'r', 94,
        's', 208,
        't', 33,
        'u', 136,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == 'r') ADVANCE(295);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(472);
      END_STATE();
    case 13:
      if (lookahead == '1') ADVANCE(22);
      if (lookahead == '3') ADVANCE(15);
      if (lookahead == '6') ADVANCE(19);
      if (lookahead == '8') ADVANCE(416);
      END_STATE();
    case 14:
      if (lookahead == '1') ADVANCE(23);
      if (lookahead == '3') ADVANCE(16);
      if (lookahead == '6') ADVANCE(20);
      if (lookahead == '8') ADVANCE(424);
      END_STATE();
    case 15:
      if (lookahead == '2') ADVANCE(420);
      END_STATE();
    case 16:
      if (lookahead == '2') ADVANCE(408);
      END_STATE();
    case 17:
      if (lookahead == '2') ADVANCE(430);
      END_STATE();
    case 18:
      if (lookahead == '3') ADVANCE(17);
      if (lookahead == '6') ADVANCE(21);
      END_STATE();
    case 19:
      if (lookahead == '4') ADVANCE(422);
      END_STATE();
    case 20:
      if (lookahead == '4') ADVANCE(428);
      END_STATE();
    case 21:
      if (lookahead == '4') ADVANCE(432);
      END_STATE();
    case 22:
      if (lookahead == '6') ADVANCE(418);
      END_STATE();
    case 23:
      if (lookahead == '6') ADVANCE(426);
      END_STATE();
    case 24:
      if (lookahead == '>') ADVANCE(400);
      END_STATE();
    case 25:
      if (lookahead == '>') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(457);
      END_STATE();
    case 26:
      if (lookahead == 'H') ADVANCE(37);
      if (lookahead == 'S') ADVANCE(210);
      END_STATE();
    case 27:
      if (lookahead == 'U') ADVANCE(239);
      if (lookahead == 'u') ADVANCE(235);
      if (lookahead == 'x') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(469);
      if (lookahead != 0) ADVANCE(467);
      END_STATE();
    case 28:
      if (lookahead == '_') ADVANCE(59);
      END_STATE();
    case 29:
      if (lookahead == '_') ADVANCE(82);
      END_STATE();
    case 30:
      if (lookahead == '_') ADVANCE(83);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(125);
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(225);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(43);
      if (lookahead == 'r') ADVANCE(214);
      if (lookahead == 'y') ADVANCE(161);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(43);
      if (lookahead == 'y') ADVANCE(161);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(227);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(135);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(166);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(184);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(198);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(172);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(204);
      END_STATE();
    case 43:
      if (lookahead == 'b') ADVANCE(121);
      END_STATE();
    case 44:
      if (lookahead == 'b') ADVANCE(178);
      END_STATE();
    case 45:
      if (lookahead == 'b') ADVANCE(122);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(209);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(150);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(200);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(200);
      if (lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(201);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(72);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(79);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(75);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(398);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(394);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(446);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(448);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(74);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(123);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(452);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(371);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(454);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(388);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(404);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(411);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(372);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(377);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(444);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(376);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(223);
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(164);
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(170);
      if (lookahead == 'o') ADVANCE(215);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(179);
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(174);
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 95:
      if (lookahead == 'f') ADVANCE(107);
      END_STATE();
    case 96:
      if (lookahead == 'g') ADVANCE(365);
      END_STATE();
    case 97:
      if (lookahead == 'g') ADVANCE(436);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(202);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(202);
      if (lookahead == 'o') ADVANCE(145);
      if (lookahead == 'y') ADVANCE(206);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(49);
      if (lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(132);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(149);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(92);
      if (lookahead == 'o') ADVANCE(191);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(142);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(211);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(138);
      if (lookahead == 'n') ADVANCE(104);
      if (lookahead == 's') ADVANCE(103);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(152);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(48);
      if (lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 114:
      if (lookahead == 'j') ADVANCE(38);
      if (lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 115:
      if (lookahead == 'j') ADVANCE(38);
      if (lookahead == 'l') ADVANCE(102);
      if (lookahead == 'r') ADVANCE(173);
      if (lookahead == 's') ADVANCE(366);
      END_STATE();
    case 116:
      if (lookahead == 'j') ADVANCE(38);
      if (lookahead == 'l') ADVANCE(102);
      if (lookahead == 's') ADVANCE(366);
      END_STATE();
    case 117:
      if (lookahead == 'l') ADVANCE(106);
      if (lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 118:
      if (lookahead == 'l') ADVANCE(414);
      END_STATE();
    case 119:
      if (lookahead == 'l') ADVANCE(396);
      END_STATE();
    case 120:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 121:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 122:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 123:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 124:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 125:
      if (lookahead == 'l') ADVANCE(192);
      END_STATE();
    case 126:
      if (lookahead == 'l') ADVANCE(148);
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 127:
      if (lookahead == 'm') ADVANCE(384);
      END_STATE();
    case 128:
      if (lookahead == 'm') ADVANCE(160);
      if (lookahead == 'n') ADVANCE(189);
      END_STATE();
    case 129:
      if (lookahead == 'n') ADVANCE(212);
      END_STATE();
    case 130:
      if (lookahead == 'n') ADVANCE(212);
      if (lookahead == 'r') ADVANCE(169);
      END_STATE();
    case 131:
      if (lookahead == 'n') ADVANCE(397);
      END_STATE();
    case 132:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 133:
      if (lookahead == 'n') ADVANCE(386);
      END_STATE();
    case 134:
      if (lookahead == 'n') ADVANCE(407);
      END_STATE();
    case 135:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 136:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 137:
      if (lookahead == 'n') ADVANCE(196);
      END_STATE();
    case 138:
      if (lookahead == 'n') ADVANCE(203);
      END_STATE();
    case 139:
      if (lookahead == 'n') ADVANCE(189);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 141:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 142:
      if (lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 143:
      if (lookahead == 'n') ADVANCE(199);
      END_STATE();
    case 144:
      if (lookahead == 'o') ADVANCE(162);
      END_STATE();
    case 145:
      if (lookahead == 'o') ADVANCE(118);
      if (lookahead == 'x') ADVANCE(442);
      END_STATE();
    case 146:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 147:
      if (lookahead == 'o') ADVANCE(215);
      END_STATE();
    case 148:
      if (lookahead == 'o') ADVANCE(191);
      END_STATE();
    case 149:
      if (lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 150:
      if (lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 151:
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 152:
      if (lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 153:
      if (lookahead == 'o') ADVANCE(168);
      END_STATE();
    case 154:
      if (lookahead == 'o') ADVANCE(207);
      END_STATE();
    case 155:
      if (lookahead == 'o') ADVANCE(193);
      END_STATE();
    case 156:
      if (lookahead == 'o') ADVANCE(216);
      END_STATE();
    case 157:
      if (lookahead == 'o') ADVANCE(217);
      END_STATE();
    case 158:
      if (lookahead == 'p') ADVANCE(76);
      END_STATE();
    case 159:
      if (lookahead == 'p') ADVANCE(76);
      if (lookahead == 'v') ADVANCE(84);
      END_STATE();
    case 160:
      if (lookahead == 'p') ADVANCE(155);
      END_STATE();
    case 161:
      if (lookahead == 'p') ADVANCE(65);
      END_STATE();
    case 162:
      if (lookahead == 'p') ADVANCE(88);
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 163:
      if (lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 164:
      if (lookahead == 'r') ADVANCE(218);
      END_STATE();
    case 165:
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 166:
      if (lookahead == 'r') ADVANCE(399);
      END_STATE();
    case 167:
      if (lookahead == 'r') ADVANCE(401);
      END_STATE();
    case 168:
      if (lookahead == 'r') ADVANCE(440);
      END_STATE();
    case 169:
      if (lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 170:
      if (lookahead == 'r') ADVANCE(221);
      END_STATE();
    case 171:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 172:
      if (lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 173:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 174:
      if (lookahead == 'r') ADVANCE(220);
      END_STATE();
    case 175:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 176:
      if (lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 177:
      if (lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 178:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 179:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 180:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 181:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 182:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 183:
      if (lookahead == 's') ADVANCE(382);
      END_STATE();
    case 184:
      if (lookahead == 's') ADVANCE(406);
      END_STATE();
    case 185:
      if (lookahead == 's') ADVANCE(445);
      END_STATE();
    case 186:
      if (lookahead == 's') ADVANCE(410);
      END_STATE();
    case 187:
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 188:
      if (lookahead == 's') ADVANCE(103);
      END_STATE();
    case 189:
      if (lookahead == 's') ADVANCE(197);
      END_STATE();
    case 190:
      if (lookahead == 's') ADVANCE(147);
      END_STATE();
    case 191:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 192:
      if (lookahead == 's') ADVANCE(67);
      END_STATE();
    case 193:
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 194:
      if (lookahead == 's') ADVANCE(156);
      END_STATE();
    case 195:
      if (lookahead == 's') ADVANCE(157);
      END_STATE();
    case 196:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(369);
      END_STATE();
    case 198:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 199:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 200:
      if (lookahead == 't') ADVANCE(374);
      END_STATE();
    case 201:
      if (lookahead == 't') ADVANCE(380);
      END_STATE();
    case 202:
      if (lookahead == 't') ADVANCE(183);
      END_STATE();
    case 203:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 204:
      if (lookahead == 't') ADVANCE(213);
      END_STATE();
    case 205:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 206:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 207:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 208:
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 209:
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 210:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 211:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 212:
      if (lookahead == 'u') ADVANCE(127);
      END_STATE();
    case 213:
      if (lookahead == 'u') ADVANCE(185);
      END_STATE();
    case 214:
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 215:
      if (lookahead == 'u') ADVANCE(180);
      END_STATE();
    case 216:
      if (lookahead == 'u') ADVANCE(181);
      END_STATE();
    case 217:
      if (lookahead == 'u') ADVANCE(182);
      END_STATE();
    case 218:
      if (lookahead == 'v') ADVANCE(89);
      END_STATE();
    case 219:
      if (lookahead == 'v') ADVANCE(84);
      END_STATE();
    case 220:
      if (lookahead == 'v') ADVANCE(105);
      END_STATE();
    case 221:
      if (lookahead == 'v') ADVANCE(81);
      END_STATE();
    case 222:
      if (lookahead == 'x') ADVANCE(8);
      END_STATE();
    case 223:
      if (lookahead == 'x') ADVANCE(113);
      END_STATE();
    case 224:
      if (lookahead == 'y') ADVANCE(161);
      END_STATE();
    case 225:
      if (lookahead == 'y') ADVANCE(438);
      END_STATE();
    case 226:
      if (lookahead == 'y') ADVANCE(243);
      END_STATE();
    case 227:
      if (lookahead == 'y') ADVANCE(390);
      END_STATE();
    case 228:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(459);
      END_STATE();
    case 229:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(457);
      END_STATE();
    case 230:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(461);
      END_STATE();
    case 231:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(467);
      END_STATE();
    case 232:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(458);
      END_STATE();
    case 233:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(231);
      END_STATE();
    case 234:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(233);
      END_STATE();
    case 235:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(234);
      END_STATE();
    case 236:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(235);
      END_STATE();
    case 237:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(236);
      END_STATE();
    case 238:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(237);
      END_STATE();
    case 239:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(238);
      END_STATE();
    case 240:
      if (eof) ADVANCE(242);
      ADVANCE_MAP(
        '"', 462,
        '&', 471,
        '(', 402,
        ')', 403,
        ',', 413,
        '-', 25,
        '.', 368,
        '/', 12,
        '0', 456,
        ':', 379,
        ';', 244,
        '<', 450,
        '=', 370,
        '>', 451,
        '@', 412,
        'a', 115,
        'b', 99,
        'c', 117,
        'e', 130,
        'f', 31,
        'i', 137,
        'l', 100,
        'o', 159,
        'p', 163,
        'r', 61,
        's', 80,
        't', 34,
        'u', 109,
        'v', 62,
        'z', 222,
        '{', 392,
        '|', 470,
        '}', 393,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(240);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(457);
      END_STATE();
    case 241:
      if (eof) ADVANCE(242);
      ADVANCE_MAP(
        '&', 471,
        ')', 403,
        ',', 413,
        '.', 367,
        '/', 12,
        ':', 379,
        ';', 244,
        '<', 450,
        '=', 370,
        '>', 451,
        '@', 412,
        'a', 116,
        'c', 126,
        'o', 158,
        'p', 176,
        'r', 93,
        's', 90,
        't', 224,
        'u', 188,
        '{', 392,
        '|', 470,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(241);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_library);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(255);
      if (lookahead == '3') ADVANCE(248);
      if (lookahead == '6') ADVANCE(252);
      if (lookahead == '8') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(256);
      if (lookahead == '3') ADVANCE(249);
      if (lookahead == '6') ADVANCE(253);
      if (lookahead == '8') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(250);
      if (lookahead == '6') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(266);
      if (lookahead == 'r') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(307);
      if (lookahead == 'l') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(347);
      if (lookahead == 'n') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(361);
      if (lookahead == 'o') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(338);
      if (lookahead == 't') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(349);
      if (lookahead == 'o') ADVANCE(322);
      if (lookahead == 'y') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(269);
      if (lookahead == 'u') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(319);
      if (lookahead == 'n') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(306);
      if (lookahead == 'x') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(461);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_flexible);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_flexible);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_strict);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_strict);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_resource);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_resource);
      if (lookahead == '_') ADVANCE(59);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_resource);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_struct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_bits);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_bits);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_enum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_union);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_table);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_table);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_overlay);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_overlay);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_reserved);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_reserved);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_protocol);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_open);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_closed);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_ajar);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_error);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_compose);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_compose);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_resource_definition);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_uint32);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_uint32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_properties);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_service);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_int8);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_int8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_int16);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_int16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_int32);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_int32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_int64);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_int64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_uint8);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_uint8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_uint16);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_uint16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_uint64);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_uint64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_float32);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_float32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_float64);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_float64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_byte);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_byte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_array);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_array);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_vector);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_vector);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_box);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_zx_DOTHandle);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_zx_DOTStatus);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_client_end);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_client_end);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_server_end);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_server_end);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_numeric_literal_token1);
      if (lookahead == '.') ADVANCE(460);
      if (lookahead == 'b') ADVANCE(228);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(457);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_numeric_literal_token1);
      if (lookahead == '.') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(457);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_numeric_literal_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(458);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_numeric_literal_token3);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(459);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_numeric_literal_token4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(460);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_numeric_literal_token5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(461);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '/') ADVANCE(465);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(464);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '/') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(467);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(468);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(472);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 241},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 241},
  [26] = {.lex_state = 241},
  [27] = {.lex_state = 241},
  [28] = {.lex_state = 241},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 9},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 9},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 241},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 241},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 241},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 241},
  [58] = {.lex_state = 241},
  [59] = {.lex_state = 9},
  [60] = {.lex_state = 9},
  [61] = {.lex_state = 241},
  [62] = {.lex_state = 241},
  [63] = {.lex_state = 241},
  [64] = {.lex_state = 241},
  [65] = {.lex_state = 9},
  [66] = {.lex_state = 241},
  [67] = {.lex_state = 241},
  [68] = {.lex_state = 9},
  [69] = {.lex_state = 241},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 9},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 6},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 6},
  [113] = {.lex_state = 3},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 3},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 4},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 4},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 7},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 10},
  [144] = {.lex_state = 4},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 4},
  [151] = {.lex_state = 4},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 4},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 4},
  [160] = {.lex_state = 4},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 4},
  [165] = {.lex_state = 4},
  [166] = {.lex_state = 4},
  [167] = {.lex_state = 4},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 4},
  [176] = {.lex_state = 4},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 4},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 4},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 4},
  [193] = {.lex_state = 4},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 4},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 4},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 4},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 4},
  [209] = {.lex_state = 4},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 4},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 4},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 4},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 4},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 4},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 4},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 4},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 4},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 4},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 4},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 4},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 4},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 4},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 4},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 4},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 4},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 4},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_library] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_using] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_flexible] = ACTIONS(1),
    [anon_sym_strict] = ACTIONS(1),
    [anon_sym_resource] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_bits] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_union] = ACTIONS(1),
    [anon_sym_table] = ACTIONS(1),
    [anon_sym_overlay] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_reserved] = ACTIONS(1),
    [anon_sym_protocol] = ACTIONS(1),
    [anon_sym_open] = ACTIONS(1),
    [anon_sym_closed] = ACTIONS(1),
    [anon_sym_ajar] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_error] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_compose] = ACTIONS(1),
    [anon_sym_alias] = ACTIONS(1),
    [anon_sym_resource_definition] = ACTIONS(1),
    [anon_sym_uint32] = ACTIONS(1),
    [anon_sym_properties] = ACTIONS(1),
    [anon_sym_service] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_int8] = ACTIONS(1),
    [anon_sym_int16] = ACTIONS(1),
    [anon_sym_int32] = ACTIONS(1),
    [anon_sym_int64] = ACTIONS(1),
    [anon_sym_uint8] = ACTIONS(1),
    [anon_sym_uint16] = ACTIONS(1),
    [anon_sym_uint64] = ACTIONS(1),
    [anon_sym_float32] = ACTIONS(1),
    [anon_sym_float64] = ACTIONS(1),
    [anon_sym_byte] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_array] = ACTIONS(1),
    [anon_sym_vector] = ACTIONS(1),
    [anon_sym_box] = ACTIONS(1),
    [anon_sym_zx_DOTHandle] = ACTIONS(1),
    [anon_sym_zx_DOTStatus] = ACTIONS(1),
    [anon_sym_client_end] = ACTIONS(1),
    [anon_sym_server_end] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [aux_sym_numeric_literal_token1] = ACTIONS(1),
    [aux_sym_numeric_literal_token2] = ACTIONS(1),
    [aux_sym_numeric_literal_token3] = ACTIONS(1),
    [aux_sym_numeric_literal_token4] = ACTIONS(1),
    [aux_sym_numeric_literal_token5] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE2] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(240),
    [sym_library] = STATE(22),
    [sym_attribute_list] = STATE(234),
    [sym_attribute] = STATE(20),
    [aux_sym_attribute_list_repeat1] = STATE(20),
    [anon_sym_library] = ACTIONS(5),
    [anon_sym_AT] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    STATE(60), 1,
      sym_attribute_list,
    STATE(102), 1,
      sym_layout,
    STATE(106), 1,
      sym_layout_kind,
    STATE(124), 1,
      sym_primitives_type,
    STATE(152), 1,
      sym_layout_parameter,
    STATE(265), 1,
      sym_layout_parameters,
    ACTIONS(19), 2,
      anon_sym_zx_DOTHandle,
      anon_sym_zx_DOTStatus,
    ACTIONS(21), 2,
      sym_true,
      sym_false,
    ACTIONS(23), 2,
      aux_sym_numeric_literal_token1,
      aux_sym_numeric_literal_token5,
    STATE(20), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
    STATE(65), 2,
      sym_declaration_modifiers,
      aux_sym_inline_layout_repeat1,
    STATE(155), 2,
      sym_type_constructor,
      sym_literal,
    ACTIONS(11), 3,
      anon_sym_flexible,
      anon_sym_strict,
      anon_sym_resource,
    ACTIONS(25), 3,
      aux_sym_numeric_literal_token2,
      aux_sym_numeric_literal_token3,
      aux_sym_numeric_literal_token4,
    STATE(86), 3,
      sym_compound_identifier,
      sym_inline_layout,
      sym_builtin_complex_type,
    STATE(129), 3,
      sym_bool,
      sym_numeric_literal,
      sym_string_literal,
    ACTIONS(13), 6,
      anon_sym_struct,
      anon_sym_bits,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_table,
      anon_sym_overlay,
    ACTIONS(17), 6,
      anon_sym_string,
      anon_sym_array,
      anon_sym_vector,
      anon_sym_box,
      anon_sym_client_end,
      anon_sym_server_end,
    ACTIONS(15), 12,
      anon_sym_uint32,
      anon_sym_bool,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_byte,
  [105] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    STATE(60), 1,
      sym_attribute_list,
    STATE(102), 1,
      sym_layout,
    STATE(106), 1,
      sym_layout_kind,
    STATE(124), 1,
      sym_primitives_type,
    STATE(178), 1,
      sym_layout_parameter,
    ACTIONS(19), 2,
      anon_sym_zx_DOTHandle,
      anon_sym_zx_DOTStatus,
    ACTIONS(21), 2,
      sym_true,
      sym_false,
    ACTIONS(23), 2,
      aux_sym_numeric_literal_token1,
      aux_sym_numeric_literal_token5,
    STATE(20), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
    STATE(65), 2,
      sym_declaration_modifiers,
      aux_sym_inline_layout_repeat1,
    STATE(155), 2,
      sym_type_constructor,
      sym_literal,
    ACTIONS(11), 3,
      anon_sym_flexible,
      anon_sym_strict,
      anon_sym_resource,
    ACTIONS(25), 3,
      aux_sym_numeric_literal_token2,
      aux_sym_numeric_literal_token3,
      aux_sym_numeric_literal_token4,
    STATE(86), 3,
      sym_compound_identifier,
      sym_inline_layout,
      sym_builtin_complex_type,
    STATE(129), 3,
      sym_bool,
      sym_numeric_literal,
      sym_string_literal,
    ACTIONS(13), 6,
      anon_sym_struct,
      anon_sym_bits,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_table,
      anon_sym_overlay,
    ACTIONS(17), 6,
      anon_sym_string,
      anon_sym_array,
      anon_sym_vector,
      anon_sym_box,
      anon_sym_client_end,
      anon_sym_server_end,
    ACTIONS(15), 12,
      anon_sym_uint32,
      anon_sym_bool,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_byte,
  [207] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_SEMI,
    STATE(60), 1,
      sym_attribute_list,
    STATE(102), 1,
      sym_layout,
    STATE(106), 1,
      sym_layout_kind,
    STATE(124), 1,
      sym_primitives_type,
    STATE(256), 1,
      sym_type_constructor,
    ACTIONS(19), 2,
      anon_sym_zx_DOTHandle,
      anon_sym_zx_DOTStatus,
    STATE(20), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
    STATE(65), 2,
      sym_declaration_modifiers,
      aux_sym_inline_layout_repeat1,
    ACTIONS(11), 3,
      anon_sym_flexible,
      anon_sym_strict,
      anon_sym_resource,
    STATE(86), 3,
      sym_compound_identifier,
      sym_inline_layout,
      sym_builtin_complex_type,
    ACTIONS(13), 6,
      anon_sym_struct,
      anon_sym_bits,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_table,
      anon_sym_overlay,
    ACTIONS(17), 6,
      anon_sym_string,
      anon_sym_array,
      anon_sym_vector,
      anon_sym_box,
      anon_sym_client_end,
      anon_sym_server_end,
    ACTIONS(15), 12,
      anon_sym_uint32,
      anon_sym_bool,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_byte,
  [287] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(31), 1,
      anon_sym_EQ,
    STATE(60), 1,
      sym_attribute_list,
    STATE(102), 1,
      sym_layout,
    STATE(106), 1,
      sym_layout_kind,
    STATE(124), 1,
      sym_primitives_type,
    STATE(162), 1,
      sym_type_constructor,
    ACTIONS(19), 2,
      anon_sym_zx_DOTHandle,
      anon_sym_zx_DOTStatus,
    STATE(20), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
    STATE(65), 2,
      sym_declaration_modifiers,
      aux_sym_inline_layout_repeat1,
    ACTIONS(11), 3,
      anon_sym_flexible,
      anon_sym_strict,
      anon_sym_resource,
    STATE(86), 3,
      sym_compound_identifier,
      sym_inline_layout,
      sym_builtin_complex_type,
    ACTIONS(13), 6,
      anon_sym_struct,
      anon_sym_bits,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_table,
      anon_sym_overlay,
    ACTIONS(17), 6,
      anon_sym_string,
      anon_sym_array,
      anon_sym_vector,
      anon_sym_box,
      anon_sym_client_end,
      anon_sym_server_end,
    ACTIONS(15), 12,
      anon_sym_uint32,
      anon_sym_bool,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_byte,
  [367] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      sym_attribute_list,
    STATE(102), 1,
      sym_layout,
    STATE(106), 1,
      sym_layout_kind,
    STATE(124), 1,
      sym_primitives_type,
    STATE(211), 1,
      sym_type_constructor,
    ACTIONS(19), 2,
      anon_sym_zx_DOTHandle,
      anon_sym_zx_DOTStatus,
    STATE(20), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
    STATE(65), 2,
      sym_declaration_modifiers,
      aux_sym_inline_layout_repeat1,
    ACTIONS(11), 3,
      anon_sym_flexible,
      anon_sym_strict,
      anon_sym_resource,
    STATE(86), 3,
      sym_compound_identifier,
      sym_inline_layout,
      sym_builtin_complex_type,
    ACTIONS(13), 6,
      anon_sym_struct,
      anon_sym_bits,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_table,
      anon_sym_overlay,
    ACTIONS(17), 6,
      anon_sym_string,
      anon_sym_array,
      anon_sym_vector,
      anon_sym_box,
      anon_sym_client_end,
      anon_sym_server_end,
    ACTIONS(15), 12,
      anon_sym_uint32,
      anon_sym_bool,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_byte,
  [447] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_EQ,
    STATE(60), 1,
      sym_attribute_list,
    STATE(102), 1,
      sym_layout,
    STATE(106), 1,
      sym_layout_kind,
    STATE(124), 1,
      sym_primitives_type,
    STATE(162), 1,
      sym_type_constructor,
    ACTIONS(19), 2,
      anon_sym_zx_DOTHandle,
      anon_sym_zx_DOTStatus,
    STATE(20), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
    STATE(65), 2,
      sym_declaration_modifiers,
      aux_sym_inline_layout_repeat1,
    ACTIONS(11), 3,
      anon_sym_flexible,
      anon_sym_strict,
      anon_sym_resource,
    STATE(86), 3,
      sym_compound_identifier,
      sym_inline_layout,
      sym_builtin_complex_type,
    ACTIONS(13), 6,
      anon_sym_struct,
      anon_sym_bits,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_table,
      anon_sym_overlay,
    ACTIONS(17), 6,
      anon_sym_string,
      anon_sym_array,
      anon_sym_vector,
      anon_sym_box,
      anon_sym_client_end,
      anon_sym_server_end,
    ACTIONS(15), 12,
      anon_sym_uint32,
      anon_sym_bool,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_byte,
  [527] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_identifier,
    STATE(60), 1,
      sym_attribute_list,
    STATE(102), 1,
      sym_layout,
    STATE(106), 1,
      sym_layout_kind,
    STATE(124), 1,
      sym_primitives_type,
    STATE(242), 1,
      sym_type_constructor,
    ACTIONS(19), 2,
      anon_sym_zx_DOTHandle,
      anon_sym_zx_DOTStatus,
    STATE(20), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
    STATE(65), 2,
      sym_declaration_modifiers,
      aux_sym_inline_layout_repeat1,
    ACTIONS(11), 3,
      anon_sym_flexible,
      anon_sym_strict,
      anon_sym_resource,
    STATE(86), 3,
      sym_compound_identifier,
      sym_inline_layout,
      sym_builtin_complex_type,
    ACTIONS(13), 6,
      anon_sym_struct,
      anon_sym_bits,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_table,
      anon_sym_overlay,
    ACTIONS(17), 6,
      anon_sym_string,
      anon_sym_array,
      anon_sym_vector,
      anon_sym_box,
      anon_sym_client_end,
      anon_sym_server_end,
    ACTIONS(15), 12,
      anon_sym_uint32,
      anon_sym_bool,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_byte,
  [604] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_identifier,
    STATE(60), 1,
      sym_attribute_list,
    STATE(102), 1,
      sym_layout,
    STATE(106), 1,
      sym_layout_kind,
    STATE(124), 1,
      sym_primitives_type,
    STATE(207), 1,
      sym_type_constructor,
    ACTIONS(19), 2,
      anon_sym_zx_DOTHandle,
      anon_sym_zx_DOTStatus,
    STATE(20), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
    STATE(65), 2,
      sym_declaration_modifiers,
      aux_sym_inline_layout_repeat1,
    ACTIONS(11), 3,
      anon_sym_flexible,
      anon_sym_strict,
      anon_sym_resource,
    STATE(86), 3,
      sym_compound_identifier,
      sym_inline_layout,
      sym_builtin_complex_type,
    ACTIONS(13), 6,
      anon_sym_struct,
      anon_sym_bits,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_table,
      anon_sym_overlay,
    ACTIONS(17), 6,
      anon_sym_string,
      anon_sym_array,
      anon_sym_vector,
      anon_sym_box,
      anon_sym_client_end,
      anon_sym_server_end,
    ACTIONS(15), 12,
      anon_sym_uint32,
      anon_sym_bool,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_byte,
  [681] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_identifier,
    STATE(60), 1,
      sym_attribute_list,
    STATE(102), 1,
      sym_layout,
    STATE(106), 1,
      sym_layout_kind,
    STATE(124), 1,
      sym_primitives_type,
    STATE(198), 1,
      sym_type_constructor,
    ACTIONS(19), 2,
      anon_sym_zx_DOTHandle,
      anon_sym_zx_DOTStatus,
    STATE(20), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
    STATE(65), 2,
      sym_declaration_modifiers,
      aux_sym_inline_layout_repeat1,
    ACTIONS(11), 3,
      anon_sym_flexible,
      anon_sym_strict,
      anon_sym_resource,
    STATE(86), 3,
      sym_compound_identifier,
      sym_inline_layout,
      sym_builtin_complex_type,
    ACTIONS(13), 6,
      anon_sym_struct,
      anon_sym_bits,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_table,
      anon_sym_overlay,
    ACTIONS(17), 6,
      anon_sym_string,
      anon_sym_array,
      anon_sym_vector,
      anon_sym_box,
      anon_sym_client_end,
      anon_sym_server_end,
    ACTIONS(15), 12,
      anon_sym_uint32,
      anon_sym_bool,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_byte,
  [758] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_identifier,
    STATE(60), 1,
      sym_attribute_list,
    STATE(102), 1,
      sym_layout,
    STATE(106), 1,
      sym_layout_kind,
    STATE(124), 1,
      sym_primitives_type,
    STATE(298), 1,
      sym_type_constructor,
    ACTIONS(19), 2,
      anon_sym_zx_DOTHandle,
      anon_sym_zx_DOTStatus,
    STATE(20), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
    STATE(65), 2,
      sym_declaration_modifiers,
      aux_sym_inline_layout_repeat1,
    ACTIONS(11), 3,
      anon_sym_flexible,
      anon_sym_strict,
      anon_sym_resource,
    STATE(86), 3,
      sym_compound_identifier,
      sym_inline_layout,
      sym_builtin_complex_type,
    ACTIONS(13), 6,
      anon_sym_struct,
      anon_sym_bits,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_table,
      anon_sym_overlay,
    ACTIONS(17), 6,
      anon_sym_string,
      anon_sym_array,
      anon_sym_vector,
      anon_sym_box,
      anon_sym_client_end,
      anon_sym_server_end,
    ACTIONS(15), 12,
      anon_sym_uint32,
      anon_sym_bool,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_byte,
  [835] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_identifier,
    STATE(60), 1,
      sym_attribute_list,
    STATE(102), 1,
      sym_layout,
    STATE(106), 1,
      sym_layout_kind,
    STATE(124), 1,
      sym_primitives_type,
    STATE(241), 1,
      sym_type_constructor,
    ACTIONS(19), 2,
      anon_sym_zx_DOTHandle,
      anon_sym_zx_DOTStatus,
    STATE(20), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
    STATE(65), 2,
      sym_declaration_modifiers,
      aux_sym_inline_layout_repeat1,
    ACTIONS(11), 3,
      anon_sym_flexible,
      anon_sym_strict,
      anon_sym_resource,
    STATE(86), 3,
      sym_compound_identifier,
      sym_inline_layout,
      sym_builtin_complex_type,
    ACTIONS(13), 6,
      anon_sym_struct,
      anon_sym_bits,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_table,
      anon_sym_overlay,
    ACTIONS(17), 6,
      anon_sym_string,
      anon_sym_array,
      anon_sym_vector,
      anon_sym_box,
      anon_sym_client_end,
      anon_sym_server_end,
    ACTIONS(15), 12,
      anon_sym_uint32,
      anon_sym_bool,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_byte,
  [912] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_identifier,
    STATE(60), 1,
      sym_attribute_list,
    STATE(102), 1,
      sym_layout,
    STATE(106), 1,
      sym_layout_kind,
    STATE(124), 1,
      sym_primitives_type,
    STATE(162), 1,
      sym_type_constructor,
    ACTIONS(19), 2,
      anon_sym_zx_DOTHandle,
      anon_sym_zx_DOTStatus,
    STATE(20), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
    STATE(65), 2,
      sym_declaration_modifiers,
      aux_sym_inline_layout_repeat1,
    ACTIONS(11), 3,
      anon_sym_flexible,
      anon_sym_strict,
      anon_sym_resource,
    STATE(86), 3,
      sym_compound_identifier,
      sym_inline_layout,
      sym_builtin_complex_type,
    ACTIONS(13), 6,
      anon_sym_struct,
      anon_sym_bits,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_table,
      anon_sym_overlay,
    ACTIONS(17), 6,
      anon_sym_string,
      anon_sym_array,
      anon_sym_vector,
      anon_sym_box,
      anon_sym_client_end,
      anon_sym_server_end,
    ACTIONS(15), 12,
      anon_sym_uint32,
      anon_sym_bool,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_byte,
  [989] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_identifier,
    STATE(60), 1,
      sym_attribute_list,
    STATE(102), 1,
      sym_layout,
    STATE(106), 1,
      sym_layout_kind,
    STATE(124), 1,
      sym_primitives_type,
    STATE(261), 1,
      sym_type_constructor,
    ACTIONS(19), 2,
      anon_sym_zx_DOTHandle,
      anon_sym_zx_DOTStatus,
    STATE(20), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
    STATE(65), 2,
      sym_declaration_modifiers,
      aux_sym_inline_layout_repeat1,
    ACTIONS(11), 3,
      anon_sym_flexible,
      anon_sym_strict,
      anon_sym_resource,
    STATE(86), 3,
      sym_compound_identifier,
      sym_inline_layout,
      sym_builtin_complex_type,
    ACTIONS(13), 6,
      anon_sym_struct,
      anon_sym_bits,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_table,
      anon_sym_overlay,
    ACTIONS(17), 6,
      anon_sym_string,
      anon_sym_array,
      anon_sym_vector,
      anon_sym_box,
      anon_sym_client_end,
      anon_sym_server_end,
    ACTIONS(15), 12,
      anon_sym_uint32,
      anon_sym_bool,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_byte,
  [1066] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_identifier,
    STATE(60), 1,
      sym_attribute_list,
    STATE(102), 1,
      sym_layout,
    STATE(106), 1,
      sym_layout_kind,
    STATE(124), 1,
      sym_primitives_type,
    STATE(270), 1,
      sym_type_constructor,
    ACTIONS(19), 2,
      anon_sym_zx_DOTHandle,
      anon_sym_zx_DOTStatus,
    STATE(20), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
    STATE(65), 2,
      sym_declaration_modifiers,
      aux_sym_inline_layout_repeat1,
    ACTIONS(11), 3,
      anon_sym_flexible,
      anon_sym_strict,
      anon_sym_resource,
    STATE(86), 3,
      sym_compound_identifier,
      sym_inline_layout,
      sym_builtin_complex_type,
    ACTIONS(13), 6,
      anon_sym_struct,
      anon_sym_bits,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_table,
      anon_sym_overlay,
    ACTIONS(17), 6,
      anon_sym_string,
      anon_sym_array,
      anon_sym_vector,
      anon_sym_box,
      anon_sym_client_end,
      anon_sym_server_end,
    ACTIONS(15), 12,
      anon_sym_uint32,
      anon_sym_bool,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_byte,
  [1143] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_identifier,
    STATE(60), 1,
      sym_attribute_list,
    STATE(102), 1,
      sym_layout,
    STATE(106), 1,
      sym_layout_kind,
    STATE(124), 1,
      sym_primitives_type,
    STATE(272), 1,
      sym_type_constructor,
    ACTIONS(19), 2,
      anon_sym_zx_DOTHandle,
      anon_sym_zx_DOTStatus,
    STATE(20), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
    STATE(65), 2,
      sym_declaration_modifiers,
      aux_sym_inline_layout_repeat1,
    ACTIONS(11), 3,
      anon_sym_flexible,
      anon_sym_strict,
      anon_sym_resource,
    STATE(86), 3,
      sym_compound_identifier,
      sym_inline_layout,
      sym_builtin_complex_type,
    ACTIONS(13), 6,
      anon_sym_struct,
      anon_sym_bits,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_table,
      anon_sym_overlay,
    ACTIONS(17), 6,
      anon_sym_string,
      anon_sym_array,
      anon_sym_vector,
      anon_sym_box,
      anon_sym_client_end,
      anon_sym_server_end,
    ACTIONS(15), 12,
      anon_sym_uint32,
      anon_sym_bool,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_byte,
  [1220] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_identifier,
    STATE(60), 1,
      sym_attribute_list,
    STATE(102), 1,
      sym_layout,
    STATE(106), 1,
      sym_layout_kind,
    STATE(124), 1,
      sym_primitives_type,
    STATE(279), 1,
      sym_type_constructor,
    ACTIONS(19), 2,
      anon_sym_zx_DOTHandle,
      anon_sym_zx_DOTStatus,
    STATE(20), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
    STATE(65), 2,
      sym_declaration_modifiers,
      aux_sym_inline_layout_repeat1,
    ACTIONS(11), 3,
      anon_sym_flexible,
      anon_sym_strict,
      anon_sym_resource,
    STATE(86), 3,
      sym_compound_identifier,
      sym_inline_layout,
      sym_builtin_complex_type,
    ACTIONS(13), 6,
      anon_sym_struct,
      anon_sym_bits,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_table,
      anon_sym_overlay,
    ACTIONS(17), 6,
      anon_sym_string,
      anon_sym_array,
      anon_sym_vector,
      anon_sym_box,
      anon_sym_client_end,
      anon_sym_server_end,
    ACTIONS(15), 12,
      anon_sym_uint32,
      anon_sym_bool,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_byte,
  [1297] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_identifier,
    STATE(60), 1,
      sym_attribute_list,
    STATE(102), 1,
      sym_layout,
    STATE(106), 1,
      sym_layout_kind,
    STATE(124), 1,
      sym_primitives_type,
    STATE(281), 1,
      sym_type_constructor,
    ACTIONS(19), 2,
      anon_sym_zx_DOTHandle,
      anon_sym_zx_DOTStatus,
    STATE(20), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
    STATE(65), 2,
      sym_declaration_modifiers,
      aux_sym_inline_layout_repeat1,
    ACTIONS(11), 3,
      anon_sym_flexible,
      anon_sym_strict,
      anon_sym_resource,
    STATE(86), 3,
      sym_compound_identifier,
      sym_inline_layout,
      sym_builtin_complex_type,
    ACTIONS(13), 6,
      anon_sym_struct,
      anon_sym_bits,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_table,
      anon_sym_overlay,
    ACTIONS(17), 6,
      anon_sym_string,
      anon_sym_array,
      anon_sym_vector,
      anon_sym_box,
      anon_sym_client_end,
      anon_sym_server_end,
    ACTIONS(15), 12,
      anon_sym_uint32,
      anon_sym_bool,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_byte,
  [1374] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_identifier,
    STATE(60), 1,
      sym_attribute_list,
    STATE(102), 1,
      sym_layout,
    STATE(106), 1,
      sym_layout_kind,
    STATE(124), 1,
      sym_primitives_type,
    STATE(283), 1,
      sym_type_constructor,
    ACTIONS(19), 2,
      anon_sym_zx_DOTHandle,
      anon_sym_zx_DOTStatus,
    STATE(20), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
    STATE(65), 2,
      sym_declaration_modifiers,
      aux_sym_inline_layout_repeat1,
    ACTIONS(11), 3,
      anon_sym_flexible,
      anon_sym_strict,
      anon_sym_resource,
    STATE(86), 3,
      sym_compound_identifier,
      sym_inline_layout,
      sym_builtin_complex_type,
    ACTIONS(13), 6,
      anon_sym_struct,
      anon_sym_bits,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_table,
      anon_sym_overlay,
    ACTIONS(17), 6,
      anon_sym_string,
      anon_sym_array,
      anon_sym_vector,
      anon_sym_box,
      anon_sym_client_end,
      anon_sym_server_end,
    ACTIONS(15), 12,
      anon_sym_uint32,
      anon_sym_bool,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_byte,
  [1451] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_AT,
    STATE(21), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
    ACTIONS(39), 3,
      anon_sym_resource,
      aux_sym_numeric_literal_token1,
      aux_sym_numeric_literal_token5,
    ACTIONS(37), 21,
      anon_sym_library,
      anon_sym_const,
      anon_sym_type,
      anon_sym_flexible,
      anon_sym_strict,
      anon_sym_struct,
      anon_sym_bits,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_table,
      anon_sym_overlay,
      anon_sym_protocol,
      anon_sym_open,
      anon_sym_closed,
      anon_sym_ajar,
      anon_sym_alias,
      anon_sym_resource_definition,
      anon_sym_service,
      aux_sym_numeric_literal_token2,
      aux_sym_numeric_literal_token3,
      aux_sym_numeric_literal_token4,
  [1490] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_AT,
    STATE(21), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
    ACTIONS(43), 3,
      anon_sym_resource,
      aux_sym_numeric_literal_token1,
      aux_sym_numeric_literal_token5,
    ACTIONS(41), 21,
      anon_sym_library,
      anon_sym_const,
      anon_sym_type,
      anon_sym_flexible,
      anon_sym_strict,
      anon_sym_struct,
      anon_sym_bits,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_table,
      anon_sym_overlay,
      anon_sym_protocol,
      anon_sym_open,
      anon_sym_closed,
      anon_sym_ajar,
      anon_sym_alias,
      anon_sym_resource_definition,
      anon_sym_service,
      aux_sym_numeric_literal_token2,
      aux_sym_numeric_literal_token3,
      aux_sym_numeric_literal_token4,
  [1529] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_AT,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
    ACTIONS(50), 1,
      anon_sym_using,
    ACTIONS(52), 1,
      anon_sym_const,
    ACTIONS(54), 1,
      anon_sym_type,
    ACTIONS(56), 1,
      anon_sym_protocol,
    ACTIONS(60), 1,
      anon_sym_alias,
    ACTIONS(62), 1,
      anon_sym_resource_definition,
    ACTIONS(64), 1,
      anon_sym_service,
    STATE(27), 1,
      sym_using_list,
    STATE(69), 1,
      sym_attribute_list,
    STATE(238), 1,
      sym_protocol_attribute,
    STATE(20), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
    STATE(28), 2,
      sym_declaration,
      aux_sym_source_file_repeat1,
    STATE(52), 2,
      sym_using,
      aux_sym_using_list_repeat1,
    ACTIONS(58), 3,
      anon_sym_open,
      anon_sym_closed,
      anon_sym_ajar,
    STATE(246), 6,
      sym_const_declaration,
      sym_layout_declaration,
      sym_protocol_declaration,
      sym_type_alias_declaration,
      sym_resource_declaration,
      sym_service_declaration,
  [1594] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(68), 3,
      anon_sym_resource,
      aux_sym_numeric_literal_token1,
      aux_sym_numeric_literal_token5,
    ACTIONS(66), 22,
      anon_sym_library,
      anon_sym_const,
      anon_sym_type,
      anon_sym_flexible,
      anon_sym_strict,
      anon_sym_struct,
      anon_sym_bits,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_table,
      anon_sym_overlay,
      anon_sym_protocol,
      anon_sym_open,
      anon_sym_closed,
      anon_sym_ajar,
      anon_sym_alias,
      anon_sym_resource_definition,
      anon_sym_service,
      anon_sym_AT,
      aux_sym_numeric_literal_token2,
      aux_sym_numeric_literal_token3,
      aux_sym_numeric_literal_token4,
  [1630] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 3,
      anon_sym_resource,
      aux_sym_numeric_literal_token1,
      aux_sym_numeric_literal_token5,
    ACTIONS(72), 22,
      anon_sym_library,
      anon_sym_const,
      anon_sym_type,
      anon_sym_flexible,
      anon_sym_strict,
      anon_sym_struct,
      anon_sym_bits,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_table,
      anon_sym_overlay,
      anon_sym_protocol,
      anon_sym_open,
      anon_sym_closed,
      anon_sym_ajar,
      anon_sym_alias,
      anon_sym_resource_definition,
      anon_sym_service,
      anon_sym_AT,
      aux_sym_numeric_literal_token2,
      aux_sym_numeric_literal_token3,
      aux_sym_numeric_literal_token4,
  [1663] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_AT,
    ACTIONS(52), 1,
      anon_sym_const,
    ACTIONS(54), 1,
      anon_sym_type,
    ACTIONS(56), 1,
      anon_sym_protocol,
    ACTIONS(60), 1,
      anon_sym_alias,
    ACTIONS(62), 1,
      anon_sym_resource_definition,
    ACTIONS(64), 1,
      anon_sym_service,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
    STATE(69), 1,
      sym_attribute_list,
    STATE(238), 1,
      sym_protocol_attribute,
    STATE(20), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
    STATE(26), 2,
      sym_declaration,
      aux_sym_source_file_repeat1,
    ACTIONS(58), 3,
      anon_sym_open,
      anon_sym_closed,
      anon_sym_ajar,
    STATE(246), 6,
      sym_const_declaration,
      sym_layout_declaration,
      sym_protocol_declaration,
      sym_type_alias_declaration,
      sym_resource_declaration,
      sym_service_declaration,
  [1718] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
    ACTIONS(80), 1,
      anon_sym_const,
    ACTIONS(83), 1,
      anon_sym_type,
    ACTIONS(86), 1,
      anon_sym_protocol,
    ACTIONS(92), 1,
      anon_sym_alias,
    ACTIONS(95), 1,
      anon_sym_resource_definition,
    ACTIONS(98), 1,
      anon_sym_service,
    ACTIONS(101), 1,
      anon_sym_AT,
    STATE(69), 1,
      sym_attribute_list,
    STATE(238), 1,
      sym_protocol_attribute,
    STATE(20), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
    STATE(26), 2,
      sym_declaration,
      aux_sym_source_file_repeat1,
    ACTIONS(89), 3,
      anon_sym_open,
      anon_sym_closed,
      anon_sym_ajar,
    STATE(246), 6,
      sym_const_declaration,
      sym_layout_declaration,
      sym_protocol_declaration,
      sym_type_alias_declaration,
      sym_resource_declaration,
      sym_service_declaration,
  [1773] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_AT,
    ACTIONS(52), 1,
      anon_sym_const,
    ACTIONS(54), 1,
      anon_sym_type,
    ACTIONS(56), 1,
      anon_sym_protocol,
    ACTIONS(60), 1,
      anon_sym_alias,
    ACTIONS(62), 1,
      anon_sym_resource_definition,
    ACTIONS(64), 1,
      anon_sym_service,
    ACTIONS(104), 1,
      ts_builtin_sym_end,
    STATE(69), 1,
      sym_attribute_list,
    STATE(238), 1,
      sym_protocol_attribute,
    STATE(20), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
    STATE(25), 2,
      sym_declaration,
      aux_sym_source_file_repeat1,
    ACTIONS(58), 3,
      anon_sym_open,
      anon_sym_closed,
      anon_sym_ajar,
    STATE(246), 6,
      sym_const_declaration,
      sym_layout_declaration,
      sym_protocol_declaration,
      sym_type_alias_declaration,
      sym_resource_declaration,
      sym_service_declaration,
  [1828] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_AT,
    ACTIONS(52), 1,
      anon_sym_const,
    ACTIONS(54), 1,
      anon_sym_type,
    ACTIONS(56), 1,
      anon_sym_protocol,
    ACTIONS(60), 1,
      anon_sym_alias,
    ACTIONS(62), 1,
      anon_sym_resource_definition,
    ACTIONS(64), 1,
      anon_sym_service,
    ACTIONS(104), 1,
      ts_builtin_sym_end,
    STATE(69), 1,
      sym_attribute_list,
    STATE(238), 1,
      sym_protocol_attribute,
    STATE(20), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
    STATE(26), 2,
      sym_declaration,
      aux_sym_source_file_repeat1,
    ACTIONS(58), 3,
      anon_sym_open,
      anon_sym_closed,
      anon_sym_ajar,
    STATE(246), 6,
      sym_const_declaration,
      sym_layout_declaration,
      sym_protocol_declaration,
      sym_type_alias_declaration,
      sym_resource_declaration,
      sym_service_declaration,
  [1883] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      sym_identifier,
    ACTIONS(108), 1,
      anon_sym_RBRACE,
    ACTIONS(110), 1,
      anon_sym_AT,
    STATE(56), 1,
      aux_sym_ordinal_layout_repeat1,
    STATE(74), 1,
      aux_sym_struct_layout_repeat1,
    STATE(97), 1,
      sym_attribute_list,
    STATE(99), 1,
      aux_sym_value_layout_repeat1,
    STATE(250), 1,
      sym_value_layout_member,
    STATE(258), 1,
      sym_struct_layout_member,
    STATE(259), 1,
      sym_ordinal_layout_member,
    STATE(263), 1,
      sym_member_field,
    STATE(271), 1,
      sym_numeric_literal,
    ACTIONS(23), 2,
      aux_sym_numeric_literal_token1,
      aux_sym_numeric_literal_token5,
    STATE(85), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
    ACTIONS(25), 3,
      aux_sym_numeric_literal_token2,
      aux_sym_numeric_literal_token3,
      aux_sym_numeric_literal_token4,
  [1936] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(112), 1,
      anon_sym_LT,
    STATE(117), 1,
      sym_type_constraint,
    STATE(119), 1,
      sym_constant_allows_bit_ops,
    STATE(122), 1,
      sym_type_constraints,
    ACTIONS(21), 2,
      sym_true,
      sym_false,
    ACTIONS(23), 2,
      aux_sym_numeric_literal_token1,
      aux_sym_numeric_literal_token5,
    STATE(75), 2,
      sym_compound_identifier,
      sym_numeric_literal,
    STATE(118), 2,
      sym_bool,
      sym_string_literal,
    ACTIONS(25), 3,
      aux_sym_numeric_literal_token2,
      aux_sym_numeric_literal_token3,
      aux_sym_numeric_literal_token4,
  [1979] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(114), 1,
      sym_identifier,
    STATE(153), 1,
      sym_attribute_arg,
    ACTIONS(21), 2,
      sym_true,
      sym_false,
    ACTIONS(23), 2,
      aux_sym_numeric_literal_token1,
      aux_sym_numeric_literal_token5,
    STATE(142), 2,
      sym_compound_identifier,
      sym_literal,
    STATE(296), 2,
      sym_attribute_args,
      sym_constant,
    ACTIONS(25), 3,
      aux_sym_numeric_literal_token2,
      aux_sym_numeric_literal_token3,
      aux_sym_numeric_literal_token4,
    STATE(129), 3,
      sym_bool,
      sym_numeric_literal,
      sym_string_literal,
  [2018] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(112), 1,
      anon_sym_LT,
    STATE(116), 1,
      sym_type_constraints,
    STATE(117), 1,
      sym_type_constraint,
    STATE(119), 1,
      sym_constant_allows_bit_ops,
    ACTIONS(21), 2,
      sym_true,
      sym_false,
    ACTIONS(23), 2,
      aux_sym_numeric_literal_token1,
      aux_sym_numeric_literal_token5,
    STATE(75), 2,
      sym_compound_identifier,
      sym_numeric_literal,
    STATE(118), 2,
      sym_bool,
      sym_string_literal,
    ACTIONS(25), 3,
      aux_sym_numeric_literal_token2,
      aux_sym_numeric_literal_token3,
      aux_sym_numeric_literal_token4,
  [2061] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(120), 1,
      anon_sym_RBRACE,
    ACTIONS(122), 1,
      anon_sym_DASH_GT,
    ACTIONS(124), 1,
      anon_sym_compose,
    ACTIONS(126), 1,
      anon_sym_AT,
    STATE(37), 1,
      aux_sym_protocol_declaration_repeat1,
    STATE(109), 1,
      sym_attribute_list,
    STATE(165), 1,
      sym_declaration_modifiers,
    STATE(273), 1,
      sym_protocol_member,
    STATE(84), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
    ACTIONS(118), 3,
      anon_sym_flexible,
      anon_sym_strict,
      anon_sym_resource,
    STATE(278), 3,
      sym_protocol_method,
      sym_protocol_event,
      sym_protocol_compose,
  [2106] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(120), 1,
      anon_sym_RBRACE,
    ACTIONS(122), 1,
      anon_sym_DASH_GT,
    ACTIONS(124), 1,
      anon_sym_compose,
    ACTIONS(126), 1,
      anon_sym_AT,
    STATE(38), 1,
      aux_sym_protocol_declaration_repeat1,
    STATE(109), 1,
      sym_attribute_list,
    STATE(165), 1,
      sym_declaration_modifiers,
    STATE(273), 1,
      sym_protocol_member,
    STATE(84), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
    ACTIONS(118), 3,
      anon_sym_flexible,
      anon_sym_strict,
      anon_sym_resource,
    STATE(278), 3,
      sym_protocol_method,
      sym_protocol_event,
      sym_protocol_compose,
  [2151] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_AT,
    STATE(60), 1,
      sym_attribute_list,
    STATE(106), 1,
      sym_layout_kind,
    STATE(236), 1,
      sym_inline_layout,
    STATE(20), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
    STATE(65), 2,
      sym_declaration_modifiers,
      aux_sym_inline_layout_repeat1,
    ACTIONS(128), 3,
      anon_sym_flexible,
      anon_sym_strict,
      anon_sym_resource,
    ACTIONS(130), 6,
      anon_sym_struct,
      anon_sym_bits,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_table,
      anon_sym_overlay,
  [2188] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(122), 1,
      anon_sym_DASH_GT,
    ACTIONS(124), 1,
      anon_sym_compose,
    ACTIONS(126), 1,
      anon_sym_AT,
    ACTIONS(132), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      aux_sym_protocol_declaration_repeat1,
    STATE(109), 1,
      sym_attribute_list,
    STATE(165), 1,
      sym_declaration_modifiers,
    STATE(273), 1,
      sym_protocol_member,
    STATE(84), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
    ACTIONS(118), 3,
      anon_sym_flexible,
      anon_sym_strict,
      anon_sym_resource,
    STATE(278), 3,
      sym_protocol_method,
      sym_protocol_event,
      sym_protocol_compose,
  [2233] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      sym_identifier,
    ACTIONS(140), 1,
      anon_sym_RBRACE,
    ACTIONS(142), 1,
      anon_sym_DASH_GT,
    ACTIONS(145), 1,
      anon_sym_compose,
    ACTIONS(148), 1,
      anon_sym_AT,
    STATE(37), 1,
      aux_sym_protocol_declaration_repeat1,
    STATE(109), 1,
      sym_attribute_list,
    STATE(165), 1,
      sym_declaration_modifiers,
    STATE(273), 1,
      sym_protocol_member,
    STATE(84), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
    ACTIONS(137), 3,
      anon_sym_flexible,
      anon_sym_strict,
      anon_sym_resource,
    STATE(278), 3,
      sym_protocol_method,
      sym_protocol_event,
      sym_protocol_compose,
  [2278] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(122), 1,
      anon_sym_DASH_GT,
    ACTIONS(124), 1,
      anon_sym_compose,
    ACTIONS(126), 1,
      anon_sym_AT,
    ACTIONS(151), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      aux_sym_protocol_declaration_repeat1,
    STATE(109), 1,
      sym_attribute_list,
    STATE(165), 1,
      sym_declaration_modifiers,
    STATE(273), 1,
      sym_protocol_member,
    STATE(84), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
    ACTIONS(118), 3,
      anon_sym_flexible,
      anon_sym_strict,
      anon_sym_resource,
    STATE(278), 3,
      sym_protocol_method,
      sym_protocol_event,
      sym_protocol_compose,
  [2323] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(122), 1,
      anon_sym_DASH_GT,
    ACTIONS(124), 1,
      anon_sym_compose,
    ACTIONS(126), 1,
      anon_sym_AT,
    ACTIONS(151), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      aux_sym_protocol_declaration_repeat1,
    STATE(109), 1,
      sym_attribute_list,
    STATE(165), 1,
      sym_declaration_modifiers,
    STATE(273), 1,
      sym_protocol_member,
    STATE(84), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
    ACTIONS(118), 3,
      anon_sym_flexible,
      anon_sym_strict,
      anon_sym_resource,
    STATE(278), 3,
      sym_protocol_method,
      sym_protocol_event,
      sym_protocol_compose,
  [2368] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(122), 1,
      anon_sym_DASH_GT,
    ACTIONS(124), 1,
      anon_sym_compose,
    ACTIONS(126), 1,
      anon_sym_AT,
    ACTIONS(153), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      aux_sym_protocol_declaration_repeat1,
    STATE(109), 1,
      sym_attribute_list,
    STATE(165), 1,
      sym_declaration_modifiers,
    STATE(273), 1,
      sym_protocol_member,
    STATE(84), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
    ACTIONS(118), 3,
      anon_sym_flexible,
      anon_sym_strict,
      anon_sym_resource,
    STATE(278), 3,
      sym_protocol_method,
      sym_protocol_event,
      sym_protocol_compose,
  [2413] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_AT,
    STATE(60), 1,
      sym_attribute_list,
    STATE(106), 1,
      sym_layout_kind,
    STATE(247), 1,
      sym_inline_layout,
    STATE(20), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
    STATE(65), 2,
      sym_declaration_modifiers,
      aux_sym_inline_layout_repeat1,
    ACTIONS(128), 3,
      anon_sym_flexible,
      anon_sym_strict,
      anon_sym_resource,
    ACTIONS(130), 6,
      anon_sym_struct,
      anon_sym_bits,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_table,
      anon_sym_overlay,
  [2450] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(114), 1,
      sym_identifier,
    STATE(153), 1,
      sym_attribute_arg,
    ACTIONS(21), 2,
      sym_true,
      sym_false,
    ACTIONS(23), 2,
      aux_sym_numeric_literal_token1,
      aux_sym_numeric_literal_token5,
    STATE(142), 2,
      sym_compound_identifier,
      sym_literal,
    STATE(227), 2,
      sym_attribute_args,
      sym_constant,
    ACTIONS(25), 3,
      aux_sym_numeric_literal_token2,
      aux_sym_numeric_literal_token3,
      aux_sym_numeric_literal_token4,
    STATE(129), 3,
      sym_bool,
      sym_numeric_literal,
      sym_string_literal,
  [2489] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(114), 1,
      sym_identifier,
    STATE(153), 1,
      sym_attribute_arg,
    ACTIONS(21), 2,
      sym_true,
      sym_false,
    ACTIONS(23), 2,
      aux_sym_numeric_literal_token1,
      aux_sym_numeric_literal_token5,
    STATE(142), 2,
      sym_compound_identifier,
      sym_literal,
    STATE(294), 2,
      sym_attribute_args,
      sym_constant,
    ACTIONS(25), 3,
      aux_sym_numeric_literal_token2,
      aux_sym_numeric_literal_token3,
      aux_sym_numeric_literal_token4,
    STATE(129), 3,
      sym_bool,
      sym_numeric_literal,
      sym_string_literal,
  [2528] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    STATE(119), 1,
      sym_constant_allows_bit_ops,
    STATE(139), 1,
      sym_type_constraint,
    STATE(205), 1,
      sym_type_constraint_list,
    ACTIONS(21), 2,
      sym_true,
      sym_false,
    ACTIONS(23), 2,
      aux_sym_numeric_literal_token1,
      aux_sym_numeric_literal_token5,
    STATE(75), 2,
      sym_compound_identifier,
      sym_numeric_literal,
    STATE(118), 2,
      sym_bool,
      sym_string_literal,
    ACTIONS(25), 3,
      aux_sym_numeric_literal_token2,
      aux_sym_numeric_literal_token3,
      aux_sym_numeric_literal_token4,
  [2568] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    STATE(119), 1,
      sym_constant_allows_bit_ops,
    STATE(185), 1,
      sym_type_constraint,
    ACTIONS(21), 2,
      sym_true,
      sym_false,
    ACTIONS(23), 2,
      aux_sym_numeric_literal_token1,
      aux_sym_numeric_literal_token5,
    STATE(75), 2,
      sym_compound_identifier,
      sym_numeric_literal,
    STATE(118), 2,
      sym_bool,
      sym_string_literal,
    ACTIONS(25), 3,
      aux_sym_numeric_literal_token2,
      aux_sym_numeric_literal_token3,
      aux_sym_numeric_literal_token4,
  [2605] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    STATE(252), 1,
      sym_constant,
    ACTIONS(21), 2,
      sym_true,
      sym_false,
    ACTIONS(23), 2,
      aux_sym_numeric_literal_token1,
      aux_sym_numeric_literal_token5,
    STATE(142), 2,
      sym_compound_identifier,
      sym_literal,
    ACTIONS(25), 3,
      aux_sym_numeric_literal_token2,
      aux_sym_numeric_literal_token3,
      aux_sym_numeric_literal_token4,
    STATE(129), 3,
      sym_bool,
      sym_numeric_literal,
      sym_string_literal,
  [2640] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    STATE(194), 1,
      sym_constant,
    ACTIONS(21), 2,
      sym_true,
      sym_false,
    ACTIONS(23), 2,
      aux_sym_numeric_literal_token1,
      aux_sym_numeric_literal_token5,
    STATE(142), 2,
      sym_compound_identifier,
      sym_literal,
    ACTIONS(25), 3,
      aux_sym_numeric_literal_token2,
      aux_sym_numeric_literal_token3,
      aux_sym_numeric_literal_token4,
    STATE(129), 3,
      sym_bool,
      sym_numeric_literal,
      sym_string_literal,
  [2675] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    STATE(224), 1,
      sym_constant_allows_bit_ops,
    ACTIONS(21), 2,
      sym_true,
      sym_false,
    ACTIONS(23), 2,
      aux_sym_numeric_literal_token1,
      aux_sym_numeric_literal_token5,
    STATE(75), 2,
      sym_compound_identifier,
      sym_numeric_literal,
    STATE(118), 2,
      sym_bool,
      sym_string_literal,
    ACTIONS(25), 3,
      aux_sym_numeric_literal_token2,
      aux_sym_numeric_literal_token3,
      aux_sym_numeric_literal_token4,
  [2709] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    STATE(228), 1,
      sym_constant_allows_bit_ops,
    ACTIONS(21), 2,
      sym_true,
      sym_false,
    ACTIONS(23), 2,
      aux_sym_numeric_literal_token1,
      aux_sym_numeric_literal_token5,
    STATE(75), 2,
      sym_compound_identifier,
      sym_numeric_literal,
    STATE(118), 2,
      sym_bool,
      sym_string_literal,
    ACTIONS(25), 3,
      aux_sym_numeric_literal_token2,
      aux_sym_numeric_literal_token3,
      aux_sym_numeric_literal_token4,
  [2743] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_using,
    STATE(50), 2,
      sym_using,
      aux_sym_using_list_repeat1,
    ACTIONS(155), 11,
      ts_builtin_sym_end,
      anon_sym_const,
      anon_sym_type,
      anon_sym_protocol,
      anon_sym_open,
      anon_sym_closed,
      anon_sym_ajar,
      anon_sym_alias,
      anon_sym_resource_definition,
      anon_sym_service,
      anon_sym_AT,
  [2767] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    STATE(255), 1,
      sym_constant_allows_bit_ops,
    ACTIONS(21), 2,
      sym_true,
      sym_false,
    ACTIONS(23), 2,
      aux_sym_numeric_literal_token1,
      aux_sym_numeric_literal_token5,
    STATE(75), 2,
      sym_compound_identifier,
      sym_numeric_literal,
    STATE(118), 2,
      sym_bool,
      sym_string_literal,
    ACTIONS(25), 3,
      aux_sym_numeric_literal_token2,
      aux_sym_numeric_literal_token3,
      aux_sym_numeric_literal_token4,
  [2801] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 1,
      anon_sym_using,
    STATE(50), 2,
      sym_using,
      aux_sym_using_list_repeat1,
    ACTIONS(160), 11,
      ts_builtin_sym_end,
      anon_sym_const,
      anon_sym_type,
      anon_sym_protocol,
      anon_sym_open,
      anon_sym_closed,
      anon_sym_ajar,
      anon_sym_alias,
      anon_sym_resource_definition,
      anon_sym_service,
      anon_sym_AT,
  [2825] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    STATE(290), 1,
      sym_constant_allows_bit_ops,
    ACTIONS(21), 2,
      sym_true,
      sym_false,
    ACTIONS(23), 2,
      aux_sym_numeric_literal_token1,
      aux_sym_numeric_literal_token5,
    STATE(75), 2,
      sym_compound_identifier,
      sym_numeric_literal,
    STATE(118), 2,
      sym_bool,
      sym_string_literal,
    ACTIONS(25), 3,
      aux_sym_numeric_literal_token2,
      aux_sym_numeric_literal_token3,
      aux_sym_numeric_literal_token4,
  [2859] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_RBRACE,
    ACTIONS(164), 1,
      anon_sym_AT,
    STATE(54), 1,
      aux_sym_ordinal_layout_repeat1,
    STATE(125), 1,
      sym_attribute_list,
    STATE(259), 1,
      sym_ordinal_layout_member,
    STATE(271), 1,
      sym_numeric_literal,
    ACTIONS(167), 2,
      aux_sym_numeric_literal_token1,
      aux_sym_numeric_literal_token5,
    STATE(20), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
    ACTIONS(170), 3,
      aux_sym_numeric_literal_token2,
      aux_sym_numeric_literal_token3,
      aux_sym_numeric_literal_token4,
  [2894] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_DOT,
    STATE(58), 1,
      aux_sym_compound_identifier_repeat1,
    ACTIONS(173), 11,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_AMP,
  [2917] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_AT,
    ACTIONS(177), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      aux_sym_ordinal_layout_repeat1,
    STATE(125), 1,
      sym_attribute_list,
    STATE(259), 1,
      sym_ordinal_layout_member,
    STATE(271), 1,
      sym_numeric_literal,
    ACTIONS(23), 2,
      aux_sym_numeric_literal_token1,
      aux_sym_numeric_literal_token5,
    STATE(20), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
    ACTIONS(25), 3,
      aux_sym_numeric_literal_token2,
      aux_sym_numeric_literal_token3,
      aux_sym_numeric_literal_token4,
  [2952] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_DOT,
    STATE(55), 1,
      aux_sym_compound_identifier_repeat1,
    ACTIONS(179), 11,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_AMP,
  [2975] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_DOT,
    STATE(58), 1,
      aux_sym_compound_identifier_repeat1,
    ACTIONS(181), 11,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_AMP,
  [2998] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(110), 1,
      sym_layout_kind,
    STATE(68), 2,
      sym_declaration_modifiers,
      aux_sym_inline_layout_repeat1,
    ACTIONS(128), 3,
      anon_sym_flexible,
      anon_sym_strict,
      anon_sym_resource,
    ACTIONS(130), 6,
      anon_sym_struct,
      anon_sym_bits,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_table,
      anon_sym_overlay,
  [3022] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(108), 1,
      sym_layout_kind,
    STATE(59), 2,
      sym_declaration_modifiers,
      aux_sym_inline_layout_repeat1,
    ACTIONS(128), 3,
      anon_sym_flexible,
      anon_sym_strict,
      anon_sym_resource,
    ACTIONS(130), 6,
      anon_sym_struct,
      anon_sym_bits,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_table,
      anon_sym_overlay,
  [3046] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 12,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_const,
      anon_sym_type,
      anon_sym_protocol,
      anon_sym_open,
      anon_sym_closed,
      anon_sym_ajar,
      anon_sym_alias,
      anon_sym_resource_definition,
      anon_sym_service,
      anon_sym_AT,
  [3064] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 12,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_const,
      anon_sym_type,
      anon_sym_protocol,
      anon_sym_open,
      anon_sym_closed,
      anon_sym_ajar,
      anon_sym_alias,
      anon_sym_resource_definition,
      anon_sym_service,
      anon_sym_AT,
  [3082] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 12,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_const,
      anon_sym_type,
      anon_sym_protocol,
      anon_sym_open,
      anon_sym_closed,
      anon_sym_ajar,
      anon_sym_alias,
      anon_sym_resource_definition,
      anon_sym_service,
      anon_sym_AT,
  [3100] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 12,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_const,
      anon_sym_type,
      anon_sym_protocol,
      anon_sym_open,
      anon_sym_closed,
      anon_sym_ajar,
      anon_sym_alias,
      anon_sym_resource_definition,
      anon_sym_service,
      anon_sym_AT,
  [3118] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(108), 1,
      sym_layout_kind,
    STATE(68), 2,
      sym_declaration_modifiers,
      aux_sym_inline_layout_repeat1,
    ACTIONS(128), 3,
      anon_sym_flexible,
      anon_sym_strict,
      anon_sym_resource,
    ACTIONS(130), 6,
      anon_sym_struct,
      anon_sym_bits,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_table,
      anon_sym_overlay,
  [3142] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 12,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_AMP,
  [3160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 11,
      ts_builtin_sym_end,
      anon_sym_const,
      anon_sym_type,
      anon_sym_protocol,
      anon_sym_open,
      anon_sym_closed,
      anon_sym_ajar,
      anon_sym_alias,
      anon_sym_resource_definition,
      anon_sym_service,
      anon_sym_AT,
  [3177] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(68), 2,
      sym_declaration_modifiers,
      aux_sym_inline_layout_repeat1,
    ACTIONS(196), 3,
      anon_sym_flexible,
      anon_sym_strict,
      anon_sym_resource,
    ACTIONS(199), 6,
      anon_sym_struct,
      anon_sym_bits,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_table,
      anon_sym_overlay,
  [3198] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_const,
    ACTIONS(203), 1,
      anon_sym_type,
    ACTIONS(205), 1,
      anon_sym_protocol,
    ACTIONS(207), 1,
      anon_sym_alias,
    ACTIONS(209), 1,
      anon_sym_resource_definition,
    ACTIONS(211), 1,
      anon_sym_service,
    STATE(291), 1,
      sym_protocol_attribute,
    ACTIONS(58), 3,
      anon_sym_open,
      anon_sym_closed,
      anon_sym_ajar,
  [3228] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_DASH_GT,
    ACTIONS(213), 1,
      anon_sym_AT,
    STATE(70), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
    ACTIONS(43), 5,
      sym_identifier,
      anon_sym_flexible,
      anon_sym_strict,
      anon_sym_resource,
      anon_sym_compose,
  [3249] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_AT,
    ACTIONS(43), 2,
      aux_sym_numeric_literal_token1,
      aux_sym_numeric_literal_token5,
    STATE(71), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
    ACTIONS(41), 4,
      sym_identifier,
      aux_sym_numeric_literal_token2,
      aux_sym_numeric_literal_token3,
      aux_sym_numeric_literal_token4,
  [3270] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_AT,
    ACTIONS(219), 1,
      sym_identifier,
    ACTIONS(221), 1,
      anon_sym_RBRACE,
    STATE(167), 1,
      sym_attribute_list,
    STATE(202), 1,
      sym_member_field,
    STATE(76), 2,
      sym_service_member,
      aux_sym_service_declaration_repeat1,
    STATE(85), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
  [3297] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_AT,
    ACTIONS(219), 1,
      sym_identifier,
    ACTIONS(221), 1,
      anon_sym_RBRACE,
    STATE(167), 1,
      sym_attribute_list,
    STATE(202), 1,
      sym_member_field,
    STATE(77), 2,
      sym_service_member,
      aux_sym_service_declaration_repeat1,
    STATE(85), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
  [3324] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_AT,
    ACTIONS(219), 1,
      sym_identifier,
    ACTIONS(223), 1,
      anon_sym_RBRACE,
    STATE(78), 1,
      aux_sym_struct_layout_repeat1,
    STATE(166), 1,
      sym_attribute_list,
    STATE(258), 1,
      sym_struct_layout_member,
    STATE(263), 1,
      sym_member_field,
    STATE(85), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
  [3353] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(80), 1,
      aux_sym_constant_allows_bit_ops_repeat1,
    ACTIONS(227), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(225), 6,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
  [3372] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(232), 1,
      anon_sym_RBRACE,
    ACTIONS(234), 1,
      anon_sym_AT,
    STATE(167), 1,
      sym_attribute_list,
    STATE(202), 1,
      sym_member_field,
    STATE(76), 2,
      sym_service_member,
      aux_sym_service_declaration_repeat1,
    STATE(85), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
  [3399] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_AT,
    ACTIONS(219), 1,
      sym_identifier,
    ACTIONS(237), 1,
      anon_sym_RBRACE,
    STATE(167), 1,
      sym_attribute_list,
    STATE(202), 1,
      sym_member_field,
    STATE(76), 2,
      sym_service_member,
      aux_sym_service_declaration_repeat1,
    STATE(85), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
  [3426] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      sym_identifier,
    ACTIONS(242), 1,
      anon_sym_RBRACE,
    ACTIONS(244), 1,
      anon_sym_AT,
    STATE(78), 1,
      aux_sym_struct_layout_repeat1,
    STATE(166), 1,
      sym_attribute_list,
    STATE(258), 1,
      sym_struct_layout_member,
    STATE(263), 1,
      sym_member_field,
    STATE(85), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
  [3455] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 9,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_AMP,
  [3470] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(81), 1,
      aux_sym_constant_allows_bit_ops_repeat1,
    ACTIONS(227), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(249), 6,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
  [3489] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(81), 1,
      aux_sym_constant_allows_bit_ops_repeat1,
    ACTIONS(253), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(251), 6,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
  [3508] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 9,
      anon_sym_flexible,
      anon_sym_strict,
      anon_sym_resource,
      anon_sym_struct,
      anon_sym_bits,
      anon_sym_enum,
      anon_sym_union,
      anon_sym_table,
      anon_sym_overlay,
  [3523] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_AT,
    ACTIONS(219), 1,
      sym_identifier,
    ACTIONS(258), 1,
      anon_sym_RBRACE,
    STATE(167), 1,
      sym_attribute_list,
    STATE(202), 1,
      sym_member_field,
    STATE(72), 2,
      sym_service_member,
      aux_sym_service_declaration_repeat1,
    STATE(85), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
  [3550] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_DASH_GT,
    ACTIONS(126), 1,
      anon_sym_AT,
    STATE(70), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
    ACTIONS(39), 5,
      sym_identifier,
      anon_sym_flexible,
      anon_sym_strict,
      anon_sym_resource,
      anon_sym_compose,
  [3571] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_AT,
    ACTIONS(39), 2,
      aux_sym_numeric_literal_token1,
      aux_sym_numeric_literal_token5,
    STATE(71), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
    ACTIONS(37), 4,
      sym_identifier,
      aux_sym_numeric_literal_token2,
      aux_sym_numeric_literal_token3,
      aux_sym_numeric_literal_token4,
  [3592] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 8,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_GT,
  [3606] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 8,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_GT,
  [3620] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 8,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_GT,
  [3634] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 8,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_GT,
  [3648] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 8,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_GT,
  [3662] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 8,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_GT,
  [3676] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      sym_identifier,
    ACTIONS(23), 2,
      aux_sym_numeric_literal_token1,
      aux_sym_numeric_literal_token5,
    STATE(95), 2,
      sym_compound_identifier,
      sym_numeric_literal,
    ACTIONS(25), 3,
      aux_sym_numeric_literal_token2,
      aux_sym_numeric_literal_token3,
      aux_sym_numeric_literal_token4,
  [3696] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 8,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_GT,
  [3710] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 8,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_GT,
  [3724] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 8,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_AMP,
  [3738] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 3,
      anon_sym_RBRACE,
      anon_sym_DASH_GT,
      anon_sym_AT,
    ACTIONS(278), 5,
      sym_identifier,
      anon_sym_flexible,
      anon_sym_strict,
      anon_sym_resource,
      anon_sym_compose,
  [3754] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      sym_identifier,
    STATE(262), 1,
      sym_member_field,
    STATE(264), 1,
      sym_numeric_literal,
    ACTIONS(23), 2,
      aux_sym_numeric_literal_token1,
      aux_sym_numeric_literal_token5,
    ACTIONS(25), 3,
      aux_sym_numeric_literal_token2,
      aux_sym_numeric_literal_token3,
      aux_sym_numeric_literal_token4,
  [3776] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 8,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_GT,
  [3790] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_AT,
    ACTIONS(284), 1,
      sym_identifier,
    ACTIONS(286), 1,
      anon_sym_RBRACE,
    STATE(103), 1,
      aux_sym_value_layout_repeat1,
    STATE(250), 1,
      sym_value_layout_member,
    STATE(276), 1,
      sym_attribute_list,
    STATE(85), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
  [3816] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 8,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_GT,
  [3830] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_LPAREN,
    ACTIONS(66), 2,
      anon_sym_DASH_GT,
      anon_sym_AT,
    ACTIONS(68), 5,
      sym_identifier,
      anon_sym_flexible,
      anon_sym_strict,
      anon_sym_resource,
      anon_sym_compose,
  [3848] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_COLON,
    ACTIONS(296), 1,
      anon_sym_LT,
    ACTIONS(292), 6,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
  [3866] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      sym_identifier,
    ACTIONS(301), 1,
      anon_sym_RBRACE,
    ACTIONS(303), 1,
      anon_sym_AT,
    STATE(103), 1,
      aux_sym_value_layout_repeat1,
    STATE(250), 1,
      sym_value_layout_member,
    STATE(276), 1,
      sym_attribute_list,
    STATE(85), 2,
      sym_attribute,
      aux_sym_attribute_list_repeat1,
  [3892] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_LPAREN,
    ACTIONS(68), 2,
      aux_sym_numeric_literal_token1,
      aux_sym_numeric_literal_token5,
    ACTIONS(66), 5,
      sym_identifier,
      anon_sym_AT,
      aux_sym_numeric_literal_token2,
      aux_sym_numeric_literal_token3,
      aux_sym_numeric_literal_token4,
  [3910] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 8,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_GT,
  [3924] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_COLON,
    ACTIONS(312), 1,
      anon_sym_LBRACE,
    STATE(87), 1,
      sym_layout_body,
    STATE(126), 1,
      sym_layout_subtype,
    STATE(88), 3,
      sym_value_layout,
      sym_struct_layout,
      sym_ordinal_layout,
  [3945] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 2,
      aux_sym_numeric_literal_token1,
      aux_sym_numeric_literal_token5,
    ACTIONS(72), 5,
      sym_identifier,
      anon_sym_AT,
      aux_sym_numeric_literal_token2,
      aux_sym_numeric_literal_token3,
      aux_sym_numeric_literal_token4,
  [3960] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_COLON,
    ACTIONS(312), 1,
      anon_sym_LBRACE,
    STATE(90), 1,
      sym_layout_body,
    STATE(128), 1,
      sym_layout_subtype,
    STATE(88), 3,
      sym_value_layout,
      sym_struct_layout,
      sym_ordinal_layout,
  [3981] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym_identifier,
    ACTIONS(316), 1,
      anon_sym_DASH_GT,
    ACTIONS(318), 1,
      anon_sym_compose,
    STATE(160), 1,
      sym_declaration_modifiers,
    ACTIONS(118), 3,
      anon_sym_flexible,
      anon_sym_strict,
      anon_sym_resource,
  [4002] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_COLON,
    ACTIONS(312), 1,
      anon_sym_LBRACE,
    STATE(91), 1,
      sym_layout_body,
    STATE(127), 1,
      sym_layout_subtype,
    STATE(88), 3,
      sym_value_layout,
      sym_struct_layout,
      sym_ordinal_layout,
  [4023] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_COLON,
    ACTIONS(320), 6,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
  [4038] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 2,
      anon_sym_DASH_GT,
      anon_sym_AT,
    ACTIONS(74), 5,
      sym_identifier,
      anon_sym_flexible,
      anon_sym_strict,
      anon_sym_resource,
      anon_sym_compose,
  [4053] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 2,
      aux_sym_numeric_literal_token1,
      aux_sym_numeric_literal_token5,
    ACTIONS(162), 5,
      anon_sym_RBRACE,
      anon_sym_AT,
      aux_sym_numeric_literal_token2,
      aux_sym_numeric_literal_token3,
      aux_sym_numeric_literal_token4,
  [4068] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 6,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
  [4080] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 6,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
  [4092] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 6,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
  [4104] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 6,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
  [4116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 6,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
  [4128] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 6,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
  [4140] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 6,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
  [4152] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 6,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
  [4164] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 6,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
  [4176] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 6,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
  [4188] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 6,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
  [4200] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(264), 1,
      sym_numeric_literal,
    ACTIONS(23), 2,
      aux_sym_numeric_literal_token1,
      aux_sym_numeric_literal_token5,
    ACTIONS(25), 3,
      aux_sym_numeric_literal_token2,
      aux_sym_numeric_literal_token3,
      aux_sym_numeric_literal_token4,
  [4216] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_LBRACE,
    STATE(90), 1,
      sym_layout_body,
    STATE(88), 3,
      sym_value_layout,
      sym_struct_layout,
      sym_ordinal_layout,
  [4231] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_LBRACE,
    STATE(94), 1,
      sym_layout_body,
    STATE(88), 3,
      sym_value_layout,
      sym_struct_layout,
      sym_ordinal_layout,
  [4246] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_LBRACE,
    STATE(91), 1,
      sym_layout_body,
    STATE(88), 3,
      sym_value_layout,
      sym_struct_layout,
      sym_ordinal_layout,
  [4261] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
  [4271] = 4,
    ACTIONS(346), 1,
      anon_sym_DQUOTE2,
    ACTIONS(350), 1,
      sym_comment,
    STATE(131), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(348), 2,
      sym__interpreted_string_literal_basic_content,
      sym_escape_sequence,
  [4285] = 4,
    ACTIONS(350), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_DQUOTE2,
    STATE(135), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(354), 2,
      sym__interpreted_string_literal_basic_content,
      sym_escape_sequence,
  [4299] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      sym_identifier,
    ACTIONS(356), 1,
      anon_sym_RBRACE,
    STATE(133), 1,
      aux_sym_resource_properties_repeat1,
    STATE(267), 1,
      sym_member_field,
  [4315] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      sym_identifier,
    ACTIONS(358), 1,
      anon_sym_RBRACE,
    STATE(134), 1,
      aux_sym_resource_properties_repeat1,
    STATE(267), 1,
      sym_member_field,
  [4331] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym_identifier,
    ACTIONS(363), 1,
      anon_sym_RBRACE,
    STATE(134), 1,
      aux_sym_resource_properties_repeat1,
    STATE(267), 1,
      sym_member_field,
  [4347] = 4,
    ACTIONS(350), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_DQUOTE2,
    STATE(135), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(367), 2,
      sym__interpreted_string_literal_basic_content,
      sym_escape_sequence,
  [4361] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_DOT,
    ACTIONS(179), 1,
      anon_sym_RPAREN,
    ACTIONS(370), 1,
      anon_sym_EQ,
    STATE(55), 1,
      aux_sym_compound_identifier_repeat1,
  [4377] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 3,
      sym_identifier,
      anon_sym_RBRACE,
      anon_sym_AT,
  [4386] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      anon_sym_COMMA,
    ACTIONS(377), 1,
      anon_sym_GT,
    STATE(138), 1,
      aux_sym_type_constraint_list_repeat1,
  [4399] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_COMMA,
    ACTIONS(381), 1,
      anon_sym_GT,
    STATE(145), 1,
      aux_sym_type_constraint_list_repeat1,
  [4412] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_COMMA,
    ACTIONS(385), 1,
      anon_sym_GT,
    STATE(146), 1,
      aux_sym_layout_parameters_repeat1,
  [4425] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 3,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
      anon_sym_error,
  [4434] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4443] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      sym_identifier,
    ACTIONS(393), 1,
      anon_sym_reserved,
    STATE(232), 1,
      sym_member_field,
  [4456] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 3,
      sym_identifier,
      anon_sym_RBRACE,
      anon_sym_AT,
  [4465] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_COMMA,
    ACTIONS(397), 1,
      anon_sym_GT,
    STATE(138), 1,
      aux_sym_type_constraint_list_repeat1,
  [4478] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_COMMA,
    ACTIONS(402), 1,
      anon_sym_GT,
    STATE(146), 1,
      aux_sym_layout_parameters_repeat1,
  [4491] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_RPAREN,
    ACTIONS(406), 1,
      anon_sym_COMMA,
    STATE(147), 1,
      aux_sym_attribute_args_repeat1,
  [4504] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 3,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
      anon_sym_error,
  [4513] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_RPAREN,
    ACTIONS(413), 1,
      anon_sym_COMMA,
    STATE(147), 1,
      aux_sym_attribute_args_repeat1,
  [4526] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 3,
      sym_identifier,
      anon_sym_RBRACE,
      anon_sym_AT,
  [4535] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 3,
      sym_identifier,
      anon_sym_RBRACE,
      anon_sym_AT,
  [4544] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_COMMA,
    ACTIONS(415), 1,
      anon_sym_GT,
    STATE(140), 1,
      aux_sym_layout_parameters_repeat1,
  [4557] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_COMMA,
    ACTIONS(417), 1,
      anon_sym_RPAREN,
    STATE(149), 1,
      aux_sym_attribute_args_repeat1,
  [4570] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 2,
      sym_identifier,
      anon_sym_DASH_GT,
  [4578] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [4586] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_SEMI,
    ACTIONS(423), 1,
      anon_sym_DASH_GT,
  [4596] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      anon_sym_LPAREN,
    STATE(169), 1,
      sym_parameter_list,
  [4606] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      anon_sym_LPAREN,
    STATE(170), 1,
      sym_parameter_list,
  [4616] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      sym_identifier,
    STATE(216), 1,
      sym_compound_identifier,
  [4626] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      sym_identifier,
    ACTIONS(429), 1,
      anon_sym_DASH_GT,
  [4636] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_properties,
    STATE(220), 1,
      sym_resource_properties,
  [4646] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(435), 1,
      anon_sym_EQ,
  [4656] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      anon_sym_LPAREN,
    STATE(156), 1,
      sym_parameter_list,
  [4666] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      sym_identifier,
    STATE(213), 1,
      sym_compound_identifier,
  [4676] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_DASH_GT,
    ACTIONS(437), 1,
      sym_identifier,
  [4686] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      sym_identifier,
    STATE(262), 1,
      sym_member_field,
  [4696] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      sym_identifier,
    STATE(217), 1,
      sym_member_field,
  [4706] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      anon_sym_LPAREN,
    STATE(179), 1,
      sym_parameter_list,
  [4716] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_SEMI,
    ACTIONS(441), 1,
      anon_sym_error,
  [4726] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_SEMI,
    ACTIONS(445), 1,
      anon_sym_DASH_GT,
  [4736] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      anon_sym_LPAREN,
    STATE(182), 1,
      sym_parameter_list,
  [4746] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      anon_sym_LPAREN,
    STATE(183), 1,
      sym_parameter_list,
  [4756] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_properties,
    STATE(253), 1,
      sym_resource_properties,
  [4766] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_SEMI,
    ACTIONS(449), 1,
      anon_sym_as,
  [4776] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      sym_identifier,
    STATE(256), 1,
      sym_member_field,
  [4786] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      sym_identifier,
    STATE(174), 1,
      sym_compound_identifier,
  [4796] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4804] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [4812] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_SEMI,
    ACTIONS(453), 1,
      anon_sym_error,
  [4822] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      sym_identifier,
    STATE(230), 1,
      sym_compound_identifier,
  [4832] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      anon_sym_LPAREN,
    STATE(187), 1,
      sym_parameter_list,
  [4842] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_SEMI,
    ACTIONS(457), 1,
      anon_sym_error,
  [4852] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_SEMI,
    ACTIONS(459), 1,
      anon_sym_DASH_GT,
  [4862] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      anon_sym_LPAREN,
    STATE(189), 1,
      sym_parameter_list,
  [4872] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [4880] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 2,
      anon_sym_COLON,
      anon_sym_LBRACE,
  [4888] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_SEMI,
    ACTIONS(465), 1,
      anon_sym_error,
  [4898] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      anon_sym_LPAREN,
    STATE(191), 1,
      sym_parameter_list,
  [4908] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_SEMI,
    ACTIONS(469), 1,
      anon_sym_error,
  [4918] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      sym_identifier,
    STATE(289), 1,
      sym_compound_identifier,
  [4928] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      anon_sym_SEMI,
    ACTIONS(473), 1,
      anon_sym_error,
  [4938] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [4946] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      sym_identifier,
    STATE(177), 1,
      sym_attribute_arg,
  [4956] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4964] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      sym_identifier,
  [4971] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      anon_sym_EQ,
  [4978] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_protocol,
  [4985] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      anon_sym_SEMI,
  [4992] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      anon_sym_LBRACE,
  [4999] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      sym_identifier,
  [5006] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      anon_sym_SEMI,
  [5013] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_SEMI,
  [5020] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_SEMI,
  [5027] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      anon_sym_COLON,
  [5034] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_GT,
  [5041] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      sym_identifier,
  [5048] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      anon_sym_EQ,
  [5055] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      sym_identifier,
  [5062] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      sym_identifier,
  [5069] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_uint32,
  [5076] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      anon_sym_RPAREN,
  [5083] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      sym_identifier,
  [5090] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      anon_sym_SEMI,
  [5097] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      sym_identifier,
  [5104] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_EQ,
  [5111] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_SEMI,
  [5118] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_SEMI,
  [5125] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      sym_identifier,
  [5132] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_LBRACE,
  [5139] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_RBRACE,
  [5146] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      anon_sym_LBRACE,
  [5153] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      anon_sym_LBRACE,
  [5160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_SEMI,
  [5167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_SEMI,
  [5174] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      anon_sym_SEMI,
  [5181] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      anon_sym_SEMI,
  [5188] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      anon_sym_RPAREN,
  [5195] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      anon_sym_SEMI,
  [5202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 1,
      anon_sym_COLON,
  [5209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_SEMI,
  [5216] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      sym_identifier,
  [5223] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_SEMI,
  [5230] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_EQ,
  [5237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_library,
  [5244] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_EQ,
  [5251] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_SEMI,
  [5258] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      sym_identifier,
  [5265] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_protocol,
  [5272] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      sym_identifier,
  [5279] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      ts_builtin_sym_end,
  [5286] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_SEMI,
  [5293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      anon_sym_LBRACE,
  [5300] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      sym_identifier,
  [5307] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_LBRACE,
  [5314] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_LBRACE,
  [5321] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_SEMI,
  [5328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_SEMI,
  [5335] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      sym_identifier,
  [5342] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_SEMI,
  [5349] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      anon_sym_SEMI,
  [5356] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      anon_sym_EQ,
  [5363] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_SEMI,
  [5370] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_RBRACE,
  [5377] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_SEMI,
  [5384] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_SEMI,
  [5391] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_SEMI,
  [5398] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      sym_identifier,
  [5405] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_SEMI,
  [5412] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      anon_sym_SEMI,
  [5419] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_LBRACE,
  [5426] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_SEMI,
  [5433] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_SEMI,
  [5440] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_SEMI,
  [5447] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_COLON,
  [5454] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      anon_sym_GT,
  [5461] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_SEMI,
  [5468] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_SEMI,
  [5475] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_EQ,
  [5482] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_SEMI,
  [5489] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      anon_sym_SEMI,
  [5496] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_COLON,
  [5503] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_SEMI,
  [5510] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_SEMI,
  [5517] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      sym_identifier,
  [5524] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_RBRACE,
  [5531] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      sym_identifier,
  [5538] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      anon_sym_SEMI,
  [5545] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      anon_sym_SEMI,
  [5552] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      anon_sym_SEMI,
  [5559] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      sym_identifier,
  [5566] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_SEMI,
  [5573] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 1,
      anon_sym_RBRACE,
  [5580] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_SEMI,
  [5587] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      anon_sym_uint32,
  [5594] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      anon_sym_SEMI,
  [5601] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      sym_identifier,
  [5608] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 1,
      anon_sym_EQ,
  [5615] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 1,
      sym_identifier,
  [5622] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 1,
      anon_sym_SEMI,
  [5629] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      anon_sym_SEMI,
  [5636] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_protocol,
  [5643] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      anon_sym_LBRACE,
  [5650] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      sym_identifier,
  [5657] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      anon_sym_RPAREN,
  [5664] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      sym_identifier,
  [5671] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 1,
      anon_sym_RPAREN,
  [5678] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 1,
      sym_identifier,
  [5685] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 1,
      anon_sym_EQ,
  [5692] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 105,
  [SMALL_STATE(4)] = 207,
  [SMALL_STATE(5)] = 287,
  [SMALL_STATE(6)] = 367,
  [SMALL_STATE(7)] = 447,
  [SMALL_STATE(8)] = 527,
  [SMALL_STATE(9)] = 604,
  [SMALL_STATE(10)] = 681,
  [SMALL_STATE(11)] = 758,
  [SMALL_STATE(12)] = 835,
  [SMALL_STATE(13)] = 912,
  [SMALL_STATE(14)] = 989,
  [SMALL_STATE(15)] = 1066,
  [SMALL_STATE(16)] = 1143,
  [SMALL_STATE(17)] = 1220,
  [SMALL_STATE(18)] = 1297,
  [SMALL_STATE(19)] = 1374,
  [SMALL_STATE(20)] = 1451,
  [SMALL_STATE(21)] = 1490,
  [SMALL_STATE(22)] = 1529,
  [SMALL_STATE(23)] = 1594,
  [SMALL_STATE(24)] = 1630,
  [SMALL_STATE(25)] = 1663,
  [SMALL_STATE(26)] = 1718,
  [SMALL_STATE(27)] = 1773,
  [SMALL_STATE(28)] = 1828,
  [SMALL_STATE(29)] = 1883,
  [SMALL_STATE(30)] = 1936,
  [SMALL_STATE(31)] = 1979,
  [SMALL_STATE(32)] = 2018,
  [SMALL_STATE(33)] = 2061,
  [SMALL_STATE(34)] = 2106,
  [SMALL_STATE(35)] = 2151,
  [SMALL_STATE(36)] = 2188,
  [SMALL_STATE(37)] = 2233,
  [SMALL_STATE(38)] = 2278,
  [SMALL_STATE(39)] = 2323,
  [SMALL_STATE(40)] = 2368,
  [SMALL_STATE(41)] = 2413,
  [SMALL_STATE(42)] = 2450,
  [SMALL_STATE(43)] = 2489,
  [SMALL_STATE(44)] = 2528,
  [SMALL_STATE(45)] = 2568,
  [SMALL_STATE(46)] = 2605,
  [SMALL_STATE(47)] = 2640,
  [SMALL_STATE(48)] = 2675,
  [SMALL_STATE(49)] = 2709,
  [SMALL_STATE(50)] = 2743,
  [SMALL_STATE(51)] = 2767,
  [SMALL_STATE(52)] = 2801,
  [SMALL_STATE(53)] = 2825,
  [SMALL_STATE(54)] = 2859,
  [SMALL_STATE(55)] = 2894,
  [SMALL_STATE(56)] = 2917,
  [SMALL_STATE(57)] = 2952,
  [SMALL_STATE(58)] = 2975,
  [SMALL_STATE(59)] = 2998,
  [SMALL_STATE(60)] = 3022,
  [SMALL_STATE(61)] = 3046,
  [SMALL_STATE(62)] = 3064,
  [SMALL_STATE(63)] = 3082,
  [SMALL_STATE(64)] = 3100,
  [SMALL_STATE(65)] = 3118,
  [SMALL_STATE(66)] = 3142,
  [SMALL_STATE(67)] = 3160,
  [SMALL_STATE(68)] = 3177,
  [SMALL_STATE(69)] = 3198,
  [SMALL_STATE(70)] = 3228,
  [SMALL_STATE(71)] = 3249,
  [SMALL_STATE(72)] = 3270,
  [SMALL_STATE(73)] = 3297,
  [SMALL_STATE(74)] = 3324,
  [SMALL_STATE(75)] = 3353,
  [SMALL_STATE(76)] = 3372,
  [SMALL_STATE(77)] = 3399,
  [SMALL_STATE(78)] = 3426,
  [SMALL_STATE(79)] = 3455,
  [SMALL_STATE(80)] = 3470,
  [SMALL_STATE(81)] = 3489,
  [SMALL_STATE(82)] = 3508,
  [SMALL_STATE(83)] = 3523,
  [SMALL_STATE(84)] = 3550,
  [SMALL_STATE(85)] = 3571,
  [SMALL_STATE(86)] = 3592,
  [SMALL_STATE(87)] = 3606,
  [SMALL_STATE(88)] = 3620,
  [SMALL_STATE(89)] = 3634,
  [SMALL_STATE(90)] = 3648,
  [SMALL_STATE(91)] = 3662,
  [SMALL_STATE(92)] = 3676,
  [SMALL_STATE(93)] = 3696,
  [SMALL_STATE(94)] = 3710,
  [SMALL_STATE(95)] = 3724,
  [SMALL_STATE(96)] = 3738,
  [SMALL_STATE(97)] = 3754,
  [SMALL_STATE(98)] = 3776,
  [SMALL_STATE(99)] = 3790,
  [SMALL_STATE(100)] = 3816,
  [SMALL_STATE(101)] = 3830,
  [SMALL_STATE(102)] = 3848,
  [SMALL_STATE(103)] = 3866,
  [SMALL_STATE(104)] = 3892,
  [SMALL_STATE(105)] = 3910,
  [SMALL_STATE(106)] = 3924,
  [SMALL_STATE(107)] = 3945,
  [SMALL_STATE(108)] = 3960,
  [SMALL_STATE(109)] = 3981,
  [SMALL_STATE(110)] = 4002,
  [SMALL_STATE(111)] = 4023,
  [SMALL_STATE(112)] = 4038,
  [SMALL_STATE(113)] = 4053,
  [SMALL_STATE(114)] = 4068,
  [SMALL_STATE(115)] = 4080,
  [SMALL_STATE(116)] = 4092,
  [SMALL_STATE(117)] = 4104,
  [SMALL_STATE(118)] = 4116,
  [SMALL_STATE(119)] = 4128,
  [SMALL_STATE(120)] = 4140,
  [SMALL_STATE(121)] = 4152,
  [SMALL_STATE(122)] = 4164,
  [SMALL_STATE(123)] = 4176,
  [SMALL_STATE(124)] = 4188,
  [SMALL_STATE(125)] = 4200,
  [SMALL_STATE(126)] = 4216,
  [SMALL_STATE(127)] = 4231,
  [SMALL_STATE(128)] = 4246,
  [SMALL_STATE(129)] = 4261,
  [SMALL_STATE(130)] = 4271,
  [SMALL_STATE(131)] = 4285,
  [SMALL_STATE(132)] = 4299,
  [SMALL_STATE(133)] = 4315,
  [SMALL_STATE(134)] = 4331,
  [SMALL_STATE(135)] = 4347,
  [SMALL_STATE(136)] = 4361,
  [SMALL_STATE(137)] = 4377,
  [SMALL_STATE(138)] = 4386,
  [SMALL_STATE(139)] = 4399,
  [SMALL_STATE(140)] = 4412,
  [SMALL_STATE(141)] = 4425,
  [SMALL_STATE(142)] = 4434,
  [SMALL_STATE(143)] = 4443,
  [SMALL_STATE(144)] = 4456,
  [SMALL_STATE(145)] = 4465,
  [SMALL_STATE(146)] = 4478,
  [SMALL_STATE(147)] = 4491,
  [SMALL_STATE(148)] = 4504,
  [SMALL_STATE(149)] = 4513,
  [SMALL_STATE(150)] = 4526,
  [SMALL_STATE(151)] = 4535,
  [SMALL_STATE(152)] = 4544,
  [SMALL_STATE(153)] = 4557,
  [SMALL_STATE(154)] = 4570,
  [SMALL_STATE(155)] = 4578,
  [SMALL_STATE(156)] = 4586,
  [SMALL_STATE(157)] = 4596,
  [SMALL_STATE(158)] = 4606,
  [SMALL_STATE(159)] = 4616,
  [SMALL_STATE(160)] = 4626,
  [SMALL_STATE(161)] = 4636,
  [SMALL_STATE(162)] = 4646,
  [SMALL_STATE(163)] = 4656,
  [SMALL_STATE(164)] = 4666,
  [SMALL_STATE(165)] = 4676,
  [SMALL_STATE(166)] = 4686,
  [SMALL_STATE(167)] = 4696,
  [SMALL_STATE(168)] = 4706,
  [SMALL_STATE(169)] = 4716,
  [SMALL_STATE(170)] = 4726,
  [SMALL_STATE(171)] = 4736,
  [SMALL_STATE(172)] = 4746,
  [SMALL_STATE(173)] = 4756,
  [SMALL_STATE(174)] = 4766,
  [SMALL_STATE(175)] = 4776,
  [SMALL_STATE(176)] = 4786,
  [SMALL_STATE(177)] = 4796,
  [SMALL_STATE(178)] = 4804,
  [SMALL_STATE(179)] = 4812,
  [SMALL_STATE(180)] = 4822,
  [SMALL_STATE(181)] = 4832,
  [SMALL_STATE(182)] = 4842,
  [SMALL_STATE(183)] = 4852,
  [SMALL_STATE(184)] = 4862,
  [SMALL_STATE(185)] = 4872,
  [SMALL_STATE(186)] = 4880,
  [SMALL_STATE(187)] = 4888,
  [SMALL_STATE(188)] = 4898,
  [SMALL_STATE(189)] = 4908,
  [SMALL_STATE(190)] = 4918,
  [SMALL_STATE(191)] = 4928,
  [SMALL_STATE(192)] = 4938,
  [SMALL_STATE(193)] = 4946,
  [SMALL_STATE(194)] = 4956,
  [SMALL_STATE(195)] = 4964,
  [SMALL_STATE(196)] = 4971,
  [SMALL_STATE(197)] = 4978,
  [SMALL_STATE(198)] = 4985,
  [SMALL_STATE(199)] = 4992,
  [SMALL_STATE(200)] = 4999,
  [SMALL_STATE(201)] = 5006,
  [SMALL_STATE(202)] = 5013,
  [SMALL_STATE(203)] = 5020,
  [SMALL_STATE(204)] = 5027,
  [SMALL_STATE(205)] = 5034,
  [SMALL_STATE(206)] = 5041,
  [SMALL_STATE(207)] = 5048,
  [SMALL_STATE(208)] = 5055,
  [SMALL_STATE(209)] = 5062,
  [SMALL_STATE(210)] = 5069,
  [SMALL_STATE(211)] = 5076,
  [SMALL_STATE(212)] = 5083,
  [SMALL_STATE(213)] = 5090,
  [SMALL_STATE(214)] = 5097,
  [SMALL_STATE(215)] = 5104,
  [SMALL_STATE(216)] = 5111,
  [SMALL_STATE(217)] = 5118,
  [SMALL_STATE(218)] = 5125,
  [SMALL_STATE(219)] = 5132,
  [SMALL_STATE(220)] = 5139,
  [SMALL_STATE(221)] = 5146,
  [SMALL_STATE(222)] = 5153,
  [SMALL_STATE(223)] = 5160,
  [SMALL_STATE(224)] = 5167,
  [SMALL_STATE(225)] = 5174,
  [SMALL_STATE(226)] = 5181,
  [SMALL_STATE(227)] = 5188,
  [SMALL_STATE(228)] = 5195,
  [SMALL_STATE(229)] = 5202,
  [SMALL_STATE(230)] = 5209,
  [SMALL_STATE(231)] = 5216,
  [SMALL_STATE(232)] = 5223,
  [SMALL_STATE(233)] = 5230,
  [SMALL_STATE(234)] = 5237,
  [SMALL_STATE(235)] = 5244,
  [SMALL_STATE(236)] = 5251,
  [SMALL_STATE(237)] = 5258,
  [SMALL_STATE(238)] = 5265,
  [SMALL_STATE(239)] = 5272,
  [SMALL_STATE(240)] = 5279,
  [SMALL_STATE(241)] = 5286,
  [SMALL_STATE(242)] = 5293,
  [SMALL_STATE(243)] = 5300,
  [SMALL_STATE(244)] = 5307,
  [SMALL_STATE(245)] = 5314,
  [SMALL_STATE(246)] = 5321,
  [SMALL_STATE(247)] = 5328,
  [SMALL_STATE(248)] = 5335,
  [SMALL_STATE(249)] = 5342,
  [SMALL_STATE(250)] = 5349,
  [SMALL_STATE(251)] = 5356,
  [SMALL_STATE(252)] = 5363,
  [SMALL_STATE(253)] = 5370,
  [SMALL_STATE(254)] = 5377,
  [SMALL_STATE(255)] = 5384,
  [SMALL_STATE(256)] = 5391,
  [SMALL_STATE(257)] = 5398,
  [SMALL_STATE(258)] = 5405,
  [SMALL_STATE(259)] = 5412,
  [SMALL_STATE(260)] = 5419,
  [SMALL_STATE(261)] = 5426,
  [SMALL_STATE(262)] = 5433,
  [SMALL_STATE(263)] = 5440,
  [SMALL_STATE(264)] = 5447,
  [SMALL_STATE(265)] = 5454,
  [SMALL_STATE(266)] = 5461,
  [SMALL_STATE(267)] = 5468,
  [SMALL_STATE(268)] = 5475,
  [SMALL_STATE(269)] = 5482,
  [SMALL_STATE(270)] = 5489,
  [SMALL_STATE(271)] = 5496,
  [SMALL_STATE(272)] = 5503,
  [SMALL_STATE(273)] = 5510,
  [SMALL_STATE(274)] = 5517,
  [SMALL_STATE(275)] = 5524,
  [SMALL_STATE(276)] = 5531,
  [SMALL_STATE(277)] = 5538,
  [SMALL_STATE(278)] = 5545,
  [SMALL_STATE(279)] = 5552,
  [SMALL_STATE(280)] = 5559,
  [SMALL_STATE(281)] = 5566,
  [SMALL_STATE(282)] = 5573,
  [SMALL_STATE(283)] = 5580,
  [SMALL_STATE(284)] = 5587,
  [SMALL_STATE(285)] = 5594,
  [SMALL_STATE(286)] = 5601,
  [SMALL_STATE(287)] = 5608,
  [SMALL_STATE(288)] = 5615,
  [SMALL_STATE(289)] = 5622,
  [SMALL_STATE(290)] = 5629,
  [SMALL_STATE(291)] = 5636,
  [SMALL_STATE(292)] = 5643,
  [SMALL_STATE(293)] = 5650,
  [SMALL_STATE(294)] = 5657,
  [SMALL_STATE(295)] = 5664,
  [SMALL_STATE(296)] = 5671,
  [SMALL_STATE(297)] = 5678,
  [SMALL_STATE(298)] = 5685,
  [SMALL_STATE(299)] = 5692,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordinal_layout_member, 3, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_list, 1, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_list, 1, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_list_repeat1, 2, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_list_repeat1, 2, 0, 0),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_list_repeat1, 2, 0, 0), SHIFT_REPEAT(286),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 2, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 5, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 5, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(237),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(274),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(288),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(197),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(200),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(214),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(212),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(286),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_protocol_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(163),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_protocol_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(154),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_protocol_declaration_repeat1, 2, 0, 0),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_protocol_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(257),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_protocol_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(164),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_protocol_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(293),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_using_list_repeat1, 2, 0, 0),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_using_list_repeat1, 2, 0, 0), SHIFT_REPEAT(176),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_list, 1, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ordinal_layout_repeat1, 2, 0, 0),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ordinal_layout_repeat1, 2, 0, 0), SHIFT_REPEAT(286),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ordinal_layout_repeat1, 2, 0, 0), SHIFT_REPEAT(79),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ordinal_layout_repeat1, 2, 0, 0), SHIFT_REPEAT(79),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_identifier, 2, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_identifier, 1, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compound_identifier_repeat1, 2, 0, 0),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_identifier_repeat1, 2, 0, 0), SHIFT_REPEAT(297),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using, 3, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using, 5, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_library, 3, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_library, 4, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 2, 0, 0),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inline_layout_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_layout_repeat1, 2, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_list_repeat1, 2, 0, 0), SHIFT_REPEAT(293),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_list_repeat1, 2, 0, 0), SHIFT_REPEAT(295),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_allows_bit_ops, 1, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_service_declaration_repeat1, 2, 0, 0),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(295),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_layout_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_layout_repeat1, 2, 0, 0),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_layout_repeat1, 2, 0, 0), SHIFT_REPEAT(295),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_literal, 1, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_allows_bit_ops, 2, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constant_allows_bit_ops_repeat1, 2, 0, 0),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constant_allows_bit_ops_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_modifiers, 1, 0, 0),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_layout, 1, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_layout, 2, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_layout_body, 1, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordinal_layout, 3, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_layout, 3, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_layout, 4, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_layout, 2, 0, 0),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_layout, 5, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_protocol_declaration_repeat1, 2, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_complex_type, 1, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_layout, 3, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_constructor, 1, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_layout_repeat1, 2, 0, 0), SHIFT_REPEAT(268),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_layout_repeat1, 2, 0, 0),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_layout_repeat1, 2, 0, 0), SHIFT_REPEAT(295),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_layout, 3, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_constructor, 4, 0, 0),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ordinal_layout_repeat1, 2, 0, 0),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1, 0, 0),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2, 0, 0),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_constructor, 3, 0, 0),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_constraints, 1, 0, 0),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_constraint, 1, 0, 0),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_constraints, 3, 0, 0),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitives_type, 1, 0, 0),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_constructor, 6, 0, 0),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3, 0, 0),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, 0, 0),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resource_properties_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_resource_properties_repeat1, 2, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service_member, 2, 0, 0),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_constraint_list_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_constraint_list_repeat1, 2, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_constraint_list, 1, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_layout_parameters, 2, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service_member, 3, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_constraint_list, 2, 0, 0),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_layout_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_layout_parameters_repeat1, 2, 0, 0),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_args_repeat1, 2, 0, 0),
  [406] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_args_repeat1, 2, 0, 0), SHIFT_REPEAT(193),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3, 0, 0),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_args, 2, 0, 0),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_layout_parameters, 1, 0, 0),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_args, 1, 0, 0),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_layout_parameter, 1, 0, 0),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_protocol_method, 2, 0, 0),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_field, 2, 0, 0),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_protocol_event, 3, 0, 0),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_protocol_method, 3, 0, 0),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_protocol_method, 4, 0, 0),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_protocol_event, 4, 0, 0),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_layout_kind, 1, 0, 0),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_protocol_method, 5, 0, 0),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_protocol_event, 5, 0, 0),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_protocol_method, 6, 0, 0),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_arg, 3, 0, 0),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_protocol_attribute, 1, 0, 0),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_alias_declaration, 4, 0, 0),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service_declaration, 4, 0, 0),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_protocol_declaration, 5, 0, 0),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_protocol_compose, 2, 0, 0),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_protocol_compose, 3, 0, 0),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_protocol_declaration, 6, 0, 0),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_declaration, 6, 0, 0),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service_declaration, 5, 0, 0),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service_declaration, 6, 0, 0),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_layout_member, 3, 0, 0),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_layout_declaration, 5, 0, 0),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [561] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_alias_declaration, 5, 0, 0),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_layout_subtype, 2, 0, 0),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_layout_declaration, 4, 0, 0),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_protocol_declaration, 4, 0, 0),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_field, 4, 0, 0),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_protocol_declaration, 7, 0, 0),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_layout_member, 4, 0, 0),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordinal_layout_member, 4, 0, 0),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_layout_member, 2, 0, 0),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_layout_member, 1, 0, 0),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource_declaration, 8, 0, 0),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_protocol_event, 6, 0, 0),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource_properties, 4, 0, 0),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_protocol_member, 1, 0, 0),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_protocol_method, 7, 0, 0),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_protocol_event, 7, 0, 0),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource_properties, 5, 0, 0),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_protocol_method, 8, 0, 0),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_declaration, 5, 0, 0),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource_declaration, 7, 0, 0),
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

TS_PUBLIC const TSLanguage *tree_sitter_fidl(void) {
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
