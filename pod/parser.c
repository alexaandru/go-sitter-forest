#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 36
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 25
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 8
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 4

enum ts_symbol_identifiers {
  sym__blank_line = 1,
  sym_pod_command = 2,
  aux_sym_command_paragraph_token1 = 3,
  sym_command = 4,
  sym_cut_command = 5,
  sym__eol = 6,
  sym__start_command = 7,
  sym__start_plain = 8,
  sym__start_verbatim = 9,
  sym__content_plain = 10,
  sym__intseq_letter = 11,
  sym__intseq_start = 12,
  sym__intseq_end = 13,
  sym_pod = 14,
  sym_pod_paragraph = 15,
  sym_command_paragraph = 16,
  sym_plain_paragraph = 17,
  sym_verbatim_paragraph = 18,
  sym_cut_paragraph = 19,
  sym_content = 20,
  aux_sym__content = 21,
  sym_interior_sequence = 22,
  sym_sequence_letter = 23,
  aux_sym_pod_repeat1 = 24,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__blank_line] = "_blank_line",
  [sym_pod_command] = "pod_command",
  [aux_sym_command_paragraph_token1] = "command_paragraph_token1",
  [sym_command] = "command",
  [sym_cut_command] = "cut_command",
  [sym__eol] = "_eol",
  [sym__start_command] = "_start_command",
  [sym__start_plain] = "_start_plain",
  [sym__start_verbatim] = "_start_verbatim",
  [sym__content_plain] = "_content_plain",
  [sym__intseq_letter] = "_intseq_letter",
  [sym__intseq_start] = "<",
  [sym__intseq_end] = ">",
  [sym_pod] = "pod",
  [sym_pod_paragraph] = "pod_paragraph",
  [sym_command_paragraph] = "command_paragraph",
  [sym_plain_paragraph] = "plain_paragraph",
  [sym_verbatim_paragraph] = "verbatim_paragraph",
  [sym_cut_paragraph] = "cut_paragraph",
  [sym_content] = "content",
  [aux_sym__content] = "_content",
  [sym_interior_sequence] = "interior_sequence",
  [sym_sequence_letter] = "sequence_letter",
  [aux_sym_pod_repeat1] = "pod_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__blank_line] = sym__blank_line,
  [sym_pod_command] = sym_pod_command,
  [aux_sym_command_paragraph_token1] = aux_sym_command_paragraph_token1,
  [sym_command] = sym_command,
  [sym_cut_command] = sym_cut_command,
  [sym__eol] = sym__eol,
  [sym__start_command] = sym__start_command,
  [sym__start_plain] = sym__start_plain,
  [sym__start_verbatim] = sym__start_verbatim,
  [sym__content_plain] = sym__content_plain,
  [sym__intseq_letter] = sym__intseq_letter,
  [sym__intseq_start] = sym__intseq_start,
  [sym__intseq_end] = sym__intseq_end,
  [sym_pod] = sym_pod,
  [sym_pod_paragraph] = sym_pod_paragraph,
  [sym_command_paragraph] = sym_command_paragraph,
  [sym_plain_paragraph] = sym_plain_paragraph,
  [sym_verbatim_paragraph] = sym_verbatim_paragraph,
  [sym_cut_paragraph] = sym_cut_paragraph,
  [sym_content] = sym_content,
  [aux_sym__content] = aux_sym__content,
  [sym_interior_sequence] = sym_interior_sequence,
  [sym_sequence_letter] = sym_sequence_letter,
  [aux_sym_pod_repeat1] = aux_sym_pod_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__blank_line] = {
    .visible = false,
    .named = true,
  },
  [sym_pod_command] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_command_paragraph_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym_cut_command] = {
    .visible = true,
    .named = true,
  },
  [sym__eol] = {
    .visible = false,
    .named = true,
  },
  [sym__start_command] = {
    .visible = false,
    .named = true,
  },
  [sym__start_plain] = {
    .visible = false,
    .named = true,
  },
  [sym__start_verbatim] = {
    .visible = false,
    .named = true,
  },
  [sym__content_plain] = {
    .visible = false,
    .named = true,
  },
  [sym__intseq_letter] = {
    .visible = false,
    .named = true,
  },
  [sym__intseq_start] = {
    .visible = true,
    .named = false,
  },
  [sym__intseq_end] = {
    .visible = true,
    .named = false,
  },
  [sym_pod] = {
    .visible = true,
    .named = true,
  },
  [sym_pod_paragraph] = {
    .visible = true,
    .named = true,
  },
  [sym_command_paragraph] = {
    .visible = true,
    .named = true,
  },
  [sym_plain_paragraph] = {
    .visible = true,
    .named = true,
  },
  [sym_verbatim_paragraph] = {
    .visible = true,
    .named = true,
  },
  [sym_cut_paragraph] = {
    .visible = true,
    .named = true,
  },
  [sym_content] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__content] = {
    .visible = false,
    .named = false,
  },
  [sym_interior_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_letter] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_pod_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_command = 1,
  field_letter = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_command] = "command",
  [field_letter] = "letter",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_command, 1},
  [1] =
    {field_letter, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = sym_content,
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
  [6] = 4,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 9,
  [11] = 8,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 20,
  [22] = 19,
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
  [34] = 29,
  [35] = 23,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      if (lookahead == '=') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == 'c') ADVANCE(11);
      if (lookahead == 'p') ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 3:
      if (eof) ADVANCE(4);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(3);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym__blank_line);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_pod_command);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(12);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(aux_sym_command_paragraph_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_command);
      if (lookahead == 'd') ADVANCE(6);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(12);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_command);
      if (lookahead == 'o') ADVANCE(8);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(12);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_command);
      if (lookahead == 't') ADVANCE(13);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(12);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_command);
      if (lookahead == 'u') ADVANCE(10);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(12);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_command);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_cut_command);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(12);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 3, .external_lex_state = 2},
  [2] = {.lex_state = 3, .external_lex_state = 2},
  [3] = {.lex_state = 3, .external_lex_state = 2},
  [4] = {.lex_state = 0, .external_lex_state = 3},
  [5] = {.lex_state = 0, .external_lex_state = 4},
  [6] = {.lex_state = 0, .external_lex_state = 3},
  [7] = {.lex_state = 0, .external_lex_state = 5},
  [8] = {.lex_state = 0, .external_lex_state = 4},
  [9] = {.lex_state = 0, .external_lex_state = 4},
  [10] = {.lex_state = 0, .external_lex_state = 3},
  [11] = {.lex_state = 0, .external_lex_state = 3},
  [12] = {.lex_state = 3, .external_lex_state = 2},
  [13] = {.lex_state = 3, .external_lex_state = 2},
  [14] = {.lex_state = 3, .external_lex_state = 2},
  [15] = {.lex_state = 3, .external_lex_state = 2},
  [16] = {.lex_state = 3, .external_lex_state = 2},
  [17] = {.lex_state = 3, .external_lex_state = 2},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0, .external_lex_state = 4},
  [20] = {.lex_state = 0, .external_lex_state = 4},
  [21] = {.lex_state = 0, .external_lex_state = 3},
  [22] = {.lex_state = 0, .external_lex_state = 3},
  [23] = {.lex_state = 0, .external_lex_state = 6},
  [24] = {.lex_state = 0, .external_lex_state = 7},
  [25] = {.lex_state = 0, .external_lex_state = 7},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 0, .external_lex_state = 7},
  [29] = {.lex_state = 0, .external_lex_state = 8},
  [30] = {.lex_state = 0, .external_lex_state = 7},
  [31] = {.lex_state = 0, .external_lex_state = 6},
  [32] = {.lex_state = 0, .external_lex_state = 7},
  [33] = {.lex_state = 0, .external_lex_state = 9},
  [34] = {.lex_state = 0, .external_lex_state = 8},
  [35] = {.lex_state = 0, .external_lex_state = 6},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_pod_command] = ACTIONS(1),
    [sym_command] = ACTIONS(1),
    [sym_cut_command] = ACTIONS(1),
    [sym__eol] = ACTIONS(1),
    [sym__start_command] = ACTIONS(1),
    [sym__start_plain] = ACTIONS(1),
    [sym__start_verbatim] = ACTIONS(1),
    [sym__content_plain] = ACTIONS(1),
    [sym__intseq_letter] = ACTIONS(1),
    [sym__intseq_start] = ACTIONS(1),
    [sym__intseq_end] = ACTIONS(1),
  },
  [1] = {
    [sym_pod] = STATE(26),
    [sym_pod_paragraph] = STATE(3),
    [sym_command_paragraph] = STATE(3),
    [sym_plain_paragraph] = STATE(3),
    [sym_verbatim_paragraph] = STATE(3),
    [sym_cut_paragraph] = STATE(3),
    [aux_sym_pod_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(5),
    [sym__start_command] = ACTIONS(7),
    [sym__start_plain] = ACTIONS(9),
    [sym__start_verbatim] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      sym__blank_line,
    ACTIONS(18), 1,
      sym__start_command,
    ACTIONS(21), 1,
      sym__start_plain,
    ACTIONS(24), 1,
      sym__start_verbatim,
    STATE(2), 6,
      sym_pod_paragraph,
      sym_command_paragraph,
      sym_plain_paragraph,
      sym_verbatim_paragraph,
      sym_cut_paragraph,
      aux_sym_pod_repeat1,
  [24] = 6,
    ACTIONS(7), 1,
      sym__start_command,
    ACTIONS(9), 1,
      sym__start_plain,
    ACTIONS(11), 1,
      sym__start_verbatim,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      sym__blank_line,
    STATE(2), 6,
      sym_pod_paragraph,
      sym_command_paragraph,
      sym_plain_paragraph,
      sym_verbatim_paragraph,
      sym_cut_paragraph,
      aux_sym_pod_repeat1,
  [48] = 6,
    ACTIONS(31), 1,
      sym__content_plain,
    ACTIONS(33), 1,
      sym__intseq_letter,
    ACTIONS(35), 1,
      sym__intseq_end,
    STATE(29), 1,
      sym_content,
    STATE(35), 1,
      sym_sequence_letter,
    STATE(10), 2,
      aux_sym__content,
      sym_interior_sequence,
  [68] = 6,
    ACTIONS(33), 1,
      sym__intseq_letter,
    ACTIONS(37), 1,
      sym__eol,
    ACTIONS(39), 1,
      sym__content_plain,
    STATE(23), 1,
      sym_sequence_letter,
    STATE(32), 1,
      sym_content,
    STATE(9), 2,
      aux_sym__content,
      sym_interior_sequence,
  [88] = 6,
    ACTIONS(31), 1,
      sym__content_plain,
    ACTIONS(33), 1,
      sym__intseq_letter,
    ACTIONS(41), 1,
      sym__intseq_end,
    STATE(34), 1,
      sym_content,
    STATE(35), 1,
      sym_sequence_letter,
    STATE(10), 2,
      aux_sym__content,
      sym_interior_sequence,
  [108] = 5,
    ACTIONS(33), 1,
      sym__intseq_letter,
    ACTIONS(39), 1,
      sym__content_plain,
    STATE(23), 1,
      sym_sequence_letter,
    STATE(30), 1,
      sym_content,
    STATE(9), 2,
      aux_sym__content,
      sym_interior_sequence,
  [125] = 5,
    ACTIONS(43), 1,
      sym__eol,
    ACTIONS(45), 1,
      sym__content_plain,
    ACTIONS(48), 1,
      sym__intseq_letter,
    STATE(23), 1,
      sym_sequence_letter,
    STATE(8), 2,
      aux_sym__content,
      sym_interior_sequence,
  [142] = 5,
    ACTIONS(33), 1,
      sym__intseq_letter,
    ACTIONS(51), 1,
      sym__eol,
    ACTIONS(53), 1,
      sym__content_plain,
    STATE(23), 1,
      sym_sequence_letter,
    STATE(8), 2,
      aux_sym__content,
      sym_interior_sequence,
  [159] = 5,
    ACTIONS(33), 1,
      sym__intseq_letter,
    ACTIONS(51), 1,
      sym__intseq_end,
    ACTIONS(55), 1,
      sym__content_plain,
    STATE(35), 1,
      sym_sequence_letter,
    STATE(11), 2,
      aux_sym__content,
      sym_interior_sequence,
  [176] = 5,
    ACTIONS(43), 1,
      sym__intseq_end,
    ACTIONS(48), 1,
      sym__intseq_letter,
    ACTIONS(57), 1,
      sym__content_plain,
    STATE(35), 1,
      sym_sequence_letter,
    STATE(11), 2,
      aux_sym__content,
      sym_interior_sequence,
  [193] = 1,
    ACTIONS(60), 5,
      sym__start_command,
      sym__start_plain,
      sym__start_verbatim,
      ts_builtin_sym_end,
      sym__blank_line,
  [201] = 1,
    ACTIONS(62), 5,
      sym__start_command,
      sym__start_plain,
      sym__start_verbatim,
      ts_builtin_sym_end,
      sym__blank_line,
  [209] = 1,
    ACTIONS(64), 5,
      sym__start_command,
      sym__start_plain,
      sym__start_verbatim,
      ts_builtin_sym_end,
      sym__blank_line,
  [217] = 1,
    ACTIONS(66), 5,
      sym__start_command,
      sym__start_plain,
      sym__start_verbatim,
      ts_builtin_sym_end,
      sym__blank_line,
  [225] = 1,
    ACTIONS(68), 5,
      sym__start_command,
      sym__start_plain,
      sym__start_verbatim,
      ts_builtin_sym_end,
      sym__blank_line,
  [233] = 1,
    ACTIONS(70), 5,
      sym__start_command,
      sym__start_plain,
      sym__start_verbatim,
      ts_builtin_sym_end,
      sym__blank_line,
  [241] = 3,
    ACTIONS(72), 1,
      sym_pod_command,
    ACTIONS(74), 1,
      sym_command,
    ACTIONS(76), 1,
      sym_cut_command,
  [251] = 1,
    ACTIONS(78), 3,
      sym__eol,
      sym__content_plain,
      sym__intseq_letter,
  [257] = 1,
    ACTIONS(80), 3,
      sym__eol,
      sym__content_plain,
      sym__intseq_letter,
  [263] = 1,
    ACTIONS(80), 3,
      sym__content_plain,
      sym__intseq_letter,
      sym__intseq_end,
  [269] = 1,
    ACTIONS(78), 3,
      sym__content_plain,
      sym__intseq_letter,
      sym__intseq_end,
  [275] = 1,
    ACTIONS(82), 1,
      sym__intseq_start,
  [279] = 1,
    ACTIONS(84), 1,
      sym__eol,
  [283] = 1,
    ACTIONS(86), 1,
      sym__eol,
  [287] = 1,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
  [291] = 1,
    ACTIONS(90), 1,
      aux_sym_command_paragraph_token1,
  [295] = 1,
    ACTIONS(92), 1,
      sym__eol,
  [299] = 1,
    ACTIONS(94), 1,
      sym__intseq_end,
  [303] = 1,
    ACTIONS(96), 1,
      sym__eol,
  [307] = 1,
    ACTIONS(98), 1,
      sym__intseq_start,
  [311] = 1,
    ACTIONS(100), 1,
      sym__eol,
  [315] = 1,
    ACTIONS(102), 1,
      sym__content_plain,
  [319] = 1,
    ACTIONS(104), 1,
      sym__intseq_end,
  [323] = 1,
    ACTIONS(106), 1,
      sym__intseq_start,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 24,
  [SMALL_STATE(4)] = 48,
  [SMALL_STATE(5)] = 68,
  [SMALL_STATE(6)] = 88,
  [SMALL_STATE(7)] = 108,
  [SMALL_STATE(8)] = 125,
  [SMALL_STATE(9)] = 142,
  [SMALL_STATE(10)] = 159,
  [SMALL_STATE(11)] = 176,
  [SMALL_STATE(12)] = 193,
  [SMALL_STATE(13)] = 201,
  [SMALL_STATE(14)] = 209,
  [SMALL_STATE(15)] = 217,
  [SMALL_STATE(16)] = 225,
  [SMALL_STATE(17)] = 233,
  [SMALL_STATE(18)] = 241,
  [SMALL_STATE(19)] = 251,
  [SMALL_STATE(20)] = 257,
  [SMALL_STATE(21)] = 263,
  [SMALL_STATE(22)] = 269,
  [SMALL_STATE(23)] = 275,
  [SMALL_STATE(24)] = 279,
  [SMALL_STATE(25)] = 283,
  [SMALL_STATE(26)] = 287,
  [SMALL_STATE(27)] = 291,
  [SMALL_STATE(28)] = 295,
  [SMALL_STATE(29)] = 299,
  [SMALL_STATE(30)] = 303,
  [SMALL_STATE(31)] = 307,
  [SMALL_STATE(32)] = 311,
  [SMALL_STATE(33)] = 315,
  [SMALL_STATE(34)] = 319,
  [SMALL_STATE(35)] = 323,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pod, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pod_repeat1, 2, 0, 0),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pod_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pod_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pod_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pod_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pod, 1, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content, 2, 0, 0),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content, 2, 0, 0), SHIFT_REPEAT(8),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content, 2, 0, 0), SHIFT_REPEAT(31),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content, 2, 0, 0), SHIFT_REPEAT(11),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pod_paragraph, 3, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cut_paragraph, 3, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_paragraph, 3, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbatim_paragraph, 3, 0, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_paragraph, 4, 0, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_paragraph, 5, 0, 2),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interior_sequence, 3, 0, 3),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interior_sequence, 4, 0, 3),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [88] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_letter, 1, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__eol = 0,
  ts_external_token__start_command = 1,
  ts_external_token__start_plain = 2,
  ts_external_token__start_verbatim = 3,
  ts_external_token__content_plain = 4,
  ts_external_token__intseq_letter = 5,
  ts_external_token__intseq_start = 6,
  ts_external_token__intseq_end = 7,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__eol] = sym__eol,
  [ts_external_token__start_command] = sym__start_command,
  [ts_external_token__start_plain] = sym__start_plain,
  [ts_external_token__start_verbatim] = sym__start_verbatim,
  [ts_external_token__content_plain] = sym__content_plain,
  [ts_external_token__intseq_letter] = sym__intseq_letter,
  [ts_external_token__intseq_start] = sym__intseq_start,
  [ts_external_token__intseq_end] = sym__intseq_end,
};

static const bool ts_external_scanner_states[10][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__eol] = true,
    [ts_external_token__start_command] = true,
    [ts_external_token__start_plain] = true,
    [ts_external_token__start_verbatim] = true,
    [ts_external_token__content_plain] = true,
    [ts_external_token__intseq_letter] = true,
    [ts_external_token__intseq_start] = true,
    [ts_external_token__intseq_end] = true,
  },
  [2] = {
    [ts_external_token__start_command] = true,
    [ts_external_token__start_plain] = true,
    [ts_external_token__start_verbatim] = true,
  },
  [3] = {
    [ts_external_token__content_plain] = true,
    [ts_external_token__intseq_letter] = true,
    [ts_external_token__intseq_end] = true,
  },
  [4] = {
    [ts_external_token__eol] = true,
    [ts_external_token__content_plain] = true,
    [ts_external_token__intseq_letter] = true,
  },
  [5] = {
    [ts_external_token__content_plain] = true,
    [ts_external_token__intseq_letter] = true,
  },
  [6] = {
    [ts_external_token__intseq_start] = true,
  },
  [7] = {
    [ts_external_token__eol] = true,
  },
  [8] = {
    [ts_external_token__intseq_end] = true,
  },
  [9] = {
    [ts_external_token__content_plain] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_pod_external_scanner_create(void);
void tree_sitter_pod_external_scanner_destroy(void *);
bool tree_sitter_pod_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_pod_external_scanner_serialize(void *, char *);
void tree_sitter_pod_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_pod(void) {
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
      tree_sitter_pod_external_scanner_create,
      tree_sitter_pod_external_scanner_destroy,
      tree_sitter_pod_external_scanner_scan,
      tree_sitter_pod_external_scanner_serialize,
      tree_sitter_pod_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
