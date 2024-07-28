#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 18
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 17
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  anon_sym_entity = 2,
  anon_sym_relation = 3,
  aux_sym_relation_association_token1 = 4,
  sym_comment = 5,
  sym_identifier = 6,
  sym_opening_brace = 7,
  sym_closing_brace = 8,
  sym_and_statement = 9,
  sym_or_statement = 10,
  sym_source_file = 11,
  sym__instruction = 12,
  sym_entity_definition = 13,
  sym_relation_definition = 14,
  sym_relation_association = 15,
  aux_sym_source_file_repeat1 = 16,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_entity] = "entity",
  [anon_sym_relation] = "relation",
  [aux_sym_relation_association_token1] = "relation_association_token1",
  [sym_comment] = "comment",
  [sym_identifier] = "identifier",
  [sym_opening_brace] = "opening_brace",
  [sym_closing_brace] = "closing_brace",
  [sym_and_statement] = "and_statement",
  [sym_or_statement] = "or_statement",
  [sym_source_file] = "source_file",
  [sym__instruction] = "_instruction",
  [sym_entity_definition] = "entity_definition",
  [sym_relation_definition] = "relation_definition",
  [sym_relation_association] = "relation_association",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_entity] = anon_sym_entity,
  [anon_sym_relation] = anon_sym_relation,
  [aux_sym_relation_association_token1] = aux_sym_relation_association_token1,
  [sym_comment] = sym_comment,
  [sym_identifier] = sym_identifier,
  [sym_opening_brace] = sym_opening_brace,
  [sym_closing_brace] = sym_closing_brace,
  [sym_and_statement] = sym_and_statement,
  [sym_or_statement] = sym_or_statement,
  [sym_source_file] = sym_source_file,
  [sym__instruction] = sym__instruction,
  [sym_entity_definition] = sym_entity_definition,
  [sym_relation_definition] = sym_relation_definition,
  [sym_relation_association] = sym_relation_association,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
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
  [anon_sym_entity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_relation] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_relation_association_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_opening_brace] = {
    .visible = true,
    .named = true,
  },
  [sym_closing_brace] = {
    .visible = true,
    .named = true,
  },
  [sym_and_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_or_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__instruction] = {
    .visible = false,
    .named = true,
  },
  [sym_entity_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_relation_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_relation_association] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_name = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(19);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '@') ADVANCE(23);
      if (lookahead == 'a') ADVANCE(10);
      if (lookahead == 'e') ADVANCE(11);
      if (lookahead == 'o') ADVANCE(14);
      if (lookahead == 'r') ADVANCE(6);
      if (lookahead == '{') ADVANCE(26);
      if (lookahead == '}') ADVANCE(27);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '/') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '/') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(24);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 5:
      if (lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == 'i') ADVANCE(13);
      END_STATE();
    case 8:
      if (lookahead == 'i') ADVANCE(16);
      END_STATE();
    case 9:
      if (lookahead == 'l') ADVANCE(4);
      END_STATE();
    case 10:
      if (lookahead == 'n') ADVANCE(5);
      END_STATE();
    case 11:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 13:
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 15:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 16:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 17:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 18:
      if (lookahead == 'y') ADVANCE(21);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_entity);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_relation);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_relation_association_token1);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_opening_brace);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_closing_brace);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_and_statement);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_or_statement);
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
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_entity] = ACTIONS(1),
    [anon_sym_relation] = ACTIONS(1),
    [aux_sym_relation_association_token1] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_opening_brace] = ACTIONS(1),
    [sym_closing_brace] = ACTIONS(1),
    [sym_and_statement] = ACTIONS(1),
    [sym_or_statement] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(8),
    [sym__instruction] = STATE(9),
    [sym_entity_definition] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_entity] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_entity,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(9), 2,
      sym__instruction,
      sym_entity_definition,
  [17] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      anon_sym_entity,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(9), 2,
      sym__instruction,
      sym_entity_definition,
  [34] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(16), 1,
      anon_sym_relation,
    ACTIONS(18), 1,
      sym_closing_brace,
    STATE(13), 1,
      sym_relation_definition,
  [47] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 2,
      ts_builtin_sym_end,
      anon_sym_entity,
  [55] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(20), 1,
      aux_sym_relation_association_token1,
    STATE(16), 1,
      sym_relation_association,
  [65] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(22), 1,
      sym_identifier,
  [72] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(24), 1,
      ts_builtin_sym_end,
  [79] = 2,
    ACTIONS(26), 1,
      anon_sym_LF,
    ACTIONS(28), 1,
      sym_comment,
  [86] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(30), 1,
      sym_opening_brace,
  [93] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(32), 1,
      sym_identifier,
  [100] = 2,
    ACTIONS(28), 1,
      sym_comment,
    ACTIONS(34), 1,
      anon_sym_LF,
  [107] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(36), 1,
      sym_closing_brace,
  [114] = 2,
    ACTIONS(28), 1,
      sym_comment,
    ACTIONS(38), 1,
      anon_sym_LF,
  [121] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      sym_identifier,
  [128] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      sym_closing_brace,
  [135] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      sym_closing_brace,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 17,
  [SMALL_STATE(4)] = 34,
  [SMALL_STATE(5)] = 47,
  [SMALL_STATE(6)] = 55,
  [SMALL_STATE(7)] = 65,
  [SMALL_STATE(8)] = 72,
  [SMALL_STATE(9)] = 79,
  [SMALL_STATE(10)] = 86,
  [SMALL_STATE(11)] = 93,
  [SMALL_STATE(12)] = 100,
  [SMALL_STATE(13)] = 107,
  [SMALL_STATE(14)] = 114,
  [SMALL_STATE(15)] = 121,
  [SMALL_STATE(16)] = 128,
  [SMALL_STATE(17)] = 135,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [16] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [18] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [20] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [24] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [28] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_definition, 4, .production_id = 1),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_definition, 5, .production_id = 1),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_definition, 3, .production_id = 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_association, 2, .production_id = 1),
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

TS_PUBLIC const TSLanguage *tree_sitter_perm() {
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
