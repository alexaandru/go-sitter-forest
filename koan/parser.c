#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 37
#define LARGE_STATE_COUNT 14
#define SYMBOL_COUNT 35
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_let = 2,
  anon_sym_EQ = 3,
  anon_sym_SEMI = 4,
  anon_sym_DASH = 5,
  anon_sym_BANG = 6,
  anon_sym_u221a = 7,
  anon_sym_u25cb = 8,
  anon_sym_CARET = 9,
  anon_sym_STAR = 10,
  anon_sym_SLASH = 11,
  anon_sym_PLUS = 12,
  anon_sym_EQ_EQ = 13,
  anon_sym_BANG_EQ = 14,
  anon_sym_GT_EQ = 15,
  anon_sym_GT = 16,
  anon_sym_LT_EQ = 17,
  anon_sym_LT = 18,
  anon_sym_PIPE_PIPE = 19,
  anon_sym_AMP_AMP = 20,
  sym_number = 21,
  sym_string = 22,
  anon_sym_LBRACK = 23,
  anon_sym_COMMA = 24,
  anon_sym_RBRACK = 25,
  sym_source_file = 26,
  sym__definition = 27,
  sym_let_definition = 28,
  sym__expr = 29,
  sym_unary_expr = 30,
  sym_binary_expr = 31,
  sym_array_lit = 32,
  aux_sym_source_file_repeat1 = 33,
  aux_sym_array_lit_repeat1 = 34,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_let] = "let",
  [anon_sym_EQ] = "=",
  [anon_sym_SEMI] = ";",
  [anon_sym_DASH] = "-",
  [anon_sym_BANG] = "!",
  [anon_sym_u221a] = "\u221a",
  [anon_sym_u25cb] = "\u25cb",
  [anon_sym_CARET] = "^",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PLUS] = "+",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_GT] = ">",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_LT] = "<",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_AMP_AMP] = "&&",
  [sym_number] = "number",
  [sym_string] = "string",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_let_definition] = "let_definition",
  [sym__expr] = "_expr",
  [sym_unary_expr] = "unary_expr",
  [sym_binary_expr] = "binary_expr",
  [sym_array_lit] = "array_lit",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_array_lit_repeat1] = "array_lit_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_u221a] = anon_sym_u221a,
  [anon_sym_u25cb] = anon_sym_u25cb,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_let_definition] = sym_let_definition,
  [sym__expr] = sym__expr,
  [sym_unary_expr] = sym_unary_expr,
  [sym_binary_expr] = sym_binary_expr,
  [sym_array_lit] = sym_array_lit,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_array_lit_repeat1] = aux_sym_array_lit_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u221a] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u25cb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
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
  [sym_let_definition] = {
    .visible = true,
    .named = true,
  },
  [sym__expr] = {
    .visible = false,
    .named = true,
  },
  [sym_unary_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_array_lit] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_lit_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(8);
      if (lookahead == '!') ADVANCE(13);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '&') ADVANCE(2);
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '+') ADVANCE(19);
      if (lookahead == ',') ADVANCE(34);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == ';') ADVANCE(11);
      if (lookahead == '<') ADVANCE(25);
      if (lookahead == '=') ADVANCE(10);
      if (lookahead == '>') ADVANCE(23);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == ']') ADVANCE(35);
      if (lookahead == '^') ADVANCE(16);
      if (lookahead == '|') ADVANCE(5);
      if (lookahead == 960) ADVANCE(28);
      if (lookahead == 8730) ADVANCE(14);
      if (lookahead == 9675) ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '&') ADVANCE(27);
      END_STATE();
    case 3:
      if (lookahead == '=') ADVANCE(20);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '|') ADVANCE(26);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 7:
      if (eof) ADVANCE(8);
      if (lookahead == '!') ADVANCE(13);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '&') ADVANCE(2);
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '+') ADVANCE(19);
      if (lookahead == ',') ADVANCE(34);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == ';') ADVANCE(11);
      if (lookahead == '<') ADVANCE(25);
      if (lookahead == '=') ADVANCE(3);
      if (lookahead == '>') ADVANCE(23);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == ']') ADVANCE(35);
      if (lookahead == '^') ADVANCE(16);
      if (lookahead == '|') ADVANCE(5);
      if (lookahead == 960) ADVANCE(28);
      if (lookahead == 8730) ADVANCE(14);
      if (lookahead == 9675) ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(20);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(21);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_u221a);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_u25cb);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(22);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(24);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_RBRACK);
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
      if (lookahead == 'l') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'e') ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == 't') ADVANCE(3);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 7},
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
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
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 4},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_u221a] = ACTIONS(1),
    [anon_sym_u25cb] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(34),
    [sym__definition] = STATE(14),
    [sym_let_definition] = STATE(14),
    [sym__expr] = STATE(13),
    [sym_unary_expr] = STATE(13),
    [sym_binary_expr] = STATE(13),
    [sym_array_lit] = STATE(13),
    [aux_sym_source_file_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(9),
    [anon_sym_BANG] = ACTIONS(9),
    [anon_sym_u221a] = ACTIONS(9),
    [anon_sym_u25cb] = ACTIONS(9),
    [sym_number] = ACTIONS(11),
    [sym_string] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_let] = ACTIONS(17),
    [anon_sym_SEMI] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_u221a] = ACTIONS(15),
    [anon_sym_u25cb] = ACTIONS(15),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(15),
    [anon_sym_GT] = ACTIONS(17),
    [anon_sym_LT_EQ] = ACTIONS(15),
    [anon_sym_LT] = ACTIONS(17),
    [anon_sym_PIPE_PIPE] = ACTIONS(15),
    [anon_sym_AMP_AMP] = ACTIONS(15),
    [sym_number] = ACTIONS(15),
    [sym_string] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(15),
    [anon_sym_RBRACK] = ACTIONS(15),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_let] = ACTIONS(17),
    [anon_sym_SEMI] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_u221a] = ACTIONS(15),
    [anon_sym_u25cb] = ACTIONS(15),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(15),
    [anon_sym_EQ_EQ] = ACTIONS(15),
    [anon_sym_BANG_EQ] = ACTIONS(15),
    [anon_sym_GT_EQ] = ACTIONS(15),
    [anon_sym_GT] = ACTIONS(17),
    [anon_sym_LT_EQ] = ACTIONS(15),
    [anon_sym_LT] = ACTIONS(17),
    [anon_sym_PIPE_PIPE] = ACTIONS(15),
    [anon_sym_AMP_AMP] = ACTIONS(15),
    [sym_number] = ACTIONS(15),
    [sym_string] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(15),
    [anon_sym_RBRACK] = ACTIONS(15),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(27),
    [sym_identifier] = ACTIONS(29),
    [anon_sym_let] = ACTIONS(29),
    [anon_sym_SEMI] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(29),
    [anon_sym_u221a] = ACTIONS(27),
    [anon_sym_u25cb] = ACTIONS(27),
    [anon_sym_CARET] = ACTIONS(27),
    [anon_sym_STAR] = ACTIONS(27),
    [anon_sym_SLASH] = ACTIONS(27),
    [anon_sym_PLUS] = ACTIONS(27),
    [anon_sym_EQ_EQ] = ACTIONS(27),
    [anon_sym_BANG_EQ] = ACTIONS(27),
    [anon_sym_GT_EQ] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(27),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_PIPE_PIPE] = ACTIONS(27),
    [anon_sym_AMP_AMP] = ACTIONS(27),
    [sym_number] = ACTIONS(27),
    [sym_string] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(27),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(31),
    [sym_identifier] = ACTIONS(33),
    [anon_sym_let] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(33),
    [anon_sym_u221a] = ACTIONS(31),
    [anon_sym_u25cb] = ACTIONS(31),
    [anon_sym_CARET] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(31),
    [anon_sym_SLASH] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(31),
    [anon_sym_EQ_EQ] = ACTIONS(31),
    [anon_sym_BANG_EQ] = ACTIONS(31),
    [anon_sym_GT_EQ] = ACTIONS(31),
    [anon_sym_GT] = ACTIONS(33),
    [anon_sym_LT_EQ] = ACTIONS(31),
    [anon_sym_LT] = ACTIONS(33),
    [anon_sym_PIPE_PIPE] = ACTIONS(31),
    [anon_sym_AMP_AMP] = ACTIONS(31),
    [sym_number] = ACTIONS(31),
    [sym_string] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(31),
    [anon_sym_RBRACK] = ACTIONS(31),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(35),
    [sym_identifier] = ACTIONS(37),
    [anon_sym_let] = ACTIONS(37),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_DASH] = ACTIONS(35),
    [anon_sym_BANG] = ACTIONS(37),
    [anon_sym_u221a] = ACTIONS(35),
    [anon_sym_u25cb] = ACTIONS(35),
    [anon_sym_CARET] = ACTIONS(35),
    [anon_sym_STAR] = ACTIONS(35),
    [anon_sym_SLASH] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(35),
    [anon_sym_EQ_EQ] = ACTIONS(35),
    [anon_sym_BANG_EQ] = ACTIONS(35),
    [anon_sym_GT_EQ] = ACTIONS(35),
    [anon_sym_GT] = ACTIONS(37),
    [anon_sym_LT_EQ] = ACTIONS(35),
    [anon_sym_LT] = ACTIONS(37),
    [anon_sym_PIPE_PIPE] = ACTIONS(35),
    [anon_sym_AMP_AMP] = ACTIONS(35),
    [sym_number] = ACTIONS(35),
    [sym_string] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_COMMA] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(35),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(39),
    [sym_identifier] = ACTIONS(41),
    [anon_sym_let] = ACTIONS(41),
    [anon_sym_SEMI] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_BANG] = ACTIONS(41),
    [anon_sym_u221a] = ACTIONS(39),
    [anon_sym_u25cb] = ACTIONS(39),
    [anon_sym_CARET] = ACTIONS(39),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_EQ_EQ] = ACTIONS(39),
    [anon_sym_BANG_EQ] = ACTIONS(39),
    [anon_sym_GT_EQ] = ACTIONS(39),
    [anon_sym_GT] = ACTIONS(41),
    [anon_sym_LT_EQ] = ACTIONS(39),
    [anon_sym_LT] = ACTIONS(41),
    [anon_sym_PIPE_PIPE] = ACTIONS(39),
    [anon_sym_AMP_AMP] = ACTIONS(39),
    [sym_number] = ACTIONS(39),
    [sym_string] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_COMMA] = ACTIONS(39),
    [anon_sym_RBRACK] = ACTIONS(39),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_let] = ACTIONS(17),
    [anon_sym_SEMI] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_u221a] = ACTIONS(15),
    [anon_sym_u25cb] = ACTIONS(15),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(43),
    [anon_sym_GT] = ACTIONS(45),
    [anon_sym_LT_EQ] = ACTIONS(43),
    [anon_sym_LT] = ACTIONS(45),
    [anon_sym_PIPE_PIPE] = ACTIONS(15),
    [anon_sym_AMP_AMP] = ACTIONS(15),
    [sym_number] = ACTIONS(15),
    [sym_string] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(15),
    [anon_sym_RBRACK] = ACTIONS(15),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_let] = ACTIONS(17),
    [anon_sym_SEMI] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_u221a] = ACTIONS(15),
    [anon_sym_u25cb] = ACTIONS(15),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_EQ_EQ] = ACTIONS(15),
    [anon_sym_BANG_EQ] = ACTIONS(15),
    [anon_sym_GT_EQ] = ACTIONS(15),
    [anon_sym_GT] = ACTIONS(17),
    [anon_sym_LT_EQ] = ACTIONS(15),
    [anon_sym_LT] = ACTIONS(17),
    [anon_sym_PIPE_PIPE] = ACTIONS(15),
    [anon_sym_AMP_AMP] = ACTIONS(15),
    [sym_number] = ACTIONS(15),
    [sym_string] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(15),
    [anon_sym_RBRACK] = ACTIONS(15),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_let] = ACTIONS(17),
    [anon_sym_SEMI] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_u221a] = ACTIONS(15),
    [anon_sym_u25cb] = ACTIONS(15),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(15),
    [anon_sym_SLASH] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(15),
    [anon_sym_EQ_EQ] = ACTIONS(15),
    [anon_sym_BANG_EQ] = ACTIONS(15),
    [anon_sym_GT_EQ] = ACTIONS(15),
    [anon_sym_GT] = ACTIONS(17),
    [anon_sym_LT_EQ] = ACTIONS(15),
    [anon_sym_LT] = ACTIONS(17),
    [anon_sym_PIPE_PIPE] = ACTIONS(15),
    [anon_sym_AMP_AMP] = ACTIONS(15),
    [sym_number] = ACTIONS(15),
    [sym_string] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(15),
    [anon_sym_RBRACK] = ACTIONS(15),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_let] = ACTIONS(17),
    [anon_sym_SEMI] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_u221a] = ACTIONS(15),
    [anon_sym_u25cb] = ACTIONS(15),
    [anon_sym_CARET] = ACTIONS(15),
    [anon_sym_STAR] = ACTIONS(15),
    [anon_sym_SLASH] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(15),
    [anon_sym_EQ_EQ] = ACTIONS(15),
    [anon_sym_BANG_EQ] = ACTIONS(15),
    [anon_sym_GT_EQ] = ACTIONS(15),
    [anon_sym_GT] = ACTIONS(17),
    [anon_sym_LT_EQ] = ACTIONS(15),
    [anon_sym_LT] = ACTIONS(17),
    [anon_sym_PIPE_PIPE] = ACTIONS(15),
    [anon_sym_AMP_AMP] = ACTIONS(15),
    [sym_number] = ACTIONS(15),
    [sym_string] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(15),
    [anon_sym_RBRACK] = ACTIONS(15),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(47),
    [sym_identifier] = ACTIONS(49),
    [anon_sym_let] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_BANG] = ACTIONS(49),
    [anon_sym_u221a] = ACTIONS(47),
    [anon_sym_u25cb] = ACTIONS(47),
    [anon_sym_CARET] = ACTIONS(47),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_EQ_EQ] = ACTIONS(47),
    [anon_sym_BANG_EQ] = ACTIONS(47),
    [anon_sym_GT_EQ] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(49),
    [anon_sym_LT_EQ] = ACTIONS(47),
    [anon_sym_LT] = ACTIONS(49),
    [anon_sym_PIPE_PIPE] = ACTIONS(47),
    [anon_sym_AMP_AMP] = ACTIONS(47),
    [sym_number] = ACTIONS(47),
    [sym_string] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_RBRACK] = ACTIONS(47),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(51),
    [sym_identifier] = ACTIONS(53),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_BANG] = ACTIONS(53),
    [anon_sym_u221a] = ACTIONS(51),
    [anon_sym_u25cb] = ACTIONS(51),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(43),
    [anon_sym_GT] = ACTIONS(45),
    [anon_sym_LT_EQ] = ACTIONS(43),
    [anon_sym_LT] = ACTIONS(45),
    [anon_sym_PIPE_PIPE] = ACTIONS(55),
    [anon_sym_AMP_AMP] = ACTIONS(55),
    [sym_number] = ACTIONS(51),
    [sym_string] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(51),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      anon_sym_let,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 2,
      sym_number,
      sym_string,
    STATE(15), 3,
      sym__definition,
      sym_let_definition,
      aux_sym_source_file_repeat1,
    ACTIONS(9), 4,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_u221a,
      anon_sym_u25cb,
    STATE(13), 4,
      sym__expr,
      sym_unary_expr,
      sym_binary_expr,
      sym_array_lit,
  [34] = 8,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(64), 1,
      anon_sym_let,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(70), 2,
      sym_number,
      sym_string,
    STATE(15), 3,
      sym__definition,
      sym_let_definition,
      aux_sym_source_file_repeat1,
    ACTIONS(67), 4,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_u221a,
      anon_sym_u25cb,
    STATE(13), 4,
      sym__expr,
      sym_unary_expr,
      sym_binary_expr,
      sym_array_lit,
  [68] = 10,
    ACTIONS(21), 1,
      anon_sym_CARET,
    ACTIONS(76), 1,
      anon_sym_COMMA,
    ACTIONS(78), 1,
      anon_sym_RBRACK,
    STATE(32), 1,
      aux_sym_array_lit_repeat1,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(23), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(25), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(43), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(45), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(55), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [105] = 8,
    ACTIONS(21), 1,
      anon_sym_CARET,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(23), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(25), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(43), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(45), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(55), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(80), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [137] = 8,
    ACTIONS(21), 1,
      anon_sym_CARET,
    ACTIONS(82), 1,
      anon_sym_SEMI,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(23), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(25), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(43), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(45), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(55), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [168] = 5,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(86), 1,
      anon_sym_RBRACK,
    ACTIONS(84), 3,
      sym_identifier,
      sym_number,
      sym_string,
    ACTIONS(9), 4,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_u221a,
      anon_sym_u25cb,
    STATE(16), 4,
      sym__expr,
      sym_unary_expr,
      sym_binary_expr,
      sym_array_lit,
  [192] = 5,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(90), 1,
      anon_sym_RBRACK,
    ACTIONS(88), 3,
      sym_identifier,
      sym_number,
      sym_string,
    ACTIONS(9), 4,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_u221a,
      anon_sym_u25cb,
    STATE(17), 4,
      sym__expr,
      sym_unary_expr,
      sym_binary_expr,
      sym_array_lit,
  [216] = 5,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(92), 1,
      anon_sym_RBRACK,
    ACTIONS(88), 3,
      sym_identifier,
      sym_number,
      sym_string,
    ACTIONS(9), 4,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_u221a,
      anon_sym_u25cb,
    STATE(17), 4,
      sym__expr,
      sym_unary_expr,
      sym_binary_expr,
      sym_array_lit,
  [240] = 4,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(94), 3,
      sym_identifier,
      sym_number,
      sym_string,
    ACTIONS(9), 4,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_u221a,
      anon_sym_u25cb,
    STATE(18), 4,
      sym__expr,
      sym_unary_expr,
      sym_binary_expr,
      sym_array_lit,
  [261] = 4,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(96), 3,
      sym_identifier,
      sym_number,
      sym_string,
    ACTIONS(9), 4,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_u221a,
      anon_sym_u25cb,
    STATE(5), 4,
      sym__expr,
      sym_unary_expr,
      sym_binary_expr,
      sym_array_lit,
  [282] = 4,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(98), 3,
      sym_identifier,
      sym_number,
      sym_string,
    ACTIONS(9), 4,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_u221a,
      anon_sym_u25cb,
    STATE(8), 4,
      sym__expr,
      sym_unary_expr,
      sym_binary_expr,
      sym_array_lit,
  [303] = 4,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(100), 3,
      sym_identifier,
      sym_number,
      sym_string,
    ACTIONS(9), 4,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_u221a,
      anon_sym_u25cb,
    STATE(2), 4,
      sym__expr,
      sym_unary_expr,
      sym_binary_expr,
      sym_array_lit,
  [324] = 4,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(102), 3,
      sym_identifier,
      sym_number,
      sym_string,
    ACTIONS(9), 4,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_u221a,
      anon_sym_u25cb,
    STATE(9), 4,
      sym__expr,
      sym_unary_expr,
      sym_binary_expr,
      sym_array_lit,
  [345] = 4,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(104), 3,
      sym_identifier,
      sym_number,
      sym_string,
    ACTIONS(9), 4,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_u221a,
      anon_sym_u25cb,
    STATE(10), 4,
      sym__expr,
      sym_unary_expr,
      sym_binary_expr,
      sym_array_lit,
  [366] = 4,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(106), 3,
      sym_identifier,
      sym_number,
      sym_string,
    ACTIONS(9), 4,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_u221a,
      anon_sym_u25cb,
    STATE(11), 4,
      sym__expr,
      sym_unary_expr,
      sym_binary_expr,
      sym_array_lit,
  [387] = 4,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(108), 3,
      sym_identifier,
      sym_number,
      sym_string,
    ACTIONS(9), 4,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_u221a,
      anon_sym_u25cb,
    STATE(3), 4,
      sym__expr,
      sym_unary_expr,
      sym_binary_expr,
      sym_array_lit,
  [408] = 4,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(88), 3,
      sym_identifier,
      sym_number,
      sym_string,
    ACTIONS(9), 4,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_u221a,
      anon_sym_u25cb,
    STATE(17), 4,
      sym__expr,
      sym_unary_expr,
      sym_binary_expr,
      sym_array_lit,
  [429] = 2,
    ACTIONS(112), 2,
      anon_sym_let,
      sym_identifier,
    ACTIONS(110), 8,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_u221a,
      anon_sym_u25cb,
      sym_number,
      sym_string,
      anon_sym_LBRACK,
  [444] = 3,
    ACTIONS(92), 1,
      anon_sym_RBRACK,
    ACTIONS(114), 1,
      anon_sym_COMMA,
    STATE(33), 1,
      aux_sym_array_lit_repeat1,
  [454] = 3,
    ACTIONS(80), 1,
      anon_sym_RBRACK,
    ACTIONS(116), 1,
      anon_sym_COMMA,
    STATE(33), 1,
      aux_sym_array_lit_repeat1,
  [464] = 1,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
  [468] = 1,
    ACTIONS(121), 1,
      sym_identifier,
  [472] = 1,
    ACTIONS(123), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(14)] = 0,
  [SMALL_STATE(15)] = 34,
  [SMALL_STATE(16)] = 68,
  [SMALL_STATE(17)] = 105,
  [SMALL_STATE(18)] = 137,
  [SMALL_STATE(19)] = 168,
  [SMALL_STATE(20)] = 192,
  [SMALL_STATE(21)] = 216,
  [SMALL_STATE(22)] = 240,
  [SMALL_STATE(23)] = 261,
  [SMALL_STATE(24)] = 282,
  [SMALL_STATE(25)] = 303,
  [SMALL_STATE(26)] = 324,
  [SMALL_STATE(27)] = 345,
  [SMALL_STATE(28)] = 366,
  [SMALL_STATE(29)] = 387,
  [SMALL_STATE(30)] = 408,
  [SMALL_STATE(31)] = 429,
  [SMALL_STATE(32)] = 444,
  [SMALL_STATE(33)] = 454,
  [SMALL_STATE(34)] = 464,
  [SMALL_STATE(35)] = 468,
  [SMALL_STATE(36)] = 472,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expr, 3),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expr, 3),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_lit, 5),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_lit, 5),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expr, 2),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expr, 2),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_lit, 2),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_lit, 2),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_lit, 4),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_lit, 4),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_lit, 3),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_lit, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__definition, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_lit_repeat1, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_definition, 5),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_definition, 5),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_lit_repeat1, 2), SHIFT_REPEAT(30),
  [119] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
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

TS_PUBLIC const TSLanguage *tree_sitter_koan() {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
