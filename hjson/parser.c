#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 63
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 30
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  anon_sym_LBRACE = 1,
  aux_sym_object_token1 = 2,
  anon_sym_RBRACE = 3,
  anon_sym_COLON = 4,
  anon_sym_LBRACK = 5,
  anon_sym_RBRACK = 6,
  sym_escape_sequence = 7,
  sym_number = 8,
  sym_true = 9,
  sym_false = 10,
  sym_null = 11,
  sym_comment = 12,
  anon_sym_DQUOTE = 13,
  anon_sym_SQUOTE = 14,
  aux_sym__quoted_string_content_token1 = 15,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 16,
  aux_sym_multiline_string_token1 = 17,
  sym_document = 18,
  sym__value = 19,
  sym_object = 20,
  sym_pair = 21,
  sym_array = 22,
  sym_string = 23,
  sym_quoted_string = 24,
  aux_sym__quoted_string_content = 25,
  sym_multiline_string = 26,
  aux_sym_object_repeat1 = 27,
  aux_sym_array_repeat1 = 28,
  aux_sym_multiline_string_repeat1 = 29,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [aux_sym_object_token1] = "object_token1",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_escape_sequence] = "escape_sequence",
  [sym_number] = "number",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_null] = "null",
  [sym_comment] = "comment",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_SQUOTE] = "'",
  [aux_sym__quoted_string_content_token1] = "_quoted_string_content_token1",
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = "'''",
  [aux_sym_multiline_string_token1] = "multiline_string_token1",
  [sym_document] = "document",
  [sym__value] = "_value",
  [sym_object] = "object",
  [sym_pair] = "pair",
  [sym_array] = "array",
  [sym_string] = "string",
  [sym_quoted_string] = "quoted_string",
  [aux_sym__quoted_string_content] = "_quoted_string_content",
  [sym_multiline_string] = "multiline_string",
  [aux_sym_object_repeat1] = "object_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_multiline_string_repeat1] = "multiline_string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [aux_sym_object_token1] = aux_sym_object_token1,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_number] = sym_number,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_null] = sym_null,
  [sym_comment] = sym_comment,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__quoted_string_content_token1] = aux_sym__quoted_string_content_token1,
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [aux_sym_multiline_string_token1] = aux_sym_multiline_string_token1,
  [sym_document] = sym_document,
  [sym__value] = sym__value,
  [sym_object] = sym_object,
  [sym_pair] = sym_pair,
  [sym_array] = sym_array,
  [sym_string] = sym_string,
  [sym_quoted_string] = sym_quoted_string,
  [aux_sym__quoted_string_content] = aux_sym__quoted_string_content,
  [sym_multiline_string] = sym_multiline_string,
  [aux_sym_object_repeat1] = aux_sym_object_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_multiline_string_repeat1] = aux_sym_multiline_string_repeat1,
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
  [aux_sym_object_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
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
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__quoted_string_content_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_multiline_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__quoted_string_content] = {
    .visible = false,
    .named = false,
  },
  [sym_multiline_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_object_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_multiline_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_key = 1,
  field_value = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
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
  [8] = 7,
  [9] = 9,
  [10] = 10,
  [11] = 10,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 13,
  [16] = 12,
  [17] = 14,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 23,
  [25] = 25,
  [26] = 22,
  [27] = 21,
  [28] = 20,
  [29] = 29,
  [30] = 29,
  [31] = 31,
  [32] = 25,
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
  [45] = 36,
  [46] = 46,
  [47] = 40,
  [48] = 48,
  [49] = 49,
  [50] = 37,
  [51] = 44,
  [52] = 43,
  [53] = 39,
  [54] = 42,
  [55] = 33,
  [56] = 34,
  [57] = 57,
  [58] = 41,
  [59] = 59,
  [60] = 60,
  [61] = 31,
  [62] = 18,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(29);
      if (lookahead == '"') ADVANCE(53);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '\'') ADVANCE(55);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(10);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(38);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == ']') ADVANCE(36);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'n') ADVANCE(20);
      if (lookahead == 't') ADVANCE(17);
      if (lookahead == '{') ADVANCE(30);
      if (lookahead == '}') ADVANCE(33);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == '"') ADVANCE(53);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '\'') ADVANCE(55);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(10);
      if (lookahead == ',') ADVANCE(31);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(38);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == ']') ADVANCE(36);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'n') ADVANCE(20);
      if (lookahead == 't') ADVANCE(17);
      if (lookahead == '{') ADVANCE(30);
      if (lookahead == '}') ADVANCE(33);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '"') ADVANCE(53);
      if (lookahead == '#') ADVANCE(60);
      if (lookahead == '\'') ADVANCE(54);
      if (lookahead == '/') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(23);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(56);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '#') ADVANCE(50);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '/') ADVANCE(64);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(67);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(53);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '\'') ADVANCE(54);
      if (lookahead == '/') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(62);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(52);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(49);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '0') ADVANCE(39);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 18:
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 19:
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 20:
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 21:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 22:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(42);
      END_STATE();
    case 23:
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(43);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 28:
      if (eof) ADVANCE(29);
      if (lookahead == '"') ADVANCE(53);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '\'') ADVANCE(55);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(10);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(38);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == ']') ADVANCE(36);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'n') ADVANCE(20);
      if (lookahead == 't') ADVANCE(17);
      if (lookahead == '{') ADVANCE(30);
      if (lookahead == '}') ADVANCE(33);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_object_token1);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_object_token1);
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == ',') ADVANCE(31);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(22);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(24);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(27);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(67);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(6);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_token1);
      if (lookahead == '#') ADVANCE(60);
      if (lookahead == '/') ADVANCE(57);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(61);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_token1);
      if (lookahead == '*') ADVANCE(59);
      if (lookahead == '/') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(61);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_token1);
      if (lookahead == '*') ADVANCE(58);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(9);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_token1);
      if (lookahead == '*') ADVANCE(58);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(9);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_token1);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_multiline_string_token1);
      if (lookahead == '#') ADVANCE(50);
      if (lookahead == '/') ADVANCE(64);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(67);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_multiline_string_token1);
      if (lookahead == '*') ADVANCE(66);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(67);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_multiline_string_token1);
      if (lookahead == '*') ADVANCE(65);
      if (lookahead == '/') ADVANCE(51);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(9);
      if (lookahead != 0) ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_multiline_string_token1);
      if (lookahead == '*') ADVANCE(65);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(9);
      if (lookahead != 0) ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_multiline_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(67);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(60),
    [sym__value] = STATE(59),
    [sym_object] = STATE(53),
    [sym_array] = STATE(53),
    [sym_string] = STATE(53),
    [sym_quoted_string] = STATE(47),
    [sym_multiline_string] = STATE(47),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_number] = ACTIONS(11),
    [sym_true] = ACTIONS(11),
    [sym_false] = ACTIONS(11),
    [sym_null] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(17),
  },
  [2] = {
    [sym__value] = STATE(46),
    [sym_object] = STATE(39),
    [sym_array] = STATE(39),
    [sym_string] = STATE(39),
    [sym_quoted_string] = STATE(40),
    [sym_multiline_string] = STATE(40),
    [anon_sym_LBRACE] = ACTIONS(19),
    [aux_sym_object_token1] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_RBRACK] = ACTIONS(25),
    [sym_number] = ACTIONS(27),
    [sym_true] = ACTIONS(27),
    [sym_false] = ACTIONS(27),
    [sym_null] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(35),
  },
  [3] = {
    [sym__value] = STATE(21),
    [sym_object] = STATE(39),
    [sym_array] = STATE(39),
    [sym_string] = STATE(39),
    [sym_quoted_string] = STATE(40),
    [sym_multiline_string] = STATE(40),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_RBRACK] = ACTIONS(41),
    [sym_number] = ACTIONS(43),
    [sym_true] = ACTIONS(43),
    [sym_false] = ACTIONS(43),
    [sym_null] = ACTIONS(43),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(47),
  },
  [4] = {
    [sym__value] = STATE(27),
    [sym_object] = STATE(39),
    [sym_array] = STATE(39),
    [sym_string] = STATE(39),
    [sym_quoted_string] = STATE(40),
    [sym_multiline_string] = STATE(40),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_RBRACK] = ACTIONS(49),
    [sym_number] = ACTIONS(43),
    [sym_true] = ACTIONS(43),
    [sym_false] = ACTIONS(43),
    [sym_null] = ACTIONS(43),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(47),
  },
  [5] = {
    [sym__value] = STATE(49),
    [sym_object] = STATE(39),
    [sym_array] = STATE(39),
    [sym_string] = STATE(39),
    [sym_quoted_string] = STATE(40),
    [sym_multiline_string] = STATE(40),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [sym_number] = ACTIONS(43),
    [sym_true] = ACTIONS(43),
    [sym_false] = ACTIONS(43),
    [sym_null] = ACTIONS(43),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(47),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(51), 1,
      aux_sym_object_token1,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    ACTIONS(55), 1,
      sym_number,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(48), 1,
      sym_pair,
    STATE(57), 1,
      sym_string,
    STATE(47), 2,
      sym_quoted_string,
      sym_multiline_string,
  [32] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    ACTIONS(63), 1,
      sym_number,
    STATE(30), 1,
      sym_pair,
    STATE(57), 1,
      sym_string,
    STATE(47), 2,
      sym_quoted_string,
      sym_multiline_string,
  [61] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(63), 1,
      sym_number,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      sym_pair,
    STATE(57), 1,
      sym_string,
    STATE(47), 2,
      sym_quoted_string,
      sym_multiline_string,
  [90] = 5,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_escape_sequence,
    ACTIONS(72), 1,
      aux_sym__quoted_string_content_token1,
    STATE(9), 1,
      aux_sym__quoted_string_content,
    ACTIONS(70), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [107] = 5,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(75), 1,
      sym_escape_sequence,
    ACTIONS(77), 1,
      anon_sym_SQUOTE,
    ACTIONS(79), 1,
      aux_sym__quoted_string_content_token1,
    STATE(9), 1,
      aux_sym__quoted_string_content,
  [123] = 5,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(75), 1,
      sym_escape_sequence,
    ACTIONS(79), 1,
      aux_sym__quoted_string_content_token1,
    ACTIONS(81), 1,
      anon_sym_SQUOTE,
    STATE(9), 1,
      aux_sym__quoted_string_content,
  [139] = 5,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(83), 1,
      sym_escape_sequence,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(87), 1,
      aux_sym__quoted_string_content_token1,
    STATE(17), 1,
      aux_sym__quoted_string_content,
  [155] = 5,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    ACTIONS(89), 1,
      sym_escape_sequence,
    ACTIONS(91), 1,
      aux_sym__quoted_string_content_token1,
    STATE(10), 1,
      aux_sym__quoted_string_content,
  [171] = 5,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(75), 1,
      sym_escape_sequence,
    ACTIONS(79), 1,
      aux_sym__quoted_string_content_token1,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    STATE(9), 1,
      aux_sym__quoted_string_content,
  [187] = 5,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_escape_sequence,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    ACTIONS(97), 1,
      aux_sym__quoted_string_content_token1,
    STATE(11), 1,
      aux_sym__quoted_string_content,
  [203] = 5,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(99), 1,
      sym_escape_sequence,
    ACTIONS(101), 1,
      aux_sym__quoted_string_content_token1,
    STATE(14), 1,
      aux_sym__quoted_string_content,
  [219] = 5,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(75), 1,
      sym_escape_sequence,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      aux_sym__quoted_string_content_token1,
    STATE(9), 1,
      aux_sym__quoted_string_content,
  [235] = 3,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(103), 1,
      aux_sym_object_token1,
    ACTIONS(105), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [246] = 4,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(109), 1,
      aux_sym_multiline_string_token1,
    STATE(19), 1,
      aux_sym_multiline_string_repeat1,
  [259] = 4,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(112), 1,
      aux_sym_object_token1,
    ACTIONS(114), 1,
      anon_sym_RBRACK,
    STATE(38), 1,
      aux_sym_array_repeat1,
  [272] = 4,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(112), 1,
      aux_sym_object_token1,
    ACTIONS(116), 1,
      anon_sym_RBRACK,
    STATE(28), 1,
      aux_sym_array_repeat1,
  [285] = 4,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(118), 1,
      aux_sym_object_token1,
    ACTIONS(120), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      aux_sym_object_repeat1,
  [298] = 4,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(124), 1,
      aux_sym_multiline_string_token1,
    STATE(19), 1,
      aux_sym_multiline_string_repeat1,
  [311] = 4,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(124), 1,
      aux_sym_multiline_string_token1,
    ACTIONS(126), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(19), 1,
      aux_sym_multiline_string_repeat1,
  [324] = 4,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(130), 1,
      aux_sym_multiline_string_token1,
    STATE(24), 1,
      aux_sym_multiline_string_repeat1,
  [337] = 4,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(118), 1,
      aux_sym_object_token1,
    ACTIONS(132), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      aux_sym_object_repeat1,
  [350] = 4,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(112), 1,
      aux_sym_object_token1,
    ACTIONS(134), 1,
      anon_sym_RBRACK,
    STATE(20), 1,
      aux_sym_array_repeat1,
  [363] = 4,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(112), 1,
      aux_sym_object_token1,
    ACTIONS(136), 1,
      anon_sym_RBRACK,
    STATE(38), 1,
      aux_sym_array_repeat1,
  [376] = 4,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(118), 1,
      aux_sym_object_token1,
    ACTIONS(138), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      aux_sym_object_repeat1,
  [389] = 4,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(118), 1,
      aux_sym_object_token1,
    ACTIONS(140), 1,
      anon_sym_RBRACE,
    STATE(26), 1,
      aux_sym_object_repeat1,
  [402] = 3,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(142), 1,
      aux_sym_object_token1,
    ACTIONS(144), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [413] = 4,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(148), 1,
      aux_sym_multiline_string_token1,
    STATE(23), 1,
      aux_sym_multiline_string_repeat1,
  [426] = 3,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(150), 1,
      aux_sym_object_token1,
    ACTIONS(152), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [437] = 3,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(154), 1,
      aux_sym_object_token1,
    ACTIONS(156), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [448] = 4,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(158), 1,
      aux_sym_object_token1,
    ACTIONS(161), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      aux_sym_object_repeat1,
  [461] = 3,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(163), 1,
      aux_sym_object_token1,
    ACTIONS(165), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [472] = 3,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(167), 1,
      aux_sym_object_token1,
    ACTIONS(169), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [483] = 4,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(171), 1,
      aux_sym_object_token1,
    ACTIONS(174), 1,
      anon_sym_RBRACK,
    STATE(38), 1,
      aux_sym_array_repeat1,
  [496] = 3,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(176), 1,
      aux_sym_object_token1,
    ACTIONS(178), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [507] = 3,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(180), 1,
      aux_sym_object_token1,
    ACTIONS(182), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [518] = 3,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(184), 1,
      aux_sym_object_token1,
    ACTIONS(186), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [529] = 3,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(188), 1,
      aux_sym_object_token1,
    ACTIONS(190), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [540] = 3,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(192), 1,
      aux_sym_object_token1,
    ACTIONS(194), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [551] = 3,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(196), 1,
      aux_sym_object_token1,
    ACTIONS(198), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [562] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 2,
      ts_builtin_sym_end,
      anon_sym_COLON,
  [570] = 3,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_RBRACK,
    ACTIONS(200), 1,
      aux_sym_object_token1,
  [580] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 2,
      ts_builtin_sym_end,
      anon_sym_COLON,
  [588] = 3,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_RBRACE,
    ACTIONS(202), 1,
      aux_sym_object_token1,
  [598] = 3,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(204), 1,
      aux_sym_object_token1,
    ACTIONS(206), 1,
      anon_sym_RBRACE,
  [608] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 2,
      ts_builtin_sym_end,
      anon_sym_COLON,
  [616] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 2,
      ts_builtin_sym_end,
      anon_sym_COLON,
  [624] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 2,
      ts_builtin_sym_end,
      anon_sym_COLON,
  [632] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      ts_builtin_sym_end,
  [639] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      ts_builtin_sym_end,
  [646] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
  [653] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      ts_builtin_sym_end,
  [660] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_COLON,
  [667] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      ts_builtin_sym_end,
  [674] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      ts_builtin_sym_end,
  [681] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      ts_builtin_sym_end,
  [688] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      ts_builtin_sym_end,
  [695] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 32,
  [SMALL_STATE(8)] = 61,
  [SMALL_STATE(9)] = 90,
  [SMALL_STATE(10)] = 107,
  [SMALL_STATE(11)] = 123,
  [SMALL_STATE(12)] = 139,
  [SMALL_STATE(13)] = 155,
  [SMALL_STATE(14)] = 171,
  [SMALL_STATE(15)] = 187,
  [SMALL_STATE(16)] = 203,
  [SMALL_STATE(17)] = 219,
  [SMALL_STATE(18)] = 235,
  [SMALL_STATE(19)] = 246,
  [SMALL_STATE(20)] = 259,
  [SMALL_STATE(21)] = 272,
  [SMALL_STATE(22)] = 285,
  [SMALL_STATE(23)] = 298,
  [SMALL_STATE(24)] = 311,
  [SMALL_STATE(25)] = 324,
  [SMALL_STATE(26)] = 337,
  [SMALL_STATE(27)] = 350,
  [SMALL_STATE(28)] = 363,
  [SMALL_STATE(29)] = 376,
  [SMALL_STATE(30)] = 389,
  [SMALL_STATE(31)] = 402,
  [SMALL_STATE(32)] = 413,
  [SMALL_STATE(33)] = 426,
  [SMALL_STATE(34)] = 437,
  [SMALL_STATE(35)] = 448,
  [SMALL_STATE(36)] = 461,
  [SMALL_STATE(37)] = 472,
  [SMALL_STATE(38)] = 483,
  [SMALL_STATE(39)] = 496,
  [SMALL_STATE(40)] = 507,
  [SMALL_STATE(41)] = 518,
  [SMALL_STATE(42)] = 529,
  [SMALL_STATE(43)] = 540,
  [SMALL_STATE(44)] = 551,
  [SMALL_STATE(45)] = 562,
  [SMALL_STATE(46)] = 570,
  [SMALL_STATE(47)] = 580,
  [SMALL_STATE(48)] = 588,
  [SMALL_STATE(49)] = 598,
  [SMALL_STATE(50)] = 608,
  [SMALL_STATE(51)] = 616,
  [SMALL_STATE(52)] = 624,
  [SMALL_STATE(53)] = 632,
  [SMALL_STATE(54)] = 639,
  [SMALL_STATE(55)] = 646,
  [SMALL_STATE(56)] = 653,
  [SMALL_STATE(57)] = 660,
  [SMALL_STATE(58)] = 667,
  [SMALL_STATE(59)] = 674,
  [SMALL_STATE(60)] = 681,
  [SMALL_STATE(61)] = 688,
  [SMALL_STATE(62)] = 695,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 1),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_object_repeat1, 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__quoted_string_content, 2), SHIFT_REPEAT(9),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quoted_string_content, 2),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quoted_string_content, 2), SHIFT_REPEAT(9),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2), SHIFT_REPEAT(19),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 4),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 4),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(6),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_object_repeat1, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 3),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 3),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(2),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 2),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 2),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 2),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, .production_id = 1),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pair, 3, .production_id = 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [212] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

TS_PUBLIC const TSLanguage *tree_sitter_hjson() {
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
