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
  [18] = 17,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 14,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 21,
  [28] = 15,
  [29] = 19,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 35,
  [39] = 39,
  [40] = 31,
  [41] = 36,
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
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '\'') ADVANCE(20);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '{') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0 &&
          lookahead > 31 &&
          lookahead != '}' &&
          lookahead != 127) ADVANCE(16);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == ' ') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(2)
      if (lookahead != 0 &&
          lookahead > 31 &&
          lookahead != 127) ADVANCE(11);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '\\') ADVANCE(23);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(3)
      if (lookahead != 0 &&
          lookahead > 31 &&
          lookahead != 127) ADVANCE(18);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '\'') ADVANCE(20);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(4)
      if (lookahead != 0 &&
          lookahead > 31 &&
          lookahead != 127) ADVANCE(21);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(5)
      if (lookahead != 0 &&
          lookahead > 31 &&
          lookahead != 127) ADVANCE(11);
      END_STATE();
    case 6:
      if (lookahead != 0 &&
          lookahead > 31 &&
          lookahead != 127) ADVANCE(16);
      END_STATE();
    case 7:
      if (eof) ADVANCE(8);
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == '\'') ADVANCE(20);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '}') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7)
      if (lookahead != 0 &&
          lookahead > 31 &&
          lookahead != '{' &&
          lookahead != 127) ADVANCE(16);
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
      if (lookahead != 0 &&
          lookahead > ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != 127) ADVANCE(16);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == ' ') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead > 31 &&
          lookahead != 127) ADVANCE(11);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == ' ') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead > 31 &&
          lookahead != 127) ADVANCE(11);
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
      if (lookahead != 0 &&
          lookahead > ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != 127) ADVANCE(16);
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
      if (lookahead != 0 &&
          lookahead > 31 &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != 127) ADVANCE(18);
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
      if (lookahead != 0 &&
          lookahead > 31 &&
          lookahead != '\'' &&
          lookahead != 127) ADVANCE(21);
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
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 1},
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
    [sym__line] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_directive_name] = STATE(8),
    [sym_word] = STATE(20),
    [sym_dquote_word] = STATE(22),
    [sym_squote_word] = STATE(22),
    [aux_sym_config_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
    [sym__atom] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(7), 1,
      sym__atom,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      sym_directive_name,
    STATE(20), 1,
      sym_word,
    STATE(22), 2,
      sym_dquote_word,
      sym_squote_word,
    STATE(4), 4,
      sym__line,
      sym_comment,
      sym_directive,
      aux_sym_config_repeat1,
  [32] = 9,
    ACTIONS(7), 1,
      sym__atom,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      sym_directive_name,
    STATE(20), 1,
      sym_word,
    STATE(22), 2,
      sym_dquote_word,
      sym_squote_word,
    STATE(5), 4,
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
    STATE(8), 1,
      sym_directive_name,
    STATE(20), 1,
      sym_word,
    STATE(22), 2,
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
    STATE(7), 1,
      sym_directive_name,
    STATE(20), 1,
      sym_word,
    STATE(22), 2,
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
    ACTIONS(15), 1,
      anon_sym_POUND,
    STATE(7), 1,
      sym_directive_name,
    STATE(20), 1,
      sym_word,
    STATE(22), 2,
      sym_dquote_word,
      sym_squote_word,
    STATE(3), 4,
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
    STATE(41), 1,
      sym_directive_params,
    STATE(48), 1,
      sym_block,
    STATE(22), 2,
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
    STATE(36), 1,
      sym_directive_params,
    STATE(44), 1,
      sym_block,
    STATE(22), 2,
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
    STATE(11), 2,
      sym_word,
      aux_sym_directive_params_repeat1,
    STATE(22), 2,
      sym_dquote_word,
      sym_squote_word,
  [239] = 7,
    ACTIONS(50), 1,
      anon_sym_LBRACE,
    ACTIONS(52), 1,
      sym__atom,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(58), 1,
      anon_sym_SQUOTE,
    ACTIONS(61), 1,
      sym__newline,
    STATE(10), 2,
      sym_word,
      aux_sym_directive_params_repeat1,
    STATE(22), 2,
      sym_dquote_word,
      sym_squote_word,
  [263] = 7,
    ACTIONS(7), 1,
      sym__atom,
    ACTIONS(38), 1,
      anon_sym_DQUOTE,
    ACTIONS(40), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_LBRACE,
    ACTIONS(65), 1,
      sym__newline,
    STATE(10), 2,
      sym_word,
      aux_sym_directive_params_repeat1,
    STATE(22), 2,
      sym_dquote_word,
      sym_squote_word,
  [287] = 4,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      aux_sym_dquote_word_token1,
    ACTIONS(71), 1,
      anon_sym_BSLASH,
    STATE(25), 2,
      sym_esc_pair,
      aux_sym_dquote_word_repeat1,
  [301] = 2,
    ACTIONS(75), 1,
      sym__newline,
    ACTIONS(73), 4,
      anon_sym_LBRACE,
      sym__atom,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [311] = 2,
    ACTIONS(77), 2,
      anon_sym_POUND,
      sym__atom,
    ACTIONS(79), 3,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [321] = 2,
    ACTIONS(81), 2,
      anon_sym_POUND,
      sym__atom,
    ACTIONS(83), 3,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [331] = 2,
    ACTIONS(87), 1,
      sym__newline,
    ACTIONS(85), 4,
      anon_sym_LBRACE,
      sym__atom,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [341] = 2,
    ACTIONS(89), 2,
      anon_sym_POUND,
      sym__atom,
    ACTIONS(91), 3,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [351] = 2,
    ACTIONS(89), 2,
      anon_sym_POUND,
      sym__atom,
    ACTIONS(91), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [361] = 2,
    ACTIONS(93), 2,
      anon_sym_POUND,
      sym__atom,
    ACTIONS(95), 3,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [371] = 2,
    ACTIONS(99), 1,
      sym__newline,
    ACTIONS(97), 4,
      anon_sym_LBRACE,
      sym__atom,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [381] = 2,
    ACTIONS(103), 2,
      anon_sym_POUND,
      sym__atom,
    ACTIONS(101), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [391] = 2,
    ACTIONS(107), 1,
      sym__newline,
    ACTIONS(105), 4,
      anon_sym_LBRACE,
      sym__atom,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [401] = 2,
    ACTIONS(77), 2,
      anon_sym_POUND,
      sym__atom,
    ACTIONS(79), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [411] = 2,
    ACTIONS(111), 1,
      sym__newline,
    ACTIONS(109), 4,
      anon_sym_LBRACE,
      sym__atom,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [421] = 4,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      aux_sym_dquote_word_token1,
    ACTIONS(118), 1,
      anon_sym_BSLASH,
    STATE(25), 2,
      sym_esc_pair,
      aux_sym_dquote_word_repeat1,
  [435] = 2,
    ACTIONS(123), 1,
      sym__newline,
    ACTIONS(121), 4,
      anon_sym_LBRACE,
      sym__atom,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [445] = 2,
    ACTIONS(103), 2,
      anon_sym_POUND,
      sym__atom,
    ACTIONS(101), 3,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [455] = 2,
    ACTIONS(81), 2,
      anon_sym_POUND,
      sym__atom,
    ACTIONS(83), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [465] = 2,
    ACTIONS(93), 2,
      anon_sym_POUND,
      sym__atom,
    ACTIONS(95), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [475] = 4,
    ACTIONS(71), 1,
      anon_sym_BSLASH,
    ACTIONS(125), 1,
      anon_sym_DQUOTE,
    ACTIONS(127), 1,
      aux_sym_dquote_word_token1,
    STATE(12), 2,
      sym_esc_pair,
      aux_sym_dquote_word_repeat1,
  [489] = 3,
    ACTIONS(129), 1,
      aux_sym_comment_token1,
    ACTIONS(131), 1,
      sym__newline,
    STATE(34), 1,
      aux_sym_comment_repeat1,
  [499] = 3,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      aux_sym_squote_word_token1,
    STATE(32), 1,
      aux_sym_squote_word_repeat1,
  [509] = 2,
    ACTIONS(140), 1,
      aux_sym_dquote_word_token1,
    ACTIONS(138), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
  [517] = 3,
    ACTIONS(142), 1,
      aux_sym_comment_token1,
    ACTIONS(145), 1,
      sym__newline,
    STATE(34), 1,
      aux_sym_comment_repeat1,
  [527] = 3,
    ACTIONS(147), 1,
      aux_sym_comment_token1,
    ACTIONS(149), 1,
      sym__newline,
    STATE(31), 1,
      aux_sym_comment_repeat1,
  [537] = 3,
    ACTIONS(36), 1,
      anon_sym_LBRACE,
    ACTIONS(151), 1,
      sym__newline,
    STATE(42), 1,
      sym_block,
  [547] = 3,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      aux_sym_squote_word_token1,
    STATE(32), 1,
      aux_sym_squote_word_repeat1,
  [557] = 3,
    ACTIONS(157), 1,
      aux_sym_comment_token1,
    ACTIONS(159), 1,
      sym__newline,
    STATE(40), 1,
      aux_sym_comment_repeat1,
  [567] = 3,
    ACTIONS(161), 1,
      anon_sym_SQUOTE,
    ACTIONS(163), 1,
      aux_sym_squote_word_token1,
    STATE(37), 1,
      aux_sym_squote_word_repeat1,
  [577] = 3,
    ACTIONS(129), 1,
      aux_sym_comment_token1,
    ACTIONS(165), 1,
      sym__newline,
    STATE(34), 1,
      aux_sym_comment_repeat1,
  [587] = 3,
    ACTIONS(36), 1,
      anon_sym_LBRACE,
    ACTIONS(167), 1,
      sym__newline,
    STATE(49), 1,
      sym_block,
  [597] = 1,
    ACTIONS(169), 1,
      sym__newline,
  [601] = 1,
    ACTIONS(171), 1,
      sym__newline,
  [605] = 1,
    ACTIONS(151), 1,
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
    ACTIONS(167), 1,
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
  [SMALL_STATE(13)] = 301,
  [SMALL_STATE(14)] = 311,
  [SMALL_STATE(15)] = 321,
  [SMALL_STATE(16)] = 331,
  [SMALL_STATE(17)] = 341,
  [SMALL_STATE(18)] = 351,
  [SMALL_STATE(19)] = 361,
  [SMALL_STATE(20)] = 371,
  [SMALL_STATE(21)] = 381,
  [SMALL_STATE(22)] = 391,
  [SMALL_STATE(23)] = 401,
  [SMALL_STATE(24)] = 411,
  [SMALL_STATE(25)] = 421,
  [SMALL_STATE(26)] = 435,
  [SMALL_STATE(27)] = 445,
  [SMALL_STATE(28)] = 455,
  [SMALL_STATE(29)] = 465,
  [SMALL_STATE(30)] = 475,
  [SMALL_STATE(31)] = 489,
  [SMALL_STATE(32)] = 499,
  [SMALL_STATE(33)] = 509,
  [SMALL_STATE(34)] = 517,
  [SMALL_STATE(35)] = 527,
  [SMALL_STATE(36)] = 537,
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
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 1),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(35),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(22),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(30),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(39),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(38),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_params, 1),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_params, 1),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_directive_params_repeat1, 2),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_params_repeat1, 2), SHIFT_REPEAT(22),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_params_repeat1, 2), SHIFT_REPEAT(30),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_params_repeat1, 2), SHIFT_REPEAT(39),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_params_repeat1, 2),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_params, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_params, 2),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dquote_word, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dquote_word, 2),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_squote_word, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_squote_word, 2),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_name, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_name, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 4),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 4),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dquote_word, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dquote_word, 3),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dquote_word_repeat1, 2),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dquote_word_repeat1, 2), SHIFT_REPEAT(25),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dquote_word_repeat1, 2), SHIFT_REPEAT(46),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_squote_word, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_squote_word, 3),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_squote_word_repeat1, 2),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_squote_word_repeat1, 2), SHIFT_REPEAT(32),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_esc_pair, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_esc_pair, 2),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(34),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [177] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
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

TS_PUBLIC const TSLanguage *tree_sitter_scfg() {
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
