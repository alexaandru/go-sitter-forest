#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 26
#define LARGE_STATE_COUNT 16
#define SYMBOL_COUNT 25
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_SEMI = 2,
  anon_sym_LPAREN = 3,
  anon_sym_RPAREN = 4,
  sym_number = 5,
  sym_string = 6,
  sym_symbol = 7,
  anon_sym_True = 8,
  anon_sym_False = 9,
  anon_sym_TILDE_TILDE = 10,
  aux_sym_line_comment_token1 = 11,
  sym_inline_comment = 12,
  anon_sym_TILDE = 13,
  aux_sym_multiline_comment_token1 = 14,
  sym_source_file = 15,
  aux_sym__statement = 16,
  sym_statement = 17,
  sym__many_statements = 18,
  sym_block = 19,
  sym_boolean = 20,
  sym__literal = 21,
  sym_line_comment = 22,
  sym_multiline_comment = 23,
  aux_sym__many_statements_repeat1 = 24,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_SEMI] = ";",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_number] = "number",
  [sym_string] = "string",
  [sym_symbol] = "symbol",
  [anon_sym_True] = "True",
  [anon_sym_False] = "False",
  [anon_sym_TILDE_TILDE] = "~~",
  [aux_sym_line_comment_token1] = "line_comment_token1",
  [sym_inline_comment] = "inline_comment",
  [anon_sym_TILDE] = "~",
  [aux_sym_multiline_comment_token1] = "multiline_comment_token1",
  [sym_source_file] = "source_file",
  [aux_sym__statement] = "_statement",
  [sym_statement] = "statement",
  [sym__many_statements] = "_many_statements",
  [sym_block] = "block",
  [sym_boolean] = "boolean",
  [sym__literal] = "_literal",
  [sym_line_comment] = "line_comment",
  [sym_multiline_comment] = "multiline_comment",
  [aux_sym__many_statements_repeat1] = "_many_statements_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [sym_symbol] = sym_symbol,
  [anon_sym_True] = anon_sym_True,
  [anon_sym_False] = anon_sym_False,
  [anon_sym_TILDE_TILDE] = anon_sym_TILDE_TILDE,
  [aux_sym_line_comment_token1] = aux_sym_line_comment_token1,
  [sym_inline_comment] = sym_inline_comment,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [aux_sym_multiline_comment_token1] = aux_sym_multiline_comment_token1,
  [sym_source_file] = sym_source_file,
  [aux_sym__statement] = aux_sym__statement,
  [sym_statement] = sym_statement,
  [sym__many_statements] = sym__many_statements,
  [sym_block] = sym_block,
  [sym_boolean] = sym_boolean,
  [sym__literal] = sym__literal,
  [sym_line_comment] = sym_line_comment,
  [sym_multiline_comment] = sym_multiline_comment,
  [aux_sym__many_statements_repeat1] = aux_sym__many_statements_repeat1,
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
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
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_True] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_False] = {
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
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_multiline_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__statement] = {
    .visible = false,
    .named = false,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__many_statements] = {
    .visible = false,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_multiline_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__many_statements_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = sym_statement,
  },
  [2] = {
    [1] = sym_statement,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym__statement, 2,
    aux_sym__statement,
    sym_statement,
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
};

static inline bool sym_symbol_character_set_1(int32_t c) {
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
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '(') ADVANCE(7);
      if (lookahead == ')') ADVANCE(8);
      if (lookahead == ';') ADVANCE(6);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '~') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      if (lookahead == '!' ||
          ('\'' <= lookahead && lookahead <= '+') ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^') ADVANCE(9);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(12);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '~') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(23);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 3:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 4:
      if (sym_symbol_character_set_1(lookahead)) ADVANCE(13);
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
      ACCEPT_TOKEN(sym_identifier);
      if (sym_symbol_character_set_1(lookahead)) ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_symbol);
      if (sym_symbol_character_set_1(lookahead)) ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_TILDE_TILDE);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_TILDE_TILDE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(18);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '~') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(16);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(18);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (sym_symbol_character_set_1(lookahead)) ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_inline_comment);
      if (sym_symbol_character_set_1(lookahead)) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_inline_comment);
      if (sym_symbol_character_set_1(lookahead)) ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '~') ADVANCE(24);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '~') ADVANCE(14);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '~') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(18);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_multiline_comment_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(23);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '~') ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_multiline_comment_token1);
      if (lookahead != 0 &&
          lookahead != '~') ADVANCE(24);
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
      if (lookahead == 'F') ADVANCE(1);
      if (lookahead == 'T') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(3);
      END_STATE();
    case 2:
      if (lookahead == 'r') ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == 'l') ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == 'u') ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == 's') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_True);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_False);
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
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 16},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 0},
  [24] = {(TSStateId)(-1)},
  [25] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_line_comment] = STATE(0),
    [sym_multiline_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_symbol] = ACTIONS(1),
    [anon_sym_True] = ACTIONS(1),
    [anon_sym_False] = ACTIONS(1),
    [anon_sym_TILDE_TILDE] = ACTIONS(3),
    [sym_inline_comment] = ACTIONS(5),
    [anon_sym_TILDE] = ACTIONS(7),
  },
  [1] = {
    [sym_source_file] = STATE(18),
    [aux_sym__statement] = STATE(3),
    [sym_statement] = STATE(16),
    [sym__many_statements] = STATE(19),
    [sym_block] = STATE(12),
    [sym_boolean] = STATE(9),
    [sym__literal] = STATE(12),
    [sym_line_comment] = STATE(1),
    [sym_multiline_comment] = STATE(1),
    [aux_sym__many_statements_repeat1] = STATE(6),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_number] = ACTIONS(13),
    [sym_string] = ACTIONS(13),
    [sym_symbol] = ACTIONS(13),
    [anon_sym_True] = ACTIONS(15),
    [anon_sym_False] = ACTIONS(15),
    [anon_sym_TILDE_TILDE] = ACTIONS(3),
    [sym_inline_comment] = ACTIONS(5),
    [anon_sym_TILDE] = ACTIONS(7),
  },
  [2] = {
    [aux_sym__statement] = STATE(3),
    [sym_statement] = STATE(16),
    [sym__many_statements] = STATE(21),
    [sym_block] = STATE(12),
    [sym_boolean] = STATE(9),
    [sym__literal] = STATE(12),
    [sym_line_comment] = STATE(2),
    [sym_multiline_comment] = STATE(2),
    [aux_sym__many_statements_repeat1] = STATE(6),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(17),
    [sym_number] = ACTIONS(13),
    [sym_string] = ACTIONS(13),
    [sym_symbol] = ACTIONS(13),
    [anon_sym_True] = ACTIONS(15),
    [anon_sym_False] = ACTIONS(15),
    [anon_sym_TILDE_TILDE] = ACTIONS(3),
    [sym_inline_comment] = ACTIONS(5),
    [anon_sym_TILDE] = ACTIONS(7),
  },
  [3] = {
    [aux_sym__statement] = STATE(5),
    [sym_block] = STATE(12),
    [sym_boolean] = STATE(9),
    [sym__literal] = STATE(12),
    [sym_line_comment] = STATE(3),
    [sym_multiline_comment] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(19),
    [sym_number] = ACTIONS(13),
    [sym_string] = ACTIONS(13),
    [sym_symbol] = ACTIONS(13),
    [anon_sym_True] = ACTIONS(15),
    [anon_sym_False] = ACTIONS(15),
    [anon_sym_TILDE_TILDE] = ACTIONS(3),
    [sym_inline_comment] = ACTIONS(5),
    [anon_sym_TILDE] = ACTIONS(7),
  },
  [4] = {
    [aux_sym__statement] = STATE(5),
    [sym_block] = STATE(12),
    [sym_boolean] = STATE(9),
    [sym__literal] = STATE(12),
    [sym_line_comment] = STATE(4),
    [sym_multiline_comment] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(23),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_SEMI] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(23),
    [sym_number] = ACTIONS(13),
    [sym_string] = ACTIONS(13),
    [sym_symbol] = ACTIONS(13),
    [anon_sym_True] = ACTIONS(15),
    [anon_sym_False] = ACTIONS(15),
    [anon_sym_TILDE_TILDE] = ACTIONS(3),
    [sym_inline_comment] = ACTIONS(5),
    [anon_sym_TILDE] = ACTIONS(7),
  },
  [5] = {
    [aux_sym__statement] = STATE(5),
    [sym_block] = STATE(12),
    [sym_boolean] = STATE(9),
    [sym__literal] = STATE(12),
    [sym_line_comment] = STATE(5),
    [sym_multiline_comment] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(27),
    [sym_identifier] = ACTIONS(29),
    [anon_sym_SEMI] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(32),
    [anon_sym_RPAREN] = ACTIONS(27),
    [sym_number] = ACTIONS(35),
    [sym_string] = ACTIONS(35),
    [sym_symbol] = ACTIONS(35),
    [anon_sym_True] = ACTIONS(38),
    [anon_sym_False] = ACTIONS(38),
    [anon_sym_TILDE_TILDE] = ACTIONS(3),
    [sym_inline_comment] = ACTIONS(5),
    [anon_sym_TILDE] = ACTIONS(7),
  },
  [6] = {
    [aux_sym__statement] = STATE(4),
    [sym_statement] = STATE(16),
    [sym_block] = STATE(12),
    [sym_boolean] = STATE(9),
    [sym__literal] = STATE(12),
    [sym_line_comment] = STATE(6),
    [sym_multiline_comment] = STATE(6),
    [aux_sym__many_statements_repeat1] = STATE(7),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_number] = ACTIONS(13),
    [sym_string] = ACTIONS(13),
    [sym_symbol] = ACTIONS(13),
    [anon_sym_True] = ACTIONS(15),
    [anon_sym_False] = ACTIONS(15),
    [anon_sym_TILDE_TILDE] = ACTIONS(3),
    [sym_inline_comment] = ACTIONS(5),
    [anon_sym_TILDE] = ACTIONS(7),
  },
  [7] = {
    [aux_sym__statement] = STATE(8),
    [sym_statement] = STATE(16),
    [sym_block] = STATE(12),
    [sym_boolean] = STATE(9),
    [sym__literal] = STATE(12),
    [sym_line_comment] = STATE(7),
    [sym_multiline_comment] = STATE(7),
    [aux_sym__many_statements_repeat1] = STATE(7),
    [sym_identifier] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(44),
    [sym_number] = ACTIONS(47),
    [sym_string] = ACTIONS(47),
    [sym_symbol] = ACTIONS(47),
    [anon_sym_True] = ACTIONS(50),
    [anon_sym_False] = ACTIONS(50),
    [anon_sym_TILDE_TILDE] = ACTIONS(3),
    [sym_inline_comment] = ACTIONS(5),
    [anon_sym_TILDE] = ACTIONS(7),
  },
  [8] = {
    [aux_sym__statement] = STATE(5),
    [sym_block] = STATE(12),
    [sym_boolean] = STATE(9),
    [sym__literal] = STATE(12),
    [sym_line_comment] = STATE(8),
    [sym_multiline_comment] = STATE(8),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_SEMI] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_number] = ACTIONS(13),
    [sym_string] = ACTIONS(13),
    [sym_symbol] = ACTIONS(13),
    [anon_sym_True] = ACTIONS(15),
    [anon_sym_False] = ACTIONS(15),
    [anon_sym_TILDE_TILDE] = ACTIONS(3),
    [sym_inline_comment] = ACTIONS(5),
    [anon_sym_TILDE] = ACTIONS(7),
  },
  [9] = {
    [sym_line_comment] = STATE(9),
    [sym_multiline_comment] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(55),
    [sym_identifier] = ACTIONS(57),
    [anon_sym_SEMI] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_RPAREN] = ACTIONS(55),
    [sym_number] = ACTIONS(55),
    [sym_string] = ACTIONS(55),
    [sym_symbol] = ACTIONS(55),
    [anon_sym_True] = ACTIONS(57),
    [anon_sym_False] = ACTIONS(57),
    [anon_sym_TILDE_TILDE] = ACTIONS(3),
    [sym_inline_comment] = ACTIONS(5),
    [anon_sym_TILDE] = ACTIONS(7),
  },
  [10] = {
    [sym_line_comment] = STATE(10),
    [sym_multiline_comment] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(59),
    [sym_identifier] = ACTIONS(61),
    [anon_sym_SEMI] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_RPAREN] = ACTIONS(59),
    [sym_number] = ACTIONS(59),
    [sym_string] = ACTIONS(59),
    [sym_symbol] = ACTIONS(59),
    [anon_sym_True] = ACTIONS(61),
    [anon_sym_False] = ACTIONS(61),
    [anon_sym_TILDE_TILDE] = ACTIONS(3),
    [sym_inline_comment] = ACTIONS(5),
    [anon_sym_TILDE] = ACTIONS(7),
  },
  [11] = {
    [sym_line_comment] = STATE(11),
    [sym_multiline_comment] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(63),
    [sym_identifier] = ACTIONS(65),
    [anon_sym_SEMI] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_RPAREN] = ACTIONS(63),
    [sym_number] = ACTIONS(63),
    [sym_string] = ACTIONS(63),
    [sym_symbol] = ACTIONS(63),
    [anon_sym_True] = ACTIONS(65),
    [anon_sym_False] = ACTIONS(65),
    [anon_sym_TILDE_TILDE] = ACTIONS(3),
    [sym_inline_comment] = ACTIONS(5),
    [anon_sym_TILDE] = ACTIONS(7),
  },
  [12] = {
    [sym_line_comment] = STATE(12),
    [sym_multiline_comment] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(67),
    [sym_identifier] = ACTIONS(69),
    [anon_sym_SEMI] = ACTIONS(67),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_RPAREN] = ACTIONS(67),
    [sym_number] = ACTIONS(67),
    [sym_string] = ACTIONS(67),
    [sym_symbol] = ACTIONS(67),
    [anon_sym_True] = ACTIONS(69),
    [anon_sym_False] = ACTIONS(69),
    [anon_sym_TILDE_TILDE] = ACTIONS(3),
    [sym_inline_comment] = ACTIONS(5),
    [anon_sym_TILDE] = ACTIONS(7),
  },
  [13] = {
    [sym_line_comment] = STATE(13),
    [sym_multiline_comment] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(71),
    [sym_identifier] = ACTIONS(73),
    [anon_sym_SEMI] = ACTIONS(71),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_RPAREN] = ACTIONS(71),
    [sym_number] = ACTIONS(71),
    [sym_string] = ACTIONS(71),
    [sym_symbol] = ACTIONS(71),
    [anon_sym_True] = ACTIONS(73),
    [anon_sym_False] = ACTIONS(73),
    [anon_sym_TILDE_TILDE] = ACTIONS(3),
    [sym_inline_comment] = ACTIONS(5),
    [anon_sym_TILDE] = ACTIONS(7),
  },
  [14] = {
    [sym_line_comment] = STATE(14),
    [sym_multiline_comment] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(75),
    [sym_identifier] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(75),
    [sym_number] = ACTIONS(79),
    [sym_string] = ACTIONS(79),
    [sym_symbol] = ACTIONS(79),
    [anon_sym_True] = ACTIONS(77),
    [anon_sym_False] = ACTIONS(77),
    [anon_sym_TILDE_TILDE] = ACTIONS(3),
    [sym_inline_comment] = ACTIONS(5),
    [anon_sym_TILDE] = ACTIONS(7),
  },
  [15] = {
    [sym_line_comment] = STATE(15),
    [sym_multiline_comment] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(81),
    [sym_identifier] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(81),
    [sym_number] = ACTIONS(79),
    [sym_string] = ACTIONS(79),
    [sym_symbol] = ACTIONS(79),
    [anon_sym_True] = ACTIONS(77),
    [anon_sym_False] = ACTIONS(77),
    [anon_sym_TILDE_TILDE] = ACTIONS(3),
    [sym_inline_comment] = ACTIONS(5),
    [anon_sym_TILDE] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      anon_sym_TILDE_TILDE,
    ACTIONS(5), 1,
      sym_inline_comment,
    ACTIONS(7), 1,
      anon_sym_TILDE,
    STATE(16), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(83), 3,
      sym_identifier,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(85), 4,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
      sym_symbol,
  [25] = 6,
    ACTIONS(3), 1,
      anon_sym_TILDE_TILDE,
    ACTIONS(5), 1,
      sym_inline_comment,
    ACTIONS(7), 1,
      anon_sym_TILDE,
    STATE(17), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(77), 3,
      sym_identifier,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(79), 4,
      anon_sym_LPAREN,
      sym_number,
      sym_string,
      sym_symbol,
  [50] = 5,
    ACTIONS(3), 1,
      anon_sym_TILDE_TILDE,
    ACTIONS(5), 1,
      sym_inline_comment,
    ACTIONS(7), 1,
      anon_sym_TILDE,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    STATE(18), 2,
      sym_line_comment,
      sym_multiline_comment,
  [67] = 5,
    ACTIONS(3), 1,
      anon_sym_TILDE_TILDE,
    ACTIONS(5), 1,
      sym_inline_comment,
    ACTIONS(7), 1,
      anon_sym_TILDE,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    STATE(19), 2,
      sym_line_comment,
      sym_multiline_comment,
  [84] = 5,
    ACTIONS(7), 1,
      anon_sym_TILDE,
    ACTIONS(91), 1,
      anon_sym_TILDE_TILDE,
    ACTIONS(93), 1,
      aux_sym_line_comment_token1,
    ACTIONS(95), 1,
      sym_inline_comment,
    STATE(20), 2,
      sym_line_comment,
      sym_multiline_comment,
  [101] = 5,
    ACTIONS(3), 1,
      anon_sym_TILDE_TILDE,
    ACTIONS(5), 1,
      sym_inline_comment,
    ACTIONS(7), 1,
      anon_sym_TILDE,
    ACTIONS(97), 1,
      anon_sym_RPAREN,
    STATE(21), 2,
      sym_line_comment,
      sym_multiline_comment,
  [118] = 5,
    ACTIONS(7), 1,
      anon_sym_TILDE,
    ACTIONS(91), 1,
      anon_sym_TILDE_TILDE,
    ACTIONS(95), 1,
      sym_inline_comment,
    ACTIONS(99), 1,
      aux_sym_multiline_comment_token1,
    STATE(22), 2,
      sym_line_comment,
      sym_multiline_comment,
  [135] = 4,
    ACTIONS(3), 1,
      anon_sym_TILDE_TILDE,
    ACTIONS(5), 1,
      sym_inline_comment,
    ACTIONS(101), 1,
      anon_sym_TILDE,
    STATE(23), 2,
      sym_line_comment,
      sym_multiline_comment,
  [149] = 1,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
  [153] = 1,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(16)] = 0,
  [SMALL_STATE(17)] = 25,
  [SMALL_STATE(18)] = 50,
  [SMALL_STATE(19)] = 67,
  [SMALL_STATE(20)] = 84,
  [SMALL_STATE(21)] = 101,
  [SMALL_STATE(22)] = 118,
  [SMALL_STATE(23)] = 135,
  [SMALL_STATE(24)] = 149,
  [SMALL_STATE(25)] = 153,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__many_statements, 1, .production_id = 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__many_statements, 2, .production_id = 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement, 2),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement, 2), SHIFT_REPEAT(12),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement, 2), SHIFT_REPEAT(2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement, 2), SHIFT_REPEAT(9),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement, 2), SHIFT_REPEAT(10),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__many_statements_repeat1, 2), SHIFT_REPEAT(12),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__many_statements_repeat1, 2), SHIFT_REPEAT(2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__many_statements_repeat1, 2), SHIFT_REPEAT(9),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__many_statements_repeat1, 2), SHIFT_REPEAT(10),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement, 1),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statement, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__many_statements, 2, .production_id = 1),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__many_statements, 3, .production_id = 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__many_statements_repeat1, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__many_statements_repeat1, 1),
  [87] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_comment, 3),
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
