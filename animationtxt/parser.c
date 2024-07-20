#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 39
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 20
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  aux_sym_document_token1 = 1,
  aux_sym_document_token2 = 2,
  anon_sym_NULL = 3,
  anon_sym_loopCount = 4,
  aux_sym_loopCount_token1 = 5,
  anon_sym_EQ = 6,
  anon_sym_frames = 7,
  anon_sym_introFrames = 8,
  aux_sym_framelist_token1 = 9,
  sym_frameRepeat = 10,
  sym_integer = 11,
  sym_document = 12,
  sym_statement = 13,
  sym_loopCount = 14,
  sym_frames = 15,
  sym_introFrames = 16,
  sym_framelist = 17,
  aux_sym_document_repeat1 = 18,
  aux_sym_framelist_repeat1 = 19,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_document_token1] = "document_token1",
  [aux_sym_document_token2] = "document_token2",
  [anon_sym_NULL] = "\0",
  [anon_sym_loopCount] = "loopCount",
  [aux_sym_loopCount_token1] = "loopCount_token1",
  [anon_sym_EQ] = "=",
  [anon_sym_frames] = "frames",
  [anon_sym_introFrames] = "introFrames",
  [aux_sym_framelist_token1] = "framelist_token1",
  [sym_frameRepeat] = "frameRepeat",
  [sym_integer] = "integer",
  [sym_document] = "document",
  [sym_statement] = "statement",
  [sym_loopCount] = "loopCount",
  [sym_frames] = "frames",
  [sym_introFrames] = "introFrames",
  [sym_framelist] = "framelist",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_framelist_repeat1] = "framelist_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_document_token1] = aux_sym_document_token1,
  [aux_sym_document_token2] = aux_sym_document_token2,
  [anon_sym_NULL] = anon_sym_NULL,
  [anon_sym_loopCount] = anon_sym_loopCount,
  [aux_sym_loopCount_token1] = aux_sym_loopCount_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_frames] = anon_sym_frames,
  [anon_sym_introFrames] = anon_sym_introFrames,
  [aux_sym_framelist_token1] = aux_sym_framelist_token1,
  [sym_frameRepeat] = sym_frameRepeat,
  [sym_integer] = sym_integer,
  [sym_document] = sym_document,
  [sym_statement] = sym_statement,
  [sym_loopCount] = sym_loopCount,
  [sym_frames] = sym_frames,
  [sym_introFrames] = sym_introFrames,
  [sym_framelist] = sym_framelist,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_framelist_repeat1] = aux_sym_framelist_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_document_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_document_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_NULL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_loopCount] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_loopCount_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_frames] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_introFrames] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_framelist_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_frameRepeat] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_loopCount] = {
    .visible = true,
    .named = true,
  },
  [sym_frames] = {
    .visible = true,
    .named = true,
  },
  [sym_introFrames] = {
    .visible = true,
    .named = true,
  },
  [sym_framelist] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_framelist_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (eof) ADVANCE(30);
      if (lookahead == '\n') ADVANCE(31);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(35);
      if (lookahead == ',') ADVANCE(40);
      if (lookahead == '=') ADVANCE(37);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(31);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(32);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == ',') ADVANCE(40);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(36);
      if (lookahead == '=') ADVANCE(37);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 5:
      if (lookahead == 'C') ADVANCE(17);
      END_STATE();
    case 6:
      if (lookahead == 'F') ADVANCE(22);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(11);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 11:
      if (lookahead == 'm') ADVANCE(9);
      END_STATE();
    case 12:
      if (lookahead == 'm') ADVANCE(10);
      END_STATE();
    case 13:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 14:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 15:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 16:
      if (lookahead == 'o') ADVANCE(6);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 18:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 19:
      if (lookahead == 'p') ADVANCE(5);
      END_STATE();
    case 20:
      if (lookahead == 'r') ADVANCE(7);
      END_STATE();
    case 21:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 23:
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 24:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 27:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 28:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 29:
      if (eof) ADVANCE(30);
      if (!eof && (lookahead == 0)) ADVANCE(33);
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == ',') ADVANCE(40);
      if (lookahead == '=') ADVANCE(37);
      if (lookahead == 'f') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(13);
      if (lookahead == 'l') ADVANCE(18);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (lookahead == '\n') ADVANCE(31);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_document_token2);
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == '\r') ADVANCE(2);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_NULL);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_loopCount);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_loopCount_token1);
      if (lookahead == ' ') ADVANCE(35);
      if (lookahead == ',') ADVANCE(40);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_loopCount_token1);
      if (lookahead == ' ') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_frames);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_introFrames);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_framelist_token1);
      if (lookahead == ' ') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_frameRepeat);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'x') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 31},
  [2] = {.lex_state = 29},
  [3] = {.lex_state = 29},
  [4] = {.lex_state = 29},
  [5] = {.lex_state = 29},
  [6] = {.lex_state = 29},
  [7] = {.lex_state = 29},
  [8] = {.lex_state = 29},
  [9] = {.lex_state = 29},
  [10] = {.lex_state = 29},
  [11] = {.lex_state = 29},
  [12] = {.lex_state = 29},
  [13] = {.lex_state = 29},
  [14] = {.lex_state = 29},
  [15] = {.lex_state = 29},
  [16] = {.lex_state = 29},
  [17] = {.lex_state = 29},
  [18] = {.lex_state = 29},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 29},
  [24] = {.lex_state = 29},
  [25] = {.lex_state = 29},
  [26] = {.lex_state = 29},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 29},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 29},
  [34] = {.lex_state = 29},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 29},
  [37] = {.lex_state = 29},
  [38] = {.lex_state = 29},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_document_token1] = ACTIONS(1),
    [aux_sym_document_token2] = ACTIONS(1),
    [aux_sym_loopCount_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_framelist_token1] = ACTIONS(1),
    [sym_frameRepeat] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(35),
    [aux_sym_document_token1] = ACTIONS(3),
  },
  [2] = {
    [sym_statement] = STATE(2),
    [sym_loopCount] = STATE(18),
    [sym_frames] = STATE(18),
    [sym_introFrames] = STATE(18),
    [aux_sym_document_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_document_token2] = ACTIONS(7),
    [anon_sym_NULL] = ACTIONS(7),
    [anon_sym_loopCount] = ACTIONS(10),
    [anon_sym_frames] = ACTIONS(13),
    [anon_sym_introFrames] = ACTIONS(16),
  },
  [3] = {
    [sym_statement] = STATE(4),
    [sym_loopCount] = STATE(18),
    [sym_frames] = STATE(18),
    [sym_introFrames] = STATE(18),
    [aux_sym_document_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(19),
    [aux_sym_document_token2] = ACTIONS(21),
    [anon_sym_NULL] = ACTIONS(21),
    [anon_sym_loopCount] = ACTIONS(23),
    [anon_sym_frames] = ACTIONS(25),
    [anon_sym_introFrames] = ACTIONS(27),
  },
  [4] = {
    [sym_statement] = STATE(2),
    [sym_loopCount] = STATE(18),
    [sym_frames] = STATE(18),
    [sym_introFrames] = STATE(18),
    [aux_sym_document_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(29),
    [aux_sym_document_token2] = ACTIONS(31),
    [anon_sym_NULL] = ACTIONS(31),
    [anon_sym_loopCount] = ACTIONS(23),
    [anon_sym_frames] = ACTIONS(25),
    [anon_sym_introFrames] = ACTIONS(27),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(35), 1,
      aux_sym_framelist_token1,
    STATE(5), 1,
      aux_sym_framelist_repeat1,
    ACTIONS(33), 6,
      ts_builtin_sym_end,
      aux_sym_document_token2,
      anon_sym_NULL,
      anon_sym_loopCount,
      anon_sym_frames,
      anon_sym_introFrames,
  [15] = 3,
    ACTIONS(40), 1,
      aux_sym_framelist_token1,
    STATE(5), 1,
      aux_sym_framelist_repeat1,
    ACTIONS(38), 6,
      ts_builtin_sym_end,
      aux_sym_document_token2,
      anon_sym_NULL,
      anon_sym_loopCount,
      anon_sym_frames,
      anon_sym_introFrames,
  [30] = 3,
    ACTIONS(40), 1,
      aux_sym_framelist_token1,
    STATE(6), 1,
      aux_sym_framelist_repeat1,
    ACTIONS(42), 6,
      ts_builtin_sym_end,
      aux_sym_document_token2,
      anon_sym_NULL,
      anon_sym_loopCount,
      anon_sym_frames,
      anon_sym_introFrames,
  [45] = 1,
    ACTIONS(33), 7,
      ts_builtin_sym_end,
      aux_sym_document_token2,
      anon_sym_NULL,
      anon_sym_loopCount,
      anon_sym_frames,
      anon_sym_introFrames,
      aux_sym_framelist_token1,
  [55] = 1,
    ACTIONS(44), 6,
      ts_builtin_sym_end,
      aux_sym_document_token2,
      anon_sym_NULL,
      anon_sym_loopCount,
      anon_sym_frames,
      anon_sym_introFrames,
  [64] = 1,
    ACTIONS(46), 6,
      ts_builtin_sym_end,
      aux_sym_document_token2,
      anon_sym_NULL,
      anon_sym_loopCount,
      anon_sym_frames,
      anon_sym_introFrames,
  [73] = 1,
    ACTIONS(48), 6,
      ts_builtin_sym_end,
      aux_sym_document_token2,
      anon_sym_NULL,
      anon_sym_loopCount,
      anon_sym_frames,
      anon_sym_introFrames,
  [82] = 1,
    ACTIONS(50), 6,
      ts_builtin_sym_end,
      aux_sym_document_token2,
      anon_sym_NULL,
      anon_sym_loopCount,
      anon_sym_frames,
      anon_sym_introFrames,
  [91] = 1,
    ACTIONS(52), 6,
      ts_builtin_sym_end,
      aux_sym_document_token2,
      anon_sym_NULL,
      anon_sym_loopCount,
      anon_sym_frames,
      anon_sym_introFrames,
  [100] = 1,
    ACTIONS(54), 6,
      ts_builtin_sym_end,
      aux_sym_document_token2,
      anon_sym_NULL,
      anon_sym_loopCount,
      anon_sym_frames,
      anon_sym_introFrames,
  [109] = 1,
    ACTIONS(56), 6,
      ts_builtin_sym_end,
      aux_sym_document_token2,
      anon_sym_NULL,
      anon_sym_loopCount,
      anon_sym_frames,
      anon_sym_introFrames,
  [118] = 1,
    ACTIONS(58), 6,
      ts_builtin_sym_end,
      aux_sym_document_token2,
      anon_sym_NULL,
      anon_sym_loopCount,
      anon_sym_frames,
      anon_sym_introFrames,
  [127] = 1,
    ACTIONS(60), 6,
      ts_builtin_sym_end,
      aux_sym_document_token2,
      anon_sym_NULL,
      anon_sym_loopCount,
      anon_sym_frames,
      anon_sym_introFrames,
  [136] = 1,
    ACTIONS(62), 6,
      ts_builtin_sym_end,
      aux_sym_document_token2,
      anon_sym_NULL,
      anon_sym_loopCount,
      anon_sym_frames,
      anon_sym_introFrames,
  [145] = 4,
    ACTIONS(64), 1,
      aux_sym_loopCount_token1,
    ACTIONS(66), 1,
      sym_frameRepeat,
    ACTIONS(68), 1,
      sym_integer,
    STATE(16), 1,
      sym_framelist,
  [158] = 4,
    ACTIONS(66), 1,
      sym_frameRepeat,
    ACTIONS(68), 1,
      sym_integer,
    ACTIONS(70), 1,
      aux_sym_loopCount_token1,
    STATE(17), 1,
      sym_framelist,
  [171] = 4,
    ACTIONS(66), 1,
      sym_frameRepeat,
    ACTIONS(68), 1,
      sym_integer,
    ACTIONS(72), 1,
      aux_sym_loopCount_token1,
    STATE(15), 1,
      sym_framelist,
  [184] = 4,
    ACTIONS(66), 1,
      sym_frameRepeat,
    ACTIONS(68), 1,
      sym_integer,
    ACTIONS(74), 1,
      aux_sym_loopCount_token1,
    STATE(13), 1,
      sym_framelist,
  [197] = 3,
    ACTIONS(66), 1,
      sym_frameRepeat,
    ACTIONS(68), 1,
      sym_integer,
    STATE(11), 1,
      sym_framelist,
  [207] = 3,
    ACTIONS(66), 1,
      sym_frameRepeat,
    ACTIONS(68), 1,
      sym_integer,
    STATE(10), 1,
      sym_framelist,
  [217] = 3,
    ACTIONS(66), 1,
      sym_frameRepeat,
    ACTIONS(68), 1,
      sym_integer,
    STATE(15), 1,
      sym_framelist,
  [227] = 3,
    ACTIONS(66), 1,
      sym_frameRepeat,
    ACTIONS(68), 1,
      sym_integer,
    STATE(13), 1,
      sym_framelist,
  [237] = 2,
    ACTIONS(76), 1,
      aux_sym_loopCount_token1,
    ACTIONS(78), 1,
      anon_sym_EQ,
  [244] = 2,
    ACTIONS(80), 1,
      aux_sym_loopCount_token1,
    ACTIONS(82), 1,
      sym_integer,
  [251] = 2,
    ACTIONS(84), 1,
      sym_frameRepeat,
    ACTIONS(86), 1,
      sym_integer,
  [258] = 2,
    ACTIONS(88), 1,
      aux_sym_loopCount_token1,
    ACTIONS(90), 1,
      sym_integer,
  [265] = 2,
    ACTIONS(92), 1,
      aux_sym_loopCount_token1,
    ACTIONS(94), 1,
      anon_sym_EQ,
  [272] = 2,
    ACTIONS(96), 1,
      aux_sym_loopCount_token1,
    ACTIONS(98), 1,
      anon_sym_EQ,
  [279] = 1,
    ACTIONS(100), 1,
      sym_integer,
  [283] = 1,
    ACTIONS(102), 1,
      anon_sym_EQ,
  [287] = 1,
    ACTIONS(104), 1,
      ts_builtin_sym_end,
  [291] = 1,
    ACTIONS(90), 1,
      sym_integer,
  [295] = 1,
    ACTIONS(106), 1,
      anon_sym_EQ,
  [299] = 1,
    ACTIONS(108), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 15,
  [SMALL_STATE(7)] = 30,
  [SMALL_STATE(8)] = 45,
  [SMALL_STATE(9)] = 55,
  [SMALL_STATE(10)] = 64,
  [SMALL_STATE(11)] = 73,
  [SMALL_STATE(12)] = 82,
  [SMALL_STATE(13)] = 91,
  [SMALL_STATE(14)] = 100,
  [SMALL_STATE(15)] = 109,
  [SMALL_STATE(16)] = 118,
  [SMALL_STATE(17)] = 127,
  [SMALL_STATE(18)] = 136,
  [SMALL_STATE(19)] = 145,
  [SMALL_STATE(20)] = 158,
  [SMALL_STATE(21)] = 171,
  [SMALL_STATE(22)] = 184,
  [SMALL_STATE(23)] = 197,
  [SMALL_STATE(24)] = 207,
  [SMALL_STATE(25)] = 217,
  [SMALL_STATE(26)] = 227,
  [SMALL_STATE(27)] = 237,
  [SMALL_STATE(28)] = 244,
  [SMALL_STATE(29)] = 251,
  [SMALL_STATE(30)] = 258,
  [SMALL_STATE(31)] = 265,
  [SMALL_STATE(32)] = 272,
  [SMALL_STATE(33)] = 279,
  [SMALL_STATE(34)] = 283,
  [SMALL_STATE(35)] = 287,
  [SMALL_STATE(36)] = 291,
  [SMALL_STATE(37)] = 295,
  [SMALL_STATE(38)] = 299,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [7] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [10] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(32),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(31),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(27),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_framelist_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_framelist_repeat1, 2), SHIFT_REPEAT(29),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_framelist, 2),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_framelist, 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loopCount, 4),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_introFrames, 5),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frames, 5),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loopCount, 5),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_introFrames, 4),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loopCount, 3),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frames, 4),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frames, 3),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_introFrames, 3),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [104] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
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

TS_PUBLIC const TSLanguage *tree_sitter_animationtxt() {
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
