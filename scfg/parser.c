#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 50
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 28
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_POUND = 1,
  aux_sym_comment_token1 = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  sym__atom = 5,
  anon_sym_DQUOTE = 6,
  aux_sym_dquote_word_token1 = 7,
  anon_sym_SQUOTE = 8,
  aux_sym_squote_word_token1 = 9,
  anon_sym_BSLASH = 10,
  sym__newline = 11,
  sym_config = 12,
  sym__line = 13,
  sym_comment = 14,
  sym_directive = 15,
  sym_directive_name = 16,
  sym_directive_params = 17,
  sym_block = 18,
  sym_word = 19,
  sym_dquote_word = 20,
  sym_squote_word = 21,
  sym_esc_pair = 22,
  aux_sym_config_repeat1 = 23,
  aux_sym_comment_repeat1 = 24,
  aux_sym_directive_params_repeat1 = 25,
  aux_sym_dquote_word_repeat1 = 26,
  aux_sym_squote_word_repeat1 = 27,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym__atom] = "_atom",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_dquote_word_token1] = "dquote_word_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_squote_word_token1] = "squote_word_token1",
  [anon_sym_BSLASH] = "\\",
  [sym__newline] = "_newline",
  [sym_config] = "config",
  [sym__line] = "_line",
  [sym_comment] = "comment",
  [sym_directive] = "directive",
  [sym_directive_name] = "directive_name",
  [sym_directive_params] = "directive_params",
  [sym_block] = "block",
  [sym_word] = "word",
  [sym_dquote_word] = "dquote_word",
  [sym_squote_word] = "squote_word",
  [sym_esc_pair] = "esc_pair",
  [aux_sym_config_repeat1] = "config_repeat1",
  [aux_sym_comment_repeat1] = "comment_repeat1",
  [aux_sym_directive_params_repeat1] = "directive_params_repeat1",
  [aux_sym_dquote_word_repeat1] = "dquote_word_repeat1",
  [aux_sym_squote_word_repeat1] = "squote_word_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym__atom] = sym__atom,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_dquote_word_token1] = aux_sym_dquote_word_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_squote_word_token1] = aux_sym_squote_word_token1,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [sym__newline] = sym__newline,
  [sym_config] = sym_config,
  [sym__line] = sym__line,
  [sym_comment] = sym_comment,
  [sym_directive] = sym_directive,
  [sym_directive_name] = sym_directive_name,
  [sym_directive_params] = sym_directive_params,
  [sym_block] = sym_block,
  [sym_word] = sym_word,
  [sym_dquote_word] = sym_dquote_word,
  [sym_squote_word] = sym_squote_word,
  [sym_esc_pair] = sym_esc_pair,
  [aux_sym_config_repeat1] = aux_sym_config_repeat1,
  [aux_sym_comment_repeat1] = aux_sym_comment_repeat1,
  [aux_sym_directive_params_repeat1] = aux_sym_directive_params_repeat1,
  [aux_sym_dquote_word_repeat1] = aux_sym_dquote_word_repeat1,
  [aux_sym_squote_word_repeat1] = aux_sym_squote_word_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
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
  [sym__atom] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_dquote_word_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_squote_word_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym_config] = {
    .visible = true,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_name] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_params] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [sym_dquote_word] = {
    .visible = true,
    .named = true,
  },
  [sym_squote_word] = {
    .visible = true,
    .named = true,
  },
  [sym_esc_pair] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_config_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_params_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dquote_word_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_squote_word_repeat1] = {
    .visible = false,
    .named = false,
  },
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
  [5] = 4,
  [6] = 6,
  [7] = 7,
  [8] = 7,
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
  [21] = 12,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 15,
  [27] = 25,
  [28] = 17,
  [29] = 23,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 33,
  [38] = 38,
  [39] = 38,
  [40] = 35,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 44,
  [49] = 42,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(8);
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == '\'') ADVANCE(20);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == '{') ADVANCE(14);
      if (lookahead == '}') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '\'') ADVANCE(20);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '{') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (lookahead > ' ' &&
          lookahead != '}' &&
          lookahead != 0x7f) ADVANCE(16);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == ' ') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(2);
      if (lookahead > ' ' &&
          lookahead != 0x7f) ADVANCE(11);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '\\') ADVANCE(23);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(3);
      if (lookahead > ' ' &&
          lookahead != 0x7f) ADVANCE(18);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '\'') ADVANCE(20);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(4);
      if (lookahead > ' ' &&
          lookahead != 0x7f) ADVANCE(21);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(5);
      if (lookahead > ' ' &&
          lookahead != 0x7f) ADVANCE(11);
      END_STATE();
    case 6:
      if (lookahead > 0x1f &&
          lookahead != 0x7f) ADVANCE(16);
      END_STATE();
    case 7:
      if (eof) ADVANCE(8);
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == '\'') ADVANCE(20);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '}') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (lookahead > ' ' &&
          lookahead != '{' &&
          lookahead != 0x7f) ADVANCE(16);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead > ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != 0x7f) ADVANCE(16);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == ' ') ADVANCE(12);
      if (lookahead > ' ' &&
          lookahead != 0x7f) ADVANCE(11);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == ' ') ADVANCE(13);
      if (lookahead > ' ' &&
          lookahead != 0x7f) ADVANCE(11);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead > ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != 0x7f) ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_dquote_word_token1);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_dquote_word_token1);
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead > ' ' &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != 0x7f) ADVANCE(18);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_squote_word_token1);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_squote_word_token1);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead > ' ' &&
          lookahead != '\'' &&
          lookahead != 0x7f) ADVANCE(21);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == ' ') ADVANCE(12);
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
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
  },
  [1] = {
    [sym_config] = STATE(47),
    [sym__line] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_directive] = STATE(3),
    [sym_directive_name] = STATE(7),
    [sym_word] = STATE(22),
    [sym_dquote_word] = STATE(24),
    [sym_squote_word] = STATE(24),
    [aux_sym_config_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
    [sym__atom] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(7), 1,
      sym__atom,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      sym_directive_name,
    STATE(22), 1,
      sym_word,
    STATE(24), 2,
      sym_dquote_word,
      sym_squote_word,
    STATE(5), 4,
      sym__line,
      sym_comment,
      sym_directive,
      aux_sym_config_repeat1,
  [32] = 9,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(7), 1,
      sym__atom,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      sym_directive_name,
    STATE(22), 1,
      sym_word,
    STATE(24), 2,
      sym_dquote_word,
      sym_squote_word,
    STATE(4), 4,
      sym__line,
      sym_comment,
      sym_directive,
      aux_sym_config_repeat1,
  [64] = 9,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(24), 1,
      sym__atom,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(30), 1,
      anon_sym_SQUOTE,
    STATE(7), 1,
      sym_directive_name,
    STATE(22), 1,
      sym_word,
    STATE(24), 2,
      sym_dquote_word,
      sym_squote_word,
    STATE(4), 4,
      sym__line,
      sym_comment,
      sym_directive,
      aux_sym_config_repeat1,
  [96] = 9,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    ACTIONS(24), 1,
      sym__atom,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(30), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_POUND,
    STATE(8), 1,
      sym_directive_name,
    STATE(22), 1,
      sym_word,
    STATE(24), 2,
      sym_dquote_word,
      sym_squote_word,
    STATE(5), 4,
      sym__line,
      sym_comment,
      sym_directive,
      aux_sym_config_repeat1,
  [128] = 8,
    ACTIONS(7), 1,
      sym__atom,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_POUND,
    STATE(8), 1,
      sym_directive_name,
    STATE(22), 1,
      sym_word,
    STATE(24), 2,
      sym_dquote_word,
      sym_squote_word,
    STATE(2), 4,
      sym__line,
      sym_comment,
      sym_directive,
      aux_sym_config_repeat1,
  [157] = 9,
    ACTIONS(7), 1,
      sym__atom,
    ACTIONS(36), 1,
      anon_sym_LBRACE,
    ACTIONS(38), 1,
      anon_sym_DQUOTE,
    ACTIONS(40), 1,
      anon_sym_SQUOTE,
    ACTIONS(42), 1,
      sym__newline,
    STATE(9), 1,
      sym_word,
    STATE(35), 1,
      sym_directive_params,
    STATE(44), 1,
      sym_block,
    STATE(24), 2,
      sym_dquote_word,
      sym_squote_word,
  [186] = 9,
    ACTIONS(7), 1,
      sym__atom,
    ACTIONS(36), 1,
      anon_sym_LBRACE,
    ACTIONS(38), 1,
      anon_sym_DQUOTE,
    ACTIONS(40), 1,
      anon_sym_SQUOTE,
    ACTIONS(44), 1,
      sym__newline,
    STATE(9), 1,
      sym_word,
    STATE(40), 1,
      sym_directive_params,
    STATE(48), 1,
      sym_block,
    STATE(24), 2,
      sym_dquote_word,
      sym_squote_word,
  [215] = 7,
    ACTIONS(7), 1,
      sym__atom,
    ACTIONS(38), 1,
      anon_sym_DQUOTE,
    ACTIONS(40), 1,
      anon_sym_SQUOTE,
    ACTIONS(46), 1,
      anon_sym_LBRACE,
    ACTIONS(48), 1,
      sym__newline,
    STATE(10), 2,
      sym_word,
      aux_sym_directive_params_repeat1,
    STATE(24), 2,
      sym_dquote_word,
      sym_squote_word,
  [239] = 7,
    ACTIONS(7), 1,
      sym__atom,
    ACTIONS(38), 1,
      anon_sym_DQUOTE,
    ACTIONS(40), 1,
      anon_sym_SQUOTE,
    ACTIONS(50), 1,
      anon_sym_LBRACE,
    ACTIONS(52), 1,
      sym__newline,
    STATE(11), 2,
      sym_word,
      aux_sym_directive_params_repeat1,
    STATE(24), 2,
      sym_dquote_word,
      sym_squote_word,
  [263] = 7,
    ACTIONS(54), 1,
      anon_sym_LBRACE,
    ACTIONS(56), 1,
      sym__atom,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(62), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      sym__newline,
    STATE(11), 2,
      sym_word,
      aux_sym_directive_params_repeat1,
    STATE(24), 2,
      sym_dquote_word,
      sym_squote_word,
  [287] = 2,
    ACTIONS(67), 2,
      anon_sym_POUND,
      sym__atom,
    ACTIONS(69), 3,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [297] = 4,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      aux_sym_dquote_word_token1,
    ACTIONS(75), 1,
      anon_sym_BSLASH,
    STATE(19), 2,
      sym_esc_pair,
      aux_sym_dquote_word_repeat1,
  [311] = 2,
    ACTIONS(79), 1,
      sym__newline,
    ACTIONS(77), 4,
      anon_sym_LBRACE,
      sym__atom,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [321] = 2,
    ACTIONS(83), 2,
      anon_sym_POUND,
      sym__atom,
    ACTIONS(81), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [331] = 4,
    ACTIONS(75), 1,
      anon_sym_BSLASH,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(87), 1,
      aux_sym_dquote_word_token1,
    STATE(13), 2,
      sym_esc_pair,
      aux_sym_dquote_word_repeat1,
  [345] = 2,
    ACTIONS(91), 2,
      anon_sym_POUND,
      sym__atom,
    ACTIONS(89), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [355] = 2,
    ACTIONS(95), 1,
      sym__newline,
    ACTIONS(93), 4,
      anon_sym_LBRACE,
      sym__atom,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [365] = 4,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    ACTIONS(99), 1,
      aux_sym_dquote_word_token1,
    ACTIONS(102), 1,
      anon_sym_BSLASH,
    STATE(19), 2,
      sym_esc_pair,
      aux_sym_dquote_word_repeat1,
  [379] = 2,
    ACTIONS(107), 1,
      sym__newline,
    ACTIONS(105), 4,
      anon_sym_LBRACE,
      sym__atom,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [389] = 2,
    ACTIONS(67), 2,
      anon_sym_POUND,
      sym__atom,
    ACTIONS(69), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [399] = 2,
    ACTIONS(111), 1,
      sym__newline,
    ACTIONS(109), 4,
      anon_sym_LBRACE,
      sym__atom,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [409] = 2,
    ACTIONS(115), 2,
      anon_sym_POUND,
      sym__atom,
    ACTIONS(113), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [419] = 2,
    ACTIONS(119), 1,
      sym__newline,
    ACTIONS(117), 4,
      anon_sym_LBRACE,
      sym__atom,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [429] = 2,
    ACTIONS(121), 2,
      anon_sym_POUND,
      sym__atom,
    ACTIONS(123), 3,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [439] = 2,
    ACTIONS(83), 2,
      anon_sym_POUND,
      sym__atom,
    ACTIONS(81), 3,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [449] = 2,
    ACTIONS(121), 2,
      anon_sym_POUND,
      sym__atom,
    ACTIONS(123), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [459] = 2,
    ACTIONS(91), 2,
      anon_sym_POUND,
      sym__atom,
    ACTIONS(89), 3,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [469] = 2,
    ACTIONS(115), 2,
      anon_sym_POUND,
      sym__atom,
    ACTIONS(113), 3,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [479] = 2,
    ACTIONS(127), 1,
      sym__newline,
    ACTIONS(125), 4,
      anon_sym_LBRACE,
      sym__atom,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [489] = 3,
    ACTIONS(129), 1,
      anon_sym_SQUOTE,
    ACTIONS(131), 1,
      aux_sym_squote_word_token1,
    STATE(31), 1,
      aux_sym_squote_word_repeat1,
  [499] = 3,
    ACTIONS(134), 1,
      aux_sym_comment_token1,
    ACTIONS(137), 1,
      sym__newline,
    STATE(32), 1,
      aux_sym_comment_repeat1,
  [509] = 3,
    ACTIONS(139), 1,
      aux_sym_comment_token1,
    ACTIONS(141), 1,
      sym__newline,
    STATE(38), 1,
      aux_sym_comment_repeat1,
  [519] = 3,
    ACTIONS(143), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      aux_sym_squote_word_token1,
    STATE(31), 1,
      aux_sym_squote_word_repeat1,
  [529] = 3,
    ACTIONS(36), 1,
      anon_sym_LBRACE,
    ACTIONS(147), 1,
      sym__newline,
    STATE(42), 1,
      sym_block,
  [539] = 2,
    ACTIONS(151), 1,
      aux_sym_dquote_word_token1,
    ACTIONS(149), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
  [547] = 3,
    ACTIONS(153), 1,
      aux_sym_comment_token1,
    ACTIONS(155), 1,
      sym__newline,
    STATE(39), 1,
      aux_sym_comment_repeat1,
  [557] = 3,
    ACTIONS(157), 1,
      aux_sym_comment_token1,
    ACTIONS(159), 1,
      sym__newline,
    STATE(32), 1,
      aux_sym_comment_repeat1,
  [567] = 3,
    ACTIONS(157), 1,
      aux_sym_comment_token1,
    ACTIONS(161), 1,
      sym__newline,
    STATE(32), 1,
      aux_sym_comment_repeat1,
  [577] = 3,
    ACTIONS(36), 1,
      anon_sym_LBRACE,
    ACTIONS(163), 1,
      sym__newline,
    STATE(49), 1,
      sym_block,
  [587] = 3,
    ACTIONS(165), 1,
      anon_sym_SQUOTE,
    ACTIONS(167), 1,
      aux_sym_squote_word_token1,
    STATE(34), 1,
      aux_sym_squote_word_repeat1,
  [597] = 1,
    ACTIONS(169), 1,
      sym__newline,
  [601] = 1,
    ACTIONS(171), 1,
      sym__newline,
  [605] = 1,
    ACTIONS(147), 1,
      sym__newline,
  [609] = 1,
    ACTIONS(173), 1,
      sym__newline,
  [613] = 1,
    ACTIONS(175), 1,
      aux_sym_comment_token1,
  [617] = 1,
    ACTIONS(177), 1,
      ts_builtin_sym_end,
  [621] = 1,
    ACTIONS(163), 1,
      sym__newline,
  [625] = 1,
    ACTIONS(179), 1,
      sym__newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 32,
  [SMALL_STATE(4)] = 64,
  [SMALL_STATE(5)] = 96,
  [SMALL_STATE(6)] = 128,
  [SMALL_STATE(7)] = 157,
  [SMALL_STATE(8)] = 186,
  [SMALL_STATE(9)] = 215,
  [SMALL_STATE(10)] = 239,
  [SMALL_STATE(11)] = 263,
  [SMALL_STATE(12)] = 287,
  [SMALL_STATE(13)] = 297,
  [SMALL_STATE(14)] = 311,
  [SMALL_STATE(15)] = 321,
  [SMALL_STATE(16)] = 331,
  [SMALL_STATE(17)] = 345,
  [SMALL_STATE(18)] = 355,
  [SMALL_STATE(19)] = 365,
  [SMALL_STATE(20)] = 379,
  [SMALL_STATE(21)] = 389,
  [SMALL_STATE(22)] = 399,
  [SMALL_STATE(23)] = 409,
  [SMALL_STATE(24)] = 419,
  [SMALL_STATE(25)] = 429,
  [SMALL_STATE(26)] = 439,
  [SMALL_STATE(27)] = 449,
  [SMALL_STATE(28)] = 459,
  [SMALL_STATE(29)] = 469,
  [SMALL_STATE(30)] = 479,
  [SMALL_STATE(31)] = 489,
  [SMALL_STATE(32)] = 499,
  [SMALL_STATE(33)] = 509,
  [SMALL_STATE(34)] = 519,
  [SMALL_STATE(35)] = 529,
  [SMALL_STATE(36)] = 539,
  [SMALL_STATE(37)] = 547,
  [SMALL_STATE(38)] = 557,
  [SMALL_STATE(39)] = 567,
  [SMALL_STATE(40)] = 577,
  [SMALL_STATE(41)] = 587,
  [SMALL_STATE(42)] = 597,
  [SMALL_STATE(43)] = 601,
  [SMALL_STATE(44)] = 605,
  [SMALL_STATE(45)] = 609,
  [SMALL_STATE(46)] = 613,
  [SMALL_STATE(47)] = 617,
  [SMALL_STATE(48)] = 621,
  [SMALL_STATE(49)] = 625,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 1, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_params, 1, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_params, 1, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_params, 2, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_params, 2, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_directive_params_repeat1, 2, 0, 0),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_params_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_params_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_params_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_params_repeat1, 2, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_squote_word, 2, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_squote_word, 2, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 2, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dquote_word, 3, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dquote_word, 3, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dquote_word_repeat1, 2, 0, 0),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dquote_word_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dquote_word_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_squote_word, 3, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_squote_word, 3, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_name, 1, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_name, 1, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 4, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 4, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 1, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 1, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dquote_word, 2, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dquote_word, 2, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_squote_word_repeat1, 2, 0, 0),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_squote_word_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_esc_pair, 2, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_esc_pair, 2, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [177] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
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

TS_PUBLIC const TSLanguage *tree_sitter_scfg(void) {
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
