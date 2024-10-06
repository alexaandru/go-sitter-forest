#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 152
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 88
#define ALIAS_COUNT 0
#define TOKEN_COUNT 52
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 6

enum ts_symbol_identifiers {
  anon_sym_LBRACE = 1,
  anon_sym_RBRACE = 2,
  anon_sym_service = 3,
  anon_sym_SEMI = 4,
  anon_sym_COMMA = 5,
  anon_sym_errors = 6,
  anon_sym_data = 7,
  anon_sym_enum = 8,
  anon_sym_extern = 9,
  anon_sym_method = 10,
  anon_sym_event = 11,
  anon_sym_COLON = 12,
  anon_sym_validate = 13,
  anon_sym_obsolete = 14,
  anon_sym_required = 15,
  anon_sym_http = 16,
  anon_sym_info = 17,
  anon_sym_csharp = 18,
  anon_sym_js = 19,
  anon_sym_proto = 20,
  anon_sym_LBRACK = 21,
  anon_sym_RBRACK = 22,
  anon_sym_DOT = 23,
  anon_sym_LPAREN = 24,
  anon_sym_RPAREN = 25,
  anon_sym_DOT_DOT = 26,
  anon_sym_map = 27,
  anon_sym_nullable = 28,
  anon_sym_result = 29,
  anon_sym_LT = 30,
  anon_sym_GT = 31,
  anon_sym_LBRACK_RBRACK = 32,
  anon_sym_BANG = 33,
  anon_sym_string = 34,
  anon_sym_datetime = 35,
  anon_sym_boolean = 36,
  anon_sym_double = 37,
  anon_sym_int32 = 38,
  anon_sym_int64 = 39,
  anon_sym_decimal = 40,
  anon_sym_bytes = 41,
  anon_sym_object = 42,
  anon_sym_error = 43,
  anon_sym_SLASH_SLASH_SLASH = 44,
  aux_sym_doc_comment_token1 = 45,
  anon_sym_SLASH_SLASH = 46,
  sym_identifier = 47,
  sym_string_literal = 48,
  sym_number_literal = 49,
  anon_sym_POUND = 50,
  aux_sym_remarks_token1 = 51,
  sym_source_file = 52,
  sym__definition = 53,
  sym_service_block = 54,
  sym_service = 55,
  sym__service_item = 56,
  sym_values_block = 57,
  sym_error_set = 58,
  sym_dto = 59,
  sym_enum = 60,
  sym_external_dto = 61,
  sym_external_enum = 62,
  sym_method = 63,
  sym__attribute_property = 64,
  sym_attribute = 65,
  sym_parameter = 66,
  sym__parameter_list = 67,
  sym_range = 68,
  sym_template_type = 69,
  sym_list_type = 70,
  sym_required_type = 71,
  sym_type = 72,
  sym_field_list = 73,
  sym_field = 74,
  sym_doc_comment = 75,
  sym_comment = 76,
  sym_remarks = 77,
  aux_sym__definition_repeat1 = 78,
  aux_sym_service_block_repeat1 = 79,
  aux_sym_service_repeat1 = 80,
  aux_sym_values_block_repeat1 = 81,
  aux_sym_values_block_repeat2 = 82,
  aux_sym_attribute_repeat1 = 83,
  aux_sym_parameter_repeat1 = 84,
  aux_sym__parameter_list_repeat1 = 85,
  aux_sym_field_list_repeat1 = 86,
  aux_sym_remarks_repeat1 = 87,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_service] = "service",
  [anon_sym_SEMI] = ";",
  [anon_sym_COMMA] = ",",
  [anon_sym_errors] = "errors",
  [anon_sym_data] = "data",
  [anon_sym_enum] = "enum",
  [anon_sym_extern] = "extern",
  [anon_sym_method] = "method",
  [anon_sym_event] = "event",
  [anon_sym_COLON] = ":",
  [anon_sym_validate] = "validate",
  [anon_sym_obsolete] = "obsolete",
  [anon_sym_required] = "required",
  [anon_sym_http] = "http",
  [anon_sym_info] = "info",
  [anon_sym_csharp] = "csharp",
  [anon_sym_js] = "js",
  [anon_sym_proto] = "proto",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DOT] = ".",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_map] = "map",
  [anon_sym_nullable] = "nullable",
  [anon_sym_result] = "result",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LBRACK_RBRACK] = "[]",
  [anon_sym_BANG] = "!",
  [anon_sym_string] = "string",
  [anon_sym_datetime] = "datetime",
  [anon_sym_boolean] = "boolean",
  [anon_sym_double] = "double",
  [anon_sym_int32] = "int32",
  [anon_sym_int64] = "int64",
  [anon_sym_decimal] = "decimal",
  [anon_sym_bytes] = "bytes",
  [anon_sym_object] = "object",
  [anon_sym_error] = "error",
  [anon_sym_SLASH_SLASH_SLASH] = "///",
  [aux_sym_doc_comment_token1] = "doc_comment_token1",
  [anon_sym_SLASH_SLASH] = "//",
  [sym_identifier] = "identifier",
  [sym_string_literal] = "string_literal",
  [sym_number_literal] = "number_literal",
  [anon_sym_POUND] = "#",
  [aux_sym_remarks_token1] = "remarks_token1",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_service_block] = "service_block",
  [sym_service] = "service",
  [sym__service_item] = "_service_item",
  [sym_values_block] = "values_block",
  [sym_error_set] = "error_set",
  [sym_dto] = "dto",
  [sym_enum] = "enum",
  [sym_external_dto] = "external_dto",
  [sym_external_enum] = "external_enum",
  [sym_method] = "method",
  [sym__attribute_property] = "_attribute_property",
  [sym_attribute] = "attribute",
  [sym_parameter] = "parameter",
  [sym__parameter_list] = "_parameter_list",
  [sym_range] = "range",
  [sym_template_type] = "template_type",
  [sym_list_type] = "list_type",
  [sym_required_type] = "required_type",
  [sym_type] = "type",
  [sym_field_list] = "field_list",
  [sym_field] = "field",
  [sym_doc_comment] = "doc_comment",
  [sym_comment] = "comment",
  [sym_remarks] = "remarks",
  [aux_sym__definition_repeat1] = "_definition_repeat1",
  [aux_sym_service_block_repeat1] = "service_block_repeat1",
  [aux_sym_service_repeat1] = "service_repeat1",
  [aux_sym_values_block_repeat1] = "values_block_repeat1",
  [aux_sym_values_block_repeat2] = "values_block_repeat2",
  [aux_sym_attribute_repeat1] = "attribute_repeat1",
  [aux_sym_parameter_repeat1] = "parameter_repeat1",
  [aux_sym__parameter_list_repeat1] = "_parameter_list_repeat1",
  [aux_sym_field_list_repeat1] = "field_list_repeat1",
  [aux_sym_remarks_repeat1] = "remarks_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_service] = anon_sym_service,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_errors] = anon_sym_errors,
  [anon_sym_data] = anon_sym_data,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_extern] = anon_sym_extern,
  [anon_sym_method] = anon_sym_method,
  [anon_sym_event] = anon_sym_event,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_validate] = anon_sym_validate,
  [anon_sym_obsolete] = anon_sym_obsolete,
  [anon_sym_required] = anon_sym_required,
  [anon_sym_http] = anon_sym_http,
  [anon_sym_info] = anon_sym_info,
  [anon_sym_csharp] = anon_sym_csharp,
  [anon_sym_js] = anon_sym_js,
  [anon_sym_proto] = anon_sym_proto,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_map] = anon_sym_map,
  [anon_sym_nullable] = anon_sym_nullable,
  [anon_sym_result] = anon_sym_result,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LBRACK_RBRACK] = anon_sym_LBRACK_RBRACK,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_datetime] = anon_sym_datetime,
  [anon_sym_boolean] = anon_sym_boolean,
  [anon_sym_double] = anon_sym_double,
  [anon_sym_int32] = anon_sym_int32,
  [anon_sym_int64] = anon_sym_int64,
  [anon_sym_decimal] = anon_sym_decimal,
  [anon_sym_bytes] = anon_sym_bytes,
  [anon_sym_object] = anon_sym_object,
  [anon_sym_error] = anon_sym_error,
  [anon_sym_SLASH_SLASH_SLASH] = anon_sym_SLASH_SLASH_SLASH,
  [aux_sym_doc_comment_token1] = aux_sym_doc_comment_token1,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [sym_identifier] = sym_identifier,
  [sym_string_literal] = sym_string_literal,
  [sym_number_literal] = sym_number_literal,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_remarks_token1] = aux_sym_remarks_token1,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_service_block] = sym_service_block,
  [sym_service] = sym_service,
  [sym__service_item] = sym__service_item,
  [sym_values_block] = sym_values_block,
  [sym_error_set] = sym_error_set,
  [sym_dto] = sym_dto,
  [sym_enum] = sym_enum,
  [sym_external_dto] = sym_external_dto,
  [sym_external_enum] = sym_external_enum,
  [sym_method] = sym_method,
  [sym__attribute_property] = sym__attribute_property,
  [sym_attribute] = sym_attribute,
  [sym_parameter] = sym_parameter,
  [sym__parameter_list] = sym__parameter_list,
  [sym_range] = sym_range,
  [sym_template_type] = sym_template_type,
  [sym_list_type] = sym_list_type,
  [sym_required_type] = sym_required_type,
  [sym_type] = sym_type,
  [sym_field_list] = sym_field_list,
  [sym_field] = sym_field,
  [sym_doc_comment] = sym_doc_comment,
  [sym_comment] = sym_comment,
  [sym_remarks] = sym_remarks,
  [aux_sym__definition_repeat1] = aux_sym__definition_repeat1,
  [aux_sym_service_block_repeat1] = aux_sym_service_block_repeat1,
  [aux_sym_service_repeat1] = aux_sym_service_repeat1,
  [aux_sym_values_block_repeat1] = aux_sym_values_block_repeat1,
  [aux_sym_values_block_repeat2] = aux_sym_values_block_repeat2,
  [aux_sym_attribute_repeat1] = aux_sym_attribute_repeat1,
  [aux_sym_parameter_repeat1] = aux_sym_parameter_repeat1,
  [aux_sym__parameter_list_repeat1] = aux_sym__parameter_list_repeat1,
  [aux_sym_field_list_repeat1] = aux_sym_field_list_repeat1,
  [aux_sym_remarks_repeat1] = aux_sym_remarks_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_service] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_errors] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_data] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extern] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_method] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_event] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_validate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_obsolete] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_required] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_http] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_info] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_csharp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_js] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_proto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
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
  [anon_sym_DOT_DOT] = {
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
  [anon_sym_result] = {
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
  [anon_sym_LBRACK_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_datetime] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_boolean] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_double] = {
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
  [anon_sym_decimal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_object] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_error] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_doc_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_number_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_remarks_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_service_block] = {
    .visible = true,
    .named = true,
  },
  [sym_service] = {
    .visible = true,
    .named = true,
  },
  [sym__service_item] = {
    .visible = false,
    .named = true,
  },
  [sym_values_block] = {
    .visible = true,
    .named = true,
  },
  [sym_error_set] = {
    .visible = true,
    .named = true,
  },
  [sym_dto] = {
    .visible = true,
    .named = true,
  },
  [sym_enum] = {
    .visible = true,
    .named = true,
  },
  [sym_external_dto] = {
    .visible = true,
    .named = true,
  },
  [sym_external_enum] = {
    .visible = true,
    .named = true,
  },
  [sym_method] = {
    .visible = true,
    .named = true,
  },
  [sym__attribute_property] = {
    .visible = false,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym__parameter_list] = {
    .visible = false,
    .named = true,
  },
  [sym_range] = {
    .visible = true,
    .named = true,
  },
  [sym_template_type] = {
    .visible = true,
    .named = true,
  },
  [sym_list_type] = {
    .visible = true,
    .named = true,
  },
  [sym_required_type] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_field_list] = {
    .visible = true,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym_doc_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_remarks] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_service_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_service_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_values_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_values_block_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attribute_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_field_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_remarks_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_name = 1,
  field_service_name = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
  [field_service_name] = "service_name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_service_name, 1},
  [1] =
    {field_name, 1},
  [2] =
    {field_name, 0},
  [3] =
    {field_name, 2},
  [4] =
    {field_name, 3},
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
  [40] = 35,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 29,
  [48] = 48,
  [49] = 29,
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
  [65] = 46,
  [66] = 38,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 72,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 76,
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
  [109] = 31,
  [110] = 34,
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
  [145] = 118,
  [146] = 121,
  [147] = 147,
  [148] = 148,
  [149] = 121,
  [150] = 150,
  [151] = 151,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(128);
      ADVANCE_MAP(
        '!', 166,
        '"', 3,
        '#', 253,
        '(', 154,
        ')', 155,
        ',', 133,
        '.', 153,
        '/', 6,
        ':', 140,
        ';', 132,
        '<', 163,
        '>', 164,
        '[', 150,
        ']', 151,
        'b', 79,
        'c', 102,
        'd', 16,
        'e', 76,
        'h', 113,
        'i', 72,
        'j', 103,
        'm', 12,
        'n', 120,
        'o', 23,
        'p', 94,
        'r', 32,
        's', 41,
        'v', 15,
        '{', 129,
        '}', 130,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(252);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '!', 166,
        ';', 132,
        '>', 164,
        '[', 11,
        'b', 230,
        'd', 197,
        'e', 235,
        'i', 229,
        'm', 195,
        'n', 247,
        'o', 200,
        'r', 205,
        's', 244,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == ')') ADVANCE(155);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '[') ADVANCE(149);
      if (lookahead == '}') ADVANCE(130);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(252);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        ')', 155,
        ',', 133,
        '.', 152,
        '/', 6,
        '[', 149,
        'd', 20,
        'e', 77,
        'm', 46,
        's', 40,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(156);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(191);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(190);
      END_STATE();
    case 8:
      if (lookahead == '2') ADVANCE(175);
      END_STATE();
    case 9:
      if (lookahead == '3') ADVANCE(8);
      if (lookahead == '6') ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '4') ADVANCE(177);
      END_STATE();
    case 11:
      if (lookahead == ']') ADVANCE(165);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(88);
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(135);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(135);
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(109);
      if (lookahead == 'e') ADVANCE(26);
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 23:
      if (lookahead == 'b') ADVANCE(59);
      END_STATE();
    case 24:
      if (lookahead == 'b') ADVANCE(65);
      END_STATE();
    case 25:
      if (lookahead == 'b') ADVANCE(68);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(54);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(107);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(34);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(138);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(143);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(21);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(92);
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 49:
      if (lookahead == 'f') ADVANCE(80);
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 50:
      if (lookahead == 'g') ADVANCE(167);
      END_STATE();
    case 51:
      if (lookahead == 'h') ADVANCE(17);
      END_STATE();
    case 52:
      if (lookahead == 'h') ADVANCE(82);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 59:
      if (lookahead == 'j') ADVANCE(42);
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(179);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 63:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 65:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 66:
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 69:
      if (lookahead == 'm') ADVANCE(136);
      END_STATE();
    case 70:
      if (lookahead == 'm') ADVANCE(35);
      END_STATE();
    case 71:
      if (lookahead == 'm') ADVANCE(19);
      END_STATE();
    case 72:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 73:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(171);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(121);
      if (lookahead == 'r') ADVANCE(96);
      if (lookahead == 'v') ADVANCE(39);
      if (lookahead == 'x') ADVANCE(114);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(121);
      if (lookahead == 'r') ADVANCE(101);
      if (lookahead == 'v') ADVANCE(39);
      if (lookahead == 'x') ADVANCE(114);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 79:
      if (lookahead == 'o') ADVANCE(83);
      if (lookahead == 'y') ADVANCE(112);
      END_STATE();
    case 80:
      if (lookahead == 'o') ADVANCE(145);
      END_STATE();
    case 81:
      if (lookahead == 'o') ADVANCE(148);
      END_STATE();
    case 82:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 83:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 84:
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 85:
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 86:
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 87:
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 88:
      if (lookahead == 'p') ADVANCE(157);
      END_STATE();
    case 89:
      if (lookahead == 'p') ADVANCE(144);
      END_STATE();
    case 90:
      if (lookahead == 'p') ADVANCE(146);
      END_STATE();
    case 91:
      if (lookahead == 'q') ADVANCE(123);
      if (lookahead == 's') ADVANCE(124);
      END_STATE();
    case 92:
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 93:
      if (lookahead == 'r') ADVANCE(185);
      END_STATE();
    case 94:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 95:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 96:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 97:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 100:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 101:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 102:
      if (lookahead == 's') ADVANCE(51);
      END_STATE();
    case 103:
      if (lookahead == 's') ADVANCE(147);
      END_STATE();
    case 104:
      if (lookahead == 's') ADVANCE(181);
      END_STATE();
    case 105:
      if (lookahead == 's') ADVANCE(134);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(183);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 115:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 120:
      if (lookahead == 'u') ADVANCE(63);
      END_STATE();
    case 121:
      if (lookahead == 'u') ADVANCE(69);
      END_STATE();
    case 122:
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 123:
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 124:
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 125:
      if (lookahead == 'v') ADVANCE(56);
      END_STATE();
    case 126:
      if (eof) ADVANCE(128);
      if (lookahead == '\n') SKIP(126);
      if (lookahead == '#') ADVANCE(254);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(255);
      if (lookahead != 0) ADVANCE(256);
      END_STATE();
    case 127:
      if (eof) ADVANCE(128);
      ADVANCE_MAP(
        '#', 253,
        ')', 155,
        ',', 133,
        '.', 5,
        '/', 7,
        ':', 140,
        '[', 149,
        'd', 20,
        'e', 77,
        'm', 46,
        '}', 130,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_service);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_errors);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_data);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_extern);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_method);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_event);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_validate);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_obsolete);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_required);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_http);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_info);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_csharp);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_js);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_proto);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ']') ADVANCE(165);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(156);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_map);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_map);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_nullable);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_nullable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_result);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_result);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_datetime);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_datetime);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_double);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_int32);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_int32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_int64);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_int64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_decimal);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_decimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_bytes);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_object);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_object);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_error);
      if (lookahead == 's') ADVANCE(134);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_error);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_SLASH);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_doc_comment_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(188);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(189);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_doc_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '/') ADVANCE(187);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(192);
      if (lookahead == '6') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(243);
      if (lookahead == 'e') ADVANCE(203);
      if (lookahead == 'o') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'j') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(231);
      if (lookahead == 'y') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '"') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(252);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(256);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_remarks_token1);
      if (lookahead == '#') ADVANCE(254);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(255);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(256);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_remarks_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(256);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 4},
  [2] = {.lex_state = 127},
  [3] = {.lex_state = 127},
  [4] = {.lex_state = 127},
  [5] = {.lex_state = 127},
  [6] = {.lex_state = 127},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 127},
  [11] = {.lex_state = 127},
  [12] = {.lex_state = 127},
  [13] = {.lex_state = 127},
  [14] = {.lex_state = 127},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 127},
  [18] = {.lex_state = 127},
  [19] = {.lex_state = 127},
  [20] = {.lex_state = 127},
  [21] = {.lex_state = 127},
  [22] = {.lex_state = 127},
  [23] = {.lex_state = 127},
  [24] = {.lex_state = 127},
  [25] = {.lex_state = 127},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 127},
  [28] = {.lex_state = 127},
  [29] = {.lex_state = 127},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 126},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 126},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 126},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 127},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 2},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 2},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 188},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 188},
  [122] = {.lex_state = 2},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 2},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 2},
  [130] = {.lex_state = 2},
  [131] = {.lex_state = 2},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 2},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 2},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 2},
  [141] = {.lex_state = 2},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 188},
  [146] = {.lex_state = 188},
  [147] = {.lex_state = 2},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 188},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_service] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_errors] = ACTIONS(1),
    [anon_sym_data] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_extern] = ACTIONS(1),
    [anon_sym_method] = ACTIONS(1),
    [anon_sym_event] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_validate] = ACTIONS(1),
    [anon_sym_obsolete] = ACTIONS(1),
    [anon_sym_required] = ACTIONS(1),
    [anon_sym_http] = ACTIONS(1),
    [anon_sym_info] = ACTIONS(1),
    [anon_sym_csharp] = ACTIONS(1),
    [anon_sym_js] = ACTIONS(1),
    [anon_sym_proto] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_map] = ACTIONS(1),
    [anon_sym_nullable] = ACTIONS(1),
    [anon_sym_result] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_datetime] = ACTIONS(1),
    [anon_sym_boolean] = ACTIONS(1),
    [anon_sym_double] = ACTIONS(1),
    [anon_sym_int32] = ACTIONS(1),
    [anon_sym_int64] = ACTIONS(1),
    [anon_sym_decimal] = ACTIONS(1),
    [anon_sym_bytes] = ACTIONS(1),
    [anon_sym_object] = ACTIONS(1),
    [anon_sym_error] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [sym_string_literal] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(125),
    [sym__definition] = STATE(148),
    [sym_service] = STATE(148),
    [sym_attribute] = STATE(37),
    [sym_doc_comment] = STATE(37),
    [sym_comment] = STATE(37),
    [aux_sym__definition_repeat1] = STATE(37),
    [anon_sym_service] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(5),
    [anon_sym_SLASH_SLASH_SLASH] = ACTIONS(7),
    [anon_sym_SLASH_SLASH] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      anon_sym_errors,
    ACTIONS(15), 1,
      anon_sym_data,
    ACTIONS(17), 1,
      anon_sym_enum,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(25), 1,
      anon_sym_POUND,
    ACTIONS(21), 2,
      anon_sym_method,
      anon_sym_event,
    STATE(39), 2,
      sym_attribute,
      aux_sym_values_block_repeat1,
    STATE(61), 2,
      sym_remarks,
      aux_sym_service_repeat1,
    STATE(3), 9,
      sym__service_item,
      sym_error_set,
      sym_dto,
      sym_enum,
      sym_external_dto,
      sym_external_enum,
      sym_method,
      sym_comment,
      aux_sym_service_block_repeat1,
  [48] = 12,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_errors,
    ACTIONS(15), 1,
      anon_sym_data,
    ACTIONS(17), 1,
      anon_sym_enum,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(25), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 2,
      anon_sym_method,
      anon_sym_event,
    STATE(39), 2,
      sym_attribute,
      aux_sym_values_block_repeat1,
    STATE(51), 2,
      sym_remarks,
      aux_sym_service_repeat1,
    STATE(4), 9,
      sym__service_item,
      sym_error_set,
      sym_dto,
      sym_enum,
      sym_external_dto,
      sym_external_enum,
      sym_method,
      sym_comment,
      aux_sym_service_block_repeat1,
  [96] = 10,
    ACTIONS(31), 1,
      anon_sym_errors,
    ACTIONS(34), 1,
      anon_sym_data,
    ACTIONS(37), 1,
      anon_sym_enum,
    ACTIONS(40), 1,
      anon_sym_extern,
    ACTIONS(46), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(43), 2,
      anon_sym_method,
      anon_sym_event,
    STATE(39), 2,
      sym_attribute,
      aux_sym_values_block_repeat1,
    ACTIONS(29), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_POUND,
    STATE(4), 9,
      sym__service_item,
      sym_error_set,
      sym_dto,
      sym_enum,
      sym_external_dto,
      sym_external_enum,
      sym_method,
      sym_comment,
      aux_sym_service_block_repeat1,
  [139] = 10,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_errors,
    ACTIONS(15), 1,
      anon_sym_data,
    ACTIONS(17), 1,
      anon_sym_enum,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(52), 1,
      anon_sym_RBRACE,
    ACTIONS(21), 2,
      anon_sym_method,
      anon_sym_event,
    STATE(39), 2,
      sym_attribute,
      aux_sym_values_block_repeat1,
    STATE(4), 9,
      sym__service_item,
      sym_error_set,
      sym_dto,
      sym_enum,
      sym_external_dto,
      sym_external_enum,
      sym_method,
      sym_comment,
      aux_sym_service_block_repeat1,
  [180] = 10,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_errors,
    ACTIONS(15), 1,
      anon_sym_data,
    ACTIONS(17), 1,
      anon_sym_enum,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(54), 1,
      anon_sym_RBRACE,
    ACTIONS(21), 2,
      anon_sym_method,
      anon_sym_event,
    STATE(39), 2,
      sym_attribute,
      aux_sym_values_block_repeat1,
    STATE(5), 9,
      sym__service_item,
      sym_error_set,
      sym_dto,
      sym_enum,
      sym_external_dto,
      sym_external_enum,
      sym_method,
      sym_comment,
      aux_sym_service_block_repeat1,
  [221] = 6,
    ACTIONS(60), 1,
      sym_identifier,
    STATE(79), 1,
      sym_type,
    STATE(104), 1,
      sym_template_type,
    STATE(135), 2,
      sym_list_type,
      sym_required_type,
    ACTIONS(56), 3,
      anon_sym_map,
      anon_sym_nullable,
      anon_sym_result,
    ACTIONS(58), 10,
      anon_sym_string,
      anon_sym_datetime,
      anon_sym_boolean,
      anon_sym_double,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_decimal,
      anon_sym_bytes,
      anon_sym_object,
      anon_sym_error,
  [252] = 6,
    ACTIONS(60), 1,
      sym_identifier,
    STATE(75), 1,
      sym_type,
    STATE(94), 1,
      sym_template_type,
    STATE(123), 2,
      sym_list_type,
      sym_required_type,
    ACTIONS(56), 3,
      anon_sym_map,
      anon_sym_nullable,
      anon_sym_result,
    ACTIONS(58), 10,
      anon_sym_string,
      anon_sym_datetime,
      anon_sym_boolean,
      anon_sym_double,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_decimal,
      anon_sym_bytes,
      anon_sym_object,
      anon_sym_error,
  [283] = 6,
    ACTIONS(60), 1,
      sym_identifier,
    STATE(78), 1,
      sym_type,
    STATE(102), 1,
      sym_template_type,
    STATE(132), 2,
      sym_list_type,
      sym_required_type,
    ACTIONS(56), 3,
      anon_sym_map,
      anon_sym_nullable,
      anon_sym_result,
    ACTIONS(58), 10,
      anon_sym_string,
      anon_sym_datetime,
      anon_sym_boolean,
      anon_sym_double,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_decimal,
      anon_sym_bytes,
      anon_sym_object,
      anon_sym_error,
  [314] = 1,
    ACTIONS(62), 12,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_errors,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_event,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
  [329] = 1,
    ACTIONS(64), 12,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_errors,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_event,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
  [344] = 1,
    ACTIONS(66), 11,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_errors,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_event,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
  [358] = 1,
    ACTIONS(68), 11,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_errors,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_event,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
  [372] = 1,
    ACTIONS(70), 11,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_errors,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_event,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
  [386] = 7,
    ACTIONS(72), 1,
      anon_sym_RBRACE,
    ACTIONS(74), 1,
      anon_sym_LBRACK,
    ACTIONS(76), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(78), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(80), 1,
      sym_identifier,
    STATE(48), 2,
      sym_attribute,
      aux_sym_values_block_repeat1,
    STATE(16), 4,
      sym_field,
      sym_doc_comment,
      sym_comment,
      aux_sym_field_list_repeat1,
  [412] = 7,
    ACTIONS(74), 1,
      anon_sym_LBRACK,
    ACTIONS(76), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(78), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(80), 1,
      sym_identifier,
    ACTIONS(82), 1,
      anon_sym_RBRACE,
    STATE(48), 2,
      sym_attribute,
      aux_sym_values_block_repeat1,
    STATE(26), 4,
      sym_field,
      sym_doc_comment,
      sym_comment,
      aux_sym_field_list_repeat1,
  [438] = 1,
    ACTIONS(84), 11,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_errors,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_event,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
  [452] = 1,
    ACTIONS(86), 11,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_errors,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_event,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
  [466] = 1,
    ACTIONS(88), 11,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_errors,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_event,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
  [480] = 1,
    ACTIONS(90), 11,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_errors,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_event,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
  [494] = 1,
    ACTIONS(92), 11,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_errors,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_event,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
  [508] = 1,
    ACTIONS(94), 11,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_errors,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_event,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
  [522] = 1,
    ACTIONS(96), 11,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_errors,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_event,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
  [536] = 1,
    ACTIONS(98), 11,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_errors,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_event,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
  [550] = 1,
    ACTIONS(100), 11,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_errors,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_event,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
  [564] = 7,
    ACTIONS(102), 1,
      anon_sym_RBRACE,
    ACTIONS(104), 1,
      anon_sym_LBRACK,
    ACTIONS(107), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(110), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(113), 1,
      sym_identifier,
    STATE(48), 2,
      sym_attribute,
      aux_sym_values_block_repeat1,
    STATE(26), 4,
      sym_field,
      sym_doc_comment,
      sym_comment,
      aux_sym_field_list_repeat1,
  [590] = 1,
    ACTIONS(116), 11,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_errors,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_event,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
  [604] = 1,
    ACTIONS(118), 11,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_errors,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_event,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
  [618] = 1,
    ACTIONS(120), 11,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_errors,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_event,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH,
      anon_sym_POUND,
  [632] = 7,
    ACTIONS(74), 1,
      anon_sym_LBRACK,
    ACTIONS(76), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(78), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(122), 1,
      anon_sym_RBRACE,
    ACTIONS(124), 1,
      sym_identifier,
    STATE(57), 2,
      sym_attribute,
      aux_sym_values_block_repeat1,
    STATE(33), 3,
      sym_doc_comment,
      sym_comment,
      aux_sym_values_block_repeat2,
  [657] = 2,
    ACTIONS(128), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(126), 9,
      anon_sym_service,
      anon_sym_errors,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_event,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
  [672] = 7,
    ACTIONS(74), 1,
      anon_sym_LBRACK,
    ACTIONS(76), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(78), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(124), 1,
      sym_identifier,
    ACTIONS(130), 1,
      anon_sym_RBRACE,
    STATE(57), 2,
      sym_attribute,
      aux_sym_values_block_repeat1,
    STATE(30), 3,
      sym_doc_comment,
      sym_comment,
      aux_sym_values_block_repeat2,
  [697] = 7,
    ACTIONS(132), 1,
      anon_sym_RBRACE,
    ACTIONS(134), 1,
      anon_sym_LBRACK,
    ACTIONS(137), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(140), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(143), 1,
      sym_identifier,
    STATE(57), 2,
      sym_attribute,
      aux_sym_values_block_repeat1,
    STATE(33), 3,
      sym_doc_comment,
      sym_comment,
      aux_sym_values_block_repeat2,
  [722] = 2,
    ACTIONS(148), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(146), 9,
      anon_sym_service,
      anon_sym_errors,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_event,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
  [737] = 4,
    ACTIONS(152), 1,
      anon_sym_required,
    STATE(76), 1,
      sym__attribute_property,
    ACTIONS(150), 2,
      anon_sym_validate,
      anon_sym_obsolete,
    ACTIONS(154), 5,
      anon_sym_http,
      anon_sym_info,
      anon_sym_csharp,
      anon_sym_js,
      anon_sym_proto,
  [755] = 4,
    ACTIONS(156), 1,
      anon_sym_required,
    STATE(91), 1,
      sym__attribute_property,
    ACTIONS(150), 2,
      anon_sym_validate,
      anon_sym_obsolete,
    ACTIONS(154), 5,
      anon_sym_http,
      anon_sym_info,
      anon_sym_csharp,
      anon_sym_js,
      anon_sym_proto,
  [773] = 6,
    ACTIONS(3), 1,
      anon_sym_service,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(7), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(9), 1,
      anon_sym_SLASH_SLASH,
    STATE(143), 1,
      sym_service,
    STATE(41), 4,
      sym_attribute,
      sym_doc_comment,
      sym_comment,
      aux_sym__definition_repeat1,
  [795] = 3,
    ACTIONS(160), 1,
      anon_sym_LBRACK,
    STATE(38), 2,
      sym_attribute,
      aux_sym_values_block_repeat1,
    ACTIONS(158), 6,
      anon_sym_errors,
      anon_sym_data,
      anon_sym_enum,
      anon_sym_extern,
      anon_sym_method,
      anon_sym_event,
  [811] = 7,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(163), 1,
      anon_sym_errors,
    ACTIONS(165), 1,
      anon_sym_data,
    ACTIONS(167), 1,
      anon_sym_enum,
    ACTIONS(169), 1,
      anon_sym_extern,
    ACTIONS(171), 2,
      anon_sym_method,
      anon_sym_event,
    STATE(38), 2,
      sym_attribute,
      aux_sym_values_block_repeat1,
  [835] = 4,
    ACTIONS(173), 1,
      anon_sym_required,
    STATE(83), 1,
      sym__attribute_property,
    ACTIONS(150), 2,
      anon_sym_validate,
      anon_sym_obsolete,
    ACTIONS(154), 5,
      anon_sym_http,
      anon_sym_info,
      anon_sym_csharp,
      anon_sym_js,
      anon_sym_proto,
  [853] = 5,
    ACTIONS(175), 1,
      anon_sym_service,
    ACTIONS(177), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(183), 1,
      anon_sym_SLASH_SLASH,
    STATE(41), 4,
      sym_attribute,
      sym_doc_comment,
      sym_comment,
      aux_sym__definition_repeat1,
  [872] = 2,
    ACTIONS(186), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(132), 4,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
      sym_identifier,
  [882] = 2,
    ACTIONS(190), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(188), 4,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
      sym_identifier,
  [892] = 2,
    ACTIONS(194), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(192), 4,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
      sym_identifier,
  [902] = 2,
    ACTIONS(198), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(196), 4,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
      sym_identifier,
  [912] = 2,
    ACTIONS(202), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(200), 4,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
      sym_identifier,
  [922] = 2,
    ACTIONS(204), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(120), 4,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
      sym_identifier,
  [932] = 3,
    ACTIONS(74), 1,
      anon_sym_LBRACK,
    ACTIONS(206), 1,
      sym_identifier,
    STATE(66), 2,
      sym_attribute,
      aux_sym_values_block_repeat1,
  [943] = 2,
    ACTIONS(204), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(120), 3,
      anon_sym_service,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
  [952] = 4,
    ACTIONS(208), 1,
      ts_builtin_sym_end,
    ACTIONS(210), 1,
      anon_sym_POUND,
    ACTIONS(212), 1,
      aux_sym_remarks_token1,
    STATE(55), 1,
      aux_sym_remarks_repeat1,
  [965] = 3,
    ACTIONS(25), 1,
      anon_sym_POUND,
    ACTIONS(214), 1,
      ts_builtin_sym_end,
    STATE(52), 2,
      sym_remarks,
      aux_sym_service_repeat1,
  [976] = 3,
    ACTIONS(216), 1,
      ts_builtin_sym_end,
    ACTIONS(218), 1,
      anon_sym_POUND,
    STATE(52), 2,
      sym_remarks,
      aux_sym_service_repeat1,
  [987] = 4,
    ACTIONS(221), 1,
      sym_identifier,
    ACTIONS(223), 1,
      sym_string_literal,
    ACTIONS(225), 1,
      sym_number_literal,
    STATE(103), 1,
      sym_range,
  [1000] = 3,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      anon_sym_POUND,
    STATE(61), 2,
      sym_remarks,
      aux_sym_service_repeat1,
  [1011] = 4,
    ACTIONS(227), 1,
      ts_builtin_sym_end,
    ACTIONS(229), 1,
      anon_sym_POUND,
    ACTIONS(231), 1,
      aux_sym_remarks_token1,
    STATE(55), 1,
      aux_sym_remarks_repeat1,
  [1024] = 3,
    ACTIONS(236), 1,
      anon_sym_DOT,
    STATE(58), 1,
      aux_sym_parameter_repeat1,
    ACTIONS(234), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1035] = 3,
    ACTIONS(74), 1,
      anon_sym_LBRACK,
    ACTIONS(238), 1,
      sym_identifier,
    STATE(66), 2,
      sym_attribute,
      aux_sym_values_block_repeat1,
  [1046] = 3,
    ACTIONS(236), 1,
      anon_sym_DOT,
    STATE(62), 1,
      aux_sym_parameter_repeat1,
    ACTIONS(240), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1057] = 3,
    ACTIONS(244), 1,
      anon_sym_LPAREN,
    STATE(89), 1,
      sym__parameter_list,
    ACTIONS(242), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1068] = 4,
    ACTIONS(246), 1,
      ts_builtin_sym_end,
    ACTIONS(248), 1,
      anon_sym_POUND,
    ACTIONS(250), 1,
      aux_sym_remarks_token1,
    STATE(50), 1,
      aux_sym_remarks_repeat1,
  [1081] = 3,
    ACTIONS(25), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    STATE(52), 2,
      sym_remarks,
      aux_sym_service_repeat1,
  [1092] = 3,
    ACTIONS(254), 1,
      anon_sym_DOT,
    STATE(62), 1,
      aux_sym_parameter_repeat1,
    ACTIONS(252), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1103] = 1,
    ACTIONS(257), 4,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_BANG,
  [1110] = 1,
    ACTIONS(259), 4,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_BANG,
  [1117] = 2,
    ACTIONS(202), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(200), 3,
      anon_sym_service,
      anon_sym_LBRACK,
      anon_sym_SLASH_SLASH_SLASH,
  [1126] = 3,
    ACTIONS(158), 1,
      sym_identifier,
    ACTIONS(261), 1,
      anon_sym_LBRACK,
    STATE(66), 2,
      sym_attribute,
      aux_sym_values_block_repeat1,
  [1137] = 2,
    ACTIONS(266), 1,
      sym_number_literal,
    ACTIONS(264), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1145] = 3,
    ACTIONS(268), 1,
      anon_sym_RPAREN,
    ACTIONS(270), 1,
      sym_identifier,
    STATE(70), 1,
      sym_parameter,
  [1155] = 3,
    ACTIONS(272), 1,
      anon_sym_COMMA,
    ACTIONS(274), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      aux_sym__parameter_list_repeat1,
  [1165] = 3,
    ACTIONS(272), 1,
      anon_sym_COMMA,
    ACTIONS(276), 1,
      anon_sym_RPAREN,
    STATE(69), 1,
      aux_sym__parameter_list_repeat1,
  [1175] = 1,
    ACTIONS(252), 3,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_RPAREN,
  [1181] = 3,
    ACTIONS(278), 1,
      anon_sym_COMMA,
    ACTIONS(280), 1,
      anon_sym_RBRACK,
    STATE(77), 1,
      aux_sym_attribute_repeat1,
  [1191] = 2,
    ACTIONS(282), 1,
      anon_sym_DOT_DOT,
    ACTIONS(234), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1199] = 3,
    ACTIONS(278), 1,
      anon_sym_COMMA,
    ACTIONS(284), 1,
      anon_sym_RBRACK,
    STATE(77), 1,
      aux_sym_attribute_repeat1,
  [1209] = 3,
    ACTIONS(286), 1,
      anon_sym_SEMI,
    ACTIONS(288), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(290), 1,
      anon_sym_BANG,
  [1219] = 3,
    ACTIONS(278), 1,
      anon_sym_COMMA,
    ACTIONS(292), 1,
      anon_sym_RBRACK,
    STATE(72), 1,
      aux_sym_attribute_repeat1,
  [1229] = 3,
    ACTIONS(294), 1,
      anon_sym_COMMA,
    ACTIONS(297), 1,
      anon_sym_RBRACK,
    STATE(77), 1,
      aux_sym_attribute_repeat1,
  [1239] = 3,
    ACTIONS(288), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(290), 1,
      anon_sym_BANG,
    ACTIONS(299), 1,
      anon_sym_SEMI,
  [1249] = 3,
    ACTIONS(288), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(290), 1,
      anon_sym_BANG,
    ACTIONS(301), 1,
      anon_sym_GT,
  [1259] = 1,
    ACTIONS(303), 3,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_LBRACK_RBRACK,
  [1265] = 3,
    ACTIONS(305), 1,
      anon_sym_LBRACE,
    ACTIONS(307), 1,
      anon_sym_SEMI,
    STATE(54), 1,
      sym_service_block,
  [1275] = 3,
    ACTIONS(309), 1,
      anon_sym_COMMA,
    ACTIONS(312), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      aux_sym__parameter_list_repeat1,
  [1285] = 3,
    ACTIONS(278), 1,
      anon_sym_COMMA,
    ACTIONS(314), 1,
      anon_sym_RBRACK,
    STATE(74), 1,
      aux_sym_attribute_repeat1,
  [1295] = 2,
    ACTIONS(316), 1,
      anon_sym_LBRACE,
    STATE(137), 1,
      sym_field_list,
  [1302] = 2,
    ACTIONS(318), 1,
      anon_sym_data,
    ACTIONS(320), 1,
      anon_sym_enum,
  [1309] = 2,
    ACTIONS(322), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      sym_values_block,
  [1316] = 2,
    ACTIONS(316), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_field_list,
  [1323] = 2,
    ACTIONS(316), 1,
      anon_sym_LBRACE,
    STATE(128), 1,
      sym_field_list,
  [1330] = 1,
    ACTIONS(324), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1335] = 1,
    ACTIONS(326), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1340] = 1,
    ACTIONS(297), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1345] = 2,
    ACTIONS(270), 1,
      sym_identifier,
    STATE(107), 1,
      sym_parameter,
  [1352] = 1,
    ACTIONS(328), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
  [1357] = 2,
    ACTIONS(286), 1,
      anon_sym_SEMI,
    ACTIONS(288), 1,
      anon_sym_LBRACK_RBRACK,
  [1364] = 2,
    ACTIONS(316), 1,
      anon_sym_LBRACE,
    STATE(24), 1,
      sym_field_list,
  [1371] = 2,
    ACTIONS(330), 1,
      anon_sym_data,
    ACTIONS(332), 1,
      anon_sym_enum,
  [1378] = 1,
    ACTIONS(334), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1383] = 2,
    ACTIONS(322), 1,
      anon_sym_LBRACE,
    STATE(14), 1,
      sym_values_block,
  [1390] = 2,
    ACTIONS(316), 1,
      anon_sym_LBRACE,
    STATE(13), 1,
      sym_field_list,
  [1397] = 1,
    ACTIONS(336), 2,
      anon_sym_SEMI,
      anon_sym_GT,
  [1402] = 1,
    ACTIONS(338), 2,
      anon_sym_SEMI,
      anon_sym_GT,
  [1407] = 2,
    ACTIONS(288), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(299), 1,
      anon_sym_SEMI,
  [1414] = 1,
    ACTIONS(234), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1419] = 2,
    ACTIONS(288), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(301), 1,
      anon_sym_GT,
  [1426] = 2,
    ACTIONS(322), 1,
      anon_sym_LBRACE,
    STATE(20), 1,
      sym_values_block,
  [1433] = 2,
    ACTIONS(322), 1,
      anon_sym_LBRACE,
    STATE(17), 1,
      sym_values_block,
  [1440] = 1,
    ACTIONS(312), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1445] = 1,
    ACTIONS(340), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1450] = 1,
    ACTIONS(126), 2,
      anon_sym_LBRACK,
      sym_identifier,
  [1455] = 1,
    ACTIONS(146), 2,
      anon_sym_LBRACK,
      sym_identifier,
  [1460] = 2,
    ACTIONS(244), 1,
      anon_sym_LPAREN,
    STATE(89), 1,
      sym__parameter_list,
  [1467] = 1,
    ACTIONS(342), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
  [1472] = 2,
    ACTIONS(316), 1,
      anon_sym_LBRACE,
    STATE(21), 1,
      sym_field_list,
  [1479] = 1,
    ACTIONS(344), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1484] = 1,
    ACTIONS(346), 1,
      sym_identifier,
  [1488] = 1,
    ACTIONS(348), 1,
      sym_identifier,
  [1492] = 1,
    ACTIONS(350), 1,
      sym_identifier,
  [1496] = 1,
    ACTIONS(352), 1,
      aux_sym_doc_comment_token1,
  [1500] = 1,
    ACTIONS(354), 1,
      anon_sym_LT,
  [1504] = 1,
    ACTIONS(356), 1,
      sym_identifier,
  [1508] = 1,
    ACTIONS(358), 1,
      aux_sym_doc_comment_token1,
  [1512] = 1,
    ACTIONS(360), 1,
      sym_identifier,
  [1516] = 1,
    ACTIONS(286), 1,
      anon_sym_SEMI,
  [1520] = 1,
    ACTIONS(362), 1,
      sym_identifier,
  [1524] = 1,
    ACTIONS(364), 1,
      ts_builtin_sym_end,
  [1528] = 1,
    ACTIONS(366), 1,
      anon_sym_SEMI,
  [1532] = 1,
    ACTIONS(368), 1,
      anon_sym_SEMI,
  [1536] = 1,
    ACTIONS(370), 1,
      anon_sym_COLON,
  [1540] = 1,
    ACTIONS(372), 1,
      sym_identifier,
  [1544] = 1,
    ACTIONS(374), 1,
      sym_identifier,
  [1548] = 1,
    ACTIONS(376), 1,
      sym_identifier,
  [1552] = 1,
    ACTIONS(299), 1,
      anon_sym_SEMI,
  [1556] = 1,
    ACTIONS(378), 1,
      sym_identifier,
  [1560] = 1,
    ACTIONS(380), 1,
      anon_sym_COMMA,
  [1564] = 1,
    ACTIONS(301), 1,
      anon_sym_GT,
  [1568] = 1,
    ACTIONS(382), 1,
      anon_sym_SEMI,
  [1572] = 1,
    ACTIONS(384), 1,
      anon_sym_COLON,
  [1576] = 1,
    ACTIONS(386), 1,
      sym_identifier,
  [1580] = 1,
    ACTIONS(388), 1,
      anon_sym_COLON,
  [1584] = 1,
    ACTIONS(390), 1,
      sym_identifier,
  [1588] = 1,
    ACTIONS(392), 1,
      sym_identifier,
  [1592] = 1,
    ACTIONS(394), 1,
      anon_sym_COMMA,
  [1596] = 1,
    ACTIONS(396), 1,
      ts_builtin_sym_end,
  [1600] = 1,
    ACTIONS(398), 1,
      anon_sym_COLON,
  [1604] = 1,
    ACTIONS(400), 1,
      aux_sym_doc_comment_token1,
  [1608] = 1,
    ACTIONS(402), 1,
      aux_sym_doc_comment_token1,
  [1612] = 1,
    ACTIONS(404), 1,
      sym_identifier,
  [1616] = 1,
    ACTIONS(406), 1,
      ts_builtin_sym_end,
  [1620] = 1,
    ACTIONS(408), 1,
      aux_sym_doc_comment_token1,
  [1624] = 1,
    ACTIONS(410), 1,
      anon_sym_COLON,
  [1628] = 1,
    ACTIONS(412), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 48,
  [SMALL_STATE(4)] = 96,
  [SMALL_STATE(5)] = 139,
  [SMALL_STATE(6)] = 180,
  [SMALL_STATE(7)] = 221,
  [SMALL_STATE(8)] = 252,
  [SMALL_STATE(9)] = 283,
  [SMALL_STATE(10)] = 314,
  [SMALL_STATE(11)] = 329,
  [SMALL_STATE(12)] = 344,
  [SMALL_STATE(13)] = 358,
  [SMALL_STATE(14)] = 372,
  [SMALL_STATE(15)] = 386,
  [SMALL_STATE(16)] = 412,
  [SMALL_STATE(17)] = 438,
  [SMALL_STATE(18)] = 452,
  [SMALL_STATE(19)] = 466,
  [SMALL_STATE(20)] = 480,
  [SMALL_STATE(21)] = 494,
  [SMALL_STATE(22)] = 508,
  [SMALL_STATE(23)] = 522,
  [SMALL_STATE(24)] = 536,
  [SMALL_STATE(25)] = 550,
  [SMALL_STATE(26)] = 564,
  [SMALL_STATE(27)] = 590,
  [SMALL_STATE(28)] = 604,
  [SMALL_STATE(29)] = 618,
  [SMALL_STATE(30)] = 632,
  [SMALL_STATE(31)] = 657,
  [SMALL_STATE(32)] = 672,
  [SMALL_STATE(33)] = 697,
  [SMALL_STATE(34)] = 722,
  [SMALL_STATE(35)] = 737,
  [SMALL_STATE(36)] = 755,
  [SMALL_STATE(37)] = 773,
  [SMALL_STATE(38)] = 795,
  [SMALL_STATE(39)] = 811,
  [SMALL_STATE(40)] = 835,
  [SMALL_STATE(41)] = 853,
  [SMALL_STATE(42)] = 872,
  [SMALL_STATE(43)] = 882,
  [SMALL_STATE(44)] = 892,
  [SMALL_STATE(45)] = 902,
  [SMALL_STATE(46)] = 912,
  [SMALL_STATE(47)] = 922,
  [SMALL_STATE(48)] = 932,
  [SMALL_STATE(49)] = 943,
  [SMALL_STATE(50)] = 952,
  [SMALL_STATE(51)] = 965,
  [SMALL_STATE(52)] = 976,
  [SMALL_STATE(53)] = 987,
  [SMALL_STATE(54)] = 1000,
  [SMALL_STATE(55)] = 1011,
  [SMALL_STATE(56)] = 1024,
  [SMALL_STATE(57)] = 1035,
  [SMALL_STATE(58)] = 1046,
  [SMALL_STATE(59)] = 1057,
  [SMALL_STATE(60)] = 1068,
  [SMALL_STATE(61)] = 1081,
  [SMALL_STATE(62)] = 1092,
  [SMALL_STATE(63)] = 1103,
  [SMALL_STATE(64)] = 1110,
  [SMALL_STATE(65)] = 1117,
  [SMALL_STATE(66)] = 1126,
  [SMALL_STATE(67)] = 1137,
  [SMALL_STATE(68)] = 1145,
  [SMALL_STATE(69)] = 1155,
  [SMALL_STATE(70)] = 1165,
  [SMALL_STATE(71)] = 1175,
  [SMALL_STATE(72)] = 1181,
  [SMALL_STATE(73)] = 1191,
  [SMALL_STATE(74)] = 1199,
  [SMALL_STATE(75)] = 1209,
  [SMALL_STATE(76)] = 1219,
  [SMALL_STATE(77)] = 1229,
  [SMALL_STATE(78)] = 1239,
  [SMALL_STATE(79)] = 1249,
  [SMALL_STATE(80)] = 1259,
  [SMALL_STATE(81)] = 1265,
  [SMALL_STATE(82)] = 1275,
  [SMALL_STATE(83)] = 1285,
  [SMALL_STATE(84)] = 1295,
  [SMALL_STATE(85)] = 1302,
  [SMALL_STATE(86)] = 1309,
  [SMALL_STATE(87)] = 1316,
  [SMALL_STATE(88)] = 1323,
  [SMALL_STATE(89)] = 1330,
  [SMALL_STATE(90)] = 1335,
  [SMALL_STATE(91)] = 1340,
  [SMALL_STATE(92)] = 1345,
  [SMALL_STATE(93)] = 1352,
  [SMALL_STATE(94)] = 1357,
  [SMALL_STATE(95)] = 1364,
  [SMALL_STATE(96)] = 1371,
  [SMALL_STATE(97)] = 1378,
  [SMALL_STATE(98)] = 1383,
  [SMALL_STATE(99)] = 1390,
  [SMALL_STATE(100)] = 1397,
  [SMALL_STATE(101)] = 1402,
  [SMALL_STATE(102)] = 1407,
  [SMALL_STATE(103)] = 1414,
  [SMALL_STATE(104)] = 1419,
  [SMALL_STATE(105)] = 1426,
  [SMALL_STATE(106)] = 1433,
  [SMALL_STATE(107)] = 1440,
  [SMALL_STATE(108)] = 1445,
  [SMALL_STATE(109)] = 1450,
  [SMALL_STATE(110)] = 1455,
  [SMALL_STATE(111)] = 1460,
  [SMALL_STATE(112)] = 1467,
  [SMALL_STATE(113)] = 1472,
  [SMALL_STATE(114)] = 1479,
  [SMALL_STATE(115)] = 1484,
  [SMALL_STATE(116)] = 1488,
  [SMALL_STATE(117)] = 1492,
  [SMALL_STATE(118)] = 1496,
  [SMALL_STATE(119)] = 1500,
  [SMALL_STATE(120)] = 1504,
  [SMALL_STATE(121)] = 1508,
  [SMALL_STATE(122)] = 1512,
  [SMALL_STATE(123)] = 1516,
  [SMALL_STATE(124)] = 1520,
  [SMALL_STATE(125)] = 1524,
  [SMALL_STATE(126)] = 1528,
  [SMALL_STATE(127)] = 1532,
  [SMALL_STATE(128)] = 1536,
  [SMALL_STATE(129)] = 1540,
  [SMALL_STATE(130)] = 1544,
  [SMALL_STATE(131)] = 1548,
  [SMALL_STATE(132)] = 1552,
  [SMALL_STATE(133)] = 1556,
  [SMALL_STATE(134)] = 1560,
  [SMALL_STATE(135)] = 1564,
  [SMALL_STATE(136)] = 1568,
  [SMALL_STATE(137)] = 1572,
  [SMALL_STATE(138)] = 1576,
  [SMALL_STATE(139)] = 1580,
  [SMALL_STATE(140)] = 1584,
  [SMALL_STATE(141)] = 1588,
  [SMALL_STATE(142)] = 1592,
  [SMALL_STATE(143)] = 1596,
  [SMALL_STATE(144)] = 1600,
  [SMALL_STATE(145)] = 1604,
  [SMALL_STATE(146)] = 1608,
  [SMALL_STATE(147)] = 1612,
  [SMALL_STATE(148)] = 1616,
  [SMALL_STATE(149)] = 1620,
  [SMALL_STATE(150)] = 1624,
  [SMALL_STATE(151)] = 1628,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 3, 0, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 4, 0, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_service_block_repeat1, 2, 0, 0),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_block_repeat1, 2, 0, 0), SHIFT_REPEAT(120),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_block_repeat1, 2, 0, 0), SHIFT_REPEAT(122),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_block_repeat1, 2, 0, 0), SHIFT_REPEAT(124),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_block_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_block_repeat1, 2, 0, 0), SHIFT_REPEAT(133),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_block_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_block_repeat1, 2, 0, 0), SHIFT_REPEAT(146),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 2, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_list, 3, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_dto, 4, 0, 4),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dto, 3, 0, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_set, 3, 0, 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 3, 0, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values_block, 2, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_enum, 4, 0, 4),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_set, 4, 0, 4),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dto, 4, 0, 4),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 4, 0, 4),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values_block, 3, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 5, 0, 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_enum, 5, 0, 5),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2, 0, 0),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2, 0, 0), SHIFT_REPEAT(145),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_list_repeat1, 2, 0, 0), SHIFT_REPEAT(149),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_list_repeat1, 2, 0, 0), SHIFT_REPEAT(150),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_dto, 5, 0, 5),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 6, 0, 4),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_values_block_repeat2, 2, 0, 0),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_values_block_repeat2, 2, 0, 0), SHIFT_REPEAT(40),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_values_block_repeat2, 2, 0, 0), SHIFT_REPEAT(145),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_values_block_repeat2, 2, 0, 0), SHIFT_REPEAT(149),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_values_block_repeat2, 2, 0, 0), SHIFT_REPEAT(142),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 4, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_values_block_repeat1, 2, 0, 0),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_values_block_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__definition_repeat1, 2, 0, 0),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__definition_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__definition_repeat1, 2, 0, 0), SHIFT_REPEAT(118),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__definition_repeat1, 2, 0, 0), SHIFT_REPEAT(121),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_values_block_repeat2, 2, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_values_block_repeat2, 3, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_values_block_repeat2, 3, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4, 0, 3),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 4, 0, 3),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, 0, 2),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 5, 0, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc_comment, 2, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doc_comment, 2, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_remarks, 2, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_remarks, 2, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 5, 0, 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2, 0, 0),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_remarks_repeat1, 2, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_remarks_repeat1, 2, 0, 0),
  [231] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_remarks_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, 0, 3),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4, 0, 3),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute_property, 1, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_remarks, 1, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_remarks, 1, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_repeat1, 2, 0, 0),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_repeat1, 2, 0, 0), SHIFT_REPEAT(129),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 3),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_values_block_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 2, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_type, 4, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__parameter_list_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__parameter_list_repeat1, 2, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute_property, 2, 0, 0),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3, 0, 0),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service_block, 2, 0, 0),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_list, 3, 0, 0),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_type, 2, 0, 0),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_required_type, 2, 0, 0),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_list, 4, 0, 0),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service_block, 3, 0, 0),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_list, 2, 0, 0),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [364] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 2, 0, 0),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
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

TS_PUBLIC const TSLanguage *tree_sitter_facility(void) {
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
