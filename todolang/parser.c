#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 14
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 12
#define ALIAS_COUNT 0
#define TOKEN_COUNT 5
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_todo = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  aux_sym_chars_token1 = 4,
  sym_source_file = 5,
  sym__definition = 6,
  sym_todo_definition = 7,
  sym_block = 8,
  sym_chars = 9,
  aux_sym_source_file_repeat1 = 10,
  aux_sym_chars_repeat1 = 11,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_todo] = "todo",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [aux_sym_chars_token1] = "chars_token1",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_todo_definition] = "todo_definition",
  [sym_block] = "block",
  [sym_chars] = "chars",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_chars_repeat1] = "chars_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_todo] = anon_sym_todo,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym_chars_token1] = aux_sym_chars_token1,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_todo_definition] = sym_todo_definition,
  [sym_block] = sym_block,
  [sym_chars] = sym_chars,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_chars_repeat1] = aux_sym_chars_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_todo] = {
    .visible = true,
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
  [aux_sym_chars_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_todo_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_chars] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_chars_repeat1] = {
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
  [8] = 5,
  [9] = 6,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(7);
      if (lookahead == 't') ADVANCE(12);
      if (lookahead == '{') ADVANCE(9);
      if (lookahead == '}') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 1:
      if (lookahead == 'd') ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(8);
      END_STATE();
    case 3:
      if (lookahead == '{') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 4:
      if (lookahead == '}') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 5:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 6:
      if (eof) ADVANCE(7);
      if (lookahead == 't') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_todo);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_chars_token1);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_chars_token1);
      if (lookahead == 'o') ADVANCE(1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_todo] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [aux_sym_chars_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(12),
    [sym__definition] = STATE(3),
    [sym_todo_definition] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_todo] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      aux_sym_chars_token1,
    STATE(5), 1,
      aux_sym_chars_repeat1,
    STATE(10), 2,
      sym_block,
      sym_chars,
  [14] = 3,
    ACTIONS(5), 1,
      anon_sym_todo,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    STATE(4), 3,
      sym__definition,
      sym_todo_definition,
      aux_sym_source_file_repeat1,
  [26] = 3,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      anon_sym_todo,
    STATE(4), 3,
      sym__definition,
      sym_todo_definition,
      aux_sym_source_file_repeat1,
  [38] = 3,
    ACTIONS(20), 1,
      aux_sym_chars_token1,
    STATE(6), 1,
      aux_sym_chars_repeat1,
    ACTIONS(18), 2,
      ts_builtin_sym_end,
      anon_sym_todo,
  [49] = 3,
    ACTIONS(24), 1,
      aux_sym_chars_token1,
    STATE(6), 1,
      aux_sym_chars_repeat1,
    ACTIONS(22), 2,
      ts_builtin_sym_end,
      anon_sym_todo,
  [60] = 3,
    ACTIONS(27), 1,
      aux_sym_chars_token1,
    STATE(8), 1,
      aux_sym_chars_repeat1,
    STATE(13), 1,
      sym_chars,
  [70] = 3,
    ACTIONS(18), 1,
      anon_sym_RBRACE,
    ACTIONS(29), 1,
      aux_sym_chars_token1,
    STATE(9), 1,
      aux_sym_chars_repeat1,
  [80] = 3,
    ACTIONS(22), 1,
      anon_sym_RBRACE,
    ACTIONS(31), 1,
      aux_sym_chars_token1,
    STATE(9), 1,
      aux_sym_chars_repeat1,
  [90] = 1,
    ACTIONS(34), 2,
      ts_builtin_sym_end,
      anon_sym_todo,
  [95] = 1,
    ACTIONS(36), 2,
      ts_builtin_sym_end,
      anon_sym_todo,
  [100] = 1,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
  [104] = 1,
    ACTIONS(40), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 14,
  [SMALL_STATE(4)] = 26,
  [SMALL_STATE(5)] = 38,
  [SMALL_STATE(6)] = 49,
  [SMALL_STATE(7)] = 60,
  [SMALL_STATE(8)] = 70,
  [SMALL_STATE(9)] = 80,
  [SMALL_STATE(10)] = 90,
  [SMALL_STATE(11)] = 95,
  [SMALL_STATE(12)] = 100,
  [SMALL_STATE(13)] = 104,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [18] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chars, 1, 0, 0),
  [20] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_chars_repeat1, 2, 0, 0),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_chars_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_chars_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_todo_definition, 2, 0, 0),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [38] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
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

TS_PUBLIC const TSLanguage *tree_sitter_todolang(void) {
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
