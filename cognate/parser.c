#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 27
#define LARGE_STATE_COUNT 11
#define SYMBOL_COUNT 32
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 4

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_SEMI = 2,
  anon_sym_Def = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  anon_sym_PLUS = 6,
  anon_sym_DASH = 7,
  anon_sym_STAR = 8,
  anon_sym_SLASH = 9,
  anon_sym_GT_EQ = 10,
  anon_sym_LT_EQ = 11,
  anon_sym_LT = 12,
  anon_sym_GT = 13,
  anon_sym_EQ_EQ = 14,
  anon_sym_TILDE_TILDE = 15,
  aux_sym_line_comment_token1 = 16,
  sym_inline_comment = 17,
  sym_number = 18,
  sym_string = 19,
  sym_source_file = 20,
  aux_sym__block = 21,
  sym__statement = 22,
  sym_def_stmt = 23,
  sym_def_body = 24,
  sym_fn_stmt = 25,
  sym__expression_item = 26,
  sym__paren_expression = 27,
  sym_expression = 28,
  sym_operator = 29,
  sym_line_comment = 30,
  aux_sym_expression_repeat1 = 31,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_SEMI] = ";",
  [anon_sym_Def] = "Def",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_TILDE_TILDE] = "~~",
  [aux_sym_line_comment_token1] = "line_comment_token1",
  [sym_inline_comment] = "inline_comment",
  [sym_number] = "number",
  [sym_string] = "string",
  [sym_source_file] = "source_file",
  [aux_sym__block] = "_block",
  [sym__statement] = "_statement",
  [sym_def_stmt] = "def_stmt",
  [sym_def_body] = "def_body",
  [sym_fn_stmt] = "fn_stmt",
  [sym__expression_item] = "_expression_item",
  [sym__paren_expression] = "_paren_expression",
  [sym_expression] = "expression",
  [sym_operator] = "operator",
  [sym_line_comment] = "line_comment",
  [aux_sym_expression_repeat1] = "expression_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_Def] = anon_sym_Def,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_TILDE_TILDE] = anon_sym_TILDE_TILDE,
  [aux_sym_line_comment_token1] = aux_sym_line_comment_token1,
  [sym_inline_comment] = sym_inline_comment,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [sym_source_file] = sym_source_file,
  [aux_sym__block] = aux_sym__block,
  [sym__statement] = sym__statement,
  [sym_def_stmt] = sym_def_stmt,
  [sym_def_body] = sym_def_body,
  [sym_fn_stmt] = sym_fn_stmt,
  [sym__expression_item] = sym__expression_item,
  [sym__paren_expression] = sym__paren_expression,
  [sym_expression] = sym_expression,
  [sym_operator] = sym_operator,
  [sym_line_comment] = sym_line_comment,
  [aux_sym_expression_repeat1] = aux_sym_expression_repeat1,
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
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Def] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
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
  [anon_sym_GT_EQ] = {
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
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE_TILDE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_line_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_inline_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__block] = {
    .visible = false,
    .named = false,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_def_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_def_body] = {
    .visible = true,
    .named = true,
  },
  [sym_fn_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym__expression_item] = {
    .visible = false,
    .named = true,
  },
  [sym__paren_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_args = 1,
  field_body = 2,
  field_name = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_args] = "args",
  [field_body] = "body",
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_args, 1},
    {field_name, 0},
  [3] =
    {field_body, 2},
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
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
};

static inline bool aux_sym_line_comment_token1_character_set_1(int32_t c) {
  return (c < '/'
    ? (c < '*'
      ? (c < '\''
        ? c == '!'
        : c <= '\'')
      : (c <= '+' || c == '-'))
    : (c <= '9' || (c < '^'
      ? (c < 'A'
        ? (c >= '<' && c <= '?')
        : c <= 'Z')
      : (c <= '^' || (c >= 'a' && c <= 'z')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(5);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '(') ADVANCE(7);
      if (lookahead == ')') ADVANCE(8);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '+') ADVANCE(9);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ';') ADVANCE(6);
      if (lookahead == '<') ADVANCE(15);
      if (lookahead == '=') ADVANCE(2);
      if (lookahead == '>') ADVANCE(16);
      if (lookahead == '~') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(25);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '=') ADVANCE(17);
      END_STATE();
    case 3:
      if (lookahead == '~') ADVANCE(18);
      END_STATE();
    case 4:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(14);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(13);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_TILDE_TILDE);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_TILDE_TILDE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(23);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '~') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(20);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(23);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '~') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(23);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (aux_sym_line_comment_token1_character_set_1(lookahead)) ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_inline_comment);
      if (aux_sym_line_comment_token1_character_set_1(lookahead)) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier);
      if (aux_sym_line_comment_token1_character_set_1(lookahead)) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
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
      if (lookahead == 'D') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'e') ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == 'f') ADVANCE(3);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_Def);
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
  [7] = {.lex_state = 0},
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
  [18] = {.lex_state = 20},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_line_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_Def] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_TILDE_TILDE] = ACTIONS(3),
    [sym_inline_comment] = ACTIONS(5),
    [sym_number] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(23),
    [aux_sym__block] = STATE(12),
    [sym__statement] = STATE(16),
    [sym_def_stmt] = STATE(20),
    [sym_fn_stmt] = STATE(20),
    [sym_line_comment] = STATE(1),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_Def] = ACTIONS(9),
    [anon_sym_TILDE_TILDE] = ACTIONS(3),
    [sym_inline_comment] = ACTIONS(5),
  },
  [2] = {
    [sym__expression_item] = STATE(9),
    [sym__paren_expression] = STATE(10),
    [sym_operator] = STATE(10),
    [sym_line_comment] = STATE(2),
    [aux_sym_expression_repeat1] = STATE(2),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_SEMI] = ACTIONS(14),
    [anon_sym_LPAREN] = ACTIONS(16),
    [anon_sym_RPAREN] = ACTIONS(14),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(19),
    [anon_sym_SLASH] = ACTIONS(19),
    [anon_sym_GT_EQ] = ACTIONS(19),
    [anon_sym_LT_EQ] = ACTIONS(19),
    [anon_sym_LT] = ACTIONS(22),
    [anon_sym_GT] = ACTIONS(22),
    [anon_sym_EQ_EQ] = ACTIONS(19),
    [anon_sym_TILDE_TILDE] = ACTIONS(3),
    [sym_inline_comment] = ACTIONS(5),
    [sym_number] = ACTIONS(11),
    [sym_string] = ACTIONS(11),
  },
  [3] = {
    [sym__expression_item] = STATE(9),
    [sym__paren_expression] = STATE(10),
    [sym_expression] = STATE(19),
    [sym_operator] = STATE(10),
    [sym_line_comment] = STATE(3),
    [aux_sym_expression_repeat1] = STATE(4),
    [sym_identifier] = ACTIONS(25),
    [anon_sym_SEMI] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(31),
    [anon_sym_SLASH] = ACTIONS(31),
    [anon_sym_GT_EQ] = ACTIONS(31),
    [anon_sym_LT_EQ] = ACTIONS(31),
    [anon_sym_LT] = ACTIONS(33),
    [anon_sym_GT] = ACTIONS(33),
    [anon_sym_EQ_EQ] = ACTIONS(31),
    [anon_sym_TILDE_TILDE] = ACTIONS(3),
    [sym_inline_comment] = ACTIONS(5),
    [sym_number] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
  },
  [4] = {
    [sym__expression_item] = STATE(9),
    [sym__paren_expression] = STATE(10),
    [sym_operator] = STATE(10),
    [sym_line_comment] = STATE(4),
    [aux_sym_expression_repeat1] = STATE(2),
    [sym_identifier] = ACTIONS(25),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_RPAREN] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(31),
    [anon_sym_SLASH] = ACTIONS(31),
    [anon_sym_GT_EQ] = ACTIONS(31),
    [anon_sym_LT_EQ] = ACTIONS(31),
    [anon_sym_LT] = ACTIONS(33),
    [anon_sym_GT] = ACTIONS(33),
    [anon_sym_EQ_EQ] = ACTIONS(31),
    [anon_sym_TILDE_TILDE] = ACTIONS(3),
    [sym_inline_comment] = ACTIONS(5),
    [sym_number] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
  },
  [5] = {
    [sym__expression_item] = STATE(9),
    [sym__paren_expression] = STATE(10),
    [sym_expression] = STATE(22),
    [sym_operator] = STATE(10),
    [sym_line_comment] = STATE(5),
    [aux_sym_expression_repeat1] = STATE(4),
    [sym_identifier] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_RPAREN] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(31),
    [anon_sym_SLASH] = ACTIONS(31),
    [anon_sym_GT_EQ] = ACTIONS(31),
    [anon_sym_LT_EQ] = ACTIONS(31),
    [anon_sym_LT] = ACTIONS(33),
    [anon_sym_GT] = ACTIONS(33),
    [anon_sym_EQ_EQ] = ACTIONS(31),
    [anon_sym_TILDE_TILDE] = ACTIONS(3),
    [sym_inline_comment] = ACTIONS(5),
    [sym_number] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
  },
  [6] = {
    [sym_line_comment] = STATE(6),
    [sym_identifier] = ACTIONS(39),
    [anon_sym_SEMI] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_RPAREN] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_GT_EQ] = ACTIONS(39),
    [anon_sym_LT_EQ] = ACTIONS(39),
    [anon_sym_LT] = ACTIONS(41),
    [anon_sym_GT] = ACTIONS(41),
    [anon_sym_EQ_EQ] = ACTIONS(39),
    [anon_sym_TILDE_TILDE] = ACTIONS(3),
    [sym_inline_comment] = ACTIONS(5),
    [sym_number] = ACTIONS(39),
    [sym_string] = ACTIONS(39),
  },
  [7] = {
    [sym_line_comment] = STATE(7),
    [sym_identifier] = ACTIONS(43),
    [anon_sym_SEMI] = ACTIONS(43),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_RPAREN] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_STAR] = ACTIONS(43),
    [anon_sym_SLASH] = ACTIONS(43),
    [anon_sym_GT_EQ] = ACTIONS(43),
    [anon_sym_LT_EQ] = ACTIONS(43),
    [anon_sym_LT] = ACTIONS(45),
    [anon_sym_GT] = ACTIONS(45),
    [anon_sym_EQ_EQ] = ACTIONS(43),
    [anon_sym_TILDE_TILDE] = ACTIONS(3),
    [sym_inline_comment] = ACTIONS(5),
    [sym_number] = ACTIONS(43),
    [sym_string] = ACTIONS(43),
  },
  [8] = {
    [sym_line_comment] = STATE(8),
    [sym_identifier] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_RPAREN] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_GT_EQ] = ACTIONS(47),
    [anon_sym_LT_EQ] = ACTIONS(47),
    [anon_sym_LT] = ACTIONS(49),
    [anon_sym_GT] = ACTIONS(49),
    [anon_sym_EQ_EQ] = ACTIONS(47),
    [anon_sym_TILDE_TILDE] = ACTIONS(3),
    [sym_inline_comment] = ACTIONS(5),
    [sym_number] = ACTIONS(47),
    [sym_string] = ACTIONS(47),
  },
  [9] = {
    [sym_line_comment] = STATE(9),
    [sym_identifier] = ACTIONS(51),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_RPAREN] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_SLASH] = ACTIONS(51),
    [anon_sym_GT_EQ] = ACTIONS(51),
    [anon_sym_LT_EQ] = ACTIONS(51),
    [anon_sym_LT] = ACTIONS(53),
    [anon_sym_GT] = ACTIONS(53),
    [anon_sym_EQ_EQ] = ACTIONS(51),
    [anon_sym_TILDE_TILDE] = ACTIONS(3),
    [sym_inline_comment] = ACTIONS(5),
    [sym_number] = ACTIONS(51),
    [sym_string] = ACTIONS(51),
  },
  [10] = {
    [sym_line_comment] = STATE(10),
    [sym_identifier] = ACTIONS(55),
    [anon_sym_SEMI] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_RPAREN] = ACTIONS(55),
    [anon_sym_PLUS] = ACTIONS(55),
    [anon_sym_DASH] = ACTIONS(55),
    [anon_sym_STAR] = ACTIONS(55),
    [anon_sym_SLASH] = ACTIONS(55),
    [anon_sym_GT_EQ] = ACTIONS(55),
    [anon_sym_LT_EQ] = ACTIONS(55),
    [anon_sym_LT] = ACTIONS(57),
    [anon_sym_GT] = ACTIONS(57),
    [anon_sym_EQ_EQ] = ACTIONS(55),
    [anon_sym_TILDE_TILDE] = ACTIONS(3),
    [sym_inline_comment] = ACTIONS(5),
    [sym_number] = ACTIONS(55),
    [sym_string] = ACTIONS(55),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(3), 1,
      anon_sym_TILDE_TILDE,
    ACTIONS(5), 1,
      sym_inline_comment,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(64), 1,
      anon_sym_Def,
    STATE(16), 1,
      sym__statement,
    ACTIONS(59), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
    STATE(11), 2,
      aux_sym__block,
      sym_line_comment,
    STATE(20), 2,
      sym_def_stmt,
      sym_fn_stmt,
  [28] = 9,
    ACTIONS(3), 1,
      anon_sym_TILDE_TILDE,
    ACTIONS(5), 1,
      sym_inline_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_Def,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    STATE(11), 1,
      aux_sym__block,
    STATE(12), 1,
      sym_line_comment,
    STATE(16), 1,
      sym__statement,
    STATE(20), 2,
      sym_def_stmt,
      sym_fn_stmt,
  [57] = 9,
    ACTIONS(3), 1,
      anon_sym_TILDE_TILDE,
    ACTIONS(5), 1,
      sym_inline_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_Def,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    STATE(11), 1,
      aux_sym__block,
    STATE(13), 1,
      sym_line_comment,
    STATE(16), 1,
      sym__statement,
    STATE(20), 2,
      sym_def_stmt,
      sym_fn_stmt,
  [86] = 8,
    ACTIONS(3), 1,
      anon_sym_TILDE_TILDE,
    ACTIONS(5), 1,
      sym_inline_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_Def,
    STATE(13), 1,
      aux_sym__block,
    STATE(14), 1,
      sym_line_comment,
    STATE(16), 1,
      sym__statement,
    STATE(20), 2,
      sym_def_stmt,
      sym_fn_stmt,
  [112] = 5,
    ACTIONS(3), 1,
      anon_sym_TILDE_TILDE,
    ACTIONS(5), 1,
      sym_inline_comment,
    STATE(15), 1,
      sym_line_comment,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
    ACTIONS(73), 2,
      anon_sym_Def,
      sym_identifier,
  [130] = 5,
    ACTIONS(3), 1,
      anon_sym_TILDE_TILDE,
    ACTIONS(5), 1,
      sym_inline_comment,
    STATE(16), 1,
      sym_line_comment,
    ACTIONS(75), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
    ACTIONS(77), 2,
      anon_sym_Def,
      sym_identifier,
  [148] = 5,
    ACTIONS(3), 1,
      anon_sym_TILDE_TILDE,
    ACTIONS(5), 1,
      sym_inline_comment,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    STATE(17), 1,
      sym_line_comment,
    STATE(21), 1,
      sym_def_body,
  [164] = 4,
    ACTIONS(81), 1,
      anon_sym_TILDE_TILDE,
    ACTIONS(83), 1,
      aux_sym_line_comment_token1,
    ACTIONS(85), 1,
      sym_inline_comment,
    STATE(18), 1,
      sym_line_comment,
  [177] = 4,
    ACTIONS(3), 1,
      anon_sym_TILDE_TILDE,
    ACTIONS(5), 1,
      sym_inline_comment,
    ACTIONS(87), 1,
      anon_sym_SEMI,
    STATE(19), 1,
      sym_line_comment,
  [190] = 4,
    ACTIONS(3), 1,
      anon_sym_TILDE_TILDE,
    ACTIONS(5), 1,
      sym_inline_comment,
    ACTIONS(89), 1,
      anon_sym_SEMI,
    STATE(20), 1,
      sym_line_comment,
  [203] = 4,
    ACTIONS(3), 1,
      anon_sym_TILDE_TILDE,
    ACTIONS(5), 1,
      sym_inline_comment,
    ACTIONS(91), 1,
      anon_sym_SEMI,
    STATE(21), 1,
      sym_line_comment,
  [216] = 4,
    ACTIONS(3), 1,
      anon_sym_TILDE_TILDE,
    ACTIONS(5), 1,
      sym_inline_comment,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      sym_line_comment,
  [229] = 4,
    ACTIONS(3), 1,
      anon_sym_TILDE_TILDE,
    ACTIONS(5), 1,
      sym_inline_comment,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    STATE(23), 1,
      sym_line_comment,
  [242] = 4,
    ACTIONS(3), 1,
      anon_sym_TILDE_TILDE,
    ACTIONS(5), 1,
      sym_inline_comment,
    ACTIONS(97), 1,
      sym_identifier,
    STATE(24), 1,
      sym_line_comment,
  [255] = 4,
    ACTIONS(3), 1,
      anon_sym_TILDE_TILDE,
    ACTIONS(5), 1,
      sym_inline_comment,
    ACTIONS(99), 1,
      anon_sym_SEMI,
    STATE(25), 1,
      sym_line_comment,
  [268] = 1,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(11)] = 0,
  [SMALL_STATE(12)] = 28,
  [SMALL_STATE(13)] = 57,
  [SMALL_STATE(14)] = 86,
  [SMALL_STATE(15)] = 112,
  [SMALL_STATE(16)] = 130,
  [SMALL_STATE(17)] = 148,
  [SMALL_STATE(18)] = 164,
  [SMALL_STATE(19)] = 177,
  [SMALL_STATE(20)] = 190,
  [SMALL_STATE(21)] = 203,
  [SMALL_STATE(22)] = 216,
  [SMALL_STATE(23)] = 229,
  [SMALL_STATE(24)] = 242,
  [SMALL_STATE(25)] = 255,
  [SMALL_STATE(26)] = 268,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(10),
  [14] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(5),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(6),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(6),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_stmt, 1, .production_id = 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__paren_expression, 3),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__paren_expression, 3),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__paren_expression, 2),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__paren_expression, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_item, 1),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_item, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block, 2),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block, 2), SHIFT_REPEAT(3),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block, 2), SHIFT_REPEAT(24),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block, 1),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__block, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_stmt, 2, .production_id = 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_stmt, 3, .production_id = 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [95] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_body, 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 2),
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

TS_PUBLIC const TSLanguage *tree_sitter_cognate() {
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
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
