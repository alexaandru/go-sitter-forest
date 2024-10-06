#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 56
#define LARGE_STATE_COUNT 22
#define SYMBOL_COUNT 26
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  sym_sym = 1,
  sym_num = 2,
  anon_sym_DQUOTE = 3,
  aux_sym_esc_token1 = 4,
  sym_esc_seq = 5,
  sym_raw = 6,
  sym_com = 7,
  anon_sym_LBRACK = 8,
  anon_sym_LBRACK2 = 9,
  anon_sym_COMMA = 10,
  anon_sym_RBRACK = 11,
  anon_sym_LPAREN = 12,
  anon_sym_LPAREN2 = 13,
  anon_sym_RPAREN = 14,
  anon_sym_EQ = 15,
  sym_root = 16,
  sym_esc = 17,
  sym_arr = 18,
  sym_map = 19,
  sym_kv = 20,
  sym__val = 21,
  aux_sym_root_repeat1 = 22,
  aux_sym_esc_repeat1 = 23,
  aux_sym_arr_repeat1 = 24,
  aux_sym_map_repeat1 = 25,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_sym] = "sym",
  [sym_num] = "num",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_esc_token1] = "esc_token1",
  [sym_esc_seq] = "esc_seq",
  [sym_raw] = "raw",
  [sym_com] = "com",
  [anon_sym_LBRACK] = "[",
  [anon_sym_LBRACK2] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LPAREN] = "(",
  [anon_sym_LPAREN2] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_EQ] = "=",
  [sym_root] = "root",
  [sym_esc] = "esc",
  [sym_arr] = "arr",
  [sym_map] = "map",
  [sym_kv] = "kv",
  [sym__val] = "_val",
  [aux_sym_root_repeat1] = "root_repeat1",
  [aux_sym_esc_repeat1] = "esc_repeat1",
  [aux_sym_arr_repeat1] = "arr_repeat1",
  [aux_sym_map_repeat1] = "map_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_sym] = sym_sym,
  [sym_num] = sym_num,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_esc_token1] = aux_sym_esc_token1,
  [sym_esc_seq] = sym_esc_seq,
  [sym_raw] = sym_raw,
  [sym_com] = sym_com,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_LBRACK2] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_LPAREN2] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_root] = sym_root,
  [sym_esc] = sym_esc,
  [sym_arr] = sym_arr,
  [sym_map] = sym_map,
  [sym_kv] = sym_kv,
  [sym__val] = sym__val,
  [aux_sym_root_repeat1] = aux_sym_root_repeat1,
  [aux_sym_esc_repeat1] = aux_sym_esc_repeat1,
  [aux_sym_arr_repeat1] = aux_sym_arr_repeat1,
  [aux_sym_map_repeat1] = aux_sym_map_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_sym] = {
    .visible = true,
    .named = true,
  },
  [sym_num] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_esc_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_esc_seq] = {
    .visible = true,
    .named = true,
  },
  [sym_raw] = {
    .visible = true,
    .named = true,
  },
  [sym_com] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_root] = {
    .visible = true,
    .named = true,
  },
  [sym_esc] = {
    .visible = true,
    .named = true,
  },
  [sym_arr] = {
    .visible = true,
    .named = true,
  },
  [sym_map] = {
    .visible = true,
    .named = true,
  },
  [sym_kv] = {
    .visible = true,
    .named = true,
  },
  [sym__val] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_root_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_esc_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arr_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_map_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_tag = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_tag] = "tag",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_tag, 0},
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
  [7] = 3,
  [8] = 5,
  [9] = 4,
  [10] = 6,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 12,
  [19] = 17,
  [20] = 15,
  [21] = 14,
  [22] = 22,
  [23] = 22,
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
  [35] = 25,
  [36] = 27,
  [37] = 33,
  [38] = 34,
  [39] = 39,
  [40] = 28,
  [41] = 29,
  [42] = 24,
  [43] = 30,
  [44] = 31,
  [45] = 32,
  [46] = 26,
  [47] = 39,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 48,
  [52] = 50,
  [53] = 53,
  [54] = 54,
  [55] = 53,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(17);
      ADVANCE_MAP(
        '"', 24,
        '#', 1,
        '(', 34,
        ')', 36,
        '-', 7,
        '0', 20,
        ':', 14,
        '=', 37,
        '[', 30,
        '\\', 9,
        ']', 33,
        '|', 2,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(15);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(21);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '"', 24,
        '#', 1,
        '(', 34,
        ')', 36,
        ',', 32,
        '-', 7,
        '0', 20,
        ':', 14,
        '[', 30,
        ']', 33,
        '|', 2,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(21);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '"', 24,
        '#', 1,
        '(', 35,
        ')', 36,
        ',', 32,
        '-', 7,
        '0', 20,
        ':', 14,
        '[', 31,
        ']', 33,
        '|', 2,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(21);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(24);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') ADVANCE(26);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '0') ADVANCE(19);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 7:
      if (lookahead == '0') ADVANCE(20);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 8:
      if (lookahead == '0') ADVANCE(19);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 9:
      if (lookahead == 'u') ADVANCE(10);
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(27);
      END_STATE();
    case 10:
      if (lookahead == '{') ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == '}') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(11);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(11);
      END_STATE();
    case 14:
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 15:
      if (eof) ADVANCE(17);
      ADVANCE_MAP(
        '"', 24,
        '#', 1,
        '(', 35,
        ')', 36,
        '-', 7,
        '0', 20,
        ':', 14,
        '=', 37,
        '[', 31,
        '\\', 9,
        ']', 33,
        '|', 2,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(15);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(21);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 16:
      if (eof) ADVANCE(17);
      ADVANCE_MAP(
        '"', 24,
        '#', 1,
        '(', 35,
        '-', 7,
        '0', 20,
        ':', 14,
        '=', 37,
        '[', 31,
        '|', 2,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(16);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(21);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == ':') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_num);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == 'e') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_esc_token1);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_esc_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(25);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_esc_seq);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_raw);
      if (lookahead == '|') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_com);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LBRACK2);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == ',') ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 16},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 16},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 16},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 16},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 16},
  [36] = {.lex_state = 16},
  [37] = {.lex_state = 16},
  [38] = {.lex_state = 16},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 16},
  [41] = {.lex_state = 16},
  [42] = {.lex_state = 16},
  [43] = {.lex_state = 16},
  [44] = {.lex_state = 16},
  [45] = {.lex_state = 16},
  [46] = {.lex_state = 16},
  [47] = {.lex_state = 16},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_sym] = ACTIONS(1),
    [sym_num] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_esc_seq] = ACTIONS(1),
    [sym_raw] = ACTIONS(1),
    [sym_com] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_LBRACK2] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_LPAREN2] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
  },
  [1] = {
    [sym_root] = STATE(54),
    [sym_esc] = STATE(53),
    [sym_arr] = STATE(53),
    [sym_map] = STATE(53),
    [sym_kv] = STATE(11),
    [sym__val] = STATE(53),
    [aux_sym_root_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_sym] = ACTIONS(5),
    [sym_num] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_raw] = ACTIONS(7),
    [sym_com] = ACTIONS(11),
    [anon_sym_LBRACK2] = ACTIONS(13),
    [anon_sym_LPAREN2] = ACTIONS(15),
  },
  [2] = {
    [sym_esc] = STATE(55),
    [sym_arr] = STATE(55),
    [sym_map] = STATE(55),
    [sym_kv] = STATE(2),
    [sym__val] = STATE(55),
    [aux_sym_map_repeat1] = STATE(2),
    [sym_sym] = ACTIONS(17),
    [sym_num] = ACTIONS(20),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [sym_raw] = ACTIONS(20),
    [sym_com] = ACTIONS(26),
    [anon_sym_LBRACK2] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(32),
    [anon_sym_LPAREN2] = ACTIONS(35),
    [anon_sym_RPAREN] = ACTIONS(38),
  },
  [3] = {
    [sym_esc] = STATE(55),
    [sym_arr] = STATE(55),
    [sym_map] = STATE(55),
    [sym_kv] = STATE(5),
    [sym__val] = STATE(55),
    [aux_sym_map_repeat1] = STATE(5),
    [sym_sym] = ACTIONS(40),
    [sym_num] = ACTIONS(42),
    [anon_sym_DQUOTE] = ACTIONS(44),
    [sym_raw] = ACTIONS(42),
    [sym_com] = ACTIONS(46),
    [anon_sym_LBRACK2] = ACTIONS(48),
    [anon_sym_COMMA] = ACTIONS(50),
    [anon_sym_LPAREN2] = ACTIONS(52),
    [anon_sym_RPAREN] = ACTIONS(54),
  },
  [4] = {
    [sym_esc] = STATE(55),
    [sym_arr] = STATE(55),
    [sym_map] = STATE(55),
    [sym_kv] = STATE(6),
    [sym__val] = STATE(55),
    [aux_sym_map_repeat1] = STATE(6),
    [sym_sym] = ACTIONS(40),
    [sym_num] = ACTIONS(42),
    [anon_sym_DQUOTE] = ACTIONS(44),
    [sym_raw] = ACTIONS(42),
    [sym_com] = ACTIONS(56),
    [anon_sym_LBRACK2] = ACTIONS(48),
    [anon_sym_COMMA] = ACTIONS(58),
    [anon_sym_LPAREN2] = ACTIONS(52),
    [anon_sym_RPAREN] = ACTIONS(60),
  },
  [5] = {
    [sym_esc] = STATE(55),
    [sym_arr] = STATE(55),
    [sym_map] = STATE(55),
    [sym_kv] = STATE(2),
    [sym__val] = STATE(55),
    [aux_sym_map_repeat1] = STATE(2),
    [sym_sym] = ACTIONS(40),
    [sym_num] = ACTIONS(42),
    [anon_sym_DQUOTE] = ACTIONS(44),
    [sym_raw] = ACTIONS(42),
    [sym_com] = ACTIONS(62),
    [anon_sym_LBRACK2] = ACTIONS(48),
    [anon_sym_COMMA] = ACTIONS(64),
    [anon_sym_LPAREN2] = ACTIONS(52),
    [anon_sym_RPAREN] = ACTIONS(66),
  },
  [6] = {
    [sym_esc] = STATE(55),
    [sym_arr] = STATE(55),
    [sym_map] = STATE(55),
    [sym_kv] = STATE(2),
    [sym__val] = STATE(55),
    [aux_sym_map_repeat1] = STATE(2),
    [sym_sym] = ACTIONS(40),
    [sym_num] = ACTIONS(42),
    [anon_sym_DQUOTE] = ACTIONS(44),
    [sym_raw] = ACTIONS(42),
    [sym_com] = ACTIONS(62),
    [anon_sym_LBRACK2] = ACTIONS(48),
    [anon_sym_COMMA] = ACTIONS(64),
    [anon_sym_LPAREN2] = ACTIONS(52),
    [anon_sym_RPAREN] = ACTIONS(68),
  },
  [7] = {
    [sym_esc] = STATE(55),
    [sym_arr] = STATE(55),
    [sym_map] = STATE(55),
    [sym_kv] = STATE(8),
    [sym__val] = STATE(55),
    [aux_sym_map_repeat1] = STATE(8),
    [sym_sym] = ACTIONS(40),
    [sym_num] = ACTIONS(42),
    [anon_sym_DQUOTE] = ACTIONS(44),
    [sym_raw] = ACTIONS(42),
    [sym_com] = ACTIONS(70),
    [anon_sym_LBRACK2] = ACTIONS(48),
    [anon_sym_COMMA] = ACTIONS(72),
    [anon_sym_LPAREN2] = ACTIONS(52),
    [anon_sym_RPAREN] = ACTIONS(74),
  },
  [8] = {
    [sym_esc] = STATE(55),
    [sym_arr] = STATE(55),
    [sym_map] = STATE(55),
    [sym_kv] = STATE(2),
    [sym__val] = STATE(55),
    [aux_sym_map_repeat1] = STATE(2),
    [sym_sym] = ACTIONS(40),
    [sym_num] = ACTIONS(42),
    [anon_sym_DQUOTE] = ACTIONS(44),
    [sym_raw] = ACTIONS(42),
    [sym_com] = ACTIONS(62),
    [anon_sym_LBRACK2] = ACTIONS(48),
    [anon_sym_COMMA] = ACTIONS(64),
    [anon_sym_LPAREN2] = ACTIONS(52),
    [anon_sym_RPAREN] = ACTIONS(76),
  },
  [9] = {
    [sym_esc] = STATE(55),
    [sym_arr] = STATE(55),
    [sym_map] = STATE(55),
    [sym_kv] = STATE(10),
    [sym__val] = STATE(55),
    [aux_sym_map_repeat1] = STATE(10),
    [sym_sym] = ACTIONS(40),
    [sym_num] = ACTIONS(42),
    [anon_sym_DQUOTE] = ACTIONS(44),
    [sym_raw] = ACTIONS(42),
    [sym_com] = ACTIONS(78),
    [anon_sym_LBRACK2] = ACTIONS(48),
    [anon_sym_COMMA] = ACTIONS(80),
    [anon_sym_LPAREN2] = ACTIONS(52),
    [anon_sym_RPAREN] = ACTIONS(82),
  },
  [10] = {
    [sym_esc] = STATE(55),
    [sym_arr] = STATE(55),
    [sym_map] = STATE(55),
    [sym_kv] = STATE(2),
    [sym__val] = STATE(55),
    [aux_sym_map_repeat1] = STATE(2),
    [sym_sym] = ACTIONS(40),
    [sym_num] = ACTIONS(42),
    [anon_sym_DQUOTE] = ACTIONS(44),
    [sym_raw] = ACTIONS(42),
    [sym_com] = ACTIONS(62),
    [anon_sym_LBRACK2] = ACTIONS(48),
    [anon_sym_COMMA] = ACTIONS(64),
    [anon_sym_LPAREN2] = ACTIONS(52),
    [anon_sym_RPAREN] = ACTIONS(84),
  },
  [11] = {
    [sym_esc] = STATE(53),
    [sym_arr] = STATE(53),
    [sym_map] = STATE(53),
    [sym_kv] = STATE(13),
    [sym__val] = STATE(53),
    [aux_sym_root_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(86),
    [sym_sym] = ACTIONS(5),
    [sym_num] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_raw] = ACTIONS(7),
    [sym_com] = ACTIONS(88),
    [anon_sym_LBRACK2] = ACTIONS(13),
    [anon_sym_LPAREN2] = ACTIONS(15),
  },
  [12] = {
    [sym_esc] = STATE(14),
    [sym_arr] = STATE(14),
    [sym_map] = STATE(14),
    [sym__val] = STATE(14),
    [aux_sym_arr_repeat1] = STATE(14),
    [sym_sym] = ACTIONS(90),
    [sym_num] = ACTIONS(92),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [sym_raw] = ACTIONS(92),
    [sym_com] = ACTIONS(92),
    [anon_sym_LBRACK2] = ACTIONS(96),
    [anon_sym_COMMA] = ACTIONS(98),
    [anon_sym_RBRACK] = ACTIONS(100),
    [anon_sym_LPAREN2] = ACTIONS(102),
  },
  [13] = {
    [sym_esc] = STATE(53),
    [sym_arr] = STATE(53),
    [sym_map] = STATE(53),
    [sym_kv] = STATE(13),
    [sym__val] = STATE(53),
    [aux_sym_root_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(104),
    [sym_sym] = ACTIONS(106),
    [sym_num] = ACTIONS(109),
    [anon_sym_DQUOTE] = ACTIONS(112),
    [sym_raw] = ACTIONS(109),
    [sym_com] = ACTIONS(115),
    [anon_sym_LBRACK2] = ACTIONS(118),
    [anon_sym_LPAREN2] = ACTIONS(121),
  },
  [14] = {
    [sym_esc] = STATE(16),
    [sym_arr] = STATE(16),
    [sym_map] = STATE(16),
    [sym__val] = STATE(16),
    [aux_sym_arr_repeat1] = STATE(16),
    [sym_sym] = ACTIONS(90),
    [sym_num] = ACTIONS(124),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [sym_raw] = ACTIONS(124),
    [sym_com] = ACTIONS(124),
    [anon_sym_LBRACK2] = ACTIONS(96),
    [anon_sym_COMMA] = ACTIONS(126),
    [anon_sym_RBRACK] = ACTIONS(128),
    [anon_sym_LPAREN2] = ACTIONS(102),
  },
  [15] = {
    [sym_esc] = STATE(16),
    [sym_arr] = STATE(16),
    [sym_map] = STATE(16),
    [sym__val] = STATE(16),
    [aux_sym_arr_repeat1] = STATE(16),
    [sym_sym] = ACTIONS(90),
    [sym_num] = ACTIONS(124),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [sym_raw] = ACTIONS(124),
    [sym_com] = ACTIONS(124),
    [anon_sym_LBRACK2] = ACTIONS(96),
    [anon_sym_COMMA] = ACTIONS(126),
    [anon_sym_RBRACK] = ACTIONS(130),
    [anon_sym_LPAREN2] = ACTIONS(102),
  },
  [16] = {
    [sym_esc] = STATE(16),
    [sym_arr] = STATE(16),
    [sym_map] = STATE(16),
    [sym__val] = STATE(16),
    [aux_sym_arr_repeat1] = STATE(16),
    [sym_sym] = ACTIONS(132),
    [sym_num] = ACTIONS(135),
    [anon_sym_DQUOTE] = ACTIONS(138),
    [sym_raw] = ACTIONS(135),
    [sym_com] = ACTIONS(135),
    [anon_sym_LBRACK2] = ACTIONS(141),
    [anon_sym_COMMA] = ACTIONS(144),
    [anon_sym_RBRACK] = ACTIONS(147),
    [anon_sym_LPAREN2] = ACTIONS(149),
  },
  [17] = {
    [sym_esc] = STATE(15),
    [sym_arr] = STATE(15),
    [sym_map] = STATE(15),
    [sym__val] = STATE(15),
    [aux_sym_arr_repeat1] = STATE(15),
    [sym_sym] = ACTIONS(90),
    [sym_num] = ACTIONS(152),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [sym_raw] = ACTIONS(152),
    [sym_com] = ACTIONS(152),
    [anon_sym_LBRACK2] = ACTIONS(96),
    [anon_sym_COMMA] = ACTIONS(154),
    [anon_sym_RBRACK] = ACTIONS(156),
    [anon_sym_LPAREN2] = ACTIONS(102),
  },
  [18] = {
    [sym_esc] = STATE(21),
    [sym_arr] = STATE(21),
    [sym_map] = STATE(21),
    [sym__val] = STATE(21),
    [aux_sym_arr_repeat1] = STATE(21),
    [sym_sym] = ACTIONS(90),
    [sym_num] = ACTIONS(158),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [sym_raw] = ACTIONS(158),
    [sym_com] = ACTIONS(158),
    [anon_sym_LBRACK2] = ACTIONS(96),
    [anon_sym_COMMA] = ACTIONS(160),
    [anon_sym_RBRACK] = ACTIONS(162),
    [anon_sym_LPAREN2] = ACTIONS(102),
  },
  [19] = {
    [sym_esc] = STATE(20),
    [sym_arr] = STATE(20),
    [sym_map] = STATE(20),
    [sym__val] = STATE(20),
    [aux_sym_arr_repeat1] = STATE(20),
    [sym_sym] = ACTIONS(90),
    [sym_num] = ACTIONS(164),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [sym_raw] = ACTIONS(164),
    [sym_com] = ACTIONS(164),
    [anon_sym_LBRACK2] = ACTIONS(96),
    [anon_sym_COMMA] = ACTIONS(166),
    [anon_sym_RBRACK] = ACTIONS(168),
    [anon_sym_LPAREN2] = ACTIONS(102),
  },
  [20] = {
    [sym_esc] = STATE(16),
    [sym_arr] = STATE(16),
    [sym_map] = STATE(16),
    [sym__val] = STATE(16),
    [aux_sym_arr_repeat1] = STATE(16),
    [sym_sym] = ACTIONS(90),
    [sym_num] = ACTIONS(124),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [sym_raw] = ACTIONS(124),
    [sym_com] = ACTIONS(124),
    [anon_sym_LBRACK2] = ACTIONS(96),
    [anon_sym_COMMA] = ACTIONS(126),
    [anon_sym_RBRACK] = ACTIONS(170),
    [anon_sym_LPAREN2] = ACTIONS(102),
  },
  [21] = {
    [sym_esc] = STATE(16),
    [sym_arr] = STATE(16),
    [sym_map] = STATE(16),
    [sym__val] = STATE(16),
    [aux_sym_arr_repeat1] = STATE(16),
    [sym_sym] = ACTIONS(90),
    [sym_num] = ACTIONS(124),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [sym_raw] = ACTIONS(124),
    [sym_com] = ACTIONS(124),
    [anon_sym_LBRACK2] = ACTIONS(96),
    [anon_sym_COMMA] = ACTIONS(126),
    [anon_sym_RBRACK] = ACTIONS(172),
    [anon_sym_LPAREN2] = ACTIONS(102),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(178), 1,
      anon_sym_COMMA,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 9,
      sym_sym,
      sym_num,
      anon_sym_DQUOTE,
      sym_raw,
      sym_com,
      anon_sym_LBRACK2,
      anon_sym_RBRACK,
      anon_sym_LPAREN2,
      anon_sym_RPAREN,
  [21] = 4,
    ACTIONS(182), 1,
      anon_sym_LBRACK,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 2,
      anon_sym_LBRACK2,
      anon_sym_LPAREN2,
    ACTIONS(178), 7,
      ts_builtin_sym_end,
      sym_sym,
      sym_num,
      anon_sym_DQUOTE,
      sym_raw,
      sym_com,
      anon_sym_EQ,
  [41] = 2,
    ACTIONS(188), 1,
      anon_sym_COMMA,
    ACTIONS(186), 9,
      sym_sym,
      sym_num,
      anon_sym_DQUOTE,
      sym_raw,
      sym_com,
      anon_sym_LBRACK2,
      anon_sym_RBRACK,
      anon_sym_LPAREN2,
      anon_sym_RPAREN,
  [56] = 6,
    ACTIONS(190), 1,
      sym_sym,
    ACTIONS(194), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_LBRACK2,
    ACTIONS(198), 1,
      anon_sym_LPAREN2,
    ACTIONS(192), 2,
      sym_num,
      sym_raw,
    STATE(39), 4,
      sym_esc,
      sym_arr,
      sym_map,
      sym__val,
  [79] = 2,
    ACTIONS(202), 1,
      anon_sym_COMMA,
    ACTIONS(200), 9,
      sym_sym,
      sym_num,
      anon_sym_DQUOTE,
      sym_raw,
      sym_com,
      anon_sym_LBRACK2,
      anon_sym_RBRACK,
      anon_sym_LPAREN2,
      anon_sym_RPAREN,
  [94] = 2,
    ACTIONS(206), 1,
      anon_sym_COMMA,
    ACTIONS(204), 9,
      sym_sym,
      sym_num,
      anon_sym_DQUOTE,
      sym_raw,
      sym_com,
      anon_sym_LBRACK2,
      anon_sym_RBRACK,
      anon_sym_LPAREN2,
      anon_sym_RPAREN,
  [109] = 2,
    ACTIONS(210), 1,
      anon_sym_COMMA,
    ACTIONS(208), 9,
      sym_sym,
      sym_num,
      anon_sym_DQUOTE,
      sym_raw,
      sym_com,
      anon_sym_LBRACK2,
      anon_sym_RBRACK,
      anon_sym_LPAREN2,
      anon_sym_RPAREN,
  [124] = 2,
    ACTIONS(214), 1,
      anon_sym_COMMA,
    ACTIONS(212), 9,
      sym_sym,
      sym_num,
      anon_sym_DQUOTE,
      sym_raw,
      sym_com,
      anon_sym_LBRACK2,
      anon_sym_RBRACK,
      anon_sym_LPAREN2,
      anon_sym_RPAREN,
  [139] = 2,
    ACTIONS(218), 1,
      anon_sym_COMMA,
    ACTIONS(216), 9,
      sym_sym,
      sym_num,
      anon_sym_DQUOTE,
      sym_raw,
      sym_com,
      anon_sym_LBRACK2,
      anon_sym_RBRACK,
      anon_sym_LPAREN2,
      anon_sym_RPAREN,
  [154] = 2,
    ACTIONS(222), 1,
      anon_sym_COMMA,
    ACTIONS(220), 9,
      sym_sym,
      sym_num,
      anon_sym_DQUOTE,
      sym_raw,
      sym_com,
      anon_sym_LBRACK2,
      anon_sym_RBRACK,
      anon_sym_LPAREN2,
      anon_sym_RPAREN,
  [169] = 2,
    ACTIONS(226), 1,
      anon_sym_COMMA,
    ACTIONS(224), 9,
      sym_sym,
      sym_num,
      anon_sym_DQUOTE,
      sym_raw,
      sym_com,
      anon_sym_LBRACK2,
      anon_sym_RBRACK,
      anon_sym_LPAREN2,
      anon_sym_RPAREN,
  [184] = 2,
    ACTIONS(230), 1,
      anon_sym_COMMA,
    ACTIONS(228), 9,
      sym_sym,
      sym_num,
      anon_sym_DQUOTE,
      sym_raw,
      sym_com,
      anon_sym_LBRACK2,
      anon_sym_RBRACK,
      anon_sym_LPAREN2,
      anon_sym_RPAREN,
  [199] = 2,
    ACTIONS(234), 1,
      anon_sym_COMMA,
    ACTIONS(232), 9,
      sym_sym,
      sym_num,
      anon_sym_DQUOTE,
      sym_raw,
      sym_com,
      anon_sym_LBRACK2,
      anon_sym_RBRACK,
      anon_sym_LPAREN2,
      anon_sym_RPAREN,
  [214] = 6,
    ACTIONS(5), 1,
      sym_sym,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACK2,
    ACTIONS(15), 1,
      anon_sym_LPAREN2,
    ACTIONS(236), 2,
      sym_num,
      sym_raw,
    STATE(47), 4,
      sym_esc,
      sym_arr,
      sym_map,
      sym__val,
  [237] = 1,
    ACTIONS(206), 9,
      ts_builtin_sym_end,
      sym_sym,
      sym_num,
      anon_sym_DQUOTE,
      sym_raw,
      sym_com,
      anon_sym_LBRACK2,
      anon_sym_LPAREN2,
      anon_sym_EQ,
  [249] = 1,
    ACTIONS(230), 9,
      ts_builtin_sym_end,
      sym_sym,
      sym_num,
      anon_sym_DQUOTE,
      sym_raw,
      sym_com,
      anon_sym_LBRACK2,
      anon_sym_LPAREN2,
      anon_sym_EQ,
  [261] = 1,
    ACTIONS(234), 9,
      ts_builtin_sym_end,
      sym_sym,
      sym_num,
      anon_sym_DQUOTE,
      sym_raw,
      sym_com,
      anon_sym_LBRACK2,
      anon_sym_LPAREN2,
      anon_sym_EQ,
  [273] = 2,
    ACTIONS(240), 1,
      anon_sym_COMMA,
    ACTIONS(238), 8,
      sym_sym,
      sym_num,
      anon_sym_DQUOTE,
      sym_raw,
      sym_com,
      anon_sym_LBRACK2,
      anon_sym_LPAREN2,
      anon_sym_RPAREN,
  [287] = 1,
    ACTIONS(210), 9,
      ts_builtin_sym_end,
      sym_sym,
      sym_num,
      anon_sym_DQUOTE,
      sym_raw,
      sym_com,
      anon_sym_LBRACK2,
      anon_sym_LPAREN2,
      anon_sym_EQ,
  [299] = 1,
    ACTIONS(214), 9,
      ts_builtin_sym_end,
      sym_sym,
      sym_num,
      anon_sym_DQUOTE,
      sym_raw,
      sym_com,
      anon_sym_LBRACK2,
      anon_sym_LPAREN2,
      anon_sym_EQ,
  [311] = 1,
    ACTIONS(188), 9,
      ts_builtin_sym_end,
      sym_sym,
      sym_num,
      anon_sym_DQUOTE,
      sym_raw,
      sym_com,
      anon_sym_LBRACK2,
      anon_sym_LPAREN2,
      anon_sym_EQ,
  [323] = 1,
    ACTIONS(218), 9,
      ts_builtin_sym_end,
      sym_sym,
      sym_num,
      anon_sym_DQUOTE,
      sym_raw,
      sym_com,
      anon_sym_LBRACK2,
      anon_sym_LPAREN2,
      anon_sym_EQ,
  [335] = 1,
    ACTIONS(222), 9,
      ts_builtin_sym_end,
      sym_sym,
      sym_num,
      anon_sym_DQUOTE,
      sym_raw,
      sym_com,
      anon_sym_LBRACK2,
      anon_sym_LPAREN2,
      anon_sym_EQ,
  [347] = 1,
    ACTIONS(226), 9,
      ts_builtin_sym_end,
      sym_sym,
      sym_num,
      anon_sym_DQUOTE,
      sym_raw,
      sym_com,
      anon_sym_LBRACK2,
      anon_sym_LPAREN2,
      anon_sym_EQ,
  [359] = 1,
    ACTIONS(202), 9,
      ts_builtin_sym_end,
      sym_sym,
      sym_num,
      anon_sym_DQUOTE,
      sym_raw,
      sym_com,
      anon_sym_LBRACK2,
      anon_sym_LPAREN2,
      anon_sym_EQ,
  [371] = 1,
    ACTIONS(240), 8,
      ts_builtin_sym_end,
      sym_sym,
      sym_num,
      anon_sym_DQUOTE,
      sym_raw,
      sym_com,
      anon_sym_LBRACK2,
      anon_sym_LPAREN2,
  [382] = 4,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    ACTIONS(244), 1,
      aux_sym_esc_token1,
    ACTIONS(246), 1,
      sym_esc_seq,
    STATE(50), 1,
      aux_sym_esc_repeat1,
  [395] = 4,
    ACTIONS(248), 1,
      anon_sym_DQUOTE,
    ACTIONS(250), 1,
      aux_sym_esc_token1,
    ACTIONS(253), 1,
      sym_esc_seq,
    STATE(49), 1,
      aux_sym_esc_repeat1,
  [408] = 4,
    ACTIONS(256), 1,
      anon_sym_DQUOTE,
    ACTIONS(258), 1,
      aux_sym_esc_token1,
    ACTIONS(260), 1,
      sym_esc_seq,
    STATE(49), 1,
      aux_sym_esc_repeat1,
  [421] = 4,
    ACTIONS(262), 1,
      anon_sym_DQUOTE,
    ACTIONS(264), 1,
      aux_sym_esc_token1,
    ACTIONS(266), 1,
      sym_esc_seq,
    STATE(52), 1,
      aux_sym_esc_repeat1,
  [434] = 4,
    ACTIONS(258), 1,
      aux_sym_esc_token1,
    ACTIONS(260), 1,
      sym_esc_seq,
    ACTIONS(268), 1,
      anon_sym_DQUOTE,
    STATE(49), 1,
      aux_sym_esc_repeat1,
  [447] = 1,
    ACTIONS(270), 1,
      anon_sym_EQ,
  [451] = 1,
    ACTIONS(272), 1,
      ts_builtin_sym_end,
  [455] = 1,
    ACTIONS(274), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(22)] = 0,
  [SMALL_STATE(23)] = 21,
  [SMALL_STATE(24)] = 41,
  [SMALL_STATE(25)] = 56,
  [SMALL_STATE(26)] = 79,
  [SMALL_STATE(27)] = 94,
  [SMALL_STATE(28)] = 109,
  [SMALL_STATE(29)] = 124,
  [SMALL_STATE(30)] = 139,
  [SMALL_STATE(31)] = 154,
  [SMALL_STATE(32)] = 169,
  [SMALL_STATE(33)] = 184,
  [SMALL_STATE(34)] = 199,
  [SMALL_STATE(35)] = 214,
  [SMALL_STATE(36)] = 237,
  [SMALL_STATE(37)] = 249,
  [SMALL_STATE(38)] = 261,
  [SMALL_STATE(39)] = 273,
  [SMALL_STATE(40)] = 287,
  [SMALL_STATE(41)] = 299,
  [SMALL_STATE(42)] = 311,
  [SMALL_STATE(43)] = 323,
  [SMALL_STATE(44)] = 335,
  [SMALL_STATE(45)] = 347,
  [SMALL_STATE(46)] = 359,
  [SMALL_STATE(47)] = 371,
  [SMALL_STATE(48)] = 382,
  [SMALL_STATE(49)] = 395,
  [SMALL_STATE(50)] = 408,
  [SMALL_STATE(51)] = 421,
  [SMALL_STATE(52)] = 434,
  [SMALL_STATE(53)] = 447,
  [SMALL_STATE(54)] = 451,
  [SMALL_STATE(55)] = 455,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_map_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_map_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_map_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_map_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_map_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_map_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_map_repeat1, 2, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 1, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2, 0, 0),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arr_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arr_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arr_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arr_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arr_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arr_repeat1, 2, 0, 0),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arr_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__val, 1, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__val, 1, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arr, 2, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arr, 2, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_esc, 2, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_esc, 2, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arr, 3, 0, 1),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arr, 3, 0, 1),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 2, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 2, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 3, 0, 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 3, 0, 1),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_esc, 3, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_esc, 3, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arr, 3, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arr, 3, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 3, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 3, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 4, 0, 1),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 4, 0, 1),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arr, 4, 0, 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arr, 4, 0, 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kv, 3, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kv, 3, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_esc_repeat1, 2, 0, 0),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_esc_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [253] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_esc_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [272] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
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

TS_PUBLIC const TSLanguage *tree_sitter_fin(void) {
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
