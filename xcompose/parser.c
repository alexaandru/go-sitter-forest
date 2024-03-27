#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 69
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 31
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  aux_sym_compose_token1 = 1,
  anon_sym_include = 2,
  anon_sym_DQUOTE = 3,
  anon_sym_PERCENTL = 4,
  anon_sym_PERCENTH = 5,
  anon_sym_PERCENTS = 6,
  anon_sym_COLON = 7,
  anon_sym_BANG = 8,
  anon_sym_TILDE = 9,
  anon_sym_None = 10,
  anon_sym_LT = 11,
  anon_sym_GT = 12,
  sym_modifier = 13,
  sym_keysym = 14,
  aux_sym_text_token1 = 15,
  sym_octal = 16,
  sym_hex = 17,
  sym_comment = 18,
  sym__space = 19,
  sym_compose = 20,
  sym_include = 21,
  sym_sequence = 22,
  sym_event = 23,
  sym_result = 24,
  sym_string = 25,
  sym_text = 26,
  aux_sym_compose_repeat1 = 27,
  aux_sym_sequence_repeat1 = 28,
  aux_sym_event_repeat1 = 29,
  aux_sym_text_repeat1 = 30,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_compose_token1] = "compose_token1",
  [anon_sym_include] = "include",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_PERCENTL] = "%L",
  [anon_sym_PERCENTH] = "%H",
  [anon_sym_PERCENTS] = "%S",
  [anon_sym_COLON] = ":",
  [anon_sym_BANG] = "!",
  [anon_sym_TILDE] = "~",
  [anon_sym_None] = "None",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [sym_modifier] = "modifier",
  [sym_keysym] = "keysym",
  [aux_sym_text_token1] = "text_token1",
  [sym_octal] = "octal",
  [sym_hex] = "hex",
  [sym_comment] = "comment",
  [sym__space] = "_space",
  [sym_compose] = "compose",
  [sym_include] = "include",
  [sym_sequence] = "sequence",
  [sym_event] = "event",
  [sym_result] = "result",
  [sym_string] = "string",
  [sym_text] = "text",
  [aux_sym_compose_repeat1] = "compose_repeat1",
  [aux_sym_sequence_repeat1] = "sequence_repeat1",
  [aux_sym_event_repeat1] = "event_repeat1",
  [aux_sym_text_repeat1] = "text_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_compose_token1] = aux_sym_compose_token1,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_PERCENTL] = anon_sym_PERCENTL,
  [anon_sym_PERCENTH] = anon_sym_PERCENTH,
  [anon_sym_PERCENTS] = anon_sym_PERCENTS,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_None] = anon_sym_None,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [sym_modifier] = sym_modifier,
  [sym_keysym] = sym_keysym,
  [aux_sym_text_token1] = aux_sym_text_token1,
  [sym_octal] = sym_octal,
  [sym_hex] = sym_hex,
  [sym_comment] = sym_comment,
  [sym__space] = sym__space,
  [sym_compose] = sym_compose,
  [sym_include] = sym_include,
  [sym_sequence] = sym_sequence,
  [sym_event] = sym_event,
  [sym_result] = sym_result,
  [sym_string] = sym_string,
  [sym_text] = sym_text,
  [aux_sym_compose_repeat1] = aux_sym_compose_repeat1,
  [aux_sym_sequence_repeat1] = aux_sym_sequence_repeat1,
  [aux_sym_event_repeat1] = aux_sym_event_repeat1,
  [aux_sym_text_repeat1] = aux_sym_text_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_compose_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_None] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_keysym] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_text_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_octal] = {
    .visible = true,
    .named = true,
  },
  [sym_hex] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__space] = {
    .visible = false,
    .named = true,
  },
  [sym_compose] = {
    .visible = true,
    .named = true,
  },
  [sym_include] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_event] = {
    .visible = true,
    .named = true,
  },
  [sym_result] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_compose_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sequence_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_event_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(33);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '!') ADVANCE(41);
      if (lookahead == '"') ADVANCE(36);
      if (lookahead == ':') ADVANCE(40);
      if (lookahead == '<') ADVANCE(44);
      if (lookahead == '>') ADVANCE(45);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == '~') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(49);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 3:
      if (lookahead == 'H') ADVANCE(38);
      if (lookahead == 'L') ADVANCE(37);
      if (lookahead == 'S') ADVANCE(39);
      END_STATE();
    case 4:
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(48);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(24);
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 7:
      if (lookahead == 'c') ADVANCE(16);
      END_STATE();
    case 8:
      if (lookahead == 'c') ADVANCE(19);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 13:
      if (lookahead == 'f') ADVANCE(27);
      END_STATE();
    case 14:
      if (lookahead == 'h') ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == 'i') ADVANCE(13);
      END_STATE();
    case 16:
      if (lookahead == 'k') ADVANCE(46);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 22:
      if (lookahead == 'o') ADVANCE(7);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 24:
      if (lookahead == 'p') ADVANCE(26);
      END_STATE();
    case 25:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 26:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 29:
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(30);
      END_STATE();
    case 32:
      if (eof) ADVANCE(33);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '!') ADVANCE(41);
      if (lookahead == '#') ADVANCE(58);
      if (lookahead == '%') ADVANCE(3);
      if (lookahead == ':') ADVANCE(40);
      if (lookahead == '<') ADVANCE(44);
      if (lookahead == '>') ADVANCE(45);
      if (lookahead == 'A') ADVANCE(17);
      if (lookahead == 'C') ADVANCE(5);
      if (lookahead == 'L') ADVANCE(22);
      if (lookahead == 'M') ADVANCE(12);
      if (lookahead == 'N') ADVANCE(23);
      if (lookahead == 'S') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(21);
      if (lookahead == '~') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(59);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_compose_token1);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_PERCENTL);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_PERCENTH);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_PERCENTS);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_None);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_modifier);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_keysym);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_text_token1);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '"') ADVANCE(48);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '"') ADVANCE(48);
      if (lookahead == '0') ADVANCE(52);
      if (lookahead == 'x') ADVANCE(31);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_octal);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_octal);
      if (lookahead == 'x') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_octal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_octal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_hex);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(55);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(59);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 32},
  [2] = {.lex_state = 32},
  [3] = {.lex_state = 32},
  [4] = {.lex_state = 32},
  [5] = {.lex_state = 32},
  [6] = {.lex_state = 32},
  [7] = {.lex_state = 32},
  [8] = {.lex_state = 32},
  [9] = {.lex_state = 32},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 32},
  [12] = {.lex_state = 32},
  [13] = {.lex_state = 32},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 32},
  [16] = {.lex_state = 32},
  [17] = {.lex_state = 32},
  [18] = {.lex_state = 32},
  [19] = {.lex_state = 32},
  [20] = {.lex_state = 32},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 32},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 32},
  [26] = {.lex_state = 32},
  [27] = {.lex_state = 32},
  [28] = {.lex_state = 32},
  [29] = {.lex_state = 32},
  [30] = {.lex_state = 32},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 32},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 32},
  [35] = {.lex_state = 32},
  [36] = {.lex_state = 32},
  [37] = {.lex_state = 32},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 32},
  [40] = {.lex_state = 32},
  [41] = {.lex_state = 32},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 32},
  [44] = {.lex_state = 32},
  [45] = {.lex_state = 32},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 32},
  [48] = {.lex_state = 32},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 32},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 32},
  [54] = {.lex_state = 32},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 32},
  [57] = {.lex_state = 32},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 32},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 32},
  [62] = {.lex_state = 32},
  [63] = {.lex_state = 32},
  [64] = {.lex_state = 32},
  [65] = {.lex_state = 32},
  [66] = {.lex_state = 32},
  [67] = {.lex_state = 32},
  [68] = {.lex_state = 32},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_compose_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym_keysym] = ACTIONS(1),
    [aux_sym_text_token1] = ACTIONS(1),
    [sym_octal] = ACTIONS(1),
    [sym_hex] = ACTIONS(1),
  },
  [1] = {
    [sym_compose] = STATE(31),
    [sym_include] = STATE(51),
    [sym_sequence] = STATE(51),
    [sym_event] = STATE(47),
    [aux_sym_compose_repeat1] = STATE(2),
    [aux_sym_sequence_repeat1] = STATE(8),
    [aux_sym_event_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_compose_token1] = ACTIONS(5),
    [anon_sym_include] = ACTIONS(7),
    [anon_sym_BANG] = ACTIONS(9),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_None] = ACTIONS(13),
    [anon_sym_LT] = ACTIONS(15),
    [sym_modifier] = ACTIONS(17),
    [sym_comment] = ACTIONS(19),
    [sym__space] = ACTIONS(21),
  },
  [2] = {
    [sym_include] = STATE(51),
    [sym_sequence] = STATE(51),
    [sym_event] = STATE(47),
    [aux_sym_compose_repeat1] = STATE(3),
    [aux_sym_sequence_repeat1] = STATE(8),
    [aux_sym_event_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(23),
    [aux_sym_compose_token1] = ACTIONS(25),
    [anon_sym_include] = ACTIONS(7),
    [anon_sym_BANG] = ACTIONS(9),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_None] = ACTIONS(13),
    [anon_sym_LT] = ACTIONS(15),
    [sym_modifier] = ACTIONS(17),
    [sym_comment] = ACTIONS(19),
    [sym__space] = ACTIONS(21),
  },
  [3] = {
    [sym_include] = STATE(51),
    [sym_sequence] = STATE(51),
    [sym_event] = STATE(47),
    [aux_sym_compose_repeat1] = STATE(3),
    [aux_sym_sequence_repeat1] = STATE(8),
    [aux_sym_event_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(27),
    [aux_sym_compose_token1] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(32),
    [anon_sym_BANG] = ACTIONS(35),
    [anon_sym_TILDE] = ACTIONS(38),
    [anon_sym_None] = ACTIONS(41),
    [anon_sym_LT] = ACTIONS(44),
    [sym_modifier] = ACTIONS(47),
    [sym_comment] = ACTIONS(50),
    [sym__space] = ACTIONS(53),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(7), 1,
      anon_sym_include,
    ACTIONS(9), 1,
      anon_sym_BANG,
    ACTIONS(11), 1,
      anon_sym_TILDE,
    ACTIONS(13), 1,
      anon_sym_None,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      sym_modifier,
    ACTIONS(56), 1,
      aux_sym_compose_token1,
    ACTIONS(58), 1,
      sym_comment,
    STATE(8), 1,
      aux_sym_sequence_repeat1,
    STATE(12), 1,
      aux_sym_event_repeat1,
    STATE(47), 1,
      sym_event,
    STATE(39), 2,
      sym_include,
      sym_sequence,
  [38] = 1,
    ACTIONS(60), 10,
      ts_builtin_sym_end,
      aux_sym_compose_token1,
      anon_sym_include,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_None,
      anon_sym_LT,
      sym_modifier,
      sym_comment,
      sym__space,
  [51] = 1,
    ACTIONS(27), 10,
      ts_builtin_sym_end,
      aux_sym_compose_token1,
      anon_sym_include,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_None,
      anon_sym_LT,
      sym_modifier,
      sym_comment,
      sym__space,
  [64] = 9,
    ACTIONS(62), 1,
      anon_sym_COLON,
    ACTIONS(64), 1,
      anon_sym_BANG,
    ACTIONS(67), 1,
      anon_sym_TILDE,
    ACTIONS(70), 1,
      anon_sym_None,
    ACTIONS(73), 1,
      anon_sym_LT,
    ACTIONS(76), 1,
      sym_modifier,
    STATE(7), 1,
      aux_sym_sequence_repeat1,
    STATE(12), 1,
      aux_sym_event_repeat1,
    STATE(47), 1,
      sym_event,
  [92] = 9,
    ACTIONS(9), 1,
      anon_sym_BANG,
    ACTIONS(11), 1,
      anon_sym_TILDE,
    ACTIONS(13), 1,
      anon_sym_None,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      sym_modifier,
    ACTIONS(79), 1,
      anon_sym_COLON,
    STATE(7), 1,
      aux_sym_sequence_repeat1,
    STATE(12), 1,
      aux_sym_event_repeat1,
    STATE(47), 1,
      sym_event,
  [120] = 1,
    ACTIONS(62), 6,
      anon_sym_COLON,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_None,
      anon_sym_LT,
      sym_modifier,
  [129] = 5,
    ACTIONS(81), 1,
      aux_sym_text_token1,
    ACTIONS(83), 1,
      sym_octal,
    ACTIONS(85), 1,
      sym_hex,
    STATE(23), 1,
      aux_sym_text_repeat1,
    STATE(55), 1,
      sym_text,
  [145] = 5,
    ACTIONS(11), 1,
      anon_sym_TILDE,
    ACTIONS(17), 1,
      sym_modifier,
    ACTIONS(87), 1,
      anon_sym_None,
    ACTIONS(89), 1,
      anon_sym_LT,
    STATE(13), 1,
      aux_sym_event_repeat1,
  [161] = 4,
    ACTIONS(11), 1,
      anon_sym_TILDE,
    ACTIONS(17), 1,
      sym_modifier,
    ACTIONS(91), 1,
      anon_sym_LT,
    STATE(15), 1,
      aux_sym_event_repeat1,
  [174] = 4,
    ACTIONS(11), 1,
      anon_sym_TILDE,
    ACTIONS(17), 1,
      sym_modifier,
    ACTIONS(93), 1,
      anon_sym_LT,
    STATE(15), 1,
      aux_sym_event_repeat1,
  [187] = 4,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      sym_keysym,
    STATE(16), 1,
      sym_result,
    STATE(19), 1,
      sym_string,
  [200] = 4,
    ACTIONS(99), 1,
      anon_sym_TILDE,
    ACTIONS(102), 1,
      anon_sym_LT,
    ACTIONS(104), 1,
      sym_modifier,
    STATE(15), 1,
      aux_sym_event_repeat1,
  [213] = 3,
    ACTIONS(107), 1,
      aux_sym_compose_token1,
    ACTIONS(109), 1,
      sym_comment,
    ACTIONS(111), 1,
      sym__space,
  [223] = 1,
    ACTIONS(113), 3,
      aux_sym_compose_token1,
      sym_comment,
      sym__space,
  [229] = 1,
    ACTIONS(115), 3,
      aux_sym_compose_token1,
      sym_comment,
      sym__space,
  [235] = 2,
    ACTIONS(117), 1,
      sym__space,
    ACTIONS(113), 2,
      aux_sym_compose_token1,
      sym_comment,
  [243] = 1,
    ACTIONS(120), 3,
      anon_sym_TILDE,
      anon_sym_LT,
      sym_modifier,
  [249] = 3,
    ACTIONS(122), 1,
      aux_sym_text_token1,
    STATE(23), 1,
      aux_sym_text_repeat1,
    STATE(50), 1,
      sym_text,
  [259] = 1,
    ACTIONS(102), 3,
      anon_sym_TILDE,
      anon_sym_LT,
      sym_modifier,
  [265] = 3,
    ACTIONS(124), 1,
      anon_sym_DQUOTE,
    ACTIONS(126), 1,
      aux_sym_text_token1,
    STATE(24), 1,
      aux_sym_text_repeat1,
  [275] = 3,
    ACTIONS(128), 1,
      anon_sym_DQUOTE,
    ACTIONS(130), 1,
      aux_sym_text_token1,
    STATE(24), 1,
      aux_sym_text_repeat1,
  [285] = 1,
    ACTIONS(133), 3,
      aux_sym_compose_token1,
      sym_comment,
      sym__space,
  [291] = 2,
    ACTIONS(135), 1,
      anon_sym_PERCENTL,
    ACTIONS(137), 2,
      anon_sym_PERCENTH,
      anon_sym_PERCENTS,
  [299] = 2,
    ACTIONS(139), 1,
      aux_sym_compose_token1,
    ACTIONS(141), 1,
      sym__space,
  [306] = 2,
    ACTIONS(143), 1,
      aux_sym_compose_token1,
    ACTIONS(145), 1,
      sym_comment,
  [313] = 2,
    ACTIONS(147), 1,
      aux_sym_compose_token1,
    ACTIONS(149), 1,
      sym__space,
  [320] = 1,
    ACTIONS(151), 1,
      sym__space,
  [324] = 1,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
  [328] = 1,
    ACTIONS(155), 1,
      sym__space,
  [332] = 1,
    ACTIONS(157), 1,
      sym_keysym,
  [336] = 1,
    ACTIONS(159), 1,
      sym__space,
  [340] = 1,
    ACTIONS(161), 1,
      sym__space,
  [344] = 1,
    ACTIONS(163), 1,
      sym__space,
  [348] = 1,
    ACTIONS(165), 1,
      anon_sym_GT,
  [352] = 1,
    ACTIONS(167), 1,
      anon_sym_DQUOTE,
  [356] = 1,
    ACTIONS(169), 1,
      aux_sym_compose_token1,
  [360] = 1,
    ACTIONS(171), 1,
      anon_sym_LT,
  [364] = 1,
    ACTIONS(173), 1,
      anon_sym_GT,
  [368] = 1,
    ACTIONS(175), 1,
      sym_keysym,
  [372] = 1,
    ACTIONS(177), 1,
      anon_sym_GT,
  [376] = 1,
    ACTIONS(89), 1,
      anon_sym_LT,
  [380] = 1,
    ACTIONS(179), 1,
      sym_modifier,
  [384] = 1,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
  [388] = 1,
    ACTIONS(183), 1,
      sym__space,
  [392] = 1,
    ACTIONS(185), 1,
      sym__space,
  [396] = 1,
    ACTIONS(187), 1,
      sym_keysym,
  [400] = 1,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
  [404] = 1,
    ACTIONS(56), 1,
      aux_sym_compose_token1,
  [408] = 1,
    ACTIONS(191), 1,
      sym_keysym,
  [412] = 1,
    ACTIONS(193), 1,
      sym__space,
  [416] = 1,
    ACTIONS(195), 1,
      anon_sym_GT,
  [420] = 1,
    ACTIONS(197), 1,
      anon_sym_DQUOTE,
  [424] = 1,
    ACTIONS(143), 1,
      aux_sym_compose_token1,
  [428] = 1,
    ACTIONS(199), 1,
      sym__space,
  [432] = 1,
    ACTIONS(201), 1,
      sym_keysym,
  [436] = 1,
    ACTIONS(147), 1,
      aux_sym_compose_token1,
  [440] = 1,
    ACTIONS(203), 1,
      sym_keysym,
  [444] = 1,
    ACTIONS(205), 1,
      sym__space,
  [448] = 1,
    ACTIONS(207), 1,
      anon_sym_GT,
  [452] = 1,
    ACTIONS(209), 1,
      sym__space,
  [456] = 1,
    ACTIONS(211), 1,
      sym__space,
  [460] = 1,
    ACTIONS(213), 1,
      aux_sym_compose_token1,
  [464] = 1,
    ACTIONS(215), 1,
      sym__space,
  [468] = 1,
    ACTIONS(217), 1,
      aux_sym_compose_token1,
  [472] = 1,
    ACTIONS(219), 1,
      sym__space,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 38,
  [SMALL_STATE(6)] = 51,
  [SMALL_STATE(7)] = 64,
  [SMALL_STATE(8)] = 92,
  [SMALL_STATE(9)] = 120,
  [SMALL_STATE(10)] = 129,
  [SMALL_STATE(11)] = 145,
  [SMALL_STATE(12)] = 161,
  [SMALL_STATE(13)] = 174,
  [SMALL_STATE(14)] = 187,
  [SMALL_STATE(15)] = 200,
  [SMALL_STATE(16)] = 213,
  [SMALL_STATE(17)] = 223,
  [SMALL_STATE(18)] = 229,
  [SMALL_STATE(19)] = 235,
  [SMALL_STATE(20)] = 243,
  [SMALL_STATE(21)] = 249,
  [SMALL_STATE(22)] = 259,
  [SMALL_STATE(23)] = 265,
  [SMALL_STATE(24)] = 275,
  [SMALL_STATE(25)] = 285,
  [SMALL_STATE(26)] = 291,
  [SMALL_STATE(27)] = 299,
  [SMALL_STATE(28)] = 306,
  [SMALL_STATE(29)] = 313,
  [SMALL_STATE(30)] = 320,
  [SMALL_STATE(31)] = 324,
  [SMALL_STATE(32)] = 328,
  [SMALL_STATE(33)] = 332,
  [SMALL_STATE(34)] = 336,
  [SMALL_STATE(35)] = 340,
  [SMALL_STATE(36)] = 344,
  [SMALL_STATE(37)] = 348,
  [SMALL_STATE(38)] = 352,
  [SMALL_STATE(39)] = 356,
  [SMALL_STATE(40)] = 360,
  [SMALL_STATE(41)] = 364,
  [SMALL_STATE(42)] = 368,
  [SMALL_STATE(43)] = 372,
  [SMALL_STATE(44)] = 376,
  [SMALL_STATE(45)] = 380,
  [SMALL_STATE(46)] = 384,
  [SMALL_STATE(47)] = 388,
  [SMALL_STATE(48)] = 392,
  [SMALL_STATE(49)] = 396,
  [SMALL_STATE(50)] = 400,
  [SMALL_STATE(51)] = 404,
  [SMALL_STATE(52)] = 408,
  [SMALL_STATE(53)] = 412,
  [SMALL_STATE(54)] = 416,
  [SMALL_STATE(55)] = 420,
  [SMALL_STATE(56)] = 424,
  [SMALL_STATE(57)] = 428,
  [SMALL_STATE(58)] = 432,
  [SMALL_STATE(59)] = 436,
  [SMALL_STATE(60)] = 440,
  [SMALL_STATE(61)] = 444,
  [SMALL_STATE(62)] = 448,
  [SMALL_STATE(63)] = 452,
  [SMALL_STATE(64)] = 456,
  [SMALL_STATE(65)] = 460,
  [SMALL_STATE(66)] = 464,
  [SMALL_STATE(67)] = 468,
  [SMALL_STATE(68)] = 472,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compose, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compose, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compose_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compose_repeat1, 2), SHIFT_REPEAT(3),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compose_repeat1, 2), SHIFT_REPEAT(35),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compose_repeat1, 2), SHIFT_REPEAT(66),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compose_repeat1, 2), SHIFT_REPEAT(64),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compose_repeat1, 2), SHIFT_REPEAT(61),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compose_repeat1, 2), SHIFT_REPEAT(60),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compose_repeat1, 2), SHIFT_REPEAT(57),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compose_repeat1, 2), SHIFT_REPEAT(51),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compose_repeat1, 2), SHIFT_REPEAT(4),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compose_repeat1, 3),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_repeat1, 2),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(66),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(64),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(61),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(60),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(57),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_event_repeat1, 2), SHIFT_REPEAT(64),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_event_repeat1, 2),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_event_repeat1, 2), SHIFT_REPEAT(57),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 4),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result, 3),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_result, 1), SHIFT(58),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_event_repeat1, 4),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(24),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 5),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 5),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 6),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [153] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event, 3),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event, 4),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event, 5),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event, 6),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 6),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 7),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event, 7),
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

TS_PUBLIC const TSLanguage *tree_sitter_xcompose() {
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
