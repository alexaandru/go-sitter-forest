#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 31
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 5
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 4

enum {
  anon_sym_AT = 1,
  anon_sym_LBRACE = 2,
  aux_sym_rinline_token1 = 3,
  anon_sym_RBRACE = 4,
  aux_sym__renv_sig_options_token1 = 5,
  anon_sym_COMMA = 6,
  aux_sym_renv_key_pair_token1 = 7,
  sym_renv_val = 8,
  sym__latex_word = 9,
  sym_command_name = 10,
  sym_renv_sig_beg = 11,
  sym_renv_sig_end = 12,
  sym_renv_content = 13,
  sym_source_file = 14,
  sym_rchunk = 15,
  sym_rinline = 16,
  sym__renv_sig_options = 17,
  sym_renv_key_pair = 18,
  sym_renv_key = 19,
  sym_latex = 20,
  aux_sym_source_file_repeat1 = 21,
  aux_sym__renv_sig_options_repeat1 = 22,
  aux_sym_latex_repeat1 = 23,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_AT] = "@",
  [anon_sym_LBRACE] = "{",
  [aux_sym_rinline_token1] = "renv_content",
  [anon_sym_RBRACE] = "}",
  [aux_sym__renv_sig_options_token1] = "_renv_sig_options_token1",
  [anon_sym_COMMA] = ",",
  [aux_sym_renv_key_pair_token1] = "renv_key_pair_token1",
  [sym_renv_val] = "renv_val",
  [sym__latex_word] = "_latex_word",
  [sym_command_name] = "command_name",
  [sym_renv_sig_beg] = "renv_sig_beg",
  [sym_renv_sig_end] = "renv_sig_end",
  [sym_renv_content] = "renv_content",
  [sym_source_file] = "source_file",
  [sym_rchunk] = "rchunk",
  [sym_rinline] = "rinline",
  [sym__renv_sig_options] = "_renv_sig_options",
  [sym_renv_key_pair] = "renv_key_pair",
  [sym_renv_key] = "renv_key",
  [sym_latex] = "latex",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__renv_sig_options_repeat1] = "_renv_sig_options_repeat1",
  [aux_sym_latex_repeat1] = "latex_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [aux_sym_rinline_token1] = sym_renv_content,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym__renv_sig_options_token1] = aux_sym__renv_sig_options_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_renv_key_pair_token1] = aux_sym_renv_key_pair_token1,
  [sym_renv_val] = sym_renv_val,
  [sym__latex_word] = sym__latex_word,
  [sym_command_name] = sym_command_name,
  [sym_renv_sig_beg] = sym_renv_sig_beg,
  [sym_renv_sig_end] = sym_renv_sig_end,
  [sym_renv_content] = sym_renv_content,
  [sym_source_file] = sym_source_file,
  [sym_rchunk] = sym_rchunk,
  [sym_rinline] = sym_rinline,
  [sym__renv_sig_options] = sym__renv_sig_options,
  [sym_renv_key_pair] = sym_renv_key_pair,
  [sym_renv_key] = sym_renv_key,
  [sym_latex] = sym_latex,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__renv_sig_options_repeat1] = aux_sym__renv_sig_options_repeat1,
  [aux_sym_latex_repeat1] = aux_sym_latex_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_rinline_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__renv_sig_options_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_renv_key_pair_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_renv_val] = {
    .visible = true,
    .named = true,
  },
  [sym__latex_word] = {
    .visible = false,
    .named = true,
  },
  [sym_command_name] = {
    .visible = true,
    .named = true,
  },
  [sym_renv_sig_beg] = {
    .visible = true,
    .named = true,
  },
  [sym_renv_sig_end] = {
    .visible = true,
    .named = true,
  },
  [sym_renv_content] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_rchunk] = {
    .visible = true,
    .named = true,
  },
  [sym_rinline] = {
    .visible = true,
    .named = true,
  },
  [sym__renv_sig_options] = {
    .visible = false,
    .named = true,
  },
  [sym_renv_key_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_renv_key] = {
    .visible = true,
    .named = true,
  },
  [sym_latex] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__renv_sig_options_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_latex_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_Sexpr = 1,
  field_key = 2,
  field_label = 3,
  field_value = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_Sexpr] = "Sexpr",
  [field_key] = "key",
  [field_label] = "label",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_label, 0},
  [1] =
    {field_Sexpr, 0},
  [2] =
    {field_key, 0},
    {field_value, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == ',') ADVANCE(12);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '@') ADVANCE(5);
      if (lookahead == '{') ADVANCE(6);
      if (lookahead == '}') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == ',') ADVANCE(12);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '@') ADVANCE(5);
      if (lookahead == '{') ADVANCE(6);
      if (lookahead == '}') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 2:
      if (lookahead == '}') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 3:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '>') ADVANCE(15);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(aux_sym_rinline_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(8);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym_rinline_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym__renv_sig_options_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym__renv_sig_options_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_renv_key_pair_token1);
      if (lookahead == ' ') ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_renv_val);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '>') ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_renv_val);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '>') ADVANCE(15);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 0, .external_lex_state = 2},
  [3] = {.lex_state = 0, .external_lex_state = 2},
  [4] = {.lex_state = 0, .external_lex_state = 2},
  [5] = {.lex_state = 0, .external_lex_state = 3},
  [6] = {.lex_state = 0, .external_lex_state = 2},
  [7] = {.lex_state = 0, .external_lex_state = 2},
  [8] = {.lex_state = 0, .external_lex_state = 2},
  [9] = {.lex_state = 0, .external_lex_state = 2},
  [10] = {.lex_state = 0, .external_lex_state = 2},
  [11] = {.lex_state = 0, .external_lex_state = 2},
  [12] = {.lex_state = 0, .external_lex_state = 3},
  [13] = {.lex_state = 0, .external_lex_state = 3},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0, .external_lex_state = 3},
  [16] = {.lex_state = 0, .external_lex_state = 4},
  [17] = {.lex_state = 0, .external_lex_state = 3},
  [18] = {.lex_state = 0, .external_lex_state = 4},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 0, .external_lex_state = 3},
  [21] = {.lex_state = 0, .external_lex_state = 3},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0, .external_lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
};

enum {
  ts_external_token__latex_word = 0,
  ts_external_token_command_name = 1,
  ts_external_token_renv_sig_beg = 2,
  ts_external_token_renv_sig_end = 3,
  ts_external_token_renv_content = 4,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__latex_word] = sym__latex_word,
  [ts_external_token_command_name] = sym_command_name,
  [ts_external_token_renv_sig_beg] = sym_renv_sig_beg,
  [ts_external_token_renv_sig_end] = sym_renv_sig_end,
  [ts_external_token_renv_content] = sym_renv_content,
};

static const bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__latex_word] = true,
    [ts_external_token_command_name] = true,
    [ts_external_token_renv_sig_beg] = true,
    [ts_external_token_renv_sig_end] = true,
    [ts_external_token_renv_content] = true,
  },
  [2] = {
    [ts_external_token__latex_word] = true,
    [ts_external_token_command_name] = true,
    [ts_external_token_renv_sig_beg] = true,
  },
  [3] = {
    [ts_external_token_renv_sig_end] = true,
  },
  [4] = {
    [ts_external_token_renv_content] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [aux_sym__renv_sig_options_token1] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_renv_key_pair_token1] = ACTIONS(1),
    [sym__latex_word] = ACTIONS(1),
    [sym_command_name] = ACTIONS(1),
    [sym_renv_sig_beg] = ACTIONS(1),
    [sym_renv_sig_end] = ACTIONS(1),
    [sym_renv_content] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(30),
    [sym_rchunk] = STATE(2),
    [sym_rinline] = STATE(2),
    [sym_latex] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_latex_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__latex_word] = ACTIONS(5),
    [sym_command_name] = ACTIONS(7),
    [sym_renv_sig_beg] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(5), 1,
      sym__latex_word,
    ACTIONS(7), 1,
      sym_command_name,
    ACTIONS(9), 1,
      sym_renv_sig_beg,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      aux_sym_latex_repeat1,
    STATE(3), 4,
      sym_rchunk,
      sym_rinline,
      sym_latex,
      aux_sym_source_file_repeat1,
  [22] = 6,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      sym__latex_word,
    ACTIONS(18), 1,
      sym_command_name,
    ACTIONS(21), 1,
      sym_renv_sig_beg,
    STATE(6), 1,
      aux_sym_latex_repeat1,
    STATE(3), 4,
      sym_rchunk,
      sym_rinline,
      sym_latex,
      aux_sym_source_file_repeat1,
  [44] = 3,
    ACTIONS(26), 1,
      sym__latex_word,
    STATE(4), 1,
      aux_sym_latex_repeat1,
    ACTIONS(24), 3,
      sym_command_name,
      sym_renv_sig_beg,
      ts_builtin_sym_end,
  [56] = 5,
    ACTIONS(29), 1,
      aux_sym__renv_sig_options_token1,
    ACTIONS(31), 1,
      sym_renv_sig_end,
    STATE(13), 1,
      sym_renv_key_pair,
    STATE(22), 1,
      sym_renv_key,
    STATE(26), 1,
      sym__renv_sig_options,
  [72] = 3,
    ACTIONS(35), 1,
      sym__latex_word,
    STATE(4), 1,
      aux_sym_latex_repeat1,
    ACTIONS(33), 3,
      sym_command_name,
      sym_renv_sig_beg,
      ts_builtin_sym_end,
  [84] = 1,
    ACTIONS(37), 4,
      sym__latex_word,
      sym_command_name,
      sym_renv_sig_beg,
      ts_builtin_sym_end,
  [91] = 1,
    ACTIONS(39), 4,
      sym__latex_word,
      sym_command_name,
      sym_renv_sig_beg,
      ts_builtin_sym_end,
  [98] = 1,
    ACTIONS(41), 4,
      sym__latex_word,
      sym_command_name,
      sym_renv_sig_beg,
      ts_builtin_sym_end,
  [105] = 1,
    ACTIONS(43), 4,
      sym__latex_word,
      sym_command_name,
      sym_renv_sig_beg,
      ts_builtin_sym_end,
  [112] = 1,
    ACTIONS(45), 4,
      sym__latex_word,
      sym_command_name,
      sym_renv_sig_beg,
      ts_builtin_sym_end,
  [119] = 3,
    ACTIONS(47), 1,
      anon_sym_COMMA,
    ACTIONS(49), 1,
      sym_renv_sig_end,
    STATE(15), 1,
      aux_sym__renv_sig_options_repeat1,
  [129] = 3,
    ACTIONS(47), 1,
      anon_sym_COMMA,
    ACTIONS(51), 1,
      sym_renv_sig_end,
    STATE(12), 1,
      aux_sym__renv_sig_options_repeat1,
  [139] = 3,
    ACTIONS(53), 1,
      aux_sym__renv_sig_options_token1,
    STATE(20), 1,
      sym_renv_key_pair,
    STATE(22), 1,
      sym_renv_key,
  [149] = 3,
    ACTIONS(55), 1,
      anon_sym_COMMA,
    ACTIONS(58), 1,
      sym_renv_sig_end,
    STATE(15), 1,
      aux_sym__renv_sig_options_repeat1,
  [159] = 2,
    ACTIONS(60), 1,
      anon_sym_AT,
    ACTIONS(62), 1,
      sym_renv_content,
  [166] = 2,
    ACTIONS(64), 1,
      aux_sym_renv_key_pair_token1,
    ACTIONS(66), 1,
      sym_renv_sig_end,
  [173] = 2,
    ACTIONS(68), 1,
      anon_sym_AT,
    ACTIONS(70), 1,
      sym_renv_content,
  [180] = 2,
    ACTIONS(72), 1,
      aux_sym_rinline_token1,
    ACTIONS(74), 1,
      anon_sym_RBRACE,
  [187] = 1,
    ACTIONS(58), 2,
      sym_renv_sig_end,
      anon_sym_COMMA,
  [192] = 1,
    ACTIONS(76), 2,
      sym_renv_sig_end,
      anon_sym_COMMA,
  [197] = 1,
    ACTIONS(78), 1,
      aux_sym_renv_key_pair_token1,
  [201] = 1,
    ACTIONS(80), 1,
      anon_sym_RBRACE,
  [205] = 1,
    ACTIONS(82), 1,
      anon_sym_LBRACE,
  [209] = 1,
    ACTIONS(60), 1,
      anon_sym_AT,
  [213] = 1,
    ACTIONS(84), 1,
      sym_renv_sig_end,
  [217] = 1,
    ACTIONS(86), 1,
      sym_renv_val,
  [221] = 1,
    ACTIONS(88), 1,
      anon_sym_AT,
  [225] = 1,
    ACTIONS(64), 1,
      aux_sym_renv_key_pair_token1,
  [229] = 1,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 44,
  [SMALL_STATE(5)] = 56,
  [SMALL_STATE(6)] = 72,
  [SMALL_STATE(7)] = 84,
  [SMALL_STATE(8)] = 91,
  [SMALL_STATE(9)] = 98,
  [SMALL_STATE(10)] = 105,
  [SMALL_STATE(11)] = 112,
  [SMALL_STATE(12)] = 119,
  [SMALL_STATE(13)] = 129,
  [SMALL_STATE(14)] = 139,
  [SMALL_STATE(15)] = 149,
  [SMALL_STATE(16)] = 159,
  [SMALL_STATE(17)] = 166,
  [SMALL_STATE(18)] = 173,
  [SMALL_STATE(19)] = 180,
  [SMALL_STATE(20)] = 187,
  [SMALL_STATE(21)] = 192,
  [SMALL_STATE(22)] = 197,
  [SMALL_STATE(23)] = 201,
  [SMALL_STATE(24)] = 205,
  [SMALL_STATE(25)] = 209,
  [SMALL_STATE(26)] = 213,
  [SMALL_STATE(27)] = 217,
  [SMALL_STATE(28)] = 221,
  [SMALL_STATE(29)] = 225,
  [SMALL_STATE(30)] = 229,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_latex_repeat1, 2),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_latex_repeat1, 2), SHIFT_REPEAT(4),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_latex, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rchunk, 5),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rchunk, 4),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rinline, 4, .production_id = 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rchunk, 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rinline, 3, .production_id = 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__renv_sig_options, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__renv_sig_options, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__renv_sig_options_repeat1, 2), SHIFT_REPEAT(14),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__renv_sig_options_repeat1, 2),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_renv_key, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__renv_sig_options, 1, .production_id = 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_renv_key_pair, 3, .production_id = 3),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [90] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_rnoweb_external_scanner_create(void);
void tree_sitter_rnoweb_external_scanner_destroy(void *);
bool tree_sitter_rnoweb_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_rnoweb_external_scanner_serialize(void *, char *);
void tree_sitter_rnoweb_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_rnoweb(void) {
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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_rnoweb_external_scanner_create,
      tree_sitter_rnoweb_external_scanner_destroy,
      tree_sitter_rnoweb_external_scanner_scan,
      tree_sitter_rnoweb_external_scanner_serialize,
      tree_sitter_rnoweb_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
