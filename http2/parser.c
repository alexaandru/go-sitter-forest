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
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 8,
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
  [51] = 39,
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
  [70] = 22,
  [71] = 58,
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
  [89] = 42,
  [90] = 46,
  [91] = 49,
  [92] = 55,
  [93] = 61,
  [94] = 66,
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
  [132] = 111,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 110,
  [137] = 137,
  [138] = 138,
  [139] = 114,
  [140] = 129,
  [141] = 106,
  [142] = 142,
  [143] = 143,
  [144] = 142,
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
      if (lookahead == '.') ADVANCE(82);
      if (lookahead == ':') ADVANCE(71);
      if (lookahead == '=') ADVANCE(66);
      if (lookahead == '@') ADVANCE(67);
      if (lookahead == 'C') ADVANCE(82);
      if (lookahead == 'D') ADVANCE(82);
      if (lookahead == 'G') ADVANCE(82);
      if (lookahead == 'H') ADVANCE(82);
      if (lookahead == 'L') ADVANCE(82);
      if (lookahead == 'O') ADVANCE(82);
      if (lookahead == 'P') ADVANCE(82);
      if (lookahead == 'T') ADVANCE(82);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(77);
      if (lookahead == 'f') ADVANCE(82);
      if (lookahead == 'n') ADVANCE(82);
      if (lookahead == 't') ADVANCE(82);
      if (lookahead == '{') ADVANCE(74);
      if (lookahead == '}') ADVANCE(75);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == ' ') ADVANCE(61);
      if (lookahead == '#') ADVANCE(63);
      if (lookahead == '@') ADVANCE(68);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == '{') ADVANCE(73);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
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
        ' ', 92,
        '@', 67,
        'C', 99,
        'D', 95,
        'G', 96,
        'H', 97,
        'L', 98,
        'O', 100,
        'P', 94,
        'T', 101,
        '{', 102,
        '\n', 103,
        '\r', 103,
      );
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 5:
      if (lookahead == ' ') SKIP(6);
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == ':') ADVANCE(71);
      if (lookahead == '=') ADVANCE(66);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(77);
      if (lookahead == 'f') ADVANCE(42);
      if (lookahead == 'n') ADVANCE(50);
      if (lookahead == 't') ADVANCE(47);
      if (lookahead == '{') ADVANCE(74);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(103);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 6:
      if (lookahead == ' ') SKIP(6);
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == ':') ADVANCE(71);
      if (lookahead == '=') ADVANCE(66);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(77);
      if (lookahead == 'f') ADVANCE(42);
      if (lookahead == 'n') ADVANCE(50);
      if (lookahead == 't') ADVANCE(47);
      if (lookahead == '{') ADVANCE(74);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 7:
      if (lookahead == ' ') SKIP(8);
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '&') ADVANCE(65);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == '=') ADVANCE(69);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(103);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead == '{') ADVANCE(102);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(103);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(59);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(60);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(87);
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '{') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(86);
      END_STATE();
    case 12:
      if (lookahead == ' ') SKIP(12);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 13:
      if (lookahead == ' ') SKIP(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 14:
      if (lookahead == ' ') SKIP(14);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(78);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(79);
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
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(89);
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
      if (lookahead == '}') ADVANCE(90);
      END_STATE();
    case 54:
      if (eof) ADVANCE(56);
      if (lookahead == ' ') SKIP(54);
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == '&') ADVANCE(65);
      if (lookahead == ',') ADVANCE(70);
      if (lookahead == '.') ADVANCE(82);
      if (lookahead == ':') ADVANCE(71);
      if (lookahead == '=') ADVANCE(66);
      if (lookahead == '@') ADVANCE(67);
      if (lookahead == 'C') ADVANCE(82);
      if (lookahead == 'D') ADVANCE(82);
      if (lookahead == 'G') ADVANCE(82);
      if (lookahead == 'H') ADVANCE(82);
      if (lookahead == 'L') ADVANCE(82);
      if (lookahead == 'O') ADVANCE(82);
      if (lookahead == 'P') ADVANCE(82);
      if (lookahead == 'T') ADVANCE(82);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(77);
      if (lookahead == 'f') ADVANCE(82);
      if (lookahead == 'n') ADVANCE(82);
      if (lookahead == 't') ADVANCE(82);
      if (lookahead == '{') ADVANCE(74);
      if (lookahead == '}') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 55:
      if (eof) ADVANCE(56);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '@') ADVANCE(68);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == '{') ADVANCE(73);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(104);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
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
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == '{') ADVANCE(73);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == '#') ADVANCE(78);
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
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(52);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_separator);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_http_version_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_status_code);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == ' ') ADVANCE(87);
      if (lookahead == '{') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(86);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '{') ADVANCE(52);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_variable_ref);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      ADVANCE_MAP(
        ' ', 92,
        '@', 67,
        'C', 99,
        'D', 95,
        'G', 96,
        'H', 97,
        'L', 98,
        'O', 100,
        'P', 94,
        'T', 101,
        '{', 102,
      );
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(91);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead == '{') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(91);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == 'A') ADVANCE(40);
      if (lookahead == 'O') ADVANCE(35);
      if (lookahead == 'U') ADVANCE(37);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == 'E') ADVANCE(29);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == 'E') ADVANCE(37);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == 'E') ADVANCE(18);
      if (lookahead == 'T') ADVANCE(38);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == 'I') ADVANCE(35);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == 'O') ADVANCE(30);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == 'P') ADVANCE(39);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == 'R') ADVANCE(19);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == '{') ADVANCE(52);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__nl);
      END_STATE();
    case 104:
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
  [5] = {.lex_state = 55},
  [6] = {.lex_state = 55},
  [7] = {.lex_state = 55},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 5},
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
  [38] = {.lex_state = 10},
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 10},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 10},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 11},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 7},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 7},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 11},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 9},
  [57] = {.lex_state = 10},
  [58] = {.lex_state = 9},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 11},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 9},
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
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 10},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 13},
  [109] = {.lex_state = 5},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 5},
  [113] = {.lex_state = 13},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 5},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 5},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
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
  [144] = {.lex_state = 7},
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
    [sym_source_file] = STATE(133),
    [sym__block] = STATE(82),
    [sym_request] = STATE(25),
    [sym_response] = STATE(25),
    [sym_start_line] = STATE(119),
    [sym_url] = STATE(143),
    [sym_variable_declaration] = STATE(3),
    [sym_response_start_line] = STATE(124),
    [sym_http_version] = STATE(113),
    [sym_rest_of_line] = STATE(123),
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
    STATE(98), 1,
      sym__block,
    STATE(113), 1,
      sym_http_version,
    STATE(119), 1,
      sym_start_line,
    STATE(123), 1,
      sym_rest_of_line,
    STATE(124), 1,
      sym_response_start_line,
    STATE(143), 1,
      sym_url,
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
    STATE(119), 1,
      sym_start_line,
    STATE(123), 1,
      sym_rest_of_line,
    STATE(124), 1,
      sym_response_start_line,
    STATE(143), 1,
      sym_url,
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
    STATE(77), 1,
      sym_url_encoded_key_value,
    STATE(125), 1,
      sym_url_encoded_key,
    STATE(138), 1,
      sym_body,
    STATE(117), 2,
      sym_url_encoded_body,
      sym_json_body,
    STATE(126), 2,
      sym_json_object,
      sym_json_list,
    ACTIONS(21), 3,
      anon_sym_AT,
      sym_separator,
      sym__nl,
  [130] = 11,
    ACTIONS(19), 1,
      sym_raw_body,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym__identifier,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    STATE(77), 1,
      sym_url_encoded_key_value,
    STATE(100), 1,
      sym_body,
    STATE(125), 1,
      sym_url_encoded_key,
    STATE(117), 2,
      sym_url_encoded_body,
      sym_json_body,
    STATE(126), 2,
      sym_json_object,
      sym_json_list,
    ACTIONS(31), 3,
      anon_sym_AT,
      sym_separator,
      sym__nl,
  [168] = 11,
    ACTIONS(19), 1,
      sym_raw_body,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym__identifier,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    STATE(77), 1,
      sym_url_encoded_key_value,
    STATE(125), 1,
      sym_url_encoded_key,
    STATE(131), 1,
      sym_body,
    STATE(117), 2,
      sym_url_encoded_body,
      sym_json_body,
    STATE(126), 2,
      sym_json_object,
      sym_json_list,
    ACTIONS(35), 3,
      anon_sym_AT,
      sym_separator,
      sym__nl,
  [206] = 11,
    ACTIONS(19), 1,
      sym_raw_body,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym__identifier,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    STATE(77), 1,
      sym_url_encoded_key_value,
    STATE(101), 1,
      sym_body,
    STATE(125), 1,
      sym_url_encoded_key,
    STATE(117), 2,
      sym_url_encoded_body,
      sym_json_body,
    STATE(126), 2,
      sym_json_object,
      sym_json_list,
    ACTIONS(39), 3,
      anon_sym_AT,
      sym_separator,
      sym__nl,
  [244] = 8,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_RBRACK,
    ACTIONS(51), 1,
      sym__nl,
    STATE(106), 1,
      sym__json_list_values,
    ACTIONS(49), 4,
      sym_number,
      sym_boolean,
      sym_null,
      sym_variable_ref,
    STATE(88), 4,
      sym__json_value,
      sym_json_object,
      sym_json_list,
      sym_string,
  [275] = 8,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_RBRACK,
    ACTIONS(55), 1,
      sym__nl,
    STATE(141), 1,
      sym__json_list_values,
    ACTIONS(49), 4,
      sym_number,
      sym_boolean,
      sym_null,
      sym_variable_ref,
    STATE(88), 4,
      sym__json_value,
      sym_json_object,
      sym_json_list,
      sym_string,
  [306] = 7,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(57), 1,
      anon_sym_RBRACK,
    STATE(129), 1,
      sym__json_list_values,
    ACTIONS(49), 4,
      sym_number,
      sym_boolean,
      sym_null,
      sym_variable_ref,
    STATE(88), 4,
      sym__json_value,
      sym_json_object,
      sym_json_list,
      sym_string,
  [334] = 7,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(59), 1,
      anon_sym_RBRACK,
    STATE(140), 1,
      sym__json_list_values,
    ACTIONS(49), 4,
      sym_number,
      sym_boolean,
      sym_null,
      sym_variable_ref,
    STATE(88), 4,
      sym__json_value,
      sym_json_object,
      sym_json_list,
      sym_string,
  [362] = 6,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    ACTIONS(65), 1,
      sym__nl,
    ACTIONS(63), 4,
      sym_number,
      sym_boolean,
      sym_null,
      sym_variable_ref,
    STATE(83), 4,
      sym__json_value,
      sym_json_object,
      sym_json_list,
      sym_string,
  [387] = 5,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    ACTIONS(67), 4,
      sym_number,
      sym_boolean,
      sym_null,
      sym_variable_ref,
    STATE(86), 4,
      sym__json_value,
      sym_json_object,
      sym_json_list,
      sym_string,
  [409] = 5,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 4,
      sym_number,
      sym_boolean,
      sym_null,
      sym_variable_ref,
    STATE(81), 4,
      sym__json_value,
      sym_json_object,
      sym_json_list,
      sym_string,
  [431] = 4,
    ACTIONS(73), 1,
      anon_sym_AT,
    ACTIONS(76), 1,
      sym__nl,
    STATE(15), 2,
      sym_variable_declaration,
      aux_sym__block_repeat1,
    ACTIONS(71), 4,
      sym_method,
      anon_sym_HTTP_SLASH,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [448] = 3,
    ACTIONS(81), 1,
      sym__nl,
    STATE(16), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(79), 5,
      sym_method,
      anon_sym_AT,
      anon_sym_HTTP_SLASH,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [462] = 3,
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
  [476] = 3,
    STATE(17), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(91), 2,
      aux_sym_identifier_token1,
      sym_variable_ref,
    ACTIONS(89), 4,
      anon_sym_AMP,
      anon_sym_EQ2,
      anon_sym_DQUOTE,
      sym__nl,
  [490] = 6,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      anon_sym_RBRACE,
    ACTIONS(97), 1,
      sym__nl,
    STATE(44), 1,
      sym_json_key_value,
    STATE(110), 1,
      sym__key_value_list,
    STATE(112), 1,
      sym__json_key,
  [509] = 4,
    ACTIONS(101), 1,
      anon_sym_AT,
    ACTIONS(103), 1,
      sym__nl,
    ACTIONS(99), 2,
      ts_builtin_sym_end,
      sym_separator,
    STATE(27), 2,
      sym_variable_declaration,
      aux_sym__block_repeat1,
  [524] = 2,
    ACTIONS(108), 1,
      sym__nl,
    ACTIONS(105), 5,
      sym_method,
      anon_sym_AT,
      anon_sym_HTTP_SLASH,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [535] = 2,
    ACTIONS(113), 1,
      sym__nl,
    ACTIONS(111), 5,
      sym_method,
      anon_sym_AT,
      anon_sym_HTTP_SLASH,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [546] = 6,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      anon_sym_RBRACE,
    ACTIONS(117), 1,
      sym__nl,
    STATE(44), 1,
      sym_json_key_value,
    STATE(112), 1,
      sym__json_key,
    STATE(136), 1,
      sym__key_value_list,
  [565] = 4,
    ACTIONS(101), 1,
      anon_sym_AT,
    ACTIONS(119), 1,
      sym__nl,
    ACTIONS(99), 2,
      ts_builtin_sym_end,
      sym_separator,
    STATE(26), 2,
      sym_variable_declaration,
      aux_sym__block_repeat1,
  [580] = 4,
    ACTIONS(101), 1,
      anon_sym_AT,
    ACTIONS(123), 1,
      sym__nl,
    ACTIONS(121), 2,
      ts_builtin_sym_end,
      sym_separator,
    STATE(24), 2,
      sym_variable_declaration,
      aux_sym__block_repeat1,
  [595] = 4,
    ACTIONS(127), 1,
      anon_sym_AT,
    ACTIONS(130), 1,
      sym__nl,
    ACTIONS(125), 2,
      ts_builtin_sym_end,
      sym_separator,
    STATE(26), 2,
      sym_variable_declaration,
      aux_sym__block_repeat1,
  [610] = 4,
    ACTIONS(101), 1,
      anon_sym_AT,
    ACTIONS(119), 1,
      sym__nl,
    ACTIONS(133), 2,
      ts_builtin_sym_end,
      sym_separator,
    STATE(26), 2,
      sym_variable_declaration,
      aux_sym__block_repeat1,
  [625] = 4,
    STATE(35), 1,
      aux_sym_rest_of_line_repeat1,
    STATE(107), 1,
      sym_url,
    STATE(123), 1,
      sym_rest_of_line,
    ACTIONS(9), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [639] = 4,
    STATE(35), 1,
      aux_sym_rest_of_line_repeat1,
    STATE(116), 1,
      sym_reason_phrase,
    STATE(130), 1,
      sym_rest_of_line,
    ACTIONS(9), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [653] = 5,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(135), 1,
      anon_sym_RBRACE,
    STATE(44), 1,
      sym_json_key_value,
    STATE(112), 1,
      sym__json_key,
    STATE(114), 1,
      sym__key_value_list,
  [669] = 3,
    ACTIONS(139), 1,
      sym__nl,
    STATE(31), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(137), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_separator,
  [681] = 3,
    ACTIONS(144), 1,
      sym__nl,
    STATE(31), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(142), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_separator,
  [693] = 3,
    ACTIONS(149), 1,
      sym__nl,
    STATE(31), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(147), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_separator,
  [705] = 5,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(152), 1,
      anon_sym_RBRACE,
    STATE(44), 1,
      sym_json_key_value,
    STATE(112), 1,
      sym__json_key,
    STATE(139), 1,
      sym__key_value_list,
  [721] = 3,
    ACTIONS(156), 1,
      sym__nl,
    STATE(56), 1,
      aux_sym_rest_of_line_repeat1,
    ACTIONS(154), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [732] = 4,
    ACTIONS(158), 1,
      sym_header_name,
    ACTIONS(160), 1,
      sym__nl,
    STATE(38), 1,
      aux_sym_request_repeat1,
    STATE(137), 1,
      sym_header,
  [745] = 3,
    STATE(35), 1,
      aux_sym_rest_of_line_repeat1,
    STATE(121), 1,
      sym_rest_of_line,
    ACTIONS(9), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [756] = 4,
    ACTIONS(162), 1,
      sym_header_name,
    ACTIONS(165), 1,
      sym__nl,
    STATE(38), 1,
      aux_sym_request_repeat1,
    STATE(137), 1,
      sym_header,
  [769] = 3,
    STATE(18), 1,
      aux_sym_identifier_repeat1,
    STATE(144), 1,
      sym_identifier,
    ACTIONS(167), 2,
      aux_sym_identifier_token1,
      sym_variable_ref,
  [780] = 4,
    ACTIONS(158), 1,
      sym_header_name,
    ACTIONS(169), 1,
      sym__nl,
    STATE(57), 1,
      aux_sym_request_repeat1,
    STATE(137), 1,
      sym_header,
  [793] = 3,
    STATE(18), 1,
      aux_sym_identifier_repeat1,
    STATE(127), 1,
      sym_identifier,
    ACTIONS(167), 2,
      aux_sym_identifier_token1,
      sym_variable_ref,
  [804] = 1,
    ACTIONS(171), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [811] = 4,
    ACTIONS(158), 1,
      sym_header_name,
    ACTIONS(173), 1,
      sym__nl,
    STATE(36), 1,
      aux_sym_request_repeat1,
    STATE(137), 1,
      sym_header,
  [824] = 4,
    ACTIONS(175), 1,
      anon_sym_COMMA,
    ACTIONS(177), 1,
      anon_sym_RBRACE,
    ACTIONS(179), 1,
      sym__nl,
    STATE(72), 1,
      aux_sym__key_value_list_repeat1,
  [837] = 3,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    STATE(53), 1,
      aux_sym_string_repeat1,
    ACTIONS(183), 2,
      aux_sym_string_token1,
      sym_variable_ref,
  [848] = 1,
    ACTIONS(185), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [855] = 3,
    STATE(18), 1,
      aux_sym_identifier_repeat1,
    STATE(97), 1,
      sym_identifier,
    ACTIONS(167), 2,
      aux_sym_identifier_token1,
      sym_variable_ref,
  [866] = 1,
    ACTIONS(187), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [873] = 1,
    ACTIONS(187), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [880] = 4,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(189), 1,
      sym__nl,
    STATE(96), 1,
      sym_json_key_value,
    STATE(112), 1,
      sym__json_key,
  [893] = 3,
    STATE(18), 1,
      aux_sym_identifier_repeat1,
    STATE(142), 1,
      sym_identifier,
    ACTIONS(167), 2,
      aux_sym_identifier_token1,
      sym_variable_ref,
  [904] = 1,
    ACTIONS(191), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [911] = 3,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    STATE(64), 1,
      aux_sym_string_repeat1,
    ACTIONS(195), 2,
      aux_sym_string_token1,
      sym_variable_ref,
  [922] = 1,
    ACTIONS(197), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [929] = 1,
    ACTIONS(197), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [936] = 3,
    ACTIONS(202), 1,
      sym__nl,
    STATE(56), 1,
      aux_sym_rest_of_line_repeat1,
    ACTIONS(199), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [947] = 4,
    ACTIONS(158), 1,
      sym_header_name,
    ACTIONS(204), 1,
      sym__nl,
    STATE(38), 1,
      aux_sym_request_repeat1,
    STATE(137), 1,
      sym_header,
  [960] = 3,
    STATE(35), 1,
      aux_sym_rest_of_line_repeat1,
    STATE(111), 1,
      sym_rest_of_line,
    ACTIONS(9), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [971] = 1,
    ACTIONS(206), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_separator,
      sym__nl,
  [978] = 1,
    ACTIONS(208), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [985] = 1,
    ACTIONS(208), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [992] = 3,
    ACTIONS(210), 1,
      anon_sym_COMMA,
    STATE(62), 1,
      aux_sym__key_value_list_repeat1,
    ACTIONS(213), 2,
      anon_sym_RBRACE,
      sym__nl,
  [1003] = 1,
    ACTIONS(215), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [1010] = 3,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    STATE(64), 1,
      aux_sym_string_repeat1,
    ACTIONS(219), 2,
      aux_sym_string_token1,
      sym_variable_ref,
  [1021] = 1,
    ACTIONS(222), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [1028] = 1,
    ACTIONS(222), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [1035] = 1,
    ACTIONS(224), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_separator,
      sym__nl,
  [1042] = 1,
    ACTIONS(226), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [1049] = 1,
    ACTIONS(228), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [1056] = 1,
    ACTIONS(113), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_separator,
      sym__nl,
  [1063] = 3,
    STATE(35), 1,
      aux_sym_rest_of_line_repeat1,
    STATE(132), 1,
      sym_rest_of_line,
    ACTIONS(9), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [1074] = 4,
    ACTIONS(175), 1,
      anon_sym_COMMA,
    ACTIONS(230), 1,
      anon_sym_RBRACE,
    ACTIONS(232), 1,
      sym__nl,
    STATE(62), 1,
      aux_sym__key_value_list_repeat1,
  [1087] = 3,
    ACTIONS(234), 1,
      anon_sym_COMMA,
    ACTIONS(236), 1,
      anon_sym_RBRACK,
    STATE(84), 1,
      aux_sym__json_list_values_repeat1,
  [1097] = 3,
    ACTIONS(238), 1,
      sym__identifier,
    STATE(105), 1,
      sym_url_encoded_key_value,
    STATE(125), 1,
      sym_url_encoded_key,
  [1107] = 3,
    ACTIONS(240), 1,
      anon_sym_AMP,
    ACTIONS(242), 1,
      sym__nl,
    STATE(79), 1,
      aux_sym_url_encoded_body_repeat1,
  [1117] = 3,
    ACTIONS(244), 1,
      ts_builtin_sym_end,
    ACTIONS(246), 1,
      sym__nl,
    STATE(2), 1,
      aux_sym_source_file_repeat1,
  [1127] = 3,
    ACTIONS(240), 1,
      anon_sym_AMP,
    ACTIONS(248), 1,
      sym__nl,
    STATE(75), 1,
      aux_sym_url_encoded_body_repeat1,
  [1137] = 3,
    ACTIONS(244), 1,
      ts_builtin_sym_end,
    ACTIONS(250), 1,
      sym_separator,
    STATE(95), 1,
      aux_sym_source_file_repeat2,
  [1147] = 3,
    ACTIONS(252), 1,
      anon_sym_AMP,
    ACTIONS(255), 1,
      sym__nl,
    STATE(79), 1,
      aux_sym_url_encoded_body_repeat1,
  [1157] = 3,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    STATE(85), 1,
      sym_json_key_value,
    STATE(112), 1,
      sym__json_key,
  [1167] = 1,
    ACTIONS(257), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym__nl,
  [1173] = 3,
    ACTIONS(259), 1,
      ts_builtin_sym_end,
    ACTIONS(261), 1,
      sym_separator,
    STATE(78), 1,
      aux_sym_source_file_repeat2,
  [1183] = 2,
    ACTIONS(265), 1,
      sym__nl,
    ACTIONS(263), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1191] = 3,
    ACTIONS(263), 1,
      anon_sym_RBRACK,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    STATE(84), 1,
      aux_sym__json_list_values_repeat1,
  [1201] = 1,
    ACTIONS(270), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym__nl,
  [1207] = 2,
    ACTIONS(274), 1,
      sym__nl,
    ACTIONS(272), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1215] = 3,
    ACTIONS(246), 1,
      sym__nl,
    ACTIONS(276), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      aux_sym_source_file_repeat1,
  [1225] = 3,
    ACTIONS(234), 1,
      anon_sym_COMMA,
    ACTIONS(278), 1,
      anon_sym_RBRACK,
    STATE(73), 1,
      aux_sym__json_list_values_repeat1,
  [1235] = 2,
    ACTIONS(280), 1,
      sym__nl,
    ACTIONS(171), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1243] = 2,
    ACTIONS(282), 1,
      sym__nl,
    ACTIONS(185), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1251] = 2,
    ACTIONS(284), 1,
      sym__nl,
    ACTIONS(187), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1259] = 2,
    ACTIONS(286), 1,
      sym__nl,
    ACTIONS(197), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1267] = 2,
    ACTIONS(288), 1,
      sym__nl,
    ACTIONS(208), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1275] = 2,
    ACTIONS(290), 1,
      sym__nl,
    ACTIONS(222), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1283] = 3,
    ACTIONS(292), 1,
      ts_builtin_sym_end,
    ACTIONS(294), 1,
      sym_separator,
    STATE(95), 1,
      aux_sym_source_file_repeat2,
  [1293] = 1,
    ACTIONS(213), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym__nl,
  [1299] = 1,
    ACTIONS(297), 2,
      anon_sym_AMP,
      sym__nl,
  [1304] = 1,
    ACTIONS(299), 2,
      ts_builtin_sym_end,
      sym_separator,
  [1309] = 2,
    ACTIONS(246), 1,
      sym__nl,
    STATE(2), 1,
      aux_sym_source_file_repeat1,
  [1316] = 2,
    ACTIONS(301), 1,
      sym__nl,
    STATE(32), 1,
      aux_sym_source_file_repeat1,
  [1323] = 2,
    ACTIONS(303), 1,
      sym__nl,
    STATE(33), 1,
      aux_sym_source_file_repeat1,
  [1330] = 1,
    ACTIONS(272), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1335] = 1,
    ACTIONS(305), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1340] = 1,
    ACTIONS(165), 2,
      sym_header_name,
      sym__nl,
  [1345] = 1,
    ACTIONS(255), 2,
      anon_sym_AMP,
      sym__nl,
  [1350] = 1,
    ACTIONS(59), 1,
      anon_sym_RBRACK,
  [1354] = 1,
    ACTIONS(307), 1,
      sym__nl,
  [1358] = 1,
    ACTIONS(309), 1,
      sym_status_code,
  [1362] = 1,
    ACTIONS(311), 1,
      anon_sym_EQ,
  [1366] = 1,
    ACTIONS(135), 1,
      anon_sym_RBRACE,
  [1370] = 1,
    ACTIONS(313), 1,
      sym__nl,
  [1374] = 1,
    ACTIONS(315), 1,
      anon_sym_COLON2,
  [1378] = 1,
    ACTIONS(317), 1,
      sym_status_code,
  [1382] = 1,
    ACTIONS(319), 1,
      anon_sym_RBRACE,
  [1386] = 1,
    ACTIONS(321), 1,
      sym__nl,
  [1390] = 1,
    ACTIONS(323), 1,
      sym__nl,
  [1394] = 1,
    ACTIONS(325), 1,
      sym__nl,
  [1398] = 1,
    ACTIONS(230), 1,
      anon_sym_RBRACE,
  [1402] = 1,
    ACTIONS(327), 1,
      sym__nl,
  [1406] = 1,
    ACTIONS(329), 1,
      anon_sym_COLON2,
  [1410] = 1,
    ACTIONS(331), 1,
      sym__nl,
  [1414] = 1,
    ACTIONS(333), 1,
      anon_sym_RBRACE,
  [1418] = 1,
    ACTIONS(335), 1,
      sym__nl,
  [1422] = 1,
    ACTIONS(337), 1,
      sym__nl,
  [1426] = 1,
    ACTIONS(339), 1,
      anon_sym_EQ,
  [1430] = 1,
    ACTIONS(341), 1,
      sym__nl,
  [1434] = 1,
    ACTIONS(343), 1,
      anon_sym_DQUOTE,
  [1438] = 1,
    ACTIONS(345), 1,
      sym__nl,
  [1442] = 1,
    ACTIONS(347), 1,
      anon_sym_RBRACK,
  [1446] = 1,
    ACTIONS(349), 1,
      sym__nl,
  [1450] = 1,
    ACTIONS(351), 1,
      sym__nl,
  [1454] = 1,
    ACTIONS(353), 1,
      sym__nl,
  [1458] = 1,
    ACTIONS(355), 1,
      ts_builtin_sym_end,
  [1462] = 1,
    ACTIONS(357), 1,
      anon_sym_COLON,
  [1466] = 1,
    ACTIONS(359), 1,
      aux_sym_http_version_token1,
  [1470] = 1,
    ACTIONS(152), 1,
      anon_sym_RBRACE,
  [1474] = 1,
    ACTIONS(361), 1,
      sym__nl,
  [1478] = 1,
    ACTIONS(363), 1,
      sym__nl,
  [1482] = 1,
    ACTIONS(365), 1,
      anon_sym_RBRACE,
  [1486] = 1,
    ACTIONS(367), 1,
      anon_sym_RBRACK,
  [1490] = 1,
    ACTIONS(57), 1,
      anon_sym_RBRACK,
  [1494] = 1,
    ACTIONS(369), 1,
      anon_sym_EQ2,
  [1498] = 1,
    ACTIONS(371), 1,
      sym__nl,
  [1502] = 1,
    ACTIONS(373), 1,
      anon_sym_EQ2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 49,
  [SMALL_STATE(4)] = 92,
  [SMALL_STATE(5)] = 130,
  [SMALL_STATE(6)] = 168,
  [SMALL_STATE(7)] = 206,
  [SMALL_STATE(8)] = 244,
  [SMALL_STATE(9)] = 275,
  [SMALL_STATE(10)] = 306,
  [SMALL_STATE(11)] = 334,
  [SMALL_STATE(12)] = 362,
  [SMALL_STATE(13)] = 387,
  [SMALL_STATE(14)] = 409,
  [SMALL_STATE(15)] = 431,
  [SMALL_STATE(16)] = 448,
  [SMALL_STATE(17)] = 462,
  [SMALL_STATE(18)] = 476,
  [SMALL_STATE(19)] = 490,
  [SMALL_STATE(20)] = 509,
  [SMALL_STATE(21)] = 524,
  [SMALL_STATE(22)] = 535,
  [SMALL_STATE(23)] = 546,
  [SMALL_STATE(24)] = 565,
  [SMALL_STATE(25)] = 580,
  [SMALL_STATE(26)] = 595,
  [SMALL_STATE(27)] = 610,
  [SMALL_STATE(28)] = 625,
  [SMALL_STATE(29)] = 639,
  [SMALL_STATE(30)] = 653,
  [SMALL_STATE(31)] = 669,
  [SMALL_STATE(32)] = 681,
  [SMALL_STATE(33)] = 693,
  [SMALL_STATE(34)] = 705,
  [SMALL_STATE(35)] = 721,
  [SMALL_STATE(36)] = 732,
  [SMALL_STATE(37)] = 745,
  [SMALL_STATE(38)] = 756,
  [SMALL_STATE(39)] = 769,
  [SMALL_STATE(40)] = 780,
  [SMALL_STATE(41)] = 793,
  [SMALL_STATE(42)] = 804,
  [SMALL_STATE(43)] = 811,
  [SMALL_STATE(44)] = 824,
  [SMALL_STATE(45)] = 837,
  [SMALL_STATE(46)] = 848,
  [SMALL_STATE(47)] = 855,
  [SMALL_STATE(48)] = 866,
  [SMALL_STATE(49)] = 873,
  [SMALL_STATE(50)] = 880,
  [SMALL_STATE(51)] = 893,
  [SMALL_STATE(52)] = 904,
  [SMALL_STATE(53)] = 911,
  [SMALL_STATE(54)] = 922,
  [SMALL_STATE(55)] = 929,
  [SMALL_STATE(56)] = 936,
  [SMALL_STATE(57)] = 947,
  [SMALL_STATE(58)] = 960,
  [SMALL_STATE(59)] = 971,
  [SMALL_STATE(60)] = 978,
  [SMALL_STATE(61)] = 985,
  [SMALL_STATE(62)] = 992,
  [SMALL_STATE(63)] = 1003,
  [SMALL_STATE(64)] = 1010,
  [SMALL_STATE(65)] = 1021,
  [SMALL_STATE(66)] = 1028,
  [SMALL_STATE(67)] = 1035,
  [SMALL_STATE(68)] = 1042,
  [SMALL_STATE(69)] = 1049,
  [SMALL_STATE(70)] = 1056,
  [SMALL_STATE(71)] = 1063,
  [SMALL_STATE(72)] = 1074,
  [SMALL_STATE(73)] = 1087,
  [SMALL_STATE(74)] = 1097,
  [SMALL_STATE(75)] = 1107,
  [SMALL_STATE(76)] = 1117,
  [SMALL_STATE(77)] = 1127,
  [SMALL_STATE(78)] = 1137,
  [SMALL_STATE(79)] = 1147,
  [SMALL_STATE(80)] = 1157,
  [SMALL_STATE(81)] = 1167,
  [SMALL_STATE(82)] = 1173,
  [SMALL_STATE(83)] = 1183,
  [SMALL_STATE(84)] = 1191,
  [SMALL_STATE(85)] = 1201,
  [SMALL_STATE(86)] = 1207,
  [SMALL_STATE(87)] = 1215,
  [SMALL_STATE(88)] = 1225,
  [SMALL_STATE(89)] = 1235,
  [SMALL_STATE(90)] = 1243,
  [SMALL_STATE(91)] = 1251,
  [SMALL_STATE(92)] = 1259,
  [SMALL_STATE(93)] = 1267,
  [SMALL_STATE(94)] = 1275,
  [SMALL_STATE(95)] = 1283,
  [SMALL_STATE(96)] = 1293,
  [SMALL_STATE(97)] = 1299,
  [SMALL_STATE(98)] = 1304,
  [SMALL_STATE(99)] = 1309,
  [SMALL_STATE(100)] = 1316,
  [SMALL_STATE(101)] = 1323,
  [SMALL_STATE(102)] = 1330,
  [SMALL_STATE(103)] = 1335,
  [SMALL_STATE(104)] = 1340,
  [SMALL_STATE(105)] = 1345,
  [SMALL_STATE(106)] = 1350,
  [SMALL_STATE(107)] = 1354,
  [SMALL_STATE(108)] = 1358,
  [SMALL_STATE(109)] = 1362,
  [SMALL_STATE(110)] = 1366,
  [SMALL_STATE(111)] = 1370,
  [SMALL_STATE(112)] = 1374,
  [SMALL_STATE(113)] = 1378,
  [SMALL_STATE(114)] = 1382,
  [SMALL_STATE(115)] = 1386,
  [SMALL_STATE(116)] = 1390,
  [SMALL_STATE(117)] = 1394,
  [SMALL_STATE(118)] = 1398,
  [SMALL_STATE(119)] = 1402,
  [SMALL_STATE(120)] = 1406,
  [SMALL_STATE(121)] = 1410,
  [SMALL_STATE(122)] = 1414,
  [SMALL_STATE(123)] = 1418,
  [SMALL_STATE(124)] = 1422,
  [SMALL_STATE(125)] = 1426,
  [SMALL_STATE(126)] = 1430,
  [SMALL_STATE(127)] = 1434,
  [SMALL_STATE(128)] = 1438,
  [SMALL_STATE(129)] = 1442,
  [SMALL_STATE(130)] = 1446,
  [SMALL_STATE(131)] = 1450,
  [SMALL_STATE(132)] = 1454,
  [SMALL_STATE(133)] = 1458,
  [SMALL_STATE(134)] = 1462,
  [SMALL_STATE(135)] = 1466,
  [SMALL_STATE(136)] = 1470,
  [SMALL_STATE(137)] = 1474,
  [SMALL_STATE(138)] = 1478,
  [SMALL_STATE(139)] = 1482,
  [SMALL_STATE(140)] = 1486,
  [SMALL_STATE(141)] = 1490,
  [SMALL_STATE(142)] = 1494,
  [SMALL_STATE(143)] = 1498,
  [SMALL_STATE(144)] = 1502,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 4, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 4, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 3, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 3, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__block_repeat1, 2, 0, 0),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2, 0, 0),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block, 2, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0), REDUCE(aux_sym__block_repeat1, 1, 0, 0),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0), REDUCE(aux_sym__block_repeat1, 1, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 5, 0, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, 0, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block, 1, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2, 0, 0),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block, 3, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 0),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_request, 5, 0, 0), SHIFT(31),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 0),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_request, 6, 0, 0), SHIFT(31),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest_of_line, 1, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0), SHIFT_REPEAT(134),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 2, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value_list, 1, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_list, 2, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 3, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_list, 3, 0, 0),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rest_of_line_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rest_of_line_repeat1, 2, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 6, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 4, 0, 0),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__key_value_list_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__key_value_list_repeat1, 2, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [219] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_list, 4, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 7, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 5, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_list, 5, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value_list, 2, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_list_values, 2, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encoded_body, 2, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encoded_body, 1, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_url_encoded_body_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_url_encoded_body_repeat1, 2, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_key_value, 3, 0, 3),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 2, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__key_value_list_repeat1, 3, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 3, 0, 0),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_list_values, 1, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(99),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encoded_key_value, 3, 0, 3),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 3, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 4, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_line, 2, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_version, 2, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encoded_key, 1, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response_start_line, 3, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_key, 3, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, 0, 2),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value_list, 3, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 1, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reason_phrase, 1, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [355] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_line, 1, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
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
