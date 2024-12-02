#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 147
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
  [7] = 6,
  [8] = 8,
  [9] = 8,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 15,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 24,
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
  [36] = 29,
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
  [71] = 16,
  [72] = 22,
  [73] = 73,
  [74] = 52,
  [75] = 73,
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
  [90] = 61,
  [91] = 91,
  [92] = 92,
  [93] = 42,
  [94] = 45,
  [95] = 49,
  [96] = 56,
  [97] = 66,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 37,
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
  [134] = 115,
  [135] = 135,
  [136] = 136,
  [137] = 133,
  [138] = 122,
  [139] = 139,
  [140] = 129,
  [141] = 112,
  [142] = 121,
  [143] = 143,
  [144] = 139,
  [145] = 145,
  [146] = 146,
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
      if (lookahead == ' ') SKIP(13);
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
    case 14:
      if (lookahead == ' ') ADVANCE(125);
      if (lookahead == '{') ADVANCE(134);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      if (lookahead != 0) ADVANCE(123);
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
  [10] = {.lex_state = 9},
  [11] = {.lex_state = 23},
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
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 13},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 14},
  [31] = {.lex_state = 13},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 15},
  [34] = {.lex_state = 14},
  [35] = {.lex_state = 15},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 73},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 14},
  [40] = {.lex_state = 16},
  [41] = {.lex_state = 13},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 17},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 18},
  [48] = {.lex_state = 14},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 14},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 17},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 14},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 16},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 17},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 16},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 13},
  [74] = {.lex_state = 14},
  [75] = {.lex_state = 13},
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
  [87] = {.lex_state = 19},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
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
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 20},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 21},
  [124] = {.lex_state = 9},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 9},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 9},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 13},
  [136] = {.lex_state = 9},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 13},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 13},
  [145] = {.lex_state = 20},
  [146] = {.lex_state = 0},
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
    [sym_source_file] = STATE(127),
    [sym__block] = STATE(32),
    [sym_request] = STATE(20),
    [sym_response] = STATE(20),
    [sym_start_line] = STATE(146),
    [sym_url] = STATE(110),
    [sym_variable_declaration] = STATE(3),
    [sym_response_start_line] = STATE(111),
    [sym_http_version] = STATE(116),
    [sym_rest_of_line] = STATE(120),
    [aux_sym__block_repeat1] = STATE(3),
    [aux_sym_rest_of_line_repeat1] = STATE(57),
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
    STATE(57), 1,
      aux_sym_rest_of_line_repeat1,
    STATE(81), 1,
      sym__block,
    STATE(110), 1,
      sym_url,
    STATE(111), 1,
      sym_response_start_line,
    STATE(116), 1,
      sym_http_version,
    STATE(120), 1,
      sym_rest_of_line,
    STATE(146), 1,
      sym_start_line,
    ACTIONS(9), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
    STATE(3), 2,
      sym_variable_declaration,
      aux_sym__block_repeat1,
    STATE(20), 2,
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
    STATE(57), 1,
      aux_sym_rest_of_line_repeat1,
    STATE(110), 1,
      sym_url,
    STATE(111), 1,
      sym_response_start_line,
    STATE(116), 1,
      sym_http_version,
    STATE(120), 1,
      sym_rest_of_line,
    STATE(146), 1,
      sym_start_line,
    ACTIONS(9), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
    STATE(15), 2,
      sym_variable_declaration,
      aux_sym__block_repeat1,
    STATE(26), 2,
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
    STATE(84), 1,
      sym_url_encoded_key_value,
    STATE(113), 1,
      sym_body,
    STATE(136), 1,
      sym_url_encoded_key,
    STATE(119), 2,
      sym_url_encoded_body,
      sym_json_body,
    STATE(143), 2,
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
    STATE(84), 1,
      sym_url_encoded_key_value,
    STATE(108), 1,
      sym_body,
    STATE(136), 1,
      sym_url_encoded_key,
    STATE(119), 2,
      sym_url_encoded_body,
      sym_json_body,
    STATE(143), 2,
      sym_json_object,
      sym_json_list,
    ACTIONS(29), 3,
      anon_sym_AT,
      sym_separator,
      sym__nl,
  [165] = 8,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      anon_sym_RBRACK,
    ACTIONS(41), 1,
      sym__nl,
    STATE(129), 1,
      sym__json_list_values,
    ACTIONS(39), 4,
      sym_number,
      sym_boolean,
      sym_null,
      sym_variable_ref,
    STATE(85), 4,
      sym__json_value,
      sym_json_object,
      sym_json_list,
      sym_string,
  [196] = 8,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_RBRACK,
    ACTIONS(45), 1,
      sym__nl,
    STATE(140), 1,
      sym__json_list_values,
    ACTIONS(39), 4,
      sym_number,
      sym_boolean,
      sym_null,
      sym_variable_ref,
    STATE(85), 4,
      sym__json_value,
      sym_json_object,
      sym_json_list,
      sym_string,
  [227] = 7,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_RBRACK,
    STATE(121), 1,
      sym__json_list_values,
    ACTIONS(39), 4,
      sym_number,
      sym_boolean,
      sym_null,
      sym_variable_ref,
    STATE(85), 4,
      sym__json_value,
      sym_json_object,
      sym_json_list,
      sym_string,
  [255] = 7,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_RBRACK,
    STATE(142), 1,
      sym__json_list_values,
    ACTIONS(39), 4,
      sym_number,
      sym_boolean,
      sym_null,
      sym_variable_ref,
    STATE(85), 4,
      sym__json_value,
      sym_json_object,
      sym_json_list,
      sym_string,
  [283] = 6,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      sym__nl,
    ACTIONS(53), 4,
      sym_number,
      sym_boolean,
      sym_null,
      sym_variable_ref,
    STATE(82), 4,
      sym__json_value,
      sym_json_object,
      sym_json_list,
      sym_string,
  [308] = 9,
    ACTIONS(17), 1,
      sym_raw_body,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym__identifier,
    STATE(84), 1,
      sym_url_encoded_key_value,
    STATE(128), 1,
      sym_body,
    STATE(136), 1,
      sym_url_encoded_key,
    STATE(119), 2,
      sym_url_encoded_body,
      sym_json_body,
    STATE(143), 2,
      sym_json_object,
      sym_json_list,
  [338] = 5,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(57), 4,
      sym_number,
      sym_boolean,
      sym_null,
      sym_variable_ref,
    STATE(99), 4,
      sym__json_value,
      sym_json_object,
      sym_json_list,
      sym_string,
  [360] = 9,
    ACTIONS(17), 1,
      sym_raw_body,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym__identifier,
    STATE(84), 1,
      sym_url_encoded_key_value,
    STATE(106), 1,
      sym_body,
    STATE(136), 1,
      sym_url_encoded_key,
    STATE(119), 2,
      sym_url_encoded_body,
      sym_json_body,
    STATE(143), 2,
      sym_json_object,
      sym_json_list,
  [390] = 5,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(59), 4,
      sym_number,
      sym_boolean,
      sym_null,
      sym_variable_ref,
    STATE(86), 4,
      sym__json_value,
      sym_json_object,
      sym_json_list,
      sym_string,
  [412] = 4,
    ACTIONS(63), 1,
      anon_sym_AT,
    ACTIONS(66), 1,
      sym__nl,
    STATE(15), 2,
      sym_variable_declaration,
      aux_sym__block_repeat1,
    ACTIONS(61), 4,
      sym_method,
      anon_sym_HTTP_SLASH,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [429] = 5,
    ACTIONS(71), 1,
      sym_header_name,
    STATE(16), 1,
      aux_sym_request_repeat1,
    STATE(137), 1,
      sym_header,
    ACTIONS(69), 2,
      ts_builtin_sym_end,
      sym__nl,
    ACTIONS(74), 2,
      anon_sym_AT,
      sym_separator,
  [447] = 6,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
    ACTIONS(78), 1,
      sym_header_name,
    ACTIONS(82), 1,
      sym__nl,
    STATE(18), 1,
      aux_sym_request_repeat1,
    STATE(137), 1,
      sym_header,
    ACTIONS(80), 2,
      anon_sym_AT,
      sym_separator,
  [467] = 6,
    ACTIONS(78), 1,
      sym_header_name,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    ACTIONS(89), 1,
      sym__nl,
    STATE(16), 1,
      aux_sym_request_repeat1,
    STATE(137), 1,
      sym_header,
    ACTIONS(87), 2,
      anon_sym_AT,
      sym_separator,
  [487] = 4,
    ACTIONS(94), 1,
      anon_sym_AT,
    ACTIONS(97), 1,
      sym__nl,
    ACTIONS(92), 2,
      ts_builtin_sym_end,
      sym_separator,
    STATE(19), 2,
      sym_variable_declaration,
      aux_sym__block_repeat1,
  [502] = 4,
    ACTIONS(102), 1,
      anon_sym_AT,
    ACTIONS(104), 1,
      sym__nl,
    ACTIONS(100), 2,
      ts_builtin_sym_end,
      sym_separator,
    STATE(21), 2,
      sym_variable_declaration,
      aux_sym__block_repeat1,
  [517] = 4,
    ACTIONS(102), 1,
      anon_sym_AT,
    ACTIONS(109), 1,
      sym__nl,
    ACTIONS(107), 2,
      ts_builtin_sym_end,
      sym_separator,
    STATE(19), 2,
      sym_variable_declaration,
      aux_sym__block_repeat1,
  [532] = 2,
    ACTIONS(114), 1,
      sym__nl,
    ACTIONS(112), 5,
      sym_method,
      anon_sym_AT,
      anon_sym_HTTP_SLASH,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [543] = 4,
    ACTIONS(102), 1,
      anon_sym_AT,
    ACTIONS(118), 1,
      sym__nl,
    ACTIONS(116), 2,
      ts_builtin_sym_end,
      sym_separator,
    STATE(19), 2,
      sym_variable_declaration,
      aux_sym__block_repeat1,
  [558] = 6,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    ACTIONS(123), 1,
      anon_sym_RBRACE,
    ACTIONS(125), 1,
      sym__nl,
    STATE(43), 1,
      sym_json_key_value,
    STATE(124), 1,
      sym__json_key,
    STATE(138), 1,
      sym__key_value_list,
  [577] = 6,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    ACTIONS(127), 1,
      anon_sym_RBRACE,
    ACTIONS(129), 1,
      sym__nl,
    STATE(43), 1,
      sym_json_key_value,
    STATE(122), 1,
      sym__key_value_list,
    STATE(124), 1,
      sym__json_key,
  [596] = 4,
    ACTIONS(102), 1,
      anon_sym_AT,
    ACTIONS(131), 1,
      sym__nl,
    ACTIONS(107), 2,
      ts_builtin_sym_end,
      sym_separator,
    STATE(23), 2,
      sym_variable_declaration,
      aux_sym__block_repeat1,
  [611] = 5,
    ACTIONS(134), 1,
      ts_builtin_sym_end,
    ACTIONS(136), 1,
      sym_separator,
    ACTIONS(138), 1,
      sym__nl,
    STATE(67), 1,
      aux_sym_source_file_repeat1,
    STATE(80), 1,
      aux_sym_source_file_repeat2,
  [627] = 3,
    STATE(28), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(140), 2,
      anon_sym_EQ2,
      anon_sym_DQUOTE,
    ACTIONS(142), 2,
      aux_sym_identifier_token1,
      sym_variable_ref,
  [639] = 5,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    ACTIONS(145), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      sym_json_key_value,
    STATE(112), 1,
      sym__key_value_list,
    STATE(124), 1,
      sym__json_key,
  [655] = 4,
    STATE(57), 1,
      aux_sym_rest_of_line_repeat1,
    STATE(118), 1,
      sym_reason_phrase,
    STATE(132), 1,
      sym_rest_of_line,
    ACTIONS(9), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [669] = 3,
    STATE(28), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(147), 2,
      anon_sym_EQ2,
      anon_sym_DQUOTE,
    ACTIONS(149), 2,
      aux_sym_identifier_token1,
      sym_variable_ref,
  [681] = 5,
    ACTIONS(136), 1,
      sym_separator,
    ACTIONS(151), 1,
      ts_builtin_sym_end,
    ACTIONS(153), 1,
      sym__nl,
    STATE(27), 1,
      aux_sym_source_file_repeat1,
    STATE(88), 1,
      aux_sym_source_file_repeat2,
  [697] = 4,
    ACTIONS(155), 1,
      anon_sym_AMP,
    ACTIONS(159), 1,
      sym__nl,
    STATE(35), 1,
      aux_sym_url_encoded_value_repeat1,
    ACTIONS(157), 2,
      aux_sym_url_encoded_value_token1,
      sym_variable_ref,
  [711] = 4,
    STATE(57), 1,
      aux_sym_rest_of_line_repeat1,
    STATE(105), 1,
      sym_url,
    STATE(120), 1,
      sym_rest_of_line,
    ACTIONS(9), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [725] = 4,
    ACTIONS(161), 1,
      anon_sym_AMP,
    ACTIONS(166), 1,
      sym__nl,
    STATE(35), 1,
      aux_sym_url_encoded_value_repeat1,
    ACTIONS(163), 2,
      aux_sym_url_encoded_value_token1,
      sym_variable_ref,
  [739] = 5,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    ACTIONS(168), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      sym_json_key_value,
    STATE(124), 1,
      sym__json_key,
    STATE(141), 1,
      sym__key_value_list,
  [755] = 2,
    ACTIONS(69), 2,
      ts_builtin_sym_end,
      sym__nl,
    ACTIONS(74), 3,
      sym_header_name,
      anon_sym_AT,
      sym_separator,
  [765] = 1,
    ACTIONS(170), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [772] = 3,
    STATE(57), 1,
      aux_sym_rest_of_line_repeat1,
    STATE(117), 1,
      sym_rest_of_line,
    ACTIONS(9), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [783] = 4,
    ACTIONS(172), 1,
      sym_header_name,
    ACTIONS(174), 1,
      sym__nl,
    STATE(62), 1,
      aux_sym_request_repeat1,
    STATE(133), 1,
      sym_header,
  [796] = 3,
    STATE(31), 1,
      aux_sym_identifier_repeat1,
    STATE(109), 1,
      sym_identifier,
    ACTIONS(176), 2,
      aux_sym_identifier_token1,
      sym_variable_ref,
  [807] = 1,
    ACTIONS(178), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [814] = 4,
    ACTIONS(180), 1,
      anon_sym_COMMA,
    ACTIONS(182), 1,
      anon_sym_RBRACE,
    ACTIONS(184), 1,
      sym__nl,
    STATE(51), 1,
      aux_sym__key_value_list_repeat1,
  [827] = 3,
    ACTIONS(186), 1,
      anon_sym_DQUOTE,
    STATE(54), 1,
      aux_sym_string_repeat1,
    ACTIONS(188), 2,
      aux_sym_string_token1,
      sym_variable_ref,
  [838] = 1,
    ACTIONS(190), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [845] = 1,
    ACTIONS(192), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_separator,
      sym__nl,
  [852] = 3,
    STATE(33), 1,
      aux_sym_url_encoded_value_repeat1,
    STATE(100), 1,
      sym_url_encoded_value,
    ACTIONS(194), 2,
      aux_sym_url_encoded_value_token1,
      sym_variable_ref,
  [863] = 3,
    ACTIONS(199), 1,
      sym__nl,
    STATE(48), 1,
      aux_sym_rest_of_line_repeat1,
    ACTIONS(196), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [874] = 1,
    ACTIONS(170), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [881] = 4,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    ACTIONS(201), 1,
      sym__nl,
    STATE(98), 1,
      sym_json_key_value,
    STATE(124), 1,
      sym__json_key,
  [894] = 4,
    ACTIONS(180), 1,
      anon_sym_COMMA,
    ACTIONS(203), 1,
      anon_sym_RBRACE,
    ACTIONS(205), 1,
      sym__nl,
    STATE(76), 1,
      aux_sym__key_value_list_repeat1,
  [907] = 3,
    STATE(57), 1,
      aux_sym_rest_of_line_repeat1,
    STATE(115), 1,
      sym_rest_of_line,
    ACTIONS(9), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [918] = 1,
    ACTIONS(207), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [925] = 3,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
    STATE(64), 1,
      aux_sym_string_repeat1,
    ACTIONS(211), 2,
      aux_sym_string_token1,
      sym_variable_ref,
  [936] = 1,
    ACTIONS(213), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [943] = 1,
    ACTIONS(213), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [950] = 3,
    ACTIONS(217), 1,
      sym__nl,
    STATE(48), 1,
      aux_sym_rest_of_line_repeat1,
    ACTIONS(215), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [961] = 1,
    ACTIONS(219), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_separator,
      sym__nl,
  [968] = 1,
    ACTIONS(221), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_separator,
      sym__nl,
  [975] = 1,
    ACTIONS(223), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [982] = 1,
    ACTIONS(223), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [989] = 4,
    ACTIONS(172), 1,
      sym_header_name,
    ACTIONS(225), 1,
      sym__nl,
    STATE(71), 1,
      aux_sym_request_repeat1,
    STATE(133), 1,
      sym_header,
  [1002] = 1,
    ACTIONS(227), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [1009] = 3,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    STATE(64), 1,
      aux_sym_string_repeat1,
    ACTIONS(231), 2,
      aux_sym_string_token1,
      sym_variable_ref,
  [1020] = 1,
    ACTIONS(234), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [1027] = 1,
    ACTIONS(234), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [1034] = 3,
    ACTIONS(238), 1,
      sym_separator,
    STATE(67), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(236), 2,
      ts_builtin_sym_end,
      sym__nl,
  [1045] = 1,
    ACTIONS(241), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_separator,
      sym__nl,
  [1052] = 1,
    ACTIONS(243), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [1059] = 1,
    ACTIONS(245), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [1066] = 4,
    ACTIONS(69), 1,
      sym__nl,
    ACTIONS(247), 1,
      sym_header_name,
    STATE(71), 1,
      aux_sym_request_repeat1,
    STATE(133), 1,
      sym_header,
  [1079] = 1,
    ACTIONS(114), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_separator,
      sym__nl,
  [1086] = 3,
    STATE(31), 1,
      aux_sym_identifier_repeat1,
    STATE(139), 1,
      sym_identifier,
    ACTIONS(176), 2,
      aux_sym_identifier_token1,
      sym_variable_ref,
  [1097] = 3,
    STATE(57), 1,
      aux_sym_rest_of_line_repeat1,
    STATE(134), 1,
      sym_rest_of_line,
    ACTIONS(9), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [1108] = 3,
    STATE(31), 1,
      aux_sym_identifier_repeat1,
    STATE(144), 1,
      sym_identifier,
    ACTIONS(176), 2,
      aux_sym_identifier_token1,
      sym_variable_ref,
  [1119] = 3,
    ACTIONS(250), 1,
      anon_sym_COMMA,
    STATE(76), 1,
      aux_sym__key_value_list_repeat1,
    ACTIONS(253), 2,
      anon_sym_RBRACE,
      sym__nl,
  [1130] = 3,
    ACTIONS(255), 1,
      anon_sym_COMMA,
    ACTIONS(257), 1,
      anon_sym_RBRACK,
    STATE(83), 1,
      aux_sym__json_list_values_repeat1,
  [1140] = 1,
    ACTIONS(259), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym__nl,
  [1146] = 3,
    ACTIONS(261), 1,
      anon_sym_AMP,
    ACTIONS(264), 1,
      sym__nl,
    STATE(79), 1,
      aux_sym_url_encoded_body_repeat1,
  [1156] = 3,
    ACTIONS(266), 1,
      ts_builtin_sym_end,
    ACTIONS(268), 1,
      sym__nl,
    STATE(89), 1,
      aux_sym_source_file_repeat2,
  [1166] = 1,
    ACTIONS(236), 3,
      ts_builtin_sym_end,
      sym_separator,
      sym__nl,
  [1172] = 2,
    ACTIONS(272), 1,
      sym__nl,
    ACTIONS(270), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1180] = 3,
    ACTIONS(270), 1,
      anon_sym_RBRACK,
    ACTIONS(274), 1,
      anon_sym_COMMA,
    STATE(83), 1,
      aux_sym__json_list_values_repeat1,
  [1190] = 3,
    ACTIONS(277), 1,
      anon_sym_AMP,
    ACTIONS(279), 1,
      sym__nl,
    STATE(91), 1,
      aux_sym_url_encoded_body_repeat1,
  [1200] = 3,
    ACTIONS(255), 1,
      anon_sym_COMMA,
    ACTIONS(281), 1,
      anon_sym_RBRACK,
    STATE(77), 1,
      aux_sym__json_list_values_repeat1,
  [1210] = 2,
    ACTIONS(285), 1,
      sym__nl,
    ACTIONS(283), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1218] = 3,
    ACTIONS(287), 1,
      sym__identifier,
    STATE(101), 1,
      sym_url_encoded_key_value,
    STATE(136), 1,
      sym_url_encoded_key,
  [1228] = 3,
    ACTIONS(134), 1,
      ts_builtin_sym_end,
    ACTIONS(268), 1,
      sym__nl,
    STATE(89), 1,
      aux_sym_source_file_repeat2,
  [1238] = 3,
    ACTIONS(289), 1,
      ts_builtin_sym_end,
    ACTIONS(291), 1,
      sym__nl,
    STATE(89), 1,
      aux_sym_source_file_repeat2,
  [1248] = 2,
    ACTIONS(294), 1,
      sym__nl,
    ACTIONS(223), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1256] = 3,
    ACTIONS(277), 1,
      anon_sym_AMP,
    ACTIONS(296), 1,
      sym__nl,
    STATE(79), 1,
      aux_sym_url_encoded_body_repeat1,
  [1266] = 3,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    STATE(78), 1,
      sym_json_key_value,
    STATE(124), 1,
      sym__json_key,
  [1276] = 2,
    ACTIONS(298), 1,
      sym__nl,
    ACTIONS(178), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1284] = 2,
    ACTIONS(300), 1,
      sym__nl,
    ACTIONS(190), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1292] = 2,
    ACTIONS(302), 1,
      sym__nl,
    ACTIONS(170), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1300] = 2,
    ACTIONS(304), 1,
      sym__nl,
    ACTIONS(213), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1308] = 2,
    ACTIONS(306), 1,
      sym__nl,
    ACTIONS(234), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1316] = 1,
    ACTIONS(253), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym__nl,
  [1322] = 1,
    ACTIONS(308), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym__nl,
  [1328] = 1,
    ACTIONS(310), 2,
      anon_sym_AMP,
      sym__nl,
  [1333] = 1,
    ACTIONS(264), 2,
      anon_sym_AMP,
      sym__nl,
  [1338] = 1,
    ACTIONS(283), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1343] = 1,
    ACTIONS(69), 2,
      sym_header_name,
      sym__nl,
  [1348] = 1,
    ACTIONS(312), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1353] = 1,
    ACTIONS(314), 1,
      sym__nl,
  [1357] = 1,
    ACTIONS(316), 1,
      sym__nl,
  [1361] = 1,
    ACTIONS(318), 1,
      sym__nl,
  [1365] = 1,
    ACTIONS(320), 1,
      sym__nl,
  [1369] = 1,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
  [1373] = 1,
    ACTIONS(324), 1,
      sym__nl,
  [1377] = 1,
    ACTIONS(326), 1,
      sym__nl,
  [1381] = 1,
    ACTIONS(328), 1,
      anon_sym_RBRACE,
  [1385] = 1,
    ACTIONS(330), 1,
      sym__nl,
  [1389] = 1,
    ACTIONS(203), 1,
      anon_sym_RBRACE,
  [1393] = 1,
    ACTIONS(332), 1,
      sym__nl,
  [1397] = 1,
    ACTIONS(334), 1,
      sym_status_code,
  [1401] = 1,
    ACTIONS(336), 1,
      sym__nl,
  [1405] = 1,
    ACTIONS(338), 1,
      sym__nl,
  [1409] = 1,
    ACTIONS(340), 1,
      sym__nl,
  [1413] = 1,
    ACTIONS(342), 1,
      sym__nl,
  [1417] = 1,
    ACTIONS(344), 1,
      anon_sym_RBRACK,
  [1421] = 1,
    ACTIONS(145), 1,
      anon_sym_RBRACE,
  [1425] = 1,
    ACTIONS(346), 1,
      aux_sym_http_version_token1,
  [1429] = 1,
    ACTIONS(348), 1,
      anon_sym_COLON2,
  [1433] = 1,
    ACTIONS(350), 1,
      anon_sym_RBRACE,
  [1437] = 1,
    ACTIONS(352), 1,
      anon_sym_EQ,
  [1441] = 1,
    ACTIONS(354), 1,
      ts_builtin_sym_end,
  [1445] = 1,
    ACTIONS(356), 1,
      sym__nl,
  [1449] = 1,
    ACTIONS(47), 1,
      anon_sym_RBRACK,
  [1453] = 1,
    ACTIONS(358), 1,
      sym__nl,
  [1457] = 1,
    ACTIONS(360), 1,
      anon_sym_COLON2,
  [1461] = 1,
    ACTIONS(362), 1,
      sym__nl,
  [1465] = 1,
    ACTIONS(364), 1,
      sym__nl,
  [1469] = 1,
    ACTIONS(366), 1,
      sym__nl,
  [1473] = 1,
    ACTIONS(368), 1,
      anon_sym_COLON,
  [1477] = 1,
    ACTIONS(370), 1,
      anon_sym_EQ,
  [1481] = 1,
    ACTIONS(372), 1,
      sym__nl,
  [1485] = 1,
    ACTIONS(168), 1,
      anon_sym_RBRACE,
  [1489] = 1,
    ACTIONS(374), 1,
      anon_sym_EQ2,
  [1493] = 1,
    ACTIONS(49), 1,
      anon_sym_RBRACK,
  [1497] = 1,
    ACTIONS(376), 1,
      anon_sym_RBRACE,
  [1501] = 1,
    ACTIONS(378), 1,
      anon_sym_RBRACK,
  [1505] = 1,
    ACTIONS(380), 1,
      sym__nl,
  [1509] = 1,
    ACTIONS(382), 1,
      anon_sym_EQ2,
  [1513] = 1,
    ACTIONS(384), 1,
      sym_status_code,
  [1517] = 1,
    ACTIONS(386), 1,
      sym__nl,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 46,
  [SMALL_STATE(4)] = 89,
  [SMALL_STATE(5)] = 127,
  [SMALL_STATE(6)] = 165,
  [SMALL_STATE(7)] = 196,
  [SMALL_STATE(8)] = 227,
  [SMALL_STATE(9)] = 255,
  [SMALL_STATE(10)] = 283,
  [SMALL_STATE(11)] = 308,
  [SMALL_STATE(12)] = 338,
  [SMALL_STATE(13)] = 360,
  [SMALL_STATE(14)] = 390,
  [SMALL_STATE(15)] = 412,
  [SMALL_STATE(16)] = 429,
  [SMALL_STATE(17)] = 447,
  [SMALL_STATE(18)] = 467,
  [SMALL_STATE(19)] = 487,
  [SMALL_STATE(20)] = 502,
  [SMALL_STATE(21)] = 517,
  [SMALL_STATE(22)] = 532,
  [SMALL_STATE(23)] = 543,
  [SMALL_STATE(24)] = 558,
  [SMALL_STATE(25)] = 577,
  [SMALL_STATE(26)] = 596,
  [SMALL_STATE(27)] = 611,
  [SMALL_STATE(28)] = 627,
  [SMALL_STATE(29)] = 639,
  [SMALL_STATE(30)] = 655,
  [SMALL_STATE(31)] = 669,
  [SMALL_STATE(32)] = 681,
  [SMALL_STATE(33)] = 697,
  [SMALL_STATE(34)] = 711,
  [SMALL_STATE(35)] = 725,
  [SMALL_STATE(36)] = 739,
  [SMALL_STATE(37)] = 755,
  [SMALL_STATE(38)] = 765,
  [SMALL_STATE(39)] = 772,
  [SMALL_STATE(40)] = 783,
  [SMALL_STATE(41)] = 796,
  [SMALL_STATE(42)] = 807,
  [SMALL_STATE(43)] = 814,
  [SMALL_STATE(44)] = 827,
  [SMALL_STATE(45)] = 838,
  [SMALL_STATE(46)] = 845,
  [SMALL_STATE(47)] = 852,
  [SMALL_STATE(48)] = 863,
  [SMALL_STATE(49)] = 874,
  [SMALL_STATE(50)] = 881,
  [SMALL_STATE(51)] = 894,
  [SMALL_STATE(52)] = 907,
  [SMALL_STATE(53)] = 918,
  [SMALL_STATE(54)] = 925,
  [SMALL_STATE(55)] = 936,
  [SMALL_STATE(56)] = 943,
  [SMALL_STATE(57)] = 950,
  [SMALL_STATE(58)] = 961,
  [SMALL_STATE(59)] = 968,
  [SMALL_STATE(60)] = 975,
  [SMALL_STATE(61)] = 982,
  [SMALL_STATE(62)] = 989,
  [SMALL_STATE(63)] = 1002,
  [SMALL_STATE(64)] = 1009,
  [SMALL_STATE(65)] = 1020,
  [SMALL_STATE(66)] = 1027,
  [SMALL_STATE(67)] = 1034,
  [SMALL_STATE(68)] = 1045,
  [SMALL_STATE(69)] = 1052,
  [SMALL_STATE(70)] = 1059,
  [SMALL_STATE(71)] = 1066,
  [SMALL_STATE(72)] = 1079,
  [SMALL_STATE(73)] = 1086,
  [SMALL_STATE(74)] = 1097,
  [SMALL_STATE(75)] = 1108,
  [SMALL_STATE(76)] = 1119,
  [SMALL_STATE(77)] = 1130,
  [SMALL_STATE(78)] = 1140,
  [SMALL_STATE(79)] = 1146,
  [SMALL_STATE(80)] = 1156,
  [SMALL_STATE(81)] = 1166,
  [SMALL_STATE(82)] = 1172,
  [SMALL_STATE(83)] = 1180,
  [SMALL_STATE(84)] = 1190,
  [SMALL_STATE(85)] = 1200,
  [SMALL_STATE(86)] = 1210,
  [SMALL_STATE(87)] = 1218,
  [SMALL_STATE(88)] = 1228,
  [SMALL_STATE(89)] = 1238,
  [SMALL_STATE(90)] = 1248,
  [SMALL_STATE(91)] = 1256,
  [SMALL_STATE(92)] = 1266,
  [SMALL_STATE(93)] = 1276,
  [SMALL_STATE(94)] = 1284,
  [SMALL_STATE(95)] = 1292,
  [SMALL_STATE(96)] = 1300,
  [SMALL_STATE(97)] = 1308,
  [SMALL_STATE(98)] = 1316,
  [SMALL_STATE(99)] = 1322,
  [SMALL_STATE(100)] = 1328,
  [SMALL_STATE(101)] = 1333,
  [SMALL_STATE(102)] = 1338,
  [SMALL_STATE(103)] = 1343,
  [SMALL_STATE(104)] = 1348,
  [SMALL_STATE(105)] = 1353,
  [SMALL_STATE(106)] = 1357,
  [SMALL_STATE(107)] = 1361,
  [SMALL_STATE(108)] = 1365,
  [SMALL_STATE(109)] = 1369,
  [SMALL_STATE(110)] = 1373,
  [SMALL_STATE(111)] = 1377,
  [SMALL_STATE(112)] = 1381,
  [SMALL_STATE(113)] = 1385,
  [SMALL_STATE(114)] = 1389,
  [SMALL_STATE(115)] = 1393,
  [SMALL_STATE(116)] = 1397,
  [SMALL_STATE(117)] = 1401,
  [SMALL_STATE(118)] = 1405,
  [SMALL_STATE(119)] = 1409,
  [SMALL_STATE(120)] = 1413,
  [SMALL_STATE(121)] = 1417,
  [SMALL_STATE(122)] = 1421,
  [SMALL_STATE(123)] = 1425,
  [SMALL_STATE(124)] = 1429,
  [SMALL_STATE(125)] = 1433,
  [SMALL_STATE(126)] = 1437,
  [SMALL_STATE(127)] = 1441,
  [SMALL_STATE(128)] = 1445,
  [SMALL_STATE(129)] = 1449,
  [SMALL_STATE(130)] = 1453,
  [SMALL_STATE(131)] = 1457,
  [SMALL_STATE(132)] = 1461,
  [SMALL_STATE(133)] = 1465,
  [SMALL_STATE(134)] = 1469,
  [SMALL_STATE(135)] = 1473,
  [SMALL_STATE(136)] = 1477,
  [SMALL_STATE(137)] = 1481,
  [SMALL_STATE(138)] = 1485,
  [SMALL_STATE(139)] = 1489,
  [SMALL_STATE(140)] = 1493,
  [SMALL_STATE(141)] = 1497,
  [SMALL_STATE(142)] = 1501,
  [SMALL_STATE(143)] = 1505,
  [SMALL_STATE(144)] = 1509,
  [SMALL_STATE(145)] = 1513,
  [SMALL_STATE(146)] = 1517,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 3, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 3, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 4, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 4, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__block_repeat1, 2, 0, 0),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 2, 0, 0),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_request, 2, 0, 0), SHIFT(11),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3, 0, 0),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_request, 3, 0, 0), SHIFT(13),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2, 0, 0),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block, 1, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__block, 1, 0, 0), SHIFT(21),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block, 2, 0, 0),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__block, 2, 0, 0), SHIFT(19),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 5, 0, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, 0, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block, 3, 0, 0),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__block, 3, 0, 0), SHIFT(19),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__block, 2, 0, 0), SHIFT(23),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2, 0, 0),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url_encoded_value, 1, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encoded_value, 1, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_url_encoded_value_repeat1, 2, 0, 0),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_url_encoded_value_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_url_encoded_value_repeat1, 2, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 3, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 2, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value_list, 1, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_list, 2, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rest_of_line_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rest_of_line_repeat1, 2, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value_list, 2, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_list, 3, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest_of_line, 1, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 6, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 4, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [231] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_list, 4, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 7, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 5, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_list, 5, 0, 0),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__key_value_list_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__key_value_list_repeat1, 2, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_list_values, 2, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__key_value_list_repeat1, 3, 0, 0),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_url_encoded_body_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_url_encoded_body_repeat1, 2, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 2, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encoded_body, 1, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_list_values, 1, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 3, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(89),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encoded_body, 2, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_key_value, 3, 0, 3),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encoded_key_value, 3, 0, 3),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 4, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_line, 2, 0, 0),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_line, 1, 0, 0),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, 0, 2),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response_start_line, 3, 0, 0),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1, 0, 0),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1, 0, 0),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value_list, 3, 0, 0),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encoded_key, 1, 0, 0),
  [354] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_key, 3, 0, 0),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reason_phrase, 1, 0, 0),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 1, 0, 0),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_version, 2, 0, 0),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
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
