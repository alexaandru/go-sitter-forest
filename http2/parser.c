#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 145
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 64
#define ALIAS_COUNT 0
#define TOKEN_COUNT 29
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
  anon_sym_AT = 7,
  anon_sym_EQ2 = 8,
  anon_sym_COMMA = 9,
  anon_sym_COLON2 = 10,
  anon_sym_DQUOTE = 11,
  anon_sym_LBRACE = 12,
  anon_sym_RBRACE = 13,
  anon_sym_LBRACK = 14,
  anon_sym_RBRACK = 15,
  sym_separator = 16,
  anon_sym_HTTP_SLASH = 17,
  aux_sym_http_version_token1 = 18,
  sym_status_code = 19,
  aux_sym_identifier_token1 = 20,
  sym__identifier = 21,
  sym_number = 22,
  sym_boolean = 23,
  aux_sym_string_token1 = 24,
  sym_null = 25,
  sym_variable_ref = 26,
  aux_sym_rest_of_line_token1 = 27,
  sym__nl = 28,
  sym_source_file = 29,
  sym__block = 30,
  sym_request = 31,
  sym_response = 32,
  sym_start_line = 33,
  sym_url = 34,
  sym_header = 35,
  sym_body = 36,
  sym_url_encoded_body = 37,
  sym_url_encoded_key_value = 38,
  sym_url_encoded_key = 39,
  sym_variable_declaration = 40,
  sym_json_body = 41,
  sym__key_value_list = 42,
  sym_json_key_value = 43,
  sym__json_key = 44,
  sym__json_value = 45,
  sym_json_object = 46,
  sym_json_list = 47,
  sym__json_list_values = 48,
  sym_response_start_line = 49,
  sym_http_version = 50,
  sym_reason_phrase = 51,
  sym_identifier = 52,
  sym_string = 53,
  sym_rest_of_line = 54,
  aux_sym_source_file_repeat1 = 55,
  aux_sym__block_repeat1 = 56,
  aux_sym_request_repeat1 = 57,
  aux_sym_url_encoded_body_repeat1 = 58,
  aux_sym__key_value_list_repeat1 = 59,
  aux_sym__json_list_values_repeat1 = 60,
  aux_sym_identifier_repeat1 = 61,
  aux_sym_string_repeat1 = 62,
  aux_sym_rest_of_line_repeat1 = 63,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_method] = "method",
  [anon_sym_COLON] = ":",
  [sym_header_name] = "header_name",
  [sym_raw_body] = "raw_body",
  [anon_sym_AMP] = "&",
  [anon_sym_EQ] = "=",
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
  [aux_sym__block_repeat1] = "_block_repeat1",
  [aux_sym_request_repeat1] = "request_repeat1",
  [aux_sym_url_encoded_body_repeat1] = "url_encoded_body_repeat1",
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
  [aux_sym__block_repeat1] = aux_sym__block_repeat1,
  [aux_sym_request_repeat1] = aux_sym_request_repeat1,
  [aux_sym_url_encoded_body_repeat1] = aux_sym_url_encoded_body_repeat1,
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
  [4] = 3,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 6,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 18,
  [20] = 16,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 21,
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
  [55] = 47,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 58,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 64,
  [70] = 34,
  [71] = 71,
  [72] = 40,
  [73] = 52,
  [74] = 74,
  [75] = 75,
  [76] = 65,
  [77] = 63,
  [78] = 22,
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
  [133] = 110,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 131,
  [140] = 101,
  [141] = 124,
  [142] = 137,
  [143] = 119,
  [144] = 144,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(56);
      if (lookahead == ' ') SKIP(54)
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == '&') ADVANCE(65);
      if (lookahead == ',') ADVANCE(70);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == ':') ADVANCE(71);
      if (lookahead == '=') ADVANCE(66);
      if (lookahead == '@') ADVANCE(67);
      if (lookahead == 'C') ADVANCE(81);
      if (lookahead == 'D') ADVANCE(81);
      if (lookahead == 'G') ADVANCE(81);
      if (lookahead == 'H') ADVANCE(81);
      if (lookahead == 'L') ADVANCE(81);
      if (lookahead == 'O') ADVANCE(81);
      if (lookahead == 'P') ADVANCE(81);
      if (lookahead == 'T') ADVANCE(81);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == 'f') ADVANCE(81);
      if (lookahead == 'n') ADVANCE(81);
      if (lookahead == 't') ADVANCE(81);
      if (lookahead == '{') ADVANCE(73);
      if (lookahead == '}') ADVANCE(74);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < '@' || '[' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(64);
      if (lookahead == ' ') ADVANCE(61);
      if (lookahead == '#') ADVANCE(63);
      if (lookahead == '@') ADVANCE(68);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == '{') ADVANCE(73);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(64);
      if (lookahead == '#') ADVANCE(62);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead == '@') ADVANCE(67);
      if (lookahead == 'C') ADVANCE(98);
      if (lookahead == 'D') ADVANCE(94);
      if (lookahead == 'G') ADVANCE(95);
      if (lookahead == 'H') ADVANCE(96);
      if (lookahead == 'L') ADVANCE(97);
      if (lookahead == 'O') ADVANCE(99);
      if (lookahead == 'P') ADVANCE(93);
      if (lookahead == 'T') ADVANCE(100);
      if (lookahead == '{') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(90);
      END_STATE();
    case 5:
      if (lookahead == ' ') SKIP(6)
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == '=') ADVANCE(66);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == 'f') ADVANCE(42);
      if (lookahead == 'n') ADVANCE(50);
      if (lookahead == 't') ADVANCE(47);
      if (lookahead == '{') ADVANCE(73);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 6:
      if (lookahead == ' ') SKIP(6)
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == '=') ADVANCE(66);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == 'f') ADVANCE(42);
      if (lookahead == 'n') ADVANCE(50);
      if (lookahead == 't') ADVANCE(47);
      if (lookahead == '{') ADVANCE(73);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 7:
      if (lookahead == ' ') SKIP(8)
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '&') ADVANCE(65);
      if (lookahead == ':') ADVANCE(71);
      if (lookahead == '=') ADVANCE(69);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 8:
      if (lookahead == ' ') SKIP(8)
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '&') ADVANCE(65);
      if (lookahead == ':') ADVANCE(71);
      if (lookahead == '=') ADVANCE(69);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(92);
      if (lookahead == '{') ADVANCE(101);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(59);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(60);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(86);
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(85);
      END_STATE();
    case 12:
      if (lookahead == ' ') SKIP(12)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 13:
      if (lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 14:
      if (lookahead == ' ') SKIP(14)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(77);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(78);
      END_STATE();
    case 18:
      if (lookahead == 'A') ADVANCE(23);
      END_STATE();
    case 19:
      if (lookahead == 'A') ADVANCE(22);
      END_STATE();
    case 20:
      if (lookahead == 'C') ADVANCE(37);
      END_STATE();
    case 21:
      if (lookahead == 'C') ADVANCE(27);
      END_STATE();
    case 22:
      if (lookahead == 'C') ADVANCE(24);
      END_STATE();
    case 23:
      if (lookahead == 'D') ADVANCE(57);
      END_STATE();
    case 24:
      if (lookahead == 'E') ADVANCE(57);
      END_STATE();
    case 25:
      if (lookahead == 'E') ADVANCE(20);
      END_STATE();
    case 26:
      if (lookahead == 'E') ADVANCE(41);
      END_STATE();
    case 27:
      if (lookahead == 'H') ADVANCE(57);
      END_STATE();
    case 28:
      if (lookahead == 'I') ADVANCE(33);
      END_STATE();
    case 29:
      if (lookahead == 'L') ADVANCE(26);
      END_STATE();
    case 30:
      if (lookahead == 'N') ADVANCE(32);
      END_STATE();
    case 31:
      if (lookahead == 'N') ADVANCE(36);
      END_STATE();
    case 32:
      if (lookahead == 'N') ADVANCE(25);
      END_STATE();
    case 33:
      if (lookahead == 'O') ADVANCE(31);
      END_STATE();
    case 34:
      if (lookahead == 'P') ADVANCE(17);
      END_STATE();
    case 35:
      if (lookahead == 'S') ADVANCE(37);
      END_STATE();
    case 36:
      if (lookahead == 'S') ADVANCE(57);
      END_STATE();
    case 37:
      if (lookahead == 'T') ADVANCE(57);
      END_STATE();
    case 38:
      if (lookahead == 'T') ADVANCE(34);
      END_STATE();
    case 39:
      if (lookahead == 'T') ADVANCE(28);
      END_STATE();
    case 40:
      if (lookahead == 'T') ADVANCE(21);
      END_STATE();
    case 41:
      if (lookahead == 'T') ADVANCE(24);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(88);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 48:
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 49:
      if (lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 50:
      if (lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 51:
      if (lookahead == '{') ADVANCE(52);
      END_STATE();
    case 52:
      if (lookahead == '}') ADVANCE(53);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 53:
      if (lookahead == '}') ADVANCE(89);
      END_STATE();
    case 54:
      if (eof) ADVANCE(56);
      if (lookahead == ' ') SKIP(54)
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == '&') ADVANCE(65);
      if (lookahead == ',') ADVANCE(70);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == ':') ADVANCE(71);
      if (lookahead == '=') ADVANCE(66);
      if (lookahead == '@') ADVANCE(67);
      if (lookahead == 'C') ADVANCE(81);
      if (lookahead == 'D') ADVANCE(81);
      if (lookahead == 'G') ADVANCE(81);
      if (lookahead == 'H') ADVANCE(81);
      if (lookahead == 'L') ADVANCE(81);
      if (lookahead == 'O') ADVANCE(81);
      if (lookahead == 'P') ADVANCE(81);
      if (lookahead == 'T') ADVANCE(81);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == 'f') ADVANCE(81);
      if (lookahead == 'n') ADVANCE(81);
      if (lookahead == 't') ADVANCE(81);
      if (lookahead == '{') ADVANCE(73);
      if (lookahead == '}') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 55:
      if (eof) ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < '@' || '[' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(3);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '@') ADVANCE(68);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == '{') ADVANCE(73);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_method);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == ' ') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < '@' || '[' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(64);
      if (lookahead == ' ') ADVANCE(61);
      if (lookahead == '#') ADVANCE(63);
      if (lookahead == '@') ADVANCE(68);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == '{') ADVANCE(73);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(64);
      if (lookahead == '#') ADVANCE(77);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(64);
      if (lookahead == '#') ADVANCE(62);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_separator);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_http_version_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_status_code);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == ' ') ADVANCE(86);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(85);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '{') ADVANCE(52);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_variable_ref);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead == '@') ADVANCE(67);
      if (lookahead == 'C') ADVANCE(98);
      if (lookahead == 'D') ADVANCE(94);
      if (lookahead == 'G') ADVANCE(95);
      if (lookahead == 'H') ADVANCE(96);
      if (lookahead == 'L') ADVANCE(97);
      if (lookahead == 'O') ADVANCE(99);
      if (lookahead == 'P') ADVANCE(93);
      if (lookahead == 'T') ADVANCE(100);
      if (lookahead == '{') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(90);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == ' ') ADVANCE(92);
      if (lookahead == '{') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(90);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == 'A') ADVANCE(40);
      if (lookahead == 'O') ADVANCE(35);
      if (lookahead == 'U') ADVANCE(37);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == 'E') ADVANCE(29);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == 'E') ADVANCE(37);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == 'E') ADVANCE(18);
      if (lookahead == 'T') ADVANCE(38);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == 'I') ADVANCE(35);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == 'O') ADVANCE(30);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == 'P') ADVANCE(39);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == 'R') ADVANCE(19);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == '{') ADVANCE(52);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__nl);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 4},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 55},
  [8] = {.lex_state = 55},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 55},
  [11] = {.lex_state = 55},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 9},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 9},
  [30] = {.lex_state = 9},
  [31] = {.lex_state = 10},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 9},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 10},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 10},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 11},
  [45] = {.lex_state = 9},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 9},
  [48] = {.lex_state = 10},
  [49] = {.lex_state = 11},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 9},
  [56] = {.lex_state = 10},
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 7},
  [61] = {.lex_state = 11},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 12},
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
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 10},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 5},
  [109] = {.lex_state = 5},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 13},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 5},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 7},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 7},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 14},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 7},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 13},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 7},
  [144] = {.lex_state = 0},
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
    [sym_source_file] = STATE(144),
    [sym__block] = STATE(68),
    [sym_request] = STATE(23),
    [sym_response] = STATE(23),
    [sym_start_line] = STATE(138),
    [sym_url] = STATE(136),
    [sym_variable_declaration] = STATE(5),
    [sym_response_start_line] = STATE(135),
    [sym_http_version] = STATE(134),
    [sym_rest_of_line] = STATE(125),
    [aux_sym__block_repeat1] = STATE(5),
    [aux_sym_rest_of_line_repeat1] = STATE(35),
    [sym_method] = ACTIONS(3),
    [anon_sym_AT] = ACTIONS(5),
    [anon_sym_HTTP_SLASH] = ACTIONS(7),
    [sym_variable_ref] = ACTIONS(9),
    [aux_sym_rest_of_line_token1] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(7), 1,
      anon_sym_HTTP_SLASH,
    STATE(35), 1,
      aux_sym_rest_of_line_repeat1,
    STATE(95), 1,
      sym__block,
    STATE(125), 1,
      sym_rest_of_line,
    STATE(134), 1,
      sym_http_version,
    STATE(135), 1,
      sym_response_start_line,
    STATE(136), 1,
      sym_url,
    STATE(138), 1,
      sym_start_line,
    ACTIONS(9), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
    STATE(5), 2,
      sym_variable_declaration,
      aux_sym__block_repeat1,
    STATE(23), 2,
      sym_request,
      sym_response,
  [43] = 10,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_RBRACK,
    ACTIONS(21), 1,
      sym_variable_ref,
    ACTIONS(23), 1,
      sym__nl,
    STATE(53), 1,
      sym_json_object,
    STATE(131), 1,
      sym__json_list_values,
    ACTIONS(19), 3,
      sym_number,
      sym_boolean,
      sym_null,
    STATE(71), 4,
      sym_json_body,
      sym__json_value,
      sym_json_list,
      sym_string,
  [79] = 10,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym_variable_ref,
    ACTIONS(25), 1,
      anon_sym_RBRACK,
    ACTIONS(27), 1,
      sym__nl,
    STATE(53), 1,
      sym_json_object,
    STATE(139), 1,
      sym__json_list_values,
    ACTIONS(19), 3,
      sym_number,
      sym_boolean,
      sym_null,
    STATE(71), 4,
      sym_json_body,
      sym__json_value,
      sym_json_list,
      sym_string,
  [115] = 12,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(7), 1,
      anon_sym_HTTP_SLASH,
    STATE(35), 1,
      aux_sym_rest_of_line_repeat1,
    STATE(125), 1,
      sym_rest_of_line,
    STATE(134), 1,
      sym_http_version,
    STATE(135), 1,
      sym_response_start_line,
    STATE(136), 1,
      sym_url,
    STATE(138), 1,
      sym_start_line,
    ACTIONS(9), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
    STATE(16), 2,
      sym_variable_declaration,
      aux_sym__block_repeat1,
    STATE(27), 2,
      sym_request,
      sym_response,
  [155] = 9,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym_variable_ref,
    ACTIONS(29), 1,
      anon_sym_RBRACK,
    STATE(53), 1,
      sym_json_object,
    STATE(124), 1,
      sym__json_list_values,
    ACTIONS(19), 3,
      sym_number,
      sym_boolean,
      sym_null,
    STATE(71), 4,
      sym_json_body,
      sym__json_value,
      sym_json_list,
      sym_string,
  [188] = 11,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      sym_raw_body,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      sym__identifier,
    STATE(86), 1,
      sym_url_encoded_key_value,
    STATE(116), 1,
      sym_url_encoded_key,
    STATE(126), 1,
      sym_body,
    ACTIONS(35), 2,
      anon_sym_AT,
      sym_separator,
    STATE(53), 2,
      sym_json_object,
      sym_json_list,
    STATE(106), 2,
      sym_url_encoded_body,
      sym_json_body,
  [225] = 11,
    ACTIONS(33), 1,
      sym_raw_body,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      sym__identifier,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    STATE(86), 1,
      sym_url_encoded_key_value,
    STATE(116), 1,
      sym_url_encoded_key,
    STATE(128), 1,
      sym_body,
    ACTIONS(45), 2,
      anon_sym_AT,
      sym_separator,
    STATE(53), 2,
      sym_json_object,
      sym_json_list,
    STATE(106), 2,
      sym_url_encoded_body,
      sym_json_body,
  [262] = 9,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym_variable_ref,
    ACTIONS(47), 1,
      anon_sym_RBRACK,
    STATE(53), 1,
      sym_json_object,
    STATE(141), 1,
      sym__json_list_values,
    ACTIONS(19), 3,
      sym_number,
      sym_boolean,
      sym_null,
    STATE(71), 4,
      sym_json_body,
      sym__json_value,
      sym_json_list,
      sym_string,
  [295] = 11,
    ACTIONS(33), 1,
      sym_raw_body,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      sym__identifier,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    STATE(86), 1,
      sym_url_encoded_key_value,
    STATE(116), 1,
      sym_url_encoded_key,
    STATE(120), 1,
      sym_body,
    ACTIONS(51), 2,
      anon_sym_AT,
      sym_separator,
    STATE(53), 2,
      sym_json_object,
      sym_json_list,
    STATE(106), 2,
      sym_url_encoded_body,
      sym_json_body,
  [332] = 11,
    ACTIONS(33), 1,
      sym_raw_body,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      sym__identifier,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    STATE(86), 1,
      sym_url_encoded_key_value,
    STATE(112), 1,
      sym_body,
    STATE(116), 1,
      sym_url_encoded_key,
    ACTIONS(55), 2,
      anon_sym_AT,
      sym_separator,
    STATE(53), 2,
      sym_json_object,
      sym_json_list,
    STATE(106), 2,
      sym_url_encoded_body,
      sym_json_body,
  [369] = 8,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      sym_variable_ref,
    ACTIONS(65), 1,
      sym__nl,
    STATE(53), 1,
      sym_json_object,
    ACTIONS(61), 3,
      sym_number,
      sym_boolean,
      sym_null,
    STATE(84), 4,
      sym_json_body,
      sym__json_value,
      sym_json_list,
      sym_string,
  [399] = 7,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      sym_variable_ref,
    STATE(53), 1,
      sym_json_object,
    ACTIONS(67), 3,
      sym_number,
      sym_boolean,
      sym_null,
    STATE(79), 4,
      sym_json_body,
      sym__json_value,
      sym_json_list,
      sym_string,
  [426] = 7,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      sym_variable_ref,
    STATE(53), 1,
      sym_json_object,
    ACTIONS(71), 3,
      sym_number,
      sym_boolean,
      sym_null,
    STATE(66), 4,
      sym_json_body,
      sym__json_value,
      sym_json_list,
      sym_string,
  [453] = 3,
    STATE(17), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(77), 2,
      aux_sym_identifier_token1,
      sym_variable_ref,
    ACTIONS(75), 4,
      anon_sym_AMP,
      anon_sym_EQ2,
      anon_sym_DQUOTE,
      sym__nl,
  [467] = 3,
    ACTIONS(81), 1,
      anon_sym_AT,
    STATE(16), 2,
      sym_variable_declaration,
      aux_sym__block_repeat1,
    ACTIONS(79), 4,
      sym_method,
      anon_sym_HTTP_SLASH,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [481] = 3,
    STATE(17), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(86), 2,
      aux_sym_identifier_token1,
      sym_variable_ref,
    ACTIONS(84), 4,
      anon_sym_AMP,
      anon_sym_EQ2,
      anon_sym_DQUOTE,
      sym__nl,
  [495] = 6,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_RBRACE,
    ACTIONS(93), 1,
      sym__nl,
    STATE(41), 1,
      sym_json_key_value,
    STATE(132), 1,
      sym__json_key,
    STATE(142), 1,
      sym__key_value_list,
  [514] = 6,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      anon_sym_RBRACE,
    ACTIONS(97), 1,
      sym__nl,
    STATE(41), 1,
      sym_json_key_value,
    STATE(132), 1,
      sym__json_key,
    STATE(137), 1,
      sym__key_value_list,
  [533] = 3,
    ACTIONS(101), 1,
      anon_sym_AT,
    ACTIONS(99), 2,
      ts_builtin_sym_end,
      sym_separator,
    STATE(20), 2,
      sym_variable_declaration,
      aux_sym__block_repeat1,
  [545] = 5,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(104), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      sym_json_key_value,
    STATE(101), 1,
      sym__key_value_list,
    STATE(132), 1,
      sym__json_key,
  [561] = 1,
    ACTIONS(106), 5,
      sym_method,
      anon_sym_AT,
      anon_sym_HTTP_SLASH,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [569] = 3,
    ACTIONS(110), 1,
      anon_sym_AT,
    ACTIONS(108), 2,
      ts_builtin_sym_end,
      sym_separator,
    STATE(25), 2,
      sym_variable_declaration,
      aux_sym__block_repeat1,
  [581] = 5,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(112), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      sym_json_key_value,
    STATE(132), 1,
      sym__json_key,
    STATE(140), 1,
      sym__key_value_list,
  [597] = 3,
    ACTIONS(110), 1,
      anon_sym_AT,
    ACTIONS(114), 2,
      ts_builtin_sym_end,
      sym_separator,
    STATE(20), 2,
      sym_variable_declaration,
      aux_sym__block_repeat1,
  [609] = 4,
    STATE(35), 1,
      aux_sym_rest_of_line_repeat1,
    STATE(103), 1,
      sym_reason_phrase,
    STATE(123), 1,
      sym_rest_of_line,
    ACTIONS(9), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [623] = 3,
    ACTIONS(110), 1,
      anon_sym_AT,
    ACTIONS(114), 2,
      ts_builtin_sym_end,
      sym_separator,
    STATE(28), 2,
      sym_variable_declaration,
      aux_sym__block_repeat1,
  [635] = 3,
    ACTIONS(110), 1,
      anon_sym_AT,
    ACTIONS(116), 2,
      ts_builtin_sym_end,
      sym_separator,
    STATE(20), 2,
      sym_variable_declaration,
      aux_sym__block_repeat1,
  [647] = 4,
    STATE(35), 1,
      aux_sym_rest_of_line_repeat1,
    STATE(121), 1,
      sym_url,
    STATE(125), 1,
      sym_rest_of_line,
    ACTIONS(9), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [661] = 3,
    ACTIONS(121), 1,
      sym__nl,
    STATE(30), 1,
      aux_sym_rest_of_line_repeat1,
    ACTIONS(118), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [672] = 4,
    ACTIONS(123), 1,
      sym_header_name,
    ACTIONS(125), 1,
      sym__nl,
    STATE(39), 1,
      aux_sym_request_repeat1,
    STATE(104), 1,
      sym_header,
  [685] = 1,
    ACTIONS(127), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [692] = 3,
    ACTIONS(129), 1,
      anon_sym_COMMA,
    STATE(33), 1,
      aux_sym__key_value_list_repeat1,
    ACTIONS(132), 2,
      anon_sym_RBRACE,
      sym__nl,
  [703] = 1,
    ACTIONS(134), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [710] = 3,
    ACTIONS(138), 1,
      sym__nl,
    STATE(30), 1,
      aux_sym_rest_of_line_repeat1,
    ACTIONS(136), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [721] = 1,
    ACTIONS(134), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [728] = 4,
    ACTIONS(123), 1,
      sym_header_name,
    ACTIONS(140), 1,
      sym__nl,
    STATE(56), 1,
      aux_sym_request_repeat1,
    STATE(104), 1,
      sym_header,
  [741] = 1,
    ACTIONS(142), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [748] = 4,
    ACTIONS(123), 1,
      sym_header_name,
    ACTIONS(144), 1,
      sym__nl,
    STATE(56), 1,
      aux_sym_request_repeat1,
    STATE(104), 1,
      sym_header,
  [761] = 1,
    ACTIONS(146), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [768] = 4,
    ACTIONS(148), 1,
      anon_sym_COMMA,
    ACTIONS(150), 1,
      anon_sym_RBRACE,
    ACTIONS(152), 1,
      sym__nl,
    STATE(50), 1,
      aux_sym__key_value_list_repeat1,
  [781] = 1,
    ACTIONS(146), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [788] = 1,
    ACTIONS(154), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [795] = 3,
    ACTIONS(156), 1,
      anon_sym_DQUOTE,
    STATE(49), 1,
      aux_sym_string_repeat1,
    ACTIONS(158), 2,
      aux_sym_string_token1,
      sym_variable_ref,
  [806] = 3,
    STATE(35), 1,
      aux_sym_rest_of_line_repeat1,
    STATE(105), 1,
      sym_rest_of_line,
    ACTIONS(9), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [817] = 1,
    ACTIONS(160), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [824] = 3,
    STATE(35), 1,
      aux_sym_rest_of_line_repeat1,
    STATE(110), 1,
      sym_rest_of_line,
    ACTIONS(9), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [835] = 4,
    ACTIONS(123), 1,
      sym_header_name,
    ACTIONS(162), 1,
      sym__nl,
    STATE(37), 1,
      aux_sym_request_repeat1,
    STATE(104), 1,
      sym_header,
  [848] = 3,
    ACTIONS(164), 1,
      anon_sym_DQUOTE,
    STATE(49), 1,
      aux_sym_string_repeat1,
    ACTIONS(166), 2,
      aux_sym_string_token1,
      sym_variable_ref,
  [859] = 4,
    ACTIONS(148), 1,
      anon_sym_COMMA,
    ACTIONS(169), 1,
      anon_sym_RBRACE,
    ACTIONS(171), 1,
      sym__nl,
    STATE(33), 1,
      aux_sym__key_value_list_repeat1,
  [872] = 4,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(173), 1,
      sym__nl,
    STATE(88), 1,
      sym_json_key_value,
    STATE(132), 1,
      sym__json_key,
  [885] = 1,
    ACTIONS(175), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [892] = 1,
    ACTIONS(177), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [899] = 1,
    ACTIONS(175), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [906] = 3,
    STATE(35), 1,
      aux_sym_rest_of_line_repeat1,
    STATE(133), 1,
      sym_rest_of_line,
    ACTIONS(9), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [917] = 4,
    ACTIONS(179), 1,
      sym_header_name,
    ACTIONS(182), 1,
      sym__nl,
    STATE(56), 1,
      aux_sym_request_repeat1,
    STATE(104), 1,
      sym_header,
  [930] = 3,
    STATE(15), 1,
      aux_sym_identifier_repeat1,
    STATE(99), 1,
      sym_identifier,
    ACTIONS(184), 2,
      aux_sym_identifier_token1,
      sym_variable_ref,
  [941] = 3,
    STATE(15), 1,
      aux_sym_identifier_repeat1,
    STATE(143), 1,
      sym_identifier,
    ACTIONS(184), 2,
      aux_sym_identifier_token1,
      sym_variable_ref,
  [952] = 1,
    ACTIONS(186), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [959] = 3,
    STATE(15), 1,
      aux_sym_identifier_repeat1,
    STATE(119), 1,
      sym_identifier,
    ACTIONS(184), 2,
      aux_sym_identifier_token1,
      sym_variable_ref,
  [970] = 3,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    STATE(44), 1,
      aux_sym_string_repeat1,
    ACTIONS(190), 2,
      aux_sym_string_token1,
      sym_variable_ref,
  [981] = 3,
    STATE(15), 1,
      aux_sym_identifier_repeat1,
    STATE(102), 1,
      sym_identifier,
    ACTIONS(184), 2,
      aux_sym_identifier_token1,
      sym_variable_ref,
  [992] = 1,
    ACTIONS(192), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [999] = 1,
    ACTIONS(186), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [1006] = 1,
    ACTIONS(194), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [1013] = 1,
    ACTIONS(196), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym__nl,
  [1019] = 3,
    ACTIONS(198), 1,
      anon_sym_AMP,
    ACTIONS(201), 1,
      sym__nl,
    STATE(67), 1,
      aux_sym_url_encoded_body_repeat1,
  [1029] = 3,
    ACTIONS(203), 1,
      ts_builtin_sym_end,
    ACTIONS(205), 1,
      sym_separator,
    STATE(85), 1,
      aux_sym_source_file_repeat1,
  [1039] = 2,
    ACTIONS(207), 1,
      sym__nl,
    ACTIONS(186), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1047] = 2,
    ACTIONS(209), 1,
      sym__nl,
    ACTIONS(134), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1055] = 3,
    ACTIONS(211), 1,
      anon_sym_COMMA,
    ACTIONS(213), 1,
      anon_sym_RBRACK,
    STATE(90), 1,
      aux_sym__json_list_values_repeat1,
  [1065] = 2,
    ACTIONS(215), 1,
      sym__nl,
    ACTIONS(146), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1073] = 2,
    ACTIONS(217), 1,
      sym__nl,
    ACTIONS(175), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1081] = 3,
    ACTIONS(219), 1,
      sym__identifier,
    STATE(98), 1,
      sym_url_encoded_key_value,
    STATE(116), 1,
      sym_url_encoded_key,
  [1091] = 3,
    ACTIONS(221), 1,
      anon_sym_AMP,
    ACTIONS(223), 1,
      sym__nl,
    STATE(67), 1,
      aux_sym_url_encoded_body_repeat1,
  [1101] = 2,
    ACTIONS(225), 1,
      sym__nl,
    ACTIONS(194), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1109] = 2,
    ACTIONS(227), 1,
      sym__nl,
    ACTIONS(192), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1117] = 1,
    ACTIONS(229), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_separator,
  [1123] = 2,
    ACTIONS(233), 1,
      sym__nl,
    ACTIONS(231), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1131] = 1,
    ACTIONS(235), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym__nl,
  [1137] = 1,
    ACTIONS(237), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_separator,
  [1143] = 1,
    ACTIONS(239), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_separator,
  [1149] = 3,
    ACTIONS(241), 1,
      anon_sym_COMMA,
    ACTIONS(244), 1,
      anon_sym_RBRACK,
    STATE(83), 1,
      aux_sym__json_list_values_repeat1,
  [1159] = 2,
    ACTIONS(246), 1,
      sym__nl,
    ACTIONS(244), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1167] = 3,
    ACTIONS(248), 1,
      ts_builtin_sym_end,
    ACTIONS(250), 1,
      sym_separator,
    STATE(87), 1,
      aux_sym_source_file_repeat1,
  [1177] = 3,
    ACTIONS(221), 1,
      anon_sym_AMP,
    ACTIONS(252), 1,
      sym__nl,
    STATE(75), 1,
      aux_sym_url_encoded_body_repeat1,
  [1187] = 3,
    ACTIONS(254), 1,
      ts_builtin_sym_end,
    ACTIONS(256), 1,
      sym_separator,
    STATE(87), 1,
      aux_sym_source_file_repeat1,
  [1197] = 1,
    ACTIONS(132), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym__nl,
  [1203] = 3,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    STATE(80), 1,
      sym_json_key_value,
    STATE(132), 1,
      sym__json_key,
  [1213] = 3,
    ACTIONS(211), 1,
      anon_sym_COMMA,
    ACTIONS(259), 1,
      anon_sym_RBRACK,
    STATE(83), 1,
      aux_sym__json_list_values_repeat1,
  [1223] = 1,
    ACTIONS(261), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_separator,
  [1229] = 1,
    ACTIONS(263), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_separator,
  [1235] = 1,
    ACTIONS(265), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1240] = 2,
    ACTIONS(267), 1,
      ts_builtin_sym_end,
    ACTIONS(269), 1,
      sym__nl,
  [1247] = 1,
    ACTIONS(271), 2,
      ts_builtin_sym_end,
      sym_separator,
  [1252] = 1,
    ACTIONS(231), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1257] = 1,
    ACTIONS(182), 2,
      sym_header_name,
      sym__nl,
  [1262] = 1,
    ACTIONS(201), 2,
      anon_sym_AMP,
      sym__nl,
  [1267] = 1,
    ACTIONS(273), 2,
      anon_sym_AMP,
      sym__nl,
  [1272] = 2,
    ACTIONS(248), 1,
      ts_builtin_sym_end,
    ACTIONS(269), 1,
      sym__nl,
  [1279] = 1,
    ACTIONS(275), 1,
      anon_sym_RBRACE,
  [1283] = 1,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
  [1287] = 1,
    ACTIONS(279), 1,
      sym__nl,
  [1291] = 1,
    ACTIONS(281), 1,
      sym__nl,
  [1295] = 1,
    ACTIONS(283), 1,
      sym__nl,
  [1299] = 1,
    ACTIONS(285), 1,
      sym__nl,
  [1303] = 1,
    ACTIONS(287), 1,
      anon_sym_RBRACE,
  [1307] = 1,
    ACTIONS(289), 1,
      anon_sym_COLON,
  [1311] = 1,
    ACTIONS(291), 1,
      anon_sym_EQ,
  [1315] = 1,
    ACTIONS(293), 1,
      sym__nl,
  [1319] = 1,
    ACTIONS(295), 1,
      sym__nl,
  [1323] = 1,
    ACTIONS(297), 1,
      sym__nl,
  [1327] = 1,
    ACTIONS(299), 1,
      sym__nl,
  [1331] = 1,
    ACTIONS(301), 1,
      sym_status_code,
  [1335] = 1,
    ACTIONS(169), 1,
      anon_sym_RBRACE,
  [1339] = 1,
    ACTIONS(303), 1,
      anon_sym_EQ,
  [1343] = 1,
    ACTIONS(269), 1,
      sym__nl,
  [1347] = 1,
    ACTIONS(305), 1,
      sym__nl,
  [1351] = 1,
    ACTIONS(307), 1,
      anon_sym_EQ2,
  [1355] = 1,
    ACTIONS(309), 1,
      sym__nl,
  [1359] = 1,
    ACTIONS(311), 1,
      sym__nl,
  [1363] = 1,
    ACTIONS(313), 1,
      anon_sym_COLON2,
  [1367] = 1,
    ACTIONS(315), 1,
      sym__nl,
  [1371] = 1,
    ACTIONS(317), 1,
      anon_sym_RBRACK,
  [1375] = 1,
    ACTIONS(319), 1,
      sym__nl,
  [1379] = 1,
    ACTIONS(321), 1,
      sym__nl,
  [1383] = 1,
    ACTIONS(323), 1,
      sym__nl,
  [1387] = 1,
    ACTIONS(325), 1,
      sym__nl,
  [1391] = 1,
    ACTIONS(327), 1,
      aux_sym_http_version_token1,
  [1395] = 1,
    ACTIONS(329), 1,
      sym__nl,
  [1399] = 1,
    ACTIONS(29), 1,
      anon_sym_RBRACK,
  [1403] = 1,
    ACTIONS(331), 1,
      anon_sym_COLON2,
  [1407] = 1,
    ACTIONS(333), 1,
      sym__nl,
  [1411] = 1,
    ACTIONS(335), 1,
      sym_status_code,
  [1415] = 1,
    ACTIONS(337), 1,
      sym__nl,
  [1419] = 1,
    ACTIONS(339), 1,
      sym__nl,
  [1423] = 1,
    ACTIONS(112), 1,
      anon_sym_RBRACE,
  [1427] = 1,
    ACTIONS(341), 1,
      sym__nl,
  [1431] = 1,
    ACTIONS(47), 1,
      anon_sym_RBRACK,
  [1435] = 1,
    ACTIONS(343), 1,
      anon_sym_RBRACE,
  [1439] = 1,
    ACTIONS(345), 1,
      anon_sym_RBRACK,
  [1443] = 1,
    ACTIONS(104), 1,
      anon_sym_RBRACE,
  [1447] = 1,
    ACTIONS(347), 1,
      anon_sym_EQ2,
  [1451] = 1,
    ACTIONS(349), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 43,
  [SMALL_STATE(4)] = 79,
  [SMALL_STATE(5)] = 115,
  [SMALL_STATE(6)] = 155,
  [SMALL_STATE(7)] = 188,
  [SMALL_STATE(8)] = 225,
  [SMALL_STATE(9)] = 262,
  [SMALL_STATE(10)] = 295,
  [SMALL_STATE(11)] = 332,
  [SMALL_STATE(12)] = 369,
  [SMALL_STATE(13)] = 399,
  [SMALL_STATE(14)] = 426,
  [SMALL_STATE(15)] = 453,
  [SMALL_STATE(16)] = 467,
  [SMALL_STATE(17)] = 481,
  [SMALL_STATE(18)] = 495,
  [SMALL_STATE(19)] = 514,
  [SMALL_STATE(20)] = 533,
  [SMALL_STATE(21)] = 545,
  [SMALL_STATE(22)] = 561,
  [SMALL_STATE(23)] = 569,
  [SMALL_STATE(24)] = 581,
  [SMALL_STATE(25)] = 597,
  [SMALL_STATE(26)] = 609,
  [SMALL_STATE(27)] = 623,
  [SMALL_STATE(28)] = 635,
  [SMALL_STATE(29)] = 647,
  [SMALL_STATE(30)] = 661,
  [SMALL_STATE(31)] = 672,
  [SMALL_STATE(32)] = 685,
  [SMALL_STATE(33)] = 692,
  [SMALL_STATE(34)] = 703,
  [SMALL_STATE(35)] = 710,
  [SMALL_STATE(36)] = 721,
  [SMALL_STATE(37)] = 728,
  [SMALL_STATE(38)] = 741,
  [SMALL_STATE(39)] = 748,
  [SMALL_STATE(40)] = 761,
  [SMALL_STATE(41)] = 768,
  [SMALL_STATE(42)] = 781,
  [SMALL_STATE(43)] = 788,
  [SMALL_STATE(44)] = 795,
  [SMALL_STATE(45)] = 806,
  [SMALL_STATE(46)] = 817,
  [SMALL_STATE(47)] = 824,
  [SMALL_STATE(48)] = 835,
  [SMALL_STATE(49)] = 848,
  [SMALL_STATE(50)] = 859,
  [SMALL_STATE(51)] = 872,
  [SMALL_STATE(52)] = 885,
  [SMALL_STATE(53)] = 892,
  [SMALL_STATE(54)] = 899,
  [SMALL_STATE(55)] = 906,
  [SMALL_STATE(56)] = 917,
  [SMALL_STATE(57)] = 930,
  [SMALL_STATE(58)] = 941,
  [SMALL_STATE(59)] = 952,
  [SMALL_STATE(60)] = 959,
  [SMALL_STATE(61)] = 970,
  [SMALL_STATE(62)] = 981,
  [SMALL_STATE(63)] = 992,
  [SMALL_STATE(64)] = 999,
  [SMALL_STATE(65)] = 1006,
  [SMALL_STATE(66)] = 1013,
  [SMALL_STATE(67)] = 1019,
  [SMALL_STATE(68)] = 1029,
  [SMALL_STATE(69)] = 1039,
  [SMALL_STATE(70)] = 1047,
  [SMALL_STATE(71)] = 1055,
  [SMALL_STATE(72)] = 1065,
  [SMALL_STATE(73)] = 1073,
  [SMALL_STATE(74)] = 1081,
  [SMALL_STATE(75)] = 1091,
  [SMALL_STATE(76)] = 1101,
  [SMALL_STATE(77)] = 1109,
  [SMALL_STATE(78)] = 1117,
  [SMALL_STATE(79)] = 1123,
  [SMALL_STATE(80)] = 1131,
  [SMALL_STATE(81)] = 1137,
  [SMALL_STATE(82)] = 1143,
  [SMALL_STATE(83)] = 1149,
  [SMALL_STATE(84)] = 1159,
  [SMALL_STATE(85)] = 1167,
  [SMALL_STATE(86)] = 1177,
  [SMALL_STATE(87)] = 1187,
  [SMALL_STATE(88)] = 1197,
  [SMALL_STATE(89)] = 1203,
  [SMALL_STATE(90)] = 1213,
  [SMALL_STATE(91)] = 1223,
  [SMALL_STATE(92)] = 1229,
  [SMALL_STATE(93)] = 1235,
  [SMALL_STATE(94)] = 1240,
  [SMALL_STATE(95)] = 1247,
  [SMALL_STATE(96)] = 1252,
  [SMALL_STATE(97)] = 1257,
  [SMALL_STATE(98)] = 1262,
  [SMALL_STATE(99)] = 1267,
  [SMALL_STATE(100)] = 1272,
  [SMALL_STATE(101)] = 1279,
  [SMALL_STATE(102)] = 1283,
  [SMALL_STATE(103)] = 1287,
  [SMALL_STATE(104)] = 1291,
  [SMALL_STATE(105)] = 1295,
  [SMALL_STATE(106)] = 1299,
  [SMALL_STATE(107)] = 1303,
  [SMALL_STATE(108)] = 1307,
  [SMALL_STATE(109)] = 1311,
  [SMALL_STATE(110)] = 1315,
  [SMALL_STATE(111)] = 1319,
  [SMALL_STATE(112)] = 1323,
  [SMALL_STATE(113)] = 1327,
  [SMALL_STATE(114)] = 1331,
  [SMALL_STATE(115)] = 1335,
  [SMALL_STATE(116)] = 1339,
  [SMALL_STATE(117)] = 1343,
  [SMALL_STATE(118)] = 1347,
  [SMALL_STATE(119)] = 1351,
  [SMALL_STATE(120)] = 1355,
  [SMALL_STATE(121)] = 1359,
  [SMALL_STATE(122)] = 1363,
  [SMALL_STATE(123)] = 1367,
  [SMALL_STATE(124)] = 1371,
  [SMALL_STATE(125)] = 1375,
  [SMALL_STATE(126)] = 1379,
  [SMALL_STATE(127)] = 1383,
  [SMALL_STATE(128)] = 1387,
  [SMALL_STATE(129)] = 1391,
  [SMALL_STATE(130)] = 1395,
  [SMALL_STATE(131)] = 1399,
  [SMALL_STATE(132)] = 1403,
  [SMALL_STATE(133)] = 1407,
  [SMALL_STATE(134)] = 1411,
  [SMALL_STATE(135)] = 1415,
  [SMALL_STATE(136)] = 1419,
  [SMALL_STATE(137)] = 1423,
  [SMALL_STATE(138)] = 1427,
  [SMALL_STATE(139)] = 1431,
  [SMALL_STATE(140)] = 1435,
  [SMALL_STATE(141)] = 1439,
  [SMALL_STATE(142)] = 1443,
  [SMALL_STATE(143)] = 1447,
  [SMALL_STATE(144)] = 1451,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 4),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 4),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 3),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 3),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__block_repeat1, 2),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(60),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(17),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(58),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 5, .production_id = 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block, 3),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rest_of_line_repeat1, 2), SHIFT_REPEAT(30),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rest_of_line_repeat1, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__key_value_list_repeat1, 2), SHIFT_REPEAT(51),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__key_value_list_repeat1, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 4),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest_of_line, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_list, 5),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_list, 3),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value_list, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 5),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(49),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value_list, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 1),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(108),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_list, 4),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 2),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_list, 2),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_key_value, 3, .production_id = 3),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_url_encoded_body_repeat1, 2), SHIFT_REPEAT(74),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_url_encoded_body_repeat1, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_list_values, 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encoded_body, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, .production_id = 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 3),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__key_value_list_repeat1, 3),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 7),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 2), SHIFT_REPEAT(12),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 2),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encoded_body, 1),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(117),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_list_values, 2),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 6),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 4),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 4),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encoded_key_value, 3, .production_id = 3),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response_start_line, 3),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, .production_id = 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value_list, 3),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encoded_key, 1),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_version, 2),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_line, 2),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_key, 3),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reason_phrase, 1),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_line, 1),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [349] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

TS_PUBLIC const TSLanguage *tree_sitter_http2() {
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
