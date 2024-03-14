#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 97
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 46
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  sym__eol = 1,
  sym_uri = 2,
  aux_sym_comment_token1 = 3,
  aux_sym_comment_token2 = 4,
  aux_sym_comment_token3 = 5,
  anon_sym_POUND = 6,
  aux_sym_tag_token1 = 7,
  anon_sym_COLON = 8,
  aux_sym_tag_token2 = 9,
  anon_sym_COMMA = 10,
  sym__dec = 11,
  anon_sym_x = 12,
  anon_sym_DASH = 13,
  anon_sym_DOT = 14,
  anon_sym_0X = 15,
  aux_sym_hex_token1 = 16,
  anon_sym_DQUOTE = 17,
  aux_sym_string_token1 = 18,
  aux_sym_attribute_token1 = 19,
  anon_sym_EQ = 20,
  anon_sym_VOD = 21,
  anon_sym_EVENT = 22,
  sym_date_time_msec = 23,
  anon_sym_AT = 24,
  aux_sym_title_token1 = 25,
  sym_file = 26,
  sym_comment = 27,
  sym_tag = 28,
  sym_resolution = 29,
  sym_float = 30,
  sym_dec = 31,
  sym_hex = 32,
  sym_string = 33,
  sym__value = 34,
  sym_attribute_list = 35,
  sym_attribute = 36,
  sym_enum = 37,
  sym_range = 38,
  sym_attributes = 39,
  sym_title = 40,
  aux_sym_file_repeat1 = 41,
  aux_sym_string_repeat1 = 42,
  aux_sym_attribute_list_repeat1 = 43,
  aux_sym_attributes_repeat1 = 44,
  aux_sym_title_repeat1 = 45,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__eol] = "_eol",
  [sym_uri] = "uri",
  [aux_sym_comment_token1] = "comment_token1",
  [aux_sym_comment_token2] = "comment_token2",
  [aux_sym_comment_token3] = "comment_token3",
  [anon_sym_POUND] = "#",
  [aux_sym_tag_token1] = "tag_name",
  [anon_sym_COLON] = ":",
  [aux_sym_tag_token2] = "tag_token2",
  [anon_sym_COMMA] = ",",
  [sym__dec] = "_dec",
  [anon_sym_x] = "x",
  [anon_sym_DASH] = "-",
  [anon_sym_DOT] = ".",
  [anon_sym_0X] = "0X",
  [aux_sym_hex_token1] = "hex_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [aux_sym_attribute_token1] = "attribute_name",
  [anon_sym_EQ] = "=",
  [anon_sym_VOD] = "VOD",
  [anon_sym_EVENT] = "EVENT",
  [sym_date_time_msec] = "date_time_msec",
  [anon_sym_AT] = "@",
  [aux_sym_title_token1] = "title_token1",
  [sym_file] = "file",
  [sym_comment] = "comment",
  [sym_tag] = "tag",
  [sym_resolution] = "resolution",
  [sym_float] = "float",
  [sym_dec] = "dec",
  [sym_hex] = "hex",
  [sym_string] = "string",
  [sym__value] = "_value",
  [sym_attribute_list] = "attribute_list",
  [sym_attribute] = "attribute",
  [sym_enum] = "enum",
  [sym_range] = "range",
  [sym_attributes] = "attributes",
  [sym_title] = "title",
  [aux_sym_file_repeat1] = "file_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_attribute_list_repeat1] = "attribute_list_repeat1",
  [aux_sym_attributes_repeat1] = "attributes_repeat1",
  [aux_sym_title_repeat1] = "title_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__eol] = sym__eol,
  [sym_uri] = sym_uri,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [aux_sym_comment_token3] = aux_sym_comment_token3,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_tag_token1] = aux_sym_tag_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_tag_token2] = aux_sym_tag_token2,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym__dec] = sym__dec,
  [anon_sym_x] = anon_sym_x,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_0X] = anon_sym_0X,
  [aux_sym_hex_token1] = aux_sym_hex_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [aux_sym_attribute_token1] = aux_sym_attribute_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_VOD] = anon_sym_VOD,
  [anon_sym_EVENT] = anon_sym_EVENT,
  [sym_date_time_msec] = sym_date_time_msec,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym_title_token1] = aux_sym_title_token1,
  [sym_file] = sym_file,
  [sym_comment] = sym_comment,
  [sym_tag] = sym_tag,
  [sym_resolution] = sym_resolution,
  [sym_float] = sym_float,
  [sym_dec] = sym_dec,
  [sym_hex] = sym_hex,
  [sym_string] = sym_string,
  [sym__value] = sym__value,
  [sym_attribute_list] = sym_attribute_list,
  [sym_attribute] = sym_attribute,
  [sym_enum] = sym_enum,
  [sym_range] = sym_range,
  [sym_attributes] = sym_attributes,
  [sym_title] = sym_title,
  [aux_sym_file_repeat1] = aux_sym_file_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_attribute_list_repeat1] = aux_sym_attribute_list_repeat1,
  [aux_sym_attributes_repeat1] = aux_sym_attributes_repeat1,
  [aux_sym_title_repeat1] = aux_sym_title_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__eol] = {
    .visible = false,
    .named = true,
  },
  [sym_uri] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_tag_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_tag_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym__dec] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_x] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_0X] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_hex_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attribute_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VOD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EVENT] = {
    .visible = true,
    .named = false,
  },
  [sym_date_time_msec] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_title_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_file] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_resolution] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_dec] = {
    .visible = true,
    .named = true,
  },
  [sym_hex] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
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
  [sym_enum] = {
    .visible = true,
    .named = true,
  },
  [sym_range] = {
    .visible = true,
    .named = true,
  },
  [sym_attributes] = {
    .visible = true,
    .named = true,
  },
  [sym_title] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attribute_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attributes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_title_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_content = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_content] = "content",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_content, 1},
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
  [5] = 3,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 12,
  [14] = 14,
  [15] = 11,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 12,
  [23] = 23,
  [24] = 24,
  [25] = 11,
  [26] = 26,
  [27] = 26,
  [28] = 26,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 11,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 36,
  [40] = 40,
  [41] = 34,
  [42] = 42,
  [43] = 43,
  [44] = 21,
  [45] = 23,
  [46] = 36,
  [47] = 42,
  [48] = 21,
  [49] = 35,
  [50] = 38,
  [51] = 23,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 21,
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
  [66] = 35,
  [67] = 38,
  [68] = 68,
  [69] = 34,
  [70] = 70,
  [71] = 42,
  [72] = 72,
  [73] = 73,
  [74] = 23,
  [75] = 75,
  [76] = 73,
  [77] = 70,
  [78] = 60,
  [79] = 57,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 73,
  [84] = 70,
  [85] = 60,
  [86] = 57,
  [87] = 87,
  [88] = 88,
  [89] = 82,
  [90] = 73,
  [91] = 57,
  [92] = 82,
  [93] = 82,
  [94] = 65,
  [95] = 95,
  [96] = 65,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(39);
      if (lookahead == '"') ADVANCE(75);
      if (lookahead == '#') ADVANCE(51);
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == '-') ADVANCE(70);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == '0') ADVANCE(59);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == '=') ADVANCE(86);
      if (lookahead == '@') ADVANCE(93);
      if (lookahead == 'E') ADVANCE(73);
      if (lookahead == 'V') ADVANCE(16);
      if (lookahead == 'x') ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(74);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(40);
      if (lookahead == '\r') ADVANCE(54);
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == '@') ADVANCE(93);
      if (lookahead == 'x') ADVANCE(69);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(54);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(41);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'x') ADVANCE(69);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(96);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead == '\r') ADVANCE(95);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(95);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(75);
      if (lookahead == '-') ADVANCE(70);
      if (lookahead == '0') ADVANCE(60);
      if (lookahead == 'E') ADVANCE(84);
      if (lookahead == 'V') ADVANCE(82);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(77);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0) ADVANCE(76);
      END_STATE();
    case 7:
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == 'x') ADVANCE(69);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(55);
      END_STATE();
    case 8:
      if (lookahead == ',') ADVANCE(56);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(29);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(31);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(35);
      END_STATE();
    case 12:
      if (lookahead == 'D') ADVANCE(87);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(20);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == 'N') ADVANCE(18);
      END_STATE();
    case 16:
      if (lookahead == 'O') ADVANCE(12);
      END_STATE();
    case 17:
      if (lookahead == 'T') ADVANCE(52);
      END_STATE();
    case 18:
      if (lookahead == 'T') ADVANCE(89);
      END_STATE();
    case 19:
      if (lookahead == 'T') ADVANCE(30);
      END_STATE();
    case 20:
      if (lookahead == 'X') ADVANCE(17);
      END_STATE();
    case 21:
      if (lookahead == 'X') ADVANCE(37);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 22:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(74);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 36:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    case 37:
      if (lookahead != 0 &&
          lookahead != 'T') ADVANCE(47);
      END_STATE();
    case 38:
      if (eof) ADVANCE(39);
      if (lookahead == '\n') SKIP(38)
      if (lookahead == '#') ADVANCE(51);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__eol);
      if (lookahead == '\n') ADVANCE(40);
      if (lookahead == '\r') ADVANCE(54);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(54);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__eol);
      if (lookahead == '\n') ADVANCE(41);
      if (lookahead == '\r') ADVANCE(2);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__eol);
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead == '\r') ADVANCE(95);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(95);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_uri);
      if (lookahead == '\n') ADVANCE(48);
      if (lookahead == 'X') ADVANCE(44);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_uri);
      if (lookahead == '\n') ADVANCE(47);
      if (lookahead == 'T') ADVANCE(46);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_uri);
      if (lookahead == '#') ADVANCE(50);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_uri);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_comment_token3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == 'E') ADVANCE(43);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == 'E') ADVANCE(21);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_tag_token2);
      if (lookahead == '\n') ADVANCE(40);
      if (lookahead == '\r') ADVANCE(54);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_tag_token2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == '-') ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == '-') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == 'X') ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == 'X') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__dec);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__dec);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__dec);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__dec);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__dec);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__dec);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__dec);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__dec);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_0X);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_hex_token1);
      if (lookahead == 'V') ADVANCE(13);
      if (lookahead == 'X') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_hex_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(76);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\\') ADVANCE(77);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(76);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'D') ADVANCE(88);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'E') ADVANCE(81);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'N') ADVANCE(83);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'O') ADVANCE(79);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'T') ADVANCE(90);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'V') ADVANCE(80);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_VOD);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_VOD);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_EVENT);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_EVENT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_date_time_msec);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_date_time_msec);
      if (lookahead == 'Z') ADVANCE(91);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_title_token1);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_title_token1);
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead == '\r') ADVANCE(95);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(95);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_title_token1);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 38},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 38},
  [7] = {.lex_state = 38},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 38},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 7},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 7},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 7},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 8},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 7},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 8},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 22},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 22},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 22},
  [85] = {.lex_state = 5},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 14},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 5},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 5},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(1),
    [aux_sym_comment_token2] = ACTIONS(1),
    [aux_sym_comment_token3] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [aux_sym_tag_token1] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym__dec] = ACTIONS(1),
    [anon_sym_x] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_0X] = ACTIONS(1),
    [aux_sym_hex_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_VOD] = ACTIONS(1),
    [anon_sym_EVENT] = ACTIONS(1),
    [sym_date_time_msec] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
  },
  [1] = {
    [sym_file] = STATE(81),
    [sym_comment] = STATE(75),
    [sym_tag] = STATE(75),
    [aux_sym_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_uri] = ACTIONS(5),
    [aux_sym_comment_token1] = ACTIONS(7),
    [aux_sym_comment_token2] = ACTIONS(7),
    [aux_sym_comment_token3] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(11), 1,
      sym__dec,
    ACTIONS(13), 1,
      anon_sym_DASH,
    ACTIONS(15), 1,
      anon_sym_0X,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      aux_sym_attribute_token1,
    ACTIONS(23), 1,
      sym_date_time_msec,
    STATE(20), 1,
      aux_sym_attribute_list_repeat1,
    STATE(53), 1,
      sym_attribute,
    ACTIONS(21), 2,
      anon_sym_VOD,
      anon_sym_EVENT,
    STATE(18), 2,
      sym_float,
      sym_dec,
    STATE(61), 7,
      sym_resolution,
      sym_hex,
      sym_string,
      sym__value,
      sym_attribute_list,
      sym_enum,
      sym_range,
  [42] = 5,
    ACTIONS(25), 1,
      sym__dec,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_0X,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    STATE(71), 6,
      sym_resolution,
      sym_float,
      sym_dec,
      sym_hex,
      sym_string,
      sym__value,
  [63] = 5,
    ACTIONS(33), 1,
      sym__dec,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_0X,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    STATE(47), 6,
      sym_resolution,
      sym_float,
      sym_dec,
      sym_hex,
      sym_string,
      sym__value,
  [84] = 5,
    ACTIONS(15), 1,
      anon_sym_0X,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym__dec,
    ACTIONS(43), 1,
      anon_sym_DASH,
    STATE(42), 6,
      sym_resolution,
      sym_float,
      sym_dec,
      sym_hex,
      sym_string,
      sym__value,
  [105] = 6,
    ACTIONS(5), 1,
      sym_uri,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      aux_sym_file_repeat1,
    STATE(75), 2,
      sym_comment,
      sym_tag,
    ACTIONS(7), 3,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [127] = 6,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 1,
      sym_uri,
    ACTIONS(55), 1,
      anon_sym_POUND,
    STATE(7), 1,
      aux_sym_file_repeat1,
    STATE(75), 2,
      sym_comment,
      sym_tag,
    ACTIONS(52), 3,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [149] = 4,
    ACTIONS(60), 1,
      anon_sym_x,
    ACTIONS(62), 1,
      anon_sym_DOT,
    ACTIONS(64), 1,
      anon_sym_AT,
    ACTIONS(58), 3,
      sym__eol,
      aux_sym_tag_token2,
      anon_sym_COMMA,
  [164] = 2,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(66), 5,
      sym_uri,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      anon_sym_POUND,
  [175] = 5,
    ACTIONS(68), 1,
      anon_sym_COMMA,
    ACTIONS(70), 1,
      aux_sym_attribute_token1,
    STATE(30), 1,
      aux_sym_attributes_repeat1,
    STATE(43), 1,
      sym_attribute,
    STATE(80), 1,
      sym_attributes,
  [191] = 2,
    ACTIONS(74), 1,
      anon_sym_DOT,
    ACTIONS(72), 3,
      sym__eol,
      aux_sym_tag_token2,
      anon_sym_COMMA,
  [200] = 4,
    ACTIONS(58), 1,
      anon_sym_COMMA,
    ACTIONS(76), 1,
      aux_sym_tag_token2,
    ACTIONS(78), 1,
      anon_sym_x,
    ACTIONS(80), 1,
      anon_sym_DOT,
  [213] = 4,
    ACTIONS(58), 1,
      anon_sym_COMMA,
    ACTIONS(60), 1,
      anon_sym_x,
    ACTIONS(76), 1,
      sym__eol,
    ACTIONS(82), 1,
      anon_sym_DOT,
  [226] = 3,
    ACTIONS(84), 1,
      sym__eol,
    ACTIONS(86), 1,
      aux_sym_title_token1,
    STATE(16), 1,
      aux_sym_title_repeat1,
  [236] = 3,
    ACTIONS(72), 1,
      anon_sym_COMMA,
    ACTIONS(88), 1,
      sym__eol,
    ACTIONS(90), 1,
      anon_sym_DOT,
  [246] = 3,
    ACTIONS(92), 1,
      sym__eol,
    ACTIONS(94), 1,
      aux_sym_title_token1,
    STATE(16), 1,
      aux_sym_title_repeat1,
  [256] = 3,
    ACTIONS(97), 1,
      aux_sym_attribute_token1,
    STATE(17), 1,
      aux_sym_attributes_repeat1,
    STATE(63), 1,
      sym_attribute,
  [266] = 3,
    ACTIONS(100), 1,
      sym__eol,
    ACTIONS(102), 1,
      aux_sym_tag_token2,
    ACTIONS(104), 1,
      anon_sym_COMMA,
  [276] = 3,
    ACTIONS(106), 1,
      aux_sym_title_token1,
    STATE(14), 1,
      aux_sym_title_repeat1,
    STATE(62), 1,
      sym_title,
  [286] = 3,
    ACTIONS(108), 1,
      aux_sym_attribute_token1,
    STATE(32), 1,
      aux_sym_attribute_list_repeat1,
    STATE(37), 1,
      sym_attribute,
  [296] = 1,
    ACTIONS(110), 3,
      sym__eol,
      aux_sym_tag_token2,
      anon_sym_COMMA,
  [302] = 3,
    ACTIONS(76), 1,
      anon_sym_COMMA,
    ACTIONS(112), 1,
      anon_sym_x,
    ACTIONS(114), 1,
      anon_sym_DOT,
  [312] = 1,
    ACTIONS(116), 3,
      sym__eol,
      aux_sym_tag_token2,
      anon_sym_COMMA,
  [318] = 3,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      aux_sym_string_token1,
    STATE(24), 1,
      aux_sym_string_repeat1,
  [328] = 3,
    ACTIONS(72), 1,
      anon_sym_COMMA,
    ACTIONS(88), 1,
      aux_sym_tag_token2,
    ACTIONS(123), 1,
      anon_sym_DOT,
  [338] = 3,
    ACTIONS(125), 1,
      anon_sym_DQUOTE,
    ACTIONS(127), 1,
      aux_sym_string_token1,
    STATE(24), 1,
      aux_sym_string_repeat1,
  [348] = 3,
    ACTIONS(127), 1,
      aux_sym_string_token1,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    STATE(24), 1,
      aux_sym_string_repeat1,
  [358] = 3,
    ACTIONS(127), 1,
      aux_sym_string_token1,
    ACTIONS(131), 1,
      anon_sym_DQUOTE,
    STATE(24), 1,
      aux_sym_string_repeat1,
  [368] = 3,
    ACTIONS(106), 1,
      aux_sym_title_token1,
    STATE(14), 1,
      aux_sym_title_repeat1,
    STATE(72), 1,
      sym_title,
  [378] = 3,
    ACTIONS(70), 1,
      aux_sym_attribute_token1,
    STATE(17), 1,
      aux_sym_attributes_repeat1,
    STATE(52), 1,
      sym_attribute,
  [388] = 3,
    ACTIONS(106), 1,
      aux_sym_title_token1,
    STATE(14), 1,
      aux_sym_title_repeat1,
    STATE(54), 1,
      sym_title,
  [398] = 3,
    ACTIONS(133), 1,
      aux_sym_attribute_token1,
    STATE(32), 1,
      aux_sym_attribute_list_repeat1,
    STATE(56), 1,
      sym_attribute,
  [408] = 2,
    ACTIONS(88), 1,
      anon_sym_COMMA,
    ACTIONS(136), 1,
      anon_sym_DOT,
  [415] = 2,
    ACTIONS(138), 1,
      aux_sym_tag_token2,
    ACTIONS(140), 1,
      anon_sym_COMMA,
  [422] = 2,
    ACTIONS(142), 1,
      sym__eol,
    ACTIONS(144), 1,
      anon_sym_COMMA,
  [429] = 2,
    ACTIONS(146), 1,
      aux_sym_string_token1,
    STATE(27), 1,
      aux_sym_string_repeat1,
  [436] = 2,
    ACTIONS(148), 1,
      sym__eol,
    ACTIONS(150), 1,
      anon_sym_COMMA,
  [443] = 2,
    ACTIONS(152), 1,
      sym__eol,
    ACTIONS(154), 1,
      anon_sym_COMMA,
  [450] = 2,
    ACTIONS(156), 1,
      aux_sym_string_token1,
    STATE(28), 1,
      aux_sym_string_repeat1,
  [457] = 2,
    ACTIONS(158), 1,
      sym__eol,
    ACTIONS(160), 1,
      anon_sym_COLON,
  [464] = 2,
    ACTIONS(138), 1,
      sym__eol,
    ACTIONS(140), 1,
      anon_sym_COMMA,
  [471] = 2,
    ACTIONS(162), 1,
      sym__eol,
    ACTIONS(164), 1,
      anon_sym_COMMA,
  [478] = 2,
    ACTIONS(166), 1,
      aux_sym_tag_token2,
    ACTIONS(168), 1,
      anon_sym_COMMA,
  [485] = 2,
    ACTIONS(110), 1,
      anon_sym_COMMA,
    ACTIONS(170), 1,
      aux_sym_tag_token2,
  [492] = 2,
    ACTIONS(116), 1,
      anon_sym_COMMA,
    ACTIONS(172), 1,
      aux_sym_tag_token2,
  [499] = 2,
    ACTIONS(174), 1,
      aux_sym_string_token1,
    STATE(26), 1,
      aux_sym_string_repeat1,
  [506] = 2,
    ACTIONS(162), 1,
      aux_sym_tag_token2,
    ACTIONS(164), 1,
      anon_sym_COMMA,
  [513] = 2,
    ACTIONS(110), 1,
      anon_sym_COMMA,
    ACTIONS(170), 1,
      sym__eol,
  [520] = 2,
    ACTIONS(142), 1,
      aux_sym_tag_token2,
    ACTIONS(144), 1,
      anon_sym_COMMA,
  [527] = 2,
    ACTIONS(152), 1,
      aux_sym_tag_token2,
    ACTIONS(154), 1,
      anon_sym_COMMA,
  [534] = 2,
    ACTIONS(116), 1,
      anon_sym_COMMA,
    ACTIONS(172), 1,
      sym__eol,
  [541] = 2,
    ACTIONS(166), 1,
      aux_sym_tag_token2,
    ACTIONS(176), 1,
      anon_sym_COMMA,
  [548] = 2,
    ACTIONS(150), 1,
      anon_sym_COMMA,
    ACTIONS(178), 1,
      sym__eol,
  [555] = 1,
    ACTIONS(180), 1,
      sym__eol,
  [559] = 1,
    ACTIONS(170), 1,
      anon_sym_COMMA,
  [563] = 1,
    ACTIONS(182), 1,
      anon_sym_COMMA,
  [567] = 1,
    ACTIONS(184), 1,
      sym__dec,
  [571] = 1,
    ACTIONS(186), 1,
      sym__dec,
  [575] = 1,
    ACTIONS(188), 1,
      aux_sym_attribute_token1,
  [579] = 1,
    ACTIONS(190), 1,
      sym__dec,
  [583] = 1,
    ACTIONS(192), 1,
      sym__eol,
  [587] = 1,
    ACTIONS(194), 1,
      sym__eol,
  [591] = 1,
    ACTIONS(166), 1,
      aux_sym_tag_token2,
  [595] = 1,
    ACTIONS(196), 1,
      sym__eol,
  [599] = 1,
    ACTIONS(198), 1,
      anon_sym_EQ,
  [603] = 1,
    ACTIONS(142), 1,
      anon_sym_COMMA,
  [607] = 1,
    ACTIONS(152), 1,
      anon_sym_COMMA,
  [611] = 1,
    ACTIONS(200), 1,
      aux_sym_attribute_token1,
  [615] = 1,
    ACTIONS(138), 1,
      anon_sym_COMMA,
  [619] = 1,
    ACTIONS(202), 1,
      aux_sym_hex_token1,
  [623] = 1,
    ACTIONS(162), 1,
      anon_sym_COMMA,
  [627] = 1,
    ACTIONS(204), 1,
      sym__eol,
  [631] = 1,
    ACTIONS(206), 1,
      sym__dec,
  [635] = 1,
    ACTIONS(172), 1,
      anon_sym_COMMA,
  [639] = 1,
    ACTIONS(208), 1,
      sym__eol,
  [643] = 1,
    ACTIONS(210), 1,
      sym__dec,
  [647] = 1,
    ACTIONS(212), 1,
      aux_sym_hex_token1,
  [651] = 1,
    ACTIONS(214), 1,
      sym__dec,
  [655] = 1,
    ACTIONS(216), 1,
      sym__dec,
  [659] = 1,
    ACTIONS(218), 1,
      anon_sym_COMMA,
  [663] = 1,
    ACTIONS(220), 1,
      ts_builtin_sym_end,
  [667] = 1,
    ACTIONS(222), 1,
      sym__dec,
  [671] = 1,
    ACTIONS(224), 1,
      sym__dec,
  [675] = 1,
    ACTIONS(226), 1,
      aux_sym_hex_token1,
  [679] = 1,
    ACTIONS(228), 1,
      sym__dec,
  [683] = 1,
    ACTIONS(230), 1,
      sym__dec,
  [687] = 1,
    ACTIONS(232), 1,
      aux_sym_tag_token1,
  [691] = 1,
    ACTIONS(234), 1,
      sym__eol,
  [695] = 1,
    ACTIONS(236), 1,
      sym__dec,
  [699] = 1,
    ACTIONS(238), 1,
      sym__dec,
  [703] = 1,
    ACTIONS(240), 1,
      sym__dec,
  [707] = 1,
    ACTIONS(242), 1,
      sym__dec,
  [711] = 1,
    ACTIONS(244), 1,
      sym__dec,
  [715] = 1,
    ACTIONS(246), 1,
      anon_sym_EQ,
  [719] = 1,
    ACTIONS(248), 1,
      sym__eol,
  [723] = 1,
    ACTIONS(250), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 42,
  [SMALL_STATE(4)] = 63,
  [SMALL_STATE(5)] = 84,
  [SMALL_STATE(6)] = 105,
  [SMALL_STATE(7)] = 127,
  [SMALL_STATE(8)] = 149,
  [SMALL_STATE(9)] = 164,
  [SMALL_STATE(10)] = 175,
  [SMALL_STATE(11)] = 191,
  [SMALL_STATE(12)] = 200,
  [SMALL_STATE(13)] = 213,
  [SMALL_STATE(14)] = 226,
  [SMALL_STATE(15)] = 236,
  [SMALL_STATE(16)] = 246,
  [SMALL_STATE(17)] = 256,
  [SMALL_STATE(18)] = 266,
  [SMALL_STATE(19)] = 276,
  [SMALL_STATE(20)] = 286,
  [SMALL_STATE(21)] = 296,
  [SMALL_STATE(22)] = 302,
  [SMALL_STATE(23)] = 312,
  [SMALL_STATE(24)] = 318,
  [SMALL_STATE(25)] = 328,
  [SMALL_STATE(26)] = 338,
  [SMALL_STATE(27)] = 348,
  [SMALL_STATE(28)] = 358,
  [SMALL_STATE(29)] = 368,
  [SMALL_STATE(30)] = 378,
  [SMALL_STATE(31)] = 388,
  [SMALL_STATE(32)] = 398,
  [SMALL_STATE(33)] = 408,
  [SMALL_STATE(34)] = 415,
  [SMALL_STATE(35)] = 422,
  [SMALL_STATE(36)] = 429,
  [SMALL_STATE(37)] = 436,
  [SMALL_STATE(38)] = 443,
  [SMALL_STATE(39)] = 450,
  [SMALL_STATE(40)] = 457,
  [SMALL_STATE(41)] = 464,
  [SMALL_STATE(42)] = 471,
  [SMALL_STATE(43)] = 478,
  [SMALL_STATE(44)] = 485,
  [SMALL_STATE(45)] = 492,
  [SMALL_STATE(46)] = 499,
  [SMALL_STATE(47)] = 506,
  [SMALL_STATE(48)] = 513,
  [SMALL_STATE(49)] = 520,
  [SMALL_STATE(50)] = 527,
  [SMALL_STATE(51)] = 534,
  [SMALL_STATE(52)] = 541,
  [SMALL_STATE(53)] = 548,
  [SMALL_STATE(54)] = 555,
  [SMALL_STATE(55)] = 559,
  [SMALL_STATE(56)] = 563,
  [SMALL_STATE(57)] = 567,
  [SMALL_STATE(58)] = 571,
  [SMALL_STATE(59)] = 575,
  [SMALL_STATE(60)] = 579,
  [SMALL_STATE(61)] = 583,
  [SMALL_STATE(62)] = 587,
  [SMALL_STATE(63)] = 591,
  [SMALL_STATE(64)] = 595,
  [SMALL_STATE(65)] = 599,
  [SMALL_STATE(66)] = 603,
  [SMALL_STATE(67)] = 607,
  [SMALL_STATE(68)] = 611,
  [SMALL_STATE(69)] = 615,
  [SMALL_STATE(70)] = 619,
  [SMALL_STATE(71)] = 623,
  [SMALL_STATE(72)] = 627,
  [SMALL_STATE(73)] = 631,
  [SMALL_STATE(74)] = 635,
  [SMALL_STATE(75)] = 639,
  [SMALL_STATE(76)] = 643,
  [SMALL_STATE(77)] = 647,
  [SMALL_STATE(78)] = 651,
  [SMALL_STATE(79)] = 655,
  [SMALL_STATE(80)] = 659,
  [SMALL_STATE(81)] = 663,
  [SMALL_STATE(82)] = 667,
  [SMALL_STATE(83)] = 671,
  [SMALL_STATE(84)] = 675,
  [SMALL_STATE(85)] = 679,
  [SMALL_STATE(86)] = 683,
  [SMALL_STATE(87)] = 687,
  [SMALL_STATE(88)] = 691,
  [SMALL_STATE(89)] = 695,
  [SMALL_STATE(90)] = 699,
  [SMALL_STATE(91)] = 703,
  [SMALL_STATE(92)] = 707,
  [SMALL_STATE(93)] = 711,
  [SMALL_STATE(94)] = 715,
  [SMALL_STATE(95)] = 719,
  [SMALL_STATE(96)] = 723,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(75),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(88),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(87),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dec, 1),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 2),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dec, 1),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title, 1),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 2),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_title_repeat1, 2),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_repeat1, 2), SHIFT_REPEAT(16),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(94),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 4),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 3),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(24),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_list_repeat1, 2), SHIFT_REPEAT(96),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, .production_id = 1),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, .production_id = 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex, 2),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hex, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_list, 2),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resolution, 3),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_resolution, 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 4),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_list, 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 7),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 8),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_list_repeat1, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 6),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [220] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_hlsplaylist() {
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
