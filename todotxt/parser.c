#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 21
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 15
#define ALIAS_COUNT 0
#define TOKEN_COUNT 9
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  anon_sym_x = 2,
  sym_date = 3,
  sym_project = 4,
  sym_context = 5,
  sym_kv = 6,
  sym_priority = 7,
  sym__word = 8,
  sym_source_file = 9,
  sym_task = 10,
  sym_done_task = 11,
  sym__task = 12,
  aux_sym_source_file_repeat1 = 13,
  aux_sym__task_repeat1 = 14,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_x] = "x",
  [sym_date] = "date",
  [sym_project] = "project",
  [sym_context] = "context",
  [sym_kv] = "kv",
  [sym_priority] = "priority",
  [sym__word] = "_word",
  [sym_source_file] = "source_file",
  [sym_task] = "task",
  [sym_done_task] = "done_task",
  [sym__task] = "_task",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__task_repeat1] = "_task_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_x] = anon_sym_x,
  [sym_date] = sym_date,
  [sym_project] = sym_project,
  [sym_context] = sym_context,
  [sym_kv] = sym_kv,
  [sym_priority] = sym_priority,
  [sym__word] = sym__word,
  [sym_source_file] = sym_source_file,
  [sym_task] = sym_task,
  [sym_done_task] = sym_done_task,
  [sym__task] = sym__task,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__task_repeat1] = aux_sym__task_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x] = {
    .visible = true,
    .named = false,
  },
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [sym_project] = {
    .visible = true,
    .named = true,
  },
  [sym_context] = {
    .visible = true,
    .named = true,
  },
  [sym_kv] = {
    .visible = true,
    .named = true,
  },
  [sym_priority] = {
    .visible = true,
    .named = true,
  },
  [sym__word] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_task] = {
    .visible = true,
    .named = true,
  },
  [sym_done_task] = {
    .visible = true,
    .named = true,
  },
  [sym__task] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__task_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == '+') ADVANCE(20);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == '@') ADVANCE(21);
      if (lookahead == 'x') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '+') ADVANCE(20);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == '@') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 2:
      if (lookahead == '+') ADVANCE(20);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == '@') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 3:
      if (lookahead == '+') ADVANCE(20);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == '@') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(5);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(30);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_date);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(30);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_project);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_project);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_project);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == ':') ADVANCE(13);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_context);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_kv);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_priority);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(30);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ')') ADVANCE(15);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(30);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(30);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(30);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(14);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(8);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(11);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(30);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(30);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(30);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(30);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(30);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(30);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(30);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(16);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__word);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(31);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_x] = ACTIONS(1),
    [sym_date] = ACTIONS(1),
    [sym_project] = ACTIONS(1),
    [sym_context] = ACTIONS(1),
    [sym_kv] = ACTIONS(1),
    [sym_priority] = ACTIONS(1),
    [sym__word] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(14),
    [sym_task] = STATE(13),
    [sym_done_task] = STATE(13),
    [sym__task] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym__task_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_x] = ACTIONS(5),
    [sym_date] = ACTIONS(7),
    [sym_project] = ACTIONS(9),
    [sym_context] = ACTIONS(9),
    [sym_kv] = ACTIONS(11),
    [sym_priority] = ACTIONS(13),
    [sym__word] = ACTIONS(11),
  },
  [2] = {
    [sym_task] = STATE(13),
    [sym_done_task] = STATE(13),
    [sym__task] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym__task_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_x] = ACTIONS(5),
    [sym_date] = ACTIONS(7),
    [sym_project] = ACTIONS(9),
    [sym_context] = ACTIONS(9),
    [sym_kv] = ACTIONS(11),
    [sym_priority] = ACTIONS(13),
    [sym__word] = ACTIONS(11),
  },
  [3] = {
    [sym_task] = STATE(13),
    [sym_done_task] = STATE(13),
    [sym__task] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym__task_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_x] = ACTIONS(19),
    [sym_date] = ACTIONS(22),
    [sym_project] = ACTIONS(25),
    [sym_context] = ACTIONS(25),
    [sym_kv] = ACTIONS(28),
    [sym_priority] = ACTIONS(31),
    [sym__word] = ACTIONS(28),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_x] = ACTIONS(34),
    [sym_date] = ACTIONS(34),
    [sym_project] = ACTIONS(17),
    [sym_context] = ACTIONS(17),
    [sym_kv] = ACTIONS(34),
    [sym_priority] = ACTIONS(34),
    [sym__word] = ACTIONS(34),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(36), 1,
      sym_date,
    STATE(9), 1,
      aux_sym__task_repeat1,
    STATE(16), 1,
      sym__task,
    ACTIONS(9), 2,
      sym_project,
      sym_context,
    ACTIONS(11), 2,
      sym_kv,
      sym__word,
  [18] = 5,
    ACTIONS(38), 1,
      sym_date,
    STATE(9), 1,
      aux_sym__task_repeat1,
    STATE(17), 1,
      sym__task,
    ACTIONS(9), 2,
      sym_project,
      sym_context,
    ACTIONS(11), 2,
      sym_kv,
      sym__word,
  [36] = 5,
    ACTIONS(40), 1,
      sym_date,
    STATE(9), 1,
      aux_sym__task_repeat1,
    STATE(18), 1,
      sym__task,
    ACTIONS(9), 2,
      sym_project,
      sym_context,
    ACTIONS(11), 2,
      sym_kv,
      sym__word,
  [54] = 4,
    STATE(9), 1,
      aux_sym__task_repeat1,
    STATE(16), 1,
      sym__task,
    ACTIONS(9), 2,
      sym_project,
      sym_context,
    ACTIONS(11), 2,
      sym_kv,
      sym__word,
  [69] = 3,
    ACTIONS(42), 1,
      anon_sym_LF,
    STATE(12), 1,
      aux_sym__task_repeat1,
    ACTIONS(44), 4,
      sym_project,
      sym_context,
      sym_kv,
      sym__word,
  [82] = 4,
    STATE(9), 1,
      aux_sym__task_repeat1,
    STATE(19), 1,
      sym__task,
    ACTIONS(9), 2,
      sym_project,
      sym_context,
    ACTIONS(11), 2,
      sym_kv,
      sym__word,
  [97] = 4,
    STATE(9), 1,
      aux_sym__task_repeat1,
    STATE(20), 1,
      sym__task,
    ACTIONS(9), 2,
      sym_project,
      sym_context,
    ACTIONS(11), 2,
      sym_kv,
      sym__word,
  [112] = 3,
    ACTIONS(46), 1,
      anon_sym_LF,
    STATE(12), 1,
      aux_sym__task_repeat1,
    ACTIONS(48), 4,
      sym_project,
      sym_context,
      sym_kv,
      sym__word,
  [125] = 1,
    ACTIONS(51), 1,
      anon_sym_LF,
  [129] = 1,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
  [133] = 1,
    ACTIONS(55), 1,
      anon_sym_LF,
  [137] = 1,
    ACTIONS(57), 1,
      anon_sym_LF,
  [141] = 1,
    ACTIONS(59), 1,
      anon_sym_LF,
  [145] = 1,
    ACTIONS(61), 1,
      anon_sym_LF,
  [149] = 1,
    ACTIONS(63), 1,
      anon_sym_LF,
  [153] = 1,
    ACTIONS(65), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 18,
  [SMALL_STATE(7)] = 36,
  [SMALL_STATE(8)] = 54,
  [SMALL_STATE(9)] = 69,
  [SMALL_STATE(10)] = 82,
  [SMALL_STATE(11)] = 97,
  [SMALL_STATE(12)] = 112,
  [SMALL_STATE(13)] = 125,
  [SMALL_STATE(14)] = 129,
  [SMALL_STATE(15)] = 133,
  [SMALL_STATE(16)] = 137,
  [SMALL_STATE(17)] = 141,
  [SMALL_STATE(18)] = 145,
  [SMALL_STATE(19)] = 149,
  [SMALL_STATE(20)] = 153,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__task, 1, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__task_repeat1, 2, 0, 0),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [53] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 1, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 2, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_done_task, 2, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_done_task, 3, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 3, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_done_task, 4, 0, 0),
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

TS_PUBLIC const TSLanguage *tree_sitter_todotxt(void) {
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
