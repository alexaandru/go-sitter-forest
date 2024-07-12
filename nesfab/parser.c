#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 189
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 87
#define ALIAS_COUNT 0
#define TOKEN_COUNT 56
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 16

enum ts_symbol_identifiers {
  sym_identifier = 1,
  sym_expression = 2,
  sym_break_statement = 3,
  sym_continue_statement = 4,
  anon_sym_if = 5,
  anon_sym_elseif = 6,
  anon_sym_else = 7,
  anon_sym_do = 8,
  anon_sym_while = 9,
  anon_sym_for = 10,
  anon_sym_SEMI = 11,
  anon_sym_switch = 12,
  anon_sym_case = 13,
  anon_sym_default = 14,
  anon_sym_fn = 15,
  anon_sym_LPAREN_RPAREN = 16,
  sym_boolean_literal = 17,
  sym_numeric_literal = 18,
  anon_sym_SQUOTE = 19,
  anon_sym_DQUOTE = 20,
  anon_sym_BQUOTE = 21,
  sym_escape_sequence = 22,
  anon_sym_U = 23,
  anon_sym_UU = 24,
  anon_sym_UUU = 25,
  anon_sym_S = 26,
  anon_sym_SS = 27,
  anon_sym_SSS = 28,
  anon_sym_F = 29,
  anon_sym_FF = 30,
  anon_sym_FFF = 31,
  anon_sym_UF = 32,
  anon_sym_SSF = 33,
  anon_sym_UFFF = 34,
  anon_sym_Int = 35,
  anon_sym_Real = 36,
  sym_bool_type = 37,
  sym_void_type = 38,
  anon_sym_CC = 39,
  anon_sym_CCC = 40,
  anon_sym_MM = 41,
  anon_sym_MMM = 42,
  anon_sym_PP = 43,
  anon_sym_PPP = 44,
  anon_sym_AA = 45,
  anon_sym_AAA = 46,
  sym_function_pointer_type = 47,
  anon_sym_LBRACK = 48,
  anon_sym_RBRACK = 49,
  anon_sym_LBRACE_RBRACE = 50,
  sym_line_continuation = 51,
  sym_comment = 52,
  sym_indent = 53,
  sym_dedent = 54,
  sym_newline = 55,
  sym_program = 56,
  sym__statement = 57,
  sym__simple_statement = 58,
  sym__compound_statement = 59,
  sym_block = 60,
  sym_if_statement = 61,
  sym_else_if_clause = 62,
  sym_else_clause = 63,
  sym_while_statement = 64,
  sym_for_statement = 65,
  sym_switch_statement = 66,
  sym_switch_body = 67,
  sym_case_clause = 68,
  sym_default_clause = 69,
  sym_function_definition = 70,
  sym_type = 71,
  sym_scalar_type = 72,
  sym_integer_type = 73,
  sym_unit_fractional_type = 74,
  sym_fixed_point_type = 75,
  sym_numeric_constant_type = 76,
  sym_quantity_type = 77,
  sym_pointer_type = 78,
  sym_address_type = 79,
  sym_array_type = 80,
  sym_typed_element_array_type = 81,
  sym_vector_type = 82,
  sym_pointer_addressable_array_type = 83,
  aux_sym_program_repeat1 = 84,
  aux_sym_if_statement_repeat1 = 85,
  aux_sym_switch_body_repeat1 = 86,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym_expression] = "expression",
  [sym_break_statement] = "break_statement",
  [sym_continue_statement] = "continue_statement",
  [anon_sym_if] = "if",
  [anon_sym_elseif] = "else if",
  [anon_sym_else] = "else",
  [anon_sym_do] = "do",
  [anon_sym_while] = "while",
  [anon_sym_for] = "for",
  [anon_sym_SEMI] = ";",
  [anon_sym_switch] = "switch",
  [anon_sym_case] = "case",
  [anon_sym_default] = "default",
  [anon_sym_fn] = "fn",
  [anon_sym_LPAREN_RPAREN] = "()",
  [sym_boolean_literal] = "boolean_literal",
  [sym_numeric_literal] = "numeric_literal",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_BQUOTE] = "`",
  [sym_escape_sequence] = "escape_sequence",
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
  [sym_line_continuation] = "line_continuation",
  [sym_comment] = "comment",
  [sym_indent] = "indent",
  [sym_dedent] = "dedent",
  [sym_newline] = "newline",
  [sym_program] = "program",
  [sym__statement] = "_statement",
  [sym__simple_statement] = "_simple_statement",
  [sym__compound_statement] = "_compound_statement",
  [sym_block] = "block",
  [sym_if_statement] = "if_statement",
  [sym_else_if_clause] = "else_if_clause",
  [sym_else_clause] = "else_clause",
  [sym_while_statement] = "while_statement",
  [sym_for_statement] = "for_statement",
  [sym_switch_statement] = "switch_statement",
  [sym_switch_body] = "switch_body",
  [sym_case_clause] = "case_clause",
  [sym_default_clause] = "default_clause",
  [sym_function_definition] = "function_definition",
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
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_if_statement_repeat1] = "if_statement_repeat1",
  [aux_sym_switch_body_repeat1] = "switch_body_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [sym_expression] = sym_expression,
  [sym_break_statement] = sym_break_statement,
  [sym_continue_statement] = sym_continue_statement,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_elseif] = anon_sym_elseif,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_switch] = anon_sym_switch,
  [anon_sym_case] = anon_sym_case,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_LPAREN_RPAREN] = anon_sym_LPAREN_RPAREN,
  [sym_boolean_literal] = sym_boolean_literal,
  [sym_numeric_literal] = sym_numeric_literal,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [sym_escape_sequence] = sym_escape_sequence,
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
  [sym_line_continuation] = sym_line_continuation,
  [sym_comment] = sym_comment,
  [sym_indent] = sym_indent,
  [sym_dedent] = sym_dedent,
  [sym_newline] = sym_newline,
  [sym_program] = sym_program,
  [sym__statement] = sym__statement,
  [sym__simple_statement] = sym__simple_statement,
  [sym__compound_statement] = sym__compound_statement,
  [sym_block] = sym_block,
  [sym_if_statement] = sym_if_statement,
  [sym_else_if_clause] = sym_else_if_clause,
  [sym_else_clause] = sym_else_clause,
  [sym_while_statement] = sym_while_statement,
  [sym_for_statement] = sym_for_statement,
  [sym_switch_statement] = sym_switch_statement,
  [sym_switch_body] = sym_switch_body,
  [sym_case_clause] = sym_case_clause,
  [sym_default_clause] = sym_default_clause,
  [sym_function_definition] = sym_function_definition,
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
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_if_statement_repeat1] = aux_sym_if_statement_repeat1,
  [aux_sym_switch_body_repeat1] = aux_sym_switch_body_repeat1,
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
  [sym_break_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_continue_statement] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_elseif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_switch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_case] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
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
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_escape_sequence] = {
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
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__simple_statement] = {
    .visible = false,
    .named = true,
  },
  [sym__compound_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_else_if_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_else_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_while_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_for_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_switch_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_switch_body] = {
    .visible = true,
    .named = true,
  },
  [sym_case_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_default_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
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
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_switch_body_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_condition = 1,
  field_initialization = 2,
  field_iteration = 3,
  field_value = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_condition] = "condition",
  [field_initialization] = "initialization",
  [field_iteration] = "iteration",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 1},
  [7] = {.index = 6, .length = 1},
  [8] = {.index = 7, .length = 2},
  [9] = {.index = 9, .length = 2},
  [10] = {.index = 11, .length = 2},
  [11] = {.index = 13, .length = 2},
  [12] = {.index = 15, .length = 2},
  [13] = {.index = 17, .length = 2},
  [14] = {.index = 19, .length = 3},
  [15] = {.index = 22, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_initialization, 1},
  [1] =
    {field_condition, 2},
  [2] =
    {field_iteration, 3},
  [3] =
    {field_value, 1},
  [4] =
    {field_initialization, 2},
  [5] =
    {field_condition, 3},
  [6] =
    {field_iteration, 4},
  [7] =
    {field_condition, 3},
    {field_initialization, 1},
  [9] =
    {field_initialization, 1},
    {field_iteration, 4},
  [11] =
    {field_condition, 2},
    {field_iteration, 4},
  [13] =
    {field_condition, 4},
    {field_initialization, 2},
  [15] =
    {field_initialization, 2},
    {field_iteration, 5},
  [17] =
    {field_condition, 3},
    {field_iteration, 5},
  [19] =
    {field_condition, 3},
    {field_initialization, 1},
    {field_iteration, 5},
  [22] =
    {field_condition, 4},
    {field_initialization, 2},
    {field_iteration, 6},
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
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 5,
  [7] = 7,
  [8] = 8,
  [9] = 7,
  [10] = 4,
  [11] = 11,
  [12] = 12,
  [13] = 12,
  [14] = 11,
  [15] = 15,
  [16] = 16,
  [17] = 15,
  [18] = 18,
  [19] = 19,
  [20] = 16,
  [21] = 18,
  [22] = 19,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 31,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 30,
  [38] = 34,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 23,
  [45] = 43,
  [46] = 42,
  [47] = 47,
  [48] = 48,
  [49] = 29,
  [50] = 36,
  [51] = 51,
  [52] = 33,
  [53] = 28,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 55,
  [59] = 54,
  [60] = 24,
  [61] = 48,
  [62] = 47,
  [63] = 57,
  [64] = 41,
  [65] = 40,
  [66] = 39,
  [67] = 56,
  [68] = 51,
  [69] = 25,
  [70] = 26,
  [71] = 27,
  [72] = 35,
  [73] = 73,
  [74] = 74,
  [75] = 74,
  [76] = 76,
  [77] = 73,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 82,
  [84] = 84,
  [85] = 85,
  [86] = 80,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 88,
  [93] = 85,
  [94] = 91,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 87,
  [105] = 89,
  [106] = 90,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 112,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 114,
  [122] = 122,
  [123] = 113,
  [124] = 108,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 117,
  [129] = 118,
  [130] = 130,
  [131] = 131,
  [132] = 130,
  [133] = 133,
  [134] = 119,
  [135] = 126,
  [136] = 136,
  [137] = 110,
  [138] = 107,
  [139] = 139,
  [140] = 140,
  [141] = 139,
  [142] = 136,
  [143] = 133,
  [144] = 109,
  [145] = 131,
  [146] = 122,
  [147] = 116,
  [148] = 111,
  [149] = 120,
  [150] = 125,
  [151] = 127,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 152,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 153,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 154,
  [170] = 170,
  [171] = 168,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 164,
  [176] = 176,
  [177] = 165,
  [178] = 178,
  [179] = 166,
  [180] = 167,
  [181] = 170,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 161,
  [186] = 162,
  [187] = 163,
  [188] = 156,
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
      if (eof) ADVANCE(61);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(58)
      if (lookahead == '\r') SKIP(58)
      if (lookahead == '"') ADVANCE(89);
      if (lookahead == '$') ADVANCE(7);
      if (lookahead == '%') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(88);
      if (lookahead == '(') ADVANCE(2);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(6);
      if (lookahead == '.') ADVANCE(47);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == ';') ADVANCE(80);
      if (lookahead == 'A') ADVANCE(10);
      if (lookahead == 'B') ADVANCE(33);
      if (lookahead == 'C') ADVANCE(12);
      if (lookahead == 'F') ADVANCE(104);
      if (lookahead == 'I') ADVANCE(31);
      if (lookahead == 'M') ADVANCE(15);
      if (lookahead == 'P') ADVANCE(17);
      if (lookahead == 'R') ADVANCE(22);
      if (lookahead == 'S') ADVANCE(98);
      if (lookahead == 'U') ADVANCE(92);
      if (lookahead == 'V') ADVANCE(34);
      if (lookahead == '[') ADVANCE(141);
      if (lookahead == '\\') ADVANCE(44);
      if (lookahead == ']') ADVANCE(142);
      if (lookahead == '`') ADVANCE(90);
      if (lookahead == 'e') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(19);
      if (lookahead == 't') ADVANCE(38);
      if (lookahead == '{') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('D' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(144);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(81);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(146);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(145);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(84);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(39);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(137);
      END_STATE();
    case 12:
      if (lookahead == 'C') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 13:
      if (lookahead == 'C') ADVANCE(125);
      END_STATE();
    case 14:
      if (lookahead == 'F') ADVANCE(114);
      END_STATE();
    case 15:
      if (lookahead == 'M') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 16:
      if (lookahead == 'M') ADVANCE(129);
      END_STATE();
    case 17:
      if (lookahead == 'P') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 18:
      if (lookahead == 'P') ADVANCE(133);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(122);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 25:
      if (lookahead == 'f') ADVANCE(78);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(120);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(118);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 33:
      if (lookahead == 'o') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 34:
      if (lookahead == 'o') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 35:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 36:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 37:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 39:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 42:
      if (lookahead == '}') ADVANCE(143);
      END_STATE();
    case 43:
      if (!eof && (lookahead == 0 ||
          lookahead == '\n')) ADVANCE(144);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 44:
      if (!eof && (lookahead == 0 ||
          lookahead == '\n')) ADVANCE(144);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'U') ADVANCE(56);
      if (lookahead == 'u') ADVANCE(52);
      if (lookahead == 'x') ADVANCE(50);
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(91);
      END_STATE();
    case 45:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(85);
      END_STATE();
    case 46:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(46)
      if (lookahead == '\r') SKIP(46)
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == 'A') ADVANCE(11);
      if (lookahead == 'B') ADVANCE(37);
      if (lookahead == 'C') ADVANCE(13);
      if (lookahead == 'F') ADVANCE(105);
      if (lookahead == 'I') ADVANCE(32);
      if (lookahead == 'M') ADVANCE(16);
      if (lookahead == 'P') ADVANCE(18);
      if (lookahead == 'R') ADVANCE(24);
      if (lookahead == 'S') ADVANCE(99);
      if (lookahead == 'U') ADVANCE(93);
      if (lookahead == 'V') ADVANCE(36);
      if (lookahead == '[') ADVANCE(141);
      if (lookahead == '\\') ADVANCE(43);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(54);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(55);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 58:
      if (eof) ADVANCE(61);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(58)
      if (lookahead == '\r') SKIP(58)
      if (lookahead == '"') ADVANCE(89);
      if (lookahead == '$') ADVANCE(7);
      if (lookahead == '%') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(88);
      if (lookahead == '(') ADVANCE(2);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(6);
      if (lookahead == '.') ADVANCE(47);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == ';') ADVANCE(80);
      if (lookahead == 'A') ADVANCE(10);
      if (lookahead == 'B') ADVANCE(33);
      if (lookahead == 'C') ADVANCE(12);
      if (lookahead == 'F') ADVANCE(104);
      if (lookahead == 'I') ADVANCE(31);
      if (lookahead == 'M') ADVANCE(15);
      if (lookahead == 'P') ADVANCE(17);
      if (lookahead == 'R') ADVANCE(22);
      if (lookahead == 'S') ADVANCE(98);
      if (lookahead == 'U') ADVANCE(92);
      if (lookahead == 'V') ADVANCE(34);
      if (lookahead == '[') ADVANCE(141);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead == ']') ADVANCE(142);
      if (lookahead == '`') ADVANCE(90);
      if (lookahead == 'e') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(19);
      if (lookahead == 't') ADVANCE(38);
      if (lookahead == '{') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('D' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 59:
      if (eof) ADVANCE(61);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(59)
      if (lookahead == '\r') SKIP(59)
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == ';') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 60:
      if (eof) ADVANCE(61);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(60)
      if (lookahead == '\r') SKIP(60)
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead == 'e') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_numeric_literal);
      if (lookahead == '.') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_numeric_literal);
      if (lookahead == '.') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_numeric_literal);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_numeric_literal);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_numeric_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_numeric_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_U);
      if (lookahead == 'F') ADVANCE(110);
      if (lookahead == 'U') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_U);
      if (lookahead == 'F') ADVANCE(111);
      if (lookahead == 'U') ADVANCE(95);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_UU);
      if (lookahead == 'U') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_UU);
      if (lookahead == 'U') ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_UUU);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_UUU);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_S);
      if (lookahead == 'S') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_S);
      if (lookahead == 'S') ADVANCE(101);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_SS);
      if (lookahead == 'F') ADVANCE(113);
      if (lookahead == 'S') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_SS);
      if (lookahead == 'F') ADVANCE(112);
      if (lookahead == 'S') ADVANCE(102);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_SSS);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_SSS);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_F);
      if (lookahead == 'F') ADVANCE(106);
      if (lookahead == 'n') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_F);
      if (lookahead == 'F') ADVANCE(107);
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == 'F') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == 'F') ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_FFF);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_FFF);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_UF);
      if (lookahead == 'F') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_UF);
      if (lookahead == 'F') ADVANCE(14);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_SSF);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_SSF);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_UFFF);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_UFFF);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_Int);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_Int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_Real);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_Real);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_bool_type);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_bool_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_void_type);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_void_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_CC);
      if (lookahead == 'C') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_CC);
      if (lookahead == 'C') ADVANCE(126);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_CCC);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_CCC);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_MM);
      if (lookahead == 'M') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_MM);
      if (lookahead == 'M') ADVANCE(130);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_MMM);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_MMM);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_PP);
      if (lookahead == 'P') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_PP);
      if (lookahead == 'P') ADVANCE(134);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_PPP);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_PPP);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_AA);
      if (lookahead == 'A') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_AA);
      if (lookahead == 'A') ADVANCE(138);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_AAA);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_AAA);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_function_pointer_type);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_LBRACE_RBRACE);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_line_continuation);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != 8232 &&
          lookahead != 8233) ADVANCE(146);
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
      if (lookahead == 'b') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(2);
      if (lookahead == 'd') ADVANCE(3);
      if (lookahead == 'e') ADVANCE(4);
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 'i') ADVANCE(6);
      if (lookahead == 's') ADVANCE(7);
      if (lookahead == 'w') ADVANCE(8);
      END_STATE();
    case 1:
      if (lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(10);
      if (lookahead == 'o') ADVANCE(11);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(12);
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 4:
      if (lookahead == 'x') ADVANCE(14);
      END_STATE();
    case 5:
      if (lookahead == 'n') ADVANCE(15);
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 6:
      if (lookahead == 'f') ADVANCE(17);
      END_STATE();
    case 7:
      if (lookahead == 'w') ADVANCE(18);
      END_STATE();
    case 8:
      if (lookahead == 'h') ADVANCE(19);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 10:
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 11:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 12:
      if (lookahead == 'f') ADVANCE(23);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 14:
      if (lookahead == 'p') ADVANCE(24);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 18:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 19:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 28:
      if (lookahead == 'k') ADVANCE(35);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 31:
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(39);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_break_statement);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 38:
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 39:
      if (lookahead == 'h') ADVANCE(44);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 41:
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 43:
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_continue_statement);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_expression);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 59},
  [2] = {.lex_state = 46},
  [3] = {.lex_state = 46},
  [4] = {.lex_state = 59, .external_lex_state = 2},
  [5] = {.lex_state = 59, .external_lex_state = 2},
  [6] = {.lex_state = 59, .external_lex_state = 2},
  [7] = {.lex_state = 59, .external_lex_state = 2},
  [8] = {.lex_state = 59},
  [9] = {.lex_state = 59},
  [10] = {.lex_state = 59, .external_lex_state = 2},
  [11] = {.lex_state = 60},
  [12] = {.lex_state = 60},
  [13] = {.lex_state = 60, .external_lex_state = 2},
  [14] = {.lex_state = 60, .external_lex_state = 2},
  [15] = {.lex_state = 60},
  [16] = {.lex_state = 60, .external_lex_state = 2},
  [17] = {.lex_state = 60, .external_lex_state = 2},
  [18] = {.lex_state = 60, .external_lex_state = 2},
  [19] = {.lex_state = 60},
  [20] = {.lex_state = 60},
  [21] = {.lex_state = 60},
  [22] = {.lex_state = 60, .external_lex_state = 2},
  [23] = {.lex_state = 59},
  [24] = {.lex_state = 59, .external_lex_state = 2},
  [25] = {.lex_state = 59, .external_lex_state = 2},
  [26] = {.lex_state = 59, .external_lex_state = 2},
  [27] = {.lex_state = 59, .external_lex_state = 2},
  [28] = {.lex_state = 59},
  [29] = {.lex_state = 59, .external_lex_state = 2},
  [30] = {.lex_state = 59, .external_lex_state = 2},
  [31] = {.lex_state = 59, .external_lex_state = 2},
  [32] = {.lex_state = 59},
  [33] = {.lex_state = 59},
  [34] = {.lex_state = 59, .external_lex_state = 2},
  [35] = {.lex_state = 59, .external_lex_state = 2},
  [36] = {.lex_state = 59},
  [37] = {.lex_state = 59},
  [38] = {.lex_state = 59},
  [39] = {.lex_state = 59, .external_lex_state = 2},
  [40] = {.lex_state = 59, .external_lex_state = 2},
  [41] = {.lex_state = 59, .external_lex_state = 2},
  [42] = {.lex_state = 59, .external_lex_state = 2},
  [43] = {.lex_state = 59, .external_lex_state = 2},
  [44] = {.lex_state = 59, .external_lex_state = 2},
  [45] = {.lex_state = 59},
  [46] = {.lex_state = 59},
  [47] = {.lex_state = 59, .external_lex_state = 2},
  [48] = {.lex_state = 59, .external_lex_state = 2},
  [49] = {.lex_state = 59},
  [50] = {.lex_state = 59, .external_lex_state = 2},
  [51] = {.lex_state = 59, .external_lex_state = 2},
  [52] = {.lex_state = 59, .external_lex_state = 2},
  [53] = {.lex_state = 59, .external_lex_state = 2},
  [54] = {.lex_state = 59, .external_lex_state = 2},
  [55] = {.lex_state = 59, .external_lex_state = 2},
  [56] = {.lex_state = 59},
  [57] = {.lex_state = 59},
  [58] = {.lex_state = 59},
  [59] = {.lex_state = 59},
  [60] = {.lex_state = 59},
  [61] = {.lex_state = 59},
  [62] = {.lex_state = 59},
  [63] = {.lex_state = 59, .external_lex_state = 2},
  [64] = {.lex_state = 59},
  [65] = {.lex_state = 59},
  [66] = {.lex_state = 59},
  [67] = {.lex_state = 59, .external_lex_state = 2},
  [68] = {.lex_state = 59},
  [69] = {.lex_state = 59},
  [70] = {.lex_state = 59},
  [71] = {.lex_state = 59},
  [72] = {.lex_state = 59},
  [73] = {.lex_state = 59, .external_lex_state = 2},
  [74] = {.lex_state = 59, .external_lex_state = 2},
  [75] = {.lex_state = 59, .external_lex_state = 2},
  [76] = {.lex_state = 59, .external_lex_state = 2},
  [77] = {.lex_state = 59, .external_lex_state = 2},
  [78] = {.lex_state = 59, .external_lex_state = 3},
  [79] = {.lex_state = 59, .external_lex_state = 3},
  [80] = {.lex_state = 59, .external_lex_state = 4},
  [81] = {.lex_state = 0, .external_lex_state = 4},
  [82] = {.lex_state = 59, .external_lex_state = 4},
  [83] = {.lex_state = 59, .external_lex_state = 4},
  [84] = {.lex_state = 59, .external_lex_state = 2},
  [85] = {.lex_state = 59, .external_lex_state = 4},
  [86] = {.lex_state = 59, .external_lex_state = 4},
  [87] = {.lex_state = 59, .external_lex_state = 4},
  [88] = {.lex_state = 59, .external_lex_state = 4},
  [89] = {.lex_state = 59, .external_lex_state = 4},
  [90] = {.lex_state = 59, .external_lex_state = 4},
  [91] = {.lex_state = 59, .external_lex_state = 4},
  [92] = {.lex_state = 59, .external_lex_state = 4},
  [93] = {.lex_state = 59, .external_lex_state = 4},
  [94] = {.lex_state = 59, .external_lex_state = 4},
  [95] = {.lex_state = 0, .external_lex_state = 4},
  [96] = {.lex_state = 0, .external_lex_state = 4},
  [97] = {.lex_state = 0, .external_lex_state = 4},
  [98] = {.lex_state = 59, .external_lex_state = 2},
  [99] = {.lex_state = 0, .external_lex_state = 4},
  [100] = {.lex_state = 0, .external_lex_state = 4},
  [101] = {.lex_state = 0, .external_lex_state = 4},
  [102] = {.lex_state = 0, .external_lex_state = 4},
  [103] = {.lex_state = 0, .external_lex_state = 4},
  [104] = {.lex_state = 59, .external_lex_state = 4},
  [105] = {.lex_state = 59, .external_lex_state = 4},
  [106] = {.lex_state = 59, .external_lex_state = 4},
  [107] = {.lex_state = 0, .external_lex_state = 4},
  [108] = {.lex_state = 0, .external_lex_state = 4},
  [109] = {.lex_state = 0, .external_lex_state = 4},
  [110] = {.lex_state = 59},
  [111] = {.lex_state = 59},
  [112] = {.lex_state = 59},
  [113] = {.lex_state = 59},
  [114] = {.lex_state = 0, .external_lex_state = 4},
  [115] = {.lex_state = 59},
  [116] = {.lex_state = 0, .external_lex_state = 4},
  [117] = {.lex_state = 59},
  [118] = {.lex_state = 59},
  [119] = {.lex_state = 59},
  [120] = {.lex_state = 0, .external_lex_state = 4},
  [121] = {.lex_state = 0, .external_lex_state = 4},
  [122] = {.lex_state = 0, .external_lex_state = 4},
  [123] = {.lex_state = 59},
  [124] = {.lex_state = 0, .external_lex_state = 4},
  [125] = {.lex_state = 0, .external_lex_state = 4},
  [126] = {.lex_state = 0, .external_lex_state = 4},
  [127] = {.lex_state = 0, .external_lex_state = 4},
  [128] = {.lex_state = 59},
  [129] = {.lex_state = 59},
  [130] = {.lex_state = 0, .external_lex_state = 4},
  [131] = {.lex_state = 0, .external_lex_state = 4},
  [132] = {.lex_state = 0, .external_lex_state = 4},
  [133] = {.lex_state = 0, .external_lex_state = 4},
  [134] = {.lex_state = 59},
  [135] = {.lex_state = 0, .external_lex_state = 4},
  [136] = {.lex_state = 0, .external_lex_state = 4},
  [137] = {.lex_state = 59},
  [138] = {.lex_state = 0, .external_lex_state = 4},
  [139] = {.lex_state = 0, .external_lex_state = 4},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0, .external_lex_state = 4},
  [142] = {.lex_state = 0, .external_lex_state = 4},
  [143] = {.lex_state = 0, .external_lex_state = 4},
  [144] = {.lex_state = 0, .external_lex_state = 4},
  [145] = {.lex_state = 0, .external_lex_state = 4},
  [146] = {.lex_state = 0, .external_lex_state = 4},
  [147] = {.lex_state = 0, .external_lex_state = 4},
  [148] = {.lex_state = 59},
  [149] = {.lex_state = 0, .external_lex_state = 4},
  [150] = {.lex_state = 0, .external_lex_state = 4},
  [151] = {.lex_state = 0, .external_lex_state = 4},
  [152] = {.lex_state = 59},
  [153] = {.lex_state = 59},
  [154] = {.lex_state = 59},
  [155] = {.lex_state = 59},
  [156] = {.lex_state = 59},
  [157] = {.lex_state = 59},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 59},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 59},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 59},
  [169] = {.lex_state = 59},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 59},
  [172] = {.lex_state = 0, .external_lex_state = 4},
  [173] = {.lex_state = 0, .external_lex_state = 4},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0, .external_lex_state = 4},
  [177] = {.lex_state = 59},
  [178] = {.lex_state = 0, .external_lex_state = 4},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0, .external_lex_state = 4},
  [184] = {.lex_state = 0, .external_lex_state = 4},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 59},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_expression] = ACTIONS(1),
    [sym_break_statement] = ACTIONS(1),
    [sym_continue_statement] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_elseif] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_switch] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(1),
    [sym_boolean_literal] = ACTIONS(1),
    [sym_numeric_literal] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
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
    [sym_line_continuation] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_indent] = ACTIONS(1),
    [sym_dedent] = ACTIONS(1),
    [sym_newline] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(158),
    [sym__statement] = STATE(8),
    [sym__simple_statement] = STATE(8),
    [sym__compound_statement] = STATE(8),
    [sym_if_statement] = STATE(8),
    [sym_while_statement] = STATE(8),
    [sym_for_statement] = STATE(8),
    [sym_switch_statement] = STATE(8),
    [sym_function_definition] = STATE(8),
    [aux_sym_program_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_expression] = ACTIONS(7),
    [sym_break_statement] = ACTIONS(7),
    [sym_continue_statement] = ACTIONS(7),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_do] = ACTIONS(11),
    [anon_sym_while] = ACTIONS(13),
    [anon_sym_for] = ACTIONS(15),
    [anon_sym_switch] = ACTIONS(17),
    [anon_sym_fn] = ACTIONS(19),
    [sym_line_continuation] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 21,
    ACTIONS(27), 1,
      anon_sym_FFF,
    ACTIONS(29), 1,
      anon_sym_UF,
    ACTIONS(41), 1,
      anon_sym_AA,
    ACTIONS(43), 1,
      anon_sym_AAA,
    ACTIONS(45), 1,
      sym_function_pointer_type,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    STATE(147), 1,
      sym_type,
    STATE(176), 1,
      sym_array_type,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(23), 2,
      anon_sym_UUU,
      anon_sym_SSS,
    ACTIONS(25), 2,
      anon_sym_F,
      anon_sym_FF,
    ACTIONS(31), 2,
      anon_sym_SSF,
      anon_sym_UFFF,
    ACTIONS(33), 2,
      anon_sym_Int,
      anon_sym_Real,
    ACTIONS(35), 2,
      sym_bool_type,
      sym_void_type,
    STATE(81), 2,
      sym_scalar_type,
      sym_quantity_type,
    STATE(95), 2,
      sym_pointer_type,
      sym_address_type,
    ACTIONS(37), 3,
      anon_sym_CC,
      anon_sym_MM,
      anon_sym_PP,
    ACTIONS(39), 3,
      anon_sym_CCC,
      anon_sym_MMM,
      anon_sym_PPP,
    STATE(184), 3,
      sym_typed_element_array_type,
      sym_vector_type,
      sym_pointer_addressable_array_type,
    ACTIONS(21), 4,
      anon_sym_U,
      anon_sym_UU,
      anon_sym_S,
      anon_sym_SS,
    STATE(99), 4,
      sym_integer_type,
      sym_unit_fractional_type,
      sym_fixed_point_type,
      sym_numeric_constant_type,
  [84] = 21,
    ACTIONS(27), 1,
      anon_sym_FFF,
    ACTIONS(29), 1,
      anon_sym_UF,
    ACTIONS(41), 1,
      anon_sym_AA,
    ACTIONS(43), 1,
      anon_sym_AAA,
    ACTIONS(45), 1,
      sym_function_pointer_type,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    STATE(116), 1,
      sym_type,
    STATE(176), 1,
      sym_array_type,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(23), 2,
      anon_sym_UUU,
      anon_sym_SSS,
    ACTIONS(25), 2,
      anon_sym_F,
      anon_sym_FF,
    ACTIONS(31), 2,
      anon_sym_SSF,
      anon_sym_UFFF,
    ACTIONS(33), 2,
      anon_sym_Int,
      anon_sym_Real,
    ACTIONS(35), 2,
      sym_bool_type,
      sym_void_type,
    STATE(81), 2,
      sym_scalar_type,
      sym_quantity_type,
    STATE(95), 2,
      sym_pointer_type,
      sym_address_type,
    ACTIONS(37), 3,
      anon_sym_CC,
      anon_sym_MM,
      anon_sym_PP,
    ACTIONS(39), 3,
      anon_sym_CCC,
      anon_sym_MMM,
      anon_sym_PPP,
    STATE(184), 3,
      sym_typed_element_array_type,
      sym_vector_type,
      sym_pointer_addressable_array_type,
    ACTIONS(21), 4,
      anon_sym_U,
      anon_sym_UU,
      anon_sym_S,
      anon_sym_SS,
    STATE(99), 4,
      sym_integer_type,
      sym_unit_fractional_type,
      sym_fixed_point_type,
      sym_numeric_constant_type,
  [168] = 10,
    ACTIONS(51), 1,
      anon_sym_if,
    ACTIONS(53), 1,
      anon_sym_do,
    ACTIONS(55), 1,
      anon_sym_while,
    ACTIONS(57), 1,
      anon_sym_for,
    ACTIONS(59), 1,
      anon_sym_switch,
    ACTIONS(61), 1,
      anon_sym_fn,
    ACTIONS(63), 1,
      sym_dedent,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(49), 3,
      sym_expression,
      sym_break_statement,
      sym_continue_statement,
    STATE(7), 9,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_if_statement,
      sym_while_statement,
      sym_for_statement,
      sym_switch_statement,
      sym_function_definition,
      aux_sym_program_repeat1,
  [210] = 10,
    ACTIONS(51), 1,
      anon_sym_if,
    ACTIONS(53), 1,
      anon_sym_do,
    ACTIONS(55), 1,
      anon_sym_while,
    ACTIONS(57), 1,
      anon_sym_for,
    ACTIONS(59), 1,
      anon_sym_switch,
    ACTIONS(61), 1,
      anon_sym_fn,
    ACTIONS(67), 1,
      sym_dedent,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(65), 3,
      sym_expression,
      sym_break_statement,
      sym_continue_statement,
    STATE(4), 9,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_if_statement,
      sym_while_statement,
      sym_for_statement,
      sym_switch_statement,
      sym_function_definition,
      aux_sym_program_repeat1,
  [252] = 10,
    ACTIONS(51), 1,
      anon_sym_if,
    ACTIONS(53), 1,
      anon_sym_do,
    ACTIONS(55), 1,
      anon_sym_while,
    ACTIONS(57), 1,
      anon_sym_for,
    ACTIONS(59), 1,
      anon_sym_switch,
    ACTIONS(61), 1,
      anon_sym_fn,
    ACTIONS(71), 1,
      sym_dedent,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(69), 3,
      sym_expression,
      sym_break_statement,
      sym_continue_statement,
    STATE(10), 9,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_if_statement,
      sym_while_statement,
      sym_for_statement,
      sym_switch_statement,
      sym_function_definition,
      aux_sym_program_repeat1,
  [294] = 10,
    ACTIONS(76), 1,
      anon_sym_if,
    ACTIONS(79), 1,
      anon_sym_do,
    ACTIONS(82), 1,
      anon_sym_while,
    ACTIONS(85), 1,
      anon_sym_for,
    ACTIONS(88), 1,
      anon_sym_switch,
    ACTIONS(91), 1,
      anon_sym_fn,
    ACTIONS(94), 1,
      sym_dedent,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(73), 3,
      sym_expression,
      sym_break_statement,
      sym_continue_statement,
    STATE(7), 9,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_if_statement,
      sym_while_statement,
      sym_for_statement,
      sym_switch_statement,
      sym_function_definition,
      aux_sym_program_repeat1,
  [336] = 10,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(11), 1,
      anon_sym_do,
    ACTIONS(13), 1,
      anon_sym_while,
    ACTIONS(15), 1,
      anon_sym_for,
    ACTIONS(17), 1,
      anon_sym_switch,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(98), 3,
      sym_expression,
      sym_break_statement,
      sym_continue_statement,
    STATE(9), 9,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_if_statement,
      sym_while_statement,
      sym_for_statement,
      sym_switch_statement,
      sym_function_definition,
      aux_sym_program_repeat1,
  [378] = 10,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 1,
      anon_sym_if,
    ACTIONS(106), 1,
      anon_sym_do,
    ACTIONS(109), 1,
      anon_sym_while,
    ACTIONS(112), 1,
      anon_sym_for,
    ACTIONS(115), 1,
      anon_sym_switch,
    ACTIONS(118), 1,
      anon_sym_fn,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(100), 3,
      sym_expression,
      sym_break_statement,
      sym_continue_statement,
    STATE(9), 9,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_if_statement,
      sym_while_statement,
      sym_for_statement,
      sym_switch_statement,
      sym_function_definition,
      aux_sym_program_repeat1,
  [420] = 10,
    ACTIONS(51), 1,
      anon_sym_if,
    ACTIONS(53), 1,
      anon_sym_do,
    ACTIONS(55), 1,
      anon_sym_while,
    ACTIONS(57), 1,
      anon_sym_for,
    ACTIONS(59), 1,
      anon_sym_switch,
    ACTIONS(61), 1,
      anon_sym_fn,
    ACTIONS(121), 1,
      sym_dedent,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(49), 3,
      sym_expression,
      sym_break_statement,
      sym_continue_statement,
    STATE(7), 9,
      sym__statement,
      sym__simple_statement,
      sym__compound_statement,
      sym_if_statement,
      sym_while_statement,
      sym_for_statement,
      sym_switch_statement,
      sym_function_definition,
      aux_sym_program_repeat1,
  [462] = 6,
    ACTIONS(125), 1,
      anon_sym_elseif,
    ACTIONS(127), 1,
      anon_sym_else,
    STATE(66), 1,
      sym_else_clause,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(15), 2,
      sym_else_if_clause,
      aux_sym_if_statement_repeat1,
    ACTIONS(123), 10,
      ts_builtin_sym_end,
      sym_expression,
      sym_break_statement,
      sym_continue_statement,
      anon_sym_if,
      anon_sym_do,
      anon_sym_while,
      anon_sym_for,
      anon_sym_switch,
      anon_sym_fn,
  [492] = 6,
    ACTIONS(125), 1,
      anon_sym_elseif,
    ACTIONS(127), 1,
      anon_sym_else,
    STATE(36), 1,
      sym_else_clause,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(11), 2,
      sym_else_if_clause,
      aux_sym_if_statement_repeat1,
    ACTIONS(129), 10,
      ts_builtin_sym_end,
      sym_expression,
      sym_break_statement,
      sym_continue_statement,
      anon_sym_if,
      anon_sym_do,
      anon_sym_while,
      anon_sym_for,
      anon_sym_switch,
      anon_sym_fn,
  [522] = 6,
    ACTIONS(131), 1,
      anon_sym_elseif,
    ACTIONS(133), 1,
      anon_sym_else,
    STATE(50), 1,
      sym_else_clause,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(14), 2,
      sym_else_if_clause,
      aux_sym_if_statement_repeat1,
    ACTIONS(129), 10,
      sym_dedent,
      sym_expression,
      sym_break_statement,
      sym_continue_statement,
      anon_sym_if,
      anon_sym_do,
      anon_sym_while,
      anon_sym_for,
      anon_sym_switch,
      anon_sym_fn,
  [552] = 6,
    ACTIONS(131), 1,
      anon_sym_elseif,
    ACTIONS(133), 1,
      anon_sym_else,
    STATE(39), 1,
      sym_else_clause,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(17), 2,
      sym_else_if_clause,
      aux_sym_if_statement_repeat1,
    ACTIONS(123), 10,
      sym_dedent,
      sym_expression,
      sym_break_statement,
      sym_continue_statement,
      anon_sym_if,
      anon_sym_do,
      anon_sym_while,
      anon_sym_for,
      anon_sym_switch,
      anon_sym_fn,
  [582] = 5,
    ACTIONS(137), 1,
      anon_sym_elseif,
    ACTIONS(140), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(15), 2,
      sym_else_if_clause,
      aux_sym_if_statement_repeat1,
    ACTIONS(135), 10,
      ts_builtin_sym_end,
      sym_expression,
      sym_break_statement,
      sym_continue_statement,
      anon_sym_if,
      anon_sym_do,
      anon_sym_while,
      anon_sym_for,
      anon_sym_switch,
      anon_sym_fn,
  [609] = 3,
    ACTIONS(144), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(142), 13,
      sym_dedent,
      sym_expression,
      sym_break_statement,
      sym_continue_statement,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_do,
      anon_sym_while,
      anon_sym_for,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_fn,
  [632] = 5,
    ACTIONS(140), 1,
      anon_sym_else,
    ACTIONS(146), 1,
      anon_sym_elseif,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(17), 2,
      sym_else_if_clause,
      aux_sym_if_statement_repeat1,
    ACTIONS(135), 10,
      sym_dedent,
      sym_expression,
      sym_break_statement,
      sym_continue_statement,
      anon_sym_if,
      anon_sym_do,
      anon_sym_while,
      anon_sym_for,
      anon_sym_switch,
      anon_sym_fn,
  [659] = 3,
    ACTIONS(151), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(149), 13,
      sym_dedent,
      sym_expression,
      sym_break_statement,
      sym_continue_statement,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_do,
      anon_sym_while,
      anon_sym_for,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_fn,
  [682] = 3,
    ACTIONS(155), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(153), 11,
      ts_builtin_sym_end,
      sym_expression,
      sym_break_statement,
      sym_continue_statement,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_do,
      anon_sym_while,
      anon_sym_for,
      anon_sym_switch,
      anon_sym_fn,
  [703] = 3,
    ACTIONS(144), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(142), 11,
      ts_builtin_sym_end,
      sym_expression,
      sym_break_statement,
      sym_continue_statement,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_do,
      anon_sym_while,
      anon_sym_for,
      anon_sym_switch,
      anon_sym_fn,
  [724] = 3,
    ACTIONS(151), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(149), 11,
      ts_builtin_sym_end,
      sym_expression,
      sym_break_statement,
      sym_continue_statement,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_do,
      anon_sym_while,
      anon_sym_for,
      anon_sym_switch,
      anon_sym_fn,
  [745] = 3,
    ACTIONS(155), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(153), 11,
      sym_dedent,
      sym_expression,
      sym_break_statement,
      sym_continue_statement,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_do,
      anon_sym_while,
      anon_sym_for,
      anon_sym_switch,
      anon_sym_fn,
  [766] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(157), 10,
      ts_builtin_sym_end,
      sym_expression,
      sym_break_statement,
      sym_continue_statement,
      anon_sym_if,
      anon_sym_do,
      anon_sym_while,
      anon_sym_for,
      anon_sym_switch,
      anon_sym_fn,
  [783] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(159), 10,
      sym_dedent,
      sym_expression,
      sym_break_statement,
      sym_continue_statement,
      anon_sym_if,
      anon_sym_do,
      anon_sym_while,
      anon_sym_for,
      anon_sym_switch,
      anon_sym_fn,
  [800] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(161), 10,
      sym_dedent,
      sym_expression,
      sym_break_statement,
      sym_continue_statement,
      anon_sym_if,
      anon_sym_do,
      anon_sym_while,
      anon_sym_for,
      anon_sym_switch,
      anon_sym_fn,
  [817] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(163), 10,
      sym_dedent,
      sym_expression,
      sym_break_statement,
      sym_continue_statement,
      anon_sym_if,
      anon_sym_do,
      anon_sym_while,
      anon_sym_for,
      anon_sym_switch,
      anon_sym_fn,
  [834] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(165), 10,
      sym_dedent,
      sym_expression,
      sym_break_statement,
      sym_continue_statement,
      anon_sym_if,
      anon_sym_do,
      anon_sym_while,
      anon_sym_for,
      anon_sym_switch,
      anon_sym_fn,
  [851] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(167), 10,
      ts_builtin_sym_end,
      sym_expression,
      sym_break_statement,
      sym_continue_statement,
      anon_sym_if,
      anon_sym_do,
      anon_sym_while,
      anon_sym_for,
      anon_sym_switch,
      anon_sym_fn,
  [868] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(169), 10,
      sym_dedent,
      sym_expression,
      sym_break_statement,
      sym_continue_statement,
      anon_sym_if,
      anon_sym_do,
      anon_sym_while,
      anon_sym_for,
      anon_sym_switch,
      anon_sym_fn,
  [885] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(171), 10,
      sym_dedent,
      sym_expression,
      sym_break_statement,
      sym_continue_statement,
      anon_sym_if,
      anon_sym_do,
      anon_sym_while,
      anon_sym_for,
      anon_sym_switch,
      anon_sym_fn,
  [902] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(173), 10,
      sym_dedent,
      sym_expression,
      sym_break_statement,
      sym_continue_statement,
      anon_sym_if,
      anon_sym_do,
      anon_sym_while,
      anon_sym_for,
      anon_sym_switch,
      anon_sym_fn,
  [919] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(173), 10,
      ts_builtin_sym_end,
      sym_expression,
      sym_break_statement,
      sym_continue_statement,
      anon_sym_if,
      anon_sym_do,
      anon_sym_while,
      anon_sym_for,
      anon_sym_switch,
      anon_sym_fn,
  [936] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(175), 10,
      ts_builtin_sym_end,
      sym_expression,
      sym_break_statement,
      sym_continue_statement,
      anon_sym_if,
      anon_sym_do,
      anon_sym_while,
      anon_sym_for,
      anon_sym_switch,
      anon_sym_fn,
  [953] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(177), 10,
      sym_dedent,
      sym_expression,
      sym_break_statement,
      sym_continue_statement,
      anon_sym_if,
      anon_sym_do,
      anon_sym_while,
      anon_sym_for,
      anon_sym_switch,
      anon_sym_fn,
  [970] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(179), 10,
      sym_dedent,
      sym_expression,
      sym_break_statement,
      sym_continue_statement,
      anon_sym_if,
      anon_sym_do,
      anon_sym_while,
      anon_sym_for,
      anon_sym_switch,
      anon_sym_fn,
  [987] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(123), 10,
      ts_builtin_sym_end,
      sym_expression,
      sym_break_statement,
      sym_continue_statement,
      anon_sym_if,
      anon_sym_do,
      anon_sym_while,
      anon_sym_for,
      anon_sym_switch,
      anon_sym_fn,
  [1004] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(171), 10,
      ts_builtin_sym_end,
      sym_expression,
      sym_break_statement,
      sym_continue_statement,
      anon_sym_if,
      anon_sym_do,
      anon_sym_while,
      anon_sym_for,
      anon_sym_switch,
      anon_sym_fn,
  [1021] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(177), 10,
      ts_builtin_sym_end,
      sym_expression,
      sym_break_statement,
      sym_continue_statement,
      anon_sym_if,
      anon_sym_do,
      anon_sym_while,
      anon_sym_for,
      anon_sym_switch,
      anon_sym_fn,
  [1038] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(181), 10,
      sym_dedent,
      sym_expression,
      sym_break_statement,
      sym_continue_statement,
      anon_sym_if,
      anon_sym_do,
      anon_sym_while,
      anon_sym_for,
      anon_sym_switch,
      anon_sym_fn,
  [1055] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(183), 10,
      sym_dedent,
      sym_expression,
      sym_break_statement,
      sym_continue_statement,
      anon_sym_if,
      anon_sym_do,
      anon_sym_while,
      anon_sym_for,
      anon_sym_switch,
      anon_sym_fn,
  [1072] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(185), 10,
      sym_dedent,
      sym_expression,
      sym_break_statement,
      sym_continue_statement,
      anon_sym_if,
      anon_sym_do,
      anon_sym_while,
      anon_sym_for,
      anon_sym_switch,
      anon_sym_fn,
  [1089] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(187), 10,
      sym_dedent,
      sym_expression,
      sym_break_statement,
      sym_continue_statement,
      anon_sym_if,
      anon_sym_do,
      anon_sym_while,
      anon_sym_for,
      anon_sym_switch,
      anon_sym_fn,
  [1106] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(189), 10,
      sym_dedent,
      sym_expression,
      sym_break_statement,
      sym_continue_statement,
      anon_sym_if,
      anon_sym_do,
      anon_sym_while,
      anon_sym_for,
      anon_sym_switch,
      anon_sym_fn,
  [1123] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(157), 10,
      sym_dedent,
      sym_expression,
      sym_break_statement,
      sym_continue_statement,
      anon_sym_if,
      anon_sym_do,
      anon_sym_while,
      anon_sym_for,
      anon_sym_switch,
      anon_sym_fn,
  [1140] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(189), 10,
      ts_builtin_sym_end,
      sym_expression,
      sym_break_statement,
      sym_continue_statement,
      anon_sym_if,
      anon_sym_do,
      anon_sym_while,
      anon_sym_for,
      anon_sym_switch,
      anon_sym_fn,
  [1157] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(187), 10,
      ts_builtin_sym_end,
      sym_expression,
      sym_break_statement,
      sym_continue_statement,
      anon_sym_if,
      anon_sym_do,
      anon_sym_while,
      anon_sym_for,
      anon_sym_switch,
      anon_sym_fn,
  [1174] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(191), 10,
      sym_dedent,
      sym_expression,
      sym_break_statement,
      sym_continue_statement,
      anon_sym_if,
      anon_sym_do,
      anon_sym_while,
      anon_sym_for,
      anon_sym_switch,
      anon_sym_fn,
  [1191] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(193), 10,
      sym_dedent,
      sym_expression,
      sym_break_statement,
      sym_continue_statement,
      anon_sym_if,
      anon_sym_do,
      anon_sym_while,
      anon_sym_for,
      anon_sym_switch,
      anon_sym_fn,
  [1208] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(169), 10,
      ts_builtin_sym_end,
      sym_expression,
      sym_break_statement,
      sym_continue_statement,
      anon_sym_if,
      anon_sym_do,
      anon_sym_while,
      anon_sym_for,
      anon_sym_switch,
      anon_sym_fn,
  [1225] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(123), 10,
      sym_dedent,
      sym_expression,
      sym_break_statement,
      sym_continue_statement,
      anon_sym_if,
      anon_sym_do,
      anon_sym_while,
      anon_sym_for,
      anon_sym_switch,
      anon_sym_fn,
  [1242] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(195), 10,
      sym_dedent,
      sym_expression,
      sym_break_statement,
      sym_continue_statement,
      anon_sym_if,
      anon_sym_do,
      anon_sym_while,
      anon_sym_for,
      anon_sym_switch,
      anon_sym_fn,
  [1259] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(175), 10,
      sym_dedent,
      sym_expression,
      sym_break_statement,
      sym_continue_statement,
      anon_sym_if,
      anon_sym_do,
      anon_sym_while,
      anon_sym_for,
      anon_sym_switch,
      anon_sym_fn,
  [1276] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(167), 10,
      sym_dedent,
      sym_expression,
      sym_break_statement,
      sym_continue_statement,
      anon_sym_if,
      anon_sym_do,
      anon_sym_while,
      anon_sym_for,
      anon_sym_switch,
      anon_sym_fn,
  [1293] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(197), 10,
      sym_dedent,
      sym_expression,
      sym_break_statement,
      sym_continue_statement,
      anon_sym_if,
      anon_sym_do,
      anon_sym_while,
      anon_sym_for,
      anon_sym_switch,
      anon_sym_fn,
  [1310] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(199), 10,
      sym_dedent,
      sym_expression,
      sym_break_statement,
      sym_continue_statement,
      anon_sym_if,
      anon_sym_do,
      anon_sym_while,
      anon_sym_for,
      anon_sym_switch,
      anon_sym_fn,
  [1327] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(201), 10,
      ts_builtin_sym_end,
      sym_expression,
      sym_break_statement,
      sym_continue_statement,
      anon_sym_if,
      anon_sym_do,
      anon_sym_while,
      anon_sym_for,
      anon_sym_switch,
      anon_sym_fn,
  [1344] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(203), 10,
      ts_builtin_sym_end,
      sym_expression,
      sym_break_statement,
      sym_continue_statement,
      anon_sym_if,
      anon_sym_do,
      anon_sym_while,
      anon_sym_for,
      anon_sym_switch,
      anon_sym_fn,
  [1361] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(199), 10,
      ts_builtin_sym_end,
      sym_expression,
      sym_break_statement,
      sym_continue_statement,
      anon_sym_if,
      anon_sym_do,
      anon_sym_while,
      anon_sym_for,
      anon_sym_switch,
      anon_sym_fn,
  [1378] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(197), 10,
      ts_builtin_sym_end,
      sym_expression,
      sym_break_statement,
      sym_continue_statement,
      anon_sym_if,
      anon_sym_do,
      anon_sym_while,
      anon_sym_for,
      anon_sym_switch,
      anon_sym_fn,
  [1395] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(159), 10,
      ts_builtin_sym_end,
      sym_expression,
      sym_break_statement,
      sym_continue_statement,
      anon_sym_if,
      anon_sym_do,
      anon_sym_while,
      anon_sym_for,
      anon_sym_switch,
      anon_sym_fn,
  [1412] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(193), 10,
      ts_builtin_sym_end,
      sym_expression,
      sym_break_statement,
      sym_continue_statement,
      anon_sym_if,
      anon_sym_do,
      anon_sym_while,
      anon_sym_for,
      anon_sym_switch,
      anon_sym_fn,
  [1429] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(191), 10,
      ts_builtin_sym_end,
      sym_expression,
      sym_break_statement,
      sym_continue_statement,
      anon_sym_if,
      anon_sym_do,
      anon_sym_while,
      anon_sym_for,
      anon_sym_switch,
      anon_sym_fn,
  [1446] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(203), 10,
      sym_dedent,
      sym_expression,
      sym_break_statement,
      sym_continue_statement,
      anon_sym_if,
      anon_sym_do,
      anon_sym_while,
      anon_sym_for,
      anon_sym_switch,
      anon_sym_fn,
  [1463] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(185), 10,
      ts_builtin_sym_end,
      sym_expression,
      sym_break_statement,
      sym_continue_statement,
      anon_sym_if,
      anon_sym_do,
      anon_sym_while,
      anon_sym_for,
      anon_sym_switch,
      anon_sym_fn,
  [1480] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(183), 10,
      ts_builtin_sym_end,
      sym_expression,
      sym_break_statement,
      sym_continue_statement,
      anon_sym_if,
      anon_sym_do,
      anon_sym_while,
      anon_sym_for,
      anon_sym_switch,
      anon_sym_fn,
  [1497] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(181), 10,
      ts_builtin_sym_end,
      sym_expression,
      sym_break_statement,
      sym_continue_statement,
      anon_sym_if,
      anon_sym_do,
      anon_sym_while,
      anon_sym_for,
      anon_sym_switch,
      anon_sym_fn,
  [1514] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(201), 10,
      sym_dedent,
      sym_expression,
      sym_break_statement,
      sym_continue_statement,
      anon_sym_if,
      anon_sym_do,
      anon_sym_while,
      anon_sym_for,
      anon_sym_switch,
      anon_sym_fn,
  [1531] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(195), 10,
      ts_builtin_sym_end,
      sym_expression,
      sym_break_statement,
      sym_continue_statement,
      anon_sym_if,
      anon_sym_do,
      anon_sym_while,
      anon_sym_for,
      anon_sym_switch,
      anon_sym_fn,
  [1548] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(161), 10,
      ts_builtin_sym_end,
      sym_expression,
      sym_break_statement,
      sym_continue_statement,
      anon_sym_if,
      anon_sym_do,
      anon_sym_while,
      anon_sym_for,
      anon_sym_switch,
      anon_sym_fn,
  [1565] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(163), 10,
      ts_builtin_sym_end,
      sym_expression,
      sym_break_statement,
      sym_continue_statement,
      anon_sym_if,
      anon_sym_do,
      anon_sym_while,
      anon_sym_for,
      anon_sym_switch,
      anon_sym_fn,
  [1582] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(165), 10,
      ts_builtin_sym_end,
      sym_expression,
      sym_break_statement,
      sym_continue_statement,
      anon_sym_if,
      anon_sym_do,
      anon_sym_while,
      anon_sym_for,
      anon_sym_switch,
      anon_sym_fn,
  [1599] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(179), 10,
      ts_builtin_sym_end,
      sym_expression,
      sym_break_statement,
      sym_continue_statement,
      anon_sym_if,
      anon_sym_do,
      anon_sym_while,
      anon_sym_for,
      anon_sym_switch,
      anon_sym_fn,
  [1616] = 5,
    ACTIONS(205), 1,
      anon_sym_case,
    ACTIONS(207), 1,
      anon_sym_default,
    ACTIONS(209), 1,
      sym_dedent,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(75), 3,
      sym_case_clause,
      sym_default_clause,
      aux_sym_switch_body_repeat1,
  [1635] = 5,
    ACTIONS(205), 1,
      anon_sym_case,
    ACTIONS(207), 1,
      anon_sym_default,
    ACTIONS(211), 1,
      sym_dedent,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(76), 3,
      sym_case_clause,
      sym_default_clause,
      aux_sym_switch_body_repeat1,
  [1654] = 5,
    ACTIONS(205), 1,
      anon_sym_case,
    ACTIONS(207), 1,
      anon_sym_default,
    ACTIONS(213), 1,
      sym_dedent,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(76), 3,
      sym_case_clause,
      sym_default_clause,
      aux_sym_switch_body_repeat1,
  [1673] = 5,
    ACTIONS(215), 1,
      anon_sym_case,
    ACTIONS(218), 1,
      anon_sym_default,
    ACTIONS(221), 1,
      sym_dedent,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(76), 3,
      sym_case_clause,
      sym_default_clause,
      aux_sym_switch_body_repeat1,
  [1692] = 5,
    ACTIONS(205), 1,
      anon_sym_case,
    ACTIONS(207), 1,
      anon_sym_default,
    ACTIONS(223), 1,
      sym_dedent,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(74), 3,
      sym_case_clause,
      sym_default_clause,
      aux_sym_switch_body_repeat1,
  [1711] = 4,
    ACTIONS(227), 1,
      sym_indent,
    STATE(84), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(225), 3,
      sym_dedent,
      anon_sym_case,
      anon_sym_default,
  [1727] = 4,
    ACTIONS(227), 1,
      sym_indent,
    STATE(98), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(229), 3,
      sym_dedent,
      anon_sym_case,
      anon_sym_default,
  [1743] = 4,
    ACTIONS(231), 1,
      sym_expression,
    ACTIONS(233), 1,
      sym_indent,
    STATE(70), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [1757] = 4,
    ACTIONS(235), 1,
      anon_sym_LBRACK,
    ACTIONS(237), 1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(239), 1,
      sym_indent,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [1771] = 4,
    ACTIONS(227), 1,
      sym_indent,
    ACTIONS(241), 1,
      sym_expression,
    STATE(41), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [1785] = 4,
    ACTIONS(233), 1,
      sym_indent,
    ACTIONS(243), 1,
      sym_expression,
    STATE(64), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [1799] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(245), 3,
      sym_dedent,
      anon_sym_case,
      anon_sym_default,
  [1809] = 4,
    ACTIONS(227), 1,
      sym_indent,
    ACTIONS(247), 1,
      sym_expression,
    STATE(25), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [1823] = 4,
    ACTIONS(227), 1,
      sym_indent,
    ACTIONS(249), 1,
      sym_expression,
    STATE(26), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [1837] = 4,
    ACTIONS(227), 1,
      sym_indent,
    ACTIONS(251), 1,
      sym_expression,
    STATE(31), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [1851] = 4,
    ACTIONS(233), 1,
      sym_indent,
    ACTIONS(253), 1,
      sym_expression,
    STATE(60), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [1865] = 4,
    ACTIONS(227), 1,
      sym_indent,
    ACTIONS(255), 1,
      sym_expression,
    STATE(34), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [1879] = 4,
    ACTIONS(227), 1,
      sym_indent,
    ACTIONS(257), 1,
      sym_expression,
    STATE(35), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [1893] = 4,
    ACTIONS(233), 1,
      sym_indent,
    ACTIONS(259), 1,
      sym_expression,
    STATE(45), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [1907] = 4,
    ACTIONS(227), 1,
      sym_indent,
    ACTIONS(261), 1,
      sym_expression,
    STATE(24), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [1921] = 4,
    ACTIONS(233), 1,
      sym_indent,
    ACTIONS(263), 1,
      sym_expression,
    STATE(69), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [1935] = 4,
    ACTIONS(227), 1,
      sym_indent,
    ACTIONS(265), 1,
      sym_expression,
    STATE(43), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [1949] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(267), 3,
      sym_indent,
      anon_sym_LBRACK,
      anon_sym_LBRACE_RBRACE,
  [1959] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(269), 3,
      sym_indent,
      anon_sym_LBRACK,
      anon_sym_LBRACE_RBRACE,
  [1969] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(271), 3,
      sym_indent,
      anon_sym_LBRACK,
      anon_sym_LBRACE_RBRACE,
  [1979] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(273), 3,
      sym_dedent,
      anon_sym_case,
      anon_sym_default,
  [1989] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(275), 3,
      sym_indent,
      anon_sym_LBRACK,
      anon_sym_LBRACE_RBRACE,
  [1999] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(277), 3,
      sym_indent,
      anon_sym_LBRACK,
      anon_sym_LBRACE_RBRACE,
  [2009] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(279), 3,
      sym_indent,
      anon_sym_LBRACK,
      anon_sym_LBRACE_RBRACE,
  [2019] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(281), 3,
      sym_indent,
      anon_sym_LBRACK,
      anon_sym_LBRACE_RBRACE,
  [2029] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(283), 3,
      sym_indent,
      anon_sym_LBRACK,
      anon_sym_LBRACE_RBRACE,
  [2039] = 4,
    ACTIONS(233), 1,
      sym_indent,
    ACTIONS(285), 1,
      sym_expression,
    STATE(32), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2053] = 4,
    ACTIONS(233), 1,
      sym_indent,
    ACTIONS(287), 1,
      sym_expression,
    STATE(38), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2067] = 4,
    ACTIONS(233), 1,
      sym_indent,
    ACTIONS(289), 1,
      sym_expression,
    STATE(72), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2081] = 3,
    ACTIONS(227), 1,
      sym_indent,
    STATE(51), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2092] = 3,
    ACTIONS(227), 1,
      sym_indent,
    STATE(40), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2103] = 3,
    ACTIONS(233), 1,
      sym_indent,
    STATE(19), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2114] = 3,
    ACTIONS(291), 1,
      sym_expression,
    ACTIONS(293), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2125] = 3,
    ACTIONS(295), 1,
      sym_expression,
    ACTIONS(297), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2136] = 3,
    ACTIONS(299), 1,
      anon_sym_while,
    ACTIONS(301), 1,
      anon_sym_for,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2147] = 3,
    ACTIONS(303), 1,
      sym_expression,
    ACTIONS(305), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2158] = 3,
    ACTIONS(233), 1,
      sym_indent,
    STATE(56), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2169] = 3,
    ACTIONS(307), 1,
      anon_sym_while,
    ACTIONS(309), 1,
      anon_sym_for,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2180] = 3,
    ACTIONS(233), 1,
      sym_indent,
    STATE(71), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2191] = 3,
    ACTIONS(311), 1,
      sym_expression,
    ACTIONS(313), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2202] = 3,
    ACTIONS(315), 1,
      sym_expression,
    ACTIONS(317), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2213] = 3,
    ACTIONS(319), 1,
      sym_expression,
    ACTIONS(321), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2224] = 3,
    ACTIONS(233), 1,
      sym_indent,
    STATE(37), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2235] = 3,
    ACTIONS(227), 1,
      sym_indent,
    STATE(67), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2246] = 3,
    ACTIONS(227), 1,
      sym_indent,
    STATE(63), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2257] = 3,
    ACTIONS(323), 1,
      sym_expression,
    ACTIONS(325), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2268] = 3,
    ACTIONS(233), 1,
      sym_indent,
    STATE(65), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2279] = 3,
    ACTIONS(227), 1,
      sym_indent,
    STATE(55), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2290] = 3,
    ACTIONS(233), 1,
      sym_indent,
    STATE(62), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2301] = 3,
    ACTIONS(227), 1,
      sym_indent,
    STATE(54), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2312] = 3,
    ACTIONS(327), 1,
      sym_expression,
    ACTIONS(329), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2323] = 3,
    ACTIONS(331), 1,
      sym_expression,
    ACTIONS(333), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2334] = 3,
    ACTIONS(233), 1,
      sym_indent,
    STATE(61), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2345] = 3,
    ACTIONS(233), 1,
      sym_indent,
    STATE(23), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2356] = 3,
    ACTIONS(227), 1,
      sym_indent,
    STATE(48), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2367] = 3,
    ACTIONS(335), 1,
      sym_indent,
    STATE(33), 1,
      sym_switch_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2378] = 3,
    ACTIONS(337), 1,
      sym_expression,
    ACTIONS(339), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2389] = 3,
    ACTIONS(227), 1,
      sym_indent,
    STATE(47), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2400] = 3,
    ACTIONS(233), 1,
      sym_indent,
    STATE(28), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2411] = 3,
    ACTIONS(341), 1,
      sym_expression,
    ACTIONS(343), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2422] = 3,
    ACTIONS(233), 1,
      sym_indent,
    STATE(68), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2433] = 3,
    ACTIONS(233), 1,
      sym_indent,
    STATE(12), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2444] = 3,
    ACTIONS(345), 1,
      sym_numeric_literal,
    ACTIONS(347), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2455] = 3,
    ACTIONS(227), 1,
      sym_indent,
    STATE(13), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2466] = 3,
    ACTIONS(227), 1,
      sym_indent,
    STATE(53), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2477] = 3,
    ACTIONS(349), 1,
      sym_indent,
    STATE(52), 1,
      sym_switch_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2488] = 3,
    ACTIONS(227), 1,
      sym_indent,
    STATE(22), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2499] = 3,
    ACTIONS(227), 1,
      sym_indent,
    STATE(44), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2510] = 3,
    ACTIONS(233), 1,
      sym_indent,
    STATE(57), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2521] = 3,
    ACTIONS(227), 1,
      sym_indent,
    STATE(27), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2532] = 3,
    ACTIONS(351), 1,
      sym_expression,
    ACTIONS(353), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2543] = 3,
    ACTIONS(227), 1,
      sym_indent,
    STATE(30), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2554] = 3,
    ACTIONS(233), 1,
      sym_indent,
    STATE(58), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2565] = 3,
    ACTIONS(233), 1,
      sym_indent,
    STATE(59), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2576] = 2,
    ACTIONS(355), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2584] = 2,
    ACTIONS(357), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2592] = 2,
    ACTIONS(359), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2600] = 2,
    ACTIONS(361), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2608] = 2,
    ACTIONS(363), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2616] = 2,
    ACTIONS(365), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2624] = 2,
    ACTIONS(367), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2632] = 2,
    ACTIONS(369), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2640] = 2,
    ACTIONS(371), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2648] = 2,
    ACTIONS(373), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2656] = 2,
    ACTIONS(375), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2664] = 2,
    ACTIONS(377), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2672] = 2,
    ACTIONS(379), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2680] = 2,
    ACTIONS(381), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2688] = 2,
    ACTIONS(383), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2696] = 2,
    ACTIONS(385), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2704] = 2,
    ACTIONS(387), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2712] = 2,
    ACTIONS(389), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2720] = 2,
    ACTIONS(391), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2728] = 2,
    ACTIONS(393), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2736] = 2,
    ACTIONS(395), 1,
      sym_indent,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2744] = 2,
    ACTIONS(397), 1,
      sym_indent,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2752] = 2,
    ACTIONS(399), 1,
      sym_numeric_literal,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2760] = 2,
    ACTIONS(401), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2768] = 2,
    ACTIONS(239), 1,
      sym_indent,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2776] = 2,
    ACTIONS(403), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2784] = 2,
    ACTIONS(405), 1,
      sym_indent,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2792] = 2,
    ACTIONS(407), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2800] = 2,
    ACTIONS(409), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2808] = 2,
    ACTIONS(411), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2816] = 2,
    ACTIONS(413), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2824] = 2,
    ACTIONS(415), 1,
      sym_indent,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2832] = 2,
    ACTIONS(417), 1,
      sym_indent,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2840] = 2,
    ACTIONS(419), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2848] = 2,
    ACTIONS(421), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2856] = 2,
    ACTIONS(423), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2864] = 2,
    ACTIONS(425), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 84,
  [SMALL_STATE(4)] = 168,
  [SMALL_STATE(5)] = 210,
  [SMALL_STATE(6)] = 252,
  [SMALL_STATE(7)] = 294,
  [SMALL_STATE(8)] = 336,
  [SMALL_STATE(9)] = 378,
  [SMALL_STATE(10)] = 420,
  [SMALL_STATE(11)] = 462,
  [SMALL_STATE(12)] = 492,
  [SMALL_STATE(13)] = 522,
  [SMALL_STATE(14)] = 552,
  [SMALL_STATE(15)] = 582,
  [SMALL_STATE(16)] = 609,
  [SMALL_STATE(17)] = 632,
  [SMALL_STATE(18)] = 659,
  [SMALL_STATE(19)] = 682,
  [SMALL_STATE(20)] = 703,
  [SMALL_STATE(21)] = 724,
  [SMALL_STATE(22)] = 745,
  [SMALL_STATE(23)] = 766,
  [SMALL_STATE(24)] = 783,
  [SMALL_STATE(25)] = 800,
  [SMALL_STATE(26)] = 817,
  [SMALL_STATE(27)] = 834,
  [SMALL_STATE(28)] = 851,
  [SMALL_STATE(29)] = 868,
  [SMALL_STATE(30)] = 885,
  [SMALL_STATE(31)] = 902,
  [SMALL_STATE(32)] = 919,
  [SMALL_STATE(33)] = 936,
  [SMALL_STATE(34)] = 953,
  [SMALL_STATE(35)] = 970,
  [SMALL_STATE(36)] = 987,
  [SMALL_STATE(37)] = 1004,
  [SMALL_STATE(38)] = 1021,
  [SMALL_STATE(39)] = 1038,
  [SMALL_STATE(40)] = 1055,
  [SMALL_STATE(41)] = 1072,
  [SMALL_STATE(42)] = 1089,
  [SMALL_STATE(43)] = 1106,
  [SMALL_STATE(44)] = 1123,
  [SMALL_STATE(45)] = 1140,
  [SMALL_STATE(46)] = 1157,
  [SMALL_STATE(47)] = 1174,
  [SMALL_STATE(48)] = 1191,
  [SMALL_STATE(49)] = 1208,
  [SMALL_STATE(50)] = 1225,
  [SMALL_STATE(51)] = 1242,
  [SMALL_STATE(52)] = 1259,
  [SMALL_STATE(53)] = 1276,
  [SMALL_STATE(54)] = 1293,
  [SMALL_STATE(55)] = 1310,
  [SMALL_STATE(56)] = 1327,
  [SMALL_STATE(57)] = 1344,
  [SMALL_STATE(58)] = 1361,
  [SMALL_STATE(59)] = 1378,
  [SMALL_STATE(60)] = 1395,
  [SMALL_STATE(61)] = 1412,
  [SMALL_STATE(62)] = 1429,
  [SMALL_STATE(63)] = 1446,
  [SMALL_STATE(64)] = 1463,
  [SMALL_STATE(65)] = 1480,
  [SMALL_STATE(66)] = 1497,
  [SMALL_STATE(67)] = 1514,
  [SMALL_STATE(68)] = 1531,
  [SMALL_STATE(69)] = 1548,
  [SMALL_STATE(70)] = 1565,
  [SMALL_STATE(71)] = 1582,
  [SMALL_STATE(72)] = 1599,
  [SMALL_STATE(73)] = 1616,
  [SMALL_STATE(74)] = 1635,
  [SMALL_STATE(75)] = 1654,
  [SMALL_STATE(76)] = 1673,
  [SMALL_STATE(77)] = 1692,
  [SMALL_STATE(78)] = 1711,
  [SMALL_STATE(79)] = 1727,
  [SMALL_STATE(80)] = 1743,
  [SMALL_STATE(81)] = 1757,
  [SMALL_STATE(82)] = 1771,
  [SMALL_STATE(83)] = 1785,
  [SMALL_STATE(84)] = 1799,
  [SMALL_STATE(85)] = 1809,
  [SMALL_STATE(86)] = 1823,
  [SMALL_STATE(87)] = 1837,
  [SMALL_STATE(88)] = 1851,
  [SMALL_STATE(89)] = 1865,
  [SMALL_STATE(90)] = 1879,
  [SMALL_STATE(91)] = 1893,
  [SMALL_STATE(92)] = 1907,
  [SMALL_STATE(93)] = 1921,
  [SMALL_STATE(94)] = 1935,
  [SMALL_STATE(95)] = 1949,
  [SMALL_STATE(96)] = 1959,
  [SMALL_STATE(97)] = 1969,
  [SMALL_STATE(98)] = 1979,
  [SMALL_STATE(99)] = 1989,
  [SMALL_STATE(100)] = 1999,
  [SMALL_STATE(101)] = 2009,
  [SMALL_STATE(102)] = 2019,
  [SMALL_STATE(103)] = 2029,
  [SMALL_STATE(104)] = 2039,
  [SMALL_STATE(105)] = 2053,
  [SMALL_STATE(106)] = 2067,
  [SMALL_STATE(107)] = 2081,
  [SMALL_STATE(108)] = 2092,
  [SMALL_STATE(109)] = 2103,
  [SMALL_STATE(110)] = 2114,
  [SMALL_STATE(111)] = 2125,
  [SMALL_STATE(112)] = 2136,
  [SMALL_STATE(113)] = 2147,
  [SMALL_STATE(114)] = 2158,
  [SMALL_STATE(115)] = 2169,
  [SMALL_STATE(116)] = 2180,
  [SMALL_STATE(117)] = 2191,
  [SMALL_STATE(118)] = 2202,
  [SMALL_STATE(119)] = 2213,
  [SMALL_STATE(120)] = 2224,
  [SMALL_STATE(121)] = 2235,
  [SMALL_STATE(122)] = 2246,
  [SMALL_STATE(123)] = 2257,
  [SMALL_STATE(124)] = 2268,
  [SMALL_STATE(125)] = 2279,
  [SMALL_STATE(126)] = 2290,
  [SMALL_STATE(127)] = 2301,
  [SMALL_STATE(128)] = 2312,
  [SMALL_STATE(129)] = 2323,
  [SMALL_STATE(130)] = 2334,
  [SMALL_STATE(131)] = 2345,
  [SMALL_STATE(132)] = 2356,
  [SMALL_STATE(133)] = 2367,
  [SMALL_STATE(134)] = 2378,
  [SMALL_STATE(135)] = 2389,
  [SMALL_STATE(136)] = 2400,
  [SMALL_STATE(137)] = 2411,
  [SMALL_STATE(138)] = 2422,
  [SMALL_STATE(139)] = 2433,
  [SMALL_STATE(140)] = 2444,
  [SMALL_STATE(141)] = 2455,
  [SMALL_STATE(142)] = 2466,
  [SMALL_STATE(143)] = 2477,
  [SMALL_STATE(144)] = 2488,
  [SMALL_STATE(145)] = 2499,
  [SMALL_STATE(146)] = 2510,
  [SMALL_STATE(147)] = 2521,
  [SMALL_STATE(148)] = 2532,
  [SMALL_STATE(149)] = 2543,
  [SMALL_STATE(150)] = 2554,
  [SMALL_STATE(151)] = 2565,
  [SMALL_STATE(152)] = 2576,
  [SMALL_STATE(153)] = 2584,
  [SMALL_STATE(154)] = 2592,
  [SMALL_STATE(155)] = 2600,
  [SMALL_STATE(156)] = 2608,
  [SMALL_STATE(157)] = 2616,
  [SMALL_STATE(158)] = 2624,
  [SMALL_STATE(159)] = 2632,
  [SMALL_STATE(160)] = 2640,
  [SMALL_STATE(161)] = 2648,
  [SMALL_STATE(162)] = 2656,
  [SMALL_STATE(163)] = 2664,
  [SMALL_STATE(164)] = 2672,
  [SMALL_STATE(165)] = 2680,
  [SMALL_STATE(166)] = 2688,
  [SMALL_STATE(167)] = 2696,
  [SMALL_STATE(168)] = 2704,
  [SMALL_STATE(169)] = 2712,
  [SMALL_STATE(170)] = 2720,
  [SMALL_STATE(171)] = 2728,
  [SMALL_STATE(172)] = 2736,
  [SMALL_STATE(173)] = 2744,
  [SMALL_STATE(174)] = 2752,
  [SMALL_STATE(175)] = 2760,
  [SMALL_STATE(176)] = 2768,
  [SMALL_STATE(177)] = 2776,
  [SMALL_STATE(178)] = 2784,
  [SMALL_STATE(179)] = 2792,
  [SMALL_STATE(180)] = 2800,
  [SMALL_STATE(181)] = 2808,
  [SMALL_STATE(182)] = 2816,
  [SMALL_STATE(183)] = 2824,
  [SMALL_STATE(184)] = 2832,
  [SMALL_STATE(185)] = 2840,
  [SMALL_STATE(186)] = 2848,
  [SMALL_STATE(187)] = 2856,
  [SMALL_STATE(188)] = 2864,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(168),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(112),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(169),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(111),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(152),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(188),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(171),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(115),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(154),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(148),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(155),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(156),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 4),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2), SHIFT_REPEAT(165),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2), SHIFT_REPEAT(177),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_if_clause, 3),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_if_clause, 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 4),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 7, .production_id = 11),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 6, .production_id = 6),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 6, .production_id = 5),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_body, 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 5, .production_id = 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 5, .production_id = 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_statement, 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 5, .production_id = 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 5),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 6, .production_id = 8),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_body, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 4),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 6, .production_id = 9),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 6, .production_id = 10),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 6, .production_id = 7),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 7, .production_id = 12),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 7, .production_id = 13),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 8, .production_id = 15),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 7, .production_id = 14),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_body_repeat1, 2), SHIFT_REPEAT(157),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_body_repeat1, 2), SHIFT_REPEAT(78),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_body_repeat1, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_clause, 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_clause, 2, .production_id = 4),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_clause, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity_type, 1),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address_type, 1),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_type, 1),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_clause, 3, .production_id = 4),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_type, 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_constant_type, 1),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fixed_point_type, 1),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit_fractional_type, 1),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_type, 1),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [367] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector_type, 2),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typed_element_array_type, 4),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typed_element_array_type, 3),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_addressable_array_type, 3),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 1),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
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

static const bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
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
    [ts_external_token_dedent] = true,
  },
  [4] = {
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
