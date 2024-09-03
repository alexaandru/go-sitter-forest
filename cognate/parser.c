#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 24
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 26
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
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
  anon_sym_DQUOTE = 6,
  anon_sym_DQUOTE2 = 7,
  sym__string_content = 8,
  sym_escape_sequence = 9,
  sym_symbol = 10,
  aux_sym_boolean_token1 = 11,
  aux_sym_boolean_token2 = 12,
  sym_line_comment = 13,
  sym_inline_comment = 14,
  sym_multiline_comment = 15,
  sym_source_file = 16,
  aux_sym__statement = 17,
  sym_statement = 18,
  sym__many_statements = 19,
  sym_block = 20,
  sym_string = 21,
  sym_boolean = 22,
  sym__literal = 23,
  aux_sym__many_statements_repeat1 = 24,
  aux_sym_string_repeat1 = 25,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_SEMI] = ";",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_number] = "number",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_DQUOTE2] = "\"",
  [sym__string_content] = "_string_content",
  [sym_escape_sequence] = "escape_sequence",
  [sym_symbol] = "symbol",
  [aux_sym_boolean_token1] = "boolean_token1",
  [aux_sym_boolean_token2] = "boolean_token2",
  [sym_line_comment] = "line_comment",
  [sym_inline_comment] = "inline_comment",
  [sym_multiline_comment] = "multiline_comment",
  [sym_source_file] = "source_file",
  [aux_sym__statement] = "_statement",
  [sym_statement] = "statement",
  [sym__many_statements] = "_many_statements",
  [sym_block] = "block",
  [sym_string] = "string",
  [sym_boolean] = "boolean",
  [sym__literal] = "_literal",
  [aux_sym__many_statements_repeat1] = "_many_statements_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_number] = sym_number,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_DQUOTE2] = anon_sym_DQUOTE,
  [sym__string_content] = sym__string_content,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_symbol] = sym_symbol,
  [aux_sym_boolean_token1] = aux_sym_boolean_token1,
  [aux_sym_boolean_token2] = aux_sym_boolean_token2,
  [sym_line_comment] = sym_line_comment,
  [sym_inline_comment] = sym_inline_comment,
  [sym_multiline_comment] = sym_multiline_comment,
  [sym_source_file] = sym_source_file,
  [aux_sym__statement] = aux_sym__statement,
  [sym_statement] = sym_statement,
  [sym__many_statements] = sym__many_statements,
  [sym_block] = sym_block,
  [sym_string] = sym_string,
  [sym_boolean] = sym_boolean,
  [sym__literal] = sym__literal,
  [aux_sym__many_statements_repeat1] = aux_sym__many_statements_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
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
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [sym__string_content] = {
    .visible = false,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_boolean_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_boolean_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_multiline_comment] = {
    .visible = true,
    .named = true,
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
  [sym_string] = {
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
  [aux_sym__many_statements_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
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
};

static TSCharacterRange sym__string_content_character_set_1[] = {
  {0, '!'}, {'#', '['}, {']', '`'}, {'c', 'e'}, {'g', 'm'}, {'o', 'q'}, {'s', 's'}, {'u', 'u'},
  {'w', 0x10ffff},
};

static TSCharacterRange sym_symbol_character_set_1[] = {
  {'!', '!'}, {'\'', '\''}, {'*', '+'}, {'-', '-'}, {'/', '9'}, {'<', '?'}, {'A', 'Z'}, {'^', '^'},
  {'a', 'z'},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(13);
      if (lookahead == '"') ADVANCE(22);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == ')') ADVANCE(16);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == ';') ADVANCE(14);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '~') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      if (lookahead == '!' ||
          ('\'' <= lookahead && lookahead <= '+') ||
          lookahead == '.' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^') ADVANCE(33);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '"') ADVANCE(22);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '~') ADVANCE(25);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(26);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 2:
      if (lookahead == '~') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 3:
      if (lookahead == '~') ADVANCE(35);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '~') ADVANCE(37);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '~', 28,
        '"', 4,
        '\\', 4,
        'a', 4,
        'b', 4,
        'f', 4,
        'n', 4,
        'r', 4,
        't', 4,
        'v', 4,
      );
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '"', 29,
        '\\', 29,
        'a', 29,
        'b', 29,
        'f', 29,
        'n', 29,
        'r', 29,
        't', 29,
        'v', 29,
      );
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '"', 29,
        '\\', 29,
        'a', 29,
        'b', 29,
        'f', 29,
        'n', 29,
        'r', 29,
        't', 29,
        'v', 29,
      );
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 9:
      if (set_contains(sym_symbol_character_set_1, 9, lookahead)) ADVANCE(30);
      END_STATE();
    case 10:
      if ((!eof && set_contains(sym__string_content_character_set_1, 9, lookahead))) ADVANCE(28);
      END_STATE();
    case 11:
      if (eof) ADVANCE(13);
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == ')') ADVANCE(16);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == ';') ADVANCE(14);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '~') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      if (lookahead == '!' ||
          ('\'' <= lookahead && lookahead <= '+') ||
          lookahead == '.' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^') ADVANCE(33);
      END_STATE();
    case 12:
      if (eof) ADVANCE(13);
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == ')') ADVANCE(16);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == ';') ADVANCE(14);
      if (lookahead == '~') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      if (lookahead == '!' ||
          ('\'' <= lookahead && lookahead <= '+') ||
          lookahead == '.' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^') ADVANCE(33);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (set_contains(sym_symbol_character_set_1, 9, lookahead)) ADVANCE(33);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (set_contains(sym_symbol_character_set_1, 9, lookahead) ||
          lookahead == '.') ADVANCE(33);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__string_content);
      if (lookahead == '\r') ADVANCE(28);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym__string_content);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '~') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym__string_content);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '~') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(24);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__string_content);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == '~') ADVANCE(25);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(26);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"') ADVANCE(28);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__string_content);
      if (lookahead == '\\') ADVANCE(10);
      if (set_contains(sym_symbol_character_set_1, 9, lookahead)) ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"') ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__string_content);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_symbol);
      if (set_contains(sym_symbol_character_set_1, 9, lookahead)) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (set_contains(sym_symbol_character_set_1, 9, lookahead) ||
          lookahead == '.') ADVANCE(33);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (set_contains(sym_symbol_character_set_1, 9, lookahead) ||
          lookahead == '.') ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (set_contains(sym_symbol_character_set_1, 9, lookahead) ||
          lookahead == '.') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_line_comment);
      ADVANCE_MAP(
        '\n', 28,
        '\r', 28,
        '"', 35,
        '\\', 35,
        'a', 35,
        'b', 35,
        'f', 35,
        'n', 35,
        'r', 35,
        't', 35,
        'v', 35,
      );
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_inline_comment);
      if (set_contains(sym_symbol_character_set_1, 9, lookahead)) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_multiline_comment);
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
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(3);
      END_STATE();
    case 2:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym_boolean_token1);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_boolean_token2);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 11},
  [2] = {.lex_state = 11},
  [3] = {.lex_state = 11},
  [4] = {.lex_state = 11},
  [5] = {.lex_state = 11},
  [6] = {.lex_state = 11},
  [7] = {.lex_state = 11},
  [8] = {.lex_state = 11},
  [9] = {.lex_state = 11},
  [10] = {.lex_state = 11},
  [11] = {.lex_state = 11},
  [12] = {.lex_state = 11},
  [13] = {.lex_state = 11},
  [14] = {.lex_state = 11},
  [15] = {.lex_state = 11},
  [16] = {.lex_state = 11},
  [17] = {.lex_state = 11},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE2] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [aux_sym_boolean_token1] = ACTIONS(1),
    [aux_sym_boolean_token2] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [sym_inline_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(23),
    [aux_sym__statement] = STATE(4),
    [sym_statement] = STATE(6),
    [sym__many_statements] = STATE(22),
    [sym_block] = STATE(12),
    [sym_string] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym__literal] = STATE(12),
    [aux_sym__many_statements_repeat1] = STATE(6),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_number] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_symbol] = ACTIONS(11),
    [aux_sym_boolean_token1] = ACTIONS(13),
    [aux_sym_boolean_token2] = ACTIONS(13),
    [sym_line_comment] = ACTIONS(3),
    [sym_inline_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
  },
  [2] = {
    [aux_sym__statement] = STATE(4),
    [sym_statement] = STATE(6),
    [sym__many_statements] = STATE(21),
    [sym_block] = STATE(12),
    [sym_string] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym__literal] = STATE(12),
    [aux_sym__many_statements_repeat1] = STATE(6),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(15),
    [sym_number] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_symbol] = ACTIONS(11),
    [aux_sym_boolean_token1] = ACTIONS(13),
    [aux_sym_boolean_token2] = ACTIONS(13),
    [sym_line_comment] = ACTIONS(3),
    [sym_inline_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
  },
  [3] = {
    [aux_sym__statement] = STATE(5),
    [sym_block] = STATE(12),
    [sym_string] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym__literal] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(17),
    [sym_number] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_symbol] = ACTIONS(11),
    [aux_sym_boolean_token1] = ACTIONS(13),
    [aux_sym_boolean_token2] = ACTIONS(13),
    [sym_line_comment] = ACTIONS(3),
    [sym_inline_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
  },
  [4] = {
    [aux_sym__statement] = STATE(5),
    [sym_block] = STATE(12),
    [sym_string] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym__literal] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(21),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(21),
    [sym_number] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_symbol] = ACTIONS(11),
    [aux_sym_boolean_token1] = ACTIONS(13),
    [aux_sym_boolean_token2] = ACTIONS(13),
    [sym_line_comment] = ACTIONS(3),
    [sym_inline_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
  },
  [5] = {
    [aux_sym__statement] = STATE(5),
    [sym_block] = STATE(12),
    [sym_string] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym__literal] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(25),
    [sym_identifier] = ACTIONS(27),
    [anon_sym_SEMI] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(30),
    [anon_sym_RPAREN] = ACTIONS(25),
    [sym_number] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [sym_symbol] = ACTIONS(36),
    [aux_sym_boolean_token1] = ACTIONS(39),
    [aux_sym_boolean_token2] = ACTIONS(39),
    [sym_line_comment] = ACTIONS(3),
    [sym_inline_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
  },
  [6] = {
    [aux_sym__statement] = STATE(3),
    [sym_statement] = STATE(7),
    [sym_block] = STATE(12),
    [sym_string] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym__literal] = STATE(12),
    [aux_sym__many_statements_repeat1] = STATE(7),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_number] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_symbol] = ACTIONS(11),
    [aux_sym_boolean_token1] = ACTIONS(13),
    [aux_sym_boolean_token2] = ACTIONS(13),
    [sym_line_comment] = ACTIONS(3),
    [sym_inline_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
  },
  [7] = {
    [aux_sym__statement] = STATE(8),
    [sym_statement] = STATE(7),
    [sym_block] = STATE(12),
    [sym_string] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym__literal] = STATE(12),
    [aux_sym__many_statements_repeat1] = STATE(7),
    [sym_identifier] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(45),
    [sym_number] = ACTIONS(42),
    [anon_sym_DQUOTE] = ACTIONS(48),
    [sym_symbol] = ACTIONS(51),
    [aux_sym_boolean_token1] = ACTIONS(54),
    [aux_sym_boolean_token2] = ACTIONS(54),
    [sym_line_comment] = ACTIONS(3),
    [sym_inline_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
  },
  [8] = {
    [aux_sym__statement] = STATE(5),
    [sym_block] = STATE(12),
    [sym_string] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(57),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_number] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_symbol] = ACTIONS(11),
    [aux_sym_boolean_token1] = ACTIONS(13),
    [aux_sym_boolean_token2] = ACTIONS(13),
    [sym_line_comment] = ACTIONS(3),
    [sym_inline_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_inline_comment,
      sym_multiline_comment,
    ACTIONS(61), 4,
      sym_number,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_identifier,
    ACTIONS(59), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      sym_symbol,
  [20] = 3,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_inline_comment,
      sym_multiline_comment,
    ACTIONS(65), 4,
      sym_number,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_identifier,
    ACTIONS(63), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      sym_symbol,
  [40] = 3,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_inline_comment,
      sym_multiline_comment,
    ACTIONS(69), 4,
      sym_number,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_identifier,
    ACTIONS(67), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      sym_symbol,
  [60] = 3,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_inline_comment,
      sym_multiline_comment,
    ACTIONS(73), 4,
      sym_number,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_identifier,
    ACTIONS(71), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      sym_symbol,
  [80] = 3,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_inline_comment,
      sym_multiline_comment,
    ACTIONS(77), 4,
      sym_number,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_identifier,
    ACTIONS(75), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      sym_symbol,
  [100] = 3,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_inline_comment,
      sym_multiline_comment,
    ACTIONS(81), 4,
      sym_number,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_identifier,
    ACTIONS(79), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      sym_symbol,
  [120] = 4,
    ACTIONS(83), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_inline_comment,
      sym_multiline_comment,
    ACTIONS(87), 3,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_symbol,
    ACTIONS(85), 4,
      sym_number,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_identifier,
  [141] = 4,
    ACTIONS(89), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_inline_comment,
      sym_multiline_comment,
    ACTIONS(87), 3,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_symbol,
    ACTIONS(85), 4,
      sym_number,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_identifier,
  [162] = 3,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_inline_comment,
      sym_multiline_comment,
    ACTIONS(87), 3,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_symbol,
    ACTIONS(85), 4,
      sym_number,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_identifier,
  [179] = 4,
    ACTIONS(91), 1,
      anon_sym_DQUOTE2,
    STATE(20), 1,
      aux_sym_string_repeat1,
    ACTIONS(93), 2,
      sym__string_content,
      sym_escape_sequence,
    ACTIONS(95), 3,
      sym_line_comment,
      sym_inline_comment,
      sym_multiline_comment,
  [195] = 4,
    ACTIONS(97), 1,
      anon_sym_DQUOTE2,
    STATE(18), 1,
      aux_sym_string_repeat1,
    ACTIONS(99), 2,
      sym__string_content,
      sym_escape_sequence,
    ACTIONS(95), 3,
      sym_line_comment,
      sym_inline_comment,
      sym_multiline_comment,
  [211] = 4,
    ACTIONS(101), 1,
      anon_sym_DQUOTE2,
    STATE(20), 1,
      aux_sym_string_repeat1,
    ACTIONS(103), 2,
      sym__string_content,
      sym_escape_sequence,
    ACTIONS(95), 3,
      sym_line_comment,
      sym_inline_comment,
      sym_multiline_comment,
  [227] = 2,
    ACTIONS(106), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_inline_comment,
      sym_multiline_comment,
  [236] = 2,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_inline_comment,
      sym_multiline_comment,
  [245] = 2,
    ACTIONS(110), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_line_comment,
      sym_inline_comment,
      sym_multiline_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 20,
  [SMALL_STATE(11)] = 40,
  [SMALL_STATE(12)] = 60,
  [SMALL_STATE(13)] = 80,
  [SMALL_STATE(14)] = 100,
  [SMALL_STATE(15)] = 120,
  [SMALL_STATE(16)] = 141,
  [SMALL_STATE(17)] = 162,
  [SMALL_STATE(18)] = 179,
  [SMALL_STATE(19)] = 195,
  [SMALL_STATE(20)] = 211,
  [SMALL_STATE(21)] = 227,
  [SMALL_STATE(22)] = 236,
  [SMALL_STATE(23)] = 245,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__many_statements, 2, 0, 2),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__many_statements, 1, 0, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement, 2, 0, 0),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement, 2, 0, 0), SHIFT_REPEAT(12),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement, 2, 0, 0), SHIFT_REPEAT(2),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement, 2, 0, 0), SHIFT_REPEAT(19),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement, 2, 0, 0), SHIFT_REPEAT(12),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement, 2, 0, 0), SHIFT_REPEAT(14),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__many_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__many_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__many_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__many_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__many_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement, 1, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statement, 1, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__many_statements, 2, 0, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__many_statements, 3, 0, 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

TS_PUBLIC const TSLanguage *tree_sitter_cognate(void) {
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
