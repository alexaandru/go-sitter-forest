#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 28
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 20
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_source_token1 = 1,
  anon_sym_x = 2,
  anon_sym_exec = 3,
  anon_sym_DASHc = 4,
  anon_sym_DASHC = 5,
  sym_label = 6,
  sym_message = 7,
  sym_command = 8,
  sym_comment = 9,
  sym_source = 10,
  sym_operation = 11,
  sym__nullary_operation = 12,
  sym__label_operation = 13,
  sym__merge_operation = 14,
  sym__fixup_operation = 15,
  sym__exec_operation = 16,
  sym_option = 17,
  aux_sym_source_repeat1 = 18,
  aux_sym_source_repeat2 = 19,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_source_token1] = "source_token1",
  [anon_sym_x] = "command",
  [anon_sym_exec] = "command",
  [anon_sym_DASHc] = "-c",
  [anon_sym_DASHC] = "-C",
  [sym_label] = "label",
  [sym_message] = "message",
  [sym_command] = "command",
  [sym_comment] = "comment",
  [sym_source] = "source",
  [sym_operation] = "operation",
  [sym__nullary_operation] = "_nullary_operation",
  [sym__label_operation] = "_label_operation",
  [sym__merge_operation] = "_merge_operation",
  [sym__fixup_operation] = "_fixup_operation",
  [sym__exec_operation] = "_exec_operation",
  [sym_option] = "option",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_source_repeat2] = "source_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_source_token1] = aux_sym_source_token1,
  [anon_sym_x] = sym_command,
  [anon_sym_exec] = sym_command,
  [anon_sym_DASHc] = anon_sym_DASHc,
  [anon_sym_DASHC] = anon_sym_DASHC,
  [sym_label] = sym_label,
  [sym_message] = sym_message,
  [sym_command] = sym_command,
  [sym_comment] = sym_comment,
  [sym_source] = sym_source,
  [sym_operation] = sym_operation,
  [sym__nullary_operation] = sym__nullary_operation,
  [sym__label_operation] = sym__label_operation,
  [sym__merge_operation] = sym__merge_operation,
  [sym__fixup_operation] = sym__fixup_operation,
  [sym__exec_operation] = sym__exec_operation,
  [sym_option] = sym_option,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_source_repeat2] = aux_sym_source_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_x] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_exec] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASHc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASHC] = {
    .visible = true,
    .named = false,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_message] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym_operation] = {
    .visible = true,
    .named = true,
  },
  [sym__nullary_operation] = {
    .visible = false,
    .named = true,
  },
  [sym__label_operation] = {
    .visible = false,
    .named = true,
  },
  [sym__merge_operation] = {
    .visible = false,
    .named = true,
  },
  [sym__fixup_operation] = {
    .visible = false,
    .named = true,
  },
  [sym__exec_operation] = {
    .visible = false,
    .named = true,
  },
  [sym_option] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_repeat2] = {
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
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(11);
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == 'e') ADVANCE(6);
      if (lookahead == 'x') ADVANCE(15);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '?') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(25);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(27);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(30);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(31);
      END_STATE();
    case 3:
      if (lookahead == 'C') ADVANCE(21);
      if (lookahead == 'c') ADVANCE(19);
      END_STATE();
    case 4:
      if (lookahead == 'c') ADVANCE(17);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == 'x') ADVANCE(5);
      END_STATE();
    case 7:
      if (eof) ADVANCE(11);
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == 'e') ADVANCE(34);
      if (lookahead == 'x') ADVANCE(16);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '?') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(7)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 8:
      if (eof) ADVANCE(11);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '?') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(14);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(23);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 9:
      if (eof) ADVANCE(11);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '?') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(14);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(24);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 10:
      if (eof) ADVANCE(11);
      if (lookahead == '#') ADVANCE(31);
      if (lookahead == '?') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(14);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(29);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_source_token1);
      if (lookahead == '?') ADVANCE(12);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(27);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_source_token1);
      if (lookahead == '?') ADVANCE(13);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_source_token1);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '?') ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_exec);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_exec);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_DASHc);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_DASHc);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(27);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_DASHC);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_DASHC);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(27);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '?') ADVANCE(12);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(23);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(27);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '?') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(24);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(27);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(25);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(27);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'C') ADVANCE(22);
      if (lookahead == 'c') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_label);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_message);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '?') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(14);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(24);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_message);
      if (lookahead == '#') ADVANCE(31);
      if (lookahead == '?') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(14);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(29);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_message);
      if (lookahead == '#') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(30);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_message);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_command);
      if (lookahead == 'c') ADVANCE(18);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_command);
      if (lookahead == 'e') ADVANCE(32);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_command);
      if (lookahead == 'x') ADVANCE(33);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_command);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(36);
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
  [4] = {.lex_state = 8},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 10},
  [16] = {.lex_state = 10},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_source_token1] = ACTIONS(1),
    [anon_sym_x] = ACTIONS(1),
    [anon_sym_exec] = ACTIONS(1),
    [anon_sym_DASHc] = ACTIONS(1),
    [anon_sym_DASHC] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source] = STATE(27),
    [sym_operation] = STATE(9),
    [sym__nullary_operation] = STATE(17),
    [sym__label_operation] = STATE(17),
    [sym__merge_operation] = STATE(17),
    [sym__fixup_operation] = STATE(17),
    [sym__exec_operation] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_source_token1] = ACTIONS(7),
    [anon_sym_x] = ACTIONS(9),
    [anon_sym_exec] = ACTIONS(9),
    [sym_command] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_operation] = STATE(11),
    [sym__nullary_operation] = STATE(17),
    [sym__label_operation] = STATE(17),
    [sym__merge_operation] = STATE(17),
    [sym__fixup_operation] = STATE(17),
    [sym__exec_operation] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(13),
    [aux_sym_source_token1] = ACTIONS(15),
    [anon_sym_x] = ACTIONS(9),
    [anon_sym_exec] = ACTIONS(9),
    [sym_command] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_operation] = STATE(19),
    [sym__nullary_operation] = STATE(17),
    [sym__label_operation] = STATE(17),
    [sym__merge_operation] = STATE(17),
    [sym__fixup_operation] = STATE(17),
    [sym__exec_operation] = STATE(17),
    [aux_sym_source_repeat1] = STATE(7),
    [aux_sym_source_token1] = ACTIONS(17),
    [anon_sym_x] = ACTIONS(9),
    [anon_sym_exec] = ACTIONS(9),
    [sym_command] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      aux_sym_source_token1,
    ACTIONS(25), 1,
      sym_label,
    ACTIONS(27), 1,
      sym_comment,
    STATE(24), 1,
      sym_option,
    ACTIONS(23), 2,
      anon_sym_DASHc,
      anon_sym_DASHC,
  [20] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      aux_sym_source_token1,
    ACTIONS(33), 3,
      anon_sym_x,
      anon_sym_exec,
      sym_command,
  [35] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      aux_sym_source_token1,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 3,
      anon_sym_x,
      anon_sym_exec,
      sym_command,
  [50] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      aux_sym_source_token1,
    STATE(7), 1,
      aux_sym_source_repeat1,
    ACTIONS(40), 3,
      anon_sym_x,
      anon_sym_exec,
      sym_command,
  [65] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      aux_sym_source_token1,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 3,
      anon_sym_x,
      anon_sym_exec,
      sym_command,
  [80] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(44), 1,
      aux_sym_source_token1,
    STATE(3), 1,
      aux_sym_source_repeat1,
    STATE(14), 1,
      aux_sym_source_repeat2,
  [96] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
    ACTIONS(48), 1,
      aux_sym_source_token1,
    STATE(3), 1,
      aux_sym_source_repeat1,
    STATE(10), 1,
      aux_sym_source_repeat2,
  [112] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      aux_sym_source_token1,
    STATE(3), 1,
      aux_sym_source_repeat1,
    STATE(13), 1,
      aux_sym_source_repeat2,
  [128] = 5,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(55), 1,
      aux_sym_source_token1,
    ACTIONS(57), 1,
      sym_label,
    ACTIONS(59), 1,
      sym_message,
  [144] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(61), 1,
      aux_sym_source_token1,
    STATE(3), 1,
      aux_sym_source_repeat1,
    STATE(10), 1,
      aux_sym_source_repeat2,
  [160] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      aux_sym_source_token1,
    STATE(3), 1,
      aux_sym_source_repeat1,
    STATE(10), 1,
      aux_sym_source_repeat2,
  [176] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    ACTIONS(65), 1,
      aux_sym_source_token1,
    ACTIONS(67), 1,
      sym_message,
  [189] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 1,
      aux_sym_source_token1,
    ACTIONS(73), 1,
      sym_message,
  [202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [210] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [218] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [226] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [234] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [242] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [250] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(85), 1,
      sym_message,
  [257] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(87), 1,
      sym_label,
  [264] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(89), 1,
      sym_label,
  [271] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
  [278] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 20,
  [SMALL_STATE(6)] = 35,
  [SMALL_STATE(7)] = 50,
  [SMALL_STATE(8)] = 65,
  [SMALL_STATE(9)] = 80,
  [SMALL_STATE(10)] = 96,
  [SMALL_STATE(11)] = 112,
  [SMALL_STATE(12)] = 128,
  [SMALL_STATE(13)] = 144,
  [SMALL_STATE(14)] = 160,
  [SMALL_STATE(15)] = 176,
  [SMALL_STATE(16)] = 189,
  [SMALL_STATE(17)] = 202,
  [SMALL_STATE(18)] = 210,
  [SMALL_STATE(19)] = 218,
  [SMALL_STATE(20)] = 226,
  [SMALL_STATE(21)] = 234,
  [SMALL_STATE(22)] = 242,
  [SMALL_STATE(23)] = 250,
  [SMALL_STATE(24)] = 257,
  [SMALL_STATE(25)] = 264,
  [SMALL_STATE(26)] = 271,
  [SMALL_STATE(27)] = 278,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nullary_operation, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nullary_operation, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 3),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 1),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 4),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(7),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat2, 2),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(3),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fixup_operation, 3),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__fixup_operation, 3),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__merge_operation, 4),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__merge_operation, 4),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_operation, 2),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_operation, 2),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_operation, 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exec_operation, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fixup_operation, 4),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__merge_operation, 5),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 1),
  [91] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_git_rebase(void) {
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
