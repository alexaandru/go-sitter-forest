#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 70
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 53
#define ALIAS_COUNT 0
#define TOKEN_COUNT 29
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 4

enum ts_symbol_identifiers {
  sym_end = 1,
  sym_directive_head = 2,
  aux_sym_atom_token1 = 3,
  sym_variable_term = 4,
  aux_sym_operator_notation_token1 = 5,
  aux_sym_operator_notation_token2 = 6,
  anon_sym_SEMI = 7,
  anon_sym_DASH_GT = 8,
  anon_sym_BQUOTE_COMMA_BQUOTE = 9,
  anon_sym_BSLASH_PLUS = 10,
  aux_sym_operator_notation_token3 = 11,
  aux_sym_operator_notation_token4 = 12,
  aux_sym_operator_notation_token5 = 13,
  anon_sym_STAR_STAR = 14,
  anon_sym_CARET = 15,
  aux_sym_operator_notation_token6 = 16,
  anon_sym_PIPE = 17,
  sym_double_quoted_list_notation = 18,
  anon_sym_LPAREN = 19,
  sym_close = 20,
  sym_open_list = 21,
  sym_close_list = 22,
  sym_open_curly = 23,
  sym_close_curly = 24,
  sym_comma = 25,
  sym_integer = 26,
  sym_float_number = 27,
  sym_comment = 28,
  sym_source_file = 29,
  sym_directive_term = 30,
  sym_clause_term = 31,
  sym__term = 32,
  sym__compound_term = 33,
  sym__atomic_term = 34,
  sym__number = 35,
  sym_atom = 36,
  sym_empty_list = 37,
  sym_empty_curly_brackets = 38,
  sym_functional_notation = 39,
  sym_arg_list = 40,
  sym_arg_list_separator = 41,
  sym__arg = 42,
  sym_operator_notation = 43,
  sym_list_notation = 44,
  sym__list_notation_items = 45,
  sym_list_notation_separator = 46,
  sym_curly_bracketed_notation = 47,
  sym_open = 48,
  sym_open_ct = 49,
  aux_sym_source_file_repeat1 = 50,
  aux_sym_arg_list_repeat1 = 51,
  aux_sym__list_notation_items_repeat1 = 52,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_end] = "end",
  [sym_directive_head] = "directive_head",
  [aux_sym_atom_token1] = "atom_token1",
  [sym_variable_term] = "variable_term",
  [aux_sym_operator_notation_token1] = "binary_operator",
  [aux_sym_operator_notation_token2] = "prefix_operator",
  [anon_sym_SEMI] = "semicolon",
  [anon_sym_DASH_GT] = "binary_operator",
  [anon_sym_BQUOTE_COMMA_BQUOTE] = "comma",
  [anon_sym_BSLASH_PLUS] = "prefix_operator",
  [aux_sym_operator_notation_token3] = "binary_operator",
  [aux_sym_operator_notation_token4] = "binary_operator",
  [aux_sym_operator_notation_token5] = "binary_operator",
  [anon_sym_STAR_STAR] = "binary_operator",
  [anon_sym_CARET] = "binary_operator",
  [aux_sym_operator_notation_token6] = "prexif_operator",
  [anon_sym_PIPE] = "|",
  [sym_double_quoted_list_notation] = "double_quoted_list_notation",
  [anon_sym_LPAREN] = "(",
  [sym_close] = "close",
  [sym_open_list] = "open_list",
  [sym_close_list] = "close_list",
  [sym_open_curly] = "open_curly",
  [sym_close_curly] = "close_curly",
  [sym_comma] = "comma",
  [sym_integer] = "integer",
  [sym_float_number] = "float_number",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_directive_term] = "directive_term",
  [sym_clause_term] = "clause_term",
  [sym__term] = "_term",
  [sym__compound_term] = "_compound_term",
  [sym__atomic_term] = "_atomic_term",
  [sym__number] = "_number",
  [sym_atom] = "atom",
  [sym_empty_list] = "empty_list",
  [sym_empty_curly_brackets] = "empty_curly_brackets",
  [sym_functional_notation] = "functional_notation",
  [sym_arg_list] = "arg_list",
  [sym_arg_list_separator] = "arg_list_separator",
  [sym__arg] = "_arg",
  [sym_operator_notation] = "operator_notation",
  [sym_list_notation] = "list_notation",
  [sym__list_notation_items] = "_list_notation_items",
  [sym_list_notation_separator] = "list_notation_separator",
  [sym_curly_bracketed_notation] = "curly_bracketed_notation",
  [sym_open] = "open",
  [sym_open_ct] = "open_ct",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_arg_list_repeat1] = "arg_list_repeat1",
  [aux_sym__list_notation_items_repeat1] = "_list_notation_items_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_end] = sym_end,
  [sym_directive_head] = sym_directive_head,
  [aux_sym_atom_token1] = aux_sym_atom_token1,
  [sym_variable_term] = sym_variable_term,
  [aux_sym_operator_notation_token1] = aux_sym_operator_notation_token1,
  [aux_sym_operator_notation_token2] = aux_sym_operator_notation_token2,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_DASH_GT] = aux_sym_operator_notation_token1,
  [anon_sym_BQUOTE_COMMA_BQUOTE] = sym_comma,
  [anon_sym_BSLASH_PLUS] = aux_sym_operator_notation_token2,
  [aux_sym_operator_notation_token3] = aux_sym_operator_notation_token1,
  [aux_sym_operator_notation_token4] = aux_sym_operator_notation_token1,
  [aux_sym_operator_notation_token5] = aux_sym_operator_notation_token1,
  [anon_sym_STAR_STAR] = aux_sym_operator_notation_token1,
  [anon_sym_CARET] = aux_sym_operator_notation_token1,
  [aux_sym_operator_notation_token6] = aux_sym_operator_notation_token6,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [sym_double_quoted_list_notation] = sym_double_quoted_list_notation,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [sym_close] = sym_close,
  [sym_open_list] = sym_open_list,
  [sym_close_list] = sym_close_list,
  [sym_open_curly] = sym_open_curly,
  [sym_close_curly] = sym_close_curly,
  [sym_comma] = sym_comma,
  [sym_integer] = sym_integer,
  [sym_float_number] = sym_float_number,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_directive_term] = sym_directive_term,
  [sym_clause_term] = sym_clause_term,
  [sym__term] = sym__term,
  [sym__compound_term] = sym__compound_term,
  [sym__atomic_term] = sym__atomic_term,
  [sym__number] = sym__number,
  [sym_atom] = sym_atom,
  [sym_empty_list] = sym_empty_list,
  [sym_empty_curly_brackets] = sym_empty_curly_brackets,
  [sym_functional_notation] = sym_functional_notation,
  [sym_arg_list] = sym_arg_list,
  [sym_arg_list_separator] = sym_arg_list_separator,
  [sym__arg] = sym__arg,
  [sym_operator_notation] = sym_operator_notation,
  [sym_list_notation] = sym_list_notation,
  [sym__list_notation_items] = sym__list_notation_items,
  [sym_list_notation_separator] = sym_list_notation_separator,
  [sym_curly_bracketed_notation] = sym_curly_bracketed_notation,
  [sym_open] = sym_open,
  [sym_open_ct] = sym_open_ct,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_arg_list_repeat1] = aux_sym_arg_list_repeat1,
  [aux_sym__list_notation_items_repeat1] = aux_sym__list_notation_items_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_end] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_head] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_atom_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_variable_term] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_operator_notation_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_operator_notation_token2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BQUOTE_COMMA_BQUOTE] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_PLUS] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_operator_notation_token3] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_operator_notation_token4] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_operator_notation_token5] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR_STAR] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_operator_notation_token6] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [sym_double_quoted_list_notation] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_close] = {
    .visible = true,
    .named = true,
  },
  [sym_open_list] = {
    .visible = true,
    .named = true,
  },
  [sym_close_list] = {
    .visible = true,
    .named = true,
  },
  [sym_open_curly] = {
    .visible = true,
    .named = true,
  },
  [sym_close_curly] = {
    .visible = true,
    .named = true,
  },
  [sym_comma] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float_number] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_term] = {
    .visible = true,
    .named = true,
  },
  [sym_clause_term] = {
    .visible = true,
    .named = true,
  },
  [sym__term] = {
    .visible = false,
    .named = true,
  },
  [sym__compound_term] = {
    .visible = false,
    .named = true,
  },
  [sym__atomic_term] = {
    .visible = false,
    .named = true,
  },
  [sym__number] = {
    .visible = false,
    .named = true,
  },
  [sym_atom] = {
    .visible = true,
    .named = true,
  },
  [sym_empty_list] = {
    .visible = true,
    .named = true,
  },
  [sym_empty_curly_brackets] = {
    .visible = true,
    .named = true,
  },
  [sym_functional_notation] = {
    .visible = true,
    .named = true,
  },
  [sym_arg_list] = {
    .visible = true,
    .named = true,
  },
  [sym_arg_list_separator] = {
    .visible = true,
    .named = true,
  },
  [sym__arg] = {
    .visible = false,
    .named = true,
  },
  [sym_operator_notation] = {
    .visible = true,
    .named = true,
  },
  [sym_list_notation] = {
    .visible = true,
    .named = true,
  },
  [sym__list_notation_items] = {
    .visible = false,
    .named = true,
  },
  [sym_list_notation_separator] = {
    .visible = true,
    .named = true,
  },
  [sym_curly_bracketed_notation] = {
    .visible = true,
    .named = true,
  },
  [sym_open] = {
    .visible = true,
    .named = true,
  },
  [sym_open_ct] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arg_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__list_notation_items_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_function = 1,
  field_operator = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_function] = "function",
  [field_operator] = "operator",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_operator, 0},
  [1] =
    {field_operator, 1},
  [2] =
    {field_function, 0},
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
  [46] = 31,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 47,
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
  [69] = 69,
};

static inline bool aux_sym_atom_token1_character_set_1(int32_t c) {
  return (c < '0'
    ? (c < '('
      ? (c < '%'
        ? (c >= ' ' && c <= '"')
        : c <= '%')
      : (c <= ')' || c == ','))
    : (c <= '9' || (c < ']'
      ? (c < 'A'
        ? c == ';'
        : c <= '[')
      : (c <= ']' || (c >= '_' && c <= '}')))));
}

static inline bool sym_double_quoted_list_notation_character_set_1(int32_t c) {
  return (c < 'f'
    ? (c < '\''
      ? (c < '"'
        ? c == '\n'
        : c <= '"')
      : (c <= '\'' || (c < '`'
        ? c == '\\'
        : c <= 'b')))
    : (c <= 'f' || (c < 't'
      ? (c < 'r'
        ? c == 'n'
        : c <= 'r')
      : (c <= 't' || c == 'v'))));
}

static inline bool sym_double_quoted_list_notation_character_set_2(int32_t c) {
  return (c < '0'
    ? (c < '\''
      ? (c < '%'
        ? (c >= ' ' && c <= '!')
        : c <= '%')
      : (c <= ')' || c == ','))
    : (c <= '9' || (c < ']'
      ? (c < 'A'
        ? c == ';'
        : c <= '[')
      : (c <= ']' || (c >= '_' && c <= '}')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(91);
      if (!eof && (lookahead == 0 ||
          lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')) SKIP(0)
      if (lookahead == '!') ADVANCE(94);
      if (lookahead == '"') ADVANCE(86);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '%') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(87);
      if (lookahead == '(') ADVANCE(126);
      if (lookahead == ')') ADVANCE(127);
      if (lookahead == '*') ADVANCE(118);
      if (lookahead == '+') ADVANCE(33);
      if (lookahead == ',') ADVANCE(132);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == '/') ADVANCE(119);
      if (lookahead == '0') ADVANCE(134);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == ';') ADVANCE(106);
      if (lookahead == '<') ADVANCE(37);
      if (lookahead == '>') ADVANCE(47);
      if (lookahead == '?') ADVANCE(18);
      if (lookahead == '[') ADVANCE(128);
      if (lookahead == '\\') ADVANCE(95);
      if (lookahead == ']') ADVANCE(129);
      if (lookahead == '^') ADVANCE(122);
      if (lookahead == '_') ADVANCE(103);
      if (lookahead == '`') ADVANCE(16);
      if (lookahead == 'm') ADVANCE(101);
      if (lookahead == 'r') ADVANCE(99);
      if (lookahead == '{') ADVANCE(130);
      if (lookahead == '|') ADVANCE(124);
      if (lookahead == '}') ADVANCE(131);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(135);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(103);
      END_STATE();
    case 1:
      if (!eof && (lookahead == 0)) ADVANCE(142);
      if (lookahead == '\n') ADVANCE(141);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '$') ADVANCE(5);
      END_STATE();
    case 3:
      if (lookahead == '$') ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == '$') ADVANCE(7);
      END_STATE();
    case 5:
      if (lookahead == '&') ADVANCE(10);
      END_STATE();
    case 6:
      if (lookahead == '&') ADVANCE(11);
      END_STATE();
    case 7:
      if (lookahead == '&') ADVANCE(12);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(133);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(89);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(14);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(15);
      END_STATE();
    case 13:
      if (lookahead == '+') ADVANCE(20);
      END_STATE();
    case 14:
      if (lookahead == '+') ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == '+') ADVANCE(23);
      END_STATE();
    case 16:
      if (lookahead == ',') ADVANCE(65);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(93);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(105);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(104);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(24);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(48);
      if (lookahead == '0') ADVANCE(134);
      if (lookahead == '>') ADVANCE(107);
      if (lookahead == '\\') ADVANCE(123);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(26);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(27);
      END_STATE();
    case 24:
      if (lookahead == '.') ADVANCE(28);
      END_STATE();
    case 25:
      if (lookahead == '.') ADVANCE(110);
      END_STATE();
    case 26:
      if (lookahead == '.') ADVANCE(30);
      END_STATE();
    case 27:
      if (lookahead == '.') ADVANCE(31);
      END_STATE();
    case 28:
      if (lookahead == '/') ADVANCE(34);
      END_STATE();
    case 29:
      if (lookahead == '/') ADVANCE(115);
      if (lookahead == '=') ADVANCE(113);
      END_STATE();
    case 30:
      if (lookahead == '/') ADVANCE(35);
      END_STATE();
    case 31:
      if (lookahead == '/') ADVANCE(36);
      END_STATE();
    case 32:
      if (lookahead == '0') ADVANCE(134);
      if (lookahead == '\\') ADVANCE(123);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 33:
      if (lookahead == '0') ADVANCE(134);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(38);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(41);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(42);
      END_STATE();
    case 37:
      if (lookahead == '<') ADVANCE(117);
      END_STATE();
    case 38:
      if (lookahead == '<') ADVANCE(44);
      END_STATE();
    case 39:
      if (lookahead == '<') ADVANCE(110);
      END_STATE();
    case 40:
      if (lookahead == '<') ADVANCE(110);
      if (lookahead == '=') ADVANCE(39);
      if (lookahead == '>') ADVANCE(113);
      END_STATE();
    case 41:
      if (lookahead == '<') ADVANCE(45);
      END_STATE();
    case 42:
      if (lookahead == '<') ADVANCE(46);
      END_STATE();
    case 43:
      if (lookahead == '=') ADVANCE(110);
      END_STATE();
    case 44:
      if (lookahead == '=') ADVANCE(49);
      END_STATE();
    case 45:
      if (lookahead == '=') ADVANCE(50);
      END_STATE();
    case 46:
      if (lookahead == '=') ADVANCE(51);
      END_STATE();
    case 47:
      if (lookahead == '>') ADVANCE(117);
      END_STATE();
    case 48:
      if (lookahead == '>') ADVANCE(104);
      END_STATE();
    case 49:
      if (lookahead == '>') ADVANCE(52);
      END_STATE();
    case 50:
      if (lookahead == '>') ADVANCE(53);
      END_STATE();
    case 51:
      if (lookahead == '>') ADVANCE(54);
      END_STATE();
    case 52:
      if (lookahead == '?') ADVANCE(55);
      END_STATE();
    case 53:
      if (lookahead == '?') ADVANCE(56);
      END_STATE();
    case 54:
      if (lookahead == '?') ADVANCE(57);
      END_STATE();
    case 55:
      if (lookahead == '@') ADVANCE(62);
      END_STATE();
    case 56:
      if (lookahead == '@') ADVANCE(63);
      END_STATE();
    case 57:
      if (lookahead == '@') ADVANCE(64);
      END_STATE();
    case 58:
      if (lookahead == '\\') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(58);
      END_STATE();
    case 59:
      if (lookahead == '\\') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 60:
      if (lookahead == '\\') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(60);
      END_STATE();
    case 61:
      if (lookahead == '\\') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      END_STATE();
    case 62:
      if (lookahead == '^') ADVANCE(73);
      END_STATE();
    case 63:
      if (lookahead == '^') ADVANCE(71);
      END_STATE();
    case 64:
      if (lookahead == '^') ADVANCE(72);
      END_STATE();
    case 65:
      if (lookahead == '`') ADVANCE(108);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(117);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 68:
      if (lookahead == 'm') ADVANCE(117);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 70:
      if (lookahead == 's') ADVANCE(110);
      END_STATE();
    case 71:
      if (lookahead == '~') ADVANCE(86);
      END_STATE();
    case 72:
      if (lookahead == '~') ADVANCE(87);
      END_STATE();
    case 73:
      if (lookahead == '~') ADVANCE(96);
      END_STATE();
    case 74:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 75:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(136);
      END_STATE();
    case 76:
      if (!eof && (lookahead == 0 ||
          lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')) SKIP(76)
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(94);
      if (lookahead == '"') ADVANCE(86);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '%') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(87);
      if (lookahead == '(') ADVANCE(126);
      if (lookahead == '+') ADVANCE(33);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '0') ADVANCE(134);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == '?') ADVANCE(18);
      if (lookahead == '[') ADVANCE(128);
      if (lookahead == '\\') ADVANCE(95);
      if (lookahead == ']') ADVANCE(129);
      if (lookahead == '_') ADVANCE(103);
      if (lookahead == '{') ADVANCE(130);
      if (lookahead == '}') ADVANCE(131);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(103);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 77:
      if (!eof && (lookahead == 0 ||
          lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')) SKIP(77)
      if (lookahead == '%') ADVANCE(1);
      if (lookahead == '(') ADVANCE(126);
      if (lookahead == ')') ADVANCE(127);
      if (lookahead == '*') ADVANCE(118);
      if (lookahead == '+') ADVANCE(115);
      if (lookahead == ',') ADVANCE(132);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == '/') ADVANCE(120);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == ';') ADVANCE(106);
      if (lookahead == '<') ADVANCE(112);
      if (lookahead == '=') ADVANCE(111);
      if (lookahead == '>') ADVANCE(114);
      if (lookahead == '@') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == ']') ADVANCE(129);
      if (lookahead == '^') ADVANCE(122);
      if (lookahead == '`') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(70);
      if (lookahead == 'm') ADVANCE(69);
      if (lookahead == 'r') ADVANCE(67);
      if (lookahead == '|') ADVANCE(124);
      if (lookahead == '}') ADVANCE(131);
      END_STATE();
    case 78:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(137);
      END_STATE();
    case 79:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 80:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 81:
      if (sym_double_quoted_list_notation_character_set_1(lookahead)) ADVANCE(86);
      if (lookahead == 'x') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(58);
      END_STATE();
    case 82:
      if (sym_double_quoted_list_notation_character_set_1(lookahead)) ADVANCE(87);
      if (lookahead == 'x') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(60);
      END_STATE();
    case 83:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      END_STATE();
    case 84:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 85:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      END_STATE();
    case 86:
      if (sym_double_quoted_list_notation_character_set_2(lookahead)) ADVANCE(86);
      if (lookahead == '"') ADVANCE(125);
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(81);
      END_STATE();
    case 87:
      if (aux_sym_atom_token1_character_set_1(lookahead)) ADVANCE(87);
      if (lookahead == '#') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(97);
      if (lookahead == '\\') ADVANCE(82);
      END_STATE();
    case 88:
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '/') ADVANCE(89);
      if (lookahead == '*') ADVANCE(88);
      if (lookahead == '/') ADVANCE(143);
      END_STATE();
    case 89:
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(89);
      if (lookahead == '*') ADVANCE(88);
      END_STATE();
    case 90:
      if (eof) ADVANCE(91);
      if (!eof && (lookahead == 0 ||
          lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')) SKIP(90)
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(94);
      if (lookahead == '"') ADVANCE(86);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '%') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(87);
      if (lookahead == '(') ADVANCE(126);
      if (lookahead == '+') ADVANCE(33);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '0') ADVANCE(134);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == '?') ADVANCE(18);
      if (lookahead == '[') ADVANCE(128);
      if (lookahead == '\\') ADVANCE(95);
      if (lookahead == '_') ADVANCE(103);
      if (lookahead == '{') ADVANCE(130);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(103);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_end);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_directive_head);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '+') ADVANCE(109);
      if (lookahead == '\\') ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '\\') ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\'') ADVANCE(87);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'c') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      if (lookahead == 'd') ADVANCE(102);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      if (lookahead == 'm') ADVANCE(102);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_variable_term);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_operator_notation_token1);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_operator_notation_token2);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_BQUOTE_COMMA_BQUOTE);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_BSLASH_PLUS);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_operator_notation_token3);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_operator_notation_token3);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == '<' ||
          lookahead == '=') ADVANCE(110);
      if (lookahead == '\\') ADVANCE(43);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_operator_notation_token3);
      if (lookahead == '<') ADVANCE(117);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_operator_notation_token3);
      if (lookahead == '=') ADVANCE(110);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_operator_notation_token3);
      if (lookahead == '=') ADVANCE(110);
      if (lookahead == '>') ADVANCE(117);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_operator_notation_token4);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_operator_notation_token4);
      if (lookahead == '-') ADVANCE(48);
      if (lookahead == '>') ADVANCE(107);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_operator_notation_token5);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_operator_notation_token5);
      if (lookahead == '*') ADVANCE(121);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_operator_notation_token5);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '/') ADVANCE(117);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_operator_notation_token5);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '/') ADVANCE(117);
      if (lookahead == '\\') ADVANCE(115);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_operator_notation_token6);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_double_quoted_list_notation);
      if (lookahead == '"') ADVANCE(86);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_close);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_open_list);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_close_list);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_open_curly);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_close_curly);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_comma);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_integer);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == 'b') ADVANCE(75);
      if (lookahead == 'o') ADVANCE(78);
      if (lookahead == 'x') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_float_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_float_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_comment);
      if (!eof && (lookahead == 0)) ADVANCE(142);
      if (lookahead == '\n') ADVANCE(141);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(89);
      if (lookahead == '*') ADVANCE(88);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 90},
  [2] = {.lex_state = 90},
  [3] = {.lex_state = 90},
  [4] = {.lex_state = 76},
  [5] = {.lex_state = 76},
  [6] = {.lex_state = 76},
  [7] = {.lex_state = 76},
  [8] = {.lex_state = 76},
  [9] = {.lex_state = 76},
  [10] = {.lex_state = 76},
  [11] = {.lex_state = 76},
  [12] = {.lex_state = 76},
  [13] = {.lex_state = 76},
  [14] = {.lex_state = 76},
  [15] = {.lex_state = 76},
  [16] = {.lex_state = 76},
  [17] = {.lex_state = 76},
  [18] = {.lex_state = 76},
  [19] = {.lex_state = 76},
  [20] = {.lex_state = 76},
  [21] = {.lex_state = 76},
  [22] = {.lex_state = 76},
  [23] = {.lex_state = 76},
  [24] = {.lex_state = 77},
  [25] = {.lex_state = 77},
  [26] = {.lex_state = 77},
  [27] = {.lex_state = 77},
  [28] = {.lex_state = 77},
  [29] = {.lex_state = 77},
  [30] = {.lex_state = 77},
  [31] = {.lex_state = 77},
  [32] = {.lex_state = 77},
  [33] = {.lex_state = 77},
  [34] = {.lex_state = 77},
  [35] = {.lex_state = 77},
  [36] = {.lex_state = 77},
  [37] = {.lex_state = 77},
  [38] = {.lex_state = 77},
  [39] = {.lex_state = 77},
  [40] = {.lex_state = 77},
  [41] = {.lex_state = 77},
  [42] = {.lex_state = 77},
  [43] = {.lex_state = 77},
  [44] = {.lex_state = 77},
  [45] = {.lex_state = 90},
  [46] = {.lex_state = 77},
  [47] = {.lex_state = 77},
  [48] = {.lex_state = 90},
  [49] = {.lex_state = 76},
  [50] = {.lex_state = 77},
  [51] = {.lex_state = 77},
  [52] = {.lex_state = 76},
  [53] = {.lex_state = 76},
  [54] = {.lex_state = 77},
  [55] = {.lex_state = 77},
  [56] = {.lex_state = 77},
  [57] = {.lex_state = 76},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_end] = ACTIONS(1),
    [sym_directive_head] = ACTIONS(1),
    [aux_sym_atom_token1] = ACTIONS(1),
    [sym_variable_term] = ACTIONS(1),
    [aux_sym_operator_notation_token1] = ACTIONS(1),
    [aux_sym_operator_notation_token2] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_BQUOTE_COMMA_BQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH_PLUS] = ACTIONS(1),
    [aux_sym_operator_notation_token5] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [aux_sym_operator_notation_token6] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [sym_double_quoted_list_notation] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [sym_close] = ACTIONS(1),
    [sym_open_list] = ACTIONS(1),
    [sym_close_list] = ACTIONS(1),
    [sym_open_curly] = ACTIONS(1),
    [sym_close_curly] = ACTIONS(1),
    [sym_comma] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_float_number] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(69),
    [sym_directive_term] = STATE(3),
    [sym_clause_term] = STATE(3),
    [sym__term] = STATE(55),
    [sym__compound_term] = STATE(55),
    [sym__atomic_term] = STATE(55),
    [sym__number] = STATE(55),
    [sym_atom] = STATE(24),
    [sym_empty_list] = STATE(26),
    [sym_empty_curly_brackets] = STATE(26),
    [sym_functional_notation] = STATE(55),
    [sym_operator_notation] = STATE(55),
    [sym_list_notation] = STATE(55),
    [sym_curly_bracketed_notation] = STATE(55),
    [sym_open] = STATE(13),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_directive_head] = ACTIONS(7),
    [aux_sym_atom_token1] = ACTIONS(9),
    [sym_variable_term] = ACTIONS(11),
    [aux_sym_operator_notation_token2] = ACTIONS(13),
    [anon_sym_BSLASH_PLUS] = ACTIONS(15),
    [aux_sym_operator_notation_token6] = ACTIONS(17),
    [sym_double_quoted_list_notation] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_open_list] = ACTIONS(21),
    [sym_open_curly] = ACTIONS(23),
    [sym_integer] = ACTIONS(25),
    [sym_float_number] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_directive_term] = STATE(2),
    [sym_clause_term] = STATE(2),
    [sym__term] = STATE(55),
    [sym__compound_term] = STATE(55),
    [sym__atomic_term] = STATE(55),
    [sym__number] = STATE(55),
    [sym_atom] = STATE(24),
    [sym_empty_list] = STATE(26),
    [sym_empty_curly_brackets] = STATE(26),
    [sym_functional_notation] = STATE(55),
    [sym_operator_notation] = STATE(55),
    [sym_list_notation] = STATE(55),
    [sym_curly_bracketed_notation] = STATE(55),
    [sym_open] = STATE(13),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(27),
    [sym_directive_head] = ACTIONS(29),
    [aux_sym_atom_token1] = ACTIONS(32),
    [sym_variable_term] = ACTIONS(35),
    [aux_sym_operator_notation_token2] = ACTIONS(38),
    [anon_sym_BSLASH_PLUS] = ACTIONS(41),
    [aux_sym_operator_notation_token6] = ACTIONS(44),
    [sym_double_quoted_list_notation] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(47),
    [sym_open_list] = ACTIONS(50),
    [sym_open_curly] = ACTIONS(53),
    [sym_integer] = ACTIONS(56),
    [sym_float_number] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_directive_term] = STATE(2),
    [sym_clause_term] = STATE(2),
    [sym__term] = STATE(55),
    [sym__compound_term] = STATE(55),
    [sym__atomic_term] = STATE(55),
    [sym__number] = STATE(55),
    [sym_atom] = STATE(24),
    [sym_empty_list] = STATE(26),
    [sym_empty_curly_brackets] = STATE(26),
    [sym_functional_notation] = STATE(55),
    [sym_operator_notation] = STATE(55),
    [sym_list_notation] = STATE(55),
    [sym_curly_bracketed_notation] = STATE(55),
    [sym_open] = STATE(13),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(59),
    [sym_directive_head] = ACTIONS(7),
    [aux_sym_atom_token1] = ACTIONS(9),
    [sym_variable_term] = ACTIONS(11),
    [aux_sym_operator_notation_token2] = ACTIONS(13),
    [anon_sym_BSLASH_PLUS] = ACTIONS(15),
    [aux_sym_operator_notation_token6] = ACTIONS(17),
    [sym_double_quoted_list_notation] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_open_list] = ACTIONS(21),
    [sym_open_curly] = ACTIONS(23),
    [sym_integer] = ACTIONS(25),
    [sym_float_number] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym__term] = STATE(47),
    [sym__compound_term] = STATE(47),
    [sym__atomic_term] = STATE(47),
    [sym__number] = STATE(47),
    [sym_atom] = STATE(31),
    [sym_empty_list] = STATE(26),
    [sym_empty_curly_brackets] = STATE(26),
    [sym_functional_notation] = STATE(47),
    [sym__arg] = STATE(58),
    [sym_operator_notation] = STATE(47),
    [sym_list_notation] = STATE(47),
    [sym__list_notation_items] = STATE(66),
    [sym_curly_bracketed_notation] = STATE(47),
    [sym_open] = STATE(13),
    [aux_sym_atom_token1] = ACTIONS(9),
    [sym_variable_term] = ACTIONS(61),
    [aux_sym_operator_notation_token2] = ACTIONS(63),
    [anon_sym_BSLASH_PLUS] = ACTIONS(15),
    [aux_sym_operator_notation_token6] = ACTIONS(17),
    [sym_double_quoted_list_notation] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_open_list] = ACTIONS(21),
    [sym_close_list] = ACTIONS(65),
    [sym_open_curly] = ACTIONS(23),
    [sym_integer] = ACTIONS(67),
    [sym_float_number] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_atom_token1,
    ACTIONS(15), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(17), 1,
      aux_sym_operator_notation_token6,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_open_list,
    ACTIONS(23), 1,
      sym_open_curly,
    ACTIONS(63), 1,
      aux_sym_operator_notation_token2,
    ACTIONS(67), 1,
      sym_integer,
    STATE(13), 1,
      sym_open,
    STATE(31), 1,
      sym_atom,
    STATE(59), 1,
      sym__arg,
    STATE(67), 1,
      sym_arg_list,
    STATE(26), 2,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(61), 3,
      sym_variable_term,
      sym_double_quoted_list_notation,
      sym_float_number,
    STATE(47), 8,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym_functional_notation,
      sym_operator_notation,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [59] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_atom_token1,
    ACTIONS(15), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(17), 1,
      aux_sym_operator_notation_token6,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_open_list,
    ACTIONS(23), 1,
      sym_open_curly,
    ACTIONS(63), 1,
      aux_sym_operator_notation_token2,
    ACTIONS(67), 1,
      sym_integer,
    STATE(13), 1,
      sym_open,
    STATE(31), 1,
      sym_atom,
    STATE(65), 1,
      sym__arg,
    STATE(26), 2,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(61), 3,
      sym_variable_term,
      sym_double_quoted_list_notation,
      sym_float_number,
    STATE(47), 8,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym_functional_notation,
      sym_operator_notation,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [115] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_atom_token1,
    ACTIONS(15), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(17), 1,
      aux_sym_operator_notation_token6,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_open_list,
    ACTIONS(23), 1,
      sym_open_curly,
    ACTIONS(63), 1,
      aux_sym_operator_notation_token2,
    ACTIONS(71), 1,
      sym_close_curly,
    ACTIONS(73), 1,
      sym_integer,
    STATE(13), 1,
      sym_open,
    STATE(24), 1,
      sym_atom,
    STATE(26), 2,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(69), 3,
      sym_variable_term,
      sym_double_quoted_list_notation,
      sym_float_number,
    STATE(54), 8,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym_functional_notation,
      sym_operator_notation,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [171] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_atom_token1,
    ACTIONS(15), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(17), 1,
      aux_sym_operator_notation_token6,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_open_list,
    ACTIONS(23), 1,
      sym_open_curly,
    ACTIONS(63), 1,
      aux_sym_operator_notation_token2,
    ACTIONS(67), 1,
      sym_integer,
    STATE(13), 1,
      sym_open,
    STATE(31), 1,
      sym_atom,
    STATE(64), 1,
      sym__arg,
    STATE(26), 2,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(61), 3,
      sym_variable_term,
      sym_double_quoted_list_notation,
      sym_float_number,
    STATE(47), 8,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym_functional_notation,
      sym_operator_notation,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [227] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_atom_token1,
    ACTIONS(15), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(17), 1,
      aux_sym_operator_notation_token6,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_open_list,
    ACTIONS(23), 1,
      sym_open_curly,
    ACTIONS(63), 1,
      aux_sym_operator_notation_token2,
    ACTIONS(77), 1,
      sym_integer,
    STATE(13), 1,
      sym_open,
    STATE(46), 1,
      sym_atom,
    STATE(68), 1,
      sym__arg,
    STATE(26), 2,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(75), 3,
      sym_variable_term,
      sym_double_quoted_list_notation,
      sym_float_number,
    STATE(56), 8,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym_functional_notation,
      sym_operator_notation,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [283] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_atom_token1,
    ACTIONS(15), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(17), 1,
      aux_sym_operator_notation_token6,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_open_list,
    ACTIONS(23), 1,
      sym_open_curly,
    ACTIONS(63), 1,
      aux_sym_operator_notation_token2,
    ACTIONS(81), 1,
      sym_integer,
    STATE(13), 1,
      sym_open,
    STATE(24), 1,
      sym_atom,
    STATE(26), 2,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(79), 3,
      sym_variable_term,
      sym_double_quoted_list_notation,
      sym_float_number,
    STATE(34), 8,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym_functional_notation,
      sym_operator_notation,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [336] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_atom_token1,
    ACTIONS(15), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(17), 1,
      aux_sym_operator_notation_token6,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_open_list,
    ACTIONS(23), 1,
      sym_open_curly,
    ACTIONS(63), 1,
      aux_sym_operator_notation_token2,
    ACTIONS(85), 1,
      sym_integer,
    STATE(13), 1,
      sym_open,
    STATE(24), 1,
      sym_atom,
    STATE(26), 2,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(83), 3,
      sym_variable_term,
      sym_double_quoted_list_notation,
      sym_float_number,
    STATE(41), 8,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym_functional_notation,
      sym_operator_notation,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [389] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_atom_token1,
    ACTIONS(15), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(17), 1,
      aux_sym_operator_notation_token6,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_open_list,
    ACTIONS(23), 1,
      sym_open_curly,
    ACTIONS(63), 1,
      aux_sym_operator_notation_token2,
    ACTIONS(89), 1,
      sym_integer,
    STATE(13), 1,
      sym_open,
    STATE(24), 1,
      sym_atom,
    STATE(26), 2,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(87), 3,
      sym_variable_term,
      sym_double_quoted_list_notation,
      sym_float_number,
    STATE(40), 8,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym_functional_notation,
      sym_operator_notation,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [442] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_atom_token1,
    ACTIONS(15), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(17), 1,
      aux_sym_operator_notation_token6,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_open_list,
    ACTIONS(23), 1,
      sym_open_curly,
    ACTIONS(63), 1,
      aux_sym_operator_notation_token2,
    ACTIONS(93), 1,
      sym_integer,
    STATE(13), 1,
      sym_open,
    STATE(24), 1,
      sym_atom,
    STATE(26), 2,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(91), 3,
      sym_variable_term,
      sym_double_quoted_list_notation,
      sym_float_number,
    STATE(51), 8,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym_functional_notation,
      sym_operator_notation,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [495] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_atom_token1,
    ACTIONS(15), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(17), 1,
      aux_sym_operator_notation_token6,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_open_list,
    ACTIONS(23), 1,
      sym_open_curly,
    ACTIONS(63), 1,
      aux_sym_operator_notation_token2,
    ACTIONS(97), 1,
      sym_integer,
    STATE(13), 1,
      sym_open,
    STATE(24), 1,
      sym_atom,
    STATE(26), 2,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(95), 3,
      sym_variable_term,
      sym_double_quoted_list_notation,
      sym_float_number,
    STATE(50), 8,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym_functional_notation,
      sym_operator_notation,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [548] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_atom_token1,
    ACTIONS(15), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(17), 1,
      aux_sym_operator_notation_token6,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_open_list,
    ACTIONS(23), 1,
      sym_open_curly,
    ACTIONS(63), 1,
      aux_sym_operator_notation_token2,
    ACTIONS(101), 1,
      sym_integer,
    STATE(13), 1,
      sym_open,
    STATE(24), 1,
      sym_atom,
    STATE(26), 2,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(99), 3,
      sym_variable_term,
      sym_double_quoted_list_notation,
      sym_float_number,
    STATE(28), 8,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym_functional_notation,
      sym_operator_notation,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [601] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_atom_token1,
    ACTIONS(15), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(17), 1,
      aux_sym_operator_notation_token6,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_open_list,
    ACTIONS(23), 1,
      sym_open_curly,
    ACTIONS(63), 1,
      aux_sym_operator_notation_token2,
    ACTIONS(105), 1,
      sym_integer,
    STATE(13), 1,
      sym_open,
    STATE(24), 1,
      sym_atom,
    STATE(26), 2,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(103), 3,
      sym_variable_term,
      sym_double_quoted_list_notation,
      sym_float_number,
    STATE(39), 8,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym_functional_notation,
      sym_operator_notation,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [654] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_atom_token1,
    ACTIONS(15), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(17), 1,
      aux_sym_operator_notation_token6,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_open_list,
    ACTIONS(23), 1,
      sym_open_curly,
    ACTIONS(63), 1,
      aux_sym_operator_notation_token2,
    ACTIONS(109), 1,
      sym_integer,
    STATE(13), 1,
      sym_open,
    STATE(24), 1,
      sym_atom,
    STATE(26), 2,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(107), 3,
      sym_variable_term,
      sym_double_quoted_list_notation,
      sym_float_number,
    STATE(42), 8,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym_functional_notation,
      sym_operator_notation,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [707] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_atom_token1,
    ACTIONS(15), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(17), 1,
      aux_sym_operator_notation_token6,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_open_list,
    ACTIONS(23), 1,
      sym_open_curly,
    ACTIONS(63), 1,
      aux_sym_operator_notation_token2,
    ACTIONS(113), 1,
      sym_integer,
    STATE(13), 1,
      sym_open,
    STATE(24), 1,
      sym_atom,
    STATE(26), 2,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(111), 3,
      sym_variable_term,
      sym_double_quoted_list_notation,
      sym_float_number,
    STATE(29), 8,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym_functional_notation,
      sym_operator_notation,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [760] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_atom_token1,
    ACTIONS(15), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(17), 1,
      aux_sym_operator_notation_token6,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_open_list,
    ACTIONS(23), 1,
      sym_open_curly,
    ACTIONS(63), 1,
      aux_sym_operator_notation_token2,
    ACTIONS(117), 1,
      sym_integer,
    STATE(13), 1,
      sym_open,
    STATE(24), 1,
      sym_atom,
    STATE(26), 2,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(115), 3,
      sym_variable_term,
      sym_double_quoted_list_notation,
      sym_float_number,
    STATE(33), 8,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym_functional_notation,
      sym_operator_notation,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [813] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_atom_token1,
    ACTIONS(15), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(17), 1,
      aux_sym_operator_notation_token6,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_open_list,
    ACTIONS(23), 1,
      sym_open_curly,
    ACTIONS(63), 1,
      aux_sym_operator_notation_token2,
    ACTIONS(121), 1,
      sym_integer,
    STATE(13), 1,
      sym_open,
    STATE(24), 1,
      sym_atom,
    STATE(26), 2,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(119), 3,
      sym_variable_term,
      sym_double_quoted_list_notation,
      sym_float_number,
    STATE(38), 8,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym_functional_notation,
      sym_operator_notation,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [866] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_atom_token1,
    ACTIONS(15), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(17), 1,
      aux_sym_operator_notation_token6,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_open_list,
    ACTIONS(23), 1,
      sym_open_curly,
    ACTIONS(63), 1,
      aux_sym_operator_notation_token2,
    ACTIONS(125), 1,
      sym_integer,
    STATE(13), 1,
      sym_open,
    STATE(24), 1,
      sym_atom,
    STATE(26), 2,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(123), 3,
      sym_variable_term,
      sym_double_quoted_list_notation,
      sym_float_number,
    STATE(37), 8,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym_functional_notation,
      sym_operator_notation,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [919] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_atom_token1,
    ACTIONS(15), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(17), 1,
      aux_sym_operator_notation_token6,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_open_list,
    ACTIONS(23), 1,
      sym_open_curly,
    ACTIONS(63), 1,
      aux_sym_operator_notation_token2,
    ACTIONS(129), 1,
      sym_integer,
    STATE(13), 1,
      sym_open,
    STATE(24), 1,
      sym_atom,
    STATE(26), 2,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(127), 3,
      sym_variable_term,
      sym_double_quoted_list_notation,
      sym_float_number,
    STATE(36), 8,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym_functional_notation,
      sym_operator_notation,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [972] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_atom_token1,
    ACTIONS(15), 1,
      anon_sym_BSLASH_PLUS,
    ACTIONS(17), 1,
      aux_sym_operator_notation_token6,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_open_list,
    ACTIONS(23), 1,
      sym_open_curly,
    ACTIONS(63), 1,
      aux_sym_operator_notation_token2,
    ACTIONS(133), 1,
      sym_integer,
    STATE(13), 1,
      sym_open,
    STATE(24), 1,
      sym_atom,
    STATE(26), 2,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(131), 3,
      sym_variable_term,
      sym_double_quoted_list_notation,
      sym_float_number,
    STATE(35), 8,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym_functional_notation,
      sym_operator_notation,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [1025] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym_open_ct,
    ACTIONS(137), 3,
      aux_sym_operator_notation_token3,
      aux_sym_operator_notation_token4,
      aux_sym_operator_notation_token5,
    ACTIONS(135), 12,
      sym_end,
      aux_sym_operator_notation_token1,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      anon_sym_PIPE,
      sym_close,
      sym_close_list,
      sym_close_curly,
      sym_comma,
  [1054] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 3,
      aux_sym_operator_notation_token3,
      aux_sym_operator_notation_token4,
      aux_sym_operator_notation_token5,
    ACTIONS(141), 13,
      sym_end,
      aux_sym_operator_notation_token1,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      sym_close,
      sym_close_list,
      sym_close_curly,
      sym_comma,
  [1078] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 3,
      aux_sym_operator_notation_token3,
      aux_sym_operator_notation_token4,
      aux_sym_operator_notation_token5,
    ACTIONS(145), 13,
      sym_end,
      aux_sym_operator_notation_token1,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      sym_close,
      sym_close_list,
      sym_close_curly,
      sym_comma,
  [1102] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 3,
      aux_sym_operator_notation_token3,
      aux_sym_operator_notation_token4,
      aux_sym_operator_notation_token5,
    ACTIONS(149), 13,
      sym_end,
      aux_sym_operator_notation_token1,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      sym_close,
      sym_close_list,
      sym_close_curly,
      sym_comma,
  [1126] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      aux_sym_operator_notation_token3,
    ACTIONS(157), 1,
      aux_sym_operator_notation_token4,
    ACTIONS(159), 1,
      aux_sym_operator_notation_token5,
    ACTIONS(161), 1,
      anon_sym_STAR_STAR,
    ACTIONS(163), 1,
      anon_sym_CARET,
    ACTIONS(153), 10,
      sym_end,
      aux_sym_operator_notation_token1,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      anon_sym_PIPE,
      sym_close,
      sym_close_list,
      sym_close_curly,
      sym_comma,
  [1157] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      aux_sym_operator_notation_token3,
    ACTIONS(157), 1,
      aux_sym_operator_notation_token4,
    ACTIONS(159), 1,
      aux_sym_operator_notation_token5,
    ACTIONS(161), 1,
      anon_sym_STAR_STAR,
    ACTIONS(163), 1,
      anon_sym_CARET,
    ACTIONS(167), 1,
      anon_sym_DASH_GT,
    ACTIONS(169), 2,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_comma,
    ACTIONS(165), 7,
      sym_end,
      aux_sym_operator_notation_token1,
      anon_sym_SEMI,
      anon_sym_PIPE,
      sym_close,
      sym_close_list,
      sym_close_curly,
  [1192] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 3,
      aux_sym_operator_notation_token3,
      aux_sym_operator_notation_token4,
      aux_sym_operator_notation_token5,
    ACTIONS(171), 12,
      sym_end,
      aux_sym_operator_notation_token1,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      anon_sym_PIPE,
      sym_close,
      sym_close_list,
      sym_close_curly,
      sym_comma,
  [1215] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym_open_ct,
    ACTIONS(137), 3,
      aux_sym_operator_notation_token3,
      aux_sym_operator_notation_token4,
      aux_sym_operator_notation_token5,
    ACTIONS(175), 4,
      anon_sym_PIPE,
      sym_close,
      sym_close_list,
      sym_comma,
    ACTIONS(135), 6,
      aux_sym_operator_notation_token1,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [1244] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 3,
      aux_sym_operator_notation_token3,
      aux_sym_operator_notation_token4,
      aux_sym_operator_notation_token5,
    ACTIONS(177), 12,
      sym_end,
      aux_sym_operator_notation_token1,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      anon_sym_PIPE,
      sym_close,
      sym_close_list,
      sym_close_curly,
      sym_comma,
  [1267] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_STAR_STAR,
    ACTIONS(163), 1,
      anon_sym_CARET,
    ACTIONS(181), 3,
      aux_sym_operator_notation_token3,
      aux_sym_operator_notation_token4,
      aux_sym_operator_notation_token5,
    ACTIONS(165), 10,
      sym_end,
      aux_sym_operator_notation_token1,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      anon_sym_PIPE,
      sym_close,
      sym_close_list,
      sym_close_curly,
      sym_comma,
  [1294] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 3,
      aux_sym_operator_notation_token3,
      aux_sym_operator_notation_token4,
      aux_sym_operator_notation_token5,
    ACTIONS(165), 12,
      sym_end,
      aux_sym_operator_notation_token1,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      anon_sym_PIPE,
      sym_close,
      sym_close_list,
      sym_close_curly,
      sym_comma,
  [1317] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_STAR_STAR,
    ACTIONS(163), 1,
      anon_sym_CARET,
    ACTIONS(181), 3,
      aux_sym_operator_notation_token3,
      aux_sym_operator_notation_token4,
      aux_sym_operator_notation_token5,
    ACTIONS(165), 10,
      sym_end,
      aux_sym_operator_notation_token1,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      anon_sym_PIPE,
      sym_close,
      sym_close_list,
      sym_close_curly,
      sym_comma,
  [1344] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      aux_sym_operator_notation_token5,
    ACTIONS(161), 1,
      anon_sym_STAR_STAR,
    ACTIONS(163), 1,
      anon_sym_CARET,
    ACTIONS(181), 2,
      aux_sym_operator_notation_token3,
      aux_sym_operator_notation_token4,
    ACTIONS(165), 10,
      sym_end,
      aux_sym_operator_notation_token1,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      anon_sym_PIPE,
      sym_close,
      sym_close_list,
      sym_close_curly,
      sym_comma,
  [1373] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      aux_sym_operator_notation_token4,
    ACTIONS(159), 1,
      aux_sym_operator_notation_token5,
    ACTIONS(161), 1,
      anon_sym_STAR_STAR,
    ACTIONS(163), 1,
      anon_sym_CARET,
    ACTIONS(181), 1,
      aux_sym_operator_notation_token3,
    ACTIONS(165), 10,
      sym_end,
      aux_sym_operator_notation_token1,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      anon_sym_PIPE,
      sym_close,
      sym_close_list,
      sym_close_curly,
      sym_comma,
  [1404] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      aux_sym_operator_notation_token3,
    ACTIONS(157), 1,
      aux_sym_operator_notation_token4,
    ACTIONS(159), 1,
      aux_sym_operator_notation_token5,
    ACTIONS(161), 1,
      anon_sym_STAR_STAR,
    ACTIONS(163), 1,
      anon_sym_CARET,
    ACTIONS(169), 2,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_comma,
    ACTIONS(165), 8,
      sym_end,
      aux_sym_operator_notation_token1,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
      anon_sym_PIPE,
      sym_close,
      sym_close_list,
      sym_close_curly,
  [1437] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      aux_sym_operator_notation_token3,
    ACTIONS(157), 1,
      aux_sym_operator_notation_token4,
    ACTIONS(159), 1,
      aux_sym_operator_notation_token5,
    ACTIONS(161), 1,
      anon_sym_STAR_STAR,
    ACTIONS(163), 1,
      anon_sym_CARET,
    ACTIONS(167), 1,
      anon_sym_DASH_GT,
    ACTIONS(183), 1,
      anon_sym_SEMI,
    ACTIONS(169), 2,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_comma,
    ACTIONS(153), 6,
      sym_end,
      aux_sym_operator_notation_token1,
      anon_sym_PIPE,
      sym_close,
      sym_close_list,
      sym_close_curly,
  [1474] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_STAR_STAR,
    ACTIONS(163), 1,
      anon_sym_CARET,
    ACTIONS(185), 3,
      aux_sym_operator_notation_token3,
      aux_sym_operator_notation_token4,
      aux_sym_operator_notation_token5,
    ACTIONS(153), 10,
      sym_end,
      aux_sym_operator_notation_token1,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      anon_sym_PIPE,
      sym_close,
      sym_close_list,
      sym_close_curly,
      sym_comma,
  [1501] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      aux_sym_operator_notation_token3,
    ACTIONS(157), 1,
      aux_sym_operator_notation_token4,
    ACTIONS(159), 1,
      aux_sym_operator_notation_token5,
    ACTIONS(161), 1,
      anon_sym_STAR_STAR,
    ACTIONS(163), 1,
      anon_sym_CARET,
    ACTIONS(167), 1,
      anon_sym_DASH_GT,
    ACTIONS(183), 1,
      anon_sym_SEMI,
    ACTIONS(169), 2,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_comma,
    ACTIONS(165), 6,
      sym_end,
      aux_sym_operator_notation_token1,
      anon_sym_PIPE,
      sym_close,
      sym_close_list,
      sym_close_curly,
  [1538] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      aux_sym_operator_notation_token3,
    ACTIONS(157), 1,
      aux_sym_operator_notation_token4,
    ACTIONS(159), 1,
      aux_sym_operator_notation_token5,
    ACTIONS(161), 1,
      anon_sym_STAR_STAR,
    ACTIONS(163), 1,
      anon_sym_CARET,
    ACTIONS(167), 1,
      anon_sym_DASH_GT,
    ACTIONS(183), 1,
      anon_sym_SEMI,
    ACTIONS(169), 2,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_comma,
    ACTIONS(165), 6,
      sym_end,
      aux_sym_operator_notation_token1,
      anon_sym_PIPE,
      sym_close,
      sym_close_list,
      sym_close_curly,
  [1575] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 3,
      aux_sym_operator_notation_token3,
      aux_sym_operator_notation_token4,
      aux_sym_operator_notation_token5,
    ACTIONS(187), 12,
      sym_end,
      aux_sym_operator_notation_token1,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      anon_sym_PIPE,
      sym_close,
      sym_close_list,
      sym_close_curly,
      sym_comma,
  [1598] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 3,
      aux_sym_operator_notation_token3,
      aux_sym_operator_notation_token4,
      aux_sym_operator_notation_token5,
    ACTIONS(191), 12,
      sym_end,
      aux_sym_operator_notation_token1,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      anon_sym_PIPE,
      sym_close,
      sym_close_list,
      sym_close_curly,
      sym_comma,
  [1621] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 3,
      aux_sym_atom_token1,
      aux_sym_operator_notation_token2,
      sym_integer,
    ACTIONS(195), 10,
      ts_builtin_sym_end,
      sym_directive_head,
      sym_variable_term,
      anon_sym_BSLASH_PLUS,
      aux_sym_operator_notation_token6,
      sym_double_quoted_list_notation,
      anon_sym_LPAREN,
      sym_open_list,
      sym_open_curly,
      sym_float_number,
  [1642] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      sym_close_list,
    STATE(5), 1,
      sym_open_ct,
    ACTIONS(137), 3,
      aux_sym_operator_notation_token3,
      aux_sym_operator_notation_token4,
      aux_sym_operator_notation_token5,
    ACTIONS(135), 7,
      aux_sym_operator_notation_token1,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      sym_comma,
  [1669] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      aux_sym_operator_notation_token3,
    ACTIONS(157), 1,
      aux_sym_operator_notation_token4,
    ACTIONS(159), 1,
      aux_sym_operator_notation_token5,
    ACTIONS(161), 1,
      anon_sym_STAR_STAR,
    ACTIONS(163), 1,
      anon_sym_CARET,
    ACTIONS(167), 1,
      anon_sym_DASH_GT,
    ACTIONS(169), 1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(183), 1,
      anon_sym_SEMI,
    ACTIONS(199), 1,
      aux_sym_operator_notation_token1,
    ACTIONS(175), 4,
      anon_sym_PIPE,
      sym_close,
      sym_close_list,
      sym_comma,
  [1706] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 3,
      aux_sym_atom_token1,
      aux_sym_operator_notation_token2,
      sym_integer,
    ACTIONS(201), 10,
      ts_builtin_sym_end,
      sym_directive_head,
      sym_variable_term,
      anon_sym_BSLASH_PLUS,
      aux_sym_operator_notation_token6,
      sym_double_quoted_list_notation,
      anon_sym_LPAREN,
      sym_open_list,
      sym_open_curly,
      sym_float_number,
  [1727] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 2,
      aux_sym_atom_token1,
      sym_integer,
    ACTIONS(207), 9,
      sym_variable_term,
      aux_sym_operator_notation_token2,
      anon_sym_BSLASH_PLUS,
      aux_sym_operator_notation_token6,
      sym_double_quoted_list_notation,
      anon_sym_LPAREN,
      sym_open_list,
      sym_open_curly,
      sym_float_number,
  [1746] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      aux_sym_operator_notation_token3,
    ACTIONS(157), 1,
      aux_sym_operator_notation_token4,
    ACTIONS(159), 1,
      aux_sym_operator_notation_token5,
    ACTIONS(161), 1,
      anon_sym_STAR_STAR,
    ACTIONS(163), 1,
      anon_sym_CARET,
    ACTIONS(167), 1,
      anon_sym_DASH_GT,
    ACTIONS(183), 1,
      anon_sym_SEMI,
    ACTIONS(199), 1,
      aux_sym_operator_notation_token1,
    ACTIONS(209), 1,
      sym_end,
    ACTIONS(169), 2,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_comma,
  [1781] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      aux_sym_operator_notation_token3,
    ACTIONS(157), 1,
      aux_sym_operator_notation_token4,
    ACTIONS(159), 1,
      aux_sym_operator_notation_token5,
    ACTIONS(161), 1,
      anon_sym_STAR_STAR,
    ACTIONS(163), 1,
      anon_sym_CARET,
    ACTIONS(167), 1,
      anon_sym_DASH_GT,
    ACTIONS(183), 1,
      anon_sym_SEMI,
    ACTIONS(199), 1,
      aux_sym_operator_notation_token1,
    ACTIONS(211), 1,
      sym_close,
    ACTIONS(169), 2,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_comma,
  [1816] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 2,
      aux_sym_atom_token1,
      sym_integer,
    ACTIONS(215), 9,
      sym_variable_term,
      aux_sym_operator_notation_token2,
      anon_sym_BSLASH_PLUS,
      aux_sym_operator_notation_token6,
      sym_double_quoted_list_notation,
      anon_sym_LPAREN,
      sym_open_list,
      sym_open_curly,
      sym_float_number,
  [1835] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 2,
      aux_sym_atom_token1,
      sym_integer,
    ACTIONS(219), 9,
      sym_variable_term,
      aux_sym_operator_notation_token2,
      anon_sym_BSLASH_PLUS,
      aux_sym_operator_notation_token6,
      sym_double_quoted_list_notation,
      anon_sym_LPAREN,
      sym_open_list,
      sym_open_curly,
      sym_float_number,
  [1854] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      aux_sym_operator_notation_token3,
    ACTIONS(157), 1,
      aux_sym_operator_notation_token4,
    ACTIONS(159), 1,
      aux_sym_operator_notation_token5,
    ACTIONS(161), 1,
      anon_sym_STAR_STAR,
    ACTIONS(163), 1,
      anon_sym_CARET,
    ACTIONS(167), 1,
      anon_sym_DASH_GT,
    ACTIONS(183), 1,
      anon_sym_SEMI,
    ACTIONS(199), 1,
      aux_sym_operator_notation_token1,
    ACTIONS(221), 1,
      sym_close_curly,
    ACTIONS(169), 2,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_comma,
  [1889] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      aux_sym_operator_notation_token3,
    ACTIONS(157), 1,
      aux_sym_operator_notation_token4,
    ACTIONS(159), 1,
      aux_sym_operator_notation_token5,
    ACTIONS(161), 1,
      anon_sym_STAR_STAR,
    ACTIONS(163), 1,
      anon_sym_CARET,
    ACTIONS(167), 1,
      anon_sym_DASH_GT,
    ACTIONS(183), 1,
      anon_sym_SEMI,
    ACTIONS(199), 1,
      aux_sym_operator_notation_token1,
    ACTIONS(223), 1,
      sym_end,
    ACTIONS(169), 2,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_comma,
  [1924] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      aux_sym_operator_notation_token3,
    ACTIONS(157), 1,
      aux_sym_operator_notation_token4,
    ACTIONS(159), 1,
      aux_sym_operator_notation_token5,
    ACTIONS(161), 1,
      anon_sym_STAR_STAR,
    ACTIONS(163), 1,
      anon_sym_CARET,
    ACTIONS(167), 1,
      anon_sym_DASH_GT,
    ACTIONS(175), 1,
      sym_close_list,
    ACTIONS(183), 1,
      anon_sym_SEMI,
    ACTIONS(199), 1,
      aux_sym_operator_notation_token1,
    ACTIONS(169), 2,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_comma,
  [1959] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 2,
      aux_sym_atom_token1,
      sym_integer,
    ACTIONS(227), 9,
      sym_variable_term,
      aux_sym_operator_notation_token2,
      anon_sym_BSLASH_PLUS,
      aux_sym_operator_notation_token6,
      sym_double_quoted_list_notation,
      anon_sym_LPAREN,
      sym_open_list,
      sym_open_curly,
      sym_float_number,
  [1978] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_PIPE,
    ACTIONS(231), 1,
      sym_close_list,
    ACTIONS(233), 1,
      sym_comma,
    STATE(8), 1,
      sym_list_notation_separator,
    STATE(61), 1,
      aux_sym__list_notation_items_repeat1,
  [1997] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      sym_close,
    ACTIONS(237), 1,
      sym_comma,
    STATE(6), 1,
      sym_arg_list_separator,
    STATE(62), 1,
      aux_sym_arg_list_repeat1,
  [2013] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      sym_close_list,
    ACTIONS(241), 1,
      sym_comma,
    STATE(8), 1,
      sym_list_notation_separator,
    STATE(60), 1,
      aux_sym__list_notation_items_repeat1,
  [2029] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      sym_comma,
    ACTIONS(244), 1,
      sym_close_list,
    STATE(8), 1,
      sym_list_notation_separator,
    STATE(60), 1,
      aux_sym__list_notation_items_repeat1,
  [2045] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      sym_comma,
    ACTIONS(246), 1,
      sym_close,
    STATE(6), 1,
      sym_arg_list_separator,
    STATE(63), 1,
      aux_sym_arg_list_repeat1,
  [2061] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      sym_close,
    ACTIONS(250), 1,
      sym_comma,
    STATE(6), 1,
      sym_arg_list_separator,
    STATE(63), 1,
      aux_sym_arg_list_repeat1,
  [2077] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 2,
      sym_close_list,
      sym_comma,
  [2085] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 2,
      sym_close,
      sym_comma,
  [2093] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      sym_close_list,
  [2100] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      sym_close,
  [2107] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      sym_close_list,
  [2114] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 59,
  [SMALL_STATE(7)] = 115,
  [SMALL_STATE(8)] = 171,
  [SMALL_STATE(9)] = 227,
  [SMALL_STATE(10)] = 283,
  [SMALL_STATE(11)] = 336,
  [SMALL_STATE(12)] = 389,
  [SMALL_STATE(13)] = 442,
  [SMALL_STATE(14)] = 495,
  [SMALL_STATE(15)] = 548,
  [SMALL_STATE(16)] = 601,
  [SMALL_STATE(17)] = 654,
  [SMALL_STATE(18)] = 707,
  [SMALL_STATE(19)] = 760,
  [SMALL_STATE(20)] = 813,
  [SMALL_STATE(21)] = 866,
  [SMALL_STATE(22)] = 919,
  [SMALL_STATE(23)] = 972,
  [SMALL_STATE(24)] = 1025,
  [SMALL_STATE(25)] = 1054,
  [SMALL_STATE(26)] = 1078,
  [SMALL_STATE(27)] = 1102,
  [SMALL_STATE(28)] = 1126,
  [SMALL_STATE(29)] = 1157,
  [SMALL_STATE(30)] = 1192,
  [SMALL_STATE(31)] = 1215,
  [SMALL_STATE(32)] = 1244,
  [SMALL_STATE(33)] = 1267,
  [SMALL_STATE(34)] = 1294,
  [SMALL_STATE(35)] = 1317,
  [SMALL_STATE(36)] = 1344,
  [SMALL_STATE(37)] = 1373,
  [SMALL_STATE(38)] = 1404,
  [SMALL_STATE(39)] = 1437,
  [SMALL_STATE(40)] = 1474,
  [SMALL_STATE(41)] = 1501,
  [SMALL_STATE(42)] = 1538,
  [SMALL_STATE(43)] = 1575,
  [SMALL_STATE(44)] = 1598,
  [SMALL_STATE(45)] = 1621,
  [SMALL_STATE(46)] = 1642,
  [SMALL_STATE(47)] = 1669,
  [SMALL_STATE(48)] = 1706,
  [SMALL_STATE(49)] = 1727,
  [SMALL_STATE(50)] = 1746,
  [SMALL_STATE(51)] = 1781,
  [SMALL_STATE(52)] = 1816,
  [SMALL_STATE(53)] = 1835,
  [SMALL_STATE(54)] = 1854,
  [SMALL_STATE(55)] = 1889,
  [SMALL_STATE(56)] = 1924,
  [SMALL_STATE(57)] = 1959,
  [SMALL_STATE(58)] = 1978,
  [SMALL_STATE(59)] = 1997,
  [SMALL_STATE(60)] = 2013,
  [SMALL_STATE(61)] = 2029,
  [SMALL_STATE(62)] = 2045,
  [SMALL_STATE(63)] = 2061,
  [SMALL_STATE(64)] = 2077,
  [SMALL_STATE(65)] = 2085,
  [SMALL_STATE(66)] = 2093,
  [SMALL_STATE(67)] = 2100,
  [SMALL_STATE(68)] = 2107,
  [SMALL_STATE(69)] = 2114,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(55),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(52),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(55),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atomic_term, 1),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__atomic_term, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_curly_brackets, 2),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_curly_brackets, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 1),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_list, 2),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_list, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_notation, 2, .production_id = 1),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_notation, 3, .production_id = 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functional_notation, 4, .production_id = 3),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functional_notation, 4, .production_id = 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arg, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_notation, 3),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator_notation, 3),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator_notation, 3, .production_id = 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator_notation, 2, .production_id = 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_curly_bracketed_notation, 3),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_curly_bracketed_notation, 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_notation, 3),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_notation, 3),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_term, 3),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_term, 3),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clause_term, 2),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clause_term, 2),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_list_separator, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_list_separator, 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 1),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open_ct, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_ct, 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_notation_separator, 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_notation_separator, 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_notation_items, 1),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_list, 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_notation_items_repeat1, 2),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_notation_items_repeat1, 2), SHIFT_REPEAT(57),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_notation_items, 2),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_list, 2),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_list_repeat1, 2),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arg_list_repeat1, 2), SHIFT_REPEAT(49),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_notation_items, 3),
  [259] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

TS_PUBLIC const TSLanguage *tree_sitter_prolog() {
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