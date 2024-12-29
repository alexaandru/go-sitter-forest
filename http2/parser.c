#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 139
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 69
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
  aux_sym__key_value_list_repeat2 = 64,
  aux_sym__json_list_values_repeat1 = 65,
  aux_sym_identifier_repeat1 = 66,
  aux_sym_string_repeat1 = 67,
  aux_sym_rest_of_line_repeat1 = 68,
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
  [aux_sym__key_value_list_repeat2] = "_key_value_list_repeat2",
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
  [aux_sym__key_value_list_repeat2] = aux_sym__key_value_list_repeat2,
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
  [aux_sym__key_value_list_repeat2] = {
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
  [22] = 17,
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
  [71] = 53,
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
  [84] = 21,
  [85] = 27,
  [86] = 60,
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
  [104] = 44,
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
  [133] = 121,
  [134] = 108,
  [135] = 135,
  [136] = 127,
  [137] = 137,
  [138] = 138,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(75);
      if (lookahead == ' ') SKIP(71);
      if (lookahead == '"') ADVANCE(105);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '&') ADVANCE(90);
      if (lookahead == ',') ADVANCE(103);
      if (lookahead == '.') ADVANCE(115);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == '=') ADVANCE(91);
      if (lookahead == '@') ADVANCE(96);
      if (lookahead == 'C') ADVANCE(115);
      if (lookahead == 'D') ADVANCE(115);
      if (lookahead == 'G') ADVANCE(115);
      if (lookahead == 'H') ADVANCE(115);
      if (lookahead == 'L') ADVANCE(115);
      if (lookahead == 'O') ADVANCE(115);
      if (lookahead == 'P') ADVANCE(115);
      if (lookahead == 'T') ADVANCE(115);
      if (lookahead == '[') ADVANCE(109);
      if (lookahead == ']') ADVANCE(110);
      if (lookahead == 'f') ADVANCE(115);
      if (lookahead == 'n') ADVANCE(115);
      if (lookahead == 't') ADVANCE(115);
      if (lookahead == '{') ADVANCE(107);
      if (lookahead == '}') ADVANCE(108);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == '#') ADVANCE(86);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == '#') ADVANCE(83);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == ' ') ADVANCE(87);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == '[') ADVANCE(109);
      if (lookahead == '{') ADVANCE(106);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == ' ') ADVANCE(88);
      if (lookahead == '#') ADVANCE(86);
      if (lookahead == '[') ADVANCE(109);
      if (lookahead == '{') ADVANCE(106);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '#') ADVANCE(86);
      if (lookahead != 0) ADVANCE(84);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        ' ', 125,
        '@', 96,
        'C', 134,
        'D', 130,
        'G', 131,
        'H', 132,
        'L', 133,
        'O', 135,
        'P', 129,
        'T', 136,
        '{', 137,
        '\n', 138,
        '\r', 138,
      );
      if (lookahead != 0) ADVANCE(124);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == '[') ADVANCE(109);
      if (lookahead == '{') ADVANCE(106);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 9:
      if (lookahead == ' ') SKIP(10);
      if (lookahead == '"') ADVANCE(105);
      if (lookahead == ',') ADVANCE(103);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == '=') ADVANCE(91);
      if (lookahead == '[') ADVANCE(109);
      if (lookahead == ']') ADVANCE(110);
      if (lookahead == 'f') ADVANCE(55);
      if (lookahead == 'n') ADVANCE(63);
      if (lookahead == 't') ADVANCE(60);
      if (lookahead == '{') ADVANCE(107);
      if (lookahead == '}') ADVANCE(108);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 10:
      if (lookahead == ' ') SKIP(10);
      if (lookahead == '"') ADVANCE(105);
      if (lookahead == ',') ADVANCE(103);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == '=') ADVANCE(91);
      if (lookahead == '[') ADVANCE(109);
      if (lookahead == ']') ADVANCE(110);
      if (lookahead == 'f') ADVANCE(55);
      if (lookahead == 'n') ADVANCE(63);
      if (lookahead == 't') ADVANCE(60);
      if (lookahead == '{') ADVANCE(107);
      if (lookahead == '}') ADVANCE(108);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(12);
      if (lookahead == '[') ADVANCE(109);
      if (lookahead == '{') ADVANCE(106);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(28);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == '[') ADVANCE(109);
      if (lookahead == '{') ADVANCE(106);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 13:
      if (lookahead == ' ') SKIP(13);
      if (lookahead == '"') ADVANCE(105);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == '=') ADVANCE(102);
      if (lookahead == '{') ADVANCE(64);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == '{') ADVANCE(137);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      if (lookahead != 0) ADVANCE(124);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead == '&') ADVANCE(90);
      if (lookahead == '{') ADVANCE(95);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      if (lookahead != 0) ADVANCE(92);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(94);
      if (lookahead == '{') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '&') ADVANCE(92);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(79);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(82);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(120);
      if (lookahead == '"') ADVANCE(105);
      if (lookahead == '{') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(119);
      END_STATE();
    case 19:
      if (lookahead == ' ') SKIP(19);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 20:
      if (lookahead == ' ') SKIP(20);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 21:
      if (lookahead == ' ') SKIP(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(24);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '@') ADVANCE(100);
      if (lookahead == '[') ADVANCE(109);
      if (lookahead == '{') ADVANCE(106);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead != 0) ADVANCE(68);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead == '[') ADVANCE(109);
      if (lookahead == '{') ADVANCE(106);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(69);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '@') ADVANCE(98);
      if (lookahead == '[') ADVANCE(109);
      if (lookahead == '{') ADVANCE(106);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(11);
      if (lookahead == '[') ADVANCE(109);
      if (lookahead == '{') ADVANCE(106);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(68);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(111);
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
      if (lookahead == '/') ADVANCE(112);
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
      if (lookahead == 'D') ADVANCE(76);
      END_STATE();
    case 37:
      if (lookahead == 'E') ADVANCE(76);
      END_STATE();
    case 38:
      if (lookahead == 'E') ADVANCE(33);
      END_STATE();
    case 39:
      if (lookahead == 'E') ADVANCE(54);
      END_STATE();
    case 40:
      if (lookahead == 'H') ADVANCE(76);
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
      if (lookahead == 'S') ADVANCE(76);
      END_STATE();
    case 50:
      if (lookahead == 'T') ADVANCE(76);
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
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(122);
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
      if (lookahead == '}') ADVANCE(123);
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
      if (eof) ADVANCE(75);
      if (lookahead == ' ') SKIP(71);
      if (lookahead == '"') ADVANCE(105);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '&') ADVANCE(90);
      if (lookahead == ',') ADVANCE(103);
      if (lookahead == '.') ADVANCE(115);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == '=') ADVANCE(91);
      if (lookahead == '@') ADVANCE(96);
      if (lookahead == 'C') ADVANCE(115);
      if (lookahead == 'D') ADVANCE(115);
      if (lookahead == 'G') ADVANCE(115);
      if (lookahead == 'H') ADVANCE(115);
      if (lookahead == 'L') ADVANCE(115);
      if (lookahead == 'O') ADVANCE(115);
      if (lookahead == 'P') ADVANCE(115);
      if (lookahead == 'T') ADVANCE(115);
      if (lookahead == '[') ADVANCE(109);
      if (lookahead == ']') ADVANCE(110);
      if (lookahead == 'f') ADVANCE(115);
      if (lookahead == 'n') ADVANCE(115);
      if (lookahead == 't') ADVANCE(115);
      if (lookahead == '{') ADVANCE(107);
      if (lookahead == '}') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 72:
      if (eof) ADVANCE(75);
      ADVANCE_MAP(
        ' ', 126,
        '#', 128,
        '@', 96,
        'C', 134,
        'D', 130,
        'G', 131,
        'H', 132,
        'L', 133,
        'O', 135,
        'P', 129,
        'T', 136,
        '{', 137,
        '\n', 138,
        '\r', 138,
      );
      if (lookahead != 0) ADVANCE(124);
      END_STATE();
    case 73:
      if (eof) ADVANCE(75);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '@') ADVANCE(101);
      if (lookahead == '[') ADVANCE(109);
      if (lookahead == '{') ADVANCE(106);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(139);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead != 0) ADVANCE(69);
      END_STATE();
    case 74:
      if (eof) ADVANCE(75);
      if (lookahead == ' ') ADVANCE(78);
      if (lookahead == '#') ADVANCE(81);
      if (lookahead == '@') ADVANCE(99);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(82);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_method);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == ' ') ADVANCE(78);
      if (lookahead == '#') ADVANCE(81);
      if (lookahead == '@') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(82);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == ' ') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(82);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '#') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(82);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '#') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == '#') ADVANCE(111);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == '#') ADVANCE(86);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == '#') ADVANCE(83);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == ' ') ADVANCE(87);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == '[') ADVANCE(109);
      if (lookahead == '{') ADVANCE(106);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == ' ') ADVANCE(88);
      if (lookahead == '#') ADVANCE(86);
      if (lookahead == '[') ADVANCE(109);
      if (lookahead == '{') ADVANCE(106);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '#') ADVANCE(86);
      if (lookahead != 0) ADVANCE(84);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_url_encoded_value_token1);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_url_encoded_value_token1);
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead == '&') ADVANCE(90);
      if (lookahead == '{') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(92);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_url_encoded_value_token1);
      if (lookahead == ' ') ADVANCE(94);
      if (lookahead == '{') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '&') ADVANCE(92);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_url_encoded_value_token1);
      if (lookahead == '{') ADVANCE(65);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '#') ADVANCE(86);
      if (lookahead != 0) ADVANCE(84);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '#') ADVANCE(3);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(82);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(27);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(67);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(65);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_separator);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_http_version_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_status_code);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == ' ') ADVANCE(120);
      if (lookahead == '{') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(119);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '{') ADVANCE(65);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_variable_ref);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      ADVANCE_MAP(
        ' ', 125,
        '@', 96,
        'C', 134,
        'D', 130,
        'G', 131,
        'H', 132,
        'L', 133,
        'O', 135,
        'P', 129,
        'T', 136,
        '{', 137,
      );
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(124);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      ADVANCE_MAP(
        ' ', 126,
        '#', 128,
        '@', 96,
        'C', 134,
        'D', 130,
        'G', 131,
        'H', 132,
        'L', 133,
        'O', 135,
        'P', 129,
        'T', 136,
        '{', 137,
      );
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(124);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == '{') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(124);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == '#') ADVANCE(26);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == 'A') ADVANCE(53);
      if (lookahead == 'O') ADVANCE(48);
      if (lookahead == 'U') ADVANCE(50);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == 'E') ADVANCE(42);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == 'E') ADVANCE(50);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == 'E') ADVANCE(31);
      if (lookahead == 'T') ADVANCE(51);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == 'I') ADVANCE(48);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == 'O') ADVANCE(43);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == 'P') ADVANCE(52);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == 'R') ADVANCE(32);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == '{') ADVANCE(65);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__nl);
      END_STATE();
    case 139:
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
  [2] = {.lex_state = 72},
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 73},
  [6] = {.lex_state = 73},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 9},
  [11] = {.lex_state = 9},
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 23},
  [15] = {.lex_state = 23},
  [16] = {.lex_state = 9},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 74},
  [19] = {.lex_state = 74},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 74},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 13},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 13},
  [36] = {.lex_state = 14},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 15},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 74},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 15},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 14},
  [52] = {.lex_state = 16},
  [53] = {.lex_state = 13},
  [54] = {.lex_state = 17},
  [55] = {.lex_state = 13},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 14},
  [58] = {.lex_state = 18},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 14},
  [61] = {.lex_state = 14},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 18},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 13},
  [72] = {.lex_state = 17},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 18},
  [78] = {.lex_state = 14},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 17},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 14},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 19},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 17},
  [105] = {.lex_state = 20},
  [106] = {.lex_state = 21},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 9},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 9},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 9},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 13},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 9},
  [131] = {.lex_state = 21},
  [132] = {.lex_state = 13},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 13},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
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
    [sym_source_file] = STATE(118),
    [sym__block] = STATE(50),
    [sym_request] = STATE(26),
    [sym_response] = STATE(26),
    [sym_start_line] = STATE(116),
    [sym_url] = STATE(107),
    [sym_variable_declaration] = STATE(4),
    [sym_response_start_line] = STATE(119),
    [sym_http_version] = STATE(131),
    [sym_rest_of_line] = STATE(137),
    [aux_sym__block_repeat1] = STATE(4),
    [aux_sym_rest_of_line_repeat1] = STATE(61),
    [sym_method] = ACTIONS(3),
    [anon_sym_AT] = ACTIONS(5),
    [anon_sym_HTTP_SLASH] = ACTIONS(7),
    [sym_variable_ref] = ACTIONS(9),
    [aux_sym_rest_of_line_token1] = ACTIONS(9),
    [sym__nl] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(7), 1,
      anon_sym_HTTP_SLASH,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      sym_separator,
    ACTIONS(17), 1,
      sym__nl,
    STATE(61), 1,
      aux_sym_rest_of_line_repeat1,
    STATE(92), 1,
      sym__block,
    STATE(107), 1,
      sym_url,
    STATE(116), 1,
      sym_start_line,
    STATE(119), 1,
      sym_response_start_line,
    STATE(131), 1,
      sym_http_version,
    STATE(137), 1,
      sym_rest_of_line,
    ACTIONS(9), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
    STATE(4), 2,
      sym_variable_declaration,
      aux_sym__block_repeat1,
    STATE(26), 2,
      sym_request,
      sym_response,
  [52] = 14,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(7), 1,
      anon_sym_HTTP_SLASH,
    ACTIONS(11), 1,
      sym__nl,
    STATE(61), 1,
      aux_sym_rest_of_line_repeat1,
    STATE(92), 1,
      sym__block,
    STATE(107), 1,
      sym_url,
    STATE(116), 1,
      sym_start_line,
    STATE(119), 1,
      sym_response_start_line,
    STATE(131), 1,
      sym_http_version,
    STATE(137), 1,
      sym_rest_of_line,
    ACTIONS(9), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
    STATE(4), 2,
      sym_variable_declaration,
      aux_sym__block_repeat1,
    STATE(26), 2,
      sym_request,
      sym_response,
  [98] = 13,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(7), 1,
      anon_sym_HTTP_SLASH,
    ACTIONS(20), 1,
      sym__nl,
    STATE(61), 1,
      aux_sym_rest_of_line_repeat1,
    STATE(107), 1,
      sym_url,
    STATE(116), 1,
      sym_start_line,
    STATE(119), 1,
      sym_response_start_line,
    STATE(131), 1,
      sym_http_version,
    STATE(137), 1,
      sym_rest_of_line,
    ACTIONS(9), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
    STATE(17), 2,
      sym_variable_declaration,
      aux_sym__block_repeat1,
    STATE(23), 2,
      sym_request,
      sym_response,
  [141] = 11,
    ACTIONS(22), 1,
      ts_builtin_sym_end,
    ACTIONS(24), 1,
      sym_raw_body,
    ACTIONS(28), 1,
      anon_sym_LBRACE,
    ACTIONS(30), 1,
      anon_sym_LBRACK,
    ACTIONS(32), 1,
      sym__identifier,
    STATE(101), 1,
      sym_url_encoded_key_value,
    STATE(113), 1,
      sym_body,
    STATE(130), 1,
      sym_url_encoded_key,
    STATE(111), 2,
      sym_json_object,
      sym_json_list,
    STATE(115), 2,
      sym_url_encoded_body,
      sym_json_body,
    ACTIONS(26), 3,
      anon_sym_AT,
      sym_separator,
      sym__nl,
  [179] = 11,
    ACTIONS(24), 1,
      sym_raw_body,
    ACTIONS(28), 1,
      anon_sym_LBRACE,
    ACTIONS(30), 1,
      anon_sym_LBRACK,
    ACTIONS(32), 1,
      sym__identifier,
    ACTIONS(34), 1,
      ts_builtin_sym_end,
    STATE(101), 1,
      sym_url_encoded_key_value,
    STATE(126), 1,
      sym_body,
    STATE(130), 1,
      sym_url_encoded_key,
    STATE(111), 2,
      sym_json_object,
      sym_json_list,
    STATE(115), 2,
      sym_url_encoded_body,
      sym_json_body,
    ACTIONS(36), 3,
      anon_sym_AT,
      sym_separator,
      sym__nl,
  [217] = 9,
    ACTIONS(28), 1,
      anon_sym_LBRACE,
    ACTIONS(38), 1,
      anon_sym_DQUOTE,
    ACTIONS(40), 1,
      anon_sym_LBRACK,
    ACTIONS(42), 1,
      anon_sym_RBRACK,
    ACTIONS(46), 1,
      sym__nl,
    STATE(8), 1,
      aux_sym__key_value_list_repeat1,
    STATE(138), 1,
      sym__json_list_values,
    ACTIONS(44), 4,
      sym_number,
      sym_boolean,
      sym_null,
      sym_variable_ref,
    STATE(45), 4,
      sym__json_value,
      sym_json_object,
      sym_json_list,
      sym_string,
  [251] = 8,
    ACTIONS(28), 1,
      anon_sym_LBRACE,
    ACTIONS(38), 1,
      anon_sym_DQUOTE,
    ACTIONS(40), 1,
      anon_sym_LBRACK,
    ACTIONS(48), 1,
      anon_sym_RBRACK,
    ACTIONS(52), 1,
      sym__nl,
    STATE(13), 1,
      aux_sym__key_value_list_repeat1,
    ACTIONS(50), 4,
      sym_number,
      sym_boolean,
      sym_null,
      sym_variable_ref,
    STATE(38), 4,
      sym__json_value,
      sym_json_object,
      sym_json_list,
      sym_string,
  [282] = 7,
    ACTIONS(28), 1,
      anon_sym_LBRACE,
    ACTIONS(38), 1,
      anon_sym_DQUOTE,
    ACTIONS(40), 1,
      anon_sym_LBRACK,
    ACTIONS(56), 1,
      sym__nl,
    STATE(10), 1,
      aux_sym__key_value_list_repeat1,
    ACTIONS(54), 4,
      sym_number,
      sym_boolean,
      sym_null,
      sym_variable_ref,
    STATE(88), 4,
      sym__json_value,
      sym_json_object,
      sym_json_list,
      sym_string,
  [310] = 7,
    ACTIONS(28), 1,
      anon_sym_LBRACE,
    ACTIONS(38), 1,
      anon_sym_DQUOTE,
    ACTIONS(40), 1,
      anon_sym_LBRACK,
    ACTIONS(52), 1,
      sym__nl,
    STATE(13), 1,
      aux_sym__key_value_list_repeat1,
    ACTIONS(58), 4,
      sym_number,
      sym_boolean,
      sym_null,
      sym_variable_ref,
    STATE(98), 4,
      sym__json_value,
      sym_json_object,
      sym_json_list,
      sym_string,
  [338] = 7,
    ACTIONS(28), 1,
      anon_sym_LBRACE,
    ACTIONS(38), 1,
      anon_sym_DQUOTE,
    ACTIONS(40), 1,
      anon_sym_LBRACK,
    ACTIONS(60), 1,
      sym__nl,
    STATE(12), 1,
      aux_sym__key_value_list_repeat1,
    ACTIONS(58), 4,
      sym_number,
      sym_boolean,
      sym_null,
      sym_variable_ref,
    STATE(98), 4,
      sym__json_value,
      sym_json_object,
      sym_json_list,
      sym_string,
  [366] = 7,
    ACTIONS(28), 1,
      anon_sym_LBRACE,
    ACTIONS(38), 1,
      anon_sym_DQUOTE,
    ACTIONS(40), 1,
      anon_sym_LBRACK,
    ACTIONS(52), 1,
      sym__nl,
    STATE(13), 1,
      aux_sym__key_value_list_repeat1,
    ACTIONS(62), 4,
      sym_number,
      sym_boolean,
      sym_null,
      sym_variable_ref,
    STATE(100), 4,
      sym__json_value,
      sym_json_object,
      sym_json_list,
      sym_string,
  [394] = 4,
    ACTIONS(66), 1,
      anon_sym_LBRACE,
    ACTIONS(68), 1,
      sym__nl,
    STATE(13), 1,
      aux_sym__key_value_list_repeat1,
    ACTIONS(64), 9,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_number,
      sym_boolean,
      sym_null,
      sym_variable_ref,
  [415] = 9,
    ACTIONS(24), 1,
      sym_raw_body,
    ACTIONS(28), 1,
      anon_sym_LBRACE,
    ACTIONS(30), 1,
      anon_sym_LBRACK,
    ACTIONS(32), 1,
      sym__identifier,
    STATE(101), 1,
      sym_url_encoded_key_value,
    STATE(124), 1,
      sym_body,
    STATE(130), 1,
      sym_url_encoded_key,
    STATE(111), 2,
      sym_json_object,
      sym_json_list,
    STATE(115), 2,
      sym_url_encoded_body,
      sym_json_body,
  [445] = 9,
    ACTIONS(24), 1,
      sym_raw_body,
    ACTIONS(28), 1,
      anon_sym_LBRACE,
    ACTIONS(30), 1,
      anon_sym_LBRACK,
    ACTIONS(32), 1,
      sym__identifier,
    STATE(101), 1,
      sym_url_encoded_key_value,
    STATE(109), 1,
      sym_body,
    STATE(130), 1,
      sym_url_encoded_key,
    STATE(111), 2,
      sym_json_object,
      sym_json_list,
    STATE(115), 2,
      sym_url_encoded_body,
      sym_json_body,
  [475] = 5,
    ACTIONS(28), 1,
      anon_sym_LBRACE,
    ACTIONS(38), 1,
      anon_sym_DQUOTE,
    ACTIONS(40), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 4,
      sym_number,
      sym_boolean,
      sym_null,
      sym_variable_ref,
    STATE(97), 4,
      sym__json_value,
      sym_json_object,
      sym_json_list,
      sym_string,
  [497] = 4,
    ACTIONS(75), 1,
      anon_sym_AT,
    ACTIONS(78), 1,
      sym__nl,
    STATE(17), 2,
      sym_variable_declaration,
      aux_sym__block_repeat1,
    ACTIONS(73), 4,
      sym_method,
      anon_sym_HTTP_SLASH,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [514] = 6,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    ACTIONS(83), 1,
      sym_header_name,
    ACTIONS(87), 1,
      sym__nl,
    STATE(21), 1,
      aux_sym_request_repeat1,
    STATE(121), 1,
      sym_header,
    ACTIONS(85), 2,
      anon_sym_AT,
      sym_separator,
  [534] = 6,
    ACTIONS(83), 1,
      sym_header_name,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    ACTIONS(94), 1,
      sym__nl,
    STATE(18), 1,
      aux_sym_request_repeat1,
    STATE(121), 1,
      sym_header,
    ACTIONS(92), 2,
      anon_sym_AT,
      sym_separator,
  [554] = 7,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    ACTIONS(101), 1,
      sym__nl,
    STATE(28), 1,
      aux_sym__key_value_list_repeat1,
    STATE(29), 1,
      sym_json_key_value,
    STATE(117), 1,
      sym__key_value_list,
    STATE(122), 1,
      sym__json_key,
  [576] = 5,
    ACTIONS(105), 1,
      sym_header_name,
    STATE(21), 1,
      aux_sym_request_repeat1,
    STATE(121), 1,
      sym_header,
    ACTIONS(103), 2,
      ts_builtin_sym_end,
      sym__nl,
    ACTIONS(108), 2,
      anon_sym_AT,
      sym_separator,
  [594] = 4,
    ACTIONS(112), 1,
      anon_sym_AT,
    ACTIONS(115), 1,
      sym__nl,
    ACTIONS(110), 2,
      ts_builtin_sym_end,
      sym_separator,
    STATE(22), 2,
      sym_variable_declaration,
      aux_sym__block_repeat1,
  [609] = 4,
    ACTIONS(120), 1,
      anon_sym_AT,
    ACTIONS(122), 1,
      sym__nl,
    ACTIONS(118), 2,
      ts_builtin_sym_end,
      sym_separator,
    STATE(25), 2,
      sym_variable_declaration,
      aux_sym__block_repeat1,
  [624] = 4,
    ACTIONS(120), 1,
      anon_sym_AT,
    ACTIONS(125), 1,
      sym__nl,
    ACTIONS(118), 2,
      ts_builtin_sym_end,
      sym_separator,
    STATE(22), 2,
      sym_variable_declaration,
      aux_sym__block_repeat1,
  [639] = 4,
    ACTIONS(120), 1,
      anon_sym_AT,
    ACTIONS(130), 1,
      sym__nl,
    ACTIONS(128), 2,
      ts_builtin_sym_end,
      sym_separator,
    STATE(22), 2,
      sym_variable_declaration,
      aux_sym__block_repeat1,
  [654] = 4,
    ACTIONS(120), 1,
      anon_sym_AT,
    ACTIONS(135), 1,
      sym__nl,
    ACTIONS(133), 2,
      ts_builtin_sym_end,
      sym_separator,
    STATE(24), 2,
      sym_variable_declaration,
      aux_sym__block_repeat1,
  [669] = 2,
    ACTIONS(140), 1,
      sym__nl,
    ACTIONS(138), 5,
      sym_method,
      anon_sym_AT,
      anon_sym_HTTP_SLASH,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [680] = 6,
    ACTIONS(52), 1,
      sym__nl,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    ACTIONS(142), 1,
      anon_sym_RBRACE,
    STATE(13), 1,
      aux_sym__key_value_list_repeat1,
    STATE(34), 1,
      sym_json_key_value,
    STATE(122), 1,
      sym__json_key,
  [699] = 5,
    ACTIONS(144), 1,
      anon_sym_COMMA,
    ACTIONS(146), 1,
      anon_sym_RBRACE,
    ACTIONS(148), 1,
      sym__nl,
    STATE(32), 1,
      aux_sym__key_value_list_repeat2,
    STATE(65), 1,
      aux_sym__key_value_list_repeat1,
  [715] = 5,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    ACTIONS(152), 1,
      sym_separator,
    ACTIONS(154), 1,
      sym__nl,
    STATE(64), 1,
      aux_sym_source_file_repeat1,
    STATE(66), 1,
      aux_sym_source_file_repeat2,
  [731] = 5,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    ACTIONS(156), 1,
      sym__nl,
    STATE(40), 1,
      aux_sym__key_value_list_repeat1,
    STATE(95), 1,
      sym_json_key_value,
    STATE(122), 1,
      sym__json_key,
  [747] = 5,
    ACTIONS(144), 1,
      anon_sym_COMMA,
    ACTIONS(158), 1,
      anon_sym_RBRACE,
    ACTIONS(160), 1,
      sym__nl,
    STATE(42), 1,
      aux_sym__key_value_list_repeat2,
    STATE(75), 1,
      aux_sym__key_value_list_repeat1,
  [763] = 3,
    STATE(35), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(162), 2,
      anon_sym_EQ2,
      anon_sym_DQUOTE,
    ACTIONS(164), 2,
      aux_sym_identifier_token1,
      sym_variable_ref,
  [775] = 5,
    ACTIONS(144), 1,
      anon_sym_COMMA,
    ACTIONS(158), 1,
      anon_sym_RBRACE,
    ACTIONS(160), 1,
      sym__nl,
    STATE(43), 1,
      aux_sym__key_value_list_repeat2,
    STATE(75), 1,
      aux_sym__key_value_list_repeat1,
  [791] = 3,
    STATE(35), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(166), 2,
      anon_sym_EQ2,
      anon_sym_DQUOTE,
    ACTIONS(168), 2,
      aux_sym_identifier_token1,
      sym_variable_ref,
  [803] = 4,
    STATE(61), 1,
      aux_sym_rest_of_line_repeat1,
    STATE(135), 1,
      sym_url,
    STATE(137), 1,
      sym_rest_of_line,
    ACTIONS(9), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [817] = 5,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(173), 1,
      anon_sym_RBRACK,
    ACTIONS(175), 1,
      sym__nl,
    STATE(46), 1,
      aux_sym__json_list_values_repeat1,
    STATE(79), 1,
      aux_sym__key_value_list_repeat1,
  [833] = 5,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(173), 1,
      anon_sym_RBRACK,
    ACTIONS(175), 1,
      sym__nl,
    STATE(47), 1,
      aux_sym__json_list_values_repeat1,
    STATE(79), 1,
      aux_sym__key_value_list_repeat1,
  [849] = 4,
    ACTIONS(177), 1,
      anon_sym_AMP,
    ACTIONS(181), 1,
      sym__nl,
    STATE(48), 1,
      aux_sym_url_encoded_value_repeat1,
    ACTIONS(179), 2,
      aux_sym_url_encoded_value_token1,
      sym_variable_ref,
  [863] = 5,
    ACTIONS(52), 1,
      sym__nl,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    STATE(13), 1,
      aux_sym__key_value_list_repeat1,
    STATE(96), 1,
      sym_json_key_value,
    STATE(122), 1,
      sym__json_key,
  [879] = 5,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      sym__nl,
    STATE(49), 1,
      aux_sym__key_value_list_repeat1,
    STATE(96), 1,
      sym_json_key_value,
    STATE(122), 1,
      sym__json_key,
  [895] = 5,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    ACTIONS(188), 1,
      anon_sym_RBRACE,
    ACTIONS(190), 1,
      sym__nl,
    STATE(42), 1,
      aux_sym__key_value_list_repeat2,
    STATE(90), 1,
      aux_sym__key_value_list_repeat1,
  [911] = 5,
    ACTIONS(144), 1,
      anon_sym_COMMA,
    ACTIONS(193), 1,
      anon_sym_RBRACE,
    ACTIONS(195), 1,
      sym__nl,
    STATE(42), 1,
      aux_sym__key_value_list_repeat2,
    STATE(82), 1,
      aux_sym__key_value_list_repeat1,
  [927] = 2,
    ACTIONS(103), 2,
      ts_builtin_sym_end,
      sym__nl,
    ACTIONS(108), 3,
      sym_header_name,
      anon_sym_AT,
      sym_separator,
  [937] = 5,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(197), 1,
      anon_sym_RBRACK,
    ACTIONS(199), 1,
      sym__nl,
    STATE(37), 1,
      aux_sym__json_list_values_repeat1,
    STATE(70), 1,
      aux_sym__key_value_list_repeat1,
  [953] = 5,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    ACTIONS(204), 1,
      anon_sym_RBRACK,
    ACTIONS(206), 1,
      sym__nl,
    STATE(46), 1,
      aux_sym__json_list_values_repeat1,
    STATE(89), 1,
      aux_sym__key_value_list_repeat1,
  [969] = 5,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(209), 1,
      anon_sym_RBRACK,
    ACTIONS(211), 1,
      sym__nl,
    STATE(46), 1,
      aux_sym__json_list_values_repeat1,
    STATE(83), 1,
      aux_sym__key_value_list_repeat1,
  [985] = 4,
    ACTIONS(213), 1,
      anon_sym_AMP,
    ACTIONS(218), 1,
      sym__nl,
    STATE(48), 1,
      aux_sym_url_encoded_value_repeat1,
    ACTIONS(215), 2,
      aux_sym_url_encoded_value_token1,
      sym_variable_ref,
  [999] = 5,
    ACTIONS(52), 1,
      sym__nl,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    STATE(13), 1,
      aux_sym__key_value_list_repeat1,
    STATE(99), 1,
      sym_json_key_value,
    STATE(122), 1,
      sym__json_key,
  [1015] = 5,
    ACTIONS(152), 1,
      sym_separator,
    ACTIONS(220), 1,
      ts_builtin_sym_end,
    ACTIONS(222), 1,
      sym__nl,
    STATE(30), 1,
      aux_sym_source_file_repeat1,
    STATE(80), 1,
      aux_sym_source_file_repeat2,
  [1031] = 4,
    STATE(61), 1,
      aux_sym_rest_of_line_repeat1,
    STATE(128), 1,
      sym_reason_phrase,
    STATE(129), 1,
      sym_rest_of_line,
    ACTIONS(9), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [1045] = 3,
    STATE(39), 1,
      aux_sym_url_encoded_value_repeat1,
    STATE(102), 1,
      sym_url_encoded_value,
    ACTIONS(224), 2,
      aux_sym_url_encoded_value_token1,
      sym_variable_ref,
  [1056] = 3,
    STATE(33), 1,
      aux_sym_identifier_repeat1,
    STATE(136), 1,
      sym_identifier,
    ACTIONS(226), 2,
      aux_sym_identifier_token1,
      sym_variable_ref,
  [1067] = 4,
    ACTIONS(228), 1,
      sym_header_name,
    ACTIONS(230), 1,
      sym__nl,
    STATE(72), 1,
      aux_sym_request_repeat1,
    STATE(133), 1,
      sym_header,
  [1080] = 3,
    STATE(33), 1,
      aux_sym_identifier_repeat1,
    STATE(114), 1,
      sym_identifier,
    ACTIONS(226), 2,
      aux_sym_identifier_token1,
      sym_variable_ref,
  [1091] = 1,
    ACTIONS(232), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [1098] = 3,
    ACTIONS(237), 1,
      sym__nl,
    STATE(57), 1,
      aux_sym_rest_of_line_repeat1,
    ACTIONS(234), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [1109] = 3,
    ACTIONS(239), 1,
      anon_sym_DQUOTE,
    STATE(69), 1,
      aux_sym_string_repeat1,
    ACTIONS(241), 2,
      aux_sym_string_token1,
      sym_variable_ref,
  [1120] = 1,
    ACTIONS(243), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [1127] = 3,
    STATE(61), 1,
      aux_sym_rest_of_line_repeat1,
    STATE(108), 1,
      sym_rest_of_line,
    ACTIONS(9), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [1138] = 3,
    ACTIONS(247), 1,
      sym__nl,
    STATE(57), 1,
      aux_sym_rest_of_line_repeat1,
    ACTIONS(245), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [1149] = 1,
    ACTIONS(249), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_separator,
      sym__nl,
  [1156] = 1,
    ACTIONS(251), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [1163] = 3,
    ACTIONS(255), 1,
      sym_separator,
    STATE(64), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(253), 2,
      ts_builtin_sym_end,
      sym__nl,
  [1174] = 4,
    ACTIONS(52), 1,
      sym__nl,
    ACTIONS(158), 1,
      anon_sym_RBRACE,
    ACTIONS(258), 1,
      anon_sym_COMMA,
    STATE(13), 1,
      aux_sym__key_value_list_repeat1,
  [1187] = 3,
    ACTIONS(260), 1,
      ts_builtin_sym_end,
    STATE(67), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(262), 2,
      sym_separator,
      sym__nl,
  [1198] = 3,
    ACTIONS(264), 1,
      ts_builtin_sym_end,
    STATE(67), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(266), 2,
      sym_separator,
      sym__nl,
  [1209] = 1,
    ACTIONS(269), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [1216] = 3,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      aux_sym_string_repeat1,
    ACTIONS(273), 2,
      aux_sym_string_token1,
      sym_variable_ref,
  [1227] = 4,
    ACTIONS(52), 1,
      sym__nl,
    ACTIONS(173), 1,
      anon_sym_RBRACK,
    ACTIONS(275), 1,
      anon_sym_COMMA,
    STATE(13), 1,
      aux_sym__key_value_list_repeat1,
  [1240] = 3,
    STATE(33), 1,
      aux_sym_identifier_repeat1,
    STATE(127), 1,
      sym_identifier,
    ACTIONS(226), 2,
      aux_sym_identifier_token1,
      sym_variable_ref,
  [1251] = 4,
    ACTIONS(228), 1,
      sym_header_name,
    ACTIONS(277), 1,
      sym__nl,
    STATE(84), 1,
      aux_sym_request_repeat1,
    STATE(133), 1,
      sym_header,
  [1264] = 1,
    ACTIONS(279), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_separator,
      sym__nl,
  [1271] = 1,
    ACTIONS(281), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_separator,
      sym__nl,
  [1278] = 4,
    ACTIONS(52), 1,
      sym__nl,
    ACTIONS(193), 1,
      anon_sym_RBRACE,
    ACTIONS(258), 1,
      anon_sym_COMMA,
    STATE(13), 1,
      aux_sym__key_value_list_repeat1,
  [1291] = 1,
    ACTIONS(283), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [1298] = 3,
    ACTIONS(285), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      aux_sym_string_repeat1,
    ACTIONS(287), 2,
      aux_sym_string_token1,
      sym_variable_ref,
  [1309] = 3,
    STATE(61), 1,
      aux_sym_rest_of_line_repeat1,
    STATE(112), 1,
      sym_rest_of_line,
    ACTIONS(9), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [1320] = 4,
    ACTIONS(52), 1,
      sym__nl,
    ACTIONS(209), 1,
      anon_sym_RBRACK,
    ACTIONS(275), 1,
      anon_sym_COMMA,
    STATE(13), 1,
      aux_sym__key_value_list_repeat1,
  [1333] = 3,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    STATE(67), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(262), 2,
      sym_separator,
      sym__nl,
  [1344] = 1,
    ACTIONS(290), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_separator,
      sym__nl,
  [1351] = 4,
    ACTIONS(52), 1,
      sym__nl,
    ACTIONS(258), 1,
      anon_sym_COMMA,
    ACTIONS(292), 1,
      anon_sym_RBRACE,
    STATE(13), 1,
      aux_sym__key_value_list_repeat1,
  [1364] = 4,
    ACTIONS(52), 1,
      sym__nl,
    ACTIONS(275), 1,
      anon_sym_COMMA,
    ACTIONS(294), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      aux_sym__key_value_list_repeat1,
  [1377] = 4,
    ACTIONS(103), 1,
      sym__nl,
    ACTIONS(296), 1,
      sym_header_name,
    STATE(84), 1,
      aux_sym_request_repeat1,
    STATE(133), 1,
      sym_header,
  [1390] = 1,
    ACTIONS(140), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_separator,
      sym__nl,
  [1397] = 3,
    STATE(61), 1,
      aux_sym_rest_of_line_repeat1,
    STATE(134), 1,
      sym_rest_of_line,
    ACTIONS(9), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [1408] = 1,
    ACTIONS(299), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [1415] = 1,
    ACTIONS(204), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__nl,
  [1421] = 3,
    ACTIONS(52), 1,
      sym__nl,
    ACTIONS(275), 1,
      anon_sym_COMMA,
    STATE(13), 1,
      aux_sym__key_value_list_repeat1,
  [1431] = 3,
    ACTIONS(52), 1,
      sym__nl,
    ACTIONS(258), 1,
      anon_sym_COMMA,
    STATE(13), 1,
      aux_sym__key_value_list_repeat1,
  [1441] = 3,
    ACTIONS(301), 1,
      anon_sym_AMP,
    ACTIONS(304), 1,
      sym__nl,
    STATE(91), 1,
      aux_sym_url_encoded_body_repeat1,
  [1451] = 1,
    ACTIONS(253), 3,
      ts_builtin_sym_end,
      sym_separator,
      sym__nl,
  [1457] = 3,
    ACTIONS(306), 1,
      sym__identifier,
    STATE(103), 1,
      sym_url_encoded_key_value,
    STATE(130), 1,
      sym_url_encoded_key,
  [1467] = 3,
    ACTIONS(308), 1,
      anon_sym_AMP,
    ACTIONS(310), 1,
      sym__nl,
    STATE(91), 1,
      aux_sym_url_encoded_body_repeat1,
  [1477] = 1,
    ACTIONS(188), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym__nl,
  [1483] = 1,
    ACTIONS(312), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym__nl,
  [1489] = 1,
    ACTIONS(314), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym__nl,
  [1495] = 1,
    ACTIONS(316), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__nl,
  [1501] = 1,
    ACTIONS(318), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym__nl,
  [1507] = 1,
    ACTIONS(320), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__nl,
  [1513] = 3,
    ACTIONS(308), 1,
      anon_sym_AMP,
    ACTIONS(322), 1,
      sym__nl,
    STATE(94), 1,
      aux_sym_url_encoded_body_repeat1,
  [1523] = 1,
    ACTIONS(324), 2,
      anon_sym_AMP,
      sym__nl,
  [1528] = 1,
    ACTIONS(304), 2,
      anon_sym_AMP,
      sym__nl,
  [1533] = 1,
    ACTIONS(103), 2,
      sym_header_name,
      sym__nl,
  [1538] = 1,
    ACTIONS(326), 1,
      aux_sym_http_version_token1,
  [1542] = 1,
    ACTIONS(328), 1,
      sym_status_code,
  [1546] = 1,
    ACTIONS(330), 1,
      sym__nl,
  [1550] = 1,
    ACTIONS(332), 1,
      sym__nl,
  [1554] = 1,
    ACTIONS(334), 1,
      sym__nl,
  [1558] = 1,
    ACTIONS(336), 1,
      sym__nl,
  [1562] = 1,
    ACTIONS(338), 1,
      sym__nl,
  [1566] = 1,
    ACTIONS(340), 1,
      sym__nl,
  [1570] = 1,
    ACTIONS(342), 1,
      sym__nl,
  [1574] = 1,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
  [1578] = 1,
    ACTIONS(346), 1,
      sym__nl,
  [1582] = 1,
    ACTIONS(348), 1,
      sym__nl,
  [1586] = 1,
    ACTIONS(142), 1,
      anon_sym_RBRACE,
  [1590] = 1,
    ACTIONS(350), 1,
      ts_builtin_sym_end,
  [1594] = 1,
    ACTIONS(352), 1,
      sym__nl,
  [1598] = 1,
    ACTIONS(354), 1,
      anon_sym_EQ,
  [1602] = 1,
    ACTIONS(356), 1,
      sym__nl,
  [1606] = 1,
    ACTIONS(358), 1,
      anon_sym_COLON2,
  [1610] = 1,
    ACTIONS(360), 1,
      sym__nl,
  [1614] = 1,
    ACTIONS(362), 1,
      sym__nl,
  [1618] = 1,
    ACTIONS(364), 1,
      anon_sym_COLON2,
  [1622] = 1,
    ACTIONS(366), 1,
      sym__nl,
  [1626] = 1,
    ACTIONS(368), 1,
      anon_sym_EQ2,
  [1630] = 1,
    ACTIONS(370), 1,
      sym__nl,
  [1634] = 1,
    ACTIONS(372), 1,
      sym__nl,
  [1638] = 1,
    ACTIONS(374), 1,
      anon_sym_EQ,
  [1642] = 1,
    ACTIONS(376), 1,
      sym_status_code,
  [1646] = 1,
    ACTIONS(378), 1,
      anon_sym_COLON,
  [1650] = 1,
    ACTIONS(380), 1,
      sym__nl,
  [1654] = 1,
    ACTIONS(382), 1,
      sym__nl,
  [1658] = 1,
    ACTIONS(384), 1,
      sym__nl,
  [1662] = 1,
    ACTIONS(386), 1,
      anon_sym_EQ2,
  [1666] = 1,
    ACTIONS(388), 1,
      sym__nl,
  [1670] = 1,
    ACTIONS(48), 1,
      anon_sym_RBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 52,
  [SMALL_STATE(4)] = 98,
  [SMALL_STATE(5)] = 141,
  [SMALL_STATE(6)] = 179,
  [SMALL_STATE(7)] = 217,
  [SMALL_STATE(8)] = 251,
  [SMALL_STATE(9)] = 282,
  [SMALL_STATE(10)] = 310,
  [SMALL_STATE(11)] = 338,
  [SMALL_STATE(12)] = 366,
  [SMALL_STATE(13)] = 394,
  [SMALL_STATE(14)] = 415,
  [SMALL_STATE(15)] = 445,
  [SMALL_STATE(16)] = 475,
  [SMALL_STATE(17)] = 497,
  [SMALL_STATE(18)] = 514,
  [SMALL_STATE(19)] = 534,
  [SMALL_STATE(20)] = 554,
  [SMALL_STATE(21)] = 576,
  [SMALL_STATE(22)] = 594,
  [SMALL_STATE(23)] = 609,
  [SMALL_STATE(24)] = 624,
  [SMALL_STATE(25)] = 639,
  [SMALL_STATE(26)] = 654,
  [SMALL_STATE(27)] = 669,
  [SMALL_STATE(28)] = 680,
  [SMALL_STATE(29)] = 699,
  [SMALL_STATE(30)] = 715,
  [SMALL_STATE(31)] = 731,
  [SMALL_STATE(32)] = 747,
  [SMALL_STATE(33)] = 763,
  [SMALL_STATE(34)] = 775,
  [SMALL_STATE(35)] = 791,
  [SMALL_STATE(36)] = 803,
  [SMALL_STATE(37)] = 817,
  [SMALL_STATE(38)] = 833,
  [SMALL_STATE(39)] = 849,
  [SMALL_STATE(40)] = 863,
  [SMALL_STATE(41)] = 879,
  [SMALL_STATE(42)] = 895,
  [SMALL_STATE(43)] = 911,
  [SMALL_STATE(44)] = 927,
  [SMALL_STATE(45)] = 937,
  [SMALL_STATE(46)] = 953,
  [SMALL_STATE(47)] = 969,
  [SMALL_STATE(48)] = 985,
  [SMALL_STATE(49)] = 999,
  [SMALL_STATE(50)] = 1015,
  [SMALL_STATE(51)] = 1031,
  [SMALL_STATE(52)] = 1045,
  [SMALL_STATE(53)] = 1056,
  [SMALL_STATE(54)] = 1067,
  [SMALL_STATE(55)] = 1080,
  [SMALL_STATE(56)] = 1091,
  [SMALL_STATE(57)] = 1098,
  [SMALL_STATE(58)] = 1109,
  [SMALL_STATE(59)] = 1120,
  [SMALL_STATE(60)] = 1127,
  [SMALL_STATE(61)] = 1138,
  [SMALL_STATE(62)] = 1149,
  [SMALL_STATE(63)] = 1156,
  [SMALL_STATE(64)] = 1163,
  [SMALL_STATE(65)] = 1174,
  [SMALL_STATE(66)] = 1187,
  [SMALL_STATE(67)] = 1198,
  [SMALL_STATE(68)] = 1209,
  [SMALL_STATE(69)] = 1216,
  [SMALL_STATE(70)] = 1227,
  [SMALL_STATE(71)] = 1240,
  [SMALL_STATE(72)] = 1251,
  [SMALL_STATE(73)] = 1264,
  [SMALL_STATE(74)] = 1271,
  [SMALL_STATE(75)] = 1278,
  [SMALL_STATE(76)] = 1291,
  [SMALL_STATE(77)] = 1298,
  [SMALL_STATE(78)] = 1309,
  [SMALL_STATE(79)] = 1320,
  [SMALL_STATE(80)] = 1333,
  [SMALL_STATE(81)] = 1344,
  [SMALL_STATE(82)] = 1351,
  [SMALL_STATE(83)] = 1364,
  [SMALL_STATE(84)] = 1377,
  [SMALL_STATE(85)] = 1390,
  [SMALL_STATE(86)] = 1397,
  [SMALL_STATE(87)] = 1408,
  [SMALL_STATE(88)] = 1415,
  [SMALL_STATE(89)] = 1421,
  [SMALL_STATE(90)] = 1431,
  [SMALL_STATE(91)] = 1441,
  [SMALL_STATE(92)] = 1451,
  [SMALL_STATE(93)] = 1457,
  [SMALL_STATE(94)] = 1467,
  [SMALL_STATE(95)] = 1477,
  [SMALL_STATE(96)] = 1483,
  [SMALL_STATE(97)] = 1489,
  [SMALL_STATE(98)] = 1495,
  [SMALL_STATE(99)] = 1501,
  [SMALL_STATE(100)] = 1507,
  [SMALL_STATE(101)] = 1513,
  [SMALL_STATE(102)] = 1523,
  [SMALL_STATE(103)] = 1528,
  [SMALL_STATE(104)] = 1533,
  [SMALL_STATE(105)] = 1538,
  [SMALL_STATE(106)] = 1542,
  [SMALL_STATE(107)] = 1546,
  [SMALL_STATE(108)] = 1550,
  [SMALL_STATE(109)] = 1554,
  [SMALL_STATE(110)] = 1558,
  [SMALL_STATE(111)] = 1562,
  [SMALL_STATE(112)] = 1566,
  [SMALL_STATE(113)] = 1570,
  [SMALL_STATE(114)] = 1574,
  [SMALL_STATE(115)] = 1578,
  [SMALL_STATE(116)] = 1582,
  [SMALL_STATE(117)] = 1586,
  [SMALL_STATE(118)] = 1590,
  [SMALL_STATE(119)] = 1594,
  [SMALL_STATE(120)] = 1598,
  [SMALL_STATE(121)] = 1602,
  [SMALL_STATE(122)] = 1606,
  [SMALL_STATE(123)] = 1610,
  [SMALL_STATE(124)] = 1614,
  [SMALL_STATE(125)] = 1618,
  [SMALL_STATE(126)] = 1622,
  [SMALL_STATE(127)] = 1626,
  [SMALL_STATE(128)] = 1630,
  [SMALL_STATE(129)] = 1634,
  [SMALL_STATE(130)] = 1638,
  [SMALL_STATE(131)] = 1642,
  [SMALL_STATE(132)] = 1646,
  [SMALL_STATE(133)] = 1650,
  [SMALL_STATE(134)] = 1654,
  [SMALL_STATE(135)] = 1658,
  [SMALL_STATE(136)] = 1662,
  [SMALL_STATE(137)] = 1666,
  [SMALL_STATE(138)] = 1670,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 1, 0, 0),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 1, 0, 0), SHIFT(4),
  [20] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 4, 0, 0),
  [24] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [26] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 4, 0, 0),
  [28] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 3, 0, 0),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 3, 0, 0),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__key_value_list_repeat1, 2, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__key_value_list_repeat1, 2, 0, 0),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__key_value_list_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__block_repeat1, 2, 0, 0),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3, 0, 0),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_request, 3, 0, 0), SHIFT(15),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 2, 0, 0),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_request, 2, 0, 0), SHIFT(14),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0), SHIFT_REPEAT(132),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2, 0, 0),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block, 2, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__block, 2, 0, 0), SHIFT(25),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__block, 2, 0, 0), SHIFT(22),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block, 3, 0, 0),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__block, 3, 0, 0), SHIFT(22),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block, 1, 0, 0),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__block, 1, 0, 0), SHIFT(24),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 5, 0, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, 0, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value_list, 1, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value_list, 2, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2, 0, 0),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_list_values, 2, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url_encoded_value, 1, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encoded_value, 1, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__key_value_list_repeat2, 2, 0, 0), SHIFT_REPEAT(31),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__key_value_list_repeat2, 2, 0, 0),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__key_value_list_repeat2, 2, 0, 0), SHIFT_REPEAT(90),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value_list, 3, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_list_values, 1, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 2, 0, 0),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_list_values, 3, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_url_encoded_value_repeat1, 2, 0, 0),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_url_encoded_value_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_url_encoded_value_repeat1, 2, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 2, 0, 0),
  [234] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rest_of_line_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rest_of_line_repeat1, 2, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_list, 2, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest_of_line, 1, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 3, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(67),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 6, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [287] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 7, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value_list, 4, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_list_values, 4, 0, 0),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0), SHIFT_REPEAT(132),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_list, 3, 0, 0),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_url_encoded_body_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_url_encoded_body_repeat1, 2, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encoded_body, 2, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__key_value_list_repeat2, 3, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_key_value, 3, 0, 3),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 3, 0, 0),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__key_value_list_repeat2, 4, 0, 0),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 4, 0, 0),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encoded_body, 1, 0, 0),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encoded_key_value, 3, 0, 3),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_version, 2, 0, 0),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_line, 1, 0, 0),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 1, 0, 0),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, 0, 2),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1, 0, 0),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [350] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encoded_key, 1, 0, 0),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_key, 3, 0, 0),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response_start_line, 3, 0, 0),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reason_phrase, 1, 0, 0),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_line, 2, 0, 0),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1, 0, 0),
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
