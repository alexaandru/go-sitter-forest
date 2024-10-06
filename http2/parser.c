#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 145
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 65
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
  aux_sym_source_file_repeat2 = 56,
  aux_sym__block_repeat1 = 57,
  aux_sym_request_repeat1 = 58,
  aux_sym_url_encoded_body_repeat1 = 59,
  aux_sym__key_value_list_repeat1 = 60,
  aux_sym__json_list_values_repeat1 = 61,
  aux_sym_identifier_repeat1 = 62,
  aux_sym_string_repeat1 = 63,
  aux_sym_rest_of_line_repeat1 = 64,
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
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
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
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
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
  [6] = 5,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 10,
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
  [23] = 19,
  [24] = 24,
  [25] = 25,
  [26] = 15,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 16,
  [32] = 32,
  [33] = 33,
  [34] = 30,
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
  [51] = 40,
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
  [71] = 22,
  [72] = 59,
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
  [89] = 56,
  [90] = 43,
  [91] = 91,
  [92] = 50,
  [93] = 47,
  [94] = 62,
  [95] = 67,
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
  [132] = 119,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 109,
  [137] = 137,
  [138] = 125,
  [139] = 121,
  [140] = 115,
  [141] = 141,
  [142] = 124,
  [143] = 143,
  [144] = 144,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(56);
      if (lookahead == ' ') SKIP(54);
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
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == '#') ADVANCE(62);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        ' ', 91,
        '@', 67,
        'C', 98,
        'D', 94,
        'G', 95,
        'H', 96,
        'L', 97,
        'O', 99,
        'P', 93,
        'T', 100,
        '{', 101,
        '\n', 102,
        '\r', 102,
      );
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 5:
      if (lookahead == ' ') SKIP(6);
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == ':') ADVANCE(71);
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
      if (lookahead == ' ') SKIP(6);
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == ':') ADVANCE(71);
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
      if (lookahead == ' ') SKIP(8);
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '&') ADVANCE(65);
      if (lookahead == ':') ADVANCE(58);
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
      if (lookahead == ' ') SKIP(8);
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '&') ADVANCE(65);
      if (lookahead == ':') ADVANCE(58);
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
      if (lookahead == ' ') SKIP(12);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 13:
      if (lookahead == ' ') SKIP(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 14:
      if (lookahead == ' ') SKIP(14);
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
      if (lookahead == ' ') SKIP(54);
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
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '@') ADVANCE(68);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == '{') ADVANCE(73);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(103);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      if (lookahead != 0) ADVANCE(3);
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
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == '#') ADVANCE(77);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == '#') ADVANCE(62);
      if (lookahead != 0) ADVANCE(64);
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
      ADVANCE_MAP(
        ' ', 91,
        '@', 67,
        'C', 98,
        'D', 94,
        'G', 95,
        'H', 96,
        'L', 97,
        'O', 99,
        'P', 93,
        'T', 100,
        '{', 101,
      );
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
    case 103:
      ACCEPT_TOKEN(sym__nl);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 4},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 55},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 55},
  [8] = {.lex_state = 55},
  [9] = {.lex_state = 55},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 9},
  [29] = {.lex_state = 9},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 9},
  [36] = {.lex_state = 10},
  [37] = {.lex_state = 9},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 10},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 10},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 10},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 11},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 7},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 11},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 9},
  [58] = {.lex_state = 10},
  [59] = {.lex_state = 9},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 11},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 9},
  [73] = {.lex_state = 0},
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
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 12},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 10},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 5},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 5},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 13},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 13},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 7},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 5},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 5},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 7},
  [135] = {.lex_state = 14},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 7},
  [143] = {.lex_state = 0},
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
    [sym_source_file] = STATE(110),
    [sym__block] = STATE(77),
    [sym_request] = STATE(25),
    [sym_response] = STATE(25),
    [sym_start_line] = STATE(117),
    [sym_url] = STATE(141),
    [sym_variable_declaration] = STATE(3),
    [sym_response_start_line] = STATE(131),
    [sym_http_version] = STATE(113),
    [sym_rest_of_line] = STATE(144),
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
  [0] = 15,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(7), 1,
      anon_sym_HTTP_SLASH,
    ACTIONS(13), 1,
      sym__nl,
    STATE(16), 1,
      aux_sym_source_file_repeat1,
    STATE(35), 1,
      aux_sym_rest_of_line_repeat1,
    STATE(101), 1,
      sym__block,
    STATE(113), 1,
      sym_http_version,
    STATE(117), 1,
      sym_start_line,
    STATE(131), 1,
      sym_response_start_line,
    STATE(141), 1,
      sym_url,
    STATE(144), 1,
      sym_rest_of_line,
    ACTIONS(9), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
    STATE(3), 2,
      sym_variable_declaration,
      aux_sym__block_repeat1,
    STATE(25), 2,
      sym_request,
      sym_response,
  [49] = 13,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(7), 1,
      anon_sym_HTTP_SLASH,
    ACTIONS(15), 1,
      sym__nl,
    STATE(35), 1,
      aux_sym_rest_of_line_repeat1,
    STATE(113), 1,
      sym_http_version,
    STATE(117), 1,
      sym_start_line,
    STATE(131), 1,
      sym_response_start_line,
    STATE(141), 1,
      sym_url,
    STATE(144), 1,
      sym_rest_of_line,
    ACTIONS(9), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
    STATE(15), 2,
      sym_variable_declaration,
      aux_sym__block_repeat1,
    STATE(20), 2,
      sym_request,
      sym_response,
  [92] = 11,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      sym_raw_body,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym__identifier,
    STATE(79), 1,
      sym_url_encoded_key_value,
    STATE(99), 1,
      sym_body,
    STATE(130), 1,
      sym_url_encoded_key,
    STATE(38), 2,
      sym_json_object,
      sym_json_list,
    STATE(112), 2,
      sym_url_encoded_body,
      sym_json_body,
    ACTIONS(21), 3,
      anon_sym_AT,
      sym_separator,
      sym__nl,
  [130] = 10,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_RBRACK,
    ACTIONS(39), 1,
      sym_variable_ref,
    ACTIONS(41), 1,
      sym__nl,
    STATE(38), 1,
      sym_json_object,
    STATE(138), 1,
      sym__json_list_values,
    ACTIONS(37), 3,
      sym_number,
      sym_boolean,
      sym_null,
    STATE(87), 4,
      sym_json_body,
      sym__json_value,
      sym_json_list,
      sym_string,
  [166] = 10,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      sym_variable_ref,
    ACTIONS(43), 1,
      anon_sym_RBRACK,
    ACTIONS(45), 1,
      sym__nl,
    STATE(38), 1,
      sym_json_object,
    STATE(125), 1,
      sym__json_list_values,
    ACTIONS(37), 3,
      sym_number,
      sym_boolean,
      sym_null,
    STATE(87), 4,
      sym_json_body,
      sym__json_value,
      sym_json_list,
      sym_string,
  [202] = 11,
    ACTIONS(19), 1,
      sym_raw_body,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym__identifier,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    STATE(79), 1,
      sym_url_encoded_key_value,
    STATE(98), 1,
      sym_body,
    STATE(130), 1,
      sym_url_encoded_key,
    STATE(38), 2,
      sym_json_object,
      sym_json_list,
    STATE(112), 2,
      sym_url_encoded_body,
      sym_json_body,
    ACTIONS(49), 3,
      anon_sym_AT,
      sym_separator,
      sym__nl,
  [240] = 11,
    ACTIONS(19), 1,
      sym_raw_body,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym__identifier,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    STATE(79), 1,
      sym_url_encoded_key_value,
    STATE(122), 1,
      sym_body,
    STATE(130), 1,
      sym_url_encoded_key,
    STATE(38), 2,
      sym_json_object,
      sym_json_list,
    STATE(112), 2,
      sym_url_encoded_body,
      sym_json_body,
    ACTIONS(53), 3,
      anon_sym_AT,
      sym_separator,
      sym__nl,
  [278] = 11,
    ACTIONS(19), 1,
      sym_raw_body,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym__identifier,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    STATE(79), 1,
      sym_url_encoded_key_value,
    STATE(118), 1,
      sym_body,
    STATE(130), 1,
      sym_url_encoded_key,
    STATE(38), 2,
      sym_json_object,
      sym_json_list,
    STATE(112), 2,
      sym_url_encoded_body,
      sym_json_body,
    ACTIONS(57), 3,
      anon_sym_AT,
      sym_separator,
      sym__nl,
  [316] = 9,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      sym_variable_ref,
    ACTIONS(59), 1,
      anon_sym_RBRACK,
    STATE(38), 1,
      sym_json_object,
    STATE(115), 1,
      sym__json_list_values,
    ACTIONS(37), 3,
      sym_number,
      sym_boolean,
      sym_null,
    STATE(87), 4,
      sym_json_body,
      sym__json_value,
      sym_json_list,
      sym_string,
  [349] = 9,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      sym_variable_ref,
    ACTIONS(61), 1,
      anon_sym_RBRACK,
    STATE(38), 1,
      sym_json_object,
    STATE(140), 1,
      sym__json_list_values,
    ACTIONS(37), 3,
      sym_number,
      sym_boolean,
      sym_null,
    STATE(87), 4,
      sym_json_body,
      sym__json_value,
      sym_json_list,
      sym_string,
  [382] = 8,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      anon_sym_LBRACE,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      sym_variable_ref,
    ACTIONS(71), 1,
      sym__nl,
    STATE(38), 1,
      sym_json_object,
    ACTIONS(67), 3,
      sym_number,
      sym_boolean,
      sym_null,
    STATE(84), 4,
      sym_json_body,
      sym__json_value,
      sym_json_list,
      sym_string,
  [412] = 7,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      anon_sym_LBRACE,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      sym_variable_ref,
    STATE(38), 1,
      sym_json_object,
    ACTIONS(73), 3,
      sym_number,
      sym_boolean,
      sym_null,
    STATE(88), 4,
      sym_json_body,
      sym__json_value,
      sym_json_list,
      sym_string,
  [439] = 7,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      anon_sym_LBRACE,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      sym_variable_ref,
    STATE(38), 1,
      sym_json_object,
    ACTIONS(77), 3,
      sym_number,
      sym_boolean,
      sym_null,
    STATE(83), 4,
      sym_json_body,
      sym__json_value,
      sym_json_list,
      sym_string,
  [466] = 4,
    ACTIONS(83), 1,
      anon_sym_AT,
    ACTIONS(86), 1,
      sym__nl,
    STATE(15), 2,
      sym_variable_declaration,
      aux_sym__block_repeat1,
    ACTIONS(81), 4,
      sym_method,
      anon_sym_HTTP_SLASH,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [483] = 3,
    ACTIONS(91), 1,
      sym__nl,
    STATE(16), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(89), 5,
      sym_method,
      anon_sym_AT,
      anon_sym_HTTP_SLASH,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [497] = 3,
    STATE(17), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(96), 2,
      aux_sym_identifier_token1,
      sym_variable_ref,
    ACTIONS(94), 4,
      anon_sym_AMP,
      anon_sym_EQ2,
      anon_sym_DQUOTE,
      sym__nl,
  [511] = 3,
    STATE(17), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(101), 2,
      aux_sym_identifier_token1,
      sym_variable_ref,
    ACTIONS(99), 4,
      anon_sym_AMP,
      anon_sym_EQ2,
      anon_sym_DQUOTE,
      sym__nl,
  [525] = 6,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      anon_sym_RBRACE,
    ACTIONS(107), 1,
      sym__nl,
    STATE(45), 1,
      sym_json_key_value,
    STATE(109), 1,
      sym__key_value_list,
    STATE(111), 1,
      sym__json_key,
  [544] = 4,
    ACTIONS(111), 1,
      anon_sym_AT,
    ACTIONS(113), 1,
      sym__nl,
    ACTIONS(109), 2,
      ts_builtin_sym_end,
      sym_separator,
    STATE(27), 2,
      sym_variable_declaration,
      aux_sym__block_repeat1,
  [559] = 2,
    ACTIONS(118), 1,
      sym__nl,
    ACTIONS(115), 5,
      sym_method,
      anon_sym_AT,
      anon_sym_HTTP_SLASH,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [570] = 2,
    ACTIONS(123), 1,
      sym__nl,
    ACTIONS(121), 5,
      sym_method,
      anon_sym_AT,
      anon_sym_HTTP_SLASH,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [581] = 6,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(125), 1,
      anon_sym_RBRACE,
    ACTIONS(127), 1,
      sym__nl,
    STATE(45), 1,
      sym_json_key_value,
    STATE(111), 1,
      sym__json_key,
    STATE(136), 1,
      sym__key_value_list,
  [600] = 4,
    ACTIONS(111), 1,
      anon_sym_AT,
    ACTIONS(129), 1,
      sym__nl,
    ACTIONS(109), 2,
      ts_builtin_sym_end,
      sym_separator,
    STATE(26), 2,
      sym_variable_declaration,
      aux_sym__block_repeat1,
  [615] = 4,
    ACTIONS(111), 1,
      anon_sym_AT,
    ACTIONS(133), 1,
      sym__nl,
    ACTIONS(131), 2,
      ts_builtin_sym_end,
      sym_separator,
    STATE(24), 2,
      sym_variable_declaration,
      aux_sym__block_repeat1,
  [630] = 4,
    ACTIONS(137), 1,
      anon_sym_AT,
    ACTIONS(140), 1,
      sym__nl,
    ACTIONS(135), 2,
      ts_builtin_sym_end,
      sym_separator,
    STATE(26), 2,
      sym_variable_declaration,
      aux_sym__block_repeat1,
  [645] = 4,
    ACTIONS(111), 1,
      anon_sym_AT,
    ACTIONS(129), 1,
      sym__nl,
    ACTIONS(143), 2,
      ts_builtin_sym_end,
      sym_separator,
    STATE(26), 2,
      sym_variable_declaration,
      aux_sym__block_repeat1,
  [660] = 4,
    STATE(35), 1,
      aux_sym_rest_of_line_repeat1,
    STATE(114), 1,
      sym_url,
    STATE(144), 1,
      sym_rest_of_line,
    ACTIONS(9), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [674] = 4,
    STATE(35), 1,
      aux_sym_rest_of_line_repeat1,
    STATE(107), 1,
      sym_reason_phrase,
    STATE(133), 1,
      sym_rest_of_line,
    ACTIONS(9), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [688] = 5,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(145), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      sym_json_key_value,
    STATE(111), 1,
      sym__json_key,
    STATE(121), 1,
      sym__key_value_list,
  [704] = 3,
    ACTIONS(149), 1,
      sym__nl,
    STATE(31), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(147), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_separator,
  [716] = 3,
    ACTIONS(154), 1,
      sym__nl,
    STATE(31), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(152), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_separator,
  [728] = 3,
    ACTIONS(159), 1,
      sym__nl,
    STATE(31), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(157), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_separator,
  [740] = 5,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(162), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      sym_json_key_value,
    STATE(111), 1,
      sym__json_key,
    STATE(139), 1,
      sym__key_value_list,
  [756] = 3,
    ACTIONS(166), 1,
      sym__nl,
    STATE(57), 1,
      aux_sym_rest_of_line_repeat1,
    ACTIONS(164), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [767] = 4,
    ACTIONS(168), 1,
      sym_header_name,
    ACTIONS(170), 1,
      sym__nl,
    STATE(39), 1,
      aux_sym_request_repeat1,
    STATE(137), 1,
      sym_header,
  [780] = 3,
    STATE(35), 1,
      aux_sym_rest_of_line_repeat1,
    STATE(126), 1,
      sym_rest_of_line,
    ACTIONS(9), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [791] = 1,
    ACTIONS(172), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [798] = 4,
    ACTIONS(174), 1,
      sym_header_name,
    ACTIONS(177), 1,
      sym__nl,
    STATE(39), 1,
      aux_sym_request_repeat1,
    STATE(137), 1,
      sym_header,
  [811] = 3,
    STATE(18), 1,
      aux_sym_identifier_repeat1,
    STATE(124), 1,
      sym_identifier,
    ACTIONS(179), 2,
      aux_sym_identifier_token1,
      sym_variable_ref,
  [822] = 4,
    ACTIONS(168), 1,
      sym_header_name,
    ACTIONS(181), 1,
      sym__nl,
    STATE(58), 1,
      aux_sym_request_repeat1,
    STATE(137), 1,
      sym_header,
  [835] = 3,
    STATE(18), 1,
      aux_sym_identifier_repeat1,
    STATE(123), 1,
      sym_identifier,
    ACTIONS(179), 2,
      aux_sym_identifier_token1,
      sym_variable_ref,
  [846] = 1,
    ACTIONS(183), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [853] = 4,
    ACTIONS(168), 1,
      sym_header_name,
    ACTIONS(185), 1,
      sym__nl,
    STATE(36), 1,
      aux_sym_request_repeat1,
    STATE(137), 1,
      sym_header,
  [866] = 4,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    ACTIONS(189), 1,
      anon_sym_RBRACE,
    ACTIONS(191), 1,
      sym__nl,
    STATE(52), 1,
      aux_sym__key_value_list_repeat1,
  [879] = 3,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    STATE(54), 1,
      aux_sym_string_repeat1,
    ACTIONS(195), 2,
      aux_sym_string_token1,
      sym_variable_ref,
  [890] = 1,
    ACTIONS(197), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [897] = 3,
    STATE(18), 1,
      aux_sym_identifier_repeat1,
    STATE(100), 1,
      sym_identifier,
    ACTIONS(179), 2,
      aux_sym_identifier_token1,
      sym_variable_ref,
  [908] = 1,
    ACTIONS(199), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [915] = 1,
    ACTIONS(199), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [922] = 3,
    STATE(18), 1,
      aux_sym_identifier_repeat1,
    STATE(142), 1,
      sym_identifier,
    ACTIONS(179), 2,
      aux_sym_identifier_token1,
      sym_variable_ref,
  [933] = 4,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    ACTIONS(201), 1,
      anon_sym_RBRACE,
    ACTIONS(203), 1,
      sym__nl,
    STATE(63), 1,
      aux_sym__key_value_list_repeat1,
  [946] = 1,
    ACTIONS(205), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [953] = 3,
    ACTIONS(207), 1,
      anon_sym_DQUOTE,
    STATE(65), 1,
      aux_sym_string_repeat1,
    ACTIONS(209), 2,
      aux_sym_string_token1,
      sym_variable_ref,
  [964] = 1,
    ACTIONS(211), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [971] = 1,
    ACTIONS(211), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [978] = 3,
    ACTIONS(216), 1,
      sym__nl,
    STATE(57), 1,
      aux_sym_rest_of_line_repeat1,
    ACTIONS(213), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [989] = 4,
    ACTIONS(168), 1,
      sym_header_name,
    ACTIONS(218), 1,
      sym__nl,
    STATE(39), 1,
      aux_sym_request_repeat1,
    STATE(137), 1,
      sym_header,
  [1002] = 3,
    STATE(35), 1,
      aux_sym_rest_of_line_repeat1,
    STATE(119), 1,
      sym_rest_of_line,
    ACTIONS(9), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [1013] = 1,
    ACTIONS(220), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_separator,
      sym__nl,
  [1020] = 1,
    ACTIONS(222), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [1027] = 1,
    ACTIONS(222), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [1034] = 3,
    ACTIONS(224), 1,
      anon_sym_COMMA,
    STATE(63), 1,
      aux_sym__key_value_list_repeat1,
    ACTIONS(227), 2,
      anon_sym_RBRACE,
      sym__nl,
  [1045] = 1,
    ACTIONS(229), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [1052] = 3,
    ACTIONS(231), 1,
      anon_sym_DQUOTE,
    STATE(65), 1,
      aux_sym_string_repeat1,
    ACTIONS(233), 2,
      aux_sym_string_token1,
      sym_variable_ref,
  [1063] = 1,
    ACTIONS(236), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [1070] = 1,
    ACTIONS(236), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [1077] = 1,
    ACTIONS(238), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_separator,
      sym__nl,
  [1084] = 1,
    ACTIONS(240), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [1091] = 1,
    ACTIONS(242), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [1098] = 1,
    ACTIONS(123), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_separator,
      sym__nl,
  [1105] = 3,
    STATE(35), 1,
      aux_sym_rest_of_line_repeat1,
    STATE(132), 1,
      sym_rest_of_line,
    ACTIONS(9), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [1116] = 4,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(244), 1,
      sym__nl,
    STATE(82), 1,
      sym_json_key_value,
    STATE(111), 1,
      sym__json_key,
  [1129] = 3,
    ACTIONS(246), 1,
      anon_sym_COMMA,
    ACTIONS(248), 1,
      anon_sym_RBRACK,
    STATE(85), 1,
      aux_sym__json_list_values_repeat1,
  [1139] = 3,
    ACTIONS(250), 1,
      anon_sym_AMP,
    ACTIONS(252), 1,
      sym__nl,
    STATE(80), 1,
      aux_sym_url_encoded_body_repeat1,
  [1149] = 3,
    ACTIONS(254), 1,
      ts_builtin_sym_end,
    ACTIONS(256), 1,
      sym__nl,
    STATE(2), 1,
      aux_sym_source_file_repeat1,
  [1159] = 3,
    ACTIONS(258), 1,
      ts_builtin_sym_end,
    ACTIONS(260), 1,
      sym_separator,
    STATE(78), 1,
      aux_sym_source_file_repeat2,
  [1169] = 3,
    ACTIONS(254), 1,
      ts_builtin_sym_end,
    ACTIONS(262), 1,
      sym_separator,
    STATE(96), 1,
      aux_sym_source_file_repeat2,
  [1179] = 3,
    ACTIONS(250), 1,
      anon_sym_AMP,
    ACTIONS(264), 1,
      sym__nl,
    STATE(75), 1,
      aux_sym_url_encoded_body_repeat1,
  [1189] = 3,
    ACTIONS(266), 1,
      anon_sym_AMP,
    ACTIONS(269), 1,
      sym__nl,
    STATE(80), 1,
      aux_sym_url_encoded_body_repeat1,
  [1199] = 3,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    STATE(86), 1,
      sym_json_key_value,
    STATE(111), 1,
      sym__json_key,
  [1209] = 1,
    ACTIONS(227), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym__nl,
  [1215] = 1,
    ACTIONS(271), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym__nl,
  [1221] = 2,
    ACTIONS(275), 1,
      sym__nl,
    ACTIONS(273), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1229] = 3,
    ACTIONS(273), 1,
      anon_sym_RBRACK,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    STATE(85), 1,
      aux_sym__json_list_values_repeat1,
  [1239] = 1,
    ACTIONS(280), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym__nl,
  [1245] = 3,
    ACTIONS(246), 1,
      anon_sym_COMMA,
    ACTIONS(282), 1,
      anon_sym_RBRACK,
    STATE(74), 1,
      aux_sym__json_list_values_repeat1,
  [1255] = 2,
    ACTIONS(286), 1,
      sym__nl,
    ACTIONS(284), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1263] = 2,
    ACTIONS(288), 1,
      sym__nl,
    ACTIONS(211), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1271] = 2,
    ACTIONS(290), 1,
      sym__nl,
    ACTIONS(183), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1279] = 3,
    ACTIONS(256), 1,
      sym__nl,
    ACTIONS(292), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      aux_sym_source_file_repeat1,
  [1289] = 2,
    ACTIONS(294), 1,
      sym__nl,
    ACTIONS(199), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1297] = 2,
    ACTIONS(296), 1,
      sym__nl,
    ACTIONS(197), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1305] = 2,
    ACTIONS(298), 1,
      sym__nl,
    ACTIONS(222), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1313] = 2,
    ACTIONS(300), 1,
      sym__nl,
    ACTIONS(236), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1321] = 3,
    ACTIONS(302), 1,
      ts_builtin_sym_end,
    ACTIONS(304), 1,
      sym_separator,
    STATE(96), 1,
      aux_sym_source_file_repeat2,
  [1331] = 3,
    ACTIONS(307), 1,
      sym__identifier,
    STATE(102), 1,
      sym_url_encoded_key_value,
    STATE(130), 1,
      sym_url_encoded_key,
  [1341] = 2,
    ACTIONS(309), 1,
      sym__nl,
    STATE(33), 1,
      aux_sym_source_file_repeat1,
  [1348] = 2,
    ACTIONS(311), 1,
      sym__nl,
    STATE(32), 1,
      aux_sym_source_file_repeat1,
  [1355] = 1,
    ACTIONS(313), 2,
      anon_sym_AMP,
      sym__nl,
  [1360] = 1,
    ACTIONS(315), 2,
      ts_builtin_sym_end,
      sym_separator,
  [1365] = 1,
    ACTIONS(269), 2,
      anon_sym_AMP,
      sym__nl,
  [1370] = 1,
    ACTIONS(177), 2,
      sym_header_name,
      sym__nl,
  [1375] = 2,
    ACTIONS(256), 1,
      sym__nl,
    STATE(2), 1,
      aux_sym_source_file_repeat1,
  [1382] = 1,
    ACTIONS(317), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1387] = 1,
    ACTIONS(284), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1392] = 1,
    ACTIONS(319), 1,
      sym__nl,
  [1396] = 1,
    ACTIONS(321), 1,
      anon_sym_EQ,
  [1400] = 1,
    ACTIONS(145), 1,
      anon_sym_RBRACE,
  [1404] = 1,
    ACTIONS(323), 1,
      ts_builtin_sym_end,
  [1408] = 1,
    ACTIONS(325), 1,
      anon_sym_COLON2,
  [1412] = 1,
    ACTIONS(327), 1,
      sym__nl,
  [1416] = 1,
    ACTIONS(329), 1,
      sym_status_code,
  [1420] = 1,
    ACTIONS(331), 1,
      sym__nl,
  [1424] = 1,
    ACTIONS(333), 1,
      anon_sym_RBRACK,
  [1428] = 1,
    ACTIONS(335), 1,
      sym_status_code,
  [1432] = 1,
    ACTIONS(337), 1,
      sym__nl,
  [1436] = 1,
    ACTIONS(339), 1,
      sym__nl,
  [1440] = 1,
    ACTIONS(341), 1,
      sym__nl,
  [1444] = 1,
    ACTIONS(343), 1,
      sym__nl,
  [1448] = 1,
    ACTIONS(345), 1,
      anon_sym_RBRACE,
  [1452] = 1,
    ACTIONS(347), 1,
      sym__nl,
  [1456] = 1,
    ACTIONS(349), 1,
      anon_sym_DQUOTE,
  [1460] = 1,
    ACTIONS(351), 1,
      anon_sym_EQ2,
  [1464] = 1,
    ACTIONS(59), 1,
      anon_sym_RBRACK,
  [1468] = 1,
    ACTIONS(353), 1,
      sym__nl,
  [1472] = 1,
    ACTIONS(355), 1,
      sym__nl,
  [1476] = 1,
    ACTIONS(357), 1,
      anon_sym_COLON2,
  [1480] = 1,
    ACTIONS(201), 1,
      anon_sym_RBRACE,
  [1484] = 1,
    ACTIONS(359), 1,
      anon_sym_EQ,
  [1488] = 1,
    ACTIONS(361), 1,
      sym__nl,
  [1492] = 1,
    ACTIONS(363), 1,
      sym__nl,
  [1496] = 1,
    ACTIONS(365), 1,
      sym__nl,
  [1500] = 1,
    ACTIONS(367), 1,
      anon_sym_COLON,
  [1504] = 1,
    ACTIONS(369), 1,
      aux_sym_http_version_token1,
  [1508] = 1,
    ACTIONS(162), 1,
      anon_sym_RBRACE,
  [1512] = 1,
    ACTIONS(371), 1,
      sym__nl,
  [1516] = 1,
    ACTIONS(61), 1,
      anon_sym_RBRACK,
  [1520] = 1,
    ACTIONS(373), 1,
      anon_sym_RBRACE,
  [1524] = 1,
    ACTIONS(375), 1,
      anon_sym_RBRACK,
  [1528] = 1,
    ACTIONS(377), 1,
      sym__nl,
  [1532] = 1,
    ACTIONS(379), 1,
      anon_sym_EQ2,
  [1536] = 1,
    ACTIONS(381), 1,
      anon_sym_RBRACE,
  [1540] = 1,
    ACTIONS(383), 1,
      sym__nl,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 49,
  [SMALL_STATE(4)] = 92,
  [SMALL_STATE(5)] = 130,
  [SMALL_STATE(6)] = 166,
  [SMALL_STATE(7)] = 202,
  [SMALL_STATE(8)] = 240,
  [SMALL_STATE(9)] = 278,
  [SMALL_STATE(10)] = 316,
  [SMALL_STATE(11)] = 349,
  [SMALL_STATE(12)] = 382,
  [SMALL_STATE(13)] = 412,
  [SMALL_STATE(14)] = 439,
  [SMALL_STATE(15)] = 466,
  [SMALL_STATE(16)] = 483,
  [SMALL_STATE(17)] = 497,
  [SMALL_STATE(18)] = 511,
  [SMALL_STATE(19)] = 525,
  [SMALL_STATE(20)] = 544,
  [SMALL_STATE(21)] = 559,
  [SMALL_STATE(22)] = 570,
  [SMALL_STATE(23)] = 581,
  [SMALL_STATE(24)] = 600,
  [SMALL_STATE(25)] = 615,
  [SMALL_STATE(26)] = 630,
  [SMALL_STATE(27)] = 645,
  [SMALL_STATE(28)] = 660,
  [SMALL_STATE(29)] = 674,
  [SMALL_STATE(30)] = 688,
  [SMALL_STATE(31)] = 704,
  [SMALL_STATE(32)] = 716,
  [SMALL_STATE(33)] = 728,
  [SMALL_STATE(34)] = 740,
  [SMALL_STATE(35)] = 756,
  [SMALL_STATE(36)] = 767,
  [SMALL_STATE(37)] = 780,
  [SMALL_STATE(38)] = 791,
  [SMALL_STATE(39)] = 798,
  [SMALL_STATE(40)] = 811,
  [SMALL_STATE(41)] = 822,
  [SMALL_STATE(42)] = 835,
  [SMALL_STATE(43)] = 846,
  [SMALL_STATE(44)] = 853,
  [SMALL_STATE(45)] = 866,
  [SMALL_STATE(46)] = 879,
  [SMALL_STATE(47)] = 890,
  [SMALL_STATE(48)] = 897,
  [SMALL_STATE(49)] = 908,
  [SMALL_STATE(50)] = 915,
  [SMALL_STATE(51)] = 922,
  [SMALL_STATE(52)] = 933,
  [SMALL_STATE(53)] = 946,
  [SMALL_STATE(54)] = 953,
  [SMALL_STATE(55)] = 964,
  [SMALL_STATE(56)] = 971,
  [SMALL_STATE(57)] = 978,
  [SMALL_STATE(58)] = 989,
  [SMALL_STATE(59)] = 1002,
  [SMALL_STATE(60)] = 1013,
  [SMALL_STATE(61)] = 1020,
  [SMALL_STATE(62)] = 1027,
  [SMALL_STATE(63)] = 1034,
  [SMALL_STATE(64)] = 1045,
  [SMALL_STATE(65)] = 1052,
  [SMALL_STATE(66)] = 1063,
  [SMALL_STATE(67)] = 1070,
  [SMALL_STATE(68)] = 1077,
  [SMALL_STATE(69)] = 1084,
  [SMALL_STATE(70)] = 1091,
  [SMALL_STATE(71)] = 1098,
  [SMALL_STATE(72)] = 1105,
  [SMALL_STATE(73)] = 1116,
  [SMALL_STATE(74)] = 1129,
  [SMALL_STATE(75)] = 1139,
  [SMALL_STATE(76)] = 1149,
  [SMALL_STATE(77)] = 1159,
  [SMALL_STATE(78)] = 1169,
  [SMALL_STATE(79)] = 1179,
  [SMALL_STATE(80)] = 1189,
  [SMALL_STATE(81)] = 1199,
  [SMALL_STATE(82)] = 1209,
  [SMALL_STATE(83)] = 1215,
  [SMALL_STATE(84)] = 1221,
  [SMALL_STATE(85)] = 1229,
  [SMALL_STATE(86)] = 1239,
  [SMALL_STATE(87)] = 1245,
  [SMALL_STATE(88)] = 1255,
  [SMALL_STATE(89)] = 1263,
  [SMALL_STATE(90)] = 1271,
  [SMALL_STATE(91)] = 1279,
  [SMALL_STATE(92)] = 1289,
  [SMALL_STATE(93)] = 1297,
  [SMALL_STATE(94)] = 1305,
  [SMALL_STATE(95)] = 1313,
  [SMALL_STATE(96)] = 1321,
  [SMALL_STATE(97)] = 1331,
  [SMALL_STATE(98)] = 1341,
  [SMALL_STATE(99)] = 1348,
  [SMALL_STATE(100)] = 1355,
  [SMALL_STATE(101)] = 1360,
  [SMALL_STATE(102)] = 1365,
  [SMALL_STATE(103)] = 1370,
  [SMALL_STATE(104)] = 1375,
  [SMALL_STATE(105)] = 1382,
  [SMALL_STATE(106)] = 1387,
  [SMALL_STATE(107)] = 1392,
  [SMALL_STATE(108)] = 1396,
  [SMALL_STATE(109)] = 1400,
  [SMALL_STATE(110)] = 1404,
  [SMALL_STATE(111)] = 1408,
  [SMALL_STATE(112)] = 1412,
  [SMALL_STATE(113)] = 1416,
  [SMALL_STATE(114)] = 1420,
  [SMALL_STATE(115)] = 1424,
  [SMALL_STATE(116)] = 1428,
  [SMALL_STATE(117)] = 1432,
  [SMALL_STATE(118)] = 1436,
  [SMALL_STATE(119)] = 1440,
  [SMALL_STATE(120)] = 1444,
  [SMALL_STATE(121)] = 1448,
  [SMALL_STATE(122)] = 1452,
  [SMALL_STATE(123)] = 1456,
  [SMALL_STATE(124)] = 1460,
  [SMALL_STATE(125)] = 1464,
  [SMALL_STATE(126)] = 1468,
  [SMALL_STATE(127)] = 1472,
  [SMALL_STATE(128)] = 1476,
  [SMALL_STATE(129)] = 1480,
  [SMALL_STATE(130)] = 1484,
  [SMALL_STATE(131)] = 1488,
  [SMALL_STATE(132)] = 1492,
  [SMALL_STATE(133)] = 1496,
  [SMALL_STATE(134)] = 1500,
  [SMALL_STATE(135)] = 1504,
  [SMALL_STATE(136)] = 1508,
  [SMALL_STATE(137)] = 1512,
  [SMALL_STATE(138)] = 1516,
  [SMALL_STATE(139)] = 1520,
  [SMALL_STATE(140)] = 1524,
  [SMALL_STATE(141)] = 1528,
  [SMALL_STATE(142)] = 1532,
  [SMALL_STATE(143)] = 1536,
  [SMALL_STATE(144)] = 1540,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 4, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 4, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 3, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 3, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__block_repeat1, 2, 0, 0),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2, 0, 0),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block, 2, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0), REDUCE(aux_sym__block_repeat1, 1, 0, 0),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0), REDUCE(aux_sym__block_repeat1, 1, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 5, 0, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, 0, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block, 1, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2, 0, 0),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block, 3, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 0),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_request, 5, 0, 0), SHIFT(31),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 0),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_request, 6, 0, 0), SHIFT(31),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest_of_line, 1, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 1, 0, 0),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0), SHIFT_REPEAT(134),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 2, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value_list, 1, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_list, 2, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 3, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value_list, 2, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_list, 3, 0, 0),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rest_of_line_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rest_of_line_repeat1, 2, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 6, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 4, 0, 0),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__key_value_list_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__key_value_list_repeat1, 2, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_list, 4, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 7, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 5, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_list, 5, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_list_values, 2, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encoded_body, 2, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encoded_body, 1, 0, 0),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_url_encoded_body_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_url_encoded_body_repeat1, 2, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_key_value, 3, 0, 3),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 2, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__key_value_list_repeat1, 3, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_list_values, 1, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 3, 0, 0),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(104),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encoded_key_value, 3, 0, 3),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 3, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 4, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response_start_line, 3, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encoded_key, 1, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_line, 2, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_version, 2, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, 0, 2),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_key, 3, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reason_phrase, 1, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_line, 1, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value_list, 3, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1, 0, 0),
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
