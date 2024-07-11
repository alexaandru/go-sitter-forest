#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 72
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 75
#define ALIAS_COUNT 0
#define TOKEN_COUNT 47
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_identifier = 1,
  sym_expression = 2,
  anon_sym_fn = 3,
  anon_sym_LPAREN_RPAREN = 4,
  sym_boolean_literal = 5,
  sym_numeric_literal = 6,
  anon_sym_U = 7,
  anon_sym_UU = 8,
  anon_sym_UUU = 9,
  anon_sym_S = 10,
  anon_sym_SS = 11,
  anon_sym_SSS = 12,
  anon_sym_F = 13,
  anon_sym_FF = 14,
  anon_sym_FFF = 15,
  anon_sym_UF = 16,
  anon_sym_SSF = 17,
  anon_sym_UFFF = 18,
  anon_sym_Int = 19,
  anon_sym_Real = 20,
  sym_bool_type = 21,
  sym_void_type = 22,
  anon_sym_CC = 23,
  anon_sym_CCC = 24,
  anon_sym_MM = 25,
  anon_sym_MMM = 26,
  anon_sym_PP = 27,
  anon_sym_PPP = 28,
  anon_sym_AA = 29,
  anon_sym_AAA = 30,
  sym_function_pointer_type = 31,
  anon_sym_LBRACK = 32,
  anon_sym_RBRACK = 33,
  anon_sym_LBRACE_RBRACE = 34,
  anon_sym_SQUOTE = 35,
  aux_sym_single_quoted_string_token1 = 36,
  anon_sym_DQUOTE = 37,
  aux_sym_double_quoted_string_token1 = 38,
  anon_sym_BQUOTE = 39,
  aux_sym_backtick_quoted_string_token1 = 40,
  sym_escape_sequence = 41,
  sym_line_continuation = 42,
  sym_comment = 43,
  sym_indent = 44,
  sym_dedent = 45,
  sym_newline = 46,
  sym_program = 47,
  sym_statement = 48,
  sym_function_definition = 49,
  sym_function_body = 50,
  sym_block = 51,
  sym_literal = 52,
  sym_string_literal = 53,
  sym_type = 54,
  sym_scalar_type = 55,
  sym_integer_type = 56,
  sym_unit_fractional_type = 57,
  sym_fixed_point_type = 58,
  sym_numeric_constant_type = 59,
  sym_quantity_type = 60,
  sym_pointer_type = 61,
  sym_address_type = 62,
  sym_array_type = 63,
  sym_typed_element_array_type = 64,
  sym_vector_type = 65,
  sym_pointer_addressable_array_type = 66,
  sym_single_quoted_string = 67,
  sym_double_quoted_string = 68,
  sym_backtick_quoted_string = 69,
  aux_sym_program_repeat1 = 70,
  aux_sym_block_repeat1 = 71,
  aux_sym_single_quoted_string_repeat1 = 72,
  aux_sym_double_quoted_string_repeat1 = 73,
  aux_sym_backtick_quoted_string_repeat1 = 74,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym_expression] = "expression",
  [anon_sym_fn] = "fn",
  [anon_sym_LPAREN_RPAREN] = "()",
  [sym_boolean_literal] = "boolean_literal",
  [sym_numeric_literal] = "numeric_literal",
  [anon_sym_U] = "U",
  [anon_sym_UU] = "UU",
  [anon_sym_UUU] = "UUU",
  [anon_sym_S] = "S",
  [anon_sym_SS] = "SS",
  [anon_sym_SSS] = "SSS",
  [anon_sym_F] = "F",
  [anon_sym_FF] = "FF",
  [anon_sym_FFF] = "FFF",
  [anon_sym_UF] = "UF",
  [anon_sym_SSF] = "SSF",
  [anon_sym_UFFF] = "UFFF",
  [anon_sym_Int] = "Int",
  [anon_sym_Real] = "Real",
  [sym_bool_type] = "bool_type",
  [sym_void_type] = "void_type",
  [anon_sym_CC] = "CC",
  [anon_sym_CCC] = "CCC",
  [anon_sym_MM] = "MM",
  [anon_sym_MMM] = "MMM",
  [anon_sym_PP] = "PP",
  [anon_sym_PPP] = "PPP",
  [anon_sym_AA] = "AA",
  [anon_sym_AAA] = "AAA",
  [sym_function_pointer_type] = "function_pointer_type",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE_RBRACE] = "{}",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_single_quoted_string_token1] = "single_quoted_string_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_double_quoted_string_token1] = "double_quoted_string_token1",
  [anon_sym_BQUOTE] = "`",
  [aux_sym_backtick_quoted_string_token1] = "backtick_quoted_string_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_line_continuation] = "line_continuation",
  [sym_comment] = "comment",
  [sym_indent] = "indent",
  [sym_dedent] = "dedent",
  [sym_newline] = "newline",
  [sym_program] = "program",
  [sym_statement] = "statement",
  [sym_function_definition] = "function_definition",
  [sym_function_body] = "function_body",
  [sym_block] = "block",
  [sym_literal] = "literal",
  [sym_string_literal] = "string_literal",
  [sym_type] = "type",
  [sym_scalar_type] = "scalar_type",
  [sym_integer_type] = "integer_type",
  [sym_unit_fractional_type] = "unit_fractional_type",
  [sym_fixed_point_type] = "fixed_point_type",
  [sym_numeric_constant_type] = "numeric_constant_type",
  [sym_quantity_type] = "quantity_type",
  [sym_pointer_type] = "pointer_type",
  [sym_address_type] = "address_type",
  [sym_array_type] = "array_type",
  [sym_typed_element_array_type] = "typed_element_array_type",
  [sym_vector_type] = "vector_type",
  [sym_pointer_addressable_array_type] = "pointer_addressable_array_type",
  [sym_single_quoted_string] = "single_quoted_string",
  [sym_double_quoted_string] = "double_quoted_string",
  [sym_backtick_quoted_string] = "backtick_quoted_string",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_single_quoted_string_repeat1] = "single_quoted_string_repeat1",
  [aux_sym_double_quoted_string_repeat1] = "double_quoted_string_repeat1",
  [aux_sym_backtick_quoted_string_repeat1] = "backtick_quoted_string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [sym_expression] = sym_expression,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_LPAREN_RPAREN] = anon_sym_LPAREN_RPAREN,
  [sym_boolean_literal] = sym_boolean_literal,
  [sym_numeric_literal] = sym_numeric_literal,
  [anon_sym_U] = anon_sym_U,
  [anon_sym_UU] = anon_sym_UU,
  [anon_sym_UUU] = anon_sym_UUU,
  [anon_sym_S] = anon_sym_S,
  [anon_sym_SS] = anon_sym_SS,
  [anon_sym_SSS] = anon_sym_SSS,
  [anon_sym_F] = anon_sym_F,
  [anon_sym_FF] = anon_sym_FF,
  [anon_sym_FFF] = anon_sym_FFF,
  [anon_sym_UF] = anon_sym_UF,
  [anon_sym_SSF] = anon_sym_SSF,
  [anon_sym_UFFF] = anon_sym_UFFF,
  [anon_sym_Int] = anon_sym_Int,
  [anon_sym_Real] = anon_sym_Real,
  [sym_bool_type] = sym_bool_type,
  [sym_void_type] = sym_void_type,
  [anon_sym_CC] = anon_sym_CC,
  [anon_sym_CCC] = anon_sym_CCC,
  [anon_sym_MM] = anon_sym_MM,
  [anon_sym_MMM] = anon_sym_MMM,
  [anon_sym_PP] = anon_sym_PP,
  [anon_sym_PPP] = anon_sym_PPP,
  [anon_sym_AA] = anon_sym_AA,
  [anon_sym_AAA] = anon_sym_AAA,
  [sym_function_pointer_type] = sym_function_pointer_type,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE_RBRACE] = anon_sym_LBRACE_RBRACE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_single_quoted_string_token1] = aux_sym_single_quoted_string_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_double_quoted_string_token1] = aux_sym_double_quoted_string_token1,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [aux_sym_backtick_quoted_string_token1] = aux_sym_backtick_quoted_string_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_line_continuation] = sym_line_continuation,
  [sym_comment] = sym_comment,
  [sym_indent] = sym_indent,
  [sym_dedent] = sym_dedent,
  [sym_newline] = sym_newline,
  [sym_program] = sym_program,
  [sym_statement] = sym_statement,
  [sym_function_definition] = sym_function_definition,
  [sym_function_body] = sym_function_body,
  [sym_block] = sym_block,
  [sym_literal] = sym_literal,
  [sym_string_literal] = sym_string_literal,
  [sym_type] = sym_type,
  [sym_scalar_type] = sym_scalar_type,
  [sym_integer_type] = sym_integer_type,
  [sym_unit_fractional_type] = sym_unit_fractional_type,
  [sym_fixed_point_type] = sym_fixed_point_type,
  [sym_numeric_constant_type] = sym_numeric_constant_type,
  [sym_quantity_type] = sym_quantity_type,
  [sym_pointer_type] = sym_pointer_type,
  [sym_address_type] = sym_address_type,
  [sym_array_type] = sym_array_type,
  [sym_typed_element_array_type] = sym_typed_element_array_type,
  [sym_vector_type] = sym_vector_type,
  [sym_pointer_addressable_array_type] = sym_pointer_addressable_array_type,
  [sym_single_quoted_string] = sym_single_quoted_string,
  [sym_double_quoted_string] = sym_double_quoted_string,
  [sym_backtick_quoted_string] = sym_backtick_quoted_string,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_single_quoted_string_repeat1] = aux_sym_single_quoted_string_repeat1,
  [aux_sym_double_quoted_string_repeat1] = aux_sym_double_quoted_string_repeat1,
  [aux_sym_backtick_quoted_string_repeat1] = aux_sym_backtick_quoted_string_repeat1,
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
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_fn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_numeric_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_U] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_UU] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_UUU] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_S] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SSS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_F] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FFF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_UF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SSF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_UFFF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Real] = {
    .visible = true,
    .named = false,
  },
  [sym_bool_type] = {
    .visible = true,
    .named = true,
  },
  [sym_void_type] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_CC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CCC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MMM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PPP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AAA] = {
    .visible = true,
    .named = false,
  },
  [sym_function_pointer_type] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_single_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_double_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_backtick_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_line_continuation] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_indent] = {
    .visible = true,
    .named = true,
  },
  [sym_dedent] = {
    .visible = true,
    .named = true,
  },
  [sym_newline] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_function_body] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_scalar_type] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_type] = {
    .visible = true,
    .named = true,
  },
  [sym_unit_fractional_type] = {
    .visible = true,
    .named = true,
  },
  [sym_fixed_point_type] = {
    .visible = true,
    .named = true,
  },
  [sym_numeric_constant_type] = {
    .visible = true,
    .named = true,
  },
  [sym_quantity_type] = {
    .visible = true,
    .named = true,
  },
  [sym_pointer_type] = {
    .visible = true,
    .named = true,
  },
  [sym_address_type] = {
    .visible = true,
    .named = true,
  },
  [sym_array_type] = {
    .visible = true,
    .named = true,
  },
  [sym_typed_element_array_type] = {
    .visible = true,
    .named = true,
  },
  [sym_vector_type] = {
    .visible = true,
    .named = true,
  },
  [sym_pointer_addressable_array_type] = {
    .visible = true,
    .named = true,
  },
  [sym_single_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_double_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_backtick_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_single_quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_double_quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_backtick_quoted_string_repeat1] = {
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
  [43] = 10,
  [44] = 11,
  [45] = 5,
  [46] = 13,
  [47] = 12,
  [48] = 48,
  [49] = 49,
  [50] = 6,
  [51] = 7,
  [52] = 8,
  [53] = 9,
  [54] = 54,
  [55] = 54,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 19,
  [63] = 20,
  [64] = 32,
  [65] = 30,
  [66] = 16,
  [67] = 29,
  [68] = 60,
  [69] = 69,
  [70] = 59,
  [71] = 61,
};

static inline bool sym_escape_sequence_character_set_1(int32_t c) {
  return (c < '`'
    ? (c < '/'
      ? (c < '\''
        ? c == '"'
        : c <= '\'')
      : (c <= '0' || c == '\\'))
    : (c <= 'b' || (c < 'r'
      ? (c < 'n'
        ? c == 'f'
        : c <= 'n')
      : (c <= 'r' || (c >= 't' && c <= 'v')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(66);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(64)
      if (lookahead == '\r') SKIP(64)
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == '$') ADVANCE(7);
      if (lookahead == '%') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(144);
      if (lookahead == '(') ADVANCE(2);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(6);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == 'A') ADVANCE(10);
      if (lookahead == 'B') ADVANCE(33);
      if (lookahead == 'C') ADVANCE(12);
      if (lookahead == 'F') ADVANCE(90);
      if (lookahead == 'I') ADVANCE(31);
      if (lookahead == 'M') ADVANCE(15);
      if (lookahead == 'P') ADVANCE(17);
      if (lookahead == 'R') ADVANCE(23);
      if (lookahead == 'S') ADVANCE(84);
      if (lookahead == 'U') ADVANCE(78);
      if (lookahead == 'V') ADVANCE(34);
      if (lookahead == '[') ADVANCE(127);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == ']') ADVANCE(128);
      if (lookahead == '`') ADVANCE(158);
      if (lookahead == 'f') ADVANCE(19);
      if (lookahead == 't') ADVANCE(38);
      if (lookahead == '{') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (('D' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(166);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(69);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(168);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(167);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(74);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(40);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(123);
      END_STATE();
    case 12:
      if (lookahead == 'C') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 13:
      if (lookahead == 'C') ADVANCE(111);
      END_STATE();
    case 14:
      if (lookahead == 'F') ADVANCE(100);
      END_STATE();
    case 15:
      if (lookahead == 'M') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 16:
      if (lookahead == 'M') ADVANCE(115);
      END_STATE();
    case 17:
      if (lookahead == 'P') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 18:
      if (lookahead == 'P') ADVANCE(119);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(136);
      if (lookahead == 'n') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(108);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(104);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 33:
      if (lookahead == 'o') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 34:
      if (lookahead == 'o') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 35:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 36:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 37:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 40:
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 41:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 44:
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 45:
      if (lookahead == '}') ADVANCE(129);
      END_STATE();
    case 46:
      if (!eof && (lookahead == 0 ||
          lookahead == '\n')) ADVANCE(166);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 47:
      if (!eof && (lookahead == 0 ||
          lookahead == '\n')) ADVANCE(166);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'U') ADVANCE(62);
      if (lookahead == 'u') ADVANCE(58);
      if (lookahead == 'x') ADVANCE(56);
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(165);
      END_STATE();
    case 48:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(75);
      END_STATE();
    case 49:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(149);
      if (lookahead == '\r') ADVANCE(149);
      if (lookahead == '\'') ADVANCE(144);
      if (lookahead == '/') ADVANCE(145);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead != 0) ADVANCE(150);
      END_STATE();
    case 50:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(50)
      if (lookahead == '\r') SKIP(50)
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 51:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(163);
      if (lookahead == '\r') ADVANCE(163);
      if (lookahead == '/') ADVANCE(159);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == '`') ADVANCE(158);
      if (lookahead != 0) ADVANCE(164);
      END_STATE();
    case 52:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(156);
      if (lookahead == '\r') ADVANCE(156);
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == '/') ADVANCE(152);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(165);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(54);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(58);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 64:
      if (eof) ADVANCE(66);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(64)
      if (lookahead == '\r') SKIP(64)
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == '$') ADVANCE(7);
      if (lookahead == '%') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(144);
      if (lookahead == '(') ADVANCE(2);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(6);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == 'A') ADVANCE(10);
      if (lookahead == 'B') ADVANCE(33);
      if (lookahead == 'C') ADVANCE(12);
      if (lookahead == 'F') ADVANCE(90);
      if (lookahead == 'I') ADVANCE(31);
      if (lookahead == 'M') ADVANCE(15);
      if (lookahead == 'P') ADVANCE(17);
      if (lookahead == 'R') ADVANCE(23);
      if (lookahead == 'S') ADVANCE(84);
      if (lookahead == 'U') ADVANCE(78);
      if (lookahead == 'V') ADVANCE(34);
      if (lookahead == '[') ADVANCE(127);
      if (lookahead == '\\') ADVANCE(46);
      if (lookahead == ']') ADVANCE(128);
      if (lookahead == '`') ADVANCE(158);
      if (lookahead == 'f') ADVANCE(19);
      if (lookahead == 't') ADVANCE(38);
      if (lookahead == '{') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (('D' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 65:
      if (eof) ADVANCE(66);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(65)
      if (lookahead == '\r') SKIP(65)
      if (lookahead == '"') ADVANCE(151);
      if (lookahead == '$') ADVANCE(7);
      if (lookahead == '%') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(144);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(6);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == 'A') ADVANCE(11);
      if (lookahead == 'B') ADVANCE(37);
      if (lookahead == 'C') ADVANCE(13);
      if (lookahead == 'F') ADVANCE(91);
      if (lookahead == 'I') ADVANCE(32);
      if (lookahead == 'M') ADVANCE(16);
      if (lookahead == 'P') ADVANCE(18);
      if (lookahead == 'R') ADVANCE(25);
      if (lookahead == 'S') ADVANCE(85);
      if (lookahead == 'U') ADVANCE(79);
      if (lookahead == 'V') ADVANCE(35);
      if (lookahead == '[') ADVANCE(127);
      if (lookahead == '\\') ADVANCE(46);
      if (lookahead == '`') ADVANCE(158);
      if (lookahead == 'f') ADVANCE(20);
      if (lookahead == 't') ADVANCE(39);
      if (lookahead == '{') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_fn);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_boolean_literal);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_boolean_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_numeric_literal);
      if (lookahead == '.') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_numeric_literal);
      if (lookahead == '.') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_numeric_literal);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_numeric_literal);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_numeric_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_numeric_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_U);
      if (lookahead == 'F') ADVANCE(96);
      if (lookahead == 'U') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_U);
      if (lookahead == 'F') ADVANCE(97);
      if (lookahead == 'U') ADVANCE(81);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_UU);
      if (lookahead == 'U') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_UU);
      if (lookahead == 'U') ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_UUU);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_UUU);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_S);
      if (lookahead == 'S') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_S);
      if (lookahead == 'S') ADVANCE(87);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_SS);
      if (lookahead == 'F') ADVANCE(99);
      if (lookahead == 'S') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_SS);
      if (lookahead == 'F') ADVANCE(98);
      if (lookahead == 'S') ADVANCE(88);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_SSS);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_SSS);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_F);
      if (lookahead == 'F') ADVANCE(92);
      if (lookahead == 'n') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_F);
      if (lookahead == 'F') ADVANCE(93);
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == 'F') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == 'F') ADVANCE(94);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_FFF);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_FFF);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_UF);
      if (lookahead == 'F') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_UF);
      if (lookahead == 'F') ADVANCE(14);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_SSF);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_SSF);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_UFFF);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_UFFF);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_Int);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_Int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_Real);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_Real);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_bool_type);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_bool_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_void_type);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_void_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_CC);
      if (lookahead == 'C') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_CC);
      if (lookahead == 'C') ADVANCE(112);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_CCC);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_CCC);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_MM);
      if (lookahead == 'M') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_MM);
      if (lookahead == 'M') ADVANCE(116);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_MMM);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_MMM);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_PP);
      if (lookahead == 'P') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_PP);
      if (lookahead == 'P') ADVANCE(120);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_PPP);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_PPP);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_AA);
      if (lookahead == 'A') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_AA);
      if (lookahead == 'A') ADVANCE(124);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_AAA);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_AAA);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_function_pointer_type);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_LBRACE_RBRACE);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '*') ADVANCE(147);
      if (lookahead == '/') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(150);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '/') ADVANCE(150);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(5);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(5);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(168);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(150);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(149);
      if (lookahead == '\r') ADVANCE(149);
      if (lookahead == '/') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(150);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '*') ADVANCE(154);
      if (lookahead == '/') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(157);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '*') ADVANCE(153);
      if (lookahead == '/') ADVANCE(157);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(5);
      if (lookahead != 0) ADVANCE(154);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '*') ADVANCE(153);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(5);
      if (lookahead != 0) ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(168);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(157);
      if (lookahead != 0) ADVANCE(155);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(156);
      if (lookahead == '\r') ADVANCE(156);
      if (lookahead == '/') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(157);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_backtick_quoted_string_token1);
      if (lookahead == '*') ADVANCE(161);
      if (lookahead == '/') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(164);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_backtick_quoted_string_token1);
      if (lookahead == '*') ADVANCE(160);
      if (lookahead == '/') ADVANCE(164);
      if (lookahead == '\\' ||
          lookahead == '`') ADVANCE(5);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_backtick_quoted_string_token1);
      if (lookahead == '*') ADVANCE(160);
      if (lookahead == '\\' ||
          lookahead == '`') ADVANCE(5);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_backtick_quoted_string_token1);
      if (lookahead == '\\' ||
          lookahead == '`') ADVANCE(168);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(164);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_backtick_quoted_string_token1);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(163);
      if (lookahead == '\r') ADVANCE(163);
      if (lookahead == '/') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(164);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_backtick_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_line_continuation);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != 8232 &&
          lookahead != 8233) ADVANCE(168);
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
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '\r') SKIP(0)
      if (lookahead == 'e') ADVANCE(1);
      END_STATE();
    case 1:
      if (lookahead == 'x') ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == 'p') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == 'r') ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == 's') ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == 's') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == 'i') ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == 'o') ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_expression);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 65},
  [2] = {.lex_state = 65},
  [3] = {.lex_state = 65},
  [4] = {.lex_state = 65},
  [5] = {.lex_state = 65},
  [6] = {.lex_state = 65},
  [7] = {.lex_state = 65},
  [8] = {.lex_state = 65},
  [9] = {.lex_state = 65},
  [10] = {.lex_state = 65},
  [11] = {.lex_state = 65},
  [12] = {.lex_state = 65},
  [13] = {.lex_state = 65},
  [14] = {.lex_state = 65},
  [15] = {.lex_state = 65},
  [16] = {.lex_state = 65},
  [17] = {.lex_state = 65},
  [18] = {.lex_state = 65},
  [19] = {.lex_state = 65},
  [20] = {.lex_state = 65},
  [21] = {.lex_state = 65},
  [22] = {.lex_state = 65},
  [23] = {.lex_state = 65},
  [24] = {.lex_state = 65},
  [25] = {.lex_state = 65},
  [26] = {.lex_state = 65},
  [27] = {.lex_state = 65},
  [28] = {.lex_state = 65},
  [29] = {.lex_state = 65},
  [30] = {.lex_state = 65},
  [31] = {.lex_state = 65},
  [32] = {.lex_state = 65},
  [33] = {.lex_state = 49},
  [34] = {.lex_state = 50, .external_lex_state = 2},
  [35] = {.lex_state = 51},
  [36] = {.lex_state = 52},
  [37] = {.lex_state = 49},
  [38] = {.lex_state = 49},
  [39] = {.lex_state = 52},
  [40] = {.lex_state = 52},
  [41] = {.lex_state = 51},
  [42] = {.lex_state = 51},
  [43] = {.lex_state = 0, .external_lex_state = 3},
  [44] = {.lex_state = 0, .external_lex_state = 3},
  [45] = {.lex_state = 0, .external_lex_state = 3},
  [46] = {.lex_state = 0, .external_lex_state = 3},
  [47] = {.lex_state = 0, .external_lex_state = 3},
  [48] = {.lex_state = 50, .external_lex_state = 2},
  [49] = {.lex_state = 50, .external_lex_state = 2},
  [50] = {.lex_state = 0, .external_lex_state = 3},
  [51] = {.lex_state = 0, .external_lex_state = 3},
  [52] = {.lex_state = 0, .external_lex_state = 3},
  [53] = {.lex_state = 0, .external_lex_state = 3},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0, .external_lex_state = 3},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 50},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0, .external_lex_state = 3},
  [63] = {.lex_state = 0, .external_lex_state = 3},
  [64] = {.lex_state = 0, .external_lex_state = 3},
  [65] = {.lex_state = 0, .external_lex_state = 3},
  [66] = {.lex_state = 0, .external_lex_state = 3},
  [67] = {.lex_state = 0, .external_lex_state = 3},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_expression] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(1),
    [sym_boolean_literal] = ACTIONS(1),
    [sym_numeric_literal] = ACTIONS(1),
    [anon_sym_U] = ACTIONS(1),
    [anon_sym_UU] = ACTIONS(1),
    [anon_sym_UUU] = ACTIONS(1),
    [anon_sym_S] = ACTIONS(1),
    [anon_sym_SS] = ACTIONS(1),
    [anon_sym_SSS] = ACTIONS(1),
    [anon_sym_F] = ACTIONS(1),
    [anon_sym_FF] = ACTIONS(1),
    [anon_sym_FFF] = ACTIONS(1),
    [anon_sym_UF] = ACTIONS(1),
    [anon_sym_SSF] = ACTIONS(1),
    [anon_sym_UFFF] = ACTIONS(1),
    [anon_sym_Int] = ACTIONS(1),
    [anon_sym_Real] = ACTIONS(1),
    [sym_bool_type] = ACTIONS(1),
    [sym_void_type] = ACTIONS(1),
    [anon_sym_CC] = ACTIONS(1),
    [anon_sym_CCC] = ACTIONS(1),
    [anon_sym_MM] = ACTIONS(1),
    [anon_sym_MMM] = ACTIONS(1),
    [anon_sym_PP] = ACTIONS(1),
    [anon_sym_PPP] = ACTIONS(1),
    [anon_sym_AA] = ACTIONS(1),
    [anon_sym_AAA] = ACTIONS(1),
    [sym_function_pointer_type] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_line_continuation] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_indent] = ACTIONS(1),
    [sym_dedent] = ACTIONS(1),
    [sym_newline] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(69),
    [sym_statement] = STATE(3),
    [sym_function_definition] = STATE(18),
    [sym_literal] = STATE(18),
    [sym_string_literal] = STATE(28),
    [sym_type] = STATE(18),
    [sym_scalar_type] = STATE(5),
    [sym_integer_type] = STATE(10),
    [sym_unit_fractional_type] = STATE(10),
    [sym_fixed_point_type] = STATE(10),
    [sym_numeric_constant_type] = STATE(10),
    [sym_quantity_type] = STATE(5),
    [sym_pointer_type] = STATE(13),
    [sym_address_type] = STATE(13),
    [sym_array_type] = STATE(19),
    [sym_typed_element_array_type] = STATE(20),
    [sym_vector_type] = STATE(20),
    [sym_pointer_addressable_array_type] = STATE(20),
    [sym_single_quoted_string] = STATE(21),
    [sym_double_quoted_string] = STATE(21),
    [sym_backtick_quoted_string] = STATE(21),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_fn] = ACTIONS(7),
    [sym_boolean_literal] = ACTIONS(9),
    [sym_numeric_literal] = ACTIONS(9),
    [anon_sym_U] = ACTIONS(11),
    [anon_sym_UU] = ACTIONS(11),
    [anon_sym_UUU] = ACTIONS(13),
    [anon_sym_S] = ACTIONS(11),
    [anon_sym_SS] = ACTIONS(11),
    [anon_sym_SSS] = ACTIONS(13),
    [anon_sym_F] = ACTIONS(15),
    [anon_sym_FF] = ACTIONS(15),
    [anon_sym_FFF] = ACTIONS(17),
    [anon_sym_UF] = ACTIONS(19),
    [anon_sym_SSF] = ACTIONS(21),
    [anon_sym_UFFF] = ACTIONS(21),
    [anon_sym_Int] = ACTIONS(23),
    [anon_sym_Real] = ACTIONS(23),
    [sym_bool_type] = ACTIONS(25),
    [sym_void_type] = ACTIONS(25),
    [anon_sym_CC] = ACTIONS(27),
    [anon_sym_CCC] = ACTIONS(29),
    [anon_sym_MM] = ACTIONS(27),
    [anon_sym_MMM] = ACTIONS(29),
    [anon_sym_PP] = ACTIONS(27),
    [anon_sym_PPP] = ACTIONS(29),
    [anon_sym_AA] = ACTIONS(31),
    [anon_sym_AAA] = ACTIONS(33),
    [sym_function_pointer_type] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [sym_line_continuation] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_statement] = STATE(2),
    [sym_function_definition] = STATE(18),
    [sym_literal] = STATE(18),
    [sym_string_literal] = STATE(28),
    [sym_type] = STATE(18),
    [sym_scalar_type] = STATE(5),
    [sym_integer_type] = STATE(10),
    [sym_unit_fractional_type] = STATE(10),
    [sym_fixed_point_type] = STATE(10),
    [sym_numeric_constant_type] = STATE(10),
    [sym_quantity_type] = STATE(5),
    [sym_pointer_type] = STATE(13),
    [sym_address_type] = STATE(13),
    [sym_array_type] = STATE(19),
    [sym_typed_element_array_type] = STATE(20),
    [sym_vector_type] = STATE(20),
    [sym_pointer_addressable_array_type] = STATE(20),
    [sym_single_quoted_string] = STATE(21),
    [sym_double_quoted_string] = STATE(21),
    [sym_backtick_quoted_string] = STATE(21),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(45),
    [anon_sym_fn] = ACTIONS(47),
    [sym_boolean_literal] = ACTIONS(50),
    [sym_numeric_literal] = ACTIONS(50),
    [anon_sym_U] = ACTIONS(53),
    [anon_sym_UU] = ACTIONS(53),
    [anon_sym_UUU] = ACTIONS(56),
    [anon_sym_S] = ACTIONS(53),
    [anon_sym_SS] = ACTIONS(53),
    [anon_sym_SSS] = ACTIONS(56),
    [anon_sym_F] = ACTIONS(59),
    [anon_sym_FF] = ACTIONS(59),
    [anon_sym_FFF] = ACTIONS(62),
    [anon_sym_UF] = ACTIONS(65),
    [anon_sym_SSF] = ACTIONS(68),
    [anon_sym_UFFF] = ACTIONS(68),
    [anon_sym_Int] = ACTIONS(71),
    [anon_sym_Real] = ACTIONS(71),
    [sym_bool_type] = ACTIONS(74),
    [sym_void_type] = ACTIONS(74),
    [anon_sym_CC] = ACTIONS(77),
    [anon_sym_CCC] = ACTIONS(80),
    [anon_sym_MM] = ACTIONS(77),
    [anon_sym_MMM] = ACTIONS(80),
    [anon_sym_PP] = ACTIONS(77),
    [anon_sym_PPP] = ACTIONS(80),
    [anon_sym_AA] = ACTIONS(83),
    [anon_sym_AAA] = ACTIONS(86),
    [sym_function_pointer_type] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(92),
    [anon_sym_SQUOTE] = ACTIONS(95),
    [anon_sym_DQUOTE] = ACTIONS(98),
    [anon_sym_BQUOTE] = ACTIONS(101),
    [sym_line_continuation] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_statement] = STATE(2),
    [sym_function_definition] = STATE(18),
    [sym_literal] = STATE(18),
    [sym_string_literal] = STATE(28),
    [sym_type] = STATE(18),
    [sym_scalar_type] = STATE(5),
    [sym_integer_type] = STATE(10),
    [sym_unit_fractional_type] = STATE(10),
    [sym_fixed_point_type] = STATE(10),
    [sym_numeric_constant_type] = STATE(10),
    [sym_quantity_type] = STATE(5),
    [sym_pointer_type] = STATE(13),
    [sym_address_type] = STATE(13),
    [sym_array_type] = STATE(19),
    [sym_typed_element_array_type] = STATE(20),
    [sym_vector_type] = STATE(20),
    [sym_pointer_addressable_array_type] = STATE(20),
    [sym_single_quoted_string] = STATE(21),
    [sym_double_quoted_string] = STATE(21),
    [sym_backtick_quoted_string] = STATE(21),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(104),
    [anon_sym_fn] = ACTIONS(7),
    [sym_boolean_literal] = ACTIONS(9),
    [sym_numeric_literal] = ACTIONS(9),
    [anon_sym_U] = ACTIONS(11),
    [anon_sym_UU] = ACTIONS(11),
    [anon_sym_UUU] = ACTIONS(13),
    [anon_sym_S] = ACTIONS(11),
    [anon_sym_SS] = ACTIONS(11),
    [anon_sym_SSS] = ACTIONS(13),
    [anon_sym_F] = ACTIONS(15),
    [anon_sym_FF] = ACTIONS(15),
    [anon_sym_FFF] = ACTIONS(17),
    [anon_sym_UF] = ACTIONS(19),
    [anon_sym_SSF] = ACTIONS(21),
    [anon_sym_UFFF] = ACTIONS(21),
    [anon_sym_Int] = ACTIONS(23),
    [anon_sym_Real] = ACTIONS(23),
    [sym_bool_type] = ACTIONS(25),
    [sym_void_type] = ACTIONS(25),
    [anon_sym_CC] = ACTIONS(27),
    [anon_sym_CCC] = ACTIONS(29),
    [anon_sym_MM] = ACTIONS(27),
    [anon_sym_MMM] = ACTIONS(29),
    [anon_sym_PP] = ACTIONS(27),
    [anon_sym_PPP] = ACTIONS(29),
    [anon_sym_AA] = ACTIONS(31),
    [anon_sym_AAA] = ACTIONS(33),
    [sym_function_pointer_type] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [sym_line_continuation] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_type] = STATE(56),
    [sym_scalar_type] = STATE(45),
    [sym_integer_type] = STATE(43),
    [sym_unit_fractional_type] = STATE(43),
    [sym_fixed_point_type] = STATE(43),
    [sym_numeric_constant_type] = STATE(43),
    [sym_quantity_type] = STATE(45),
    [sym_pointer_type] = STATE(46),
    [sym_address_type] = STATE(46),
    [sym_array_type] = STATE(62),
    [sym_typed_element_array_type] = STATE(63),
    [sym_vector_type] = STATE(63),
    [sym_pointer_addressable_array_type] = STATE(63),
    [anon_sym_U] = ACTIONS(106),
    [anon_sym_UU] = ACTIONS(106),
    [anon_sym_UUU] = ACTIONS(108),
    [anon_sym_S] = ACTIONS(106),
    [anon_sym_SS] = ACTIONS(106),
    [anon_sym_SSS] = ACTIONS(108),
    [anon_sym_F] = ACTIONS(110),
    [anon_sym_FF] = ACTIONS(110),
    [anon_sym_FFF] = ACTIONS(112),
    [anon_sym_UF] = ACTIONS(114),
    [anon_sym_SSF] = ACTIONS(116),
    [anon_sym_UFFF] = ACTIONS(116),
    [anon_sym_Int] = ACTIONS(118),
    [anon_sym_Real] = ACTIONS(118),
    [sym_bool_type] = ACTIONS(120),
    [sym_void_type] = ACTIONS(120),
    [anon_sym_CC] = ACTIONS(122),
    [anon_sym_CCC] = ACTIONS(124),
    [anon_sym_MM] = ACTIONS(122),
    [anon_sym_MMM] = ACTIONS(124),
    [anon_sym_PP] = ACTIONS(122),
    [anon_sym_PPP] = ACTIONS(124),
    [anon_sym_AA] = ACTIONS(126),
    [anon_sym_AAA] = ACTIONS(128),
    [sym_function_pointer_type] = ACTIONS(130),
    [anon_sym_LBRACK] = ACTIONS(132),
    [sym_line_continuation] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(138), 1,
      anon_sym_LBRACK,
    ACTIONS(140), 1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(136), 11,
      anon_sym_U,
      anon_sym_UU,
      anon_sym_S,
      anon_sym_SS,
      anon_sym_F,
      anon_sym_FF,
      anon_sym_UF,
      anon_sym_CC,
      anon_sym_MM,
      anon_sym_PP,
      anon_sym_AA,
    ACTIONS(134), 21,
      ts_builtin_sym_end,
      anon_sym_fn,
      sym_boolean_literal,
      sym_numeric_literal,
      anon_sym_UUU,
      anon_sym_SSS,
      anon_sym_FFF,
      anon_sym_SSF,
      anon_sym_UFFF,
      anon_sym_Int,
      anon_sym_Real,
      sym_bool_type,
      sym_void_type,
      anon_sym_CCC,
      anon_sym_MMM,
      anon_sym_PPP,
      anon_sym_AAA,
      sym_function_pointer_type,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [47] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(144), 11,
      anon_sym_U,
      anon_sym_UU,
      anon_sym_S,
      anon_sym_SS,
      anon_sym_F,
      anon_sym_FF,
      anon_sym_UF,
      anon_sym_CC,
      anon_sym_MM,
      anon_sym_PP,
      anon_sym_AA,
    ACTIONS(142), 23,
      ts_builtin_sym_end,
      anon_sym_fn,
      sym_boolean_literal,
      sym_numeric_literal,
      anon_sym_UUU,
      anon_sym_SSS,
      anon_sym_FFF,
      anon_sym_SSF,
      anon_sym_UFFF,
      anon_sym_Int,
      anon_sym_Real,
      sym_bool_type,
      sym_void_type,
      anon_sym_CCC,
      anon_sym_MMM,
      anon_sym_PPP,
      anon_sym_AAA,
      sym_function_pointer_type,
      anon_sym_LBRACK,
      anon_sym_LBRACE_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [90] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(148), 11,
      anon_sym_U,
      anon_sym_UU,
      anon_sym_S,
      anon_sym_SS,
      anon_sym_F,
      anon_sym_FF,
      anon_sym_UF,
      anon_sym_CC,
      anon_sym_MM,
      anon_sym_PP,
      anon_sym_AA,
    ACTIONS(146), 23,
      ts_builtin_sym_end,
      anon_sym_fn,
      sym_boolean_literal,
      sym_numeric_literal,
      anon_sym_UUU,
      anon_sym_SSS,
      anon_sym_FFF,
      anon_sym_SSF,
      anon_sym_UFFF,
      anon_sym_Int,
      anon_sym_Real,
      sym_bool_type,
      sym_void_type,
      anon_sym_CCC,
      anon_sym_MMM,
      anon_sym_PPP,
      anon_sym_AAA,
      sym_function_pointer_type,
      anon_sym_LBRACK,
      anon_sym_LBRACE_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [133] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(152), 11,
      anon_sym_U,
      anon_sym_UU,
      anon_sym_S,
      anon_sym_SS,
      anon_sym_F,
      anon_sym_FF,
      anon_sym_UF,
      anon_sym_CC,
      anon_sym_MM,
      anon_sym_PP,
      anon_sym_AA,
    ACTIONS(150), 23,
      ts_builtin_sym_end,
      anon_sym_fn,
      sym_boolean_literal,
      sym_numeric_literal,
      anon_sym_UUU,
      anon_sym_SSS,
      anon_sym_FFF,
      anon_sym_SSF,
      anon_sym_UFFF,
      anon_sym_Int,
      anon_sym_Real,
      sym_bool_type,
      sym_void_type,
      anon_sym_CCC,
      anon_sym_MMM,
      anon_sym_PPP,
      anon_sym_AAA,
      sym_function_pointer_type,
      anon_sym_LBRACK,
      anon_sym_LBRACE_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [176] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(156), 11,
      anon_sym_U,
      anon_sym_UU,
      anon_sym_S,
      anon_sym_SS,
      anon_sym_F,
      anon_sym_FF,
      anon_sym_UF,
      anon_sym_CC,
      anon_sym_MM,
      anon_sym_PP,
      anon_sym_AA,
    ACTIONS(154), 23,
      ts_builtin_sym_end,
      anon_sym_fn,
      sym_boolean_literal,
      sym_numeric_literal,
      anon_sym_UUU,
      anon_sym_SSS,
      anon_sym_FFF,
      anon_sym_SSF,
      anon_sym_UFFF,
      anon_sym_Int,
      anon_sym_Real,
      sym_bool_type,
      sym_void_type,
      anon_sym_CCC,
      anon_sym_MMM,
      anon_sym_PPP,
      anon_sym_AAA,
      sym_function_pointer_type,
      anon_sym_LBRACK,
      anon_sym_LBRACE_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [219] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(160), 11,
      anon_sym_U,
      anon_sym_UU,
      anon_sym_S,
      anon_sym_SS,
      anon_sym_F,
      anon_sym_FF,
      anon_sym_UF,
      anon_sym_CC,
      anon_sym_MM,
      anon_sym_PP,
      anon_sym_AA,
    ACTIONS(158), 23,
      ts_builtin_sym_end,
      anon_sym_fn,
      sym_boolean_literal,
      sym_numeric_literal,
      anon_sym_UUU,
      anon_sym_SSS,
      anon_sym_FFF,
      anon_sym_SSF,
      anon_sym_UFFF,
      anon_sym_Int,
      anon_sym_Real,
      sym_bool_type,
      sym_void_type,
      anon_sym_CCC,
      anon_sym_MMM,
      anon_sym_PPP,
      anon_sym_AAA,
      sym_function_pointer_type,
      anon_sym_LBRACK,
      anon_sym_LBRACE_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [262] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(164), 11,
      anon_sym_U,
      anon_sym_UU,
      anon_sym_S,
      anon_sym_SS,
      anon_sym_F,
      anon_sym_FF,
      anon_sym_UF,
      anon_sym_CC,
      anon_sym_MM,
      anon_sym_PP,
      anon_sym_AA,
    ACTIONS(162), 23,
      ts_builtin_sym_end,
      anon_sym_fn,
      sym_boolean_literal,
      sym_numeric_literal,
      anon_sym_UUU,
      anon_sym_SSS,
      anon_sym_FFF,
      anon_sym_SSF,
      anon_sym_UFFF,
      anon_sym_Int,
      anon_sym_Real,
      sym_bool_type,
      sym_void_type,
      anon_sym_CCC,
      anon_sym_MMM,
      anon_sym_PPP,
      anon_sym_AAA,
      sym_function_pointer_type,
      anon_sym_LBRACK,
      anon_sym_LBRACE_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [305] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(168), 11,
      anon_sym_U,
      anon_sym_UU,
      anon_sym_S,
      anon_sym_SS,
      anon_sym_F,
      anon_sym_FF,
      anon_sym_UF,
      anon_sym_CC,
      anon_sym_MM,
      anon_sym_PP,
      anon_sym_AA,
    ACTIONS(166), 23,
      ts_builtin_sym_end,
      anon_sym_fn,
      sym_boolean_literal,
      sym_numeric_literal,
      anon_sym_UUU,
      anon_sym_SSS,
      anon_sym_FFF,
      anon_sym_SSF,
      anon_sym_UFFF,
      anon_sym_Int,
      anon_sym_Real,
      sym_bool_type,
      sym_void_type,
      anon_sym_CCC,
      anon_sym_MMM,
      anon_sym_PPP,
      anon_sym_AAA,
      sym_function_pointer_type,
      anon_sym_LBRACK,
      anon_sym_LBRACE_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [348] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(172), 11,
      anon_sym_U,
      anon_sym_UU,
      anon_sym_S,
      anon_sym_SS,
      anon_sym_F,
      anon_sym_FF,
      anon_sym_UF,
      anon_sym_CC,
      anon_sym_MM,
      anon_sym_PP,
      anon_sym_AA,
    ACTIONS(170), 23,
      ts_builtin_sym_end,
      anon_sym_fn,
      sym_boolean_literal,
      sym_numeric_literal,
      anon_sym_UUU,
      anon_sym_SSS,
      anon_sym_FFF,
      anon_sym_SSF,
      anon_sym_UFFF,
      anon_sym_Int,
      anon_sym_Real,
      sym_bool_type,
      sym_void_type,
      anon_sym_CCC,
      anon_sym_MMM,
      anon_sym_PPP,
      anon_sym_AAA,
      sym_function_pointer_type,
      anon_sym_LBRACK,
      anon_sym_LBRACE_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [391] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(176), 11,
      anon_sym_U,
      anon_sym_UU,
      anon_sym_S,
      anon_sym_SS,
      anon_sym_F,
      anon_sym_FF,
      anon_sym_UF,
      anon_sym_CC,
      anon_sym_MM,
      anon_sym_PP,
      anon_sym_AA,
    ACTIONS(174), 22,
      ts_builtin_sym_end,
      anon_sym_fn,
      sym_boolean_literal,
      sym_numeric_literal,
      anon_sym_UUU,
      anon_sym_SSS,
      anon_sym_FFF,
      anon_sym_SSF,
      anon_sym_UFFF,
      anon_sym_Int,
      anon_sym_Real,
      sym_bool_type,
      sym_void_type,
      anon_sym_CCC,
      anon_sym_MMM,
      anon_sym_PPP,
      anon_sym_AAA,
      sym_function_pointer_type,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [433] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(180), 11,
      anon_sym_U,
      anon_sym_UU,
      anon_sym_S,
      anon_sym_SS,
      anon_sym_F,
      anon_sym_FF,
      anon_sym_UF,
      anon_sym_CC,
      anon_sym_MM,
      anon_sym_PP,
      anon_sym_AA,
    ACTIONS(178), 22,
      ts_builtin_sym_end,
      anon_sym_fn,
      sym_boolean_literal,
      sym_numeric_literal,
      anon_sym_UUU,
      anon_sym_SSS,
      anon_sym_FFF,
      anon_sym_SSF,
      anon_sym_UFFF,
      anon_sym_Int,
      anon_sym_Real,
      sym_bool_type,
      sym_void_type,
      anon_sym_CCC,
      anon_sym_MMM,
      anon_sym_PPP,
      anon_sym_AAA,
      sym_function_pointer_type,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [475] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(184), 11,
      anon_sym_U,
      anon_sym_UU,
      anon_sym_S,
      anon_sym_SS,
      anon_sym_F,
      anon_sym_FF,
      anon_sym_UF,
      anon_sym_CC,
      anon_sym_MM,
      anon_sym_PP,
      anon_sym_AA,
    ACTIONS(182), 22,
      ts_builtin_sym_end,
      anon_sym_fn,
      sym_boolean_literal,
      sym_numeric_literal,
      anon_sym_UUU,
      anon_sym_SSS,
      anon_sym_FFF,
      anon_sym_SSF,
      anon_sym_UFFF,
      anon_sym_Int,
      anon_sym_Real,
      sym_bool_type,
      sym_void_type,
      anon_sym_CCC,
      anon_sym_MMM,
      anon_sym_PPP,
      anon_sym_AAA,
      sym_function_pointer_type,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [517] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(188), 11,
      anon_sym_U,
      anon_sym_UU,
      anon_sym_S,
      anon_sym_SS,
      anon_sym_F,
      anon_sym_FF,
      anon_sym_UF,
      anon_sym_CC,
      anon_sym_MM,
      anon_sym_PP,
      anon_sym_AA,
    ACTIONS(186), 22,
      ts_builtin_sym_end,
      anon_sym_fn,
      sym_boolean_literal,
      sym_numeric_literal,
      anon_sym_UUU,
      anon_sym_SSS,
      anon_sym_FFF,
      anon_sym_SSF,
      anon_sym_UFFF,
      anon_sym_Int,
      anon_sym_Real,
      sym_bool_type,
      sym_void_type,
      anon_sym_CCC,
      anon_sym_MMM,
      anon_sym_PPP,
      anon_sym_AAA,
      sym_function_pointer_type,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [559] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(192), 11,
      anon_sym_U,
      anon_sym_UU,
      anon_sym_S,
      anon_sym_SS,
      anon_sym_F,
      anon_sym_FF,
      anon_sym_UF,
      anon_sym_CC,
      anon_sym_MM,
      anon_sym_PP,
      anon_sym_AA,
    ACTIONS(190), 22,
      ts_builtin_sym_end,
      anon_sym_fn,
      sym_boolean_literal,
      sym_numeric_literal,
      anon_sym_UUU,
      anon_sym_SSS,
      anon_sym_FFF,
      anon_sym_SSF,
      anon_sym_UFFF,
      anon_sym_Int,
      anon_sym_Real,
      sym_bool_type,
      sym_void_type,
      anon_sym_CCC,
      anon_sym_MMM,
      anon_sym_PPP,
      anon_sym_AAA,
      sym_function_pointer_type,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [601] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(136), 11,
      anon_sym_U,
      anon_sym_UU,
      anon_sym_S,
      anon_sym_SS,
      anon_sym_F,
      anon_sym_FF,
      anon_sym_UF,
      anon_sym_CC,
      anon_sym_MM,
      anon_sym_PP,
      anon_sym_AA,
    ACTIONS(134), 22,
      ts_builtin_sym_end,
      anon_sym_fn,
      sym_boolean_literal,
      sym_numeric_literal,
      anon_sym_UUU,
      anon_sym_SSS,
      anon_sym_FFF,
      anon_sym_SSF,
      anon_sym_UFFF,
      anon_sym_Int,
      anon_sym_Real,
      sym_bool_type,
      sym_void_type,
      anon_sym_CCC,
      anon_sym_MMM,
      anon_sym_PPP,
      anon_sym_AAA,
      sym_function_pointer_type,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [643] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(196), 11,
      anon_sym_U,
      anon_sym_UU,
      anon_sym_S,
      anon_sym_SS,
      anon_sym_F,
      anon_sym_FF,
      anon_sym_UF,
      anon_sym_CC,
      anon_sym_MM,
      anon_sym_PP,
      anon_sym_AA,
    ACTIONS(194), 22,
      ts_builtin_sym_end,
      anon_sym_fn,
      sym_boolean_literal,
      sym_numeric_literal,
      anon_sym_UUU,
      anon_sym_SSS,
      anon_sym_FFF,
      anon_sym_SSF,
      anon_sym_UFFF,
      anon_sym_Int,
      anon_sym_Real,
      sym_bool_type,
      sym_void_type,
      anon_sym_CCC,
      anon_sym_MMM,
      anon_sym_PPP,
      anon_sym_AAA,
      sym_function_pointer_type,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [685] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(200), 11,
      anon_sym_U,
      anon_sym_UU,
      anon_sym_S,
      anon_sym_SS,
      anon_sym_F,
      anon_sym_FF,
      anon_sym_UF,
      anon_sym_CC,
      anon_sym_MM,
      anon_sym_PP,
      anon_sym_AA,
    ACTIONS(198), 22,
      ts_builtin_sym_end,
      anon_sym_fn,
      sym_boolean_literal,
      sym_numeric_literal,
      anon_sym_UUU,
      anon_sym_SSS,
      anon_sym_FFF,
      anon_sym_SSF,
      anon_sym_UFFF,
      anon_sym_Int,
      anon_sym_Real,
      sym_bool_type,
      sym_void_type,
      anon_sym_CCC,
      anon_sym_MMM,
      anon_sym_PPP,
      anon_sym_AAA,
      sym_function_pointer_type,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [727] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(204), 11,
      anon_sym_U,
      anon_sym_UU,
      anon_sym_S,
      anon_sym_SS,
      anon_sym_F,
      anon_sym_FF,
      anon_sym_UF,
      anon_sym_CC,
      anon_sym_MM,
      anon_sym_PP,
      anon_sym_AA,
    ACTIONS(202), 22,
      ts_builtin_sym_end,
      anon_sym_fn,
      sym_boolean_literal,
      sym_numeric_literal,
      anon_sym_UUU,
      anon_sym_SSS,
      anon_sym_FFF,
      anon_sym_SSF,
      anon_sym_UFFF,
      anon_sym_Int,
      anon_sym_Real,
      sym_bool_type,
      sym_void_type,
      anon_sym_CCC,
      anon_sym_MMM,
      anon_sym_PPP,
      anon_sym_AAA,
      sym_function_pointer_type,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [769] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(208), 11,
      anon_sym_U,
      anon_sym_UU,
      anon_sym_S,
      anon_sym_SS,
      anon_sym_F,
      anon_sym_FF,
      anon_sym_UF,
      anon_sym_CC,
      anon_sym_MM,
      anon_sym_PP,
      anon_sym_AA,
    ACTIONS(206), 22,
      ts_builtin_sym_end,
      anon_sym_fn,
      sym_boolean_literal,
      sym_numeric_literal,
      anon_sym_UUU,
      anon_sym_SSS,
      anon_sym_FFF,
      anon_sym_SSF,
      anon_sym_UFFF,
      anon_sym_Int,
      anon_sym_Real,
      sym_bool_type,
      sym_void_type,
      anon_sym_CCC,
      anon_sym_MMM,
      anon_sym_PPP,
      anon_sym_AAA,
      sym_function_pointer_type,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [811] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(212), 11,
      anon_sym_U,
      anon_sym_UU,
      anon_sym_S,
      anon_sym_SS,
      anon_sym_F,
      anon_sym_FF,
      anon_sym_UF,
      anon_sym_CC,
      anon_sym_MM,
      anon_sym_PP,
      anon_sym_AA,
    ACTIONS(210), 22,
      ts_builtin_sym_end,
      anon_sym_fn,
      sym_boolean_literal,
      sym_numeric_literal,
      anon_sym_UUU,
      anon_sym_SSS,
      anon_sym_FFF,
      anon_sym_SSF,
      anon_sym_UFFF,
      anon_sym_Int,
      anon_sym_Real,
      sym_bool_type,
      sym_void_type,
      anon_sym_CCC,
      anon_sym_MMM,
      anon_sym_PPP,
      anon_sym_AAA,
      sym_function_pointer_type,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [853] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(216), 11,
      anon_sym_U,
      anon_sym_UU,
      anon_sym_S,
      anon_sym_SS,
      anon_sym_F,
      anon_sym_FF,
      anon_sym_UF,
      anon_sym_CC,
      anon_sym_MM,
      anon_sym_PP,
      anon_sym_AA,
    ACTIONS(214), 22,
      ts_builtin_sym_end,
      anon_sym_fn,
      sym_boolean_literal,
      sym_numeric_literal,
      anon_sym_UUU,
      anon_sym_SSS,
      anon_sym_FFF,
      anon_sym_SSF,
      anon_sym_UFFF,
      anon_sym_Int,
      anon_sym_Real,
      sym_bool_type,
      sym_void_type,
      anon_sym_CCC,
      anon_sym_MMM,
      anon_sym_PPP,
      anon_sym_AAA,
      sym_function_pointer_type,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [895] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(220), 11,
      anon_sym_U,
      anon_sym_UU,
      anon_sym_S,
      anon_sym_SS,
      anon_sym_F,
      anon_sym_FF,
      anon_sym_UF,
      anon_sym_CC,
      anon_sym_MM,
      anon_sym_PP,
      anon_sym_AA,
    ACTIONS(218), 22,
      ts_builtin_sym_end,
      anon_sym_fn,
      sym_boolean_literal,
      sym_numeric_literal,
      anon_sym_UUU,
      anon_sym_SSS,
      anon_sym_FFF,
      anon_sym_SSF,
      anon_sym_UFFF,
      anon_sym_Int,
      anon_sym_Real,
      sym_bool_type,
      sym_void_type,
      anon_sym_CCC,
      anon_sym_MMM,
      anon_sym_PPP,
      anon_sym_AAA,
      sym_function_pointer_type,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [937] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(224), 11,
      anon_sym_U,
      anon_sym_UU,
      anon_sym_S,
      anon_sym_SS,
      anon_sym_F,
      anon_sym_FF,
      anon_sym_UF,
      anon_sym_CC,
      anon_sym_MM,
      anon_sym_PP,
      anon_sym_AA,
    ACTIONS(222), 22,
      ts_builtin_sym_end,
      anon_sym_fn,
      sym_boolean_literal,
      sym_numeric_literal,
      anon_sym_UUU,
      anon_sym_SSS,
      anon_sym_FFF,
      anon_sym_SSF,
      anon_sym_UFFF,
      anon_sym_Int,
      anon_sym_Real,
      sym_bool_type,
      sym_void_type,
      anon_sym_CCC,
      anon_sym_MMM,
      anon_sym_PPP,
      anon_sym_AAA,
      sym_function_pointer_type,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [979] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(228), 11,
      anon_sym_U,
      anon_sym_UU,
      anon_sym_S,
      anon_sym_SS,
      anon_sym_F,
      anon_sym_FF,
      anon_sym_UF,
      anon_sym_CC,
      anon_sym_MM,
      anon_sym_PP,
      anon_sym_AA,
    ACTIONS(226), 22,
      ts_builtin_sym_end,
      anon_sym_fn,
      sym_boolean_literal,
      sym_numeric_literal,
      anon_sym_UUU,
      anon_sym_SSS,
      anon_sym_FFF,
      anon_sym_SSF,
      anon_sym_UFFF,
      anon_sym_Int,
      anon_sym_Real,
      sym_bool_type,
      sym_void_type,
      anon_sym_CCC,
      anon_sym_MMM,
      anon_sym_PPP,
      anon_sym_AAA,
      sym_function_pointer_type,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [1021] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(232), 11,
      anon_sym_U,
      anon_sym_UU,
      anon_sym_S,
      anon_sym_SS,
      anon_sym_F,
      anon_sym_FF,
      anon_sym_UF,
      anon_sym_CC,
      anon_sym_MM,
      anon_sym_PP,
      anon_sym_AA,
    ACTIONS(230), 22,
      ts_builtin_sym_end,
      anon_sym_fn,
      sym_boolean_literal,
      sym_numeric_literal,
      anon_sym_UUU,
      anon_sym_SSS,
      anon_sym_FFF,
      anon_sym_SSF,
      anon_sym_UFFF,
      anon_sym_Int,
      anon_sym_Real,
      sym_bool_type,
      sym_void_type,
      anon_sym_CCC,
      anon_sym_MMM,
      anon_sym_PPP,
      anon_sym_AAA,
      sym_function_pointer_type,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [1063] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(236), 11,
      anon_sym_U,
      anon_sym_UU,
      anon_sym_S,
      anon_sym_SS,
      anon_sym_F,
      anon_sym_FF,
      anon_sym_UF,
      anon_sym_CC,
      anon_sym_MM,
      anon_sym_PP,
      anon_sym_AA,
    ACTIONS(234), 22,
      ts_builtin_sym_end,
      anon_sym_fn,
      sym_boolean_literal,
      sym_numeric_literal,
      anon_sym_UUU,
      anon_sym_SSS,
      anon_sym_FFF,
      anon_sym_SSF,
      anon_sym_UFFF,
      anon_sym_Int,
      anon_sym_Real,
      sym_bool_type,
      sym_void_type,
      anon_sym_CCC,
      anon_sym_MMM,
      anon_sym_PPP,
      anon_sym_AAA,
      sym_function_pointer_type,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [1105] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(240), 11,
      anon_sym_U,
      anon_sym_UU,
      anon_sym_S,
      anon_sym_SS,
      anon_sym_F,
      anon_sym_FF,
      anon_sym_UF,
      anon_sym_CC,
      anon_sym_MM,
      anon_sym_PP,
      anon_sym_AA,
    ACTIONS(238), 22,
      ts_builtin_sym_end,
      anon_sym_fn,
      sym_boolean_literal,
      sym_numeric_literal,
      anon_sym_UUU,
      anon_sym_SSS,
      anon_sym_FFF,
      anon_sym_SSF,
      anon_sym_UFFF,
      anon_sym_Int,
      anon_sym_Real,
      sym_bool_type,
      sym_void_type,
      anon_sym_CCC,
      anon_sym_MMM,
      anon_sym_PPP,
      anon_sym_AAA,
      sym_function_pointer_type,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [1147] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(244), 11,
      anon_sym_U,
      anon_sym_UU,
      anon_sym_S,
      anon_sym_SS,
      anon_sym_F,
      anon_sym_FF,
      anon_sym_UF,
      anon_sym_CC,
      anon_sym_MM,
      anon_sym_PP,
      anon_sym_AA,
    ACTIONS(242), 22,
      ts_builtin_sym_end,
      anon_sym_fn,
      sym_boolean_literal,
      sym_numeric_literal,
      anon_sym_UUU,
      anon_sym_SSS,
      anon_sym_FFF,
      anon_sym_SSF,
      anon_sym_UFFF,
      anon_sym_Int,
      anon_sym_Real,
      sym_bool_type,
      sym_void_type,
      anon_sym_CCC,
      anon_sym_MMM,
      anon_sym_PPP,
      anon_sym_AAA,
      sym_function_pointer_type,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [1189] = 5,
    ACTIONS(246), 1,
      anon_sym_SQUOTE,
    ACTIONS(248), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(250), 1,
      sym_escape_sequence,
    STATE(38), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(252), 2,
      sym_line_continuation,
      sym_comment,
  [1206] = 5,
    ACTIONS(254), 1,
      sym_expression,
    ACTIONS(256), 1,
      sym_dedent,
    STATE(23), 1,
      sym_block,
    STATE(48), 1,
      aux_sym_block_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [1223] = 5,
    ACTIONS(258), 1,
      anon_sym_BQUOTE,
    ACTIONS(260), 1,
      aux_sym_backtick_quoted_string_token1,
    ACTIONS(262), 1,
      sym_escape_sequence,
    STATE(41), 1,
      aux_sym_backtick_quoted_string_repeat1,
    ACTIONS(252), 2,
      sym_line_continuation,
      sym_comment,
  [1240] = 5,
    ACTIONS(264), 1,
      anon_sym_DQUOTE,
    ACTIONS(266), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(268), 1,
      sym_escape_sequence,
    STATE(39), 1,
      aux_sym_double_quoted_string_repeat1,
    ACTIONS(252), 2,
      sym_line_continuation,
      sym_comment,
  [1257] = 5,
    ACTIONS(270), 1,
      anon_sym_SQUOTE,
    ACTIONS(272), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(275), 1,
      sym_escape_sequence,
    STATE(37), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(252), 2,
      sym_line_continuation,
      sym_comment,
  [1274] = 5,
    ACTIONS(278), 1,
      anon_sym_SQUOTE,
    ACTIONS(280), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(282), 1,
      sym_escape_sequence,
    STATE(37), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(252), 2,
      sym_line_continuation,
      sym_comment,
  [1291] = 5,
    ACTIONS(284), 1,
      anon_sym_DQUOTE,
    ACTIONS(286), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(289), 1,
      sym_escape_sequence,
    STATE(39), 1,
      aux_sym_double_quoted_string_repeat1,
    ACTIONS(252), 2,
      sym_line_continuation,
      sym_comment,
  [1308] = 5,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(296), 1,
      sym_escape_sequence,
    STATE(36), 1,
      aux_sym_double_quoted_string_repeat1,
    ACTIONS(252), 2,
      sym_line_continuation,
      sym_comment,
  [1325] = 5,
    ACTIONS(298), 1,
      anon_sym_BQUOTE,
    ACTIONS(300), 1,
      aux_sym_backtick_quoted_string_token1,
    ACTIONS(303), 1,
      sym_escape_sequence,
    STATE(41), 1,
      aux_sym_backtick_quoted_string_repeat1,
    ACTIONS(252), 2,
      sym_line_continuation,
      sym_comment,
  [1342] = 5,
    ACTIONS(306), 1,
      anon_sym_BQUOTE,
    ACTIONS(308), 1,
      aux_sym_backtick_quoted_string_token1,
    ACTIONS(310), 1,
      sym_escape_sequence,
    STATE(35), 1,
      aux_sym_backtick_quoted_string_repeat1,
    ACTIONS(252), 2,
      sym_line_continuation,
      sym_comment,
  [1359] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(158), 3,
      sym_indent,
      anon_sym_LBRACK,
      anon_sym_LBRACE_RBRACE,
  [1369] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(162), 3,
      sym_indent,
      anon_sym_LBRACK,
      anon_sym_LBRACE_RBRACE,
  [1379] = 4,
    ACTIONS(134), 1,
      sym_indent,
    ACTIONS(312), 1,
      anon_sym_LBRACK,
    ACTIONS(314), 1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [1393] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(170), 3,
      sym_indent,
      anon_sym_LBRACK,
      anon_sym_LBRACE_RBRACE,
  [1403] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(166), 3,
      sym_indent,
      anon_sym_LBRACK,
      anon_sym_LBRACE_RBRACE,
  [1413] = 4,
    ACTIONS(316), 1,
      sym_expression,
    ACTIONS(318), 1,
      sym_dedent,
    STATE(49), 1,
      aux_sym_block_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [1427] = 4,
    ACTIONS(320), 1,
      sym_expression,
    ACTIONS(323), 1,
      sym_dedent,
    STATE(49), 1,
      aux_sym_block_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [1441] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(142), 3,
      sym_indent,
      anon_sym_LBRACK,
      anon_sym_LBRACE_RBRACE,
  [1451] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(146), 3,
      sym_indent,
      anon_sym_LBRACK,
      anon_sym_LBRACE_RBRACE,
  [1461] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(150), 3,
      sym_indent,
      anon_sym_LBRACK,
      anon_sym_LBRACE_RBRACE,
  [1471] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(154), 3,
      sym_indent,
      anon_sym_LBRACK,
      anon_sym_LBRACE_RBRACE,
  [1481] = 3,
    ACTIONS(325), 1,
      sym_numeric_literal,
    ACTIONS(327), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [1492] = 3,
    ACTIONS(329), 1,
      sym_numeric_literal,
    ACTIONS(331), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [1503] = 3,
    ACTIONS(333), 1,
      sym_indent,
    STATE(31), 1,
      sym_function_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [1514] = 2,
    ACTIONS(335), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [1522] = 2,
    ACTIONS(337), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [1530] = 2,
    ACTIONS(339), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [1538] = 2,
    ACTIONS(341), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [1546] = 2,
    ACTIONS(343), 1,
      sym_numeric_literal,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [1554] = 2,
    ACTIONS(134), 1,
      sym_indent,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [1562] = 2,
    ACTIONS(194), 1,
      sym_indent,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [1570] = 2,
    ACTIONS(242), 1,
      sym_indent,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [1578] = 2,
    ACTIONS(234), 1,
      sym_indent,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [1586] = 2,
    ACTIONS(182), 1,
      sym_indent,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [1594] = 2,
    ACTIONS(230), 1,
      sym_indent,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [1602] = 2,
    ACTIONS(345), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [1610] = 2,
    ACTIONS(347), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [1618] = 2,
    ACTIONS(349), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [1626] = 2,
    ACTIONS(351), 1,
      sym_numeric_literal,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 47,
  [SMALL_STATE(7)] = 90,
  [SMALL_STATE(8)] = 133,
  [SMALL_STATE(9)] = 176,
  [SMALL_STATE(10)] = 219,
  [SMALL_STATE(11)] = 262,
  [SMALL_STATE(12)] = 305,
  [SMALL_STATE(13)] = 348,
  [SMALL_STATE(14)] = 391,
  [SMALL_STATE(15)] = 433,
  [SMALL_STATE(16)] = 475,
  [SMALL_STATE(17)] = 517,
  [SMALL_STATE(18)] = 559,
  [SMALL_STATE(19)] = 601,
  [SMALL_STATE(20)] = 643,
  [SMALL_STATE(21)] = 685,
  [SMALL_STATE(22)] = 727,
  [SMALL_STATE(23)] = 769,
  [SMALL_STATE(24)] = 811,
  [SMALL_STATE(25)] = 853,
  [SMALL_STATE(26)] = 895,
  [SMALL_STATE(27)] = 937,
  [SMALL_STATE(28)] = 979,
  [SMALL_STATE(29)] = 1021,
  [SMALL_STATE(30)] = 1063,
  [SMALL_STATE(31)] = 1105,
  [SMALL_STATE(32)] = 1147,
  [SMALL_STATE(33)] = 1189,
  [SMALL_STATE(34)] = 1206,
  [SMALL_STATE(35)] = 1223,
  [SMALL_STATE(36)] = 1240,
  [SMALL_STATE(37)] = 1257,
  [SMALL_STATE(38)] = 1274,
  [SMALL_STATE(39)] = 1291,
  [SMALL_STATE(40)] = 1308,
  [SMALL_STATE(41)] = 1325,
  [SMALL_STATE(42)] = 1342,
  [SMALL_STATE(43)] = 1359,
  [SMALL_STATE(44)] = 1369,
  [SMALL_STATE(45)] = 1379,
  [SMALL_STATE(46)] = 1393,
  [SMALL_STATE(47)] = 1403,
  [SMALL_STATE(48)] = 1413,
  [SMALL_STATE(49)] = 1427,
  [SMALL_STATE(50)] = 1441,
  [SMALL_STATE(51)] = 1451,
  [SMALL_STATE(52)] = 1461,
  [SMALL_STATE(53)] = 1471,
  [SMALL_STATE(54)] = 1481,
  [SMALL_STATE(55)] = 1492,
  [SMALL_STATE(56)] = 1503,
  [SMALL_STATE(57)] = 1514,
  [SMALL_STATE(58)] = 1522,
  [SMALL_STATE(59)] = 1530,
  [SMALL_STATE(60)] = 1538,
  [SMALL_STATE(61)] = 1546,
  [SMALL_STATE(62)] = 1554,
  [SMALL_STATE(63)] = 1562,
  [SMALL_STATE(64)] = 1570,
  [SMALL_STATE(65)] = 1578,
  [SMALL_STATE(66)] = 1586,
  [SMALL_STATE(67)] = 1594,
  [SMALL_STATE(68)] = 1602,
  [SMALL_STATE(69)] = 1610,
  [SMALL_STATE(70)] = 1618,
  [SMALL_STATE(71)] = 1626,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(58),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(28),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(12),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(12),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(13),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(61),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(33),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(40),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(42),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_type, 1),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_type, 1),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit_fractional_type, 1),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit_fractional_type, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fixed_point_type, 1),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fixed_point_type, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_constant_type, 1),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_constant_type, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_type, 1),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_type, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_type, 1),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pointer_type, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address_type, 1),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address_type, 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity_type, 1),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity_type, 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 3),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 3),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backtick_quoted_string, 2),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_backtick_quoted_string, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typed_element_array_type, 3),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typed_element_array_type, 3),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backtick_quoted_string, 3),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_backtick_quoted_string, 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 1),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 2),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_body, 2),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 2),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 2),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typed_element_array_type, 4),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typed_element_array_type, 4),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_addressable_array_type, 3),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pointer_addressable_array_type, 3),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector_type, 2),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector_type, 2),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2), SHIFT_REPEAT(37),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2), SHIFT_REPEAT(37),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2),
  [286] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(39),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(39),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_backtick_quoted_string_repeat1, 2),
  [300] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_backtick_quoted_string_repeat1, 2), SHIFT_REPEAT(41),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_backtick_quoted_string_repeat1, 2), SHIFT_REPEAT(41),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(49),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [347] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_indent = 0,
  ts_external_token_dedent = 1,
  ts_external_token_newline = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_indent] = sym_indent,
  [ts_external_token_dedent] = sym_dedent,
  [ts_external_token_newline] = sym_newline,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_indent] = true,
    [ts_external_token_dedent] = true,
    [ts_external_token_newline] = true,
  },
  [2] = {
    [ts_external_token_dedent] = true,
  },
  [3] = {
    [ts_external_token_indent] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_nesfab_external_scanner_create(void);
void tree_sitter_nesfab_external_scanner_destroy(void *);
bool tree_sitter_nesfab_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_nesfab_external_scanner_serialize(void *, char *);
void tree_sitter_nesfab_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_nesfab() {
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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_nesfab_external_scanner_create,
      tree_sitter_nesfab_external_scanner_destroy,
      tree_sitter_nesfab_external_scanner_scan,
      tree_sitter_nesfab_external_scanner_serialize,
      tree_sitter_nesfab_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
