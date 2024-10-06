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
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 10,
  [15] = 13,
  [16] = 12,
  [17] = 11,
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
  [39] = 36,
  [40] = 37,
  [41] = 38,
  [42] = 19,
  [43] = 20,
  [44] = 21,
  [45] = 29,
  [46] = 46,
  [47] = 30,
  [48] = 26,
  [49] = 49,
  [50] = 33,
  [51] = 34,
  [52] = 52,
  [53] = 53,
  [54] = 18,
  [55] = 55,
  [56] = 28,
  [57] = 32,
  [58] = 58,
  [59] = 35,
  [60] = 25,
  [61] = 27,
  [62] = 31,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(29);
      ADVANCE_MAP(
        '"', 53,
        '#', 52,
        '\'', 55,
        '.', 25,
        '/', 7,
        '0', 38,
        ':', 34,
        '[', 35,
        '\\', 23,
        ']', 36,
        'f', 11,
        'n', 20,
        't', 17,
        '{', 30,
        '}', 33,
        '+', 10,
        '-', 10,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\n', 32,
        '"', 53,
        '#', 52,
        '\'', 55,
        ',', 31,
        '.', 25,
        '/', 7,
        '0', 38,
        '[', 35,
        ']', 36,
        'f', 11,
        'n', 20,
        't', 17,
        '{', 30,
        '}', 33,
        '+', 10,
        '-', 10,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(4);
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
      if (lookahead == '\n') SKIP(3);
      if (lookahead == '#') ADVANCE(50);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '/') ADVANCE(64);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(67);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(53);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '\'') ADVANCE(54);
      if (lookahead == '/') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
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
      ADVANCE_MAP(
        '"', 53,
        '#', 52,
        '\'', 55,
        '.', 25,
        '/', 7,
        '0', 38,
        ':', 34,
        '[', 35,
        ']', 36,
        'f', 11,
        'n', 20,
        't', 17,
        '{', 30,
        '}', 33,
        '+', 10,
        '-', 10,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28);
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
      ADVANCE_MAP(
        '.', 41,
        'B', 22,
        'b', 22,
        'E', 21,
        'e', 21,
        'O', 24,
        'o', 24,
        'X', 27,
        'x', 27,
      );
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
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(56);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '#' &&
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
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(63);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '#' &&
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
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 1},
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
    [sym_document] = STATE(53),
    [sym__value] = STATE(58),
    [sym_object] = STATE(60),
    [sym_array] = STATE(60),
    [sym_string] = STATE(60),
    [sym_quoted_string] = STATE(48),
    [sym_multiline_string] = STATE(48),
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
    [sym__value] = STATE(49),
    [sym_object] = STATE(25),
    [sym_array] = STATE(25),
    [sym_string] = STATE(25),
    [sym_quoted_string] = STATE(26),
    [sym_multiline_string] = STATE(26),
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
    [sym__value] = STATE(37),
    [sym_object] = STATE(25),
    [sym_array] = STATE(25),
    [sym_string] = STATE(25),
    [sym_quoted_string] = STATE(26),
    [sym_multiline_string] = STATE(26),
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
    [sym__value] = STATE(40),
    [sym_object] = STATE(25),
    [sym_array] = STATE(25),
    [sym_string] = STATE(25),
    [sym_quoted_string] = STATE(26),
    [sym_multiline_string] = STATE(26),
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
    [sym__value] = STATE(52),
    [sym_object] = STATE(25),
    [sym_array] = STATE(25),
    [sym_string] = STATE(25),
    [sym_quoted_string] = STATE(26),
    [sym_multiline_string] = STATE(26),
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
    STATE(46), 1,
      sym_pair,
    STATE(55), 1,
      sym_string,
    STATE(48), 2,
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
    STATE(36), 1,
      sym_pair,
    STATE(55), 1,
      sym_string,
    STATE(48), 2,
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
    STATE(39), 1,
      sym_pair,
    STATE(55), 1,
      sym_string,
    STATE(48), 2,
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
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      aux_sym__quoted_string_content_token1,
    STATE(12), 1,
      aux_sym__quoted_string_content,
  [123] = 5,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym_escape_sequence,
    ACTIONS(83), 1,
      anon_sym_SQUOTE,
    ACTIONS(85), 1,
      aux_sym__quoted_string_content_token1,
    STATE(9), 1,
      aux_sym__quoted_string_content,
  [139] = 5,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym_escape_sequence,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      aux_sym__quoted_string_content_token1,
    STATE(9), 1,
      aux_sym__quoted_string_content,
  [155] = 5,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_SQUOTE,
    ACTIONS(87), 1,
      sym_escape_sequence,
    ACTIONS(89), 1,
      aux_sym__quoted_string_content_token1,
    STATE(11), 1,
      aux_sym__quoted_string_content,
  [171] = 5,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(91), 1,
      sym_escape_sequence,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      aux_sym__quoted_string_content_token1,
    STATE(16), 1,
      aux_sym__quoted_string_content,
  [187] = 5,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    ACTIONS(97), 1,
      sym_escape_sequence,
    ACTIONS(99), 1,
      aux_sym__quoted_string_content_token1,
    STATE(17), 1,
      aux_sym__quoted_string_content,
  [203] = 5,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym_escape_sequence,
    ACTIONS(85), 1,
      aux_sym__quoted_string_content_token1,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    STATE(9), 1,
      aux_sym__quoted_string_content,
  [219] = 5,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym_escape_sequence,
    ACTIONS(85), 1,
      aux_sym__quoted_string_content_token1,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
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
    STATE(22), 1,
      aux_sym_multiline_string_repeat1,
  [259] = 4,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(111), 1,
      aux_sym_object_token1,
    ACTIONS(113), 1,
      anon_sym_RBRACE,
    STATE(23), 1,
      aux_sym_object_repeat1,
  [272] = 4,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(115), 1,
      aux_sym_object_token1,
    ACTIONS(117), 1,
      anon_sym_RBRACK,
    STATE(24), 1,
      aux_sym_array_repeat1,
  [285] = 4,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(121), 1,
      aux_sym_multiline_string_token1,
    STATE(22), 1,
      aux_sym_multiline_string_repeat1,
  [298] = 4,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(124), 1,
      aux_sym_object_token1,
    ACTIONS(127), 1,
      anon_sym_RBRACE,
    STATE(23), 1,
      aux_sym_object_repeat1,
  [311] = 4,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(129), 1,
      aux_sym_object_token1,
    ACTIONS(132), 1,
      anon_sym_RBRACK,
    STATE(24), 1,
      aux_sym_array_repeat1,
  [324] = 3,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(134), 1,
      aux_sym_object_token1,
    ACTIONS(136), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [335] = 3,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(138), 1,
      aux_sym_object_token1,
    ACTIONS(140), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [346] = 3,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(142), 1,
      aux_sym_object_token1,
    ACTIONS(144), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [357] = 3,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(146), 1,
      aux_sym_object_token1,
    ACTIONS(148), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [368] = 3,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(150), 1,
      aux_sym_object_token1,
    ACTIONS(152), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [379] = 3,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(154), 1,
      aux_sym_object_token1,
    ACTIONS(156), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [390] = 3,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(158), 1,
      aux_sym_object_token1,
    ACTIONS(160), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [401] = 3,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(162), 1,
      aux_sym_object_token1,
    ACTIONS(164), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [412] = 3,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(166), 1,
      aux_sym_object_token1,
    ACTIONS(168), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [423] = 3,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(170), 1,
      aux_sym_object_token1,
    ACTIONS(172), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [434] = 3,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(174), 1,
      aux_sym_object_token1,
    ACTIONS(176), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [445] = 4,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(111), 1,
      aux_sym_object_token1,
    ACTIONS(178), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      aux_sym_object_repeat1,
  [458] = 4,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(115), 1,
      aux_sym_object_token1,
    ACTIONS(180), 1,
      anon_sym_RBRACK,
    STATE(21), 1,
      aux_sym_array_repeat1,
  [471] = 4,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(184), 1,
      aux_sym_multiline_string_token1,
    STATE(42), 1,
      aux_sym_multiline_string_repeat1,
  [484] = 4,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(111), 1,
      aux_sym_object_token1,
    ACTIONS(186), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      aux_sym_object_repeat1,
  [497] = 4,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(115), 1,
      aux_sym_object_token1,
    ACTIONS(188), 1,
      anon_sym_RBRACK,
    STATE(44), 1,
      aux_sym_array_repeat1,
  [510] = 4,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(192), 1,
      aux_sym_multiline_string_token1,
    STATE(19), 1,
      aux_sym_multiline_string_repeat1,
  [523] = 4,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(109), 1,
      aux_sym_multiline_string_token1,
    ACTIONS(194), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(22), 1,
      aux_sym_multiline_string_repeat1,
  [536] = 4,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(111), 1,
      aux_sym_object_token1,
    ACTIONS(196), 1,
      anon_sym_RBRACE,
    STATE(23), 1,
      aux_sym_object_repeat1,
  [549] = 4,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(115), 1,
      aux_sym_object_token1,
    ACTIONS(198), 1,
      anon_sym_RBRACK,
    STATE(24), 1,
      aux_sym_array_repeat1,
  [562] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 2,
      ts_builtin_sym_end,
      anon_sym_COLON,
  [570] = 3,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_RBRACE,
    ACTIONS(200), 1,
      aux_sym_object_token1,
  [580] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 2,
      ts_builtin_sym_end,
      anon_sym_COLON,
  [588] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 2,
      ts_builtin_sym_end,
      anon_sym_COLON,
  [596] = 3,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(132), 1,
      anon_sym_RBRACK,
    ACTIONS(202), 1,
      aux_sym_object_token1,
  [606] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 2,
      ts_builtin_sym_end,
      anon_sym_COLON,
  [614] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 2,
      ts_builtin_sym_end,
      anon_sym_COLON,
  [622] = 3,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(204), 1,
      aux_sym_object_token1,
    ACTIONS(206), 1,
      anon_sym_RBRACE,
  [632] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      ts_builtin_sym_end,
  [639] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
  [646] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_COLON,
  [653] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
  [660] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      ts_builtin_sym_end,
  [667] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      ts_builtin_sym_end,
  [674] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      ts_builtin_sym_end,
  [681] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      ts_builtin_sym_end,
  [688] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      ts_builtin_sym_end,
  [695] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
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
  [SMALL_STATE(26)] = 335,
  [SMALL_STATE(27)] = 346,
  [SMALL_STATE(28)] = 357,
  [SMALL_STATE(29)] = 368,
  [SMALL_STATE(30)] = 379,
  [SMALL_STATE(31)] = 390,
  [SMALL_STATE(32)] = 401,
  [SMALL_STATE(33)] = 412,
  [SMALL_STATE(34)] = 423,
  [SMALL_STATE(35)] = 434,
  [SMALL_STATE(36)] = 445,
  [SMALL_STATE(37)] = 458,
  [SMALL_STATE(38)] = 471,
  [SMALL_STATE(39)] = 484,
  [SMALL_STATE(40)] = 497,
  [SMALL_STATE(41)] = 510,
  [SMALL_STATE(42)] = 523,
  [SMALL_STATE(43)] = 536,
  [SMALL_STATE(44)] = 549,
  [SMALL_STATE(45)] = 562,
  [SMALL_STATE(46)] = 570,
  [SMALL_STATE(47)] = 580,
  [SMALL_STATE(48)] = 588,
  [SMALL_STATE(49)] = 596,
  [SMALL_STATE(50)] = 606,
  [SMALL_STATE(51)] = 614,
  [SMALL_STATE(52)] = 622,
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
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 1, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 1, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 1, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_object_repeat1, 1, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__quoted_string_content, 2, 0, 0), SHIFT_REPEAT(9),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quoted_string_content, 2, 0, 0),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quoted_string_content, 2, 0, 0), SHIFT_REPEAT(9),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 4, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2, 0, 0),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 2, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 2, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 2, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 2, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 3, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 3, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 3, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 4, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, 0, 1),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pair, 3, 0, 1),
  [208] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
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

TS_PUBLIC const TSLanguage *tree_sitter_hjson(void) {
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
