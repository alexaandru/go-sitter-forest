#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 30
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 19
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  anon_sym_LBRACK = 1,
  aux_sym_section_name_token1 = 2,
  anon_sym_RBRACK = 3,
  aux_sym_section_name_token2 = 4,
  aux_sym_setting_token1 = 5,
  anon_sym_EQ = 6,
  aux_sym_setting_token2 = 7,
  aux_sym_comment_token1 = 8,
  aux_sym_comment_token2 = 9,
  sym_document = 10,
  sym_section = 11,
  sym_section_name = 12,
  sym_setting = 13,
  sym_comment = 14,
  sym__blank = 15,
  aux_sym_document_repeat1 = 16,
  aux_sym_document_repeat2 = 17,
  aux_sym_document_repeat3 = 18,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACK] = "[",
  [aux_sym_section_name_token1] = "text",
  [anon_sym_RBRACK] = "]",
  [aux_sym_section_name_token2] = "section_name_token2",
  [aux_sym_setting_token1] = "setting_name",
  [anon_sym_EQ] = "=",
  [aux_sym_setting_token2] = "setting_value",
  [aux_sym_comment_token1] = "comment_token1",
  [aux_sym_comment_token2] = "text",
  [sym_document] = "document",
  [sym_section] = "section",
  [sym_section_name] = "section_name",
  [sym_setting] = "setting",
  [sym_comment] = "comment",
  [sym__blank] = "_blank",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_document_repeat2] = "document_repeat2",
  [aux_sym_document_repeat3] = "document_repeat3",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [aux_sym_section_name_token1] = aux_sym_section_name_token1,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_section_name_token2] = aux_sym_section_name_token2,
  [aux_sym_setting_token1] = aux_sym_setting_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_setting_token2] = aux_sym_setting_token2,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [aux_sym_comment_token2] = aux_sym_section_name_token1,
  [sym_document] = sym_document,
  [sym_section] = sym_section,
  [sym_section_name] = sym_section_name,
  [sym_setting] = sym_setting,
  [sym_comment] = sym_comment,
  [sym__blank] = sym__blank,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_document_repeat2] = aux_sym_document_repeat2,
  [aux_sym_document_repeat3] = aux_sym_document_repeat3,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_section_name_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_section_name_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_setting_token2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_token2] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_section] = {
    .visible = true,
    .named = true,
  },
  [sym_section_name] = {
    .visible = true,
    .named = true,
  },
  [sym_setting] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__blank] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_document_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_document_repeat3] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_blank = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_blank] = "blank",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_blank, 0},
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
  [28] = 17,
  [29] = 29,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(6);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '=') ADVANCE(14);
      if (lookahead == '[') ADVANCE(7);
      if (lookahead == ']') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(18);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(12);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(17);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(10);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(13);
      END_STATE();
    case 5:
      if (eof) ADVANCE(6);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '[') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(18);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '=') ADVANCE(13);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym_section_name_token1);
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(10);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_section_name_token1);
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_section_name_token1);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_section_name_token2);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_setting_token1);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_setting_token2);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_setting_token2);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_setting_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(21);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(21);
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
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 20},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {(TSStateId)(-1)},
  [29] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [sym__blank] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [aux_sym_section_name_token2] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(5),
  },
  [1] = {
    [sym_document] = STATE(20),
    [sym_section] = STATE(18),
    [sym_section_name] = STATE(5),
    [sym_setting] = STATE(13),
    [sym_comment] = STATE(1),
    [sym__blank] = STATE(1),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_document_repeat2] = STATE(3),
    [aux_sym_document_repeat3] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [aux_sym_section_name_token2] = ACTIONS(11),
    [aux_sym_setting_token1] = ACTIONS(13),
    [aux_sym_comment_token1] = ACTIONS(5),
  },
  [2] = {
    [sym_section] = STATE(18),
    [sym_section_name] = STATE(5),
    [sym_setting] = STATE(13),
    [sym_comment] = STATE(2),
    [sym__blank] = STATE(2),
    [aux_sym_document_repeat1] = STATE(12),
    [aux_sym_document_repeat2] = STATE(4),
    [aux_sym_document_repeat3] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(9),
    [aux_sym_section_name_token2] = ACTIONS(11),
    [aux_sym_setting_token1] = ACTIONS(13),
    [aux_sym_comment_token1] = ACTIONS(5),
  },
  [3] = {
    [sym_section] = STATE(18),
    [sym_section_name] = STATE(5),
    [sym_setting] = STATE(13),
    [sym_comment] = STATE(3),
    [sym__blank] = STATE(3),
    [aux_sym_document_repeat2] = STATE(10),
    [aux_sym_document_repeat3] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(9),
    [aux_sym_section_name_token2] = ACTIONS(3),
    [aux_sym_setting_token1] = ACTIONS(13),
    [aux_sym_comment_token1] = ACTIONS(5),
  },
  [4] = {
    [sym_section] = STATE(18),
    [sym_section_name] = STATE(5),
    [sym_setting] = STATE(13),
    [sym_comment] = STATE(4),
    [sym__blank] = STATE(4),
    [aux_sym_document_repeat2] = STATE(10),
    [aux_sym_document_repeat3] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(9),
    [aux_sym_section_name_token2] = ACTIONS(3),
    [aux_sym_setting_token1] = ACTIONS(13),
    [aux_sym_comment_token1] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      aux_sym_section_name_token2,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(13), 1,
      aux_sym_setting_token1,
    STATE(8), 1,
      aux_sym_document_repeat2,
    STATE(13), 1,
      sym_setting,
    ACTIONS(19), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(5), 2,
      sym_comment,
      sym__blank,
  [24] = 8,
    ACTIONS(3), 1,
      aux_sym_section_name_token2,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      sym_section_name,
    STATE(9), 1,
      aux_sym_document_repeat3,
    STATE(18), 1,
      sym_section,
    STATE(6), 2,
      sym_comment,
      sym__blank,
  [50] = 8,
    ACTIONS(3), 1,
      aux_sym_section_name_token2,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      sym_section_name,
    STATE(9), 1,
      aux_sym_document_repeat3,
    STATE(18), 1,
      sym_section,
    STATE(7), 2,
      sym_comment,
      sym__blank,
  [76] = 7,
    ACTIONS(3), 1,
      aux_sym_section_name_token2,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(13), 1,
      aux_sym_setting_token1,
    STATE(10), 1,
      aux_sym_document_repeat2,
    STATE(13), 1,
      sym_setting,
    ACTIONS(21), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(8), 2,
      sym_comment,
      sym__blank,
  [100] = 7,
    ACTIONS(3), 1,
      aux_sym_section_name_token2,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    STATE(5), 1,
      sym_section_name,
    STATE(18), 1,
      sym_section,
    STATE(9), 3,
      sym_comment,
      sym__blank,
      aux_sym_document_repeat3,
  [124] = 6,
    ACTIONS(3), 1,
      aux_sym_section_name_token2,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(30), 1,
      aux_sym_setting_token1,
    STATE(13), 1,
      sym_setting,
    ACTIONS(28), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(10), 3,
      sym_comment,
      sym__blank,
      aux_sym_document_repeat2,
  [146] = 8,
    ACTIONS(3), 1,
      aux_sym_section_name_token2,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      sym_section_name,
    STATE(9), 1,
      aux_sym_document_repeat3,
    STATE(18), 1,
      sym_section,
    STATE(11), 2,
      sym_comment,
      sym__blank,
  [172] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(37), 1,
      aux_sym_section_name_token2,
    ACTIONS(35), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      aux_sym_setting_token1,
    STATE(12), 3,
      sym_comment,
      sym__blank,
      aux_sym_document_repeat1,
  [189] = 4,
    ACTIONS(3), 1,
      aux_sym_section_name_token2,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(13), 2,
      sym_comment,
      sym__blank,
    ACTIONS(40), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      aux_sym_setting_token1,
  [205] = 4,
    ACTIONS(3), 1,
      aux_sym_section_name_token2,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(14), 2,
      sym_comment,
      sym__blank,
    ACTIONS(42), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      aux_sym_setting_token1,
  [221] = 4,
    ACTIONS(3), 1,
      aux_sym_section_name_token2,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(15), 2,
      sym_comment,
      sym__blank,
    ACTIONS(44), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      aux_sym_setting_token1,
  [237] = 4,
    ACTIONS(3), 1,
      aux_sym_section_name_token2,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(16), 2,
      sym_comment,
      sym__blank,
    ACTIONS(46), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      aux_sym_setting_token1,
  [253] = 3,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    STATE(17), 2,
      sym_comment,
      sym__blank,
    ACTIONS(48), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      aux_sym_section_name_token2,
      aux_sym_setting_token1,
  [267] = 4,
    ACTIONS(3), 1,
      aux_sym_section_name_token2,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(50), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(18), 2,
      sym_comment,
      sym__blank,
  [282] = 4,
    ACTIONS(52), 1,
      aux_sym_section_name_token1,
    ACTIONS(54), 1,
      aux_sym_section_name_token2,
    ACTIONS(56), 1,
      aux_sym_comment_token1,
    STATE(19), 2,
      sym_comment,
      sym__blank,
  [296] = 4,
    ACTIONS(3), 1,
      aux_sym_section_name_token2,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    STATE(20), 2,
      sym_comment,
      sym__blank,
  [310] = 4,
    ACTIONS(3), 1,
      aux_sym_section_name_token2,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(60), 1,
      anon_sym_EQ,
    STATE(21), 2,
      sym_comment,
      sym__blank,
  [324] = 4,
    ACTIONS(54), 1,
      aux_sym_section_name_token2,
    ACTIONS(56), 1,
      aux_sym_comment_token1,
    ACTIONS(62), 1,
      aux_sym_comment_token2,
    STATE(22), 2,
      sym_comment,
      sym__blank,
  [338] = 4,
    ACTIONS(3), 1,
      aux_sym_section_name_token2,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(64), 1,
      anon_sym_RBRACK,
    STATE(23), 2,
      sym_comment,
      sym__blank,
  [352] = 4,
    ACTIONS(56), 1,
      aux_sym_comment_token1,
    ACTIONS(66), 1,
      aux_sym_section_name_token2,
    ACTIONS(68), 1,
      aux_sym_setting_token2,
    STATE(24), 2,
      sym_comment,
      sym__blank,
  [366] = 3,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(70), 1,
      aux_sym_section_name_token2,
    STATE(25), 2,
      sym_comment,
      sym__blank,
  [377] = 3,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(72), 1,
      aux_sym_section_name_token2,
    STATE(26), 2,
      sym_comment,
      sym__blank,
  [388] = 3,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(74), 1,
      aux_sym_section_name_token2,
    STATE(27), 2,
      sym_comment,
      sym__blank,
  [399] = 1,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
  [403] = 1,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 24,
  [SMALL_STATE(7)] = 50,
  [SMALL_STATE(8)] = 76,
  [SMALL_STATE(9)] = 100,
  [SMALL_STATE(10)] = 124,
  [SMALL_STATE(11)] = 146,
  [SMALL_STATE(12)] = 172,
  [SMALL_STATE(13)] = 189,
  [SMALL_STATE(14)] = 205,
  [SMALL_STATE(15)] = 221,
  [SMALL_STATE(16)] = 237,
  [SMALL_STATE(17)] = 253,
  [SMALL_STATE(18)] = 267,
  [SMALL_STATE(19)] = 282,
  [SMALL_STATE(20)] = 296,
  [SMALL_STATE(21)] = 310,
  [SMALL_STATE(22)] = 324,
  [SMALL_STATE(23)] = 338,
  [SMALL_STATE(24)] = 352,
  [SMALL_STATE(25)] = 366,
  [SMALL_STATE(26)] = 377,
  [SMALL_STATE(27)] = 388,
  [SMALL_STATE(28)] = 399,
  [SMALL_STATE(29)] = 403,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat3, 2, 0, 0),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat3, 2, 0, 0), SHIFT_REPEAT(19),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2, 0, 0),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2, 0, 0), SHIFT_REPEAT(21),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 1, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_name, 4, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 3, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 4, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__blank, 1, 0, 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat3, 1, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [58] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3, 0, 0),
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

TS_PUBLIC const TSLanguage *tree_sitter_ini(void) {
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
