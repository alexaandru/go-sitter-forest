#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 45
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 27
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 5

enum ts_symbol_identifiers {
  anon_sym_DOLLAR_LBRACE = 1,
  anon_sym_RBRACE = 2,
  anon_sym_DOLLAR_LPAREN = 3,
  anon_sym_RPAREN = 4,
  anon_sym_EQ = 5,
  anon_sym_COMMA = 6,
  aux_sym_variable_token1 = 7,
  aux_sym_string_token1 = 8,
  anon_sym_DQUOTE = 9,
  aux_sym_quoted_string_text_fragment_token1 = 10,
  anon_sym_BSLASH = 11,
  anon_sym_BSLASH_DQUOTE = 12,
  anon_sym_BSLASH_BSLASH = 13,
  sym_macro_expansion = 14,
  sym__macro_expansion_inner = 15,
  sym_variable = 16,
  sym_override = 17,
  sym_string = 18,
  sym_quoted_string = 19,
  sym_quoted_string_text_fragment = 20,
  sym_escape_sequence = 21,
  aux_sym__macro_expansion_inner_repeat1 = 22,
  aux_sym_variable_repeat1 = 23,
  aux_sym_string_repeat1 = 24,
  aux_sym_quoted_string_repeat1 = 25,
  aux_sym_quoted_string_text_fragment_repeat1 = 26,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DOLLAR_LPAREN] = "$(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_EQ] = "=",
  [anon_sym_COMMA] = ",",
  [aux_sym_variable_token1] = "variable_token1",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_string_text_fragment_token1] = "quoted_string_text_fragment_token1",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_BSLASH_DQUOTE] = "\\\"",
  [anon_sym_BSLASH_BSLASH] = "\\\\",
  [sym_macro_expansion] = "macro_expansion",
  [sym__macro_expansion_inner] = "_macro_expansion_inner",
  [sym_variable] = "variable",
  [sym_override] = "override",
  [sym_string] = "string",
  [sym_quoted_string] = "quoted_string",
  [sym_quoted_string_text_fragment] = "quoted_string_text_fragment",
  [sym_escape_sequence] = "escape_sequence",
  [aux_sym__macro_expansion_inner_repeat1] = "_macro_expansion_inner_repeat1",
  [aux_sym_variable_repeat1] = "variable_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_quoted_string_repeat1] = "quoted_string_repeat1",
  [aux_sym_quoted_string_text_fragment_repeat1] = "quoted_string_text_fragment_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DOLLAR_LPAREN] = anon_sym_DOLLAR_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_variable_token1] = aux_sym_variable_token1,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quoted_string_text_fragment_token1] = aux_sym_quoted_string_text_fragment_token1,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_BSLASH_DQUOTE] = anon_sym_BSLASH_DQUOTE,
  [anon_sym_BSLASH_BSLASH] = anon_sym_BSLASH_BSLASH,
  [sym_macro_expansion] = sym_macro_expansion,
  [sym__macro_expansion_inner] = sym__macro_expansion_inner,
  [sym_variable] = sym_variable,
  [sym_override] = sym_override,
  [sym_string] = sym_string,
  [sym_quoted_string] = sym_quoted_string,
  [sym_quoted_string_text_fragment] = sym_quoted_string_text_fragment,
  [sym_escape_sequence] = sym_escape_sequence,
  [aux_sym__macro_expansion_inner_repeat1] = aux_sym__macro_expansion_inner_repeat1,
  [aux_sym_variable_repeat1] = aux_sym_variable_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_quoted_string_repeat1] = aux_sym_quoted_string_repeat1,
  [aux_sym_quoted_string_text_fragment_repeat1] = aux_sym_quoted_string_text_fragment_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DOLLAR_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_LPAREN] = {
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_variable_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_string_text_fragment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_macro_expansion] = {
    .visible = true,
    .named = true,
  },
  [sym__macro_expansion_inner] = {
    .visible = false,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_override] = {
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
  [sym_quoted_string_text_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__macro_expansion_inner_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quoted_string_text_fragment_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_default = 1,
  field_overrides = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_default] = "default",
  [field_overrides] = "overrides",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_default, 1, .inherited = true},
    {field_overrides, 1, .inherited = true},
  [2] =
    {field_overrides, 1},
  [3] =
    {field_default, 2},
  [4] =
    {field_default, 2},
    {field_overrides, 3},
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
  [15] = 7,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 17,
  [20] = 8,
  [21] = 21,
  [22] = 21,
  [23] = 21,
  [24] = 17,
  [25] = 8,
  [26] = 7,
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
  [41] = 40,
  [42] = 37,
  [43] = 37,
  [44] = 40,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(7);
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '$') ADVANCE(3);
      if (lookahead == ')') ADVANCE(11);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == '}') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '$') ADVANCE(3);
      if (lookahead == ')') ADVANCE(11);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '}') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '$') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(19);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(10);
      if (lookahead == '{') ADVANCE(8);
      END_STATE();
    case 4:
      if (eof) ADVANCE(7);
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '$') ADVANCE(3);
      if (lookahead == ')') ADVANCE(11);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == '}') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 5:
      if (eof) ADVANCE(7);
      if (lookahead == '$') ADVANCE(3);
      if (lookahead == ')') ADVANCE(11);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == '}') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      END_STATE();
    case 6:
      if (eof) ADVANCE(7);
      if (lookahead == '$') ADVANCE(3);
      if (lookahead == ')') ADVANCE(11);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == '}') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_quoted_string_text_fragment_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_quoted_string_text_fragment_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '\\') ADVANCE(21);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_variable_token1] = ACTIONS(1),
    [aux_sym_string_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(1),
  },
  [1] = {
    [sym_macro_expansion] = STATE(39),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(3),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(9), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      aux_sym_quoted_string_text_fragment_token1,
    ACTIONS(15), 1,
      anon_sym_BSLASH,
    STATE(10), 1,
      aux_sym_quoted_string_text_fragment_repeat1,
    ACTIONS(17), 2,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
    STATE(3), 4,
      sym_macro_expansion,
      sym_quoted_string_text_fragment,
      sym_escape_sequence,
      aux_sym_quoted_string_repeat1,
  [29] = 8,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(9), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(13), 1,
      aux_sym_quoted_string_text_fragment_token1,
    ACTIONS(15), 1,
      anon_sym_BSLASH,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    STATE(10), 1,
      aux_sym_quoted_string_text_fragment_repeat1,
    ACTIONS(17), 2,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
    STATE(4), 4,
      sym_macro_expansion,
      sym_quoted_string_text_fragment,
      sym_escape_sequence,
      aux_sym_quoted_string_repeat1,
  [58] = 8,
    ACTIONS(21), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(24), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      aux_sym_quoted_string_text_fragment_token1,
    ACTIONS(32), 1,
      anon_sym_BSLASH,
    STATE(10), 1,
      aux_sym_quoted_string_text_fragment_repeat1,
    ACTIONS(35), 2,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
    STATE(4), 4,
      sym_macro_expansion,
      sym_quoted_string_text_fragment,
      sym_escape_sequence,
      aux_sym_quoted_string_repeat1,
  [87] = 5,
    ACTIONS(38), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(43), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(46), 1,
      aux_sym_variable_token1,
    STATE(5), 2,
      sym_macro_expansion,
      aux_sym_variable_repeat1,
    ACTIONS(41), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_COMMA,
  [107] = 5,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(51), 1,
      aux_sym_variable_token1,
    STATE(5), 2,
      sym_macro_expansion,
      aux_sym_variable_repeat1,
    ACTIONS(49), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_COMMA,
  [127] = 1,
    ACTIONS(53), 8,
      ts_builtin_sym_end,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_variable_token1,
  [138] = 1,
    ACTIONS(53), 8,
      ts_builtin_sym_end,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_COMMA,
      aux_sym_variable_token1,
  [149] = 7,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(57), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(59), 1,
      aux_sym_string_token1,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    STATE(30), 1,
      sym_string,
    STATE(32), 1,
      sym_quoted_string,
    STATE(12), 2,
      sym_macro_expansion,
      aux_sym_string_repeat1,
  [172] = 5,
    ACTIONS(65), 1,
      aux_sym_quoted_string_text_fragment_token1,
    ACTIONS(67), 1,
      anon_sym_BSLASH,
    STATE(14), 1,
      aux_sym_quoted_string_text_fragment_repeat1,
    ACTIONS(69), 2,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
    ACTIONS(63), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
  [191] = 5,
    ACTIONS(71), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(76), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(79), 1,
      aux_sym_string_token1,
    STATE(11), 2,
      sym_macro_expansion,
      aux_sym_string_repeat1,
    ACTIONS(74), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [210] = 5,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(57), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(84), 1,
      aux_sym_string_token1,
    STATE(11), 2,
      sym_macro_expansion,
      aux_sym_string_repeat1,
    ACTIONS(82), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [229] = 7,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(57), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(59), 1,
      aux_sym_string_token1,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    STATE(32), 1,
      sym_quoted_string,
    STATE(36), 1,
      sym_string,
    STATE(12), 2,
      sym_macro_expansion,
      aux_sym_string_repeat1,
  [252] = 5,
    ACTIONS(88), 1,
      aux_sym_quoted_string_text_fragment_token1,
    ACTIONS(91), 1,
      anon_sym_BSLASH,
    STATE(14), 1,
      aux_sym_quoted_string_text_fragment_repeat1,
    ACTIONS(94), 2,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
    ACTIONS(86), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
  [271] = 2,
    ACTIONS(53), 3,
      aux_sym_quoted_string_text_fragment_token1,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
    ACTIONS(96), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
  [283] = 6,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(98), 1,
      aux_sym_variable_token1,
    STATE(34), 1,
      sym_override,
    STATE(38), 1,
      sym_variable,
    STATE(6), 2,
      sym_macro_expansion,
      aux_sym_variable_repeat1,
  [303] = 6,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(98), 1,
      aux_sym_variable_token1,
    STATE(27), 1,
      sym_variable,
    STATE(37), 1,
      sym__macro_expansion_inner,
    STATE(6), 2,
      sym_macro_expansion,
      aux_sym_variable_repeat1,
  [323] = 2,
    ACTIONS(102), 3,
      aux_sym_quoted_string_text_fragment_token1,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
    ACTIONS(100), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
  [335] = 6,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(98), 1,
      aux_sym_variable_token1,
    STATE(27), 1,
      sym_variable,
    STATE(43), 1,
      sym__macro_expansion_inner,
    STATE(6), 2,
      sym_macro_expansion,
      aux_sym_variable_repeat1,
  [355] = 2,
    ACTIONS(53), 3,
      aux_sym_quoted_string_text_fragment_token1,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
    ACTIONS(96), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
  [367] = 6,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(98), 1,
      aux_sym_variable_token1,
    STATE(27), 1,
      sym_variable,
    STATE(44), 1,
      sym__macro_expansion_inner,
    STATE(6), 2,
      sym_macro_expansion,
      aux_sym_variable_repeat1,
  [387] = 6,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(98), 1,
      aux_sym_variable_token1,
    STATE(27), 1,
      sym_variable,
    STATE(40), 1,
      sym__macro_expansion_inner,
    STATE(6), 2,
      sym_macro_expansion,
      aux_sym_variable_repeat1,
  [407] = 6,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(98), 1,
      aux_sym_variable_token1,
    STATE(27), 1,
      sym_variable,
    STATE(41), 1,
      sym__macro_expansion_inner,
    STATE(6), 2,
      sym_macro_expansion,
      aux_sym_variable_repeat1,
  [427] = 6,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(98), 1,
      aux_sym_variable_token1,
    STATE(27), 1,
      sym_variable,
    STATE(42), 1,
      sym__macro_expansion_inner,
    STATE(6), 2,
      sym_macro_expansion,
      aux_sym_variable_repeat1,
  [447] = 1,
    ACTIONS(53), 6,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_string_token1,
  [456] = 1,
    ACTIONS(53), 6,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_string_token1,
  [465] = 4,
    ACTIONS(106), 1,
      anon_sym_EQ,
    ACTIONS(108), 1,
      anon_sym_COMMA,
    STATE(31), 1,
      aux_sym__macro_expansion_inner_repeat1,
    ACTIONS(104), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [479] = 3,
    ACTIONS(108), 1,
      anon_sym_COMMA,
    STATE(29), 1,
      aux_sym__macro_expansion_inner_repeat1,
    ACTIONS(110), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [490] = 3,
    ACTIONS(114), 1,
      anon_sym_COMMA,
    STATE(29), 1,
      aux_sym__macro_expansion_inner_repeat1,
    ACTIONS(112), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [501] = 3,
    ACTIONS(108), 1,
      anon_sym_COMMA,
    STATE(28), 1,
      aux_sym__macro_expansion_inner_repeat1,
    ACTIONS(117), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [512] = 3,
    ACTIONS(108), 1,
      anon_sym_COMMA,
    STATE(29), 1,
      aux_sym__macro_expansion_inner_repeat1,
    ACTIONS(119), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [523] = 1,
    ACTIONS(82), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [529] = 1,
    ACTIONS(121), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [535] = 1,
    ACTIONS(112), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [541] = 1,
    ACTIONS(123), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [547] = 1,
    ACTIONS(125), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [553] = 1,
    ACTIONS(127), 1,
      anon_sym_RPAREN,
  [557] = 1,
    ACTIONS(129), 1,
      anon_sym_EQ,
  [561] = 1,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
  [565] = 1,
    ACTIONS(133), 1,
      anon_sym_RBRACE,
  [569] = 1,
    ACTIONS(135), 1,
      anon_sym_RBRACE,
  [573] = 1,
    ACTIONS(137), 1,
      anon_sym_RPAREN,
  [577] = 1,
    ACTIONS(139), 1,
      anon_sym_RPAREN,
  [581] = 1,
    ACTIONS(141), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 29,
  [SMALL_STATE(4)] = 58,
  [SMALL_STATE(5)] = 87,
  [SMALL_STATE(6)] = 107,
  [SMALL_STATE(7)] = 127,
  [SMALL_STATE(8)] = 138,
  [SMALL_STATE(9)] = 149,
  [SMALL_STATE(10)] = 172,
  [SMALL_STATE(11)] = 191,
  [SMALL_STATE(12)] = 210,
  [SMALL_STATE(13)] = 229,
  [SMALL_STATE(14)] = 252,
  [SMALL_STATE(15)] = 271,
  [SMALL_STATE(16)] = 283,
  [SMALL_STATE(17)] = 303,
  [SMALL_STATE(18)] = 323,
  [SMALL_STATE(19)] = 335,
  [SMALL_STATE(20)] = 355,
  [SMALL_STATE(21)] = 367,
  [SMALL_STATE(22)] = 387,
  [SMALL_STATE(23)] = 407,
  [SMALL_STATE(24)] = 427,
  [SMALL_STATE(25)] = 447,
  [SMALL_STATE(26)] = 456,
  [SMALL_STATE(27)] = 465,
  [SMALL_STATE(28)] = 479,
  [SMALL_STATE(29)] = 490,
  [SMALL_STATE(30)] = 501,
  [SMALL_STATE(31)] = 512,
  [SMALL_STATE(32)] = 523,
  [SMALL_STATE(33)] = 529,
  [SMALL_STATE(34)] = 535,
  [SMALL_STATE(35)] = 541,
  [SMALL_STATE(36)] = 547,
  [SMALL_STATE(37)] = 553,
  [SMALL_STATE(38)] = 557,
  [SMALL_STATE(39)] = 561,
  [SMALL_STATE(40)] = 565,
  [SMALL_STATE(41)] = 569,
  [SMALL_STATE(42)] = 573,
  [SMALL_STATE(43)] = 577,
  [SMALL_STATE(44)] = 581,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2, 0, 0),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_expansion, 3, 0, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string_text_fragment, 1, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string_text_fragment, 1, 0, 0),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_text_fragment_repeat1, 2, 0, 0),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_string_text_fragment_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_text_fragment_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_quoted_string_text_fragment_repeat1, 2, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_expansion, 3, 0, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 1, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 1, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_expansion_inner, 1, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_expansion_inner, 4, 0, 4),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__macro_expansion_inner_repeat1, 2, 0, 0),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__macro_expansion_inner_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_expansion_inner, 3, 0, 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_expansion_inner, 2, 0, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 2, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_override, 3, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [131] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
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

TS_PUBLIC const TSLanguage *tree_sitter_epics_msi_template(void) {
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
