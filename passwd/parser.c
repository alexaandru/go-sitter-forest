#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 30
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 15
#define ALIAS_COUNT 0
#define TOKEN_COUNT 6
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 14
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  sym_separator = 2,
  aux_sym_user_token1 = 3,
  aux_sym_uid_token1 = 4,
  sym_shell = 5,
  sym_source_file = 6,
  sym_entry = 7,
  sym_user = 8,
  sym_auth = 9,
  sym_uid = 10,
  sym_gid = 11,
  sym_gecos = 12,
  sym_home = 13,
  aux_sym_source_file_repeat1 = 14,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [sym_separator] = "separator",
  [aux_sym_user_token1] = "user_token1",
  [aux_sym_uid_token1] = "uid_token1",
  [sym_shell] = "shell",
  [sym_source_file] = "source_file",
  [sym_entry] = "entry",
  [sym_user] = "user",
  [sym_auth] = "auth",
  [sym_uid] = "uid",
  [sym_gid] = "gid",
  [sym_gecos] = "gecos",
  [sym_home] = "home",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [sym_separator] = sym_separator,
  [aux_sym_user_token1] = aux_sym_user_token1,
  [aux_sym_uid_token1] = aux_sym_uid_token1,
  [sym_shell] = sym_shell,
  [sym_source_file] = sym_source_file,
  [sym_entry] = sym_entry,
  [sym_user] = sym_user,
  [sym_auth] = sym_auth,
  [sym_uid] = sym_uid,
  [sym_gid] = sym_gid,
  [sym_gecos] = sym_gecos,
  [sym_home] = sym_home,
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
  [sym_separator] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_user_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_uid_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_shell] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_user] = {
    .visible = true,
    .named = true,
  },
  [sym_auth] = {
    .visible = true,
    .named = true,
  },
  [sym_uid] = {
    .visible = true,
    .named = true,
  },
  [sym_gid] = {
    .visible = true,
    .named = true,
  },
  [sym_gecos] = {
    .visible = true,
    .named = true,
  },
  [sym_home] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      if (lookahead == ':') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(12);
      END_STATE();
    case 2:
      if (eof) ADVANCE(4);
      if (lookahead == '\n') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(9);
      END_STATE();
    case 3:
      if (eof) ADVANCE(4);
      if (lookahead == ':') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(7);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_separator);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == '\n') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(9);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(9);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_uid_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_shell);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(12);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_shell);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(12);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 3},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 3},
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
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_separator] = ACTIONS(1),
    [aux_sym_uid_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(29),
    [sym_entry] = STATE(2),
    [sym_user] = STATE(28),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_user_token1] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(5), 1,
      aux_sym_user_token1,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    STATE(28), 1,
      sym_user,
    STATE(3), 2,
      sym_entry,
      aux_sym_source_file_repeat1,
  [14] = 4,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      aux_sym_user_token1,
    STATE(28), 1,
      sym_user,
    STATE(3), 2,
      sym_entry,
      aux_sym_source_file_repeat1,
  [28] = 3,
    ACTIONS(14), 1,
      ts_builtin_sym_end,
    ACTIONS(16), 1,
      anon_sym_LF,
    ACTIONS(18), 1,
      aux_sym_user_token1,
  [38] = 3,
    ACTIONS(20), 1,
      ts_builtin_sym_end,
    ACTIONS(22), 1,
      anon_sym_LF,
    ACTIONS(24), 1,
      aux_sym_user_token1,
  [48] = 3,
    ACTIONS(26), 1,
      sym_separator,
    ACTIONS(28), 1,
      aux_sym_user_token1,
    STATE(19), 1,
      sym_gecos,
  [58] = 1,
    ACTIONS(30), 2,
      ts_builtin_sym_end,
      aux_sym_user_token1,
  [63] = 1,
    ACTIONS(14), 2,
      ts_builtin_sym_end,
      aux_sym_user_token1,
  [68] = 2,
    ACTIONS(32), 1,
      aux_sym_user_token1,
    STATE(25), 1,
      sym_auth,
  [75] = 2,
    ACTIONS(34), 1,
      aux_sym_user_token1,
    STATE(24), 1,
      sym_home,
  [82] = 2,
    ACTIONS(36), 1,
      aux_sym_uid_token1,
    STATE(17), 1,
      sym_uid,
  [89] = 2,
    ACTIONS(34), 1,
      aux_sym_user_token1,
    STATE(21), 1,
      sym_home,
  [96] = 2,
    ACTIONS(38), 1,
      aux_sym_uid_token1,
    STATE(15), 1,
      sym_gid,
  [103] = 1,
    ACTIONS(40), 1,
      sym_separator,
  [107] = 1,
    ACTIONS(42), 1,
      sym_separator,
  [111] = 1,
    ACTIONS(44), 1,
      sym_separator,
  [115] = 1,
    ACTIONS(46), 1,
      sym_separator,
  [119] = 1,
    ACTIONS(48), 1,
      sym_separator,
  [123] = 1,
    ACTIONS(50), 1,
      sym_separator,
  [127] = 1,
    ACTIONS(52), 1,
      sym_separator,
  [131] = 1,
    ACTIONS(54), 1,
      sym_separator,
  [135] = 1,
    ACTIONS(56), 1,
      sym_separator,
  [139] = 1,
    ACTIONS(58), 1,
      sym_shell,
  [143] = 1,
    ACTIONS(60), 1,
      sym_separator,
  [147] = 1,
    ACTIONS(62), 1,
      sym_separator,
  [151] = 1,
    ACTIONS(64), 1,
      sym_shell,
  [155] = 1,
    ACTIONS(66), 1,
      sym_separator,
  [159] = 1,
    ACTIONS(68), 1,
      sym_separator,
  [163] = 1,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 14,
  [SMALL_STATE(4)] = 28,
  [SMALL_STATE(5)] = 38,
  [SMALL_STATE(6)] = 48,
  [SMALL_STATE(7)] = 58,
  [SMALL_STATE(8)] = 63,
  [SMALL_STATE(9)] = 68,
  [SMALL_STATE(10)] = 75,
  [SMALL_STATE(11)] = 82,
  [SMALL_STATE(12)] = 89,
  [SMALL_STATE(13)] = 96,
  [SMALL_STATE(14)] = 103,
  [SMALL_STATE(15)] = 107,
  [SMALL_STATE(16)] = 111,
  [SMALL_STATE(17)] = 115,
  [SMALL_STATE(18)] = 119,
  [SMALL_STATE(19)] = 123,
  [SMALL_STATE(20)] = 127,
  [SMALL_STATE(21)] = 131,
  [SMALL_STATE(22)] = 135,
  [SMALL_STATE(23)] = 139,
  [SMALL_STATE(24)] = 143,
  [SMALL_STATE(25)] = 147,
  [SMALL_STATE(26)] = 151,
  [SMALL_STATE(27)] = 155,
  [SMALL_STATE(28)] = 159,
  [SMALL_STATE(29)] = 163,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [14] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 13),
  [16] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [18] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 13),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 12),
  [22] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [24] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 12),
  [26] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 14),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gid, 1),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user, 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gecos, 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_home, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uid, 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_auth, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [70] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

TS_PUBLIC const TSLanguage *tree_sitter_passwd() {
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
