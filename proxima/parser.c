#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 20
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 18
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LBRACE = 1,
  anon_sym_RBRACE = 2,
  anon_sym_LT = 3,
  aux_sym_arg_name_token1 = 4,
  anon_sym_GT = 5,
  sym_tag_at = 6,
  sym_escaped_char = 7,
  sym_comment = 8,
  sym_text = 9,
  sym_document = 10,
  sym__element = 11,
  sym_tag = 12,
  sym_argument = 13,
  sym_arg_name = 14,
  sym_identifier = 15,
  aux_sym_document_repeat1 = 16,
  aux_sym_tag_repeat1 = 17,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LT] = "<",
  [aux_sym_arg_name_token1] = "arg_name_token1",
  [anon_sym_GT] = ">",
  [sym_tag_at] = "tag_at",
  [sym_escaped_char] = "escaped_char",
  [sym_comment] = "comment",
  [sym_text] = "text",
  [sym_document] = "document",
  [sym__element] = "_element",
  [sym_tag] = "tag",
  [sym_argument] = "argument",
  [sym_arg_name] = "arg_name",
  [sym_identifier] = "identifier",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_tag_repeat1] = "tag_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LT] = anon_sym_LT,
  [aux_sym_arg_name_token1] = aux_sym_arg_name_token1,
  [anon_sym_GT] = anon_sym_GT,
  [sym_tag_at] = sym_tag_at,
  [sym_escaped_char] = sym_escaped_char,
  [sym_comment] = sym_comment,
  [sym_text] = sym_text,
  [sym_document] = sym_document,
  [sym__element] = sym__element,
  [sym_tag] = sym_tag,
  [sym_argument] = sym_argument,
  [sym_arg_name] = sym_arg_name,
  [sym_identifier] = sym_identifier,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_tag_repeat1] = aux_sym_tag_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_arg_name_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_tag_at] = {
    .visible = true,
    .named = true,
  },
  [sym_escaped_char] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__element] = {
    .visible = false,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_arg_name] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tag_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(3);
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == '<') ADVANCE(6);
      if (lookahead == '>') ADVANCE(8);
      if (lookahead == '@') ADVANCE(9);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(4);
      if (lookahead == '}') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 1:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 2:
      if (eof) ADVANCE(3);
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == '<') ADVANCE(6);
      if (lookahead == '@') ADVANCE(9);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(4);
      if (lookahead == '}') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(13);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(aux_sym_arg_name_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_tag_at);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_escaped_char);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_text);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(13);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 2},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [aux_sym_arg_name_token1] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym_tag_at] = ACTIONS(1),
    [sym_escaped_char] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_document] = STATE(17),
    [sym__element] = STATE(7),
    [sym_tag] = STATE(7),
    [aux_sym_document_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_tag_at] = ACTIONS(7),
    [sym_escaped_char] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_text] = ACTIONS(13),
  },
  [2] = {
    [sym__element] = STATE(9),
    [sym_tag] = STATE(9),
    [sym_arg_name] = STATE(8),
    [aux_sym_document_repeat1] = STATE(9),
    [anon_sym_RBRACE] = ACTIONS(15),
    [anon_sym_LT] = ACTIONS(17),
    [sym_tag_at] = ACTIONS(7),
    [sym_escaped_char] = ACTIONS(19),
    [sym_comment] = ACTIONS(11),
    [sym_text] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 2,
      ts_builtin_sym_end,
      sym_text,
    STATE(5), 2,
      sym_argument,
      aux_sym_tag_repeat1,
    ACTIONS(27), 3,
      anon_sym_RBRACE,
      sym_tag_at,
      sym_escaped_char,
  [20] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    ACTIONS(33), 1,
      sym_tag_at,
    ACTIONS(36), 1,
      sym_escaped_char,
    ACTIONS(39), 1,
      sym_text,
    STATE(4), 3,
      sym__element,
      sym_tag,
      aux_sym_document_repeat1,
  [44] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(42), 2,
      ts_builtin_sym_end,
      sym_text,
    STATE(6), 2,
      sym_argument,
      aux_sym_tag_repeat1,
    ACTIONS(44), 3,
      anon_sym_RBRACE,
      sym_tag_at,
      sym_escaped_char,
  [64] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(48), 1,
      anon_sym_LBRACE,
    ACTIONS(46), 2,
      ts_builtin_sym_end,
      sym_text,
    STATE(6), 2,
      sym_argument,
      aux_sym_tag_repeat1,
    ACTIONS(51), 3,
      anon_sym_RBRACE,
      sym_tag_at,
      sym_escaped_char,
  [84] = 6,
    ACTIONS(7), 1,
      sym_tag_at,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(55), 1,
      sym_escaped_char,
    ACTIONS(57), 1,
      sym_text,
    STATE(4), 3,
      sym__element,
      sym_tag,
      aux_sym_document_repeat1,
  [105] = 6,
    ACTIONS(7), 1,
      sym_tag_at,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    ACTIONS(61), 1,
      sym_escaped_char,
    ACTIONS(63), 1,
      sym_text,
    STATE(10), 3,
      sym__element,
      sym_tag,
      aux_sym_document_repeat1,
  [126] = 6,
    ACTIONS(7), 1,
      sym_tag_at,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(55), 1,
      sym_escaped_char,
    ACTIONS(57), 1,
      sym_text,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    STATE(4), 3,
      sym__element,
      sym_tag,
      aux_sym_document_repeat1,
  [147] = 6,
    ACTIONS(7), 1,
      sym_tag_at,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(55), 1,
      sym_escaped_char,
    ACTIONS(57), 1,
      sym_text,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    STATE(4), 3,
      sym__element,
      sym_tag,
      aux_sym_document_repeat1,
  [168] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(67), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(69), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_tag_at,
      sym_escaped_char,
  [182] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(73), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_tag_at,
      sym_escaped_char,
  [196] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(75), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(77), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_tag_at,
      sym_escaped_char,
  [210] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(81), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_tag_at,
      sym_escaped_char,
  [224] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(85), 1,
      sym_text,
    ACTIONS(83), 3,
      anon_sym_RBRACE,
      sym_tag_at,
      sym_escaped_char,
  [236] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      aux_sym_arg_name_token1,
    STATE(3), 1,
      sym_identifier,
  [246] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
  [253] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      aux_sym_arg_name_token1,
  [260] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_GT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 20,
  [SMALL_STATE(5)] = 44,
  [SMALL_STATE(6)] = 64,
  [SMALL_STATE(7)] = 84,
  [SMALL_STATE(8)] = 105,
  [SMALL_STATE(9)] = 126,
  [SMALL_STATE(10)] = 147,
  [SMALL_STATE(11)] = 168,
  [SMALL_STATE(12)] = 182,
  [SMALL_STATE(13)] = 196,
  [SMALL_STATE(14)] = 210,
  [SMALL_STATE(15)] = 224,
  [SMALL_STATE(16)] = 236,
  [SMALL_STATE(17)] = 246,
  [SMALL_STATE(18)] = 253,
  [SMALL_STATE(19)] = 260,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2, 0, 0),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 2, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 2, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 3, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 3, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 4, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 4, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_name, 3, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_name, 3, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [89] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
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

TS_PUBLIC const TSLanguage *tree_sitter_proxima(void) {
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
