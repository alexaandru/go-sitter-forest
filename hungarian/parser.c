#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 6
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 7
#define ALIAS_COUNT 0
#define TOKEN_COUNT 5
#define EXTERNAL_TOKEN_COUNT 4
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_prefix = 1,
  sym_body = 2,
  sym__normal = 3,
  sym_error_sentinel = 4,
  sym_identifier = 5,
  sym__hungarian = 6,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_prefix] = "prefix",
  [sym_body] = "body",
  [sym__normal] = "_normal",
  [sym_error_sentinel] = "error_sentinel",
  [sym_identifier] = "identifier",
  [sym__hungarian] = "_hungarian",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_prefix] = sym_prefix,
  [sym_body] = sym_body,
  [sym__normal] = sym__normal,
  [sym_error_sentinel] = sym_error_sentinel,
  [sym_identifier] = sym_identifier,
  [sym__hungarian] = sym__hungarian,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_prefix] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym__normal] = {
    .visible = false,
    .named = true,
  },
  [sym_error_sentinel] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__hungarian] = {
    .visible = false,
    .named = true,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      if (eof) ADVANCE(1);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 0, .external_lex_state = 3},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_prefix] = ACTIONS(1),
    [sym_body] = ACTIONS(1),
    [sym__normal] = ACTIONS(1),
    [sym_error_sentinel] = ACTIONS(1),
  },
  [1] = {
    [sym_identifier] = STATE(4),
    [sym__hungarian] = STATE(3),
    [sym_prefix] = ACTIONS(3),
    [sym__normal] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(7), 1,
      sym_body,
  [4] = 1,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
  [8] = 1,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
  [12] = 1,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 4,
  [SMALL_STATE(4)] = 8,
  [SMALL_STATE(5)] = 12,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [11] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hungarian, 2),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_prefix = 0,
  ts_external_token_body = 1,
  ts_external_token__normal = 2,
  ts_external_token_error_sentinel = 3,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_prefix] = sym_prefix,
  [ts_external_token_body] = sym_body,
  [ts_external_token__normal] = sym__normal,
  [ts_external_token_error_sentinel] = sym_error_sentinel,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_prefix] = true,
    [ts_external_token_body] = true,
    [ts_external_token__normal] = true,
    [ts_external_token_error_sentinel] = true,
  },
  [2] = {
    [ts_external_token_prefix] = true,
    [ts_external_token__normal] = true,
  },
  [3] = {
    [ts_external_token_body] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_hungarian_external_scanner_create(void);
void tree_sitter_hungarian_external_scanner_destroy(void *);
bool tree_sitter_hungarian_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_hungarian_external_scanner_serialize(void *, char *);
void tree_sitter_hungarian_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_hungarian() {
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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_hungarian_external_scanner_create,
      tree_sitter_hungarian_external_scanner_destroy,
      tree_sitter_hungarian_external_scanner_scan,
      tree_sitter_hungarian_external_scanner_serialize,
      tree_sitter_hungarian_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
