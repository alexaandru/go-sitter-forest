#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 79
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 35
#define ALIAS_COUNT 0
#define TOKEN_COUNT 4
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  aux_sym_source_file_token1 = 1,
  sym_zero = 2,
  sym_one = 3,
  sym_source_file = 4,
  sym_label = 5,
  sym_instruction = 6,
  sym_nop = 7,
  sym_prn = 8,
  sym_pr1 = 9,
  sym_red = 10,
  sym_r3d = 11,
  sym_blo = 12,
  sym_sbm = 13,
  sym_p0p = 14,
  sym_dpl = 15,
  sym_srn = 16,
  sym_mrg = 17,
  sym_add = 18,
  sym_sub = 19,
  sym_mul = 20,
  sym_div = 21,
  sym_cnt = 22,
  sym_lbl = 23,
  sym_jmp = 24,
  sym_eql = 25,
  sym_lss = 26,
  sym_gr8 = 27,
  sym_trm = 28,
  sym_lib = 29,
  sym_jro = 30,
  sym_argument_8bit = 31,
  sym_argument_5bit = 32,
  sym_binary_token = 33,
  aux_sym_source_file_repeat1 = 34,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_source_file_token1] = "source_file_token1",
  [sym_zero] = "zero",
  [sym_one] = "one",
  [sym_source_file] = "source_file",
  [sym_label] = "label",
  [sym_instruction] = "instruction",
  [sym_nop] = "nop",
  [sym_prn] = "prn",
  [sym_pr1] = "pr1",
  [sym_red] = "red",
  [sym_r3d] = "r3d",
  [sym_blo] = "blo",
  [sym_sbm] = "sbm",
  [sym_p0p] = "p0p",
  [sym_dpl] = "dpl",
  [sym_srn] = "srn",
  [sym_mrg] = "mrg",
  [sym_add] = "add",
  [sym_sub] = "sub",
  [sym_mul] = "mul",
  [sym_div] = "div",
  [sym_cnt] = "cnt",
  [sym_lbl] = "lbl",
  [sym_jmp] = "jmp",
  [sym_eql] = "eql",
  [sym_lss] = "lss",
  [sym_gr8] = "gr8",
  [sym_trm] = "trm",
  [sym_lib] = "lib",
  [sym_jro] = "jro",
  [sym_argument_8bit] = "argument_8bit",
  [sym_argument_5bit] = "argument_5bit",
  [sym_binary_token] = "binary_token",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_source_file_token1] = aux_sym_source_file_token1,
  [sym_zero] = sym_zero,
  [sym_one] = sym_one,
  [sym_source_file] = sym_source_file,
  [sym_label] = sym_label,
  [sym_instruction] = sym_instruction,
  [sym_nop] = sym_nop,
  [sym_prn] = sym_prn,
  [sym_pr1] = sym_pr1,
  [sym_red] = sym_red,
  [sym_r3d] = sym_r3d,
  [sym_blo] = sym_blo,
  [sym_sbm] = sym_sbm,
  [sym_p0p] = sym_p0p,
  [sym_dpl] = sym_dpl,
  [sym_srn] = sym_srn,
  [sym_mrg] = sym_mrg,
  [sym_add] = sym_add,
  [sym_sub] = sym_sub,
  [sym_mul] = sym_mul,
  [sym_div] = sym_div,
  [sym_cnt] = sym_cnt,
  [sym_lbl] = sym_lbl,
  [sym_jmp] = sym_jmp,
  [sym_eql] = sym_eql,
  [sym_lss] = sym_lss,
  [sym_gr8] = sym_gr8,
  [sym_trm] = sym_trm,
  [sym_lib] = sym_lib,
  [sym_jro] = sym_jro,
  [sym_argument_8bit] = sym_argument_8bit,
  [sym_argument_5bit] = sym_argument_5bit,
  [sym_binary_token] = sym_binary_token,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_zero] = {
    .visible = true,
    .named = true,
  },
  [sym_one] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_nop] = {
    .visible = true,
    .named = true,
  },
  [sym_prn] = {
    .visible = true,
    .named = true,
  },
  [sym_pr1] = {
    .visible = true,
    .named = true,
  },
  [sym_red] = {
    .visible = true,
    .named = true,
  },
  [sym_r3d] = {
    .visible = true,
    .named = true,
  },
  [sym_blo] = {
    .visible = true,
    .named = true,
  },
  [sym_sbm] = {
    .visible = true,
    .named = true,
  },
  [sym_p0p] = {
    .visible = true,
    .named = true,
  },
  [sym_dpl] = {
    .visible = true,
    .named = true,
  },
  [sym_srn] = {
    .visible = true,
    .named = true,
  },
  [sym_mrg] = {
    .visible = true,
    .named = true,
  },
  [sym_add] = {
    .visible = true,
    .named = true,
  },
  [sym_sub] = {
    .visible = true,
    .named = true,
  },
  [sym_mul] = {
    .visible = true,
    .named = true,
  },
  [sym_div] = {
    .visible = true,
    .named = true,
  },
  [sym_cnt] = {
    .visible = true,
    .named = true,
  },
  [sym_lbl] = {
    .visible = true,
    .named = true,
  },
  [sym_jmp] = {
    .visible = true,
    .named = true,
  },
  [sym_eql] = {
    .visible = true,
    .named = true,
  },
  [sym_lss] = {
    .visible = true,
    .named = true,
  },
  [sym_gr8] = {
    .visible = true,
    .named = true,
  },
  [sym_trm] = {
    .visible = true,
    .named = true,
  },
  [sym_lib] = {
    .visible = true,
    .named = true,
  },
  [sym_jro] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_8bit] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_5bit] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_token] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_arg = 1,
  field_op = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_arg] = "arg",
  [field_op] = "op",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_op, 0},
  [1] =
    {field_arg, 5},
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
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(7);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(5);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1);
      if (lookahead != 0) SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(10);
      END_STATE();
    case 2:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(8);
      END_STATE();
    case 3:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(9);
      END_STATE();
    case 4:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(2);
      END_STATE();
    case 6:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(3);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_zero);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_one);
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
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
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
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
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
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_source_file_token1] = ACTIONS(1),
    [sym_zero] = ACTIONS(1),
    [sym_one] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(76),
    [aux_sym_source_file_token1] = ACTIONS(3),
  },
  [2] = {
    [sym_label] = STATE(4),
    [sym_instruction] = STATE(4),
    [sym_nop] = STATE(16),
    [sym_prn] = STATE(16),
    [sym_pr1] = STATE(16),
    [sym_red] = STATE(16),
    [sym_r3d] = STATE(16),
    [sym_blo] = STATE(16),
    [sym_sbm] = STATE(16),
    [sym_p0p] = STATE(16),
    [sym_dpl] = STATE(16),
    [sym_srn] = STATE(16),
    [sym_mrg] = STATE(16),
    [sym_add] = STATE(16),
    [sym_sub] = STATE(16),
    [sym_mul] = STATE(16),
    [sym_div] = STATE(16),
    [sym_cnt] = STATE(16),
    [sym_lbl] = STATE(17),
    [sym_jmp] = STATE(16),
    [sym_eql] = STATE(16),
    [sym_lss] = STATE(16),
    [sym_gr8] = STATE(16),
    [sym_trm] = STATE(16),
    [sym_lib] = STATE(16),
    [sym_jro] = STATE(16),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_zero] = ACTIONS(7),
    [sym_one] = ACTIONS(9),
  },
  [3] = {
    [sym_label] = STATE(3),
    [sym_instruction] = STATE(3),
    [sym_nop] = STATE(16),
    [sym_prn] = STATE(16),
    [sym_pr1] = STATE(16),
    [sym_red] = STATE(16),
    [sym_r3d] = STATE(16),
    [sym_blo] = STATE(16),
    [sym_sbm] = STATE(16),
    [sym_p0p] = STATE(16),
    [sym_dpl] = STATE(16),
    [sym_srn] = STATE(16),
    [sym_mrg] = STATE(16),
    [sym_add] = STATE(16),
    [sym_sub] = STATE(16),
    [sym_mul] = STATE(16),
    [sym_div] = STATE(16),
    [sym_cnt] = STATE(16),
    [sym_lbl] = STATE(17),
    [sym_jmp] = STATE(16),
    [sym_eql] = STATE(16),
    [sym_lss] = STATE(16),
    [sym_gr8] = STATE(16),
    [sym_trm] = STATE(16),
    [sym_lib] = STATE(16),
    [sym_jro] = STATE(16),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(11),
    [sym_zero] = ACTIONS(13),
    [sym_one] = ACTIONS(16),
  },
  [4] = {
    [sym_label] = STATE(3),
    [sym_instruction] = STATE(3),
    [sym_nop] = STATE(16),
    [sym_prn] = STATE(16),
    [sym_pr1] = STATE(16),
    [sym_red] = STATE(16),
    [sym_r3d] = STATE(16),
    [sym_blo] = STATE(16),
    [sym_sbm] = STATE(16),
    [sym_p0p] = STATE(16),
    [sym_dpl] = STATE(16),
    [sym_srn] = STATE(16),
    [sym_mrg] = STATE(16),
    [sym_add] = STATE(16),
    [sym_sub] = STATE(16),
    [sym_mul] = STATE(16),
    [sym_div] = STATE(16),
    [sym_cnt] = STATE(16),
    [sym_lbl] = STATE(17),
    [sym_jmp] = STATE(16),
    [sym_eql] = STATE(16),
    [sym_lss] = STATE(16),
    [sym_gr8] = STATE(16),
    [sym_trm] = STATE(16),
    [sym_lib] = STATE(16),
    [sym_jro] = STATE(16),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym_zero] = ACTIONS(7),
    [sym_one] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    STATE(32), 1,
      sym_argument_8bit,
    STATE(33), 1,
      sym_binary_token,
    ACTIONS(21), 2,
      sym_zero,
      sym_one,
  [11] = 3,
    STATE(34), 1,
      sym_argument_5bit,
    STATE(35), 1,
      sym_binary_token,
    ACTIONS(21), 2,
      sym_zero,
      sym_one,
  [22] = 3,
    STATE(35), 1,
      sym_binary_token,
    STATE(36), 1,
      sym_argument_5bit,
    ACTIONS(21), 2,
      sym_zero,
      sym_one,
  [33] = 3,
    STATE(35), 1,
      sym_binary_token,
    STATE(37), 1,
      sym_argument_5bit,
    ACTIONS(21), 2,
      sym_zero,
      sym_one,
  [44] = 3,
    STATE(35), 1,
      sym_binary_token,
    STATE(38), 1,
      sym_argument_5bit,
    ACTIONS(21), 2,
      sym_zero,
      sym_one,
  [55] = 1,
    ACTIONS(23), 3,
      ts_builtin_sym_end,
      sym_zero,
      sym_one,
  [61] = 1,
    ACTIONS(25), 3,
      ts_builtin_sym_end,
      sym_zero,
      sym_one,
  [67] = 1,
    ACTIONS(27), 3,
      ts_builtin_sym_end,
      sym_zero,
      sym_one,
  [73] = 1,
    ACTIONS(29), 3,
      ts_builtin_sym_end,
      sym_zero,
      sym_one,
  [79] = 1,
    ACTIONS(31), 3,
      ts_builtin_sym_end,
      sym_zero,
      sym_one,
  [85] = 1,
    ACTIONS(33), 3,
      ts_builtin_sym_end,
      sym_zero,
      sym_one,
  [91] = 1,
    ACTIONS(35), 3,
      ts_builtin_sym_end,
      sym_zero,
      sym_one,
  [97] = 1,
    ACTIONS(37), 3,
      ts_builtin_sym_end,
      sym_zero,
      sym_one,
  [103] = 1,
    ACTIONS(39), 3,
      ts_builtin_sym_end,
      sym_zero,
      sym_one,
  [109] = 1,
    ACTIONS(41), 3,
      ts_builtin_sym_end,
      sym_zero,
      sym_one,
  [115] = 1,
    ACTIONS(43), 3,
      ts_builtin_sym_end,
      sym_zero,
      sym_one,
  [121] = 1,
    ACTIONS(45), 3,
      ts_builtin_sym_end,
      sym_zero,
      sym_one,
  [127] = 1,
    ACTIONS(47), 3,
      ts_builtin_sym_end,
      sym_zero,
      sym_one,
  [133] = 1,
    ACTIONS(49), 3,
      ts_builtin_sym_end,
      sym_zero,
      sym_one,
  [139] = 1,
    ACTIONS(51), 3,
      ts_builtin_sym_end,
      sym_zero,
      sym_one,
  [145] = 1,
    ACTIONS(53), 3,
      ts_builtin_sym_end,
      sym_zero,
      sym_one,
  [151] = 1,
    ACTIONS(55), 3,
      ts_builtin_sym_end,
      sym_zero,
      sym_one,
  [157] = 1,
    ACTIONS(57), 3,
      ts_builtin_sym_end,
      sym_zero,
      sym_one,
  [163] = 1,
    ACTIONS(59), 3,
      ts_builtin_sym_end,
      sym_zero,
      sym_one,
  [169] = 1,
    ACTIONS(61), 3,
      ts_builtin_sym_end,
      sym_zero,
      sym_one,
  [175] = 1,
    ACTIONS(63), 3,
      ts_builtin_sym_end,
      sym_zero,
      sym_one,
  [181] = 1,
    ACTIONS(65), 3,
      ts_builtin_sym_end,
      sym_zero,
      sym_one,
  [187] = 1,
    ACTIONS(67), 3,
      ts_builtin_sym_end,
      sym_zero,
      sym_one,
  [193] = 2,
    STATE(39), 1,
      sym_binary_token,
    ACTIONS(21), 2,
      sym_zero,
      sym_one,
  [201] = 1,
    ACTIONS(69), 3,
      ts_builtin_sym_end,
      sym_zero,
      sym_one,
  [207] = 2,
    STATE(40), 1,
      sym_binary_token,
    ACTIONS(21), 2,
      sym_zero,
      sym_one,
  [215] = 1,
    ACTIONS(71), 3,
      ts_builtin_sym_end,
      sym_zero,
      sym_one,
  [221] = 1,
    ACTIONS(73), 3,
      ts_builtin_sym_end,
      sym_zero,
      sym_one,
  [227] = 1,
    ACTIONS(75), 3,
      ts_builtin_sym_end,
      sym_zero,
      sym_one,
  [233] = 2,
    STATE(41), 1,
      sym_binary_token,
    ACTIONS(21), 2,
      sym_zero,
      sym_one,
  [241] = 2,
    STATE(42), 1,
      sym_binary_token,
    ACTIONS(21), 2,
      sym_zero,
      sym_one,
  [249] = 2,
    STATE(43), 1,
      sym_binary_token,
    ACTIONS(21), 2,
      sym_zero,
      sym_one,
  [257] = 2,
    STATE(44), 1,
      sym_binary_token,
    ACTIONS(21), 2,
      sym_zero,
      sym_one,
  [265] = 2,
    STATE(45), 1,
      sym_binary_token,
    ACTIONS(21), 2,
      sym_zero,
      sym_one,
  [273] = 2,
    STATE(46), 1,
      sym_binary_token,
    ACTIONS(21), 2,
      sym_zero,
      sym_one,
  [281] = 2,
    STATE(47), 1,
      sym_binary_token,
    ACTIONS(21), 2,
      sym_zero,
      sym_one,
  [289] = 1,
    ACTIONS(77), 3,
      ts_builtin_sym_end,
      sym_zero,
      sym_one,
  [295] = 2,
    STATE(48), 1,
      sym_binary_token,
    ACTIONS(21), 2,
      sym_zero,
      sym_one,
  [303] = 2,
    STATE(11), 1,
      sym_binary_token,
    ACTIONS(21), 2,
      sym_zero,
      sym_one,
  [311] = 1,
    ACTIONS(79), 3,
      ts_builtin_sym_end,
      sym_zero,
      sym_one,
  [317] = 2,
    ACTIONS(81), 1,
      sym_zero,
    ACTIONS(83), 1,
      sym_one,
  [324] = 2,
    ACTIONS(85), 1,
      sym_zero,
    ACTIONS(87), 1,
      sym_one,
  [331] = 2,
    ACTIONS(89), 1,
      sym_zero,
    ACTIONS(91), 1,
      sym_one,
  [338] = 2,
    ACTIONS(93), 1,
      sym_zero,
    ACTIONS(95), 1,
      sym_one,
  [345] = 2,
    ACTIONS(97), 1,
      sym_zero,
    ACTIONS(99), 1,
      sym_one,
  [352] = 2,
    ACTIONS(101), 1,
      sym_zero,
    ACTIONS(103), 1,
      sym_one,
  [359] = 2,
    ACTIONS(105), 1,
      sym_zero,
    ACTIONS(107), 1,
      sym_one,
  [366] = 2,
    ACTIONS(109), 1,
      sym_zero,
    ACTIONS(111), 1,
      sym_one,
  [373] = 2,
    ACTIONS(113), 1,
      sym_zero,
    ACTIONS(115), 1,
      sym_one,
  [380] = 2,
    ACTIONS(117), 1,
      sym_zero,
    ACTIONS(119), 1,
      sym_one,
  [387] = 2,
    ACTIONS(121), 1,
      sym_zero,
    ACTIONS(123), 1,
      sym_one,
  [394] = 2,
    ACTIONS(125), 1,
      sym_zero,
    ACTIONS(127), 1,
      sym_one,
  [401] = 2,
    ACTIONS(129), 1,
      sym_zero,
    ACTIONS(131), 1,
      sym_one,
  [408] = 2,
    ACTIONS(133), 1,
      sym_zero,
    ACTIONS(135), 1,
      sym_one,
  [415] = 2,
    ACTIONS(137), 1,
      sym_zero,
    ACTIONS(139), 1,
      sym_one,
  [422] = 2,
    ACTIONS(141), 1,
      sym_zero,
    ACTIONS(143), 1,
      sym_one,
  [429] = 2,
    ACTIONS(145), 1,
      sym_zero,
    ACTIONS(147), 1,
      sym_one,
  [436] = 2,
    ACTIONS(149), 1,
      sym_zero,
    ACTIONS(151), 1,
      sym_one,
  [443] = 2,
    ACTIONS(153), 1,
      sym_zero,
    ACTIONS(155), 1,
      sym_one,
  [450] = 2,
    ACTIONS(157), 1,
      sym_zero,
    ACTIONS(159), 1,
      sym_one,
  [457] = 2,
    ACTIONS(161), 1,
      sym_zero,
    ACTIONS(163), 1,
      sym_one,
  [464] = 2,
    ACTIONS(165), 1,
      sym_zero,
    ACTIONS(167), 1,
      sym_one,
  [471] = 1,
    ACTIONS(169), 1,
      sym_zero,
  [475] = 1,
    ACTIONS(171), 1,
      sym_one,
  [479] = 1,
    ACTIONS(173), 1,
      sym_zero,
  [483] = 1,
    ACTIONS(175), 1,
      sym_one,
  [487] = 1,
    ACTIONS(177), 1,
      ts_builtin_sym_end,
  [491] = 1,
    ACTIONS(179), 1,
      sym_zero,
  [495] = 1,
    ACTIONS(181), 1,
      sym_one,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 11,
  [SMALL_STATE(7)] = 22,
  [SMALL_STATE(8)] = 33,
  [SMALL_STATE(9)] = 44,
  [SMALL_STATE(10)] = 55,
  [SMALL_STATE(11)] = 61,
  [SMALL_STATE(12)] = 67,
  [SMALL_STATE(13)] = 73,
  [SMALL_STATE(14)] = 79,
  [SMALL_STATE(15)] = 85,
  [SMALL_STATE(16)] = 91,
  [SMALL_STATE(17)] = 97,
  [SMALL_STATE(18)] = 103,
  [SMALL_STATE(19)] = 109,
  [SMALL_STATE(20)] = 115,
  [SMALL_STATE(21)] = 121,
  [SMALL_STATE(22)] = 127,
  [SMALL_STATE(23)] = 133,
  [SMALL_STATE(24)] = 139,
  [SMALL_STATE(25)] = 145,
  [SMALL_STATE(26)] = 151,
  [SMALL_STATE(27)] = 157,
  [SMALL_STATE(28)] = 163,
  [SMALL_STATE(29)] = 169,
  [SMALL_STATE(30)] = 175,
  [SMALL_STATE(31)] = 181,
  [SMALL_STATE(32)] = 187,
  [SMALL_STATE(33)] = 193,
  [SMALL_STATE(34)] = 201,
  [SMALL_STATE(35)] = 207,
  [SMALL_STATE(36)] = 215,
  [SMALL_STATE(37)] = 221,
  [SMALL_STATE(38)] = 227,
  [SMALL_STATE(39)] = 233,
  [SMALL_STATE(40)] = 241,
  [SMALL_STATE(41)] = 249,
  [SMALL_STATE(42)] = 257,
  [SMALL_STATE(43)] = 265,
  [SMALL_STATE(44)] = 273,
  [SMALL_STATE(45)] = 281,
  [SMALL_STATE(46)] = 289,
  [SMALL_STATE(47)] = 295,
  [SMALL_STATE(48)] = 303,
  [SMALL_STATE(49)] = 311,
  [SMALL_STATE(50)] = 317,
  [SMALL_STATE(51)] = 324,
  [SMALL_STATE(52)] = 331,
  [SMALL_STATE(53)] = 338,
  [SMALL_STATE(54)] = 345,
  [SMALL_STATE(55)] = 352,
  [SMALL_STATE(56)] = 359,
  [SMALL_STATE(57)] = 366,
  [SMALL_STATE(58)] = 373,
  [SMALL_STATE(59)] = 380,
  [SMALL_STATE(60)] = 387,
  [SMALL_STATE(61)] = 394,
  [SMALL_STATE(62)] = 401,
  [SMALL_STATE(63)] = 408,
  [SMALL_STATE(64)] = 415,
  [SMALL_STATE(65)] = 422,
  [SMALL_STATE(66)] = 429,
  [SMALL_STATE(67)] = 436,
  [SMALL_STATE(68)] = 443,
  [SMALL_STATE(69)] = 450,
  [SMALL_STATE(70)] = 457,
  [SMALL_STATE(71)] = 464,
  [SMALL_STATE(72)] = 471,
  [SMALL_STATE(73)] = 475,
  [SMALL_STATE(74)] = 479,
  [SMALL_STATE(75)] = 483,
  [SMALL_STATE(76)] = 487,
  [SMALL_STATE(77)] = 491,
  [SMALL_STATE(78)] = 495,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_r3d, 5, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_8bit, 8, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nop, 5, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prn, 5, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pr1, 5, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_red, 5, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_p0p, 5, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dpl, 5, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mrg, 5, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub, 5, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mul, 5, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_div, 5, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cnt, 5, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eql, 5, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lss, 5, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gr8, 5, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lib, 5, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jro, 5, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trm, 5, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_token, 1, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blo, 6, 0, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sbm, 6, 0, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_srn, 6, 0, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lbl, 6, 0, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jmp, 6, 0, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_5bit, 5, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add, 5, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [177] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
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

TS_PUBLIC const TSLanguage *tree_sitter_awatalk(void) {
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
