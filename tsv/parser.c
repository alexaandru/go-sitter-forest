#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 42
#define LARGE_STATE_COUNT 31
#define SYMBOL_COUNT 19
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  aux_sym_document_token1 = 1,
  anon_sym_TAB = 2,
  sym_text = 3,
  aux_sym_number_token1 = 4,
  aux_sym_number_token2 = 5,
  aux_sym_float_token1 = 6,
  aux_sym_float_token2 = 7,
  anon_sym_true = 8,
  anon_sym_false = 9,
  sym_document = 10,
  sym_row = 11,
  sym_field = 12,
  sym_number = 13,
  sym_float = 14,
  sym_boolean = 15,
  aux_sym_document_repeat1 = 16,
  aux_sym_row_repeat1 = 17,
  aux_sym_row_repeat2 = 18,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_document_token1] = "document_token1",
  [anon_sym_TAB] = "\t",
  [sym_text] = "text",
  [aux_sym_number_token1] = "number_token1",
  [aux_sym_number_token2] = "number_token2",
  [aux_sym_float_token1] = "float_token1",
  [aux_sym_float_token2] = "float_token2",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_document] = "document",
  [sym_row] = "row",
  [sym_field] = "field",
  [sym_number] = "number",
  [sym_float] = "float",
  [sym_boolean] = "boolean",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_row_repeat1] = "row_repeat1",
  [aux_sym_row_repeat2] = "row_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_document_token1] = aux_sym_document_token1,
  [anon_sym_TAB] = anon_sym_TAB,
  [sym_text] = sym_text,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [aux_sym_number_token2] = aux_sym_number_token2,
  [aux_sym_float_token1] = aux_sym_float_token1,
  [aux_sym_float_token2] = aux_sym_float_token2,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_document] = sym_document,
  [sym_row] = sym_row,
  [sym_field] = sym_field,
  [sym_number] = sym_number,
  [sym_float] = sym_float,
  [sym_boolean] = sym_boolean,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_row_repeat1] = aux_sym_row_repeat1,
  [aux_sym_row_repeat2] = aux_sym_row_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_document_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_TAB] = {
    .visible = true,
    .named = false,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_number_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_row] = {
    .visible = true,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_row_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_row_repeat2] = {
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
  [10] = 8,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 4,
  [15] = 3,
  [16] = 6,
  [17] = 2,
  [18] = 9,
  [19] = 12,
  [20] = 11,
  [21] = 13,
  [22] = 22,
  [23] = 22,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 24,
  [29] = 29,
  [30] = 30,
  [31] = 26,
  [32] = 25,
  [33] = 27,
  [34] = 30,
  [35] = 35,
  [36] = 29,
  [37] = 24,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(9);
      ADVANCE_MAP(
        '\t', 12,
        '\n', 10,
        '\r', 10,
        '"', 1,
        '.', 4,
        '0', 22,
        'f', 2,
        't', 3,
      );
      if (lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(14);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(21);
      END_STATE();
    case 3:
      if (lookahead == 'r') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(21);
      END_STATE();
    case 4:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(21);
      END_STATE();
    case 5:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 6:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(21);
      END_STATE();
    case 7:
      if (eof) ADVANCE(9);
      if (lookahead == '\t') ADVANCE(13);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '.') ADVANCE(4);
      if (lookahead == '0') ADVANCE(22);
      if (lookahead == 'f') ADVANCE(2);
      if (lookahead == 't') ADVANCE(3);
      if (('\n' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 8:
      if (eof) ADVANCE(9);
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == '\r') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (lookahead == '\t') ADVANCE(12);
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead == '\r') ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == '\r') ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(12);
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead == '\r') ADVANCE(10);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '"') ADVANCE(1);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(21);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(21);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(21);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(21);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'u') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(21);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(21);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(21);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 7},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 7},
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
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 7},
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
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 8},
  [41] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_document_token1] = ACTIONS(1),
    [anon_sym_TAB] = ACTIONS(1),
    [sym_text] = ACTIONS(1),
    [aux_sym_number_token1] = ACTIONS(1),
    [aux_sym_number_token2] = ACTIONS(1),
    [aux_sym_float_token1] = ACTIONS(1),
    [aux_sym_float_token2] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(41),
    [sym_row] = STATE(39),
    [sym_field] = STATE(4),
    [sym_number] = STATE(25),
    [sym_float] = STATE(25),
    [sym_boolean] = STATE(25),
    [aux_sym_document_repeat1] = STATE(5),
    [aux_sym_row_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_TAB] = ACTIONS(5),
    [sym_text] = ACTIONS(7),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
  },
  [2] = {
    [sym_field] = STATE(2),
    [sym_number] = STATE(25),
    [sym_float] = STATE(25),
    [sym_boolean] = STATE(25),
    [aux_sym_row_repeat1] = STATE(22),
    [aux_sym_row_repeat2] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(15),
    [aux_sym_document_token1] = ACTIONS(17),
    [anon_sym_TAB] = ACTIONS(19),
    [sym_text] = ACTIONS(22),
    [aux_sym_number_token1] = ACTIONS(25),
    [aux_sym_number_token2] = ACTIONS(25),
    [aux_sym_float_token1] = ACTIONS(28),
    [aux_sym_float_token2] = ACTIONS(28),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
  },
  [3] = {
    [sym_field] = STATE(2),
    [sym_number] = STATE(25),
    [sym_float] = STATE(25),
    [sym_boolean] = STATE(25),
    [aux_sym_row_repeat1] = STATE(11),
    [aux_sym_row_repeat2] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(34),
    [aux_sym_document_token1] = ACTIONS(36),
    [anon_sym_TAB] = ACTIONS(38),
    [sym_text] = ACTIONS(7),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
  },
  [4] = {
    [sym_field] = STATE(3),
    [sym_number] = STATE(25),
    [sym_float] = STATE(25),
    [sym_boolean] = STATE(25),
    [aux_sym_row_repeat1] = STATE(9),
    [aux_sym_row_repeat2] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(40),
    [aux_sym_document_token1] = ACTIONS(42),
    [anon_sym_TAB] = ACTIONS(44),
    [sym_text] = ACTIONS(7),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
  },
  [5] = {
    [sym_row] = STATE(38),
    [sym_field] = STATE(4),
    [sym_number] = STATE(25),
    [sym_float] = STATE(25),
    [sym_boolean] = STATE(25),
    [aux_sym_document_repeat1] = STATE(7),
    [aux_sym_row_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(46),
    [anon_sym_TAB] = ACTIONS(5),
    [sym_text] = ACTIONS(7),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
  },
  [6] = {
    [sym_field] = STATE(8),
    [sym_number] = STATE(25),
    [sym_float] = STATE(25),
    [sym_boolean] = STATE(25),
    [aux_sym_row_repeat1] = STATE(11),
    [aux_sym_row_repeat2] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(34),
    [aux_sym_document_token1] = ACTIONS(36),
    [anon_sym_TAB] = ACTIONS(38),
    [sym_text] = ACTIONS(7),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
  },
  [7] = {
    [sym_row] = STATE(40),
    [sym_field] = STATE(14),
    [sym_number] = STATE(32),
    [sym_float] = STATE(32),
    [sym_boolean] = STATE(32),
    [aux_sym_document_repeat1] = STATE(7),
    [aux_sym_row_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(48),
    [anon_sym_TAB] = ACTIONS(50),
    [sym_text] = ACTIONS(53),
    [aux_sym_number_token1] = ACTIONS(56),
    [aux_sym_number_token2] = ACTIONS(56),
    [aux_sym_float_token1] = ACTIONS(59),
    [aux_sym_float_token2] = ACTIONS(59),
    [anon_sym_true] = ACTIONS(62),
    [anon_sym_false] = ACTIONS(62),
  },
  [8] = {
    [sym_field] = STATE(2),
    [sym_number] = STATE(25),
    [sym_float] = STATE(25),
    [sym_boolean] = STATE(25),
    [aux_sym_row_repeat1] = STATE(13),
    [aux_sym_row_repeat2] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(65),
    [aux_sym_document_token1] = ACTIONS(67),
    [anon_sym_TAB] = ACTIONS(69),
    [sym_text] = ACTIONS(7),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
  },
  [9] = {
    [sym_field] = STATE(29),
    [sym_number] = STATE(25),
    [sym_float] = STATE(25),
    [sym_boolean] = STATE(25),
    [aux_sym_row_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(34),
    [aux_sym_document_token1] = ACTIONS(36),
    [anon_sym_TAB] = ACTIONS(71),
    [sym_text] = ACTIONS(7),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
  },
  [10] = {
    [sym_field] = STATE(17),
    [sym_number] = STATE(32),
    [sym_float] = STATE(32),
    [sym_boolean] = STATE(32),
    [aux_sym_row_repeat1] = STATE(21),
    [aux_sym_row_repeat2] = STATE(17),
    [aux_sym_document_token1] = ACTIONS(67),
    [anon_sym_TAB] = ACTIONS(73),
    [sym_text] = ACTIONS(75),
    [aux_sym_number_token1] = ACTIONS(77),
    [aux_sym_number_token2] = ACTIONS(77),
    [aux_sym_float_token1] = ACTIONS(79),
    [aux_sym_float_token2] = ACTIONS(79),
    [anon_sym_true] = ACTIONS(81),
    [anon_sym_false] = ACTIONS(81),
  },
  [11] = {
    [sym_field] = STATE(29),
    [sym_number] = STATE(25),
    [sym_float] = STATE(25),
    [sym_boolean] = STATE(25),
    [aux_sym_row_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(65),
    [aux_sym_document_token1] = ACTIONS(67),
    [anon_sym_TAB] = ACTIONS(71),
    [sym_text] = ACTIONS(7),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
  },
  [12] = {
    [sym_field] = STATE(6),
    [sym_number] = STATE(25),
    [sym_float] = STATE(25),
    [sym_boolean] = STATE(25),
    [aux_sym_row_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(40),
    [aux_sym_document_token1] = ACTIONS(42),
    [anon_sym_TAB] = ACTIONS(71),
    [sym_text] = ACTIONS(7),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
  },
  [13] = {
    [sym_field] = STATE(29),
    [sym_number] = STATE(25),
    [sym_float] = STATE(25),
    [sym_boolean] = STATE(25),
    [aux_sym_row_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(83),
    [aux_sym_document_token1] = ACTIONS(85),
    [anon_sym_TAB] = ACTIONS(71),
    [sym_text] = ACTIONS(7),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
  },
  [14] = {
    [sym_field] = STATE(15),
    [sym_number] = STATE(32),
    [sym_float] = STATE(32),
    [sym_boolean] = STATE(32),
    [aux_sym_row_repeat1] = STATE(18),
    [aux_sym_row_repeat2] = STATE(15),
    [aux_sym_document_token1] = ACTIONS(42),
    [anon_sym_TAB] = ACTIONS(87),
    [sym_text] = ACTIONS(75),
    [aux_sym_number_token1] = ACTIONS(77),
    [aux_sym_number_token2] = ACTIONS(77),
    [aux_sym_float_token1] = ACTIONS(79),
    [aux_sym_float_token2] = ACTIONS(79),
    [anon_sym_true] = ACTIONS(81),
    [anon_sym_false] = ACTIONS(81),
  },
  [15] = {
    [sym_field] = STATE(17),
    [sym_number] = STATE(32),
    [sym_float] = STATE(32),
    [sym_boolean] = STATE(32),
    [aux_sym_row_repeat1] = STATE(20),
    [aux_sym_row_repeat2] = STATE(17),
    [aux_sym_document_token1] = ACTIONS(36),
    [anon_sym_TAB] = ACTIONS(89),
    [sym_text] = ACTIONS(75),
    [aux_sym_number_token1] = ACTIONS(77),
    [aux_sym_number_token2] = ACTIONS(77),
    [aux_sym_float_token1] = ACTIONS(79),
    [aux_sym_float_token2] = ACTIONS(79),
    [anon_sym_true] = ACTIONS(81),
    [anon_sym_false] = ACTIONS(81),
  },
  [16] = {
    [sym_field] = STATE(10),
    [sym_number] = STATE(32),
    [sym_float] = STATE(32),
    [sym_boolean] = STATE(32),
    [aux_sym_row_repeat1] = STATE(20),
    [aux_sym_row_repeat2] = STATE(10),
    [aux_sym_document_token1] = ACTIONS(36),
    [anon_sym_TAB] = ACTIONS(89),
    [sym_text] = ACTIONS(75),
    [aux_sym_number_token1] = ACTIONS(77),
    [aux_sym_number_token2] = ACTIONS(77),
    [aux_sym_float_token1] = ACTIONS(79),
    [aux_sym_float_token2] = ACTIONS(79),
    [anon_sym_true] = ACTIONS(81),
    [anon_sym_false] = ACTIONS(81),
  },
  [17] = {
    [sym_field] = STATE(17),
    [sym_number] = STATE(32),
    [sym_float] = STATE(32),
    [sym_boolean] = STATE(32),
    [aux_sym_row_repeat1] = STATE(23),
    [aux_sym_row_repeat2] = STATE(17),
    [aux_sym_document_token1] = ACTIONS(17),
    [anon_sym_TAB] = ACTIONS(91),
    [sym_text] = ACTIONS(94),
    [aux_sym_number_token1] = ACTIONS(97),
    [aux_sym_number_token2] = ACTIONS(97),
    [aux_sym_float_token1] = ACTIONS(100),
    [aux_sym_float_token2] = ACTIONS(100),
    [anon_sym_true] = ACTIONS(103),
    [anon_sym_false] = ACTIONS(103),
  },
  [18] = {
    [sym_field] = STATE(36),
    [sym_number] = STATE(32),
    [sym_float] = STATE(32),
    [sym_boolean] = STATE(32),
    [aux_sym_row_repeat1] = STATE(28),
    [aux_sym_document_token1] = ACTIONS(36),
    [anon_sym_TAB] = ACTIONS(106),
    [sym_text] = ACTIONS(75),
    [aux_sym_number_token1] = ACTIONS(77),
    [aux_sym_number_token2] = ACTIONS(77),
    [aux_sym_float_token1] = ACTIONS(79),
    [aux_sym_float_token2] = ACTIONS(79),
    [anon_sym_true] = ACTIONS(81),
    [anon_sym_false] = ACTIONS(81),
  },
  [19] = {
    [sym_field] = STATE(16),
    [sym_number] = STATE(32),
    [sym_float] = STATE(32),
    [sym_boolean] = STATE(32),
    [aux_sym_row_repeat1] = STATE(28),
    [aux_sym_document_token1] = ACTIONS(42),
    [anon_sym_TAB] = ACTIONS(106),
    [sym_text] = ACTIONS(75),
    [aux_sym_number_token1] = ACTIONS(77),
    [aux_sym_number_token2] = ACTIONS(77),
    [aux_sym_float_token1] = ACTIONS(79),
    [aux_sym_float_token2] = ACTIONS(79),
    [anon_sym_true] = ACTIONS(81),
    [anon_sym_false] = ACTIONS(81),
  },
  [20] = {
    [sym_field] = STATE(36),
    [sym_number] = STATE(32),
    [sym_float] = STATE(32),
    [sym_boolean] = STATE(32),
    [aux_sym_row_repeat1] = STATE(28),
    [aux_sym_document_token1] = ACTIONS(67),
    [anon_sym_TAB] = ACTIONS(106),
    [sym_text] = ACTIONS(75),
    [aux_sym_number_token1] = ACTIONS(77),
    [aux_sym_number_token2] = ACTIONS(77),
    [aux_sym_float_token1] = ACTIONS(79),
    [aux_sym_float_token2] = ACTIONS(79),
    [anon_sym_true] = ACTIONS(81),
    [anon_sym_false] = ACTIONS(81),
  },
  [21] = {
    [sym_field] = STATE(36),
    [sym_number] = STATE(32),
    [sym_float] = STATE(32),
    [sym_boolean] = STATE(32),
    [aux_sym_row_repeat1] = STATE(28),
    [aux_sym_document_token1] = ACTIONS(85),
    [anon_sym_TAB] = ACTIONS(106),
    [sym_text] = ACTIONS(75),
    [aux_sym_number_token1] = ACTIONS(77),
    [aux_sym_number_token2] = ACTIONS(77),
    [aux_sym_float_token1] = ACTIONS(79),
    [aux_sym_float_token2] = ACTIONS(79),
    [anon_sym_true] = ACTIONS(81),
    [anon_sym_false] = ACTIONS(81),
  },
  [22] = {
    [sym_field] = STATE(29),
    [sym_number] = STATE(25),
    [sym_float] = STATE(25),
    [sym_boolean] = STATE(25),
    [aux_sym_row_repeat1] = STATE(37),
    [anon_sym_TAB] = ACTIONS(108),
    [sym_text] = ACTIONS(7),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
  },
  [23] = {
    [sym_field] = STATE(36),
    [sym_number] = STATE(32),
    [sym_float] = STATE(32),
    [sym_boolean] = STATE(32),
    [aux_sym_row_repeat1] = STATE(37),
    [anon_sym_TAB] = ACTIONS(108),
    [sym_text] = ACTIONS(75),
    [aux_sym_number_token1] = ACTIONS(77),
    [aux_sym_number_token2] = ACTIONS(77),
    [aux_sym_float_token1] = ACTIONS(79),
    [aux_sym_float_token2] = ACTIONS(79),
    [anon_sym_true] = ACTIONS(81),
    [anon_sym_false] = ACTIONS(81),
  },
  [24] = {
    [aux_sym_row_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(110),
    [aux_sym_document_token1] = ACTIONS(112),
    [anon_sym_TAB] = ACTIONS(114),
    [sym_text] = ACTIONS(112),
    [aux_sym_number_token1] = ACTIONS(112),
    [aux_sym_number_token2] = ACTIONS(112),
    [aux_sym_float_token1] = ACTIONS(112),
    [aux_sym_float_token2] = ACTIONS(112),
    [anon_sym_true] = ACTIONS(112),
    [anon_sym_false] = ACTIONS(112),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(117),
    [aux_sym_document_token1] = ACTIONS(119),
    [anon_sym_TAB] = ACTIONS(119),
    [sym_text] = ACTIONS(119),
    [aux_sym_number_token1] = ACTIONS(119),
    [aux_sym_number_token2] = ACTIONS(119),
    [aux_sym_float_token1] = ACTIONS(119),
    [aux_sym_float_token2] = ACTIONS(119),
    [anon_sym_true] = ACTIONS(119),
    [anon_sym_false] = ACTIONS(119),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(121),
    [aux_sym_document_token1] = ACTIONS(123),
    [anon_sym_TAB] = ACTIONS(123),
    [sym_text] = ACTIONS(123),
    [aux_sym_number_token1] = ACTIONS(123),
    [aux_sym_number_token2] = ACTIONS(123),
    [aux_sym_float_token1] = ACTIONS(123),
    [aux_sym_float_token2] = ACTIONS(123),
    [anon_sym_true] = ACTIONS(123),
    [anon_sym_false] = ACTIONS(123),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(125),
    [aux_sym_document_token1] = ACTIONS(127),
    [anon_sym_TAB] = ACTIONS(127),
    [sym_text] = ACTIONS(127),
    [aux_sym_number_token1] = ACTIONS(127),
    [aux_sym_number_token2] = ACTIONS(127),
    [aux_sym_float_token1] = ACTIONS(127),
    [aux_sym_float_token2] = ACTIONS(127),
    [anon_sym_true] = ACTIONS(127),
    [anon_sym_false] = ACTIONS(127),
  },
  [28] = {
    [aux_sym_row_repeat1] = STATE(28),
    [aux_sym_document_token1] = ACTIONS(112),
    [anon_sym_TAB] = ACTIONS(129),
    [sym_text] = ACTIONS(112),
    [aux_sym_number_token1] = ACTIONS(112),
    [aux_sym_number_token2] = ACTIONS(112),
    [aux_sym_float_token1] = ACTIONS(112),
    [aux_sym_float_token2] = ACTIONS(112),
    [anon_sym_true] = ACTIONS(112),
    [anon_sym_false] = ACTIONS(112),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(15),
    [aux_sym_document_token1] = ACTIONS(17),
    [anon_sym_TAB] = ACTIONS(17),
    [sym_text] = ACTIONS(17),
    [aux_sym_number_token1] = ACTIONS(17),
    [aux_sym_number_token2] = ACTIONS(17),
    [aux_sym_float_token1] = ACTIONS(17),
    [aux_sym_float_token2] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(132),
    [aux_sym_document_token1] = ACTIONS(134),
    [anon_sym_TAB] = ACTIONS(134),
    [sym_text] = ACTIONS(134),
    [aux_sym_number_token1] = ACTIONS(134),
    [aux_sym_number_token2] = ACTIONS(134),
    [aux_sym_float_token1] = ACTIONS(134),
    [aux_sym_float_token2] = ACTIONS(134),
    [anon_sym_true] = ACTIONS(134),
    [anon_sym_false] = ACTIONS(134),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(123), 9,
      aux_sym_document_token1,
      anon_sym_TAB,
      sym_text,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_float_token1,
      aux_sym_float_token2,
      anon_sym_true,
      anon_sym_false,
  [12] = 1,
    ACTIONS(119), 9,
      aux_sym_document_token1,
      anon_sym_TAB,
      sym_text,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_float_token1,
      aux_sym_float_token2,
      anon_sym_true,
      anon_sym_false,
  [24] = 1,
    ACTIONS(127), 9,
      aux_sym_document_token1,
      anon_sym_TAB,
      sym_text,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_float_token1,
      aux_sym_float_token2,
      anon_sym_true,
      anon_sym_false,
  [36] = 1,
    ACTIONS(134), 9,
      aux_sym_document_token1,
      anon_sym_TAB,
      sym_text,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_float_token1,
      aux_sym_float_token2,
      anon_sym_true,
      anon_sym_false,
  [48] = 2,
    ACTIONS(48), 2,
      ts_builtin_sym_end,
      anon_sym_TAB,
    ACTIONS(136), 7,
      sym_text,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_float_token1,
      aux_sym_float_token2,
      anon_sym_true,
      anon_sym_false,
  [62] = 1,
    ACTIONS(17), 9,
      aux_sym_document_token1,
      anon_sym_TAB,
      sym_text,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_float_token1,
      aux_sym_float_token2,
      anon_sym_true,
      anon_sym_false,
  [74] = 3,
    ACTIONS(138), 1,
      anon_sym_TAB,
    STATE(37), 1,
      aux_sym_row_repeat1,
    ACTIONS(112), 7,
      sym_text,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_float_token1,
      aux_sym_float_token2,
      anon_sym_true,
      anon_sym_false,
  [90] = 2,
    ACTIONS(141), 1,
      ts_builtin_sym_end,
    ACTIONS(143), 1,
      aux_sym_document_token1,
  [97] = 2,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
    ACTIONS(143), 1,
      aux_sym_document_token1,
  [104] = 1,
    ACTIONS(143), 1,
      aux_sym_document_token1,
  [108] = 1,
    ACTIONS(145), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(31)] = 0,
  [SMALL_STATE(32)] = 12,
  [SMALL_STATE(33)] = 24,
  [SMALL_STATE(34)] = 36,
  [SMALL_STATE(35)] = 48,
  [SMALL_STATE(36)] = 62,
  [SMALL_STATE(37)] = 74,
  [SMALL_STATE(38)] = 90,
  [SMALL_STATE(39)] = 97,
  [SMALL_STATE(40)] = 104,
  [SMALL_STATE(41)] = 108,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_row_repeat2, 2, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_row_repeat2, 2, 0, 0),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_row_repeat2, 2, 0, 0), SHIFT_REPEAT(22),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_row_repeat2, 2, 0, 0), SHIFT_REPEAT(25),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_row_repeat2, 2, 0, 0), SHIFT_REPEAT(27),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_row_repeat2, 2, 0, 0), SHIFT_REPEAT(26),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_row_repeat2, 2, 0, 0), SHIFT_REPEAT(30),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_row, 2, 0, 0),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_row, 2, 0, 0),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_row, 1, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_row, 1, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_row, 3, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_row, 3, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_row, 4, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_row, 4, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_row_repeat2, 2, 0, 0), SHIFT_REPEAT(23),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_row_repeat2, 2, 0, 0), SHIFT_REPEAT(32),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_row_repeat2, 2, 0, 0), SHIFT_REPEAT(33),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_row_repeat2, 2, 0, 0), SHIFT_REPEAT(31),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_row_repeat2, 2, 0, 0), SHIFT_REPEAT(34),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_row_repeat1, 2, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_row_repeat1, 2, 0, 0),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_row_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1, 0, 0),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_row_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_row_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [145] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

TS_PUBLIC const TSLanguage *tree_sitter_tsv(void) {
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
