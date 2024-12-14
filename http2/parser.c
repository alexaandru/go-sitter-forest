#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 140
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 68
#define ALIAS_COUNT 0
#define TOKEN_COUNT 30
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 4

enum ts_symbol_identifiers {
  sym_method = 1,
  anon_sym_COLON = 2,
  sym_header_name = 3,
  sym_raw_body = 4,
  anon_sym_AMP = 5,
  anon_sym_EQ = 6,
  aux_sym_url_encoded_value_token1 = 7,
  anon_sym_AT = 8,
  anon_sym_EQ2 = 9,
  anon_sym_COMMA = 10,
  anon_sym_COLON2 = 11,
  anon_sym_DQUOTE = 12,
  anon_sym_LBRACE = 13,
  anon_sym_RBRACE = 14,
  anon_sym_LBRACK = 15,
  anon_sym_RBRACK = 16,
  sym_separator = 17,
  anon_sym_HTTP_SLASH = 18,
  aux_sym_http_version_token1 = 19,
  sym_status_code = 20,
  aux_sym_identifier_token1 = 21,
  sym__identifier = 22,
  sym_number = 23,
  sym_boolean = 24,
  aux_sym_string_token1 = 25,
  sym_null = 26,
  sym_variable_ref = 27,
  aux_sym_rest_of_line_token1 = 28,
  sym__nl = 29,
  sym_source_file = 30,
  sym__block = 31,
  sym_request = 32,
  sym_response = 33,
  sym_start_line = 34,
  sym_url = 35,
  sym_header = 36,
  sym_body = 37,
  sym_url_encoded_body = 38,
  sym_url_encoded_key_value = 39,
  sym_url_encoded_key = 40,
  sym_url_encoded_value = 41,
  sym_variable_declaration = 42,
  sym_json_body = 43,
  sym__key_value_list = 44,
  sym_json_key_value = 45,
  sym__json_key = 46,
  sym__json_value = 47,
  sym_json_object = 48,
  sym_json_list = 49,
  sym__json_list_values = 50,
  sym_response_start_line = 51,
  sym_http_version = 52,
  sym_reason_phrase = 53,
  sym_identifier = 54,
  sym_string = 55,
  sym_rest_of_line = 56,
  aux_sym_source_file_repeat1 = 57,
  aux_sym_source_file_repeat2 = 58,
  aux_sym__block_repeat1 = 59,
  aux_sym_request_repeat1 = 60,
  aux_sym_url_encoded_body_repeat1 = 61,
  aux_sym_url_encoded_value_repeat1 = 62,
  aux_sym__key_value_list_repeat1 = 63,
  aux_sym__json_list_values_repeat1 = 64,
  aux_sym_identifier_repeat1 = 65,
  aux_sym_string_repeat1 = 66,
  aux_sym_rest_of_line_repeat1 = 67,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_method] = "method",
  [anon_sym_COLON] = ":",
  [sym_header_name] = "header_name",
  [sym_raw_body] = "raw_body",
  [anon_sym_AMP] = "&",
  [anon_sym_EQ] = "=",
  [aux_sym_url_encoded_value_token1] = "url_encoded_value_token1",
  [anon_sym_AT] = "@",
  [anon_sym_EQ2] = "=",
  [anon_sym_COMMA] = ",",
  [anon_sym_COLON2] = ":",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_separator] = "separator",
  [anon_sym_HTTP_SLASH] = "HTTP/",
  [aux_sym_http_version_token1] = "http_version_token1",
  [sym_status_code] = "status_code",
  [aux_sym_identifier_token1] = "identifier_token1",
  [sym__identifier] = "_identifier",
  [sym_number] = "number",
  [sym_boolean] = "boolean",
  [aux_sym_string_token1] = "string_token1",
  [sym_null] = "null",
  [sym_variable_ref] = "variable_ref",
  [aux_sym_rest_of_line_token1] = "rest_of_line_token1",
  [sym__nl] = "_nl",
  [sym_source_file] = "source_file",
  [sym__block] = "_block",
  [sym_request] = "request",
  [sym_response] = "response",
  [sym_start_line] = "start_line",
  [sym_url] = "url",
  [sym_header] = "header",
  [sym_body] = "body",
  [sym_url_encoded_body] = "url_encoded_body",
  [sym_url_encoded_key_value] = "url_encoded_key_value",
  [sym_url_encoded_key] = "url_encoded_key",
  [sym_url_encoded_value] = "url_encoded_value",
  [sym_variable_declaration] = "variable_declaration",
  [sym_json_body] = "json_body",
  [sym__key_value_list] = "_key_value_list",
  [sym_json_key_value] = "json_key_value",
  [sym__json_key] = "_json_key",
  [sym__json_value] = "_json_value",
  [sym_json_object] = "json_object",
  [sym_json_list] = "json_list",
  [sym__json_list_values] = "_json_list_values",
  [sym_response_start_line] = "response_start_line",
  [sym_http_version] = "http_version",
  [sym_reason_phrase] = "reason_phrase",
  [sym_identifier] = "identifier",
  [sym_string] = "string",
  [sym_rest_of_line] = "rest_of_line",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym__block_repeat1] = "_block_repeat1",
  [aux_sym_request_repeat1] = "request_repeat1",
  [aux_sym_url_encoded_body_repeat1] = "url_encoded_body_repeat1",
  [aux_sym_url_encoded_value_repeat1] = "url_encoded_value_repeat1",
  [aux_sym__key_value_list_repeat1] = "_key_value_list_repeat1",
  [aux_sym__json_list_values_repeat1] = "_json_list_values_repeat1",
  [aux_sym_identifier_repeat1] = "identifier_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_rest_of_line_repeat1] = "rest_of_line_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_method] = sym_method,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_header_name] = sym_header_name,
  [sym_raw_body] = sym_raw_body,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_url_encoded_value_token1] = aux_sym_url_encoded_value_token1,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_EQ2] = anon_sym_EQ,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COLON2] = anon_sym_COLON,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_separator] = sym_separator,
  [anon_sym_HTTP_SLASH] = anon_sym_HTTP_SLASH,
  [aux_sym_http_version_token1] = aux_sym_http_version_token1,
  [sym_status_code] = sym_status_code,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [sym__identifier] = sym__identifier,
  [sym_number] = sym_number,
  [sym_boolean] = sym_boolean,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_null] = sym_null,
  [sym_variable_ref] = sym_variable_ref,
  [aux_sym_rest_of_line_token1] = aux_sym_rest_of_line_token1,
  [sym__nl] = sym__nl,
  [sym_source_file] = sym_source_file,
  [sym__block] = sym__block,
  [sym_request] = sym_request,
  [sym_response] = sym_response,
  [sym_start_line] = sym_start_line,
  [sym_url] = sym_url,
  [sym_header] = sym_header,
  [sym_body] = sym_body,
  [sym_url_encoded_body] = sym_url_encoded_body,
  [sym_url_encoded_key_value] = sym_url_encoded_key_value,
  [sym_url_encoded_key] = sym_url_encoded_key,
  [sym_url_encoded_value] = sym_url_encoded_value,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_json_body] = sym_json_body,
  [sym__key_value_list] = sym__key_value_list,
  [sym_json_key_value] = sym_json_key_value,
  [sym__json_key] = sym__json_key,
  [sym__json_value] = sym__json_value,
  [sym_json_object] = sym_json_object,
  [sym_json_list] = sym_json_list,
  [sym__json_list_values] = sym__json_list_values,
  [sym_response_start_line] = sym_response_start_line,
  [sym_http_version] = sym_http_version,
  [sym_reason_phrase] = sym_reason_phrase,
  [sym_identifier] = sym_identifier,
  [sym_string] = sym_string,
  [sym_rest_of_line] = sym_rest_of_line,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym__block_repeat1] = aux_sym__block_repeat1,
  [aux_sym_request_repeat1] = aux_sym_request_repeat1,
  [aux_sym_url_encoded_body_repeat1] = aux_sym_url_encoded_body_repeat1,
  [aux_sym_url_encoded_value_repeat1] = aux_sym_url_encoded_value_repeat1,
  [aux_sym__key_value_list_repeat1] = aux_sym__key_value_list_repeat1,
  [aux_sym__json_list_values_repeat1] = aux_sym__json_list_values_repeat1,
  [aux_sym_identifier_repeat1] = aux_sym_identifier_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_rest_of_line_repeat1] = aux_sym_rest_of_line_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_method] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_header_name] = {
    .visible = true,
    .named = true,
  },
  [sym_raw_body] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_url_encoded_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_separator] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_HTTP_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_http_version_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_status_code] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_ref] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_rest_of_line_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__nl] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__block] = {
    .visible = false,
    .named = true,
  },
  [sym_request] = {
    .visible = true,
    .named = true,
  },
  [sym_response] = {
    .visible = true,
    .named = true,
  },
  [sym_start_line] = {
    .visible = true,
    .named = true,
  },
  [sym_url] = {
    .visible = true,
    .named = true,
  },
  [sym_header] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym_url_encoded_body] = {
    .visible = true,
    .named = true,
  },
  [sym_url_encoded_key_value] = {
    .visible = true,
    .named = true,
  },
  [sym_url_encoded_key] = {
    .visible = true,
    .named = true,
  },
  [sym_url_encoded_value] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_json_body] = {
    .visible = true,
    .named = true,
  },
  [sym__key_value_list] = {
    .visible = false,
    .named = true,
  },
  [sym_json_key_value] = {
    .visible = true,
    .named = true,
  },
  [sym__json_key] = {
    .visible = false,
    .named = true,
  },
  [sym__json_value] = {
    .visible = false,
    .named = true,
  },
  [sym_json_object] = {
    .visible = true,
    .named = true,
  },
  [sym_json_list] = {
    .visible = true,
    .named = true,
  },
  [sym__json_list_values] = {
    .visible = false,
    .named = true,
  },
  [sym_response_start_line] = {
    .visible = true,
    .named = true,
  },
  [sym_http_version] = {
    .visible = true,
    .named = true,
  },
  [sym_reason_phrase] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_rest_of_line] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_request_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_url_encoded_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_url_encoded_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__key_value_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__json_list_values_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rest_of_line_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_key = 1,
  field_name = 2,
  field_value = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_name] = "name",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
    {field_value, 3},
  [2] =
    {field_name, 0},
    {field_value, 2},
  [4] =
    {field_key, 0},
    {field_value, 2},
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
  [25] = 15,
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
  [51] = 45,
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
  [71] = 18,
  [72] = 24,
  [73] = 58,
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
  [103] = 34,
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
  [135] = 133,
  [136] = 136,
  [137] = 126,
  [138] = 134,
  [139] = 139,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(74);
      if (lookahead == ' ') SKIP(71);
      if (lookahead == '"') ADVANCE(104);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '&') ADVANCE(89);
      if (lookahead == ',') ADVANCE(102);
      if (lookahead == '.') ADVANCE(114);
      if (lookahead == ':') ADVANCE(103);
      if (lookahead == '=') ADVANCE(90);
      if (lookahead == '@') ADVANCE(95);
      if (lookahead == 'C') ADVANCE(114);
      if (lookahead == 'D') ADVANCE(114);
      if (lookahead == 'G') ADVANCE(114);
      if (lookahead == 'H') ADVANCE(114);
      if (lookahead == 'L') ADVANCE(114);
      if (lookahead == 'O') ADVANCE(114);
      if (lookahead == 'P') ADVANCE(114);
      if (lookahead == 'T') ADVANCE(114);
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == ']') ADVANCE(109);
      if (lookahead == 'f') ADVANCE(114);
      if (lookahead == 'n') ADVANCE(114);
      if (lookahead == 't') ADVANCE(114);
      if (lookahead == '{') ADVANCE(106);
      if (lookahead == '}') ADVANCE(107);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == '#') ADVANCE(82);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == ' ') ADVANCE(86);
      if (lookahead == '#') ADVANCE(84);
      if (lookahead == '@') ADVANCE(96);
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == '{') ADVANCE(105);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (lookahead != 0) ADVANCE(88);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == ' ') ADVANCE(87);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == '{') ADVANCE(105);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (lookahead != 0) ADVANCE(88);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead != 0) ADVANCE(83);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        ' ', 124,
        '@', 95,
        'C', 131,
        'D', 127,
        'G', 128,
        'H', 129,
        'L', 130,
        'O', 132,
        'P', 126,
        'T', 133,
        '{', 134,
        '\n', 135,
        '\r', 135,
      );
      if (lookahead != 0) ADVANCE(123);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '@') ADVANCE(96);
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == '{') ADVANCE(105);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 9:
      if (lookahead == ' ') SKIP(10);
      if (lookahead == '"') ADVANCE(104);
      if (lookahead == ':') ADVANCE(103);
      if (lookahead == '=') ADVANCE(90);
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == ']') ADVANCE(109);
      if (lookahead == 'f') ADVANCE(55);
      if (lookahead == 'n') ADVANCE(63);
      if (lookahead == 't') ADVANCE(60);
      if (lookahead == '{') ADVANCE(106);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      END_STATE();
    case 10:
      if (lookahead == ' ') SKIP(10);
      if (lookahead == '"') ADVANCE(104);
      if (lookahead == ':') ADVANCE(103);
      if (lookahead == '=') ADVANCE(90);
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == ']') ADVANCE(109);
      if (lookahead == 'f') ADVANCE(55);
      if (lookahead == 'n') ADVANCE(63);
      if (lookahead == 't') ADVANCE(60);
      if (lookahead == '{') ADVANCE(106);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(12);
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == '{') ADVANCE(105);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(28);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == '{') ADVANCE(105);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(125);
      if (lookahead == '{') ADVANCE(134);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      if (lookahead != 0) ADVANCE(123);
      END_STATE();
    case 14:
      if (lookahead == ' ') SKIP(14);
      if (lookahead == '"') ADVANCE(104);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == '=') ADVANCE(101);
      if (lookahead == '{') ADVANCE(64);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(92);
      if (lookahead == '&') ADVANCE(89);
      if (lookahead == '{') ADVANCE(94);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(78);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(81);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(119);
      if (lookahead == '"') ADVANCE(104);
      if (lookahead == '{') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(118);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead == '{') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '&') ADVANCE(91);
      END_STATE();
    case 19:
      if (lookahead == ' ') SKIP(19);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 20:
      if (lookahead == ' ') SKIP(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 21:
      if (lookahead == ' ') SKIP(21);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(24);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '@') ADVANCE(99);
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == '{') ADVANCE(105);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (lookahead != 0) ADVANCE(68);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == '{') ADVANCE(105);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(69);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == '{') ADVANCE(105);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(11);
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == '{') ADVANCE(105);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(68);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(110);
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(3);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 28:
      if (lookahead == '#') ADVANCE(3);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 29:
      if (lookahead == '#') ADVANCE(26);
      END_STATE();
    case 30:
      if (lookahead == '/') ADVANCE(111);
      END_STATE();
    case 31:
      if (lookahead == 'A') ADVANCE(36);
      END_STATE();
    case 32:
      if (lookahead == 'A') ADVANCE(35);
      END_STATE();
    case 33:
      if (lookahead == 'C') ADVANCE(50);
      END_STATE();
    case 34:
      if (lookahead == 'C') ADVANCE(40);
      END_STATE();
    case 35:
      if (lookahead == 'C') ADVANCE(37);
      END_STATE();
    case 36:
      if (lookahead == 'D') ADVANCE(75);
      END_STATE();
    case 37:
      if (lookahead == 'E') ADVANCE(75);
      END_STATE();
    case 38:
      if (lookahead == 'E') ADVANCE(33);
      END_STATE();
    case 39:
      if (lookahead == 'E') ADVANCE(54);
      END_STATE();
    case 40:
      if (lookahead == 'H') ADVANCE(75);
      END_STATE();
    case 41:
      if (lookahead == 'I') ADVANCE(46);
      END_STATE();
    case 42:
      if (lookahead == 'L') ADVANCE(39);
      END_STATE();
    case 43:
      if (lookahead == 'N') ADVANCE(45);
      END_STATE();
    case 44:
      if (lookahead == 'N') ADVANCE(49);
      END_STATE();
    case 45:
      if (lookahead == 'N') ADVANCE(38);
      END_STATE();
    case 46:
      if (lookahead == 'O') ADVANCE(44);
      END_STATE();
    case 47:
      if (lookahead == 'P') ADVANCE(30);
      END_STATE();
    case 48:
      if (lookahead == 'S') ADVANCE(50);
      END_STATE();
    case 49:
      if (lookahead == 'S') ADVANCE(75);
      END_STATE();
    case 50:
      if (lookahead == 'T') ADVANCE(75);
      END_STATE();
    case 51:
      if (lookahead == 'T') ADVANCE(47);
      END_STATE();
    case 52:
      if (lookahead == 'T') ADVANCE(41);
      END_STATE();
    case 53:
      if (lookahead == 'T') ADVANCE(34);
      END_STATE();
    case 54:
      if (lookahead == 'T') ADVANCE(37);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(121);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 61:
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 62:
      if (lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 63:
      if (lookahead == 'u') ADVANCE(59);
      END_STATE();
    case 64:
      if (lookahead == '{') ADVANCE(65);
      END_STATE();
    case 65:
      if (lookahead == '}') ADVANCE(66);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 66:
      if (lookahead == '}') ADVANCE(122);
      END_STATE();
    case 67:
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(70);
      END_STATE();
    case 68:
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(27);
      END_STATE();
    case 69:
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(67);
      END_STATE();
    case 70:
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 71:
      if (eof) ADVANCE(74);
      if (lookahead == ' ') SKIP(71);
      if (lookahead == '"') ADVANCE(104);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '&') ADVANCE(89);
      if (lookahead == ',') ADVANCE(102);
      if (lookahead == '.') ADVANCE(114);
      if (lookahead == ':') ADVANCE(103);
      if (lookahead == '=') ADVANCE(90);
      if (lookahead == '@') ADVANCE(95);
      if (lookahead == 'C') ADVANCE(114);
      if (lookahead == 'D') ADVANCE(114);
      if (lookahead == 'G') ADVANCE(114);
      if (lookahead == 'H') ADVANCE(114);
      if (lookahead == 'L') ADVANCE(114);
      if (lookahead == 'O') ADVANCE(114);
      if (lookahead == 'P') ADVANCE(114);
      if (lookahead == 'T') ADVANCE(114);
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == ']') ADVANCE(109);
      if (lookahead == 'f') ADVANCE(114);
      if (lookahead == 'n') ADVANCE(114);
      if (lookahead == 't') ADVANCE(114);
      if (lookahead == '{') ADVANCE(106);
      if (lookahead == '}') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 72:
      if (eof) ADVANCE(74);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '@') ADVANCE(100);
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == '{') ADVANCE(105);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (lookahead != 0) ADVANCE(69);
      END_STATE();
    case 73:
      if (eof) ADVANCE(74);
      if (lookahead == ' ') ADVANCE(77);
      if (lookahead == '#') ADVANCE(80);
      if (lookahead == '@') ADVANCE(98);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(81);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_method);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == ' ') ADVANCE(77);
      if (lookahead == '#') ADVANCE(80);
      if (lookahead == '@') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(81);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == ' ') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(81);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '#') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(81);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '#') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == '#') ADVANCE(110);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == '#') ADVANCE(82);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == ' ') ADVANCE(86);
      if (lookahead == '#') ADVANCE(84);
      if (lookahead == '@') ADVANCE(96);
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == '{') ADVANCE(105);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (lookahead != 0) ADVANCE(88);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == ' ') ADVANCE(87);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == '{') ADVANCE(105);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (lookahead != 0) ADVANCE(88);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead != 0) ADVANCE(83);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_url_encoded_value_token1);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_url_encoded_value_token1);
      if (lookahead == ' ') ADVANCE(92);
      if (lookahead == '&') ADVANCE(89);
      if (lookahead == '{') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(91);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_url_encoded_value_token1);
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead == '{') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '&') ADVANCE(91);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_url_encoded_value_token1);
      if (lookahead == '{') ADVANCE(65);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead != 0) ADVANCE(83);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '#') ADVANCE(3);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(81);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(27);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(67);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(65);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_separator);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_http_version_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_status_code);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == ' ') ADVANCE(119);
      if (lookahead == '{') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(118);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '{') ADVANCE(65);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_variable_ref);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      ADVANCE_MAP(
        ' ', 124,
        '@', 95,
        'C', 131,
        'D', 127,
        'G', 128,
        'H', 129,
        'L', 130,
        'O', 132,
        'P', 126,
        'T', 133,
        '{', 134,
      );
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(123);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == ' ') ADVANCE(125);
      if (lookahead == '{') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(123);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == 'A') ADVANCE(53);
      if (lookahead == 'O') ADVANCE(48);
      if (lookahead == 'U') ADVANCE(50);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == 'E') ADVANCE(42);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == 'E') ADVANCE(50);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == 'E') ADVANCE(31);
      if (lookahead == 'T') ADVANCE(51);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == 'I') ADVANCE(48);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == 'O') ADVANCE(43);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == 'P') ADVANCE(52);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == 'R') ADVANCE(32);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == '{') ADVANCE(65);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__nl);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__nl);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(67);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 7},
  [2] = {.lex_state = 7},
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 72},
  [5] = {.lex_state = 72},
  [6] = {.lex_state = 9},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 23},
  [11] = {.lex_state = 9},
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 23},
  [14] = {.lex_state = 9},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 73},
  [17] = {.lex_state = 73},
  [18] = {.lex_state = 73},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 13},
  [27] = {.lex_state = 14},
  [28] = {.lex_state = 13},
  [29] = {.lex_state = 14},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 15},
  [33] = {.lex_state = 15},
  [34] = {.lex_state = 73},
  [35] = {.lex_state = 13},
  [36] = {.lex_state = 16},
  [37] = {.lex_state = 13},
  [38] = {.lex_state = 16},
  [39] = {.lex_state = 14},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 17},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 14},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 18},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 14},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 13},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 17},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 13},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 17},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 16},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 13},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
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
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 19},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 16},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 9},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 20},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 9},
  [117] = {.lex_state = 9},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 14},
  [127] = {.lex_state = 9},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 14},
  [131] = {.lex_state = 20},
  [132] = {.lex_state = 21},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 14},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_method] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_EQ2] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COLON2] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_separator] = ACTIONS(1),
    [anon_sym_HTTP_SLASH] = ACTIONS(1),
    [aux_sym_http_version_token1] = ACTIONS(1),
    [sym_status_code] = ACTIONS(1),
    [aux_sym_identifier_token1] = ACTIONS(1),
    [sym_boolean] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [sym_variable_ref] = ACTIONS(1),
    [sym__nl] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(111),
    [sym__block] = STATE(30),
    [sym_request] = STATE(22),
    [sym_response] = STATE(22),
    [sym_start_line] = STATE(123),
    [sym_url] = STATE(110),
    [sym_variable_declaration] = STATE(3),
    [sym_response_start_line] = STATE(128),
    [sym_http_version] = STATE(131),
    [sym_rest_of_line] = STATE(109),
    [aux_sym__block_repeat1] = STATE(3),
    [aux_sym_rest_of_line_repeat1] = STATE(35),
    [sym_method] = ACTIONS(3),
    [anon_sym_AT] = ACTIONS(5),
    [anon_sym_HTTP_SLASH] = ACTIONS(7),
    [sym_variable_ref] = ACTIONS(9),
    [aux_sym_rest_of_line_token1] = ACTIONS(9),
    [sym__nl] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(7), 1,
      anon_sym_HTTP_SLASH,
    ACTIONS(11), 1,
      sym__nl,
    STATE(35), 1,
      aux_sym_rest_of_line_repeat1,
    STATE(82), 1,
      sym__block,
    STATE(109), 1,
      sym_rest_of_line,
    STATE(110), 1,
      sym_url,
    STATE(123), 1,
      sym_start_line,
    STATE(128), 1,
      sym_response_start_line,
    STATE(131), 1,
      sym_http_version,
    ACTIONS(9), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
    STATE(3), 2,
      sym_variable_declaration,
      aux_sym__block_repeat1,
    STATE(22), 2,
      sym_request,
      sym_response,
  [46] = 13,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(7), 1,
      anon_sym_HTTP_SLASH,
    ACTIONS(13), 1,
      sym__nl,
    STATE(35), 1,
      aux_sym_rest_of_line_repeat1,
    STATE(109), 1,
      sym_rest_of_line,
    STATE(110), 1,
      sym_url,
    STATE(123), 1,
      sym_start_line,
    STATE(128), 1,
      sym_response_start_line,
    STATE(131), 1,
      sym_http_version,
    ACTIONS(9), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
    STATE(15), 2,
      sym_variable_declaration,
      aux_sym__block_repeat1,
    STATE(20), 2,
      sym_request,
      sym_response,
  [89] = 11,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      sym_raw_body,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym__identifier,
    STATE(77), 1,
      sym_url_encoded_key_value,
    STATE(106), 1,
      sym_body,
    STATE(117), 1,
      sym_url_encoded_key,
    STATE(108), 2,
      sym_url_encoded_body,
      sym_json_body,
    STATE(118), 2,
      sym_json_object,
      sym_json_list,
    ACTIONS(19), 3,
      anon_sym_AT,
      sym_separator,
      sym__nl,
  [127] = 11,
    ACTIONS(17), 1,
      sym_raw_body,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym__identifier,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    STATE(77), 1,
      sym_url_encoded_key_value,
    STATE(113), 1,
      sym_body,
    STATE(117), 1,
      sym_url_encoded_key,
    STATE(108), 2,
      sym_url_encoded_body,
      sym_json_body,
    STATE(118), 2,
      sym_json_object,
      sym_json_list,
    ACTIONS(29), 3,
      anon_sym_AT,
      sym_separator,
      sym__nl,
  [165] = 8,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_RBRACK,
    ACTIONS(39), 1,
      sym__nl,
    STATE(114), 1,
      sym__json_list_values,
    ACTIONS(37), 4,
      sym_number,
      sym_boolean,
      sym_null,
      sym_variable_ref,
    STATE(46), 4,
      sym__json_value,
      sym_json_object,
      sym_json_list,
      sym_string,
  [196] = 6,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      sym__nl,
    ACTIONS(41), 4,
      sym_number,
      sym_boolean,
      sym_null,
      sym_variable_ref,
    STATE(83), 4,
      sym__json_value,
      sym_json_object,
      sym_json_list,
      sym_string,
  [221] = 6,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_RBRACK,
    ACTIONS(47), 4,
      sym_number,
      sym_boolean,
      sym_null,
      sym_variable_ref,
    STATE(57), 4,
      sym__json_value,
      sym_json_object,
      sym_json_list,
      sym_string,
  [246] = 6,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      sym__nl,
    ACTIONS(49), 4,
      sym_number,
      sym_boolean,
      sym_null,
      sym_variable_ref,
    STATE(90), 4,
      sym__json_value,
      sym_json_object,
      sym_json_list,
      sym_string,
  [271] = 9,
    ACTIONS(17), 1,
      sym_raw_body,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym__identifier,
    STATE(77), 1,
      sym_url_encoded_key_value,
    STATE(117), 1,
      sym_url_encoded_key,
    STATE(136), 1,
      sym_body,
    STATE(108), 2,
      sym_url_encoded_body,
      sym_json_body,
    STATE(118), 2,
      sym_json_object,
      sym_json_list,
  [301] = 5,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 4,
      sym_number,
      sym_boolean,
      sym_null,
      sym_variable_ref,
    STATE(90), 4,
      sym__json_value,
      sym_json_object,
      sym_json_list,
      sym_string,
  [323] = 5,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 4,
      sym_number,
      sym_boolean,
      sym_null,
      sym_variable_ref,
    STATE(80), 4,
      sym__json_value,
      sym_json_object,
      sym_json_list,
      sym_string,
  [345] = 9,
    ACTIONS(17), 1,
      sym_raw_body,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym__identifier,
    STATE(77), 1,
      sym_url_encoded_key_value,
    STATE(104), 1,
      sym_body,
    STATE(117), 1,
      sym_url_encoded_key,
    STATE(108), 2,
      sym_url_encoded_body,
      sym_json_body,
    STATE(118), 2,
      sym_json_object,
      sym_json_list,
  [375] = 5,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 4,
      sym_number,
      sym_boolean,
      sym_null,
      sym_variable_ref,
    STATE(93), 4,
      sym__json_value,
      sym_json_object,
      sym_json_list,
      sym_string,
  [397] = 4,
    ACTIONS(59), 1,
      anon_sym_AT,
    ACTIONS(62), 1,
      sym__nl,
    STATE(15), 2,
      sym_variable_declaration,
      aux_sym__block_repeat1,
    ACTIONS(57), 4,
      sym_method,
      anon_sym_HTTP_SLASH,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [414] = 6,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(67), 1,
      sym_header_name,
    ACTIONS(71), 1,
      sym__nl,
    STATE(18), 1,
      aux_sym_request_repeat1,
    STATE(138), 1,
      sym_header,
    ACTIONS(69), 2,
      anon_sym_AT,
      sym_separator,
  [434] = 6,
    ACTIONS(67), 1,
      sym_header_name,
    ACTIONS(74), 1,
      ts_builtin_sym_end,
    ACTIONS(78), 1,
      sym__nl,
    STATE(16), 1,
      aux_sym_request_repeat1,
    STATE(138), 1,
      sym_header,
    ACTIONS(76), 2,
      anon_sym_AT,
      sym_separator,
  [454] = 5,
    ACTIONS(83), 1,
      sym_header_name,
    STATE(18), 1,
      aux_sym_request_repeat1,
    STATE(138), 1,
      sym_header,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      sym__nl,
    ACTIONS(86), 2,
      anon_sym_AT,
      sym_separator,
  [472] = 4,
    ACTIONS(90), 1,
      anon_sym_AT,
    ACTIONS(92), 1,
      sym__nl,
    ACTIONS(88), 2,
      ts_builtin_sym_end,
      sym_separator,
    STATE(25), 2,
      sym_variable_declaration,
      aux_sym__block_repeat1,
  [487] = 4,
    ACTIONS(90), 1,
      anon_sym_AT,
    ACTIONS(95), 1,
      sym__nl,
    ACTIONS(88), 2,
      ts_builtin_sym_end,
      sym_separator,
    STATE(23), 2,
      sym_variable_declaration,
      aux_sym__block_repeat1,
  [502] = 6,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(100), 1,
      anon_sym_RBRACE,
    ACTIONS(102), 1,
      sym__nl,
    STATE(42), 1,
      sym_json_key_value,
    STATE(105), 1,
      sym__json_key,
    STATE(129), 1,
      sym__key_value_list,
  [521] = 4,
    ACTIONS(90), 1,
      anon_sym_AT,
    ACTIONS(106), 1,
      sym__nl,
    ACTIONS(104), 2,
      ts_builtin_sym_end,
      sym_separator,
    STATE(19), 2,
      sym_variable_declaration,
      aux_sym__block_repeat1,
  [536] = 4,
    ACTIONS(90), 1,
      anon_sym_AT,
    ACTIONS(111), 1,
      sym__nl,
    ACTIONS(109), 2,
      ts_builtin_sym_end,
      sym_separator,
    STATE(25), 2,
      sym_variable_declaration,
      aux_sym__block_repeat1,
  [551] = 2,
    ACTIONS(116), 1,
      sym__nl,
    ACTIONS(114), 5,
      sym_method,
      anon_sym_AT,
      anon_sym_HTTP_SLASH,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [562] = 4,
    ACTIONS(120), 1,
      anon_sym_AT,
    ACTIONS(123), 1,
      sym__nl,
    ACTIONS(118), 2,
      ts_builtin_sym_end,
      sym_separator,
    STATE(25), 2,
      sym_variable_declaration,
      aux_sym__block_repeat1,
  [577] = 4,
    STATE(35), 1,
      aux_sym_rest_of_line_repeat1,
    STATE(115), 1,
      sym_reason_phrase,
    STATE(122), 1,
      sym_rest_of_line,
    ACTIONS(9), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [591] = 3,
    STATE(27), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(126), 2,
      anon_sym_EQ2,
      anon_sym_DQUOTE,
    ACTIONS(128), 2,
      aux_sym_identifier_token1,
      sym_variable_ref,
  [603] = 4,
    STATE(35), 1,
      aux_sym_rest_of_line_repeat1,
    STATE(109), 1,
      sym_rest_of_line,
    STATE(121), 1,
      sym_url,
    ACTIONS(9), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [617] = 3,
    STATE(27), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(131), 2,
      anon_sym_EQ2,
      anon_sym_DQUOTE,
    ACTIONS(133), 2,
      aux_sym_identifier_token1,
      sym_variable_ref,
  [629] = 5,
    ACTIONS(135), 1,
      ts_builtin_sym_end,
    ACTIONS(137), 1,
      sym_separator,
    ACTIONS(139), 1,
      sym__nl,
    STATE(31), 1,
      aux_sym_source_file_repeat1,
    STATE(84), 1,
      aux_sym_source_file_repeat2,
  [645] = 5,
    ACTIONS(137), 1,
      sym_separator,
    ACTIONS(141), 1,
      ts_builtin_sym_end,
    ACTIONS(143), 1,
      sym__nl,
    STATE(68), 1,
      aux_sym_source_file_repeat1,
    STATE(85), 1,
      aux_sym_source_file_repeat2,
  [661] = 4,
    ACTIONS(145), 1,
      anon_sym_AMP,
    ACTIONS(149), 1,
      sym__nl,
    STATE(33), 1,
      aux_sym_url_encoded_value_repeat1,
    ACTIONS(147), 2,
      aux_sym_url_encoded_value_token1,
      sym_variable_ref,
  [675] = 4,
    ACTIONS(151), 1,
      anon_sym_AMP,
    ACTIONS(156), 1,
      sym__nl,
    STATE(33), 1,
      aux_sym_url_encoded_value_repeat1,
    ACTIONS(153), 2,
      aux_sym_url_encoded_value_token1,
      sym_variable_ref,
  [689] = 2,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      sym__nl,
    ACTIONS(86), 3,
      sym_header_name,
      anon_sym_AT,
      sym_separator,
  [699] = 3,
    ACTIONS(160), 1,
      sym__nl,
    STATE(53), 1,
      aux_sym_rest_of_line_repeat1,
    ACTIONS(158), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [710] = 4,
    ACTIONS(162), 1,
      sym_header_name,
    ACTIONS(164), 1,
      sym__nl,
    STATE(71), 1,
      aux_sym_request_repeat1,
    STATE(134), 1,
      sym_header,
  [723] = 3,
    STATE(35), 1,
      aux_sym_rest_of_line_repeat1,
    STATE(112), 1,
      sym_rest_of_line,
    ACTIONS(9), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [734] = 4,
    ACTIONS(162), 1,
      sym_header_name,
    ACTIONS(166), 1,
      sym__nl,
    STATE(36), 1,
      aux_sym_request_repeat1,
    STATE(134), 1,
      sym_header,
  [747] = 3,
    STATE(29), 1,
      aux_sym_identifier_repeat1,
    STATE(119), 1,
      sym_identifier,
    ACTIONS(168), 2,
      aux_sym_identifier_token1,
      sym_variable_ref,
  [758] = 1,
    ACTIONS(170), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [765] = 4,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 1,
      anon_sym_RBRACE,
    STATE(50), 1,
      sym_json_key_value,
    STATE(105), 1,
      sym__json_key,
  [778] = 4,
    ACTIONS(174), 1,
      anon_sym_COMMA,
    ACTIONS(176), 1,
      anon_sym_RBRACE,
    ACTIONS(178), 1,
      sym__nl,
    STATE(52), 1,
      aux_sym__key_value_list_repeat1,
  [791] = 3,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    STATE(55), 1,
      aux_sym_string_repeat1,
    ACTIONS(182), 2,
      aux_sym_string_token1,
      sym_variable_ref,
  [802] = 1,
    ACTIONS(184), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [809] = 3,
    STATE(29), 1,
      aux_sym_identifier_repeat1,
    STATE(126), 1,
      sym_identifier,
    ACTIONS(168), 2,
      aux_sym_identifier_token1,
      sym_variable_ref,
  [820] = 4,
    ACTIONS(186), 1,
      anon_sym_COMMA,
    ACTIONS(188), 1,
      anon_sym_RBRACK,
    ACTIONS(190), 1,
      sym__nl,
    STATE(59), 1,
      aux_sym__json_list_values_repeat1,
  [833] = 1,
    ACTIONS(192), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_separator,
      sym__nl,
  [840] = 3,
    STATE(32), 1,
      aux_sym_url_encoded_value_repeat1,
    STATE(98), 1,
      sym_url_encoded_value,
    ACTIONS(194), 2,
      aux_sym_url_encoded_value_token1,
      sym_variable_ref,
  [851] = 1,
    ACTIONS(196), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [858] = 4,
    ACTIONS(174), 1,
      anon_sym_COMMA,
    ACTIONS(198), 1,
      anon_sym_RBRACE,
    ACTIONS(200), 1,
      sym__nl,
    STATE(62), 1,
      aux_sym__key_value_list_repeat1,
  [871] = 3,
    STATE(29), 1,
      aux_sym_identifier_repeat1,
    STATE(137), 1,
      sym_identifier,
    ACTIONS(168), 2,
      aux_sym_identifier_token1,
      sym_variable_ref,
  [882] = 4,
    ACTIONS(174), 1,
      anon_sym_COMMA,
    ACTIONS(198), 1,
      anon_sym_RBRACE,
    ACTIONS(200), 1,
      sym__nl,
    STATE(64), 1,
      aux_sym__key_value_list_repeat1,
  [895] = 3,
    ACTIONS(205), 1,
      sym__nl,
    STATE(53), 1,
      aux_sym_rest_of_line_repeat1,
    ACTIONS(202), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [906] = 1,
    ACTIONS(207), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [913] = 3,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
    STATE(66), 1,
      aux_sym_string_repeat1,
    ACTIONS(211), 2,
      aux_sym_string_token1,
      sym_variable_ref,
  [924] = 1,
    ACTIONS(213), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [931] = 4,
    ACTIONS(186), 1,
      anon_sym_COMMA,
    ACTIONS(215), 1,
      anon_sym_RBRACK,
    ACTIONS(217), 1,
      sym__nl,
    STATE(67), 1,
      aux_sym__json_list_values_repeat1,
  [944] = 3,
    STATE(35), 1,
      aux_sym_rest_of_line_repeat1,
    STATE(133), 1,
      sym_rest_of_line,
    ACTIONS(9), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [955] = 4,
    ACTIONS(186), 1,
      anon_sym_COMMA,
    ACTIONS(215), 1,
      anon_sym_RBRACK,
    ACTIONS(217), 1,
      sym__nl,
    STATE(69), 1,
      aux_sym__json_list_values_repeat1,
  [968] = 1,
    ACTIONS(219), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_separator,
      sym__nl,
  [975] = 1,
    ACTIONS(221), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_separator,
      sym__nl,
  [982] = 4,
    ACTIONS(174), 1,
      anon_sym_COMMA,
    ACTIONS(223), 1,
      anon_sym_RBRACE,
    ACTIONS(225), 1,
      sym__nl,
    STATE(64), 1,
      aux_sym__key_value_list_repeat1,
  [995] = 4,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      sym__nl,
    STATE(87), 1,
      sym_json_key_value,
    STATE(105), 1,
      sym__json_key,
  [1008] = 4,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(232), 1,
      anon_sym_RBRACE,
    ACTIONS(234), 1,
      sym__nl,
    STATE(64), 1,
      aux_sym__key_value_list_repeat1,
  [1021] = 1,
    ACTIONS(237), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [1028] = 3,
    ACTIONS(239), 1,
      anon_sym_DQUOTE,
    STATE(66), 1,
      aux_sym_string_repeat1,
    ACTIONS(241), 2,
      aux_sym_string_token1,
      sym_variable_ref,
  [1039] = 4,
    ACTIONS(186), 1,
      anon_sym_COMMA,
    ACTIONS(244), 1,
      anon_sym_RBRACK,
    ACTIONS(246), 1,
      sym__nl,
    STATE(69), 1,
      aux_sym__json_list_values_repeat1,
  [1052] = 3,
    ACTIONS(250), 1,
      sym_separator,
    STATE(68), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(248), 2,
      ts_builtin_sym_end,
      sym__nl,
  [1063] = 4,
    ACTIONS(253), 1,
      anon_sym_COMMA,
    ACTIONS(256), 1,
      anon_sym_RBRACK,
    ACTIONS(258), 1,
      sym__nl,
    STATE(69), 1,
      aux_sym__json_list_values_repeat1,
  [1076] = 1,
    ACTIONS(261), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_separator,
      sym__nl,
  [1083] = 4,
    ACTIONS(81), 1,
      sym__nl,
    ACTIONS(263), 1,
      sym_header_name,
    STATE(71), 1,
      aux_sym_request_repeat1,
    STATE(134), 1,
      sym_header,
  [1096] = 1,
    ACTIONS(116), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_separator,
      sym__nl,
  [1103] = 3,
    STATE(35), 1,
      aux_sym_rest_of_line_repeat1,
    STATE(135), 1,
      sym_rest_of_line,
    ACTIONS(9), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [1114] = 4,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(266), 1,
      sym__nl,
    STATE(78), 1,
      sym_json_key_value,
    STATE(105), 1,
      sym__json_key,
  [1127] = 1,
    ACTIONS(268), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym__nl,
  [1133] = 3,
    ACTIONS(270), 1,
      anon_sym_AMP,
    ACTIONS(272), 1,
      sym__nl,
    STATE(81), 1,
      aux_sym_url_encoded_body_repeat1,
  [1143] = 3,
    ACTIONS(270), 1,
      anon_sym_AMP,
    ACTIONS(274), 1,
      sym__nl,
    STATE(76), 1,
      aux_sym_url_encoded_body_repeat1,
  [1153] = 1,
    ACTIONS(232), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym__nl,
  [1159] = 3,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    STATE(87), 1,
      sym_json_key_value,
    STATE(105), 1,
      sym__json_key,
  [1169] = 1,
    ACTIONS(276), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym__nl,
  [1175] = 3,
    ACTIONS(278), 1,
      anon_sym_AMP,
    ACTIONS(281), 1,
      sym__nl,
    STATE(81), 1,
      aux_sym_url_encoded_body_repeat1,
  [1185] = 1,
    ACTIONS(248), 3,
      ts_builtin_sym_end,
      sym_separator,
      sym__nl,
  [1191] = 2,
    ACTIONS(283), 1,
      sym__nl,
    ACTIONS(256), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1199] = 3,
    ACTIONS(141), 1,
      ts_builtin_sym_end,
    ACTIONS(286), 1,
      sym__nl,
    STATE(92), 1,
      aux_sym_source_file_repeat2,
  [1209] = 3,
    ACTIONS(286), 1,
      sym__nl,
    ACTIONS(288), 1,
      ts_builtin_sym_end,
    STATE(92), 1,
      aux_sym_source_file_repeat2,
  [1219] = 1,
    ACTIONS(290), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__nl,
  [1225] = 1,
    ACTIONS(292), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym__nl,
  [1231] = 3,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    STATE(75), 1,
      sym_json_key_value,
    STATE(105), 1,
      sym__json_key,
  [1241] = 1,
    ACTIONS(294), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__nl,
  [1247] = 2,
    ACTIONS(298), 1,
      sym__nl,
    ACTIONS(296), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1255] = 1,
    ACTIONS(296), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__nl,
  [1261] = 3,
    ACTIONS(301), 1,
      ts_builtin_sym_end,
    ACTIONS(303), 1,
      sym__nl,
    STATE(92), 1,
      aux_sym_source_file_repeat2,
  [1271] = 2,
    ACTIONS(306), 1,
      sym__nl,
    ACTIONS(290), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1279] = 3,
    ACTIONS(309), 1,
      sym__identifier,
    STATE(96), 1,
      sym_url_encoded_key_value,
    STATE(117), 1,
      sym_url_encoded_key,
  [1289] = 2,
    ACTIONS(215), 1,
      anon_sym_RBRACK,
    ACTIONS(311), 1,
      anon_sym_COMMA,
  [1296] = 1,
    ACTIONS(281), 2,
      anon_sym_AMP,
      sym__nl,
  [1301] = 2,
    ACTIONS(198), 1,
      anon_sym_RBRACE,
    ACTIONS(313), 1,
      anon_sym_COMMA,
  [1308] = 1,
    ACTIONS(315), 2,
      anon_sym_AMP,
      sym__nl,
  [1313] = 2,
    ACTIONS(223), 1,
      anon_sym_RBRACE,
    ACTIONS(313), 1,
      anon_sym_COMMA,
  [1320] = 2,
    ACTIONS(244), 1,
      anon_sym_RBRACK,
    ACTIONS(311), 1,
      anon_sym_COMMA,
  [1327] = 2,
    ACTIONS(313), 1,
      anon_sym_COMMA,
    ACTIONS(317), 1,
      anon_sym_RBRACE,
  [1334] = 2,
    ACTIONS(311), 1,
      anon_sym_COMMA,
    ACTIONS(319), 1,
      anon_sym_RBRACK,
  [1341] = 1,
    ACTIONS(81), 2,
      sym_header_name,
      sym__nl,
  [1346] = 1,
    ACTIONS(321), 1,
      sym__nl,
  [1350] = 1,
    ACTIONS(323), 1,
      anon_sym_COLON2,
  [1354] = 1,
    ACTIONS(325), 1,
      sym__nl,
  [1358] = 1,
    ACTIONS(327), 1,
      sym_status_code,
  [1362] = 1,
    ACTIONS(329), 1,
      sym__nl,
  [1366] = 1,
    ACTIONS(331), 1,
      sym__nl,
  [1370] = 1,
    ACTIONS(333), 1,
      sym__nl,
  [1374] = 1,
    ACTIONS(335), 1,
      ts_builtin_sym_end,
  [1378] = 1,
    ACTIONS(337), 1,
      sym__nl,
  [1382] = 1,
    ACTIONS(339), 1,
      sym__nl,
  [1386] = 1,
    ACTIONS(45), 1,
      anon_sym_RBRACK,
  [1390] = 1,
    ACTIONS(341), 1,
      sym__nl,
  [1394] = 1,
    ACTIONS(343), 1,
      anon_sym_EQ,
  [1398] = 1,
    ACTIONS(345), 1,
      anon_sym_EQ,
  [1402] = 1,
    ACTIONS(347), 1,
      sym__nl,
  [1406] = 1,
    ACTIONS(349), 1,
      anon_sym_DQUOTE,
  [1410] = 1,
    ACTIONS(351), 1,
      sym__nl,
  [1414] = 1,
    ACTIONS(353), 1,
      sym__nl,
  [1418] = 1,
    ACTIONS(355), 1,
      sym__nl,
  [1422] = 1,
    ACTIONS(357), 1,
      sym__nl,
  [1426] = 1,
    ACTIONS(359), 1,
      sym__nl,
  [1430] = 1,
    ACTIONS(311), 1,
      anon_sym_COMMA,
  [1434] = 1,
    ACTIONS(361), 1,
      anon_sym_EQ2,
  [1438] = 1,
    ACTIONS(363), 1,
      anon_sym_COLON2,
  [1442] = 1,
    ACTIONS(365), 1,
      sym__nl,
  [1446] = 1,
    ACTIONS(172), 1,
      anon_sym_RBRACE,
  [1450] = 1,
    ACTIONS(367), 1,
      anon_sym_COLON,
  [1454] = 1,
    ACTIONS(369), 1,
      sym_status_code,
  [1458] = 1,
    ACTIONS(371), 1,
      aux_sym_http_version_token1,
  [1462] = 1,
    ACTIONS(373), 1,
      sym__nl,
  [1466] = 1,
    ACTIONS(375), 1,
      sym__nl,
  [1470] = 1,
    ACTIONS(377), 1,
      sym__nl,
  [1474] = 1,
    ACTIONS(379), 1,
      sym__nl,
  [1478] = 1,
    ACTIONS(381), 1,
      anon_sym_EQ2,
  [1482] = 1,
    ACTIONS(383), 1,
      sym__nl,
  [1486] = 1,
    ACTIONS(313), 1,
      anon_sym_COMMA,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 46,
  [SMALL_STATE(4)] = 89,
  [SMALL_STATE(5)] = 127,
  [SMALL_STATE(6)] = 165,
  [SMALL_STATE(7)] = 196,
  [SMALL_STATE(8)] = 221,
  [SMALL_STATE(9)] = 246,
  [SMALL_STATE(10)] = 271,
  [SMALL_STATE(11)] = 301,
  [SMALL_STATE(12)] = 323,
  [SMALL_STATE(13)] = 345,
  [SMALL_STATE(14)] = 375,
  [SMALL_STATE(15)] = 397,
  [SMALL_STATE(16)] = 414,
  [SMALL_STATE(17)] = 434,
  [SMALL_STATE(18)] = 454,
  [SMALL_STATE(19)] = 472,
  [SMALL_STATE(20)] = 487,
  [SMALL_STATE(21)] = 502,
  [SMALL_STATE(22)] = 521,
  [SMALL_STATE(23)] = 536,
  [SMALL_STATE(24)] = 551,
  [SMALL_STATE(25)] = 562,
  [SMALL_STATE(26)] = 577,
  [SMALL_STATE(27)] = 591,
  [SMALL_STATE(28)] = 603,
  [SMALL_STATE(29)] = 617,
  [SMALL_STATE(30)] = 629,
  [SMALL_STATE(31)] = 645,
  [SMALL_STATE(32)] = 661,
  [SMALL_STATE(33)] = 675,
  [SMALL_STATE(34)] = 689,
  [SMALL_STATE(35)] = 699,
  [SMALL_STATE(36)] = 710,
  [SMALL_STATE(37)] = 723,
  [SMALL_STATE(38)] = 734,
  [SMALL_STATE(39)] = 747,
  [SMALL_STATE(40)] = 758,
  [SMALL_STATE(41)] = 765,
  [SMALL_STATE(42)] = 778,
  [SMALL_STATE(43)] = 791,
  [SMALL_STATE(44)] = 802,
  [SMALL_STATE(45)] = 809,
  [SMALL_STATE(46)] = 820,
  [SMALL_STATE(47)] = 833,
  [SMALL_STATE(48)] = 840,
  [SMALL_STATE(49)] = 851,
  [SMALL_STATE(50)] = 858,
  [SMALL_STATE(51)] = 871,
  [SMALL_STATE(52)] = 882,
  [SMALL_STATE(53)] = 895,
  [SMALL_STATE(54)] = 906,
  [SMALL_STATE(55)] = 913,
  [SMALL_STATE(56)] = 924,
  [SMALL_STATE(57)] = 931,
  [SMALL_STATE(58)] = 944,
  [SMALL_STATE(59)] = 955,
  [SMALL_STATE(60)] = 968,
  [SMALL_STATE(61)] = 975,
  [SMALL_STATE(62)] = 982,
  [SMALL_STATE(63)] = 995,
  [SMALL_STATE(64)] = 1008,
  [SMALL_STATE(65)] = 1021,
  [SMALL_STATE(66)] = 1028,
  [SMALL_STATE(67)] = 1039,
  [SMALL_STATE(68)] = 1052,
  [SMALL_STATE(69)] = 1063,
  [SMALL_STATE(70)] = 1076,
  [SMALL_STATE(71)] = 1083,
  [SMALL_STATE(72)] = 1096,
  [SMALL_STATE(73)] = 1103,
  [SMALL_STATE(74)] = 1114,
  [SMALL_STATE(75)] = 1127,
  [SMALL_STATE(76)] = 1133,
  [SMALL_STATE(77)] = 1143,
  [SMALL_STATE(78)] = 1153,
  [SMALL_STATE(79)] = 1159,
  [SMALL_STATE(80)] = 1169,
  [SMALL_STATE(81)] = 1175,
  [SMALL_STATE(82)] = 1185,
  [SMALL_STATE(83)] = 1191,
  [SMALL_STATE(84)] = 1199,
  [SMALL_STATE(85)] = 1209,
  [SMALL_STATE(86)] = 1219,
  [SMALL_STATE(87)] = 1225,
  [SMALL_STATE(88)] = 1231,
  [SMALL_STATE(89)] = 1241,
  [SMALL_STATE(90)] = 1247,
  [SMALL_STATE(91)] = 1255,
  [SMALL_STATE(92)] = 1261,
  [SMALL_STATE(93)] = 1271,
  [SMALL_STATE(94)] = 1279,
  [SMALL_STATE(95)] = 1289,
  [SMALL_STATE(96)] = 1296,
  [SMALL_STATE(97)] = 1301,
  [SMALL_STATE(98)] = 1308,
  [SMALL_STATE(99)] = 1313,
  [SMALL_STATE(100)] = 1320,
  [SMALL_STATE(101)] = 1327,
  [SMALL_STATE(102)] = 1334,
  [SMALL_STATE(103)] = 1341,
  [SMALL_STATE(104)] = 1346,
  [SMALL_STATE(105)] = 1350,
  [SMALL_STATE(106)] = 1354,
  [SMALL_STATE(107)] = 1358,
  [SMALL_STATE(108)] = 1362,
  [SMALL_STATE(109)] = 1366,
  [SMALL_STATE(110)] = 1370,
  [SMALL_STATE(111)] = 1374,
  [SMALL_STATE(112)] = 1378,
  [SMALL_STATE(113)] = 1382,
  [SMALL_STATE(114)] = 1386,
  [SMALL_STATE(115)] = 1390,
  [SMALL_STATE(116)] = 1394,
  [SMALL_STATE(117)] = 1398,
  [SMALL_STATE(118)] = 1402,
  [SMALL_STATE(119)] = 1406,
  [SMALL_STATE(120)] = 1410,
  [SMALL_STATE(121)] = 1414,
  [SMALL_STATE(122)] = 1418,
  [SMALL_STATE(123)] = 1422,
  [SMALL_STATE(124)] = 1426,
  [SMALL_STATE(125)] = 1430,
  [SMALL_STATE(126)] = 1434,
  [SMALL_STATE(127)] = 1438,
  [SMALL_STATE(128)] = 1442,
  [SMALL_STATE(129)] = 1446,
  [SMALL_STATE(130)] = 1450,
  [SMALL_STATE(131)] = 1454,
  [SMALL_STATE(132)] = 1458,
  [SMALL_STATE(133)] = 1462,
  [SMALL_STATE(134)] = 1466,
  [SMALL_STATE(135)] = 1470,
  [SMALL_STATE(136)] = 1474,
  [SMALL_STATE(137)] = 1478,
  [SMALL_STATE(138)] = 1482,
  [SMALL_STATE(139)] = 1486,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 3, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 3, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 4, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 4, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__block_repeat1, 2, 0, 0),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3, 0, 0),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_request, 3, 0, 0), SHIFT(13),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 2, 0, 0),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_request, 2, 0, 0), SHIFT(10),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0), SHIFT_REPEAT(130),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block, 2, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__block, 2, 0, 0), SHIFT(25),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__block, 2, 0, 0), SHIFT(23),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block, 1, 0, 0),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__block, 1, 0, 0), SHIFT(19),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block, 3, 0, 0),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__block, 3, 0, 0), SHIFT(25),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 5, 0, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, 0, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2, 0, 0),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2, 0, 0),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url_encoded_value, 1, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encoded_value, 1, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_url_encoded_value_repeat1, 2, 0, 0),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_url_encoded_value_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_url_encoded_value_repeat1, 2, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest_of_line, 1, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 2, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value_list, 1, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_list, 2, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_list_values, 1, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 3, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value_list, 2, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rest_of_line_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rest_of_line_repeat1, 2, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_list, 3, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_list_values, 2, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 6, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value_list, 3, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__key_value_list_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__key_value_list_repeat1, 2, 0, 0),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__key_value_list_repeat1, 2, 0, 0), SHIFT_REPEAT(139),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [241] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_list_values, 3, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 2, 0, 0),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 2, 0, 0), SHIFT_REPEAT(125),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 7, 0, 0),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0), SHIFT_REPEAT(130),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__key_value_list_repeat1, 4, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encoded_body, 2, 0, 0),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encoded_body, 1, 0, 0),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_key_value, 3, 0, 3),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_url_encoded_body_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_url_encoded_body_repeat1, 2, 0, 0),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 2, 0, 0), SHIFT_REPEAT(91),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 4, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__key_value_list_repeat1, 3, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 5, 0, 0),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 3, 0, 0),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 3, 0, 0), SHIFT_REPEAT(86),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(92),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 4, 0, 0), SHIFT_REPEAT(89),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encoded_key_value, 3, 0, 3),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value_list, 4, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_list_values, 4, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_version, 2, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_line, 1, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, 0, 2),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response_start_line, 3, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encoded_key, 1, 0, 0),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 1, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_line, 2, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reason_phrase, 1, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_key, 3, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
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

TS_PUBLIC const TSLanguage *tree_sitter_http2(void) {
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
