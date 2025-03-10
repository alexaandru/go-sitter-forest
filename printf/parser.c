#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 21
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 13
#define ALIAS_COUNT 0
#define TOKEN_COUNT 9
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_PERCENT_PERCENT = 1,
  anon_sym_PERCENT = 2,
  sym_type = 3,
  sym_flags = 4,
  sym_width = 5,
  sym_precision = 6,
  sym_size = 7,
  aux_sym__text_token1 = 8,
  sym_format_string = 9,
  sym_format = 10,
  sym__text = 11,
  aux_sym_format_string_repeat1 = 12,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_PERCENT_PERCENT] = "%%",
  [anon_sym_PERCENT] = "%",
  [sym_type] = "type",
  [sym_flags] = "flags",
  [sym_width] = "width",
  [sym_precision] = "precision",
  [sym_size] = "size",
  [aux_sym__text_token1] = "_text_token1",
  [sym_format_string] = "format_string",
  [sym_format] = "format",
  [sym__text] = "_text",
  [aux_sym_format_string_repeat1] = "format_string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_PERCENT_PERCENT] = anon_sym_PERCENT_PERCENT,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [sym_type] = sym_type,
  [sym_flags] = sym_flags,
  [sym_width] = sym_width,
  [sym_precision] = sym_precision,
  [sym_size] = sym_size,
  [aux_sym__text_token1] = aux_sym__text_token1,
  [sym_format_string] = sym_format_string,
  [sym_format] = sym_format,
  [sym__text] = sym__text,
  [aux_sym_format_string_repeat1] = aux_sym_format_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_PERCENT_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_flags] = {
    .visible = true,
    .named = true,
  },
  [sym_width] = {
    .visible = true,
    .named = true,
  },
  [sym_precision] = {
    .visible = true,
    .named = true,
  },
  [sym_size] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__text_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_format_string] = {
    .visible = true,
    .named = true,
  },
  [sym_format] = {
    .visible = true,
    .named = true,
  },
  [sym__text] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_format_string_repeat1] = {
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
      if (eof) ADVANCE(6);
      ADVANCE_MAP(
        '%', 8,
        '*', 13,
        '.', 16,
        '0', 14,
        'I', 19,
        'h', 20,
        'l', 21,
        'L', 18,
        'j', 18,
        't', 18,
        'w', 18,
        'z', 18,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(9);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        ' ', 11,
        '*', 13,
        '.', 16,
        '0', 12,
        'I', 19,
        'h', 20,
        'l', 21,
        '#', 10,
        '\'', 10,
        '+', 10,
        '-', 10,
        'L', 18,
        'j', 18,
        't', 18,
        'w', 18,
        'z', 18,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(9);
      END_STATE();
    case 2:
      if (lookahead == '2') ADVANCE(18);
      END_STATE();
    case 3:
      if (lookahead == '4') ADVANCE(18);
      END_STATE();
    case 4:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 5:
      if (eof) ADVANCE(6);
      if (lookahead == '%') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '%') ADVANCE(7);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_type);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_flags);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_flags);
      ADVANCE_MAP(
        ' ', 11,
        '0', 12,
        'I', 19,
        'h', 20,
        'l', 21,
        '#', 10,
        '\'', 10,
        '+', 10,
        '-', 10,
        'L', 18,
        'j', 18,
        't', 18,
        'w', 18,
        'z', 18,
      );
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_flags);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_width);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_width);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_precision);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_precision);
      if (lookahead == '*') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_precision);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_size);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_size);
      if (lookahead == '3') ADVANCE(2);
      if (lookahead == '6') ADVANCE(3);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_size);
      if (lookahead == 'h') ADVANCE(18);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_size);
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(23);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 5},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [sym_type] = ACTIONS(1),
    [sym_width] = ACTIONS(1),
    [sym_precision] = ACTIONS(1),
    [sym_size] = ACTIONS(1),
  },
  [1] = {
    [sym_format_string] = STATE(16),
    [sym_format] = STATE(2),
    [sym__text] = STATE(2),
    [aux_sym_format_string_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(5),
    [anon_sym_PERCENT] = ACTIONS(7),
    [aux_sym__text_token1] = ACTIONS(9),
  },
  [2] = {
    [sym_format] = STATE(3),
    [sym__text] = STATE(3),
    [aux_sym_format_string_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(13),
    [anon_sym_PERCENT] = ACTIONS(7),
    [aux_sym__text_token1] = ACTIONS(15),
  },
  [3] = {
    [sym_format] = STATE(3),
    [sym__text] = STATE(3),
    [aux_sym_format_string_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(19),
    [anon_sym_PERCENT] = ACTIONS(22),
    [aux_sym__text_token1] = ACTIONS(25),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(28), 1,
      sym_type,
    ACTIONS(30), 1,
      sym_flags,
    ACTIONS(32), 1,
      sym_width,
    ACTIONS(34), 1,
      sym_precision,
    ACTIONS(36), 1,
      sym_size,
  [16] = 4,
    ACTIONS(38), 1,
      sym_type,
    ACTIONS(40), 1,
      sym_width,
    ACTIONS(42), 1,
      sym_precision,
    ACTIONS(44), 1,
      sym_size,
  [29] = 2,
    ACTIONS(46), 2,
      ts_builtin_sym_end,
      aux_sym__text_token1,
    ACTIONS(48), 2,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENT,
  [38] = 2,
    ACTIONS(50), 2,
      ts_builtin_sym_end,
      aux_sym__text_token1,
    ACTIONS(52), 2,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENT,
  [47] = 2,
    ACTIONS(54), 2,
      ts_builtin_sym_end,
      aux_sym__text_token1,
    ACTIONS(56), 2,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENT,
  [56] = 2,
    ACTIONS(58), 2,
      ts_builtin_sym_end,
      aux_sym__text_token1,
    ACTIONS(60), 2,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENT,
  [65] = 2,
    ACTIONS(62), 2,
      ts_builtin_sym_end,
      aux_sym__text_token1,
    ACTIONS(64), 2,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENT,
  [74] = 3,
    ACTIONS(38), 1,
      sym_type,
    ACTIONS(42), 1,
      sym_precision,
    ACTIONS(44), 1,
      sym_size,
  [84] = 3,
    ACTIONS(66), 1,
      sym_type,
    ACTIONS(68), 1,
      sym_precision,
    ACTIONS(70), 1,
      sym_size,
  [94] = 2,
    ACTIONS(38), 1,
      sym_type,
    ACTIONS(44), 1,
      sym_size,
  [101] = 2,
    ACTIONS(66), 1,
      sym_type,
    ACTIONS(70), 1,
      sym_size,
  [108] = 2,
    ACTIONS(72), 1,
      sym_type,
    ACTIONS(74), 1,
      sym_size,
  [115] = 1,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
  [119] = 1,
    ACTIONS(78), 1,
      sym_type,
  [123] = 1,
    ACTIONS(80), 1,
      sym_type,
  [127] = 1,
    ACTIONS(82), 1,
      sym_type,
  [131] = 1,
    ACTIONS(84), 1,
      sym_type,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 16,
  [SMALL_STATE(6)] = 29,
  [SMALL_STATE(7)] = 38,
  [SMALL_STATE(8)] = 47,
  [SMALL_STATE(9)] = 56,
  [SMALL_STATE(10)] = 65,
  [SMALL_STATE(11)] = 74,
  [SMALL_STATE(12)] = 84,
  [SMALL_STATE(13)] = 94,
  [SMALL_STATE(14)] = 101,
  [SMALL_STATE(15)] = 108,
  [SMALL_STATE(16)] = 115,
  [SMALL_STATE(17)] = 119,
  [SMALL_STATE(18)] = 123,
  [SMALL_STATE(19)] = 127,
  [SMALL_STATE(20)] = 131,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format_string, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format_string, 1, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_format_string_repeat1, 2, 0, 0),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_format_string_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_format_string_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_format_string_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [28] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format, 2, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_format, 2, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format, 3, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_format, 3, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format, 4, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_format, 4, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format, 5, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_format, 5, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format, 6, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_format, 6, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [76] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
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

TS_PUBLIC const TSLanguage *tree_sitter_printf(void) {
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
