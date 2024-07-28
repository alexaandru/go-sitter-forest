#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 75
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 55
#define ALIAS_COUNT 0
#define TOKEN_COUNT 30
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
  anon_sym_COLON_COLON = 29,
  sym_source_file = 30,
  sym_directive_term = 31,
  sym_clause_term = 32,
  sym__term = 33,
  sym__compound_term = 34,
  sym__atomic_term = 35,
  sym__number = 36,
  sym_atom = 37,
  sym_empty_list = 38,
  sym_empty_curly_brackets = 39,
  sym_functional_notation = 40,
  sym_arg_list = 41,
  sym_arg_list_separator = 42,
  sym__arg = 43,
  sym_operator_notation = 44,
  sym_list_notation = 45,
  sym__list_notation_items = 46,
  sym_list_notation_separator = 47,
  sym_curly_bracketed_notation = 48,
  sym_open = 49,
  sym_open_ct = 50,
  sym_probability_label = 51,
  aux_sym_source_file_repeat1 = 52,
  aux_sym_arg_list_repeat1 = 53,
  aux_sym__list_notation_items_repeat1 = 54,
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
  [anon_sym_COLON_COLON] = "::",
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
  [sym_probability_label] = "probability_label",
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
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
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
  [sym_probability_label] = sym_probability_label,
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
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
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
  [sym_probability_label] = {
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
  [46] = 46,
  [47] = 47,
  [48] = 33,
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
  [61] = 50,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
};

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

static inline bool sym_comment_character_set_1(int32_t c) {
  return (c < ':'
    ? (c < '&'
      ? (c < '#'
        ? c == 0
        : c <= '$')
      : (c <= '&' || (c >= '*' && c <= '/')))
    : (c <= ':' || (c < '^'
      ? (c < '\\'
        ? (c >= '<' && c <= '@')
        : c <= '\\')
      : (c <= '^' || c == '~'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(41);
      if (!eof && (lookahead == 0 ||
          lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')) SKIP(0)
      if (lookahead == '"') ADVANCE(36);
      if (lookahead == '%') ADVANCE(1);
      if (lookahead == '(') ADVANCE(79);
      if (lookahead == ')') ADVANCE(80);
      if (lookahead == '*') ADVANCE(73);
      if (lookahead == '+') ADVANCE(70);
      if (lookahead == ',') ADVANCE(85);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '.') ADVANCE(42);
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == ';') ADVANCE(60);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == '=') ADVANCE(66);
      if (lookahead == '>') ADVANCE(69);
      if (lookahead == '?') ADVANCE(6);
      if (lookahead == '@') ADVANCE(11);
      if (lookahead == '[') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == ']') ADVANCE(82);
      if (lookahead == '^') ADVANCE(76);
      if (lookahead == '_') ADVANCE(57);
      if (lookahead == '`') ADVANCE(4);
      if (lookahead == 'i') ADVANCE(23);
      if (lookahead == 'm') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(20);
      if (lookahead == '{') ADVANCE(83);
      if (lookahead == '|') ADVANCE(77);
      if (lookahead == '}') ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(57);
      END_STATE();
    case 1:
      if (!eof && (lookahead == 0)) ADVANCE(95);
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(86);
      END_STATE();
    case 3:
      if (lookahead == '+') ADVANCE(63);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead == '=') ADVANCE(68);
      END_STATE();
    case 4:
      if (lookahead == ',') ADVANCE(18);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == ':') ADVANCE(97);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(59);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == ':') ADVANCE(97);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(65);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(70);
      if (lookahead == '=') ADVANCE(68);
      END_STATE();
    case 10:
      if (lookahead == '<') ADVANCE(65);
      END_STATE();
    case 11:
      if (lookahead == '<') ADVANCE(65);
      if (lookahead == '=') ADVANCE(10);
      if (lookahead == '>') ADVANCE(68);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(65);
      END_STATE();
    case 13:
      if (lookahead == '>') ADVANCE(58);
      END_STATE();
    case 14:
      if (lookahead == '\\') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '\\') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '\\') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '\\') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '`') ADVANCE(62);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(72);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == 'm') ADVANCE(72);
      END_STATE();
    case 22:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 23:
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 24:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 25:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(89);
      END_STATE();
    case 26:
      if (!eof && (lookahead == 0 ||
          lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')) SKIP(26)
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(45);
      if (lookahead == '"') ADVANCE(36);
      if (lookahead == '%') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(37);
      if (lookahead == '(') ADVANCE(79);
      if (lookahead == '+') ADVANCE(52);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '/') ADVANCE(47);
      if (lookahead == '0') ADVANCE(87);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == '?') ADVANCE(49);
      if (lookahead == '[') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(48);
      if (lookahead == ']') ADVANCE(82);
      if (lookahead == '_') ADVANCE(57);
      if (lookahead == '{') ADVANCE(83);
      if (lookahead == '}') ADVANCE(84);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(57);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 27:
      if (!eof && (lookahead == 0 ||
          lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')) SKIP(27)
      if (lookahead == '%') ADVANCE(1);
      if (lookahead == '(') ADVANCE(79);
      if (lookahead == ')') ADVANCE(80);
      if (lookahead == '*') ADVANCE(73);
      if (lookahead == '+') ADVANCE(70);
      if (lookahead == ',') ADVANCE(85);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '.') ADVANCE(42);
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == ';') ADVANCE(60);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == '=') ADVANCE(66);
      if (lookahead == '>') ADVANCE(69);
      if (lookahead == '@') ADVANCE(11);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == ']') ADVANCE(82);
      if (lookahead == '^') ADVANCE(76);
      if (lookahead == '`') ADVANCE(4);
      if (lookahead == 'i') ADVANCE(23);
      if (lookahead == 'm') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(20);
      if (lookahead == '|') ADVANCE(77);
      if (lookahead == '}') ADVANCE(84);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(90);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 31:
      if (sym_double_quoted_list_notation_character_set_1(lookahead)) ADVANCE(36);
      if (lookahead == 'x') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(14);
      END_STATE();
    case 32:
      if (sym_double_quoted_list_notation_character_set_1(lookahead)) ADVANCE(37);
      if (lookahead == 'x') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(16);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(17);
      END_STATE();
    case 36:
      if (lookahead == ' ' ||
          lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '~')) ADVANCE(36);
      if (lookahead == '"') ADVANCE(78);
      if (lookahead == '\\') ADVANCE(31);
      END_STATE();
    case 37:
      if ((' ' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '~')) ADVANCE(37);
      if (lookahead == '\'') ADVANCE(46);
      if (lookahead == '\\') ADVANCE(32);
      END_STATE();
    case 38:
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '/') ADVANCE(39);
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == '/') ADVANCE(96);
      END_STATE();
    case 39:
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(39);
      if (lookahead == '*') ADVANCE(38);
      END_STATE();
    case 40:
      if (eof) ADVANCE(41);
      if (!eof && (lookahead == 0 ||
          lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')) SKIP(40)
      if (lookahead == '!' ||
          lookahead == ';') ADVANCE(45);
      if (lookahead == '"') ADVANCE(36);
      if (lookahead == '%') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(37);
      if (lookahead == '(') ADVANCE(79);
      if (lookahead == '+') ADVANCE(52);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '/') ADVANCE(47);
      if (lookahead == '0') ADVANCE(87);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == '?') ADVANCE(49);
      if (lookahead == '[') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(48);
      if (lookahead == '_') ADVANCE(57);
      if (lookahead == '{') ADVANCE(83);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (('#' <= lookahead && lookahead <= '&') ||
          ('*' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(57);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_end);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_directive_head);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_directive_head);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '&' ||
          ('*' <= lookahead && lookahead <= '/') ||
          lookahead == ':' ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(53);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '\'') ADVANCE(37);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '*') ADVANCE(56);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= '/') ||
          lookahead == ':' ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(53);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '&' ||
          ('*' <= lookahead && lookahead <= '/') ||
          lookahead == ':' ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(53);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '&' ||
          ('*' <= lookahead && lookahead <= '/') ||
          lookahead == ':' ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(53);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '&' ||
          ('*' <= lookahead && lookahead <= '/') ||
          lookahead == ':' ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(53);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '0') ADVANCE(87);
      if (lookahead == '\\') ADVANCE(53);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '&' ||
          ('*' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(53);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '0') ADVANCE(87);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '&' ||
          ('*' <= lookahead && lookahead <= '/') ||
          lookahead == ':' ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(53);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '&' ||
          ('*' <= lookahead && lookahead <= '/') ||
          lookahead == ':' ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (!sym_comment_character_set_1(lookahead)) ADVANCE(39);
      if (lookahead == '*') ADVANCE(55);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (!sym_comment_character_set_1(lookahead)) ADVANCE(39);
      if (lookahead == '*') ADVANCE(55);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= '/') ||
          lookahead == ':' ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_variable_term);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_operator_notation_token1);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_operator_notation_token2);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_BQUOTE_COMMA_BQUOTE);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_BSLASH_PLUS);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_BSLASH_PLUS);
      if (lookahead == '#' ||
          lookahead == '$' ||
          lookahead == '&' ||
          ('*' <= lookahead && lookahead <= '/') ||
          lookahead == ':' ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(53);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_operator_notation_token3);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_operator_notation_token3);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == '<' ||
          lookahead == '=') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(12);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_operator_notation_token3);
      if (lookahead == '<') ADVANCE(72);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_operator_notation_token3);
      if (lookahead == '=') ADVANCE(65);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_operator_notation_token3);
      if (lookahead == '=') ADVANCE(65);
      if (lookahead == '>') ADVANCE(72);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_operator_notation_token4);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_operator_notation_token4);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '>') ADVANCE(61);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_operator_notation_token5);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_operator_notation_token5);
      if (lookahead == '*') ADVANCE(75);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_operator_notation_token5);
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == '\\') ADVANCE(70);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_double_quoted_list_notation);
      if (lookahead == '"') ADVANCE(36);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_close);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_open_list);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_close_list);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_open_curly);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_close_curly);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_comma);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_integer);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '\'') ADVANCE(2);
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == 'b') ADVANCE(25);
      if (lookahead == 'o') ADVANCE(28);
      if (lookahead == 'x') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_float_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_float_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_comment);
      if (!eof && (lookahead == 0)) ADVANCE(95);
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(39);
      if (lookahead == '*') ADVANCE(38);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 40},
  [2] = {.lex_state = 40},
  [3] = {.lex_state = 40},
  [4] = {.lex_state = 26},
  [5] = {.lex_state = 26},
  [6] = {.lex_state = 26},
  [7] = {.lex_state = 26},
  [8] = {.lex_state = 26},
  [9] = {.lex_state = 26},
  [10] = {.lex_state = 26},
  [11] = {.lex_state = 26},
  [12] = {.lex_state = 26},
  [13] = {.lex_state = 26},
  [14] = {.lex_state = 26},
  [15] = {.lex_state = 26},
  [16] = {.lex_state = 26},
  [17] = {.lex_state = 26},
  [18] = {.lex_state = 26},
  [19] = {.lex_state = 26},
  [20] = {.lex_state = 26},
  [21] = {.lex_state = 26},
  [22] = {.lex_state = 26},
  [23] = {.lex_state = 26},
  [24] = {.lex_state = 26},
  [25] = {.lex_state = 27},
  [26] = {.lex_state = 27},
  [27] = {.lex_state = 27},
  [28] = {.lex_state = 27},
  [29] = {.lex_state = 27},
  [30] = {.lex_state = 27},
  [31] = {.lex_state = 27},
  [32] = {.lex_state = 27},
  [33] = {.lex_state = 27},
  [34] = {.lex_state = 27},
  [35] = {.lex_state = 27},
  [36] = {.lex_state = 27},
  [37] = {.lex_state = 27},
  [38] = {.lex_state = 27},
  [39] = {.lex_state = 27},
  [40] = {.lex_state = 27},
  [41] = {.lex_state = 27},
  [42] = {.lex_state = 27},
  [43] = {.lex_state = 27},
  [44] = {.lex_state = 27},
  [45] = {.lex_state = 27},
  [46] = {.lex_state = 40},
  [47] = {.lex_state = 40},
  [48] = {.lex_state = 27},
  [49] = {.lex_state = 40},
  [50] = {.lex_state = 27},
  [51] = {.lex_state = 27},
  [52] = {.lex_state = 26},
  [53] = {.lex_state = 26},
  [54] = {.lex_state = 27},
  [55] = {.lex_state = 27},
  [56] = {.lex_state = 27},
  [57] = {.lex_state = 26},
  [58] = {.lex_state = 26},
  [59] = {.lex_state = 26},
  [60] = {.lex_state = 27},
  [61] = {.lex_state = 27},
  [62] = {.lex_state = 27},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_end] = ACTIONS(1),
    [sym_directive_head] = ACTIONS(1),
    [sym_variable_term] = ACTIONS(1),
    [aux_sym_operator_notation_token1] = ACTIONS(1),
    [aux_sym_operator_notation_token2] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_BQUOTE_COMMA_BQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH_PLUS] = ACTIONS(1),
    [aux_sym_operator_notation_token3] = ACTIONS(1),
    [aux_sym_operator_notation_token4] = ACTIONS(1),
    [aux_sym_operator_notation_token5] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [sym_double_quoted_list_notation] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [sym_close] = ACTIONS(1),
    [sym_open_list] = ACTIONS(1),
    [sym_close_list] = ACTIONS(1),
    [sym_open_curly] = ACTIONS(1),
    [sym_close_curly] = ACTIONS(1),
    [sym_comma] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON_COLON] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(73),
    [sym_directive_term] = STATE(2),
    [sym_clause_term] = STATE(2),
    [sym__term] = STATE(60),
    [sym__compound_term] = STATE(60),
    [sym__atomic_term] = STATE(60),
    [sym__number] = STATE(51),
    [sym_atom] = STATE(25),
    [sym_empty_list] = STATE(26),
    [sym_empty_curly_brackets] = STATE(26),
    [sym_functional_notation] = STATE(60),
    [sym_operator_notation] = STATE(60),
    [sym_list_notation] = STATE(60),
    [sym_curly_bracketed_notation] = STATE(60),
    [sym_open] = STATE(10),
    [sym_probability_label] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(2),
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
    [sym_float_number] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [2] = {
    [sym_directive_term] = STATE(3),
    [sym_clause_term] = STATE(3),
    [sym__term] = STATE(60),
    [sym__compound_term] = STATE(60),
    [sym__atomic_term] = STATE(60),
    [sym__number] = STATE(51),
    [sym_atom] = STATE(25),
    [sym_empty_list] = STATE(26),
    [sym_empty_curly_brackets] = STATE(26),
    [sym_functional_notation] = STATE(60),
    [sym_operator_notation] = STATE(60),
    [sym_list_notation] = STATE(60),
    [sym_curly_bracketed_notation] = STATE(60),
    [sym_open] = STATE(10),
    [sym_probability_label] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(31),
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
    [sym_float_number] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [3] = {
    [sym_directive_term] = STATE(3),
    [sym_clause_term] = STATE(3),
    [sym__term] = STATE(60),
    [sym__compound_term] = STATE(60),
    [sym__atomic_term] = STATE(60),
    [sym__number] = STATE(51),
    [sym_atom] = STATE(25),
    [sym_empty_list] = STATE(26),
    [sym_empty_curly_brackets] = STATE(26),
    [sym_functional_notation] = STATE(60),
    [sym_operator_notation] = STATE(60),
    [sym_list_notation] = STATE(60),
    [sym_curly_bracketed_notation] = STATE(60),
    [sym_open] = STATE(10),
    [sym_probability_label] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(33),
    [sym_directive_head] = ACTIONS(35),
    [aux_sym_atom_token1] = ACTIONS(38),
    [sym_variable_term] = ACTIONS(41),
    [aux_sym_operator_notation_token2] = ACTIONS(44),
    [anon_sym_BSLASH_PLUS] = ACTIONS(47),
    [aux_sym_operator_notation_token6] = ACTIONS(50),
    [sym_double_quoted_list_notation] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(53),
    [sym_open_list] = ACTIONS(56),
    [sym_open_curly] = ACTIONS(59),
    [sym_integer] = ACTIONS(62),
    [sym_float_number] = ACTIONS(65),
    [sym_comment] = ACTIONS(29),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(9), 1,
      aux_sym_atom_token1,
    ACTIONS(13), 1,
      aux_sym_operator_notation_token2,
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
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(70), 1,
      sym_close_list,
    ACTIONS(72), 1,
      sym_integer,
    STATE(10), 1,
      sym_open,
    STATE(33), 1,
      sym_atom,
    STATE(63), 1,
      sym__arg,
    STATE(71), 1,
      sym__list_notation_items,
    STATE(26), 2,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(68), 3,
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
  [62] = 16,
    ACTIONS(9), 1,
      aux_sym_atom_token1,
    ACTIONS(13), 1,
      aux_sym_operator_notation_token2,
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
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(72), 1,
      sym_integer,
    STATE(10), 1,
      sym_open,
    STATE(33), 1,
      sym_atom,
    STATE(68), 1,
      sym__arg,
    STATE(74), 1,
      sym_arg_list,
    STATE(26), 2,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(68), 3,
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
  [121] = 15,
    ACTIONS(9), 1,
      aux_sym_atom_token1,
    ACTIONS(13), 1,
      aux_sym_operator_notation_token2,
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
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(72), 1,
      sym_integer,
    STATE(10), 1,
      sym_open,
    STATE(33), 1,
      sym_atom,
    STATE(69), 1,
      sym__arg,
    STATE(26), 2,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(68), 3,
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
  [177] = 15,
    ACTIONS(9), 1,
      aux_sym_atom_token1,
    ACTIONS(13), 1,
      aux_sym_operator_notation_token2,
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
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(76), 1,
      sym_integer,
    STATE(10), 1,
      sym_open,
    STATE(48), 1,
      sym_atom,
    STATE(72), 1,
      sym__arg,
    STATE(26), 2,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(74), 3,
      sym_variable_term,
      sym_double_quoted_list_notation,
      sym_float_number,
    STATE(61), 8,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym_functional_notation,
      sym_operator_notation,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [233] = 15,
    ACTIONS(9), 1,
      aux_sym_atom_token1,
    ACTIONS(13), 1,
      aux_sym_operator_notation_token2,
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
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(72), 1,
      sym_integer,
    STATE(10), 1,
      sym_open,
    STATE(33), 1,
      sym_atom,
    STATE(70), 1,
      sym__arg,
    STATE(26), 2,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(68), 3,
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
  [289] = 15,
    ACTIONS(9), 1,
      aux_sym_atom_token1,
    ACTIONS(13), 1,
      aux_sym_operator_notation_token2,
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
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(80), 1,
      sym_close_curly,
    ACTIONS(82), 1,
      sym_integer,
    STATE(10), 1,
      sym_open,
    STATE(25), 1,
      sym_atom,
    STATE(26), 2,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(78), 3,
      sym_variable_term,
      sym_double_quoted_list_notation,
      sym_float_number,
    STATE(62), 8,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym_functional_notation,
      sym_operator_notation,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [345] = 14,
    ACTIONS(9), 1,
      aux_sym_atom_token1,
    ACTIONS(13), 1,
      aux_sym_operator_notation_token2,
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
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(86), 1,
      sym_integer,
    STATE(10), 1,
      sym_open,
    STATE(25), 1,
      sym_atom,
    STATE(26), 2,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(84), 3,
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
  [398] = 14,
    ACTIONS(9), 1,
      aux_sym_atom_token1,
    ACTIONS(13), 1,
      aux_sym_operator_notation_token2,
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
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(90), 1,
      sym_integer,
    STATE(10), 1,
      sym_open,
    STATE(25), 1,
      sym_atom,
    STATE(26), 2,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(88), 3,
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
  [451] = 14,
    ACTIONS(9), 1,
      aux_sym_atom_token1,
    ACTIONS(13), 1,
      aux_sym_operator_notation_token2,
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
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(94), 1,
      sym_integer,
    STATE(10), 1,
      sym_open,
    STATE(25), 1,
      sym_atom,
    STATE(26), 2,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(92), 3,
      sym_variable_term,
      sym_double_quoted_list_notation,
      sym_float_number,
    STATE(31), 8,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym_functional_notation,
      sym_operator_notation,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [504] = 14,
    ACTIONS(9), 1,
      aux_sym_atom_token1,
    ACTIONS(13), 1,
      aux_sym_operator_notation_token2,
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
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(98), 1,
      sym_integer,
    STATE(10), 1,
      sym_open,
    STATE(25), 1,
      sym_atom,
    STATE(26), 2,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(96), 3,
      sym_variable_term,
      sym_double_quoted_list_notation,
      sym_float_number,
    STATE(44), 8,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym_functional_notation,
      sym_operator_notation,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [557] = 14,
    ACTIONS(9), 1,
      aux_sym_atom_token1,
    ACTIONS(13), 1,
      aux_sym_operator_notation_token2,
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
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_integer,
    STATE(10), 1,
      sym_open,
    STATE(25), 1,
      sym_atom,
    STATE(26), 2,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(100), 3,
      sym_variable_term,
      sym_double_quoted_list_notation,
      sym_float_number,
    STATE(55), 8,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym_functional_notation,
      sym_operator_notation,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [610] = 14,
    ACTIONS(9), 1,
      aux_sym_atom_token1,
    ACTIONS(13), 1,
      aux_sym_operator_notation_token2,
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
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(106), 1,
      sym_integer,
    STATE(10), 1,
      sym_open,
    STATE(25), 1,
      sym_atom,
    STATE(26), 2,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(104), 3,
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
  [663] = 14,
    ACTIONS(9), 1,
      aux_sym_atom_token1,
    ACTIONS(13), 1,
      aux_sym_operator_notation_token2,
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
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(110), 1,
      sym_integer,
    STATE(10), 1,
      sym_open,
    STATE(25), 1,
      sym_atom,
    STATE(26), 2,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(108), 3,
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
  [716] = 14,
    ACTIONS(9), 1,
      aux_sym_atom_token1,
    ACTIONS(13), 1,
      aux_sym_operator_notation_token2,
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
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(114), 1,
      sym_integer,
    STATE(10), 1,
      sym_open,
    STATE(25), 1,
      sym_atom,
    STATE(26), 2,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(112), 3,
      sym_variable_term,
      sym_double_quoted_list_notation,
      sym_float_number,
    STATE(43), 8,
      sym__term,
      sym__compound_term,
      sym__atomic_term,
      sym__number,
      sym_functional_notation,
      sym_operator_notation,
      sym_list_notation,
      sym_curly_bracketed_notation,
  [769] = 14,
    ACTIONS(9), 1,
      aux_sym_atom_token1,
    ACTIONS(13), 1,
      aux_sym_operator_notation_token2,
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
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(118), 1,
      sym_integer,
    STATE(10), 1,
      sym_open,
    STATE(25), 1,
      sym_atom,
    STATE(26), 2,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(116), 3,
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
  [822] = 14,
    ACTIONS(9), 1,
      aux_sym_atom_token1,
    ACTIONS(13), 1,
      aux_sym_operator_notation_token2,
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
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(122), 1,
      sym_integer,
    STATE(10), 1,
      sym_open,
    STATE(25), 1,
      sym_atom,
    STATE(26), 2,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(120), 3,
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
  [875] = 14,
    ACTIONS(9), 1,
      aux_sym_atom_token1,
    ACTIONS(13), 1,
      aux_sym_operator_notation_token2,
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
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(126), 1,
      sym_integer,
    STATE(10), 1,
      sym_open,
    STATE(25), 1,
      sym_atom,
    STATE(26), 2,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(124), 3,
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
  [928] = 14,
    ACTIONS(9), 1,
      aux_sym_atom_token1,
    ACTIONS(13), 1,
      aux_sym_operator_notation_token2,
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
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(130), 1,
      sym_integer,
    STATE(10), 1,
      sym_open,
    STATE(25), 1,
      sym_atom,
    STATE(26), 2,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(128), 3,
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
  [981] = 14,
    ACTIONS(9), 1,
      aux_sym_atom_token1,
    ACTIONS(13), 1,
      aux_sym_operator_notation_token2,
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
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(134), 1,
      sym_integer,
    STATE(10), 1,
      sym_open,
    STATE(25), 1,
      sym_atom,
    STATE(26), 2,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(132), 3,
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
  [1034] = 14,
    ACTIONS(9), 1,
      aux_sym_atom_token1,
    ACTIONS(13), 1,
      aux_sym_operator_notation_token2,
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
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(138), 1,
      sym_integer,
    STATE(10), 1,
      sym_open,
    STATE(25), 1,
      sym_atom,
    STATE(26), 2,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(136), 3,
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
  [1087] = 14,
    ACTIONS(9), 1,
      aux_sym_atom_token1,
    ACTIONS(13), 1,
      aux_sym_operator_notation_token2,
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
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(142), 1,
      sym_integer,
    STATE(10), 1,
      sym_open,
    STATE(25), 1,
      sym_atom,
    STATE(26), 2,
      sym_empty_list,
      sym_empty_curly_brackets,
    ACTIONS(140), 3,
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
  [1140] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym_open_ct,
    ACTIONS(146), 3,
      aux_sym_operator_notation_token3,
      aux_sym_operator_notation_token4,
      aux_sym_operator_notation_token5,
    ACTIONS(144), 12,
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
  [1169] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 3,
      aux_sym_operator_notation_token3,
      aux_sym_operator_notation_token4,
      aux_sym_operator_notation_token5,
    ACTIONS(150), 13,
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
  [1193] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 3,
      aux_sym_operator_notation_token3,
      aux_sym_operator_notation_token4,
      aux_sym_operator_notation_token5,
    ACTIONS(154), 13,
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
  [1217] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 3,
      aux_sym_operator_notation_token3,
      aux_sym_operator_notation_token4,
      aux_sym_operator_notation_token5,
    ACTIONS(158), 13,
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
  [1241] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      aux_sym_operator_notation_token3,
    ACTIONS(166), 1,
      aux_sym_operator_notation_token4,
    ACTIONS(168), 1,
      aux_sym_operator_notation_token5,
    ACTIONS(170), 1,
      anon_sym_STAR_STAR,
    ACTIONS(172), 1,
      anon_sym_CARET,
    ACTIONS(162), 10,
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
  [1272] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 3,
      aux_sym_operator_notation_token3,
      aux_sym_operator_notation_token4,
      aux_sym_operator_notation_token5,
    ACTIONS(174), 12,
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
  [1295] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_STAR_STAR,
    ACTIONS(172), 1,
      anon_sym_CARET,
    ACTIONS(178), 3,
      aux_sym_operator_notation_token3,
      aux_sym_operator_notation_token4,
      aux_sym_operator_notation_token5,
    ACTIONS(162), 10,
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
  [1322] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 3,
      aux_sym_operator_notation_token3,
      aux_sym_operator_notation_token4,
      aux_sym_operator_notation_token5,
    ACTIONS(180), 12,
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
  [1345] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym_open_ct,
    ACTIONS(146), 3,
      aux_sym_operator_notation_token3,
      aux_sym_operator_notation_token4,
      aux_sym_operator_notation_token5,
    ACTIONS(184), 4,
      anon_sym_PIPE,
      sym_close,
      sym_close_list,
      sym_comma,
    ACTIONS(144), 6,
      aux_sym_operator_notation_token1,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
  [1374] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      aux_sym_operator_notation_token3,
    ACTIONS(166), 1,
      aux_sym_operator_notation_token4,
    ACTIONS(168), 1,
      aux_sym_operator_notation_token5,
    ACTIONS(170), 1,
      anon_sym_STAR_STAR,
    ACTIONS(172), 1,
      anon_sym_CARET,
    ACTIONS(186), 1,
      anon_sym_SEMI,
    ACTIONS(188), 1,
      anon_sym_DASH_GT,
    ACTIONS(190), 2,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_comma,
    ACTIONS(162), 6,
      sym_end,
      aux_sym_operator_notation_token1,
      anon_sym_PIPE,
      sym_close,
      sym_close_list,
      sym_close_curly,
  [1411] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 3,
      aux_sym_operator_notation_token3,
      aux_sym_operator_notation_token4,
      aux_sym_operator_notation_token5,
    ACTIONS(192), 12,
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
  [1434] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_STAR_STAR,
    ACTIONS(172), 1,
      anon_sym_CARET,
    ACTIONS(198), 3,
      aux_sym_operator_notation_token3,
      aux_sym_operator_notation_token4,
      aux_sym_operator_notation_token5,
    ACTIONS(196), 10,
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
  [1461] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 3,
      aux_sym_operator_notation_token3,
      aux_sym_operator_notation_token4,
      aux_sym_operator_notation_token5,
    ACTIONS(196), 12,
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
  [1484] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_STAR_STAR,
    ACTIONS(172), 1,
      anon_sym_CARET,
    ACTIONS(198), 3,
      aux_sym_operator_notation_token3,
      aux_sym_operator_notation_token4,
      aux_sym_operator_notation_token5,
    ACTIONS(196), 10,
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
  [1511] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      aux_sym_operator_notation_token5,
    ACTIONS(170), 1,
      anon_sym_STAR_STAR,
    ACTIONS(172), 1,
      anon_sym_CARET,
    ACTIONS(198), 2,
      aux_sym_operator_notation_token3,
      aux_sym_operator_notation_token4,
    ACTIONS(196), 10,
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
  [1540] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      aux_sym_operator_notation_token4,
    ACTIONS(168), 1,
      aux_sym_operator_notation_token5,
    ACTIONS(170), 1,
      anon_sym_STAR_STAR,
    ACTIONS(172), 1,
      anon_sym_CARET,
    ACTIONS(198), 1,
      aux_sym_operator_notation_token3,
    ACTIONS(196), 10,
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
  [1571] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      aux_sym_operator_notation_token3,
    ACTIONS(166), 1,
      aux_sym_operator_notation_token4,
    ACTIONS(168), 1,
      aux_sym_operator_notation_token5,
    ACTIONS(170), 1,
      anon_sym_STAR_STAR,
    ACTIONS(172), 1,
      anon_sym_CARET,
    ACTIONS(190), 2,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_comma,
    ACTIONS(196), 8,
      sym_end,
      aux_sym_operator_notation_token1,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
      anon_sym_PIPE,
      sym_close,
      sym_close_list,
      sym_close_curly,
  [1604] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      aux_sym_operator_notation_token3,
    ACTIONS(166), 1,
      aux_sym_operator_notation_token4,
    ACTIONS(168), 1,
      aux_sym_operator_notation_token5,
    ACTIONS(170), 1,
      anon_sym_STAR_STAR,
    ACTIONS(172), 1,
      anon_sym_CARET,
    ACTIONS(188), 1,
      anon_sym_DASH_GT,
    ACTIONS(190), 2,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_comma,
    ACTIONS(196), 7,
      sym_end,
      aux_sym_operator_notation_token1,
      anon_sym_SEMI,
      anon_sym_PIPE,
      sym_close,
      sym_close_list,
      sym_close_curly,
  [1639] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      aux_sym_operator_notation_token3,
    ACTIONS(166), 1,
      aux_sym_operator_notation_token4,
    ACTIONS(168), 1,
      aux_sym_operator_notation_token5,
    ACTIONS(170), 1,
      anon_sym_STAR_STAR,
    ACTIONS(172), 1,
      anon_sym_CARET,
    ACTIONS(186), 1,
      anon_sym_SEMI,
    ACTIONS(188), 1,
      anon_sym_DASH_GT,
    ACTIONS(190), 2,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_comma,
    ACTIONS(196), 6,
      sym_end,
      aux_sym_operator_notation_token1,
      anon_sym_PIPE,
      sym_close,
      sym_close_list,
      sym_close_curly,
  [1676] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      aux_sym_operator_notation_token3,
    ACTIONS(166), 1,
      aux_sym_operator_notation_token4,
    ACTIONS(168), 1,
      aux_sym_operator_notation_token5,
    ACTIONS(170), 1,
      anon_sym_STAR_STAR,
    ACTIONS(172), 1,
      anon_sym_CARET,
    ACTIONS(186), 1,
      anon_sym_SEMI,
    ACTIONS(188), 1,
      anon_sym_DASH_GT,
    ACTIONS(190), 2,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_comma,
    ACTIONS(196), 6,
      sym_end,
      aux_sym_operator_notation_token1,
      anon_sym_PIPE,
      sym_close,
      sym_close_list,
      sym_close_curly,
  [1713] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 3,
      aux_sym_operator_notation_token3,
      aux_sym_operator_notation_token4,
      aux_sym_operator_notation_token5,
    ACTIONS(200), 12,
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
  [1736] = 3,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(206), 6,
      sym_directive_head,
      aux_sym_atom_token1,
      aux_sym_operator_notation_token2,
      anon_sym_BSLASH_PLUS,
      aux_sym_operator_notation_token6,
      sym_integer,
    ACTIONS(204), 7,
      ts_builtin_sym_end,
      sym_variable_term,
      sym_double_quoted_list_notation,
      anon_sym_LPAREN,
      sym_open_list,
      sym_open_curly,
      sym_float_number,
  [1757] = 3,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(210), 6,
      sym_directive_head,
      aux_sym_atom_token1,
      aux_sym_operator_notation_token2,
      anon_sym_BSLASH_PLUS,
      aux_sym_operator_notation_token6,
      sym_integer,
    ACTIONS(208), 7,
      ts_builtin_sym_end,
      sym_variable_term,
      sym_double_quoted_list_notation,
      anon_sym_LPAREN,
      sym_open_list,
      sym_open_curly,
      sym_float_number,
  [1778] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      anon_sym_LPAREN,
    ACTIONS(184), 1,
      sym_close_list,
    STATE(5), 1,
      sym_open_ct,
    ACTIONS(146), 3,
      aux_sym_operator_notation_token3,
      aux_sym_operator_notation_token4,
      aux_sym_operator_notation_token5,
    ACTIONS(144), 7,
      aux_sym_operator_notation_token1,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      sym_comma,
  [1805] = 3,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(214), 6,
      sym_directive_head,
      aux_sym_atom_token1,
      aux_sym_operator_notation_token2,
      anon_sym_BSLASH_PLUS,
      aux_sym_operator_notation_token6,
      sym_integer,
    ACTIONS(212), 7,
      ts_builtin_sym_end,
      sym_variable_term,
      sym_double_quoted_list_notation,
      anon_sym_LPAREN,
      sym_open_list,
      sym_open_curly,
      sym_float_number,
  [1826] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      aux_sym_operator_notation_token3,
    ACTIONS(166), 1,
      aux_sym_operator_notation_token4,
    ACTIONS(168), 1,
      aux_sym_operator_notation_token5,
    ACTIONS(170), 1,
      anon_sym_STAR_STAR,
    ACTIONS(172), 1,
      anon_sym_CARET,
    ACTIONS(186), 1,
      anon_sym_SEMI,
    ACTIONS(188), 1,
      anon_sym_DASH_GT,
    ACTIONS(190), 1,
      anon_sym_BQUOTE_COMMA_BQUOTE,
    ACTIONS(216), 1,
      aux_sym_operator_notation_token1,
    ACTIONS(184), 4,
      anon_sym_PIPE,
      sym_close,
      sym_close_list,
      sym_comma,
  [1863] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_COLON_COLON,
    ACTIONS(146), 3,
      aux_sym_operator_notation_token3,
      aux_sym_operator_notation_token4,
      aux_sym_operator_notation_token5,
    ACTIONS(144), 8,
      sym_end,
      aux_sym_operator_notation_token1,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      anon_sym_STAR_STAR,
      anon_sym_CARET,
      sym_comma,
  [1885] = 3,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(220), 5,
      aux_sym_atom_token1,
      aux_sym_operator_notation_token2,
      anon_sym_BSLASH_PLUS,
      aux_sym_operator_notation_token6,
      sym_integer,
    ACTIONS(222), 6,
      sym_variable_term,
      sym_double_quoted_list_notation,
      anon_sym_LPAREN,
      sym_open_list,
      sym_open_curly,
      sym_float_number,
  [1904] = 3,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(224), 5,
      aux_sym_atom_token1,
      aux_sym_operator_notation_token2,
      anon_sym_BSLASH_PLUS,
      aux_sym_operator_notation_token6,
      sym_integer,
    ACTIONS(226), 6,
      sym_variable_term,
      sym_double_quoted_list_notation,
      anon_sym_LPAREN,
      sym_open_list,
      sym_open_curly,
      sym_float_number,
  [1923] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      aux_sym_operator_notation_token3,
    ACTIONS(166), 1,
      aux_sym_operator_notation_token4,
    ACTIONS(168), 1,
      aux_sym_operator_notation_token5,
    ACTIONS(170), 1,
      anon_sym_STAR_STAR,
    ACTIONS(172), 1,
      anon_sym_CARET,
    ACTIONS(186), 1,
      anon_sym_SEMI,
    ACTIONS(188), 1,
      anon_sym_DASH_GT,
    ACTIONS(216), 1,
      aux_sym_operator_notation_token1,
    ACTIONS(228), 1,
      sym_end,
    ACTIONS(190), 2,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_comma,
  [1958] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      aux_sym_operator_notation_token3,
    ACTIONS(166), 1,
      aux_sym_operator_notation_token4,
    ACTIONS(168), 1,
      aux_sym_operator_notation_token5,
    ACTIONS(170), 1,
      anon_sym_STAR_STAR,
    ACTIONS(172), 1,
      anon_sym_CARET,
    ACTIONS(186), 1,
      anon_sym_SEMI,
    ACTIONS(188), 1,
      anon_sym_DASH_GT,
    ACTIONS(216), 1,
      aux_sym_operator_notation_token1,
    ACTIONS(230), 1,
      sym_end,
    ACTIONS(190), 2,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_comma,
  [1993] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      aux_sym_operator_notation_token3,
    ACTIONS(166), 1,
      aux_sym_operator_notation_token4,
    ACTIONS(168), 1,
      aux_sym_operator_notation_token5,
    ACTIONS(170), 1,
      anon_sym_STAR_STAR,
    ACTIONS(172), 1,
      anon_sym_CARET,
    ACTIONS(186), 1,
      anon_sym_SEMI,
    ACTIONS(188), 1,
      anon_sym_DASH_GT,
    ACTIONS(216), 1,
      aux_sym_operator_notation_token1,
    ACTIONS(232), 1,
      sym_close,
    ACTIONS(190), 2,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_comma,
  [2028] = 3,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(234), 5,
      aux_sym_atom_token1,
      aux_sym_operator_notation_token2,
      anon_sym_BSLASH_PLUS,
      aux_sym_operator_notation_token6,
      sym_integer,
    ACTIONS(236), 6,
      sym_variable_term,
      sym_double_quoted_list_notation,
      anon_sym_LPAREN,
      sym_open_list,
      sym_open_curly,
      sym_float_number,
  [2047] = 3,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(238), 5,
      aux_sym_atom_token1,
      aux_sym_operator_notation_token2,
      anon_sym_BSLASH_PLUS,
      aux_sym_operator_notation_token6,
      sym_integer,
    ACTIONS(240), 6,
      sym_variable_term,
      sym_double_quoted_list_notation,
      anon_sym_LPAREN,
      sym_open_list,
      sym_open_curly,
      sym_float_number,
  [2066] = 3,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(242), 5,
      aux_sym_atom_token1,
      aux_sym_operator_notation_token2,
      anon_sym_BSLASH_PLUS,
      aux_sym_operator_notation_token6,
      sym_integer,
    ACTIONS(244), 6,
      sym_variable_term,
      sym_double_quoted_list_notation,
      anon_sym_LPAREN,
      sym_open_list,
      sym_open_curly,
      sym_float_number,
  [2085] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      aux_sym_operator_notation_token3,
    ACTIONS(166), 1,
      aux_sym_operator_notation_token4,
    ACTIONS(168), 1,
      aux_sym_operator_notation_token5,
    ACTIONS(170), 1,
      anon_sym_STAR_STAR,
    ACTIONS(172), 1,
      anon_sym_CARET,
    ACTIONS(186), 1,
      anon_sym_SEMI,
    ACTIONS(188), 1,
      anon_sym_DASH_GT,
    ACTIONS(216), 1,
      aux_sym_operator_notation_token1,
    ACTIONS(246), 1,
      sym_end,
    ACTIONS(190), 2,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_comma,
  [2120] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      aux_sym_operator_notation_token3,
    ACTIONS(166), 1,
      aux_sym_operator_notation_token4,
    ACTIONS(168), 1,
      aux_sym_operator_notation_token5,
    ACTIONS(170), 1,
      anon_sym_STAR_STAR,
    ACTIONS(172), 1,
      anon_sym_CARET,
    ACTIONS(184), 1,
      sym_close_list,
    ACTIONS(186), 1,
      anon_sym_SEMI,
    ACTIONS(188), 1,
      anon_sym_DASH_GT,
    ACTIONS(216), 1,
      aux_sym_operator_notation_token1,
    ACTIONS(190), 2,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_comma,
  [2155] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      aux_sym_operator_notation_token3,
    ACTIONS(166), 1,
      aux_sym_operator_notation_token4,
    ACTIONS(168), 1,
      aux_sym_operator_notation_token5,
    ACTIONS(170), 1,
      anon_sym_STAR_STAR,
    ACTIONS(172), 1,
      anon_sym_CARET,
    ACTIONS(186), 1,
      anon_sym_SEMI,
    ACTIONS(188), 1,
      anon_sym_DASH_GT,
    ACTIONS(216), 1,
      aux_sym_operator_notation_token1,
    ACTIONS(248), 1,
      sym_close_curly,
    ACTIONS(190), 2,
      anon_sym_BQUOTE_COMMA_BQUOTE,
      sym_comma,
  [2190] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_PIPE,
    ACTIONS(252), 1,
      sym_close_list,
    ACTIONS(254), 1,
      sym_comma,
    STATE(6), 1,
      sym_list_notation_separator,
    STATE(65), 1,
      aux_sym__list_notation_items_repeat1,
  [2209] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      sym_close_list,
    ACTIONS(258), 1,
      sym_comma,
    STATE(6), 1,
      sym_list_notation_separator,
    STATE(64), 1,
      aux_sym__list_notation_items_repeat1,
  [2225] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      sym_comma,
    ACTIONS(261), 1,
      sym_close_list,
    STATE(6), 1,
      sym_list_notation_separator,
    STATE(64), 1,
      aux_sym__list_notation_items_repeat1,
  [2241] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      sym_close,
    ACTIONS(265), 1,
      sym_comma,
    STATE(8), 1,
      sym_arg_list_separator,
    STATE(67), 1,
      aux_sym_arg_list_repeat1,
  [2257] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      sym_close,
    ACTIONS(269), 1,
      sym_comma,
    STATE(8), 1,
      sym_arg_list_separator,
    STATE(67), 1,
      aux_sym_arg_list_repeat1,
  [2273] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      sym_comma,
    ACTIONS(272), 1,
      sym_close,
    STATE(8), 1,
      sym_arg_list_separator,
    STATE(66), 1,
      aux_sym_arg_list_repeat1,
  [2289] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 2,
      sym_close_list,
      sym_comma,
  [2297] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 2,
      sym_close,
      sym_comma,
  [2305] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      sym_close_list,
  [2312] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      sym_close_list,
  [2319] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      ts_builtin_sym_end,
  [2326] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      sym_close,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 62,
  [SMALL_STATE(6)] = 121,
  [SMALL_STATE(7)] = 177,
  [SMALL_STATE(8)] = 233,
  [SMALL_STATE(9)] = 289,
  [SMALL_STATE(10)] = 345,
  [SMALL_STATE(11)] = 398,
  [SMALL_STATE(12)] = 451,
  [SMALL_STATE(13)] = 504,
  [SMALL_STATE(14)] = 557,
  [SMALL_STATE(15)] = 610,
  [SMALL_STATE(16)] = 663,
  [SMALL_STATE(17)] = 716,
  [SMALL_STATE(18)] = 769,
  [SMALL_STATE(19)] = 822,
  [SMALL_STATE(20)] = 875,
  [SMALL_STATE(21)] = 928,
  [SMALL_STATE(22)] = 981,
  [SMALL_STATE(23)] = 1034,
  [SMALL_STATE(24)] = 1087,
  [SMALL_STATE(25)] = 1140,
  [SMALL_STATE(26)] = 1169,
  [SMALL_STATE(27)] = 1193,
  [SMALL_STATE(28)] = 1217,
  [SMALL_STATE(29)] = 1241,
  [SMALL_STATE(30)] = 1272,
  [SMALL_STATE(31)] = 1295,
  [SMALL_STATE(32)] = 1322,
  [SMALL_STATE(33)] = 1345,
  [SMALL_STATE(34)] = 1374,
  [SMALL_STATE(35)] = 1411,
  [SMALL_STATE(36)] = 1434,
  [SMALL_STATE(37)] = 1461,
  [SMALL_STATE(38)] = 1484,
  [SMALL_STATE(39)] = 1511,
  [SMALL_STATE(40)] = 1540,
  [SMALL_STATE(41)] = 1571,
  [SMALL_STATE(42)] = 1604,
  [SMALL_STATE(43)] = 1639,
  [SMALL_STATE(44)] = 1676,
  [SMALL_STATE(45)] = 1713,
  [SMALL_STATE(46)] = 1736,
  [SMALL_STATE(47)] = 1757,
  [SMALL_STATE(48)] = 1778,
  [SMALL_STATE(49)] = 1805,
  [SMALL_STATE(50)] = 1826,
  [SMALL_STATE(51)] = 1863,
  [SMALL_STATE(52)] = 1885,
  [SMALL_STATE(53)] = 1904,
  [SMALL_STATE(54)] = 1923,
  [SMALL_STATE(55)] = 1958,
  [SMALL_STATE(56)] = 1993,
  [SMALL_STATE(57)] = 2028,
  [SMALL_STATE(58)] = 2047,
  [SMALL_STATE(59)] = 2066,
  [SMALL_STATE(60)] = 2085,
  [SMALL_STATE(61)] = 2120,
  [SMALL_STATE(62)] = 2155,
  [SMALL_STATE(63)] = 2190,
  [SMALL_STATE(64)] = 2209,
  [SMALL_STATE(65)] = 2225,
  [SMALL_STATE(66)] = 2241,
  [SMALL_STATE(67)] = 2257,
  [SMALL_STATE(68)] = 2273,
  [SMALL_STATE(69)] = 2289,
  [SMALL_STATE(70)] = 2297,
  [SMALL_STATE(71)] = 2305,
  [SMALL_STATE(72)] = 2312,
  [SMALL_STATE(73)] = 2319,
  [SMALL_STATE(74)] = 2326,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(60),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(57),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(51),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(51),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atomic_term, 1),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__atomic_term, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 1),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_list, 2),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_list, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_curly_brackets, 2),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_curly_brackets, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_notation, 2, .production_id = 1),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_notation, 3),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_notation, 3),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator_notation, 2, .production_id = 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functional_notation, 4, .production_id = 3),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functional_notation, 4, .production_id = 3),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arg, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_notation, 3),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator_notation, 3),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_notation, 3, .production_id = 2),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator_notation, 3, .production_id = 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_curly_bracketed_notation, 3),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_curly_bracketed_notation, 3),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clause_term, 3),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clause_term, 3),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_term, 3),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_term, 3),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clause_term, 2),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clause_term, 2),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_list_separator, 1),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_list_separator, 1),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_notation_separator, 1),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_notation_separator, 1),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 1),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open_ct, 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_ct, 1),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_probability_label, 2),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_probability_label, 2),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_notation_items, 1),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_notation_items_repeat1, 2),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_notation_items_repeat1, 2), SHIFT_REPEAT(53),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_notation_items, 2),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_list, 2),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_list_repeat1, 2),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arg_list_repeat1, 2), SHIFT_REPEAT(52),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_list, 1),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_notation_items, 3),
  [278] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
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

TS_PUBLIC const TSLanguage *tree_sitter_problog() {
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
