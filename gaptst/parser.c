#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 30
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 21
#define ALIAS_COUNT 1
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  anon_sym_POUND_ATif = 1,
  anon_sym_POUND_ATfi = 2,
  anon_sym_LF = 3,
  anon_sym_POUND_ATelse = 4,
  anon_sym_POUND_ATlocal = 5,
  anon_sym_POUND_ATexec = 6,
  anon_sym_gap_GT = 7,
  anon_sym_GT = 8,
  sym_comment = 9,
  sym_gap_expression = 10,
  sym_output_line = 11,
  sym_test_file = 12,
  sym_if_statement = 13,
  sym_else_clause = 14,
  sym_local_statement = 15,
  sym_exec_statement = 16,
  sym_test_case = 17,
  aux_sym_test_file_repeat1 = 18,
  aux_sym_if_statement_repeat1 = 19,
  aux_sym_test_case_repeat1 = 20,
  alias_sym_input_line = 21,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_POUND_ATif] = "#@if",
  [anon_sym_POUND_ATfi] = "#@fi",
  [anon_sym_LF] = "\n",
  [anon_sym_POUND_ATelse] = "#@else",
  [anon_sym_POUND_ATlocal] = "#@local",
  [anon_sym_POUND_ATexec] = "#@exec",
  [anon_sym_gap_GT] = "gap> ",
  [anon_sym_GT] = "> ",
  [sym_comment] = "comment",
  [sym_gap_expression] = "gap_expression",
  [sym_output_line] = "output_line",
  [sym_test_file] = "test_file",
  [sym_if_statement] = "if_statement",
  [sym_else_clause] = "else_clause",
  [sym_local_statement] = "local_statement",
  [sym_exec_statement] = "exec_statement",
  [sym_test_case] = "test_case",
  [aux_sym_test_file_repeat1] = "test_file_repeat1",
  [aux_sym_if_statement_repeat1] = "if_statement_repeat1",
  [aux_sym_test_case_repeat1] = "test_case_repeat1",
  [alias_sym_input_line] = "input_line",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_POUND_ATif] = anon_sym_POUND_ATif,
  [anon_sym_POUND_ATfi] = anon_sym_POUND_ATfi,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_POUND_ATelse] = anon_sym_POUND_ATelse,
  [anon_sym_POUND_ATlocal] = anon_sym_POUND_ATlocal,
  [anon_sym_POUND_ATexec] = anon_sym_POUND_ATexec,
  [anon_sym_gap_GT] = anon_sym_gap_GT,
  [anon_sym_GT] = anon_sym_GT,
  [sym_comment] = sym_comment,
  [sym_gap_expression] = sym_gap_expression,
  [sym_output_line] = sym_output_line,
  [sym_test_file] = sym_test_file,
  [sym_if_statement] = sym_if_statement,
  [sym_else_clause] = sym_else_clause,
  [sym_local_statement] = sym_local_statement,
  [sym_exec_statement] = sym_exec_statement,
  [sym_test_case] = sym_test_case,
  [aux_sym_test_file_repeat1] = aux_sym_test_file_repeat1,
  [aux_sym_if_statement_repeat1] = aux_sym_if_statement_repeat1,
  [aux_sym_test_case_repeat1] = aux_sym_test_case_repeat1,
  [alias_sym_input_line] = alias_sym_input_line,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_POUND_ATif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_ATfi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_ATelse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_ATlocal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_ATexec] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gap_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_gap_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_output_line] = {
    .visible = true,
    .named = true,
  },
  [sym_test_file] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_else_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_local_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_exec_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_test_case] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_test_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_test_case_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_input_line] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_condition = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_condition] = "condition",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_condition, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_input_line,
  },
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
  [15] = 15,
  [16] = 16,
  [17] = 17,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(20);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '>') ADVANCE(3);
      if (lookahead == 'g') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '>') ADVANCE(3);
      if (lookahead == 'g') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(23);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(28);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(27);
      END_STATE();
    case 5:
      if (lookahead == '>') ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 8:
      if (lookahead == 'c') ADVANCE(26);
      END_STATE();
    case 9:
      if (lookahead == 'c') ADVANCE(7);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(15);
      if (lookahead == 'f') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(13);
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 13:
      if (lookahead == 'f') ADVANCE(21);
      END_STATE();
    case 14:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(19);
      if (lookahead == 'x') ADVANCE(12);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(9);
      END_STATE();
    case 18:
      if (lookahead == 'p') ADVANCE(5);
      END_STATE();
    case 19:
      if (lookahead == 's') ADVANCE(11);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_POUND_ATif);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_POUND_ATfi);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_POUND_ATelse);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_POUND_ATlocal);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_POUND_ATexec);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_gap_GT);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '@') ADVANCE(10);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_gap_expression);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_gap_expression);
      if (lookahead == '\n') ADVANCE(33);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_gap_expression);
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0, .external_lex_state = 1},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0, .external_lex_state = 1},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0, .external_lex_state = 1},
  [7] = {.lex_state = 0, .external_lex_state = 1},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 33},
  [20] = {.lex_state = 33},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 33},
  [27] = {.lex_state = 33},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 33},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUND_ATif] = ACTIONS(1),
    [anon_sym_POUND_ATfi] = ACTIONS(1),
    [anon_sym_POUND_ATelse] = ACTIONS(1),
    [anon_sym_POUND_ATlocal] = ACTIONS(1),
    [anon_sym_POUND_ATexec] = ACTIONS(1),
    [anon_sym_gap_GT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_output_line] = ACTIONS(1),
  },
  [1] = {
    [sym_test_file] = STATE(25),
    [sym_if_statement] = STATE(3),
    [sym_local_statement] = STATE(3),
    [sym_exec_statement] = STATE(3),
    [sym_test_case] = STATE(3),
    [aux_sym_test_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_POUND_ATif] = ACTIONS(5),
    [anon_sym_POUND_ATlocal] = ACTIONS(7),
    [anon_sym_POUND_ATexec] = ACTIONS(9),
    [anon_sym_gap_GT] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [2] = {
    [aux_sym_test_case_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_POUND_ATif] = ACTIONS(15),
    [anon_sym_POUND_ATfi] = ACTIONS(15),
    [anon_sym_POUND_ATelse] = ACTIONS(15),
    [anon_sym_POUND_ATlocal] = ACTIONS(15),
    [anon_sym_POUND_ATexec] = ACTIONS(15),
    [anon_sym_gap_GT] = ACTIONS(15),
    [anon_sym_GT] = ACTIONS(17),
    [sym_comment] = ACTIONS(20),
    [sym_output_line] = ACTIONS(22),
  },
  [3] = {
    [sym_if_statement] = STATE(5),
    [sym_local_statement] = STATE(5),
    [sym_exec_statement] = STATE(5),
    [sym_test_case] = STATE(5),
    [aux_sym_test_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_POUND_ATif] = ACTIONS(5),
    [anon_sym_POUND_ATlocal] = ACTIONS(7),
    [anon_sym_POUND_ATexec] = ACTIONS(9),
    [anon_sym_gap_GT] = ACTIONS(11),
    [sym_comment] = ACTIONS(27),
  },
  [4] = {
    [aux_sym_test_case_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_POUND_ATif] = ACTIONS(29),
    [anon_sym_POUND_ATfi] = ACTIONS(29),
    [anon_sym_POUND_ATelse] = ACTIONS(29),
    [anon_sym_POUND_ATlocal] = ACTIONS(29),
    [anon_sym_POUND_ATexec] = ACTIONS(29),
    [anon_sym_gap_GT] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(31),
    [sym_comment] = ACTIONS(33),
    [sym_output_line] = ACTIONS(35),
  },
  [5] = {
    [sym_if_statement] = STATE(5),
    [sym_local_statement] = STATE(5),
    [sym_exec_statement] = STATE(5),
    [sym_test_case] = STATE(5),
    [aux_sym_test_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_POUND_ATif] = ACTIONS(39),
    [anon_sym_POUND_ATlocal] = ACTIONS(42),
    [anon_sym_POUND_ATexec] = ACTIONS(45),
    [anon_sym_gap_GT] = ACTIONS(48),
    [sym_comment] = ACTIONS(51),
  },
  [6] = {
    [aux_sym_test_case_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(54),
    [anon_sym_POUND_ATif] = ACTIONS(54),
    [anon_sym_POUND_ATfi] = ACTIONS(54),
    [anon_sym_POUND_ATelse] = ACTIONS(54),
    [anon_sym_POUND_ATlocal] = ACTIONS(54),
    [anon_sym_POUND_ATexec] = ACTIONS(54),
    [anon_sym_gap_GT] = ACTIONS(54),
    [anon_sym_GT] = ACTIONS(31),
    [sym_comment] = ACTIONS(56),
    [sym_output_line] = ACTIONS(58),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(60), 9,
      sym_output_line,
      ts_builtin_sym_end,
      anon_sym_POUND_ATif,
      anon_sym_POUND_ATfi,
      anon_sym_POUND_ATelse,
      anon_sym_POUND_ATlocal,
      anon_sym_POUND_ATexec,
      anon_sym_gap_GT,
      anon_sym_GT,
  [15] = 6,
    ACTIONS(11), 1,
      anon_sym_gap_GT,
    ACTIONS(64), 1,
      anon_sym_POUND_ATfi,
    ACTIONS(66), 1,
      anon_sym_POUND_ATelse,
    ACTIONS(68), 1,
      sym_comment,
    STATE(23), 1,
      sym_else_clause,
    STATE(9), 2,
      sym_test_case,
      aux_sym_if_statement_repeat1,
  [35] = 6,
    ACTIONS(11), 1,
      anon_sym_gap_GT,
    ACTIONS(66), 1,
      anon_sym_POUND_ATelse,
    ACTIONS(70), 1,
      anon_sym_POUND_ATfi,
    ACTIONS(72), 1,
      sym_comment,
    STATE(22), 1,
      sym_else_clause,
    STATE(15), 2,
      sym_test_case,
      aux_sym_if_statement_repeat1,
  [55] = 2,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(74), 5,
      ts_builtin_sym_end,
      anon_sym_POUND_ATif,
      anon_sym_POUND_ATlocal,
      anon_sym_POUND_ATexec,
      anon_sym_gap_GT,
  [66] = 2,
    ACTIONS(80), 1,
      sym_comment,
    ACTIONS(78), 5,
      ts_builtin_sym_end,
      anon_sym_POUND_ATif,
      anon_sym_POUND_ATlocal,
      anon_sym_POUND_ATexec,
      anon_sym_gap_GT,
  [77] = 2,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(82), 5,
      ts_builtin_sym_end,
      anon_sym_POUND_ATif,
      anon_sym_POUND_ATlocal,
      anon_sym_POUND_ATexec,
      anon_sym_gap_GT,
  [88] = 2,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(86), 5,
      ts_builtin_sym_end,
      anon_sym_POUND_ATif,
      anon_sym_POUND_ATlocal,
      anon_sym_POUND_ATexec,
      anon_sym_gap_GT,
  [99] = 2,
    ACTIONS(92), 1,
      sym_comment,
    ACTIONS(90), 5,
      ts_builtin_sym_end,
      anon_sym_POUND_ATif,
      anon_sym_POUND_ATlocal,
      anon_sym_POUND_ATexec,
      anon_sym_gap_GT,
  [110] = 4,
    ACTIONS(96), 1,
      anon_sym_gap_GT,
    ACTIONS(99), 1,
      sym_comment,
    ACTIONS(94), 2,
      anon_sym_POUND_ATfi,
      anon_sym_POUND_ATelse,
    STATE(15), 2,
      sym_test_case,
      aux_sym_if_statement_repeat1,
  [125] = 4,
    ACTIONS(11), 1,
      anon_sym_gap_GT,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_POUND_ATfi,
    STATE(15), 2,
      sym_test_case,
      aux_sym_if_statement_repeat1,
  [139] = 4,
    ACTIONS(11), 1,
      anon_sym_gap_GT,
    ACTIONS(104), 1,
      anon_sym_POUND_ATfi,
    ACTIONS(106), 1,
      sym_comment,
    STATE(16), 2,
      sym_test_case,
      aux_sym_if_statement_repeat1,
  [153] = 1,
    ACTIONS(108), 1,
      anon_sym_LF,
  [157] = 1,
    ACTIONS(110), 1,
      sym_gap_expression,
  [161] = 1,
    ACTIONS(112), 1,
      sym_gap_expression,
  [165] = 1,
    ACTIONS(114), 1,
      anon_sym_LF,
  [169] = 1,
    ACTIONS(116), 1,
      anon_sym_POUND_ATfi,
  [173] = 1,
    ACTIONS(70), 1,
      anon_sym_POUND_ATfi,
  [177] = 1,
    ACTIONS(118), 1,
      anon_sym_LF,
  [181] = 1,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
  [185] = 1,
    ACTIONS(122), 1,
      sym_gap_expression,
  [189] = 1,
    ACTIONS(124), 1,
      sym_gap_expression,
  [193] = 1,
    ACTIONS(126), 1,
      anon_sym_LF,
  [197] = 1,
    ACTIONS(128), 1,
      sym_gap_expression,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 15,
  [SMALL_STATE(9)] = 35,
  [SMALL_STATE(10)] = 55,
  [SMALL_STATE(11)] = 66,
  [SMALL_STATE(12)] = 77,
  [SMALL_STATE(13)] = 88,
  [SMALL_STATE(14)] = 99,
  [SMALL_STATE(15)] = 110,
  [SMALL_STATE(16)] = 125,
  [SMALL_STATE(17)] = 139,
  [SMALL_STATE(18)] = 153,
  [SMALL_STATE(19)] = 157,
  [SMALL_STATE(20)] = 161,
  [SMALL_STATE(21)] = 165,
  [SMALL_STATE(22)] = 169,
  [SMALL_STATE(23)] = 173,
  [SMALL_STATE(24)] = 177,
  [SMALL_STATE(25)] = 181,
  [SMALL_STATE(26)] = 185,
  [SMALL_STATE(27)] = 189,
  [SMALL_STATE(28)] = 193,
  [SMALL_STATE(29)] = 197,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_case_repeat1, 2, 0, 0),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_test_case_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [20] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_case_repeat1, 2, 0, 0),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_test_case_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_file, 1, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case, 2, 0, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case, 2, 0, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_file_repeat1, 2, 0, 0),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_test_file_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_test_file_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_test_file_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_test_file_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case, 3, 0, 1),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case, 3, 0, 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_case_repeat1, 2, 0, 1),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_case_repeat1, 2, 0, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 4, 0, 2),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 4, 0, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, 0, 2),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6, 0, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, 0, 2),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, 0, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_statement, 2, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_statement, 2, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_statement, 2, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exec_statement, 2, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2, 0, 0),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 3, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 2, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [120] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_output_line = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_output_line] = sym_output_line,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_output_line] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_gaptst_external_scanner_create(void);
void tree_sitter_gaptst_external_scanner_destroy(void *);
bool tree_sitter_gaptst_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_gaptst_external_scanner_serialize(void *, char *);
void tree_sitter_gaptst_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_gaptst(void) {
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
      tree_sitter_gaptst_external_scanner_create,
      tree_sitter_gaptst_external_scanner_destroy,
      tree_sitter_gaptst_external_scanner_scan,
      tree_sitter_gaptst_external_scanner_serialize,
      tree_sitter_gaptst_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
