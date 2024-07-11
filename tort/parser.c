#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 69
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 28
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 11

enum ts_symbol_identifiers {
  sym__token = 1,
  anon_sym_DASH_GT = 2,
  anon_sym_LBRACK = 3,
  anon_sym_COLON = 4,
  anon_sym_RBRACK = 5,
  anon_sym_PIPE = 6,
  sym__strict_token = 7,
  sym_info_comment = 8,
  sym_simple_comment = 9,
  sym__lf = 10,
  sym__ws = 11,
  sym_source_file = 12,
  sym__line = 13,
  sym__statement = 14,
  sym_stmt_plain = 15,
  sym_stmt_translation = 16,
  sym_stmt_complex = 17,
  sym_text = 18,
  sym_strict_text = 19,
  sym__orthogram = 20,
  sym_ortho_gap = 21,
  sym_ortho_choice = 22,
  aux_sym_source_file_repeat1 = 23,
  aux_sym_stmt_complex_repeat1 = 24,
  aux_sym_text_repeat1 = 25,
  aux_sym_strict_text_repeat1 = 26,
  aux_sym_ortho_choice_repeat1 = 27,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__token] = "_token",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COLON] = ":",
  [anon_sym_RBRACK] = "]",
  [anon_sym_PIPE] = "|",
  [sym__strict_token] = "_strict_token",
  [sym_info_comment] = "info_comment",
  [sym_simple_comment] = "simple_comment",
  [sym__lf] = "_lf",
  [sym__ws] = "_ws",
  [sym_source_file] = "source_file",
  [sym__line] = "_line",
  [sym__statement] = "_statement",
  [sym_stmt_plain] = "stmt_plain",
  [sym_stmt_translation] = "stmt_translation",
  [sym_stmt_complex] = "stmt_complex",
  [sym_text] = "text",
  [sym_strict_text] = "strict_text",
  [sym__orthogram] = "_orthogram",
  [sym_ortho_gap] = "ortho_gap",
  [sym_ortho_choice] = "ortho_choice",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_stmt_complex_repeat1] = "stmt_complex_repeat1",
  [aux_sym_text_repeat1] = "text_repeat1",
  [aux_sym_strict_text_repeat1] = "strict_text_repeat1",
  [aux_sym_ortho_choice_repeat1] = "ortho_choice_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__token] = sym__token,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [sym__strict_token] = sym__strict_token,
  [sym_info_comment] = sym_info_comment,
  [sym_simple_comment] = sym_simple_comment,
  [sym__lf] = sym__lf,
  [sym__ws] = sym__ws,
  [sym_source_file] = sym_source_file,
  [sym__line] = sym__line,
  [sym__statement] = sym__statement,
  [sym_stmt_plain] = sym_stmt_plain,
  [sym_stmt_translation] = sym_stmt_translation,
  [sym_stmt_complex] = sym_stmt_complex,
  [sym_text] = sym_text,
  [sym_strict_text] = sym_strict_text,
  [sym__orthogram] = sym__orthogram,
  [sym_ortho_gap] = sym_ortho_gap,
  [sym_ortho_choice] = sym_ortho_choice,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_stmt_complex_repeat1] = aux_sym_stmt_complex_repeat1,
  [aux_sym_text_repeat1] = aux_sym_text_repeat1,
  [aux_sym_strict_text_repeat1] = aux_sym_strict_text_repeat1,
  [aux_sym_ortho_choice_repeat1] = aux_sym_ortho_choice_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__token] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [sym__strict_token] = {
    .visible = false,
    .named = true,
  },
  [sym_info_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__lf] = {
    .visible = false,
    .named = true,
  },
  [sym__ws] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_stmt_plain] = {
    .visible = true,
    .named = true,
  },
  [sym_stmt_translation] = {
    .visible = true,
    .named = true,
  },
  [sym_stmt_complex] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_strict_text] = {
    .visible = true,
    .named = true,
  },
  [sym__orthogram] = {
    .visible = false,
    .named = true,
  },
  [sym_ortho_gap] = {
    .visible = true,
    .named = true,
  },
  [sym_ortho_choice] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_stmt_complex_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_strict_text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ortho_choice_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_answer = 1,
  field_comment = 2,
  field_original = 3,
  field_right_answer = 4,
  field_translation = 5,
  field_wrong_answer = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_answer] = "answer",
  [field_comment] = "comment",
  [field_original] = "original",
  [field_right_answer] = "right_answer",
  [field_translation] = "translation",
  [field_wrong_answer] = "wrong_answer",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 2},
  [7] = {.index = 7, .length = 2},
  [8] = {.index = 9, .length = 1},
  [9] = {.index = 10, .length = 2},
  [10] = {.index = 12, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_original, 0},
  [1] =
    {field_wrong_answer, 1},
  [2] =
    {field_answer, 1},
  [3] =
    {field_right_answer, 1},
  [4] =
    {field_wrong_answer, 1, .inherited = true},
  [5] =
    {field_wrong_answer, 0, .inherited = true},
    {field_wrong_answer, 1, .inherited = true},
  [7] =
    {field_original, 0},
    {field_translation, 2},
  [9] =
    {field_comment, 2},
  [10] =
    {field_right_answer, 1},
    {field_wrong_answer, 2, .inherited = true},
  [12] =
    {field_answer, 1},
    {field_comment, 3},
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
  [6] = 5,
  [7] = 4,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 8,
  [12] = 12,
  [13] = 12,
  [14] = 14,
  [15] = 14,
  [16] = 10,
  [17] = 9,
  [18] = 10,
  [19] = 19,
  [20] = 9,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 9,
  [26] = 19,
  [27] = 27,
  [28] = 28,
  [29] = 10,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 32,
  [35] = 28,
  [36] = 36,
  [37] = 37,
  [38] = 36,
  [39] = 37,
  [40] = 9,
  [41] = 10,
  [42] = 22,
  [43] = 31,
  [44] = 23,
  [45] = 33,
  [46] = 24,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 48,
  [51] = 51,
  [52] = 52,
  [53] = 51,
  [54] = 54,
  [55] = 54,
  [56] = 56,
  [57] = 57,
  [58] = 49,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 66,
  [68] = 65,
};

static inline bool sym__token_character_set_1(int32_t c) {
  return (c < 2274
    ? (c < 1536
      ? (c < 127
        ? (c < 0
          ? c == 0
          : c <= 31)
        : (c <= 159 || c == 173))
      : (c <= 1541 || (c < 1807
        ? (c < 1757
          ? c == 1564
          : c <= 1757)
        : (c <= 1807 || (c >= 2192 && c <= 2193)))))
    : (c <= 2274 || (c < 8294
      ? (c < 8234
        ? (c < 8203
          ? c == 6158
          : c <= 8207)
        : (c <= 8238 || (c >= 8288 && c <= 8292)))
      : (c <= 8303 || (c < 65279
        ? (c < 63743
          ? c == 57344
          : c <= 63743)
        : (c <= 65279 || (c >= 65529 && c <= 65531)))))));
}

static inline bool sym__token_character_set_2(int32_t c) {
  return (c < 2274
    ? (c < 1536
      ? (c < ']'
        ? (c < 0
          ? c == 0
          : c <= 31)
        : (c <= ']' || (c < 173
          ? (c >= 127 && c <= 159)
          : c <= 173)))
      : (c <= 1541 || (c < 1807
        ? (c < 1757
          ? c == 1564
          : c <= 1757)
        : (c <= 1807 || (c >= 2192 && c <= 2193)))))
    : (c <= 2274 || (c < 8294
      ? (c < 8234
        ? (c < 8203
          ? c == 6158
          : c <= 8207)
        : (c <= 8238 || (c >= 8288 && c <= 8292)))
      : (c <= 8303 || (c < 65279
        ? (c < 63743
          ? c == 57344
          : c <= 63743)
        : (c <= 65279 || (c >= 65529 && c <= 65531)))))));
}

static inline bool sym__token_character_set_3(int32_t c) {
  return (c < 2274
    ? (c < 173
      ? (c < '['
        ? (c < 0
          ? c == 0
          : (c <= ' ' || c == '#'))
        : (c <= '[' || (c < 127
          ? c == ']'
          : c <= 160)))
      : (c <= 173 || (c < 1757
        ? (c < 1564
          ? (c >= 1536 && c <= 1541)
          : c <= 1564)
        : (c <= 1757 || (c < 2192
          ? c == 1807
          : c <= 2193)))))
    : (c <= 2274 || (c < 8294
      ? (c < 8192
        ? (c < 6158
          ? c == 5760
          : c <= 6158)
        : (c <= 8207 || (c < 8287
          ? (c >= 8232 && c <= 8239)
          : c <= 8292)))
      : (c <= 8303 || (c < 63743
        ? (c < 57344
          ? c == 12288
          : c <= 57344)
        : (c <= 63743 || (c < 65529
          ? c == 65279
          : c <= 65531)))))));
}

static inline bool sym__strict_token_character_set_1(int32_t c) {
  return (c < 2192
    ? (c < '|'
      ? (c < ':'
        ? (c < 0
          ? c == 0
          : (c <= ' ' || c == '#'))
        : (c <= ':' || (c < ']'
          ? c == '['
          : c <= ']')))
      : (c <= '|' || (c < 1564
        ? (c < 173
          ? (c >= 127 && c <= 160)
          : (c <= 173 || (c >= 1536 && c <= 1541)))
        : (c <= 1564 || (c < 1807
          ? c == 1757
          : c <= 1807)))))
    : (c <= 2193 || (c < 8294
      ? (c < 8192
        ? (c < 5760
          ? c == 2274
          : (c <= 5760 || c == 6158))
        : (c <= 8207 || (c < 8287
          ? (c >= 8232 && c <= 8239)
          : c <= 8292)))
      : (c <= 8303 || (c < 63743
        ? (c < 57344
          ? c == 12288
          : c <= 57344)
        : (c <= 63743 || (c < 65529
          ? c == 65279
          : c <= 65531)))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(7);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == '\r') ADVANCE(24);
      if (lookahead == '#') ADVANCE(20);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == '[') ADVANCE(10);
      if (lookahead == ']') ADVANCE(13);
      if (lookahead == '|') ADVANCE(15);
      if (lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8232 ||
          lookahead == 8233 ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(25);
      if (!sym__token_character_set_1(lookahead)) ADVANCE(17);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == '[') ADVANCE(10);
      if (lookahead == ']') ADVANCE(13);
      if (lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8232 ||
          lookahead == 8233 ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(25);
      if (!sym__token_character_set_1(lookahead)) ADVANCE(17);
      END_STATE();
    case 2:
      if (lookahead == '>') ADVANCE(8);
      END_STATE();
    case 3:
      if (eof) ADVANCE(7);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == '\r') ADVANCE(24);
      if (lookahead == '#') ADVANCE(20);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '[') ADVANCE(10);
      if (lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8232 ||
          lookahead == 8233 ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(25);
      if (!sym__token_character_set_2(lookahead)) ADVANCE(17);
      END_STATE();
    case 4:
      if (eof) ADVANCE(7);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == '\r') ADVANCE(24);
      if (lookahead == '#') ADVANCE(20);
      if (lookahead == '-') ADVANCE(2);
      if (lookahead == '[') ADVANCE(10);
      if (lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8232 ||
          lookahead == 8233 ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(25);
      END_STATE();
    case 5:
      if (eof) ADVANCE(7);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == '\r') ADVANCE(24);
      if (lookahead == '#') ADVANCE(20);
      if (lookahead == '[') ADVANCE(10);
      if (lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8232 ||
          lookahead == 8233 ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(25);
      if (!sym__token_character_set_2(lookahead)) ADVANCE(17);
      END_STATE();
    case 6:
      if (eof) ADVANCE(7);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == '\r') ADVANCE(24);
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == '[') ADVANCE(10);
      if (lookahead == ']') ADVANCE(13);
      if (lookahead == '|') ADVANCE(14);
      if (lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8232 ||
          lookahead == 8233 ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(25);
      if (!sym__token_character_set_1(lookahead)) ADVANCE(18);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      if (!sym__token_character_set_3(lookahead)) ADVANCE(17);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (!sym__token_character_set_3(lookahead)) ADVANCE(17);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (!sym__token_character_set_3(lookahead)) ADVANCE(17);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '>') ADVANCE(9);
      if (!sym__token_character_set_3(lookahead)) ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym__token);
      if (!sym__token_character_set_3(lookahead)) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__strict_token);
      if (!sym__strict_token_character_set_1(lookahead)) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_info_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_simple_comment);
      if (lookahead == '!') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(22);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_simple_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '!') ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_simple_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__lf);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym__lf);
      if (lookahead == '\n') ADVANCE(23);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym__ws);
      if (lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8232 ||
          lookahead == 8233 ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(25);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(ts_builtin_sym_end);
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
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 6},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__token] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [sym_info_comment] = ACTIONS(1),
    [sym_simple_comment] = ACTIONS(3),
    [sym__lf] = ACTIONS(1),
    [sym__ws] = ACTIONS(5),
  },
  [1] = {
    [sym_source_file] = STATE(63),
    [sym__line] = STATE(60),
    [sym__statement] = STATE(47),
    [sym_stmt_plain] = STATE(47),
    [sym_stmt_translation] = STATE(47),
    [sym_stmt_complex] = STATE(47),
    [sym_text] = STATE(8),
    [sym__orthogram] = STATE(5),
    [sym_ortho_gap] = STATE(5),
    [sym_ortho_choice] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_stmt_complex_repeat1] = STATE(5),
    [aux_sym_text_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym__token] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_info_comment] = ACTIONS(13),
    [sym_simple_comment] = ACTIONS(3),
    [sym__lf] = ACTIONS(15),
    [sym__ws] = ACTIONS(5),
  },
  [2] = {
    [sym__line] = STATE(64),
    [sym__statement] = STATE(47),
    [sym_stmt_plain] = STATE(47),
    [sym_stmt_translation] = STATE(47),
    [sym_stmt_complex] = STATE(47),
    [sym_text] = STATE(11),
    [sym__orthogram] = STATE(6),
    [sym_ortho_gap] = STATE(6),
    [sym_ortho_choice] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_stmt_complex_repeat1] = STATE(6),
    [aux_sym_text_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym__token] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(22),
    [sym_info_comment] = ACTIONS(25),
    [sym_simple_comment] = ACTIONS(3),
    [sym__lf] = ACTIONS(28),
    [sym__ws] = ACTIONS(5),
  },
  [3] = {
    [sym__line] = STATE(61),
    [sym__statement] = STATE(47),
    [sym_stmt_plain] = STATE(47),
    [sym_stmt_translation] = STATE(47),
    [sym_stmt_complex] = STATE(47),
    [sym_text] = STATE(8),
    [sym__orthogram] = STATE(5),
    [sym_ortho_gap] = STATE(5),
    [sym_ortho_choice] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_stmt_complex_repeat1] = STATE(5),
    [aux_sym_text_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(31),
    [sym__token] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_info_comment] = ACTIONS(33),
    [sym_simple_comment] = ACTIONS(3),
    [sym__lf] = ACTIONS(35),
    [sym__ws] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(3), 1,
      sym_simple_comment,
    ACTIONS(5), 1,
      sym__ws,
    ACTIONS(39), 1,
      sym__token,
    ACTIONS(42), 1,
      anon_sym_LBRACK,
    STATE(38), 1,
      sym_text,
    STATE(41), 1,
      aux_sym_text_repeat1,
    ACTIONS(37), 3,
      ts_builtin_sym_end,
      sym_info_comment,
      sym__lf,
    STATE(4), 4,
      sym__orthogram,
      sym_ortho_gap,
      sym_ortho_choice,
      aux_sym_stmt_complex_repeat1,
  [30] = 8,
    ACTIONS(3), 1,
      sym_simple_comment,
    ACTIONS(5), 1,
      sym__ws,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      sym__token,
    STATE(14), 1,
      sym_text,
    STATE(16), 1,
      aux_sym_text_repeat1,
    ACTIONS(45), 3,
      ts_builtin_sym_end,
      sym_info_comment,
      sym__lf,
    STATE(4), 4,
      sym__orthogram,
      sym_ortho_gap,
      sym_ortho_choice,
      aux_sym_stmt_complex_repeat1,
  [60] = 8,
    ACTIONS(3), 1,
      sym_simple_comment,
    ACTIONS(5), 1,
      sym__ws,
    ACTIONS(49), 1,
      sym__token,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    STATE(15), 1,
      sym_text,
    STATE(29), 1,
      aux_sym_text_repeat1,
    ACTIONS(45), 2,
      sym_info_comment,
      sym__lf,
    STATE(7), 4,
      sym__orthogram,
      sym_ortho_gap,
      sym_ortho_choice,
      aux_sym_stmt_complex_repeat1,
  [89] = 8,
    ACTIONS(3), 1,
      sym_simple_comment,
    ACTIONS(5), 1,
      sym__ws,
    ACTIONS(39), 1,
      sym__token,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    STATE(36), 1,
      sym_text,
    STATE(41), 1,
      aux_sym_text_repeat1,
    ACTIONS(37), 2,
      sym_info_comment,
      sym__lf,
    STATE(7), 4,
      sym__orthogram,
      sym_ortho_gap,
      sym_ortho_choice,
      aux_sym_stmt_complex_repeat1,
  [118] = 6,
    ACTIONS(3), 1,
      sym_simple_comment,
    ACTIONS(5), 1,
      sym__ws,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(58), 1,
      anon_sym_DASH_GT,
    ACTIONS(56), 3,
      ts_builtin_sym_end,
      sym_info_comment,
      sym__lf,
    STATE(23), 3,
      sym__orthogram,
      sym_ortho_gap,
      sym_ortho_choice,
  [141] = 6,
    ACTIONS(3), 1,
      sym_simple_comment,
    ACTIONS(5), 1,
      sym__ws,
    ACTIONS(62), 1,
      sym__token,
    ACTIONS(65), 1,
      anon_sym_DASH_GT,
    STATE(9), 1,
      aux_sym_text_repeat1,
    ACTIONS(60), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_info_comment,
      sym__lf,
  [163] = 6,
    ACTIONS(3), 1,
      sym_simple_comment,
    ACTIONS(5), 1,
      sym__ws,
    ACTIONS(69), 1,
      sym__token,
    ACTIONS(71), 1,
      anon_sym_DASH_GT,
    STATE(9), 1,
      aux_sym_text_repeat1,
    ACTIONS(67), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_info_comment,
      sym__lf,
  [185] = 6,
    ACTIONS(3), 1,
      sym_simple_comment,
    ACTIONS(5), 1,
      sym__ws,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_DASH_GT,
    ACTIONS(56), 2,
      sym_info_comment,
      sym__lf,
    STATE(44), 3,
      sym__orthogram,
      sym_ortho_gap,
      sym_ortho_choice,
  [207] = 8,
    ACTIONS(75), 1,
      anon_sym_COLON,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(79), 1,
      anon_sym_PIPE,
    ACTIONS(81), 1,
      sym__strict_token,
    STATE(27), 1,
      aux_sym_strict_text_repeat1,
    STATE(37), 1,
      sym_strict_text,
    STATE(54), 1,
      aux_sym_ortho_choice_repeat1,
    ACTIONS(5), 2,
      sym_simple_comment,
      sym__ws,
  [233] = 8,
    ACTIONS(79), 1,
      anon_sym_PIPE,
    ACTIONS(81), 1,
      sym__strict_token,
    ACTIONS(83), 1,
      anon_sym_COLON,
    ACTIONS(85), 1,
      anon_sym_RBRACK,
    STATE(27), 1,
      aux_sym_strict_text_repeat1,
    STATE(39), 1,
      sym_strict_text,
    STATE(55), 1,
      aux_sym_ortho_choice_repeat1,
    ACTIONS(5), 2,
      sym_simple_comment,
      sym__ws,
  [259] = 5,
    ACTIONS(3), 1,
      sym_simple_comment,
    ACTIONS(5), 1,
      sym__ws,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 3,
      ts_builtin_sym_end,
      sym_info_comment,
      sym__lf,
    STATE(23), 3,
      sym__orthogram,
      sym_ortho_gap,
      sym_ortho_choice,
  [279] = 5,
    ACTIONS(3), 1,
      sym_simple_comment,
    ACTIONS(5), 1,
      sym__ws,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 2,
      sym_info_comment,
      sym__lf,
    STATE(44), 3,
      sym__orthogram,
      sym_ortho_gap,
      sym_ortho_choice,
  [298] = 5,
    ACTIONS(3), 1,
      sym_simple_comment,
    ACTIONS(5), 1,
      sym__ws,
    ACTIONS(89), 1,
      sym__token,
    STATE(20), 1,
      aux_sym_text_repeat1,
    ACTIONS(67), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_info_comment,
      sym__lf,
  [317] = 6,
    ACTIONS(3), 1,
      sym_simple_comment,
    ACTIONS(5), 1,
      sym__ws,
    ACTIONS(65), 1,
      anon_sym_DASH_GT,
    ACTIONS(91), 1,
      sym__token,
    STATE(17), 1,
      aux_sym_text_repeat1,
    ACTIONS(60), 3,
      anon_sym_LBRACK,
      sym_info_comment,
      sym__lf,
  [338] = 6,
    ACTIONS(3), 1,
      sym_simple_comment,
    ACTIONS(5), 1,
      sym__ws,
    ACTIONS(71), 1,
      anon_sym_DASH_GT,
    ACTIONS(94), 1,
      sym__token,
    STATE(17), 1,
      aux_sym_text_repeat1,
    ACTIONS(67), 3,
      anon_sym_LBRACK,
      sym_info_comment,
      sym__lf,
  [359] = 6,
    ACTIONS(3), 1,
      sym_simple_comment,
    ACTIONS(5), 1,
      sym__ws,
    ACTIONS(47), 1,
      sym__token,
    STATE(16), 1,
      aux_sym_text_repeat1,
    STATE(52), 1,
      sym_text,
    ACTIONS(96), 3,
      ts_builtin_sym_end,
      sym_info_comment,
      sym__lf,
  [380] = 5,
    ACTIONS(3), 1,
      sym_simple_comment,
    ACTIONS(5), 1,
      sym__ws,
    ACTIONS(98), 1,
      sym__token,
    STATE(20), 1,
      aux_sym_text_repeat1,
    ACTIONS(60), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_info_comment,
      sym__lf,
  [399] = 3,
    ACTIONS(3), 1,
      sym_simple_comment,
    ACTIONS(5), 1,
      sym__ws,
    ACTIONS(17), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym__token,
      sym_info_comment,
      sym__lf,
  [413] = 3,
    ACTIONS(3), 1,
      sym_simple_comment,
    ACTIONS(5), 1,
      sym__ws,
    ACTIONS(101), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym__token,
      sym_info_comment,
      sym__lf,
  [427] = 3,
    ACTIONS(3), 1,
      sym_simple_comment,
    ACTIONS(5), 1,
      sym__ws,
    ACTIONS(37), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym__token,
      sym_info_comment,
      sym__lf,
  [441] = 3,
    ACTIONS(3), 1,
      sym_simple_comment,
    ACTIONS(5), 1,
      sym__ws,
    ACTIONS(104), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym__token,
      sym_info_comment,
      sym__lf,
  [455] = 5,
    ACTIONS(3), 1,
      sym_simple_comment,
    ACTIONS(5), 1,
      sym__ws,
    ACTIONS(106), 1,
      sym__token,
    STATE(25), 1,
      aux_sym_text_repeat1,
    ACTIONS(60), 3,
      anon_sym_LBRACK,
      sym_info_comment,
      sym__lf,
  [473] = 6,
    ACTIONS(3), 1,
      sym_simple_comment,
    ACTIONS(5), 1,
      sym__ws,
    ACTIONS(49), 1,
      sym__token,
    STATE(29), 1,
      aux_sym_text_repeat1,
    STATE(52), 1,
      sym_text,
    ACTIONS(96), 2,
      sym_info_comment,
      sym__lf,
  [493] = 4,
    ACTIONS(111), 1,
      sym__strict_token,
    STATE(30), 1,
      aux_sym_strict_text_repeat1,
    ACTIONS(5), 2,
      sym_simple_comment,
      sym__ws,
    ACTIONS(109), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_PIPE,
  [509] = 3,
    ACTIONS(3), 1,
      sym_simple_comment,
    ACTIONS(5), 1,
      sym__ws,
    ACTIONS(113), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym__token,
      sym_info_comment,
      sym__lf,
  [523] = 5,
    ACTIONS(3), 1,
      sym_simple_comment,
    ACTIONS(5), 1,
      sym__ws,
    ACTIONS(116), 1,
      sym__token,
    STATE(25), 1,
      aux_sym_text_repeat1,
    ACTIONS(67), 3,
      anon_sym_LBRACK,
      sym_info_comment,
      sym__lf,
  [541] = 4,
    ACTIONS(120), 1,
      sym__strict_token,
    STATE(30), 1,
      aux_sym_strict_text_repeat1,
    ACTIONS(5), 2,
      sym_simple_comment,
      sym__ws,
    ACTIONS(118), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_PIPE,
  [557] = 3,
    ACTIONS(3), 1,
      sym_simple_comment,
    ACTIONS(5), 1,
      sym__ws,
    ACTIONS(123), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym__token,
      sym_info_comment,
      sym__lf,
  [571] = 3,
    ACTIONS(3), 1,
      sym_simple_comment,
    ACTIONS(5), 1,
      sym__ws,
    ACTIONS(125), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym__token,
      sym_info_comment,
      sym__lf,
  [585] = 3,
    ACTIONS(3), 1,
      sym_simple_comment,
    ACTIONS(5), 1,
      sym__ws,
    ACTIONS(127), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym__token,
      sym_info_comment,
      sym__lf,
  [599] = 3,
    ACTIONS(3), 1,
      sym_simple_comment,
    ACTIONS(5), 1,
      sym__ws,
    ACTIONS(125), 4,
      anon_sym_LBRACK,
      sym__token,
      sym_info_comment,
      sym__lf,
  [612] = 3,
    ACTIONS(3), 1,
      sym_simple_comment,
    ACTIONS(5), 1,
      sym__ws,
    ACTIONS(113), 4,
      anon_sym_LBRACK,
      sym__token,
      sym_info_comment,
      sym__lf,
  [625] = 3,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(5), 2,
      sym_simple_comment,
      sym__ws,
    STATE(44), 3,
      sym__orthogram,
      sym_ortho_gap,
      sym_ortho_choice,
  [638] = 5,
    ACTIONS(79), 1,
      anon_sym_PIPE,
    ACTIONS(129), 1,
      anon_sym_COLON,
    ACTIONS(131), 1,
      anon_sym_RBRACK,
    STATE(51), 1,
      aux_sym_ortho_choice_repeat1,
    ACTIONS(5), 2,
      sym_simple_comment,
      sym__ws,
  [655] = 3,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(5), 2,
      sym_simple_comment,
      sym__ws,
    STATE(23), 3,
      sym__orthogram,
      sym_ortho_gap,
      sym_ortho_choice,
  [668] = 5,
    ACTIONS(79), 1,
      anon_sym_PIPE,
    ACTIONS(133), 1,
      anon_sym_COLON,
    ACTIONS(135), 1,
      anon_sym_RBRACK,
    STATE(53), 1,
      aux_sym_ortho_choice_repeat1,
    ACTIONS(5), 2,
      sym_simple_comment,
      sym__ws,
  [685] = 4,
    ACTIONS(137), 1,
      sym__token,
    STATE(40), 1,
      aux_sym_text_repeat1,
    ACTIONS(5), 2,
      sym_simple_comment,
      sym__ws,
    ACTIONS(60), 2,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [700] = 4,
    ACTIONS(140), 1,
      sym__token,
    STATE(40), 1,
      aux_sym_text_repeat1,
    ACTIONS(5), 2,
      sym_simple_comment,
      sym__ws,
    ACTIONS(67), 2,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [715] = 3,
    ACTIONS(3), 1,
      sym_simple_comment,
    ACTIONS(5), 1,
      sym__ws,
    ACTIONS(101), 4,
      anon_sym_LBRACK,
      sym__token,
      sym_info_comment,
      sym__lf,
  [728] = 3,
    ACTIONS(3), 1,
      sym_simple_comment,
    ACTIONS(5), 1,
      sym__ws,
    ACTIONS(123), 4,
      anon_sym_LBRACK,
      sym__token,
      sym_info_comment,
      sym__lf,
  [741] = 3,
    ACTIONS(3), 1,
      sym_simple_comment,
    ACTIONS(5), 1,
      sym__ws,
    ACTIONS(37), 4,
      anon_sym_LBRACK,
      sym__token,
      sym_info_comment,
      sym__lf,
  [754] = 3,
    ACTIONS(3), 1,
      sym_simple_comment,
    ACTIONS(5), 1,
      sym__ws,
    ACTIONS(127), 4,
      anon_sym_LBRACK,
      sym__token,
      sym_info_comment,
      sym__lf,
  [767] = 3,
    ACTIONS(3), 1,
      sym_simple_comment,
    ACTIONS(5), 1,
      sym__ws,
    ACTIONS(104), 4,
      anon_sym_LBRACK,
      sym__token,
      sym_info_comment,
      sym__lf,
  [780] = 4,
    ACTIONS(3), 1,
      sym_simple_comment,
    ACTIONS(5), 1,
      sym__ws,
    ACTIONS(144), 1,
      sym_info_comment,
    ACTIONS(142), 2,
      ts_builtin_sym_end,
      sym__lf,
  [794] = 4,
    ACTIONS(146), 1,
      sym__token,
    STATE(41), 1,
      aux_sym_text_repeat1,
    STATE(68), 1,
      sym_text,
    ACTIONS(5), 2,
      sym_simple_comment,
      sym__ws,
  [808] = 4,
    ACTIONS(146), 1,
      sym__token,
    STATE(41), 1,
      aux_sym_text_repeat1,
    STATE(67), 1,
      sym_text,
    ACTIONS(5), 2,
      sym_simple_comment,
      sym__ws,
  [822] = 4,
    ACTIONS(146), 1,
      sym__token,
    STATE(41), 1,
      aux_sym_text_repeat1,
    STATE(65), 1,
      sym_text,
    ACTIONS(5), 2,
      sym_simple_comment,
      sym__ws,
  [836] = 4,
    ACTIONS(79), 1,
      anon_sym_PIPE,
    ACTIONS(148), 1,
      anon_sym_RBRACK,
    STATE(56), 1,
      aux_sym_ortho_choice_repeat1,
    ACTIONS(5), 2,
      sym_simple_comment,
      sym__ws,
  [850] = 3,
    ACTIONS(3), 1,
      sym_simple_comment,
    ACTIONS(5), 1,
      sym__ws,
    ACTIONS(150), 3,
      ts_builtin_sym_end,
      sym_info_comment,
      sym__lf,
  [862] = 4,
    ACTIONS(79), 1,
      anon_sym_PIPE,
    ACTIONS(152), 1,
      anon_sym_RBRACK,
    STATE(56), 1,
      aux_sym_ortho_choice_repeat1,
    ACTIONS(5), 2,
      sym_simple_comment,
      sym__ws,
  [876] = 4,
    ACTIONS(79), 1,
      anon_sym_PIPE,
    ACTIONS(154), 1,
      anon_sym_RBRACK,
    STATE(56), 1,
      aux_sym_ortho_choice_repeat1,
    ACTIONS(5), 2,
      sym_simple_comment,
      sym__ws,
  [890] = 4,
    ACTIONS(79), 1,
      anon_sym_PIPE,
    ACTIONS(156), 1,
      anon_sym_RBRACK,
    STATE(56), 1,
      aux_sym_ortho_choice_repeat1,
    ACTIONS(5), 2,
      sym_simple_comment,
      sym__ws,
  [904] = 4,
    ACTIONS(158), 1,
      anon_sym_RBRACK,
    ACTIONS(160), 1,
      anon_sym_PIPE,
    STATE(56), 1,
      aux_sym_ortho_choice_repeat1,
    ACTIONS(5), 2,
      sym_simple_comment,
      sym__ws,
  [918] = 4,
    ACTIONS(81), 1,
      sym__strict_token,
    STATE(27), 1,
      aux_sym_strict_text_repeat1,
    STATE(62), 1,
      sym_strict_text,
    ACTIONS(5), 2,
      sym_simple_comment,
      sym__ws,
  [932] = 4,
    ACTIONS(146), 1,
      sym__token,
    STATE(41), 1,
      aux_sym_text_repeat1,
    STATE(66), 1,
      sym_text,
    ACTIONS(5), 2,
      sym_simple_comment,
      sym__ws,
  [946] = 2,
    ACTIONS(5), 2,
      sym_simple_comment,
      sym__ws,
    ACTIONS(163), 2,
      ts_builtin_sym_end,
      sym__lf,
  [955] = 3,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(165), 1,
      sym__lf,
    ACTIONS(5), 2,
      sym_simple_comment,
      sym__ws,
  [966] = 3,
    ACTIONS(165), 1,
      sym__lf,
    ACTIONS(167), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_simple_comment,
      sym__ws,
  [977] = 2,
    ACTIONS(5), 2,
      sym_simple_comment,
      sym__ws,
    ACTIONS(169), 2,
      anon_sym_RBRACK,
      anon_sym_PIPE,
  [986] = 2,
    ACTIONS(171), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_simple_comment,
      sym__ws,
  [994] = 2,
    ACTIONS(165), 1,
      sym__lf,
    ACTIONS(5), 2,
      sym_simple_comment,
      sym__ws,
  [1002] = 2,
    ACTIONS(173), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_simple_comment,
      sym__ws,
  [1010] = 2,
    ACTIONS(175), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_simple_comment,
      sym__ws,
  [1018] = 2,
    ACTIONS(177), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_simple_comment,
      sym__ws,
  [1026] = 2,
    ACTIONS(179), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_simple_comment,
      sym__ws,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 30,
  [SMALL_STATE(6)] = 60,
  [SMALL_STATE(7)] = 89,
  [SMALL_STATE(8)] = 118,
  [SMALL_STATE(9)] = 141,
  [SMALL_STATE(10)] = 163,
  [SMALL_STATE(11)] = 185,
  [SMALL_STATE(12)] = 207,
  [SMALL_STATE(13)] = 233,
  [SMALL_STATE(14)] = 259,
  [SMALL_STATE(15)] = 279,
  [SMALL_STATE(16)] = 298,
  [SMALL_STATE(17)] = 317,
  [SMALL_STATE(18)] = 338,
  [SMALL_STATE(19)] = 359,
  [SMALL_STATE(20)] = 380,
  [SMALL_STATE(21)] = 399,
  [SMALL_STATE(22)] = 413,
  [SMALL_STATE(23)] = 427,
  [SMALL_STATE(24)] = 441,
  [SMALL_STATE(25)] = 455,
  [SMALL_STATE(26)] = 473,
  [SMALL_STATE(27)] = 493,
  [SMALL_STATE(28)] = 509,
  [SMALL_STATE(29)] = 523,
  [SMALL_STATE(30)] = 541,
  [SMALL_STATE(31)] = 557,
  [SMALL_STATE(32)] = 571,
  [SMALL_STATE(33)] = 585,
  [SMALL_STATE(34)] = 599,
  [SMALL_STATE(35)] = 612,
  [SMALL_STATE(36)] = 625,
  [SMALL_STATE(37)] = 638,
  [SMALL_STATE(38)] = 655,
  [SMALL_STATE(39)] = 668,
  [SMALL_STATE(40)] = 685,
  [SMALL_STATE(41)] = 700,
  [SMALL_STATE(42)] = 715,
  [SMALL_STATE(43)] = 728,
  [SMALL_STATE(44)] = 741,
  [SMALL_STATE(45)] = 754,
  [SMALL_STATE(46)] = 767,
  [SMALL_STATE(47)] = 780,
  [SMALL_STATE(48)] = 794,
  [SMALL_STATE(49)] = 808,
  [SMALL_STATE(50)] = 822,
  [SMALL_STATE(51)] = 836,
  [SMALL_STATE(52)] = 850,
  [SMALL_STATE(53)] = 862,
  [SMALL_STATE(54)] = 876,
  [SMALL_STATE(55)] = 890,
  [SMALL_STATE(56)] = 904,
  [SMALL_STATE(57)] = 918,
  [SMALL_STATE(58)] = 932,
  [SMALL_STATE(59)] = 946,
  [SMALL_STATE(60)] = 955,
  [SMALL_STATE(61)] = 966,
  [SMALL_STATE(62)] = 977,
  [SMALL_STATE(63)] = 986,
  [SMALL_STATE(64)] = 994,
  [SMALL_STATE(65)] = 1002,
  [SMALL_STATE(66)] = 1010,
  [SMALL_STATE(67)] = 1018,
  [SMALL_STATE(68)] = 1026,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(64),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stmt_complex_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stmt_complex_repeat1, 2), SHIFT_REPEAT(41),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stmt_complex_repeat1, 2), SHIFT_REPEAT(13),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt_complex, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stmt_complex_repeat1, 2), SHIFT_REPEAT(12),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt_plain, 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(9),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt_complex, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(17),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt_translation, 2, .production_id = 1),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(20),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_ortho_gap, 2), REDUCE(sym_ortho_choice, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ortho_choice, 4, .production_id = 9),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(25),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_strict_text, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_ortho_gap, 3, .production_id = 3), REDUCE(sym_ortho_choice, 3, .production_id = 4),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_strict_text_repeat1, 2),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_strict_text_repeat1, 2), SHIFT_REPEAT(30),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ortho_choice, 3, .production_id = 5),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ortho_gap, 5, .production_id = 10),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ortho_gap, 4, .production_id = 8),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(40),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt_translation, 3, .production_id = 7),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ortho_choice_repeat1, 2, .production_id = 6),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ortho_choice_repeat1, 2, .production_id = 6), SHIFT_REPEAT(57),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ortho_choice_repeat1, 2, .production_id = 2),
  [171] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
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

TS_PUBLIC const TSLanguage *tree_sitter_tort() {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym__token,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
