#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 89
#define LARGE_STATE_COUNT 26
#define SYMBOL_COUNT 52
#define ALIAS_COUNT 1
#define TOKEN_COUNT 29
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 23

enum {
  sym_shebang = 1,
  sym__whitespace = 2,
  sym_comment = 3,
  anon_sym_POUND = 4,
  anon_sym_QMARK_DOT = 5,
  anon_sym_TILDE_EQ = 6,
  anon_sym_COLON = 7,
  anon_sym_DOLLAR_DOT_DOT_DOT = 8,
  anon_sym_DOT_DOT_DOT = 9,
  anon_sym_DOT_DOT = 10,
  anon_sym_DOT = 11,
  anon_sym_SQUOTE = 12,
  anon_sym_BQUOTE = 13,
  anon_sym_COMMA = 14,
  anon_sym_LPAREN = 15,
  anon_sym_RPAREN = 16,
  anon_sym_LBRACK = 17,
  anon_sym_RBRACK = 18,
  anon_sym_LBRACE = 19,
  anon_sym_RBRACE = 20,
  sym_nil = 21,
  sym_boolean = 22,
  aux_sym__colon_string_token1 = 23,
  anon_sym_DQUOTE = 24,
  aux_sym__double_quote_string_token1 = 25,
  sym_escape_sequence = 26,
  sym_number = 27,
  sym_symbol = 28,
  sym_program = 29,
  sym__gap = 30,
  sym__sexp = 31,
  sym__special_override_symbols = 32,
  sym__reader_macro_char = 33,
  sym_reader_macro = 34,
  sym__list_content = 35,
  sym_list = 36,
  sym_sequence = 37,
  sym_table_pair = 38,
  sym_table = 39,
  sym__literal = 40,
  sym__colon_string = 41,
  sym__double_quote_string = 42,
  sym_string = 43,
  sym_multi_symbol = 44,
  sym_multi_symbol_method = 45,
  aux_sym_program_repeat1 = 46,
  aux_sym__list_content_repeat1 = 47,
  aux_sym__list_content_repeat2 = 48,
  aux_sym_table_repeat1 = 49,
  aux_sym__double_quote_string_repeat1 = 50,
  aux_sym_multi_symbol_repeat1 = 51,
  alias_sym_symbol_fragment = 52,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_shebang] = "shebang",
  [sym__whitespace] = "_whitespace",
  [sym_comment] = "comment",
  [anon_sym_POUND] = "#",
  [anon_sym_QMARK_DOT] = "symbol",
  [anon_sym_TILDE_EQ] = "symbol",
  [anon_sym_COLON] = ":",
  [anon_sym_DOLLAR_DOT_DOT_DOT] = "symbol",
  [anon_sym_DOT_DOT_DOT] = "symbol",
  [anon_sym_DOT_DOT] = "symbol",
  [anon_sym_DOT] = ".",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_COMMA] = ",",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_nil] = "nil",
  [sym_boolean] = "boolean",
  [aux_sym__colon_string_token1] = "string_content",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__double_quote_string_token1] = "_double_quote_string_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_number] = "number",
  [sym_symbol] = "symbol",
  [sym_program] = "program",
  [sym__gap] = "_gap",
  [sym__sexp] = "_sexp",
  [sym__special_override_symbols] = "_special_override_symbols",
  [sym__reader_macro_char] = "_reader_macro_char",
  [sym_reader_macro] = "reader_macro",
  [sym__list_content] = "_list_content",
  [sym_list] = "list",
  [sym_sequence] = "sequence",
  [sym_table_pair] = "table_pair",
  [sym_table] = "table",
  [sym__literal] = "_literal",
  [sym__colon_string] = "_colon_string",
  [sym__double_quote_string] = "_double_quote_string",
  [sym_string] = "string",
  [sym_multi_symbol] = "multi_symbol",
  [sym_multi_symbol_method] = "multi_symbol_method",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym__list_content_repeat1] = "_list_content_repeat1",
  [aux_sym__list_content_repeat2] = "_list_content_repeat2",
  [aux_sym_table_repeat1] = "table_repeat1",
  [aux_sym__double_quote_string_repeat1] = "_double_quote_string_repeat1",
  [aux_sym_multi_symbol_repeat1] = "multi_symbol_repeat1",
  [alias_sym_symbol_fragment] = "symbol_fragment",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_shebang] = sym_shebang,
  [sym__whitespace] = sym__whitespace,
  [sym_comment] = sym_comment,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_QMARK_DOT] = sym_symbol,
  [anon_sym_TILDE_EQ] = sym_symbol,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DOLLAR_DOT_DOT_DOT] = sym_symbol,
  [anon_sym_DOT_DOT_DOT] = sym_symbol,
  [anon_sym_DOT_DOT] = sym_symbol,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_nil] = sym_nil,
  [sym_boolean] = sym_boolean,
  [aux_sym__colon_string_token1] = aux_sym__colon_string_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__double_quote_string_token1] = aux_sym__double_quote_string_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_number] = sym_number,
  [sym_symbol] = sym_symbol,
  [sym_program] = sym_program,
  [sym__gap] = sym__gap,
  [sym__sexp] = sym__sexp,
  [sym__special_override_symbols] = sym__special_override_symbols,
  [sym__reader_macro_char] = sym__reader_macro_char,
  [sym_reader_macro] = sym_reader_macro,
  [sym__list_content] = sym__list_content,
  [sym_list] = sym_list,
  [sym_sequence] = sym_sequence,
  [sym_table_pair] = sym_table_pair,
  [sym_table] = sym_table,
  [sym__literal] = sym__literal,
  [sym__colon_string] = sym__colon_string,
  [sym__double_quote_string] = sym__double_quote_string,
  [sym_string] = sym_string,
  [sym_multi_symbol] = sym_multi_symbol,
  [sym_multi_symbol_method] = sym_multi_symbol_method,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym__list_content_repeat1] = aux_sym__list_content_repeat1,
  [aux_sym__list_content_repeat2] = aux_sym__list_content_repeat2,
  [aux_sym_table_repeat1] = aux_sym_table_repeat1,
  [aux_sym__double_quote_string_repeat1] = aux_sym__double_quote_string_repeat1,
  [aux_sym_multi_symbol_repeat1] = aux_sym_multi_symbol_repeat1,
  [alias_sym_symbol_fragment] = alias_sym_symbol_fragment,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_shebang] = {
    .visible = true,
    .named = true,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_DOT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_TILDE_EQ] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_DOT_DOT_DOT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT_DOT_DOT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_nil] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__colon_string_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__double_quote_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__gap] = {
    .visible = false,
    .named = true,
  },
  [sym__sexp] = {
    .visible = false,
    .named = true,
  },
  [sym__special_override_symbols] = {
    .visible = false,
    .named = true,
  },
  [sym__reader_macro_char] = {
    .visible = false,
    .named = true,
  },
  [sym_reader_macro] = {
    .visible = true,
    .named = true,
  },
  [sym__list_content] = {
    .visible = false,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_table_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_table] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym__colon_string] = {
    .visible = false,
    .named = true,
  },
  [sym__double_quote_string] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_multi_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_multi_symbol_method] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__list_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__list_content_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_table_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__double_quote_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_multi_symbol_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_symbol_fragment] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_base = 1,
  field_call = 2,
  field_close = 3,
  field_content = 4,
  field_expression = 5,
  field_item = 6,
  field_key = 7,
  field_macro = 8,
  field_member = 9,
  field_method = 10,
  field_open = 11,
  field_value = 12,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_base] = "base",
  [field_call] = "call",
  [field_close] = "close",
  [field_content] = "content",
  [field_expression] = "expression",
  [field_item] = "item",
  [field_key] = "key",
  [field_macro] = "macro",
  [field_member] = "member",
  [field_method] = "method",
  [field_open] = "open",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 2},
  [3] = {.index = 2, .length = 3},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 2},
  [6] = {.index = 9, .length = 1},
  [7] = {.index = 10, .length = 1},
  [8] = {.index = 11, .length = 1},
  [9] = {.index = 12, .length = 2},
  [10] = {.index = 14, .length = 2},
  [11] = {.index = 16, .length = 2},
  [12] = {.index = 18, .length = 4},
  [13] = {.index = 22, .length = 1},
  [14] = {.index = 23, .length = 3},
  [15] = {.index = 26, .length = 2},
  [16] = {.index = 28, .length = 3},
  [17] = {.index = 31, .length = 1},
  [18] = {.index = 32, .length = 2},
  [19] = {.index = 34, .length = 2},
  [20] = {.index = 34, .length = 2},
  [21] = {.index = 36, .length = 2},
  [22] = {.index = 38, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_content, 0, .inherited = true},
    {field_open, 0, .inherited = true},
  [2] =
    {field_close, 0, .inherited = true},
    {field_content, 0, .inherited = true},
    {field_open, 0, .inherited = true},
  [5] =
    {field_content, 1},
    {field_open, 0},
  [7] =
    {field_close, 1},
    {field_open, 0},
  [9] =
    {field_call, 0},
  [10] =
    {field_item, 0},
  [11] =
    {field_key, 0},
  [12] =
    {field_base, 0},
    {field_member, 1, .inherited = true},
  [14] =
    {field_expression, 1},
    {field_macro, 0},
  [16] =
    {field_call, 0},
    {field_item, 1, .inherited = true},
  [18] =
    {field_call, 1, .inherited = true},
    {field_close, 2},
    {field_item, 1, .inherited = true},
    {field_open, 0},
  [22] =
    {field_call, 1},
  [23] =
    {field_close, 2},
    {field_item, 1, .inherited = true},
    {field_open, 0},
  [26] =
    {field_item, 0, .inherited = true},
    {field_item, 1, .inherited = true},
  [28] =
    {field_close, 2},
    {field_content, 1},
    {field_open, 0},
  [31] =
    {field_member, 1},
  [32] =
    {field_member, 0, .inherited = true},
    {field_member, 1, .inherited = true},
  [34] =
    {field_base, 0},
    {field_method, 2},
  [36] =
    {field_call, 1},
    {field_item, 2, .inherited = true},
  [38] =
    {field_key, 0},
    {field_value, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = sym_symbol,
  },
  [4] = {
    [1] = aux_sym__colon_string_token1,
  },
  [9] = {
    [0] = alias_sym_symbol_fragment,
  },
  [16] = {
    [1] = aux_sym__colon_string_token1,
  },
  [17] = {
    [1] = alias_sym_symbol_fragment,
  },
  [19] = {
    [0] = alias_sym_symbol_fragment,
    [2] = alias_sym_symbol_fragment,
  },
  [20] = {
    [2] = alias_sym_symbol_fragment,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym__double_quote_string_repeat1, 2,
    aux_sym__double_quote_string_repeat1,
    aux_sym__colon_string_token1,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 5,
  [7] = 7,
  [8] = 8,
  [9] = 7,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 12,
  [17] = 17,
  [18] = 11,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 23,
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
  [47] = 26,
  [48] = 28,
  [49] = 27,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 29,
  [54] = 54,
  [55] = 32,
  [56] = 56,
  [57] = 57,
  [58] = 42,
  [59] = 59,
  [60] = 38,
  [61] = 41,
  [62] = 44,
  [63] = 34,
  [64] = 37,
  [65] = 35,
  [66] = 40,
  [67] = 43,
  [68] = 39,
  [69] = 36,
  [70] = 33,
  [71] = 30,
  [72] = 72,
  [73] = 45,
  [74] = 31,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 77,
  [79] = 75,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 82,
  [87] = 87,
  [88] = 87,
};

static inline bool sym_shebang_character_set_1(int32_t c) {
  return (c < ';'
    ? (c < '"'
      ? (c < '\r'
        ? c == '\t'
        : (c <= '\r' || c == ' '))
      : (c <= '"' || (c < ','
        ? (c >= '\'' && c <= ')')
        : c <= ',')))
    : (c <= ';' || (c < '`'
      ? (c < '['
        ? c == '@'
        : (c <= '[' || c == ']'))
      : (c <= '`' || (c < '}'
        ? c == '{'
        : c <= '~')))));
}

static inline bool aux_sym__colon_string_token1_character_set_1(int32_t c) {
  return (c < ';'
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : (c <= '\n' || c == '\r'))
      : (c <= '"' || (c < ','
        ? (c >= '\'' && c <= ')')
        : c <= ',')))
    : (c <= ';' || (c < '`'
      ? (c < '['
        ? c == '@'
        : (c <= '[' || c == ']'))
      : (c <= '`' || (c < '}'
        ? c == '{'
        : c <= '~')))));
}

static inline bool aux_sym__colon_string_token1_character_set_2(int32_t c) {
  return (c < ';'
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : (c <= '\n' || c == '\r'))
      : (c <= ' ' || (c < '\''
        ? c == '"'
        : (c <= ')' || c == ','))))
    : (c <= ';' || (c < '`'
      ? (c < '['
        ? c == '@'
        : (c <= '[' || c == ']'))
      : (c <= '`' || (c < '}'
        ? c == '{'
        : c <= '~')))));
}

static inline bool sym_symbol_character_set_1(int32_t c) {
  return (c < '.'
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : (c <= '\n' || c == '\r'))
      : (c <= ' ' || (c < '\''
        ? (c >= '"' && c <= '#')
        : (c <= ')' || c == ','))))
    : (c <= '.' || (c < ']'
      ? (c < '@'
        ? (c >= ':' && c <= ';')
        : (c <= '@' || c == '['))
      : (c <= ']' || (c < '{'
        ? c == '`'
        : (c <= '{' || (c >= '}' && c <= '~')))))));
}

static inline bool sym_symbol_character_set_2(int32_t c) {
  return (c < '.'
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : (c <= '\n' || c == '\r'))
      : (c <= ' ' || (c < '\''
        ? c == '"'
        : (c <= ')' || c == ','))))
    : (c <= '.' || (c < ']'
      ? (c < '@'
        ? (c >= ':' && c <= ';')
        : (c <= '@' || c == '['))
      : (c <= ']' || (c < '{'
        ? c == '`'
        : (c <= '{' || (c >= '}' && c <= '~')))))));
}

static inline bool sym_symbol_character_set_3(int32_t c) {
  return (c < ':'
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : (c <= '\n' || c == '\r'))
      : (c <= ' ' || (c < '\''
        ? c == '"'
        : (c <= ')' || c == ','))))
    : (c <= ';' || (c < '`'
      ? (c < '['
        ? c == '@'
        : (c <= '[' || c == ']'))
      : (c <= '`' || (c < '}'
        ? c == '{'
        : c <= '~')))));
}

static inline bool sym_symbol_character_set_4(int32_t c) {
  return (c < ':'
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : (c <= '\n' || c == '\r'))
      : (c <= ' ' || (c < '\''
        ? c == '"'
        : (c <= ')' || (c >= ',' && c <= '.')))))
    : (c <= ';' || (c < '`'
      ? (c < '['
        ? c == '@'
        : (c <= '[' || c == ']'))
      : (c <= '`' || (c < '}'
        ? c == '{'
        : c <= '~')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(21);
      if (lookahead == '"') ADVANCE(94);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '$') ADVANCE(57);
      if (lookahead == '\'') ADVANCE(44);
      if (lookahead == '(') ADVANCE(47);
      if (lookahead == ')') ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(58);
      if (lookahead == ',') ADVANCE(46);
      if (lookahead == '.') ADVANCE(42);
      if (lookahead == '0') ADVANCE(59);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == '?') ADVANCE(61);
      if (lookahead == '[') ADVANCE(49);
      if (lookahead == ']') ADVANCE(50);
      if (lookahead == '`') ADVANCE(45);
      if (lookahead == 'f') ADVANCE(66);
      if (lookahead == 'n') ADVANCE(68);
      if (lookahead == 't') ADVANCE(71);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead == '}') ADVANCE(52);
      if (lookahead == '~') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(82);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(94);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(36);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(33);
      END_STATE();
    case 5:
      if (lookahead == 'u') ADVANCE(6);
      if (lookahead == 'x') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 6:
      if (lookahead == '{') ADVANCE(15);
      END_STATE();
    case 7:
      if (lookahead == '}') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 9:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(96);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(7);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 17:
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(126);
      END_STATE();
    case 18:
      if (eof) ADVANCE(21);
      if (lookahead == '"') ADVANCE(94);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '$') ADVANCE(110);
      if (lookahead == '\'') ADVANCE(44);
      if (lookahead == '(') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(111);
      if (lookahead == ',') ADVANCE(46);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == '0') ADVANCE(99);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == '?') ADVANCE(112);
      if (lookahead == '[') ADVANCE(49);
      if (lookahead == '`') ADVANCE(45);
      if (lookahead == 'f') ADVANCE(114);
      if (lookahead == 'n') ADVANCE(116);
      if (lookahead == 't') ADVANCE(119);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead == '~') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != ']' &&
          lookahead != '}') ADVANCE(126);
      END_STATE();
    case 19:
      if (eof) ADVANCE(21);
      if (lookahead == '"') ADVANCE(94);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '$') ADVANCE(110);
      if (lookahead == '\'') ADVANCE(44);
      if (lookahead == '(') ADVANCE(47);
      if (lookahead == ')') ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(111);
      if (lookahead == ',') ADVANCE(46);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == '0') ADVANCE(99);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == '?') ADVANCE(112);
      if (lookahead == '[') ADVANCE(49);
      if (lookahead == ']') ADVANCE(50);
      if (lookahead == '`') ADVANCE(45);
      if (lookahead == 'f') ADVANCE(114);
      if (lookahead == 'n') ADVANCE(116);
      if (lookahead == 't') ADVANCE(119);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead == '}') ADVANCE(52);
      if (lookahead == '~') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(126);
      END_STATE();
    case 20:
      if (eof) ADVANCE(21);
      if (lookahead == '"') ADVANCE(94);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '$') ADVANCE(57);
      if (lookahead == '\'') ADVANCE(44);
      if (lookahead == '(') ADVANCE(47);
      if (lookahead == ')') ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(58);
      if (lookahead == ',') ADVANCE(46);
      if (lookahead == '.') ADVANCE(42);
      if (lookahead == '0') ADVANCE(59);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == '?') ADVANCE(61);
      if (lookahead == '[') ADVANCE(49);
      if (lookahead == ']') ADVANCE(50);
      if (lookahead == '`') ADVANCE(45);
      if (lookahead == 'f') ADVANCE(66);
      if (lookahead == 'n') ADVANCE(68);
      if (lookahead == 't') ADVANCE(71);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead == '}') ADVANCE(52);
      if (lookahead == '~') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(82);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_shebang);
      if (sym_shebang_character_set_1(lookahead)) ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_shebang);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '!') ADVANCE(22);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(93);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '!') ADVANCE(23);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_QMARK_DOT);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_QMARK_DOT);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOT_DOT_DOT);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOT_DOT_DOT);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '.') ADVANCE(39);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '.') ADVANCE(38);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_nil);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(93);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_nil);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(126);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_boolean);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(93);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_boolean);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(126);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == ':') ADVANCE(93);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == '0') ADVANCE(59);
      if (lookahead == ':') ADVANCE(93);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(74);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(60);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(60);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == ':') ADVANCE(93);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == ':') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(37);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(63);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'a') ADVANCE(69);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(93);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'e') ADVANCE(55);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(93);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'i') ADVANCE(70);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(93);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'l') ADVANCE(72);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(93);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'l') ADVANCE(53);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(93);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'r') ADVANCE(73);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(93);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 's') ADVANCE(67);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(93);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'u') ADVANCE(67);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(93);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(78);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(80);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(92);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(79);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(93);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(84);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(89);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(92);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(92);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(102);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(122);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(100);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(126);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(102);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(100);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(126);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(126);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(106);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(126);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(108);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(126);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(3);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(126);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == '0') ADVANCE(99);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(126);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(31);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(126);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(126);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(117);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(126);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(56);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(126);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'i') ADVANCE(118);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(126);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(120);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(126);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(54);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(126);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'r') ADVANCE(121);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(126);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(115);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(126);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'u') ADVANCE(115);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(126);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (!sym_symbol_character_set_4(lookahead)) ADVANCE(126);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(108);
      if (!sym_symbol_character_set_4(lookahead)) ADVANCE(126);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(126);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(108);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(126);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_symbol);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(126);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 18},
  [2] = {.lex_state = 19},
  [3] = {.lex_state = 19},
  [4] = {.lex_state = 19},
  [5] = {.lex_state = 19},
  [6] = {.lex_state = 19},
  [7] = {.lex_state = 19},
  [8] = {.lex_state = 19},
  [9] = {.lex_state = 19},
  [10] = {.lex_state = 19},
  [11] = {.lex_state = 19},
  [12] = {.lex_state = 19},
  [13] = {.lex_state = 19},
  [14] = {.lex_state = 19},
  [15] = {.lex_state = 19},
  [16] = {.lex_state = 19},
  [17] = {.lex_state = 19},
  [18] = {.lex_state = 19},
  [19] = {.lex_state = 19},
  [20] = {.lex_state = 19},
  [21] = {.lex_state = 19},
  [22] = {.lex_state = 19},
  [23] = {.lex_state = 19},
  [24] = {.lex_state = 19},
  [25] = {.lex_state = 19},
  [26] = {.lex_state = 19},
  [27] = {.lex_state = 19},
  [28] = {.lex_state = 20},
  [29] = {.lex_state = 19},
  [30] = {.lex_state = 19},
  [31] = {.lex_state = 19},
  [32] = {.lex_state = 19},
  [33] = {.lex_state = 19},
  [34] = {.lex_state = 19},
  [35] = {.lex_state = 19},
  [36] = {.lex_state = 19},
  [37] = {.lex_state = 19},
  [38] = {.lex_state = 19},
  [39] = {.lex_state = 19},
  [40] = {.lex_state = 19},
  [41] = {.lex_state = 19},
  [42] = {.lex_state = 19},
  [43] = {.lex_state = 19},
  [44] = {.lex_state = 19},
  [45] = {.lex_state = 19},
  [46] = {.lex_state = 19},
  [47] = {.lex_state = 19},
  [48] = {.lex_state = 20},
  [49] = {.lex_state = 19},
  [50] = {.lex_state = 19},
  [51] = {.lex_state = 19},
  [52] = {.lex_state = 19},
  [53] = {.lex_state = 19},
  [54] = {.lex_state = 19},
  [55] = {.lex_state = 19},
  [56] = {.lex_state = 19},
  [57] = {.lex_state = 19},
  [58] = {.lex_state = 19},
  [59] = {.lex_state = 19},
  [60] = {.lex_state = 19},
  [61] = {.lex_state = 19},
  [62] = {.lex_state = 19},
  [63] = {.lex_state = 19},
  [64] = {.lex_state = 19},
  [65] = {.lex_state = 19},
  [66] = {.lex_state = 19},
  [67] = {.lex_state = 19},
  [68] = {.lex_state = 19},
  [69] = {.lex_state = 19},
  [70] = {.lex_state = 19},
  [71] = {.lex_state = 19},
  [72] = {.lex_state = 19},
  [73] = {.lex_state = 19},
  [74] = {.lex_state = 19},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 17},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 17},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 17},
  [88] = {.lex_state = 17},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_shebang] = ACTIONS(1),
    [sym__whitespace] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_QMARK_DOT] = ACTIONS(1),
    [anon_sym_TILDE_EQ] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_nil] = ACTIONS(1),
    [sym_boolean] = ACTIONS(1),
    [aux_sym__colon_string_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_symbol] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(84),
    [sym__gap] = STATE(14),
    [sym__sexp] = STATE(14),
    [sym__special_override_symbols] = STATE(14),
    [sym__reader_macro_char] = STATE(23),
    [sym_reader_macro] = STATE(14),
    [sym_list] = STATE(14),
    [sym_sequence] = STATE(14),
    [sym_table] = STATE(14),
    [sym__literal] = STATE(14),
    [sym__colon_string] = STATE(65),
    [sym__double_quote_string] = STATE(70),
    [sym_string] = STATE(14),
    [sym_multi_symbol] = STATE(14),
    [aux_sym_program_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_shebang] = ACTIONS(5),
    [sym__whitespace] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(9),
    [anon_sym_QMARK_DOT] = ACTIONS(11),
    [anon_sym_TILDE_EQ] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(13),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(11),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(11),
    [anon_sym_DOT_DOT] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [anon_sym_COMMA] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [sym_nil] = ACTIONS(27),
    [sym_boolean] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [sym_number] = ACTIONS(27),
    [sym_symbol] = ACTIONS(31),
  },
  [2] = {
    [sym__gap] = STATE(21),
    [sym__sexp] = STATE(19),
    [sym__special_override_symbols] = STATE(19),
    [sym__reader_macro_char] = STATE(25),
    [sym_reader_macro] = STATE(19),
    [sym__list_content] = STATE(82),
    [sym_list] = STATE(19),
    [sym_sequence] = STATE(19),
    [sym_table] = STATE(19),
    [sym__literal] = STATE(19),
    [sym__colon_string] = STATE(35),
    [sym__double_quote_string] = STATE(33),
    [sym_string] = STATE(19),
    [sym_multi_symbol] = STATE(72),
    [sym_multi_symbol_method] = STATE(19),
    [aux_sym__list_content_repeat1] = STATE(21),
    [sym__whitespace] = ACTIONS(33),
    [sym_comment] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_QMARK_DOT] = ACTIONS(37),
    [anon_sym_TILDE_EQ] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(39),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(41),
    [anon_sym_DOT] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_RPAREN] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_nil] = ACTIONS(55),
    [sym_boolean] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [sym_number] = ACTIONS(55),
    [sym_symbol] = ACTIONS(59),
  },
  [3] = {
    [sym__gap] = STATE(21),
    [sym__sexp] = STATE(19),
    [sym__special_override_symbols] = STATE(19),
    [sym__reader_macro_char] = STATE(25),
    [sym_reader_macro] = STATE(19),
    [sym__list_content] = STATE(86),
    [sym_list] = STATE(19),
    [sym_sequence] = STATE(19),
    [sym_table] = STATE(19),
    [sym__literal] = STATE(19),
    [sym__colon_string] = STATE(35),
    [sym__double_quote_string] = STATE(33),
    [sym_string] = STATE(19),
    [sym_multi_symbol] = STATE(72),
    [sym_multi_symbol_method] = STATE(19),
    [aux_sym__list_content_repeat1] = STATE(21),
    [sym__whitespace] = ACTIONS(33),
    [sym_comment] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_QMARK_DOT] = ACTIONS(37),
    [anon_sym_TILDE_EQ] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(39),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(41),
    [anon_sym_DOT] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_RPAREN] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_nil] = ACTIONS(55),
    [sym_boolean] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [sym_number] = ACTIONS(55),
    [sym_symbol] = ACTIONS(59),
  },
  [4] = {
    [sym__gap] = STATE(4),
    [sym__sexp] = STATE(52),
    [sym__special_override_symbols] = STATE(52),
    [sym__reader_macro_char] = STATE(25),
    [sym_reader_macro] = STATE(52),
    [sym_list] = STATE(52),
    [sym_sequence] = STATE(52),
    [sym_table_pair] = STATE(54),
    [sym_table] = STATE(52),
    [sym__literal] = STATE(52),
    [sym__colon_string] = STATE(35),
    [sym__double_quote_string] = STATE(33),
    [sym_string] = STATE(52),
    [sym_multi_symbol] = STATE(52),
    [aux_sym_table_repeat1] = STATE(4),
    [sym__whitespace] = ACTIONS(63),
    [sym_comment] = ACTIONS(63),
    [anon_sym_POUND] = ACTIONS(66),
    [anon_sym_QMARK_DOT] = ACTIONS(69),
    [anon_sym_TILDE_EQ] = ACTIONS(69),
    [anon_sym_COLON] = ACTIONS(72),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(69),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(69),
    [anon_sym_DOT_DOT] = ACTIONS(75),
    [anon_sym_DOT] = ACTIONS(78),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [anon_sym_BQUOTE] = ACTIONS(81),
    [anon_sym_COMMA] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(84),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(90),
    [anon_sym_RBRACE] = ACTIONS(93),
    [sym_nil] = ACTIONS(95),
    [sym_boolean] = ACTIONS(95),
    [anon_sym_DQUOTE] = ACTIONS(98),
    [sym_number] = ACTIONS(95),
    [sym_symbol] = ACTIONS(101),
  },
  [5] = {
    [sym__gap] = STATE(4),
    [sym__sexp] = STATE(52),
    [sym__special_override_symbols] = STATE(52),
    [sym__reader_macro_char] = STATE(25),
    [sym_reader_macro] = STATE(52),
    [sym_list] = STATE(52),
    [sym_sequence] = STATE(52),
    [sym_table_pair] = STATE(54),
    [sym_table] = STATE(52),
    [sym__literal] = STATE(52),
    [sym__colon_string] = STATE(35),
    [sym__double_quote_string] = STATE(33),
    [sym_string] = STATE(52),
    [sym_multi_symbol] = STATE(52),
    [aux_sym_table_repeat1] = STATE(4),
    [sym__whitespace] = ACTIONS(104),
    [sym_comment] = ACTIONS(104),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_QMARK_DOT] = ACTIONS(37),
    [anon_sym_TILDE_EQ] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(39),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(41),
    [anon_sym_DOT] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_RBRACE] = ACTIONS(106),
    [sym_nil] = ACTIONS(108),
    [sym_boolean] = ACTIONS(108),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [sym_number] = ACTIONS(108),
    [sym_symbol] = ACTIONS(110),
  },
  [6] = {
    [sym__gap] = STATE(4),
    [sym__sexp] = STATE(52),
    [sym__special_override_symbols] = STATE(52),
    [sym__reader_macro_char] = STATE(25),
    [sym_reader_macro] = STATE(52),
    [sym_list] = STATE(52),
    [sym_sequence] = STATE(52),
    [sym_table_pair] = STATE(54),
    [sym_table] = STATE(52),
    [sym__literal] = STATE(52),
    [sym__colon_string] = STATE(35),
    [sym__double_quote_string] = STATE(33),
    [sym_string] = STATE(52),
    [sym_multi_symbol] = STATE(52),
    [aux_sym_table_repeat1] = STATE(4),
    [sym__whitespace] = ACTIONS(104),
    [sym_comment] = ACTIONS(104),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_QMARK_DOT] = ACTIONS(37),
    [anon_sym_TILDE_EQ] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(39),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(41),
    [anon_sym_DOT] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_RBRACE] = ACTIONS(112),
    [sym_nil] = ACTIONS(108),
    [sym_boolean] = ACTIONS(108),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [sym_number] = ACTIONS(108),
    [sym_symbol] = ACTIONS(110),
  },
  [7] = {
    [sym__gap] = STATE(5),
    [sym__sexp] = STATE(52),
    [sym__special_override_symbols] = STATE(52),
    [sym__reader_macro_char] = STATE(25),
    [sym_reader_macro] = STATE(52),
    [sym_list] = STATE(52),
    [sym_sequence] = STATE(52),
    [sym_table_pair] = STATE(54),
    [sym_table] = STATE(52),
    [sym__literal] = STATE(52),
    [sym__colon_string] = STATE(35),
    [sym__double_quote_string] = STATE(33),
    [sym_string] = STATE(52),
    [sym_multi_symbol] = STATE(52),
    [aux_sym_table_repeat1] = STATE(5),
    [sym__whitespace] = ACTIONS(114),
    [sym_comment] = ACTIONS(114),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_QMARK_DOT] = ACTIONS(37),
    [anon_sym_TILDE_EQ] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(39),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(41),
    [anon_sym_DOT] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_RBRACE] = ACTIONS(116),
    [sym_nil] = ACTIONS(108),
    [sym_boolean] = ACTIONS(108),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [sym_number] = ACTIONS(108),
    [sym_symbol] = ACTIONS(110),
  },
  [8] = {
    [sym__gap] = STATE(8),
    [sym__sexp] = STATE(51),
    [sym__special_override_symbols] = STATE(51),
    [sym__reader_macro_char] = STATE(25),
    [sym_reader_macro] = STATE(51),
    [sym_list] = STATE(51),
    [sym_sequence] = STATE(51),
    [sym_table] = STATE(51),
    [sym__literal] = STATE(51),
    [sym__colon_string] = STATE(35),
    [sym__double_quote_string] = STATE(33),
    [sym_string] = STATE(51),
    [sym_multi_symbol] = STATE(51),
    [aux_sym__list_content_repeat2] = STATE(8),
    [sym__whitespace] = ACTIONS(118),
    [sym_comment] = ACTIONS(118),
    [anon_sym_POUND] = ACTIONS(121),
    [anon_sym_QMARK_DOT] = ACTIONS(124),
    [anon_sym_TILDE_EQ] = ACTIONS(124),
    [anon_sym_COLON] = ACTIONS(127),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(124),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(124),
    [anon_sym_DOT_DOT] = ACTIONS(130),
    [anon_sym_DOT] = ACTIONS(133),
    [anon_sym_SQUOTE] = ACTIONS(136),
    [anon_sym_BQUOTE] = ACTIONS(136),
    [anon_sym_COMMA] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_RPAREN] = ACTIONS(142),
    [anon_sym_LBRACK] = ACTIONS(144),
    [anon_sym_RBRACK] = ACTIONS(142),
    [anon_sym_LBRACE] = ACTIONS(147),
    [sym_nil] = ACTIONS(150),
    [sym_boolean] = ACTIONS(150),
    [anon_sym_DQUOTE] = ACTIONS(153),
    [sym_number] = ACTIONS(150),
    [sym_symbol] = ACTIONS(156),
  },
  [9] = {
    [sym__gap] = STATE(6),
    [sym__sexp] = STATE(52),
    [sym__special_override_symbols] = STATE(52),
    [sym__reader_macro_char] = STATE(25),
    [sym_reader_macro] = STATE(52),
    [sym_list] = STATE(52),
    [sym_sequence] = STATE(52),
    [sym_table_pair] = STATE(54),
    [sym_table] = STATE(52),
    [sym__literal] = STATE(52),
    [sym__colon_string] = STATE(35),
    [sym__double_quote_string] = STATE(33),
    [sym_string] = STATE(52),
    [sym_multi_symbol] = STATE(52),
    [aux_sym_table_repeat1] = STATE(6),
    [sym__whitespace] = ACTIONS(159),
    [sym_comment] = ACTIONS(159),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_QMARK_DOT] = ACTIONS(37),
    [anon_sym_TILDE_EQ] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(39),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(41),
    [anon_sym_DOT] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_RBRACE] = ACTIONS(161),
    [sym_nil] = ACTIONS(108),
    [sym_boolean] = ACTIONS(108),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [sym_number] = ACTIONS(108),
    [sym_symbol] = ACTIONS(110),
  },
  [10] = {
    [sym__gap] = STATE(8),
    [sym__sexp] = STATE(51),
    [sym__special_override_symbols] = STATE(51),
    [sym__reader_macro_char] = STATE(25),
    [sym_reader_macro] = STATE(51),
    [sym_list] = STATE(51),
    [sym_sequence] = STATE(51),
    [sym_table] = STATE(51),
    [sym__literal] = STATE(51),
    [sym__colon_string] = STATE(35),
    [sym__double_quote_string] = STATE(33),
    [sym_string] = STATE(51),
    [sym_multi_symbol] = STATE(51),
    [aux_sym__list_content_repeat2] = STATE(8),
    [sym__whitespace] = ACTIONS(163),
    [sym_comment] = ACTIONS(163),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_QMARK_DOT] = ACTIONS(37),
    [anon_sym_TILDE_EQ] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(39),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(41),
    [anon_sym_DOT] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_RPAREN] = ACTIONS(165),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_nil] = ACTIONS(167),
    [sym_boolean] = ACTIONS(167),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [sym_number] = ACTIONS(167),
    [sym_symbol] = ACTIONS(110),
  },
  [11] = {
    [sym__gap] = STATE(16),
    [sym__sexp] = STATE(51),
    [sym__special_override_symbols] = STATE(51),
    [sym__reader_macro_char] = STATE(25),
    [sym_reader_macro] = STATE(51),
    [sym_list] = STATE(51),
    [sym_sequence] = STATE(51),
    [sym_table] = STATE(51),
    [sym__literal] = STATE(51),
    [sym__colon_string] = STATE(35),
    [sym__double_quote_string] = STATE(33),
    [sym_string] = STATE(51),
    [sym_multi_symbol] = STATE(51),
    [aux_sym__list_content_repeat2] = STATE(16),
    [sym__whitespace] = ACTIONS(169),
    [sym_comment] = ACTIONS(169),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_QMARK_DOT] = ACTIONS(37),
    [anon_sym_TILDE_EQ] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(39),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(41),
    [anon_sym_DOT] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_RBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_nil] = ACTIONS(167),
    [sym_boolean] = ACTIONS(167),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [sym_number] = ACTIONS(167),
    [sym_symbol] = ACTIONS(110),
  },
  [12] = {
    [sym__gap] = STATE(8),
    [sym__sexp] = STATE(51),
    [sym__special_override_symbols] = STATE(51),
    [sym__reader_macro_char] = STATE(25),
    [sym_reader_macro] = STATE(51),
    [sym_list] = STATE(51),
    [sym_sequence] = STATE(51),
    [sym_table] = STATE(51),
    [sym__literal] = STATE(51),
    [sym__colon_string] = STATE(35),
    [sym__double_quote_string] = STATE(33),
    [sym_string] = STATE(51),
    [sym_multi_symbol] = STATE(51),
    [aux_sym__list_content_repeat2] = STATE(8),
    [sym__whitespace] = ACTIONS(163),
    [sym_comment] = ACTIONS(163),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_QMARK_DOT] = ACTIONS(37),
    [anon_sym_TILDE_EQ] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(39),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(41),
    [anon_sym_DOT] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_RBRACK] = ACTIONS(173),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_nil] = ACTIONS(167),
    [sym_boolean] = ACTIONS(167),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [sym_number] = ACTIONS(167),
    [sym_symbol] = ACTIONS(110),
  },
  [13] = {
    [sym__gap] = STATE(10),
    [sym__sexp] = STATE(51),
    [sym__special_override_symbols] = STATE(51),
    [sym__reader_macro_char] = STATE(25),
    [sym_reader_macro] = STATE(51),
    [sym_list] = STATE(51),
    [sym_sequence] = STATE(51),
    [sym_table] = STATE(51),
    [sym__literal] = STATE(51),
    [sym__colon_string] = STATE(35),
    [sym__double_quote_string] = STATE(33),
    [sym_string] = STATE(51),
    [sym_multi_symbol] = STATE(51),
    [aux_sym__list_content_repeat2] = STATE(10),
    [sym__whitespace] = ACTIONS(175),
    [sym_comment] = ACTIONS(175),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_QMARK_DOT] = ACTIONS(37),
    [anon_sym_TILDE_EQ] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(39),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(41),
    [anon_sym_DOT] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_RPAREN] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_nil] = ACTIONS(167),
    [sym_boolean] = ACTIONS(167),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [sym_number] = ACTIONS(167),
    [sym_symbol] = ACTIONS(110),
  },
  [14] = {
    [sym__gap] = STATE(20),
    [sym__sexp] = STATE(20),
    [sym__special_override_symbols] = STATE(20),
    [sym__reader_macro_char] = STATE(23),
    [sym_reader_macro] = STATE(20),
    [sym_list] = STATE(20),
    [sym_sequence] = STATE(20),
    [sym_table] = STATE(20),
    [sym__literal] = STATE(20),
    [sym__colon_string] = STATE(65),
    [sym__double_quote_string] = STATE(70),
    [sym_string] = STATE(20),
    [sym_multi_symbol] = STATE(20),
    [aux_sym_program_repeat1] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(179),
    [sym__whitespace] = ACTIONS(181),
    [sym_comment] = ACTIONS(181),
    [anon_sym_POUND] = ACTIONS(183),
    [anon_sym_QMARK_DOT] = ACTIONS(11),
    [anon_sym_TILDE_EQ] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(13),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(11),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(11),
    [anon_sym_DOT_DOT] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [anon_sym_COMMA] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [sym_nil] = ACTIONS(185),
    [sym_boolean] = ACTIONS(185),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [sym_number] = ACTIONS(185),
    [sym_symbol] = ACTIONS(31),
  },
  [15] = {
    [sym__gap] = STATE(20),
    [sym__sexp] = STATE(20),
    [sym__special_override_symbols] = STATE(20),
    [sym__reader_macro_char] = STATE(23),
    [sym_reader_macro] = STATE(20),
    [sym_list] = STATE(20),
    [sym_sequence] = STATE(20),
    [sym_table] = STATE(20),
    [sym__literal] = STATE(20),
    [sym__colon_string] = STATE(65),
    [sym__double_quote_string] = STATE(70),
    [sym_string] = STATE(20),
    [sym_multi_symbol] = STATE(20),
    [aux_sym_program_repeat1] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(187),
    [sym__whitespace] = ACTIONS(181),
    [sym_comment] = ACTIONS(181),
    [anon_sym_POUND] = ACTIONS(183),
    [anon_sym_QMARK_DOT] = ACTIONS(11),
    [anon_sym_TILDE_EQ] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(13),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(11),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(11),
    [anon_sym_DOT_DOT] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [anon_sym_COMMA] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [sym_nil] = ACTIONS(185),
    [sym_boolean] = ACTIONS(185),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [sym_number] = ACTIONS(185),
    [sym_symbol] = ACTIONS(31),
  },
  [16] = {
    [sym__gap] = STATE(8),
    [sym__sexp] = STATE(51),
    [sym__special_override_symbols] = STATE(51),
    [sym__reader_macro_char] = STATE(25),
    [sym_reader_macro] = STATE(51),
    [sym_list] = STATE(51),
    [sym_sequence] = STATE(51),
    [sym_table] = STATE(51),
    [sym__literal] = STATE(51),
    [sym__colon_string] = STATE(35),
    [sym__double_quote_string] = STATE(33),
    [sym_string] = STATE(51),
    [sym_multi_symbol] = STATE(51),
    [aux_sym__list_content_repeat2] = STATE(8),
    [sym__whitespace] = ACTIONS(163),
    [sym_comment] = ACTIONS(163),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_QMARK_DOT] = ACTIONS(37),
    [anon_sym_TILDE_EQ] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(39),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(41),
    [anon_sym_DOT] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_RBRACK] = ACTIONS(189),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_nil] = ACTIONS(167),
    [sym_boolean] = ACTIONS(167),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [sym_number] = ACTIONS(167),
    [sym_symbol] = ACTIONS(110),
  },
  [17] = {
    [sym__gap] = STATE(8),
    [sym__sexp] = STATE(51),
    [sym__special_override_symbols] = STATE(51),
    [sym__reader_macro_char] = STATE(25),
    [sym_reader_macro] = STATE(51),
    [sym_list] = STATE(51),
    [sym_sequence] = STATE(51),
    [sym_table] = STATE(51),
    [sym__literal] = STATE(51),
    [sym__colon_string] = STATE(35),
    [sym__double_quote_string] = STATE(33),
    [sym_string] = STATE(51),
    [sym_multi_symbol] = STATE(51),
    [aux_sym__list_content_repeat2] = STATE(8),
    [sym__whitespace] = ACTIONS(163),
    [sym_comment] = ACTIONS(163),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_QMARK_DOT] = ACTIONS(37),
    [anon_sym_TILDE_EQ] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(39),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(41),
    [anon_sym_DOT] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_RPAREN] = ACTIONS(191),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_nil] = ACTIONS(167),
    [sym_boolean] = ACTIONS(167),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [sym_number] = ACTIONS(167),
    [sym_symbol] = ACTIONS(110),
  },
  [18] = {
    [sym__gap] = STATE(12),
    [sym__sexp] = STATE(51),
    [sym__special_override_symbols] = STATE(51),
    [sym__reader_macro_char] = STATE(25),
    [sym_reader_macro] = STATE(51),
    [sym_list] = STATE(51),
    [sym_sequence] = STATE(51),
    [sym_table] = STATE(51),
    [sym__literal] = STATE(51),
    [sym__colon_string] = STATE(35),
    [sym__double_quote_string] = STATE(33),
    [sym_string] = STATE(51),
    [sym_multi_symbol] = STATE(51),
    [aux_sym__list_content_repeat2] = STATE(12),
    [sym__whitespace] = ACTIONS(193),
    [sym_comment] = ACTIONS(193),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_QMARK_DOT] = ACTIONS(37),
    [anon_sym_TILDE_EQ] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(39),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(41),
    [anon_sym_DOT] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_RBRACK] = ACTIONS(195),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_nil] = ACTIONS(167),
    [sym_boolean] = ACTIONS(167),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [sym_number] = ACTIONS(167),
    [sym_symbol] = ACTIONS(110),
  },
  [19] = {
    [sym__gap] = STATE(17),
    [sym__sexp] = STATE(51),
    [sym__special_override_symbols] = STATE(51),
    [sym__reader_macro_char] = STATE(25),
    [sym_reader_macro] = STATE(51),
    [sym_list] = STATE(51),
    [sym_sequence] = STATE(51),
    [sym_table] = STATE(51),
    [sym__literal] = STATE(51),
    [sym__colon_string] = STATE(35),
    [sym__double_quote_string] = STATE(33),
    [sym_string] = STATE(51),
    [sym_multi_symbol] = STATE(51),
    [aux_sym__list_content_repeat2] = STATE(17),
    [sym__whitespace] = ACTIONS(197),
    [sym_comment] = ACTIONS(197),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_QMARK_DOT] = ACTIONS(37),
    [anon_sym_TILDE_EQ] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(39),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(41),
    [anon_sym_DOT] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_RPAREN] = ACTIONS(199),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_nil] = ACTIONS(167),
    [sym_boolean] = ACTIONS(167),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [sym_number] = ACTIONS(167),
    [sym_symbol] = ACTIONS(110),
  },
  [20] = {
    [sym__gap] = STATE(20),
    [sym__sexp] = STATE(20),
    [sym__special_override_symbols] = STATE(20),
    [sym__reader_macro_char] = STATE(23),
    [sym_reader_macro] = STATE(20),
    [sym_list] = STATE(20),
    [sym_sequence] = STATE(20),
    [sym_table] = STATE(20),
    [sym__literal] = STATE(20),
    [sym__colon_string] = STATE(65),
    [sym__double_quote_string] = STATE(70),
    [sym_string] = STATE(20),
    [sym_multi_symbol] = STATE(20),
    [aux_sym_program_repeat1] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(201),
    [sym__whitespace] = ACTIONS(203),
    [sym_comment] = ACTIONS(203),
    [anon_sym_POUND] = ACTIONS(206),
    [anon_sym_QMARK_DOT] = ACTIONS(209),
    [anon_sym_TILDE_EQ] = ACTIONS(209),
    [anon_sym_COLON] = ACTIONS(212),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(209),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(209),
    [anon_sym_DOT_DOT] = ACTIONS(215),
    [anon_sym_DOT] = ACTIONS(218),
    [anon_sym_SQUOTE] = ACTIONS(221),
    [anon_sym_BQUOTE] = ACTIONS(221),
    [anon_sym_COMMA] = ACTIONS(221),
    [anon_sym_LPAREN] = ACTIONS(224),
    [anon_sym_LBRACK] = ACTIONS(227),
    [anon_sym_LBRACE] = ACTIONS(230),
    [sym_nil] = ACTIONS(233),
    [sym_boolean] = ACTIONS(233),
    [anon_sym_DQUOTE] = ACTIONS(236),
    [sym_number] = ACTIONS(233),
    [sym_symbol] = ACTIONS(239),
  },
  [21] = {
    [sym__gap] = STATE(46),
    [sym__sexp] = STATE(13),
    [sym__special_override_symbols] = STATE(13),
    [sym__reader_macro_char] = STATE(25),
    [sym_reader_macro] = STATE(13),
    [sym_list] = STATE(13),
    [sym_sequence] = STATE(13),
    [sym_table] = STATE(13),
    [sym__literal] = STATE(13),
    [sym__colon_string] = STATE(35),
    [sym__double_quote_string] = STATE(33),
    [sym_string] = STATE(13),
    [sym_multi_symbol] = STATE(72),
    [sym_multi_symbol_method] = STATE(13),
    [aux_sym__list_content_repeat1] = STATE(46),
    [sym__whitespace] = ACTIONS(242),
    [sym_comment] = ACTIONS(242),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_QMARK_DOT] = ACTIONS(37),
    [anon_sym_TILDE_EQ] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(39),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(41),
    [anon_sym_DOT] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_nil] = ACTIONS(244),
    [sym_boolean] = ACTIONS(244),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [sym_number] = ACTIONS(244),
    [sym_symbol] = ACTIONS(59),
  },
  [22] = {
    [sym__gap] = STATE(15),
    [sym__sexp] = STATE(15),
    [sym__special_override_symbols] = STATE(15),
    [sym__reader_macro_char] = STATE(23),
    [sym_reader_macro] = STATE(15),
    [sym_list] = STATE(15),
    [sym_sequence] = STATE(15),
    [sym_table] = STATE(15),
    [sym__literal] = STATE(15),
    [sym__colon_string] = STATE(65),
    [sym__double_quote_string] = STATE(70),
    [sym_string] = STATE(15),
    [sym_multi_symbol] = STATE(15),
    [aux_sym_program_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(179),
    [sym__whitespace] = ACTIONS(246),
    [sym_comment] = ACTIONS(246),
    [anon_sym_POUND] = ACTIONS(183),
    [anon_sym_QMARK_DOT] = ACTIONS(11),
    [anon_sym_TILDE_EQ] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(13),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(11),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(11),
    [anon_sym_DOT_DOT] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [anon_sym_COMMA] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [sym_nil] = ACTIONS(248),
    [sym_boolean] = ACTIONS(248),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [sym_number] = ACTIONS(248),
    [sym_symbol] = ACTIONS(31),
  },
  [23] = {
    [sym__sexp] = STATE(61),
    [sym__special_override_symbols] = STATE(61),
    [sym__reader_macro_char] = STATE(23),
    [sym_reader_macro] = STATE(61),
    [sym_list] = STATE(61),
    [sym_sequence] = STATE(61),
    [sym_table] = STATE(61),
    [sym__literal] = STATE(61),
    [sym__colon_string] = STATE(65),
    [sym__double_quote_string] = STATE(70),
    [sym_string] = STATE(61),
    [sym_multi_symbol] = STATE(61),
    [anon_sym_POUND] = ACTIONS(183),
    [anon_sym_QMARK_DOT] = ACTIONS(11),
    [anon_sym_TILDE_EQ] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(13),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(11),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(11),
    [anon_sym_DOT_DOT] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [anon_sym_COMMA] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [sym_nil] = ACTIONS(250),
    [sym_boolean] = ACTIONS(250),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [sym_number] = ACTIONS(250),
    [sym_symbol] = ACTIONS(31),
  },
  [24] = {
    [sym__sexp] = STATE(59),
    [sym__special_override_symbols] = STATE(59),
    [sym__reader_macro_char] = STATE(25),
    [sym_reader_macro] = STATE(59),
    [sym_list] = STATE(59),
    [sym_sequence] = STATE(59),
    [sym_table] = STATE(59),
    [sym__literal] = STATE(59),
    [sym__colon_string] = STATE(35),
    [sym__double_quote_string] = STATE(33),
    [sym_string] = STATE(59),
    [sym_multi_symbol] = STATE(59),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_QMARK_DOT] = ACTIONS(37),
    [anon_sym_TILDE_EQ] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(39),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(41),
    [anon_sym_DOT] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_nil] = ACTIONS(252),
    [sym_boolean] = ACTIONS(252),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [sym_number] = ACTIONS(252),
    [sym_symbol] = ACTIONS(110),
  },
  [25] = {
    [sym__sexp] = STATE(41),
    [sym__special_override_symbols] = STATE(41),
    [sym__reader_macro_char] = STATE(25),
    [sym_reader_macro] = STATE(41),
    [sym_list] = STATE(41),
    [sym_sequence] = STATE(41),
    [sym_table] = STATE(41),
    [sym__literal] = STATE(41),
    [sym__colon_string] = STATE(35),
    [sym__double_quote_string] = STATE(33),
    [sym_string] = STATE(41),
    [sym_multi_symbol] = STATE(41),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_QMARK_DOT] = ACTIONS(37),
    [anon_sym_TILDE_EQ] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(39),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(41),
    [anon_sym_DOT] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_nil] = ACTIONS(254),
    [sym_boolean] = ACTIONS(254),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [sym_number] = ACTIONS(254),
    [sym_symbol] = ACTIONS(110),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(260), 1,
      anon_sym_DOT,
    STATE(26), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(258), 5,
      anon_sym_DOT_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(256), 18,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [34] = 4,
    ACTIONS(267), 1,
      anon_sym_DOT,
    STATE(29), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(265), 5,
      anon_sym_DOT_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(263), 18,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [68] = 4,
    ACTIONS(274), 1,
      anon_sym_TILDE_EQ,
    ACTIONS(276), 2,
      sym_number,
      sym_symbol,
    ACTIONS(272), 10,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      aux_sym__colon_string_token1,
    ACTIONS(270), 12,
      sym__whitespace,
      sym_comment,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [102] = 4,
    ACTIONS(282), 1,
      anon_sym_DOT,
    STATE(26), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(280), 5,
      anon_sym_DOT_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(278), 18,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [136] = 2,
    ACTIONS(286), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(284), 18,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [165] = 2,
    ACTIONS(290), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(288), 18,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [194] = 2,
    ACTIONS(294), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(292), 18,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [223] = 2,
    ACTIONS(298), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(296), 18,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [252] = 2,
    ACTIONS(302), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(300), 18,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [281] = 2,
    ACTIONS(306), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(304), 18,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [310] = 2,
    ACTIONS(310), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(308), 18,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [339] = 2,
    ACTIONS(314), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(312), 18,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [368] = 2,
    ACTIONS(276), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(270), 18,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [397] = 3,
    ACTIONS(270), 5,
      sym__whitespace,
      sym_comment,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    ACTIONS(318), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(316), 13,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [428] = 2,
    ACTIONS(322), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(320), 18,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [457] = 2,
    ACTIONS(326), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(324), 18,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [486] = 2,
    ACTIONS(330), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(328), 18,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [515] = 2,
    ACTIONS(334), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(332), 18,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [544] = 2,
    ACTIONS(338), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(336), 18,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [573] = 2,
    ACTIONS(342), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(340), 18,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [602] = 4,
    ACTIONS(344), 2,
      sym__whitespace,
      sym_comment,
    STATE(46), 2,
      sym__gap,
      aux_sym__list_content_repeat1,
    ACTIONS(349), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(347), 13,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [634] = 4,
    ACTIONS(351), 1,
      anon_sym_DOT,
    STATE(47), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(258), 5,
      anon_sym_DOT_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(256), 16,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [666] = 4,
    ACTIONS(356), 1,
      anon_sym_TILDE_EQ,
    ACTIONS(276), 2,
      sym_number,
      sym_symbol,
    ACTIONS(270), 10,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
    ACTIONS(354), 10,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      aux_sym__colon_string_token1,
  [698] = 4,
    ACTIONS(358), 1,
      anon_sym_DOT,
    STATE(53), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(265), 5,
      anon_sym_DOT_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(263), 16,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [730] = 5,
    ACTIONS(267), 1,
      anon_sym_DOT,
    ACTIONS(361), 1,
      anon_sym_COLON,
    STATE(29), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(265), 5,
      anon_sym_DOT_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(263), 15,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [764] = 2,
    ACTIONS(365), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(363), 17,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [792] = 4,
    STATE(24), 1,
      sym__gap,
    ACTIONS(367), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(371), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(369), 14,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [824] = 4,
    ACTIONS(373), 1,
      anon_sym_DOT,
    STATE(47), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(280), 5,
      anon_sym_DOT_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(278), 16,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [856] = 2,
    ACTIONS(377), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(375), 16,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [883] = 2,
    ACTIONS(294), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(292), 16,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [910] = 2,
    ACTIONS(381), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(379), 16,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [937] = 2,
    ACTIONS(385), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(383), 16,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [964] = 2,
    ACTIONS(330), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(328), 16,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [991] = 2,
    ACTIONS(389), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(387), 16,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [1018] = 2,
    ACTIONS(276), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(270), 16,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [1045] = 2,
    ACTIONS(326), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(324), 16,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [1072] = 2,
    ACTIONS(338), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(336), 16,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [1099] = 2,
    ACTIONS(302), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(300), 16,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [1126] = 2,
    ACTIONS(314), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(312), 16,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [1153] = 2,
    ACTIONS(306), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(304), 16,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [1180] = 2,
    ACTIONS(322), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(320), 16,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [1207] = 2,
    ACTIONS(334), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(332), 16,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [1234] = 3,
    ACTIONS(270), 3,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
    ACTIONS(318), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(316), 13,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [1263] = 2,
    ACTIONS(310), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(308), 16,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [1290] = 2,
    ACTIONS(298), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(296), 16,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [1317] = 2,
    ACTIONS(286), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(284), 16,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [1344] = 3,
    ACTIONS(391), 1,
      anon_sym_COLON,
    ACTIONS(265), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(263), 15,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [1373] = 2,
    ACTIONS(342), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(340), 16,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [1400] = 2,
    ACTIONS(290), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(288), 16,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [1427] = 4,
    ACTIONS(393), 1,
      anon_sym_DQUOTE,
    ACTIONS(395), 1,
      aux_sym__double_quote_string_token1,
    ACTIONS(397), 1,
      sym_escape_sequence,
    STATE(76), 1,
      aux_sym__double_quote_string_repeat1,
  [1440] = 4,
    ACTIONS(399), 1,
      anon_sym_DQUOTE,
    ACTIONS(401), 1,
      aux_sym__double_quote_string_token1,
    ACTIONS(404), 1,
      sym_escape_sequence,
    STATE(76), 1,
      aux_sym__double_quote_string_repeat1,
  [1453] = 4,
    ACTIONS(395), 1,
      aux_sym__double_quote_string_token1,
    ACTIONS(397), 1,
      sym_escape_sequence,
    ACTIONS(407), 1,
      anon_sym_DQUOTE,
    STATE(75), 1,
      aux_sym__double_quote_string_repeat1,
  [1466] = 4,
    ACTIONS(395), 1,
      aux_sym__double_quote_string_token1,
    ACTIONS(397), 1,
      sym_escape_sequence,
    ACTIONS(409), 1,
      anon_sym_DQUOTE,
    STATE(79), 1,
      aux_sym__double_quote_string_repeat1,
  [1479] = 4,
    ACTIONS(395), 1,
      aux_sym__double_quote_string_token1,
    ACTIONS(397), 1,
      sym_escape_sequence,
    ACTIONS(411), 1,
      anon_sym_DQUOTE,
    STATE(76), 1,
      aux_sym__double_quote_string_repeat1,
  [1492] = 1,
    ACTIONS(413), 3,
      anon_sym_DQUOTE,
      aux_sym__double_quote_string_token1,
      sym_escape_sequence,
  [1498] = 1,
    ACTIONS(413), 3,
      anon_sym_DQUOTE,
      aux_sym__double_quote_string_token1,
      sym_escape_sequence,
  [1504] = 1,
    ACTIONS(415), 1,
      anon_sym_RPAREN,
  [1508] = 1,
    ACTIONS(417), 1,
      sym_symbol,
  [1512] = 1,
    ACTIONS(419), 1,
      ts_builtin_sym_end,
  [1516] = 1,
    ACTIONS(421), 1,
      sym_symbol,
  [1520] = 1,
    ACTIONS(423), 1,
      anon_sym_RPAREN,
  [1524] = 1,
    ACTIONS(425), 1,
      sym_symbol,
  [1528] = 1,
    ACTIONS(427), 1,
      sym_symbol,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(26)] = 0,
  [SMALL_STATE(27)] = 34,
  [SMALL_STATE(28)] = 68,
  [SMALL_STATE(29)] = 102,
  [SMALL_STATE(30)] = 136,
  [SMALL_STATE(31)] = 165,
  [SMALL_STATE(32)] = 194,
  [SMALL_STATE(33)] = 223,
  [SMALL_STATE(34)] = 252,
  [SMALL_STATE(35)] = 281,
  [SMALL_STATE(36)] = 310,
  [SMALL_STATE(37)] = 339,
  [SMALL_STATE(38)] = 368,
  [SMALL_STATE(39)] = 397,
  [SMALL_STATE(40)] = 428,
  [SMALL_STATE(41)] = 457,
  [SMALL_STATE(42)] = 486,
  [SMALL_STATE(43)] = 515,
  [SMALL_STATE(44)] = 544,
  [SMALL_STATE(45)] = 573,
  [SMALL_STATE(46)] = 602,
  [SMALL_STATE(47)] = 634,
  [SMALL_STATE(48)] = 666,
  [SMALL_STATE(49)] = 698,
  [SMALL_STATE(50)] = 730,
  [SMALL_STATE(51)] = 764,
  [SMALL_STATE(52)] = 792,
  [SMALL_STATE(53)] = 824,
  [SMALL_STATE(54)] = 856,
  [SMALL_STATE(55)] = 883,
  [SMALL_STATE(56)] = 910,
  [SMALL_STATE(57)] = 937,
  [SMALL_STATE(58)] = 964,
  [SMALL_STATE(59)] = 991,
  [SMALL_STATE(60)] = 1018,
  [SMALL_STATE(61)] = 1045,
  [SMALL_STATE(62)] = 1072,
  [SMALL_STATE(63)] = 1099,
  [SMALL_STATE(64)] = 1126,
  [SMALL_STATE(65)] = 1153,
  [SMALL_STATE(66)] = 1180,
  [SMALL_STATE(67)] = 1207,
  [SMALL_STATE(68)] = 1234,
  [SMALL_STATE(69)] = 1263,
  [SMALL_STATE(70)] = 1290,
  [SMALL_STATE(71)] = 1317,
  [SMALL_STATE(72)] = 1344,
  [SMALL_STATE(73)] = 1373,
  [SMALL_STATE(74)] = 1400,
  [SMALL_STATE(75)] = 1427,
  [SMALL_STATE(76)] = 1440,
  [SMALL_STATE(77)] = 1453,
  [SMALL_STATE(78)] = 1466,
  [SMALL_STATE(79)] = 1479,
  [SMALL_STATE(80)] = 1492,
  [SMALL_STATE(81)] = 1498,
  [SMALL_STATE(82)] = 1504,
  [SMALL_STATE(83)] = 1508,
  [SMALL_STATE(84)] = 1512,
  [SMALL_STATE(85)] = 1516,
  [SMALL_STATE(86)] = 1520,
  [SMALL_STATE(87)] = 1524,
  [SMALL_STATE(88)] = 1528,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 15), SHIFT_REPEAT(4),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 15), SHIFT_REPEAT(39),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 15), SHIFT_REPEAT(38),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 15), SHIFT_REPEAT(28),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 15), SHIFT_REPEAT(38),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 15), SHIFT_REPEAT(37),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 15), SHIFT_REPEAT(25),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 15), SHIFT_REPEAT(3),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 15), SHIFT_REPEAT(18),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 15), SHIFT_REPEAT(7),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 15),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 15), SHIFT_REPEAT(52),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 15), SHIFT_REPEAT(78),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 15), SHIFT_REPEAT(27),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat2, 2, .production_id = 15), SHIFT_REPEAT(8),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat2, 2, .production_id = 15), SHIFT_REPEAT(39),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat2, 2, .production_id = 15), SHIFT_REPEAT(38),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat2, 2, .production_id = 15), SHIFT_REPEAT(28),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_content_repeat2, 2, .production_id = 15), SHIFT_REPEAT(38),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_content_repeat2, 2, .production_id = 15), SHIFT_REPEAT(37),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat2, 2, .production_id = 15), SHIFT_REPEAT(25),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat2, 2, .production_id = 15), SHIFT_REPEAT(3),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_content_repeat2, 2, .production_id = 15),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat2, 2, .production_id = 15), SHIFT_REPEAT(18),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat2, 2, .production_id = 15), SHIFT_REPEAT(7),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_content_repeat2, 2, .production_id = 15), SHIFT_REPEAT(51),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat2, 2, .production_id = 15), SHIFT_REPEAT(78),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_content_repeat2, 2, .production_id = 15), SHIFT_REPEAT(27),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_content, 3, .production_id = 21),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_content, 2, .production_id = 13),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_content, 2, .production_id = 11),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_content, 1, .production_id = 6),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(20),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(68),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(60),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(48),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(60),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(64),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(23),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(20),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(77),
  [239] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(49),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 18),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 18),
  [260] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 18), SHIFT_REPEAT(88),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sexp, 1),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sexp, 1),
  [267] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__sexp, 1), SHIFT(88),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__special_override_symbols, 1, .production_id = 1),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__special_override_symbols, 1, .production_id = 1),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_symbol, 2, .dynamic_precedence = 2, .production_id = 9),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multi_symbol, 2, .dynamic_precedence = 2, .production_id = 9),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 2, .production_id = 5),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence, 2, .production_id = 5),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2, .production_id = 5),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2, .production_id = 5),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__colon_string, 2, .production_id = 4),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__colon_string, 2, .production_id = 4),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, .production_id = 3),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, .production_id = 3),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 17),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 17),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, .production_id = 2),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, .production_id = 2),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 2, .production_id = 5),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 2, .production_id = 5),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__special_override_symbols, 1, .dynamic_precedence = -1, .production_id = 1),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__special_override_symbols, 1, .dynamic_precedence = -1, .production_id = 1),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reader_macro_char, 1),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__reader_macro_char, 1),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string, 2, .production_id = 5),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string, 2, .production_id = 5),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reader_macro, 2, .production_id = 10),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reader_macro, 2, .production_id = 10),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3, .production_id = 12),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3, .production_id = 12),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 3, .production_id = 14),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence, 3, .production_id = 14),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 3, .production_id = 14),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 3, .production_id = 14),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string, 3, .production_id = 16),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string, 3, .production_id = 16),
  [344] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2), SHIFT_REPEAT(46),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__list_content_repeat1, 2),
  [351] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 18), SHIFT_REPEAT(87),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [358] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__sexp, 1), SHIFT(87),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_content_repeat2, 1, .production_id = 7),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__list_content_repeat2, 1, .production_id = 7),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_pair, 1, .production_id = 8),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_pair, 1, .production_id = 8),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 1, .production_id = 7),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 1, .production_id = 7),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_symbol_method, 3, .production_id = 19),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multi_symbol_method, 3, .production_id = 19),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_symbol_method, 3, .production_id = 20),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multi_symbol_method, 3, .production_id = 20),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_pair, 3, .production_id = 22),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_pair, 3, .production_id = 22),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__double_quote_string_repeat1, 2),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__double_quote_string_repeat1, 2), SHIFT_REPEAT(80),
  [404] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__double_quote_string_repeat1, 2), SHIFT_REPEAT(81),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__double_quote_string_repeat1, 1),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [419] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_fennel(void) {
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
