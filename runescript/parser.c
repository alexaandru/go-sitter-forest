#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 177
#define LARGE_STATE_COUNT 19
#define SYMBOL_COUNT 95
#define ALIAS_COUNT 1
#define TOKEN_COUNT 52
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 12
#define PRODUCTION_ID_COUNT 7

enum ts_symbol_identifiers {
  sym_identifier = 1,
  sym_comment = 2,
  anon_sym_LBRACK = 3,
  anon_sym_COMMA = 4,
  anon_sym_RBRACK = 5,
  anon_sym_LPAREN = 6,
  anon_sym_RPAREN = 7,
  aux_sym_parameter_token1 = 8,
  aux_sym_parameter_token2 = 9,
  anon_sym_LBRACE = 10,
  anon_sym_RBRACE = 11,
  anon_sym_return = 12,
  anon_sym_SEMI = 13,
  anon_sym_if = 14,
  anon_sym_else = 15,
  anon_sym_while = 16,
  sym_switch_type_keyword = 17,
  anon_sym_case = 18,
  anon_sym_default = 19,
  anon_sym_COLON = 20,
  anon_sym_EQ = 21,
  anon_sym_DOLLAR = 22,
  sym_def_type_keyword = 23,
  anon_sym_GT = 24,
  anon_sym_GT_EQ = 25,
  anon_sym_LT = 26,
  anon_sym_LT_EQ = 27,
  anon_sym_BANG = 28,
  anon_sym_AMP = 29,
  anon_sym_PIPE = 30,
  anon_sym_calc = 31,
  anon_sym_STAR = 32,
  anon_sym_SLASH = 33,
  anon_sym_PERCENT = 34,
  anon_sym_PLUS = 35,
  anon_sym_DASH = 36,
  anon_sym_TILDE = 37,
  anon_sym_AT = 38,
  anon_sym_DOT_PERCENT = 39,
  anon_sym_CARET = 40,
  aux_sym_literal_token1 = 41,
  aux_sym_literal_token2 = 42,
  aux_sym_literal_token3 = 43,
  anon_sym_null = 44,
  sym_integer_literal = 45,
  sym_coord_literal = 46,
  anon_sym_DQUOTE = 47,
  sym_escape_sequence = 48,
  sym_string_tag = 49,
  aux_sym__advanced_identifier_token1 = 50,
  sym__string_chars = 51,
  sym_source_file = 52,
  sym_script = 53,
  sym_parameter_list = 54,
  sym_parameter = 55,
  sym_type_list = 56,
  sym_type = 57,
  sym__statement = 58,
  sym_block_statement = 59,
  sym_return_statement = 60,
  sym_if_statement = 61,
  sym_while_statement = 62,
  sym_switch_statement = 63,
  sym_switch_case = 64,
  sym_declaration_statement = 65,
  sym_array_declaration_statement = 66,
  sym_assignment_statement = 67,
  sym_expression_statement = 68,
  sym_empty_statement = 69,
  sym_expression_list = 70,
  sym_parenthesis = 71,
  sym__expression = 72,
  sym_condition = 73,
  sym_calc = 74,
  sym_arithmetic = 75,
  sym_call = 76,
  sym_assignable_variable_list = 77,
  sym_assignable_variable = 78,
  sym_local_variable = 79,
  sym_local_array_variable = 80,
  sym_game_variable = 81,
  sym_constant_variable = 82,
  sym_literal = 83,
  sym_string_literal = 84,
  sym_string_interpolation = 85,
  sym__advanced_identifier = 86,
  aux_sym_source_file_repeat1 = 87,
  aux_sym_script_repeat1 = 88,
  aux_sym_parameter_list_repeat1 = 89,
  aux_sym_type_list_repeat1 = 90,
  aux_sym_switch_statement_repeat1 = 91,
  aux_sym_expression_list_repeat1 = 92,
  aux_sym_assignable_variable_list_repeat1 = 93,
  aux_sym_string_literal_repeat1 = 94,
  alias_sym_declaration_variable = 95,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym_comment] = "comment",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym_parameter_token1] = "parameter_token1",
  [aux_sym_parameter_token2] = "parameter_type",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_return] = "return",
  [anon_sym_SEMI] = ";",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_while] = "while",
  [sym_switch_type_keyword] = "switch_type_keyword",
  [anon_sym_case] = "case",
  [anon_sym_default] = "default",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
  [anon_sym_DOLLAR] = "$",
  [sym_def_type_keyword] = "def_type_keyword",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_BANG] = "!",
  [anon_sym_AMP] = "&",
  [anon_sym_PIPE] = "|",
  [anon_sym_calc] = "calc",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_TILDE] = "~",
  [anon_sym_AT] = "@",
  [anon_sym_DOT_PERCENT] = ".%",
  [anon_sym_CARET] = "^",
  [aux_sym_literal_token1] = "literal_token1",
  [aux_sym_literal_token2] = "literal_token2",
  [aux_sym_literal_token3] = "literal_token3",
  [anon_sym_null] = "null",
  [sym_integer_literal] = "integer_literal",
  [sym_coord_literal] = "coord_literal",
  [anon_sym_DQUOTE] = "\"",
  [sym_escape_sequence] = "escape_sequence",
  [sym_string_tag] = "string_tag",
  [aux_sym__advanced_identifier_token1] = "identifier",
  [sym__string_chars] = "string_fragment",
  [sym_source_file] = "source_file",
  [sym_script] = "script",
  [sym_parameter_list] = "parameter_list",
  [sym_parameter] = "parameter",
  [sym_type_list] = "type_list",
  [sym_type] = "type",
  [sym__statement] = "_statement",
  [sym_block_statement] = "block_statement",
  [sym_return_statement] = "return_statement",
  [sym_if_statement] = "if_statement",
  [sym_while_statement] = "while_statement",
  [sym_switch_statement] = "switch_statement",
  [sym_switch_case] = "switch_case",
  [sym_declaration_statement] = "declaration_statement",
  [sym_array_declaration_statement] = "array_declaration_statement",
  [sym_assignment_statement] = "assignment_statement",
  [sym_expression_statement] = "expression_statement",
  [sym_empty_statement] = "empty_statement",
  [sym_expression_list] = "expression_list",
  [sym_parenthesis] = "parenthesis",
  [sym__expression] = "_expression",
  [sym_condition] = "condition",
  [sym_calc] = "calc",
  [sym_arithmetic] = "arithmetic",
  [sym_call] = "call",
  [sym_assignable_variable_list] = "assignable_variable_list",
  [sym_assignable_variable] = "assignable_variable",
  [sym_local_variable] = "local_variable",
  [sym_local_array_variable] = "local_array_variable",
  [sym_game_variable] = "game_variable",
  [sym_constant_variable] = "constant_variable",
  [sym_literal] = "literal",
  [sym_string_literal] = "string_literal",
  [sym_string_interpolation] = "string_interpolation",
  [sym__advanced_identifier] = "_advanced_identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_script_repeat1] = "script_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_type_list_repeat1] = "type_list_repeat1",
  [aux_sym_switch_statement_repeat1] = "switch_statement_repeat1",
  [aux_sym_expression_list_repeat1] = "expression_list_repeat1",
  [aux_sym_assignable_variable_list_repeat1] = "assignable_variable_list_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [alias_sym_declaration_variable] = "declaration_variable",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [sym_comment] = sym_comment,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_parameter_token1] = aux_sym_parameter_token1,
  [aux_sym_parameter_token2] = aux_sym_parameter_token2,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_while] = anon_sym_while,
  [sym_switch_type_keyword] = sym_switch_type_keyword,
  [anon_sym_case] = anon_sym_case,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [sym_def_type_keyword] = sym_def_type_keyword,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_calc] = anon_sym_calc,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_DOT_PERCENT] = anon_sym_DOT_PERCENT,
  [anon_sym_CARET] = anon_sym_CARET,
  [aux_sym_literal_token1] = aux_sym_literal_token1,
  [aux_sym_literal_token2] = aux_sym_literal_token2,
  [aux_sym_literal_token3] = aux_sym_literal_token3,
  [anon_sym_null] = anon_sym_null,
  [sym_integer_literal] = sym_integer_literal,
  [sym_coord_literal] = sym_coord_literal,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_string_tag] = sym_string_tag,
  [aux_sym__advanced_identifier_token1] = sym_identifier,
  [sym__string_chars] = sym__string_chars,
  [sym_source_file] = sym_source_file,
  [sym_script] = sym_script,
  [sym_parameter_list] = sym_parameter_list,
  [sym_parameter] = sym_parameter,
  [sym_type_list] = sym_type_list,
  [sym_type] = sym_type,
  [sym__statement] = sym__statement,
  [sym_block_statement] = sym_block_statement,
  [sym_return_statement] = sym_return_statement,
  [sym_if_statement] = sym_if_statement,
  [sym_while_statement] = sym_while_statement,
  [sym_switch_statement] = sym_switch_statement,
  [sym_switch_case] = sym_switch_case,
  [sym_declaration_statement] = sym_declaration_statement,
  [sym_array_declaration_statement] = sym_array_declaration_statement,
  [sym_assignment_statement] = sym_assignment_statement,
  [sym_expression_statement] = sym_expression_statement,
  [sym_empty_statement] = sym_empty_statement,
  [sym_expression_list] = sym_expression_list,
  [sym_parenthesis] = sym_parenthesis,
  [sym__expression] = sym__expression,
  [sym_condition] = sym_condition,
  [sym_calc] = sym_calc,
  [sym_arithmetic] = sym_arithmetic,
  [sym_call] = sym_call,
  [sym_assignable_variable_list] = sym_assignable_variable_list,
  [sym_assignable_variable] = sym_assignable_variable,
  [sym_local_variable] = sym_local_variable,
  [sym_local_array_variable] = sym_local_array_variable,
  [sym_game_variable] = sym_game_variable,
  [sym_constant_variable] = sym_constant_variable,
  [sym_literal] = sym_literal,
  [sym_string_literal] = sym_string_literal,
  [sym_string_interpolation] = sym_string_interpolation,
  [sym__advanced_identifier] = sym__advanced_identifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_script_repeat1] = aux_sym_script_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_type_list_repeat1] = aux_sym_type_list_repeat1,
  [aux_sym_switch_statement_repeat1] = aux_sym_switch_statement_repeat1,
  [aux_sym_expression_list_repeat1] = aux_sym_expression_list_repeat1,
  [aux_sym_assignable_variable_list_repeat1] = aux_sym_assignable_variable_list_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
  [alias_sym_declaration_variable] = alias_sym_declaration_variable,
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
  [sym_comment] = {
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_parameter_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_token2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [sym_switch_type_keyword] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_case] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [sym_def_type_keyword] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_calc] = {
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
  [anon_sym_PERCENT] = {
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
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_literal_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_literal_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [sym_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_coord_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_string_tag] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__advanced_identifier_token1] = {
    .visible = true,
    .named = true,
  },
  [sym__string_chars] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_script] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_type_list] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_block_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_while_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_switch_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_switch_case] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_array_declaration_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_empty_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_list] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesis] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_calc] = {
    .visible = true,
    .named = true,
  },
  [sym_arithmetic] = {
    .visible = true,
    .named = true,
  },
  [sym_call] = {
    .visible = true,
    .named = true,
  },
  [sym_assignable_variable_list] = {
    .visible = true,
    .named = true,
  },
  [sym_assignable_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_local_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_local_array_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_game_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_constant_variable] = {
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
  [sym_string_interpolation] = {
    .visible = true,
    .named = true,
  },
  [sym__advanced_identifier] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_script_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_switch_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_assignable_variable_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_declaration_variable] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_callee = 1,
  field_name = 2,
  field_subject = 3,
  field_trigger = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_callee] = "callee",
  [field_name] = "name",
  [field_subject] = "subject",
  [field_trigger] = "trigger",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_subject, 3},
    {field_trigger, 1},
  [2] =
    {field_name, 1},
  [3] =
    {field_callee, 0},
    {field_callee, 1},
  [5] =
    {field_callee, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [4] = {
    [0] = aux_sym_parameter_token2,
  },
  [6] = {
    [1] = alias_sym_declaration_variable,
    [2] = alias_sym_declaration_variable,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__advanced_identifier, 2,
    sym__advanced_identifier,
    alias_sym_declaration_variable,
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
  [21] = 20,
  [22] = 22,
  [23] = 19,
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
  [46] = 40,
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
  [59] = 49,
  [60] = 55,
  [61] = 61,
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
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 85,
  [94] = 94,
  [95] = 92,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 159,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 166,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(28);
      ADVANCE_MAP(
        '!', 86,
        '"', 106,
        '$', 80,
        '%', 91,
        '&', 87,
        '\'', 11,
        '(', 34,
        ')', 35,
        '*', 89,
        '+', 93,
        ',', 32,
        '-', 94,
        '.', 109,
        '/', 90,
        '0', 110,
        ':', 78,
        ';', 76,
        '<', 83,
        '=', 79,
        '>', 81,
        '@', 96,
        '[', 31,
        '\\', 23,
        ']', 33,
        '^', 98,
        'c', 122,
        'd', 131,
        'e', 139,
        'f', 169,
        'i', 133,
        'n', 156,
        'r', 129,
        's', 159,
        't', 147,
        'w', 134,
        '{', 74,
        '|', 88,
        '}', 75,
        '~', 95,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(26);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(111);
      if (('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '!', 86,
        '%', 91,
        '&', 87,
        '(', 34,
        ')', 35,
        '*', 89,
        '+', 92,
        ',', 32,
        '-', 94,
        '/', 90,
        ':', 77,
        ';', 76,
        '<', 84,
        '=', 79,
        '>', 81,
        '{', 74,
        '|', 88,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '"', 106,
        '$', 80,
        '%', 91,
        '\'', 11,
        '(', 34,
        ')', 35,
        '-', 24,
        '.', 36,
        '/', 4,
        '0', 37,
        '@', 96,
        '^', 98,
        'd', 49,
        'f', 44,
        'n', 66,
        's', 68,
        't', 58,
        '~', 95,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(101);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(30);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == ',') ADVANCE(25);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '/', 4,
        '0', 120,
        'c', 122,
        'd', 131,
        'e', 139,
        'f', 169,
        'i', 133,
        'n', 156,
        'r', 129,
        's', 159,
        't', 147,
        'w', 134,
        '}', 75,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(121);
      if (lookahead == '+' ||
          ('.' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '>') ADVANCE(108);
      END_STATE();
    case 10:
      if (lookahead == '>') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == 'b') ADVANCE(20);
      if (lookahead == 'c') ADVANCE(19);
      if (lookahead == 'g') ADVANCE(21);
      if (lookahead == 'i') ADVANCE(18);
      if (lookahead == 'l') ADVANCE(21);
      if (lookahead == 's') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(9);
      END_STATE();
    case 15:
      if (lookahead == 'g') ADVANCE(9);
      END_STATE();
    case 16:
      if (lookahead == 'h') ADVANCE(12);
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 18:
      if (lookahead == 'm') ADVANCE(15);
      END_STATE();
    case 19:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 20:
      if (lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 21:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 22:
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 23:
      if (lookahead == '"' ||
          lookahead == '<' ||
          lookahead == '\\') ADVANCE(107);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      END_STATE();
    case 25:
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(10);
      END_STATE();
    case 26:
      if (eof) ADVANCE(28);
      ADVANCE_MAP(
        '!', 86,
        '"', 106,
        '$', 80,
        '%', 91,
        '&', 87,
        '\'', 11,
        '(', 34,
        ')', 35,
        '*', 89,
        '+', 93,
        ',', 32,
        '-', 94,
        '.', 109,
        '/', 90,
        '0', 110,
        ':', 78,
        ';', 76,
        '<', 84,
        '=', 79,
        '>', 81,
        '@', 96,
        '[', 31,
        ']', 33,
        '^', 98,
        'c', 122,
        'd', 131,
        'e', 139,
        'f', 169,
        'i', 133,
        'n', 156,
        'r', 129,
        's', 159,
        't', 147,
        'w', 134,
        '{', 74,
        '|', 88,
        '}', 75,
        '~', 95,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(26);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 27:
      if (eof) ADVANCE(28);
      ADVANCE_MAP(
        '!', 86,
        '"', 106,
        '$', 80,
        '%', 91,
        '&', 87,
        '\'', 11,
        '(', 34,
        ')', 35,
        '-', 24,
        '.', 109,
        '/', 4,
        '0', 102,
        ';', 76,
        '<', 84,
        '=', 79,
        '>', 81,
        '@', 96,
        '[', 31,
        '^', 98,
        'd', 131,
        'f', 169,
        'n', 156,
        's', 159,
        't', 147,
        '{', 74,
        '|', 88,
        '}', 75,
        '~', 95,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(27);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(103);
      if (lookahead == '+' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == '%') ADVANCE(97);
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == '_') ADVANCE(72);
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == '_') ADVANCE(72);
      if (lookahead == 'a') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == 'a') ADVANCE(60);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == '_') ADVANCE(69);
      if (lookahead == 'a') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == '_') ADVANCE(70);
      if (lookahead == 'a') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == '_') ADVANCE(71);
      if (lookahead == 'a') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'a') ADVANCE(54);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'a') ADVANCE(45);
      if (lookahead == 'r') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      if (lookahead == '+' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'a') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      if (lookahead == '+' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'a') ADVANCE(61);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == 'c') ADVANCE(52);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == 'e') ADVANCE(73);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == 'f') ADVANCE(39);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == 'h') ADVANCE(40);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == 'i') ADVANCE(64);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == 'l') ADVANCE(63);
      if (lookahead == 'r') ADVANCE(59);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == 'l') ADVANCE(73);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == 'l') ADVANCE(55);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == 'l') ADVANCE(65);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == 'r') ADVANCE(67);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == 'r') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == 'r') ADVANCE(59);
      if (lookahead == 'u') ADVANCE(57);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == 'r') ADVANCE(59);
      if (lookahead == 'y') ADVANCE(73);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == 'r') ADVANCE(59);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == 's') ADVANCE(50);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == 't') ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == 't') ADVANCE(73);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == 'u') ADVANCE(56);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == 'u') ADVANCE(50);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == 'w') ADVANCE(53);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'a') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (lookahead == '+' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'a') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'a') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'a') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LT);
      ADVANCE_MAP(
        '/', 13,
        '=', 85,
        'b', 20,
        'c', 19,
        'g', 21,
        'i', 18,
        'l', 21,
        'p', 7,
        's', 16,
        'u', 9,
      );
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(85);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(30);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_DOT_PERCENT);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == 'a') ADVANCE(99);
      if (lookahead == 'r') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(100);
      if (lookahead == '+' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == 'a') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(100);
      if (lookahead == '+' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_literal_token3);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '_') ADVANCE(166);
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      if (lookahead == '+' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '_') ADVANCE(166);
      if (lookahead == 'a') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      if (lookahead == '+' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_coord_literal);
      if (lookahead == 'a') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      if (lookahead == '+' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_string_tag);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '%') ADVANCE(97);
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(166);
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      if (lookahead == '+' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(166);
      if (lookahead == 'a') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      if (lookahead == '+' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(168);
      if (lookahead == 'a') ADVANCE(149);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(168);
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(160);
      if (lookahead == 'a') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      if (lookahead == '+' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(161);
      if (lookahead == 'a') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (lookahead == '+' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(162);
      if (lookahead == 'a') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (lookahead == '+' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(163);
      if (lookahead == 'a') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (lookahead == '+' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(164);
      if (lookahead == 'a') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      if (lookahead == '+' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(165);
      if (lookahead == 'a') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      if (lookahead == '+' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(167);
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      if (lookahead == '+' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(167);
      if (lookahead == 'a') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      if (lookahead == '+' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(100);
      if (lookahead == '+' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(150);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(125);
      if (lookahead == 'r') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(126);
      if (lookahead == '+' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(126);
      if (lookahead == '+' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == 'c') ADVANCE(168);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == 'c') ADVANCE(135);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == 'e') ADVANCE(155);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == 'e') ADVANCE(168);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == 'e') ADVANCE(132);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == 'f') ADVANCE(112);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == 'f') ADVANCE(168);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == 'h') ADVANCE(137);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == 'h') ADVANCE(113);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == 'i') ADVANCE(154);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == 'i') ADVANCE(142);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == 'l') ADVANCE(152);
      if (lookahead == 'r') ADVANCE(148);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == 'l') ADVANCE(152);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == 'l') ADVANCE(127);
      if (lookahead == 'r') ADVANCE(148);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == 'l') ADVANCE(168);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == 'l') ADVANCE(130);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == 'l') ADVANCE(141);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == 'l') ADVANCE(153);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == 'n') ADVANCE(168);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == 'r') ADVANCE(145);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == 'r') ADVANCE(157);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == 'r') ADVANCE(124);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == 'r') ADVANCE(148);
      if (lookahead == 'u') ADVANCE(144);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == 'r') ADVANCE(148);
      if (lookahead == 'y') ADVANCE(168);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == 'r') ADVANCE(148);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == 's') ADVANCE(130);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == 't') ADVANCE(168);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == 't') ADVANCE(128);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == 't') ADVANCE(158);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == 'u') ADVANCE(143);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == 'u') ADVANCE(130);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == 'u') ADVANCE(146);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == 'w') ADVANCE(136);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      if (lookahead == '+' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      if (lookahead == '+' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      if (lookahead == '+' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (lookahead == '+' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (lookahead == '+' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (lookahead == '+' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      if (lookahead == '+' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      if (lookahead == '+' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(138);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
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
      ADVANCE_MAP(
        'c', 1,
        'd', 2,
        'e', 3,
        'f', 4,
        'i', 5,
        'n', 6,
        'r', 7,
        's', 8,
        't', 9,
        'w', 10,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(11);
      END_STATE();
    case 2:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 3:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 5:
      if (lookahead == 'f') ADVANCE(15);
      END_STATE();
    case 6:
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 8:
      if (lookahead == 'w') ADVANCE(18);
      END_STATE();
    case 9:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 10:
      if (lookahead == 'h') ADVANCE(20);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(21);
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 12:
      if (lookahead == 'f') ADVANCE(23);
      END_STATE();
    case 13:
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 17:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 18:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 19:
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(31);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 23:
      if (lookahead == '_') ADVANCE(33);
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 25:
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 27:
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_calc);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 33:
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 34:
      if (lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(45);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_literal_token2);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_def_type_keyword);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 45:
      if (lookahead == 'h') ADVANCE(49);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 49:
      if (lookahead == '_') ADVANCE(51);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 51:
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_switch_type_keyword);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 27},
  [3] = {.lex_state = 27},
  [4] = {.lex_state = 27},
  [5] = {.lex_state = 27},
  [6] = {.lex_state = 27},
  [7] = {.lex_state = 27},
  [8] = {.lex_state = 27},
  [9] = {.lex_state = 27},
  [10] = {.lex_state = 27},
  [11] = {.lex_state = 27},
  [12] = {.lex_state = 27},
  [13] = {.lex_state = 27},
  [14] = {.lex_state = 27},
  [15] = {.lex_state = 27},
  [16] = {.lex_state = 27},
  [17] = {.lex_state = 27},
  [18] = {.lex_state = 27},
  [19] = {.lex_state = 27},
  [20] = {.lex_state = 27},
  [21] = {.lex_state = 27},
  [22] = {.lex_state = 27},
  [23] = {.lex_state = 27},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
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
  [46] = {.lex_state = 27},
  [47] = {.lex_state = 27},
  [48] = {.lex_state = 27},
  [49] = {.lex_state = 27},
  [50] = {.lex_state = 27},
  [51] = {.lex_state = 27},
  [52] = {.lex_state = 27},
  [53] = {.lex_state = 27},
  [54] = {.lex_state = 27},
  [55] = {.lex_state = 27},
  [56] = {.lex_state = 27},
  [57] = {.lex_state = 27},
  [58] = {.lex_state = 27},
  [59] = {.lex_state = 27},
  [60] = {.lex_state = 27},
  [61] = {.lex_state = 27},
  [62] = {.lex_state = 27},
  [63] = {.lex_state = 27},
  [64] = {.lex_state = 27},
  [65] = {.lex_state = 27},
  [66] = {.lex_state = 27},
  [67] = {.lex_state = 27},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 27},
  [85] = {.lex_state = 27},
  [86] = {.lex_state = 27},
  [87] = {.lex_state = 27},
  [88] = {.lex_state = 27},
  [89] = {.lex_state = 27},
  [90] = {.lex_state = 27},
  [91] = {.lex_state = 27},
  [92] = {.lex_state = 27},
  [93] = {.lex_state = 27},
  [94] = {.lex_state = 27},
  [95] = {.lex_state = 27},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 0, .external_lex_state = 1},
  [106] = {.lex_state = 0, .external_lex_state = 1},
  [107] = {.lex_state = 0, .external_lex_state = 1},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0, .external_lex_state = 1},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 8},
  [114] = {.lex_state = 8},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 8},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 8},
  [122] = {.lex_state = 2},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 8},
  [126] = {.lex_state = 8},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 8},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 8},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 2},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 8},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 8},
  [165] = {.lex_state = 8},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 1},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [sym_switch_type_keyword] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [sym_def_type_keyword] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_calc] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_DOT_PERCENT] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [aux_sym_literal_token1] = ACTIONS(1),
    [aux_sym_literal_token2] = ACTIONS(1),
    [aux_sym_literal_token3] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [sym_coord_literal] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_string_tag] = ACTIONS(1),
    [aux_sym__advanced_identifier_token1] = ACTIONS(1),
    [sym__string_chars] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(171),
    [sym_script] = STATE(117),
    [aux_sym_source_file_repeat1] = STATE(117),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(7),
  },
  [2] = {
    [sym__statement] = STATE(2),
    [sym_block_statement] = STATE(2),
    [sym_return_statement] = STATE(2),
    [sym_if_statement] = STATE(2),
    [sym_while_statement] = STATE(2),
    [sym_switch_statement] = STATE(2),
    [sym_declaration_statement] = STATE(2),
    [sym_array_declaration_statement] = STATE(2),
    [sym_assignment_statement] = STATE(2),
    [sym_expression_statement] = STATE(2),
    [sym_empty_statement] = STATE(2),
    [sym_parenthesis] = STATE(153),
    [sym__expression] = STATE(153),
    [sym_calc] = STATE(153),
    [sym_call] = STATE(153),
    [sym_assignable_variable_list] = STATE(158),
    [sym_assignable_variable] = STATE(133),
    [sym_local_variable] = STATE(120),
    [sym_local_array_variable] = STATE(120),
    [sym_game_variable] = STATE(120),
    [sym_constant_variable] = STATE(153),
    [sym_literal] = STATE(153),
    [sym_string_literal] = STATE(74),
    [aux_sym_script_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(14),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_RBRACE] = ACTIONS(9),
    [anon_sym_return] = ACTIONS(20),
    [anon_sym_SEMI] = ACTIONS(23),
    [anon_sym_if] = ACTIONS(26),
    [anon_sym_while] = ACTIONS(29),
    [sym_switch_type_keyword] = ACTIONS(32),
    [anon_sym_case] = ACTIONS(35),
    [anon_sym_DOLLAR] = ACTIONS(37),
    [sym_def_type_keyword] = ACTIONS(40),
    [anon_sym_calc] = ACTIONS(43),
    [anon_sym_PERCENT] = ACTIONS(46),
    [anon_sym_TILDE] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(49),
    [anon_sym_DOT_PERCENT] = ACTIONS(46),
    [anon_sym_CARET] = ACTIONS(52),
    [aux_sym_literal_token1] = ACTIONS(55),
    [aux_sym_literal_token2] = ACTIONS(55),
    [aux_sym_literal_token3] = ACTIONS(58),
    [anon_sym_null] = ACTIONS(55),
    [sym_integer_literal] = ACTIONS(55),
    [sym_coord_literal] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(61),
  },
  [3] = {
    [sym__statement] = STATE(16),
    [sym_block_statement] = STATE(16),
    [sym_return_statement] = STATE(16),
    [sym_if_statement] = STATE(16),
    [sym_while_statement] = STATE(16),
    [sym_switch_statement] = STATE(16),
    [sym_declaration_statement] = STATE(16),
    [sym_array_declaration_statement] = STATE(16),
    [sym_assignment_statement] = STATE(16),
    [sym_expression_statement] = STATE(16),
    [sym_empty_statement] = STATE(16),
    [sym_parenthesis] = STATE(153),
    [sym__expression] = STATE(153),
    [sym_calc] = STATE(153),
    [sym_call] = STATE(153),
    [sym_assignable_variable_list] = STATE(158),
    [sym_assignable_variable] = STATE(133),
    [sym_local_variable] = STATE(120),
    [sym_local_array_variable] = STATE(120),
    [sym_game_variable] = STATE(120),
    [sym_constant_variable] = STATE(153),
    [sym_literal] = STATE(153),
    [sym_string_literal] = STATE(74),
    [aux_sym_script_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(64),
    [sym_identifier] = ACTIONS(66),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(64),
    [anon_sym_LPAREN] = ACTIONS(68),
    [anon_sym_LBRACE] = ACTIONS(70),
    [anon_sym_return] = ACTIONS(72),
    [anon_sym_SEMI] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(76),
    [anon_sym_while] = ACTIONS(78),
    [sym_switch_type_keyword] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(82),
    [sym_def_type_keyword] = ACTIONS(84),
    [anon_sym_calc] = ACTIONS(86),
    [anon_sym_PERCENT] = ACTIONS(88),
    [anon_sym_TILDE] = ACTIONS(90),
    [anon_sym_AT] = ACTIONS(90),
    [anon_sym_DOT_PERCENT] = ACTIONS(88),
    [anon_sym_CARET] = ACTIONS(92),
    [aux_sym_literal_token1] = ACTIONS(94),
    [aux_sym_literal_token2] = ACTIONS(94),
    [aux_sym_literal_token3] = ACTIONS(96),
    [anon_sym_null] = ACTIONS(94),
    [sym_integer_literal] = ACTIONS(94),
    [sym_coord_literal] = ACTIONS(94),
    [anon_sym_DQUOTE] = ACTIONS(98),
  },
  [4] = {
    [sym__statement] = STATE(2),
    [sym_block_statement] = STATE(2),
    [sym_return_statement] = STATE(2),
    [sym_if_statement] = STATE(2),
    [sym_while_statement] = STATE(2),
    [sym_switch_statement] = STATE(2),
    [sym_declaration_statement] = STATE(2),
    [sym_array_declaration_statement] = STATE(2),
    [sym_assignment_statement] = STATE(2),
    [sym_expression_statement] = STATE(2),
    [sym_empty_statement] = STATE(2),
    [sym_parenthesis] = STATE(153),
    [sym__expression] = STATE(153),
    [sym_calc] = STATE(153),
    [sym_call] = STATE(153),
    [sym_assignable_variable_list] = STATE(158),
    [sym_assignable_variable] = STATE(133),
    [sym_local_variable] = STATE(120),
    [sym_local_array_variable] = STATE(120),
    [sym_game_variable] = STATE(120),
    [sym_constant_variable] = STATE(153),
    [sym_literal] = STATE(153),
    [sym_string_literal] = STATE(74),
    [aux_sym_script_repeat1] = STATE(2),
    [sym_identifier] = ACTIONS(66),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(68),
    [anon_sym_LBRACE] = ACTIONS(70),
    [anon_sym_RBRACE] = ACTIONS(100),
    [anon_sym_return] = ACTIONS(72),
    [anon_sym_SEMI] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(76),
    [anon_sym_while] = ACTIONS(78),
    [sym_switch_type_keyword] = ACTIONS(80),
    [anon_sym_case] = ACTIONS(102),
    [anon_sym_DOLLAR] = ACTIONS(82),
    [sym_def_type_keyword] = ACTIONS(84),
    [anon_sym_calc] = ACTIONS(86),
    [anon_sym_PERCENT] = ACTIONS(88),
    [anon_sym_TILDE] = ACTIONS(90),
    [anon_sym_AT] = ACTIONS(90),
    [anon_sym_DOT_PERCENT] = ACTIONS(88),
    [anon_sym_CARET] = ACTIONS(92),
    [aux_sym_literal_token1] = ACTIONS(94),
    [aux_sym_literal_token2] = ACTIONS(94),
    [aux_sym_literal_token3] = ACTIONS(96),
    [anon_sym_null] = ACTIONS(94),
    [sym_integer_literal] = ACTIONS(94),
    [sym_coord_literal] = ACTIONS(94),
    [anon_sym_DQUOTE] = ACTIONS(98),
  },
  [5] = {
    [sym__statement] = STATE(2),
    [sym_block_statement] = STATE(2),
    [sym_return_statement] = STATE(2),
    [sym_if_statement] = STATE(2),
    [sym_while_statement] = STATE(2),
    [sym_switch_statement] = STATE(2),
    [sym_declaration_statement] = STATE(2),
    [sym_array_declaration_statement] = STATE(2),
    [sym_assignment_statement] = STATE(2),
    [sym_expression_statement] = STATE(2),
    [sym_empty_statement] = STATE(2),
    [sym_parenthesis] = STATE(153),
    [sym__expression] = STATE(153),
    [sym_calc] = STATE(153),
    [sym_call] = STATE(153),
    [sym_assignable_variable_list] = STATE(158),
    [sym_assignable_variable] = STATE(133),
    [sym_local_variable] = STATE(120),
    [sym_local_array_variable] = STATE(120),
    [sym_game_variable] = STATE(120),
    [sym_constant_variable] = STATE(153),
    [sym_literal] = STATE(153),
    [sym_string_literal] = STATE(74),
    [aux_sym_script_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(104),
    [sym_identifier] = ACTIONS(66),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(104),
    [anon_sym_LPAREN] = ACTIONS(68),
    [anon_sym_LBRACE] = ACTIONS(70),
    [anon_sym_return] = ACTIONS(72),
    [anon_sym_SEMI] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(76),
    [anon_sym_while] = ACTIONS(78),
    [sym_switch_type_keyword] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(82),
    [sym_def_type_keyword] = ACTIONS(84),
    [anon_sym_calc] = ACTIONS(86),
    [anon_sym_PERCENT] = ACTIONS(88),
    [anon_sym_TILDE] = ACTIONS(90),
    [anon_sym_AT] = ACTIONS(90),
    [anon_sym_DOT_PERCENT] = ACTIONS(88),
    [anon_sym_CARET] = ACTIONS(92),
    [aux_sym_literal_token1] = ACTIONS(94),
    [aux_sym_literal_token2] = ACTIONS(94),
    [aux_sym_literal_token3] = ACTIONS(96),
    [anon_sym_null] = ACTIONS(94),
    [sym_integer_literal] = ACTIONS(94),
    [sym_coord_literal] = ACTIONS(94),
    [anon_sym_DQUOTE] = ACTIONS(98),
  },
  [6] = {
    [sym__statement] = STATE(8),
    [sym_block_statement] = STATE(8),
    [sym_return_statement] = STATE(8),
    [sym_if_statement] = STATE(8),
    [sym_while_statement] = STATE(8),
    [sym_switch_statement] = STATE(8),
    [sym_declaration_statement] = STATE(8),
    [sym_array_declaration_statement] = STATE(8),
    [sym_assignment_statement] = STATE(8),
    [sym_expression_statement] = STATE(8),
    [sym_empty_statement] = STATE(8),
    [sym_parenthesis] = STATE(153),
    [sym__expression] = STATE(153),
    [sym_calc] = STATE(153),
    [sym_call] = STATE(153),
    [sym_assignable_variable_list] = STATE(158),
    [sym_assignable_variable] = STATE(133),
    [sym_local_variable] = STATE(120),
    [sym_local_array_variable] = STATE(120),
    [sym_game_variable] = STATE(120),
    [sym_constant_variable] = STATE(153),
    [sym_literal] = STATE(153),
    [sym_string_literal] = STATE(74),
    [aux_sym_script_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(106),
    [sym_identifier] = ACTIONS(66),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(106),
    [anon_sym_LPAREN] = ACTIONS(108),
    [anon_sym_LBRACE] = ACTIONS(70),
    [anon_sym_return] = ACTIONS(72),
    [anon_sym_SEMI] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(76),
    [anon_sym_while] = ACTIONS(78),
    [sym_switch_type_keyword] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(82),
    [sym_def_type_keyword] = ACTIONS(84),
    [anon_sym_calc] = ACTIONS(86),
    [anon_sym_PERCENT] = ACTIONS(88),
    [anon_sym_TILDE] = ACTIONS(90),
    [anon_sym_AT] = ACTIONS(90),
    [anon_sym_DOT_PERCENT] = ACTIONS(88),
    [anon_sym_CARET] = ACTIONS(92),
    [aux_sym_literal_token1] = ACTIONS(94),
    [aux_sym_literal_token2] = ACTIONS(94),
    [aux_sym_literal_token3] = ACTIONS(96),
    [anon_sym_null] = ACTIONS(94),
    [sym_integer_literal] = ACTIONS(94),
    [sym_coord_literal] = ACTIONS(94),
    [anon_sym_DQUOTE] = ACTIONS(98),
  },
  [7] = {
    [sym__statement] = STATE(2),
    [sym_block_statement] = STATE(2),
    [sym_return_statement] = STATE(2),
    [sym_if_statement] = STATE(2),
    [sym_while_statement] = STATE(2),
    [sym_switch_statement] = STATE(2),
    [sym_declaration_statement] = STATE(2),
    [sym_array_declaration_statement] = STATE(2),
    [sym_assignment_statement] = STATE(2),
    [sym_expression_statement] = STATE(2),
    [sym_empty_statement] = STATE(2),
    [sym_parenthesis] = STATE(153),
    [sym__expression] = STATE(153),
    [sym_calc] = STATE(153),
    [sym_call] = STATE(153),
    [sym_assignable_variable_list] = STATE(158),
    [sym_assignable_variable] = STATE(133),
    [sym_local_variable] = STATE(120),
    [sym_local_array_variable] = STATE(120),
    [sym_game_variable] = STATE(120),
    [sym_constant_variable] = STATE(153),
    [sym_literal] = STATE(153),
    [sym_string_literal] = STATE(74),
    [aux_sym_script_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(110),
    [sym_identifier] = ACTIONS(66),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(110),
    [anon_sym_LPAREN] = ACTIONS(68),
    [anon_sym_LBRACE] = ACTIONS(70),
    [anon_sym_return] = ACTIONS(72),
    [anon_sym_SEMI] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(76),
    [anon_sym_while] = ACTIONS(78),
    [sym_switch_type_keyword] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(82),
    [sym_def_type_keyword] = ACTIONS(84),
    [anon_sym_calc] = ACTIONS(86),
    [anon_sym_PERCENT] = ACTIONS(88),
    [anon_sym_TILDE] = ACTIONS(90),
    [anon_sym_AT] = ACTIONS(90),
    [anon_sym_DOT_PERCENT] = ACTIONS(88),
    [anon_sym_CARET] = ACTIONS(92),
    [aux_sym_literal_token1] = ACTIONS(94),
    [aux_sym_literal_token2] = ACTIONS(94),
    [aux_sym_literal_token3] = ACTIONS(96),
    [anon_sym_null] = ACTIONS(94),
    [sym_integer_literal] = ACTIONS(94),
    [sym_coord_literal] = ACTIONS(94),
    [anon_sym_DQUOTE] = ACTIONS(98),
  },
  [8] = {
    [sym__statement] = STATE(2),
    [sym_block_statement] = STATE(2),
    [sym_return_statement] = STATE(2),
    [sym_if_statement] = STATE(2),
    [sym_while_statement] = STATE(2),
    [sym_switch_statement] = STATE(2),
    [sym_declaration_statement] = STATE(2),
    [sym_array_declaration_statement] = STATE(2),
    [sym_assignment_statement] = STATE(2),
    [sym_expression_statement] = STATE(2),
    [sym_empty_statement] = STATE(2),
    [sym_parenthesis] = STATE(153),
    [sym__expression] = STATE(153),
    [sym_calc] = STATE(153),
    [sym_call] = STATE(153),
    [sym_assignable_variable_list] = STATE(158),
    [sym_assignable_variable] = STATE(133),
    [sym_local_variable] = STATE(120),
    [sym_local_array_variable] = STATE(120),
    [sym_game_variable] = STATE(120),
    [sym_constant_variable] = STATE(153),
    [sym_literal] = STATE(153),
    [sym_string_literal] = STATE(74),
    [aux_sym_script_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(112),
    [sym_identifier] = ACTIONS(66),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(112),
    [anon_sym_LPAREN] = ACTIONS(68),
    [anon_sym_LBRACE] = ACTIONS(70),
    [anon_sym_return] = ACTIONS(72),
    [anon_sym_SEMI] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(76),
    [anon_sym_while] = ACTIONS(78),
    [sym_switch_type_keyword] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(82),
    [sym_def_type_keyword] = ACTIONS(84),
    [anon_sym_calc] = ACTIONS(86),
    [anon_sym_PERCENT] = ACTIONS(88),
    [anon_sym_TILDE] = ACTIONS(90),
    [anon_sym_AT] = ACTIONS(90),
    [anon_sym_DOT_PERCENT] = ACTIONS(88),
    [anon_sym_CARET] = ACTIONS(92),
    [aux_sym_literal_token1] = ACTIONS(94),
    [aux_sym_literal_token2] = ACTIONS(94),
    [aux_sym_literal_token3] = ACTIONS(96),
    [anon_sym_null] = ACTIONS(94),
    [sym_integer_literal] = ACTIONS(94),
    [sym_coord_literal] = ACTIONS(94),
    [anon_sym_DQUOTE] = ACTIONS(98),
  },
  [9] = {
    [sym__statement] = STATE(7),
    [sym_block_statement] = STATE(7),
    [sym_return_statement] = STATE(7),
    [sym_if_statement] = STATE(7),
    [sym_while_statement] = STATE(7),
    [sym_switch_statement] = STATE(7),
    [sym_declaration_statement] = STATE(7),
    [sym_array_declaration_statement] = STATE(7),
    [sym_assignment_statement] = STATE(7),
    [sym_expression_statement] = STATE(7),
    [sym_empty_statement] = STATE(7),
    [sym_parenthesis] = STATE(153),
    [sym__expression] = STATE(153),
    [sym_calc] = STATE(153),
    [sym_call] = STATE(153),
    [sym_assignable_variable_list] = STATE(158),
    [sym_assignable_variable] = STATE(133),
    [sym_local_variable] = STATE(120),
    [sym_local_array_variable] = STATE(120),
    [sym_game_variable] = STATE(120),
    [sym_constant_variable] = STATE(153),
    [sym_literal] = STATE(153),
    [sym_string_literal] = STATE(74),
    [aux_sym_script_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(112),
    [sym_identifier] = ACTIONS(66),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(112),
    [anon_sym_LPAREN] = ACTIONS(114),
    [anon_sym_LBRACE] = ACTIONS(70),
    [anon_sym_return] = ACTIONS(72),
    [anon_sym_SEMI] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(76),
    [anon_sym_while] = ACTIONS(78),
    [sym_switch_type_keyword] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(82),
    [sym_def_type_keyword] = ACTIONS(84),
    [anon_sym_calc] = ACTIONS(86),
    [anon_sym_PERCENT] = ACTIONS(88),
    [anon_sym_TILDE] = ACTIONS(90),
    [anon_sym_AT] = ACTIONS(90),
    [anon_sym_DOT_PERCENT] = ACTIONS(88),
    [anon_sym_CARET] = ACTIONS(92),
    [aux_sym_literal_token1] = ACTIONS(94),
    [aux_sym_literal_token2] = ACTIONS(94),
    [aux_sym_literal_token3] = ACTIONS(96),
    [anon_sym_null] = ACTIONS(94),
    [sym_integer_literal] = ACTIONS(94),
    [sym_coord_literal] = ACTIONS(94),
    [anon_sym_DQUOTE] = ACTIONS(98),
  },
  [10] = {
    [sym__statement] = STATE(12),
    [sym_block_statement] = STATE(12),
    [sym_return_statement] = STATE(12),
    [sym_if_statement] = STATE(12),
    [sym_while_statement] = STATE(12),
    [sym_switch_statement] = STATE(12),
    [sym_declaration_statement] = STATE(12),
    [sym_array_declaration_statement] = STATE(12),
    [sym_assignment_statement] = STATE(12),
    [sym_expression_statement] = STATE(12),
    [sym_empty_statement] = STATE(12),
    [sym_parenthesis] = STATE(153),
    [sym__expression] = STATE(153),
    [sym_calc] = STATE(153),
    [sym_call] = STATE(153),
    [sym_assignable_variable_list] = STATE(158),
    [sym_assignable_variable] = STATE(133),
    [sym_local_variable] = STATE(120),
    [sym_local_array_variable] = STATE(120),
    [sym_game_variable] = STATE(120),
    [sym_constant_variable] = STATE(153),
    [sym_literal] = STATE(153),
    [sym_string_literal] = STATE(74),
    [aux_sym_script_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(110),
    [sym_identifier] = ACTIONS(66),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(110),
    [anon_sym_LPAREN] = ACTIONS(68),
    [anon_sym_LBRACE] = ACTIONS(70),
    [anon_sym_return] = ACTIONS(72),
    [anon_sym_SEMI] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(76),
    [anon_sym_while] = ACTIONS(78),
    [sym_switch_type_keyword] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(82),
    [sym_def_type_keyword] = ACTIONS(84),
    [anon_sym_calc] = ACTIONS(86),
    [anon_sym_PERCENT] = ACTIONS(88),
    [anon_sym_TILDE] = ACTIONS(90),
    [anon_sym_AT] = ACTIONS(90),
    [anon_sym_DOT_PERCENT] = ACTIONS(88),
    [anon_sym_CARET] = ACTIONS(92),
    [aux_sym_literal_token1] = ACTIONS(94),
    [aux_sym_literal_token2] = ACTIONS(94),
    [aux_sym_literal_token3] = ACTIONS(96),
    [anon_sym_null] = ACTIONS(94),
    [sym_integer_literal] = ACTIONS(94),
    [sym_coord_literal] = ACTIONS(94),
    [anon_sym_DQUOTE] = ACTIONS(98),
  },
  [11] = {
    [sym__statement] = STATE(5),
    [sym_block_statement] = STATE(5),
    [sym_return_statement] = STATE(5),
    [sym_if_statement] = STATE(5),
    [sym_while_statement] = STATE(5),
    [sym_switch_statement] = STATE(5),
    [sym_declaration_statement] = STATE(5),
    [sym_array_declaration_statement] = STATE(5),
    [sym_assignment_statement] = STATE(5),
    [sym_expression_statement] = STATE(5),
    [sym_empty_statement] = STATE(5),
    [sym_parenthesis] = STATE(153),
    [sym__expression] = STATE(153),
    [sym_calc] = STATE(153),
    [sym_call] = STATE(153),
    [sym_assignable_variable_list] = STATE(158),
    [sym_assignable_variable] = STATE(133),
    [sym_local_variable] = STATE(120),
    [sym_local_array_variable] = STATE(120),
    [sym_game_variable] = STATE(120),
    [sym_constant_variable] = STATE(153),
    [sym_literal] = STATE(153),
    [sym_string_literal] = STATE(74),
    [aux_sym_script_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(116),
    [sym_identifier] = ACTIONS(66),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(116),
    [anon_sym_LPAREN] = ACTIONS(118),
    [anon_sym_LBRACE] = ACTIONS(70),
    [anon_sym_return] = ACTIONS(72),
    [anon_sym_SEMI] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(76),
    [anon_sym_while] = ACTIONS(78),
    [sym_switch_type_keyword] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(82),
    [sym_def_type_keyword] = ACTIONS(84),
    [anon_sym_calc] = ACTIONS(86),
    [anon_sym_PERCENT] = ACTIONS(88),
    [anon_sym_TILDE] = ACTIONS(90),
    [anon_sym_AT] = ACTIONS(90),
    [anon_sym_DOT_PERCENT] = ACTIONS(88),
    [anon_sym_CARET] = ACTIONS(92),
    [aux_sym_literal_token1] = ACTIONS(94),
    [aux_sym_literal_token2] = ACTIONS(94),
    [aux_sym_literal_token3] = ACTIONS(96),
    [anon_sym_null] = ACTIONS(94),
    [sym_integer_literal] = ACTIONS(94),
    [sym_coord_literal] = ACTIONS(94),
    [anon_sym_DQUOTE] = ACTIONS(98),
  },
  [12] = {
    [sym__statement] = STATE(2),
    [sym_block_statement] = STATE(2),
    [sym_return_statement] = STATE(2),
    [sym_if_statement] = STATE(2),
    [sym_while_statement] = STATE(2),
    [sym_switch_statement] = STATE(2),
    [sym_declaration_statement] = STATE(2),
    [sym_array_declaration_statement] = STATE(2),
    [sym_assignment_statement] = STATE(2),
    [sym_expression_statement] = STATE(2),
    [sym_empty_statement] = STATE(2),
    [sym_parenthesis] = STATE(153),
    [sym__expression] = STATE(153),
    [sym_calc] = STATE(153),
    [sym_call] = STATE(153),
    [sym_assignable_variable_list] = STATE(158),
    [sym_assignable_variable] = STATE(133),
    [sym_local_variable] = STATE(120),
    [sym_local_array_variable] = STATE(120),
    [sym_game_variable] = STATE(120),
    [sym_constant_variable] = STATE(153),
    [sym_literal] = STATE(153),
    [sym_string_literal] = STATE(74),
    [aux_sym_script_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(120),
    [sym_identifier] = ACTIONS(66),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(120),
    [anon_sym_LPAREN] = ACTIONS(68),
    [anon_sym_LBRACE] = ACTIONS(70),
    [anon_sym_return] = ACTIONS(72),
    [anon_sym_SEMI] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(76),
    [anon_sym_while] = ACTIONS(78),
    [sym_switch_type_keyword] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(82),
    [sym_def_type_keyword] = ACTIONS(84),
    [anon_sym_calc] = ACTIONS(86),
    [anon_sym_PERCENT] = ACTIONS(88),
    [anon_sym_TILDE] = ACTIONS(90),
    [anon_sym_AT] = ACTIONS(90),
    [anon_sym_DOT_PERCENT] = ACTIONS(88),
    [anon_sym_CARET] = ACTIONS(92),
    [aux_sym_literal_token1] = ACTIONS(94),
    [aux_sym_literal_token2] = ACTIONS(94),
    [aux_sym_literal_token3] = ACTIONS(96),
    [anon_sym_null] = ACTIONS(94),
    [sym_integer_literal] = ACTIONS(94),
    [sym_coord_literal] = ACTIONS(94),
    [anon_sym_DQUOTE] = ACTIONS(98),
  },
  [13] = {
    [sym__statement] = STATE(2),
    [sym_block_statement] = STATE(2),
    [sym_return_statement] = STATE(2),
    [sym_if_statement] = STATE(2),
    [sym_while_statement] = STATE(2),
    [sym_switch_statement] = STATE(2),
    [sym_declaration_statement] = STATE(2),
    [sym_array_declaration_statement] = STATE(2),
    [sym_assignment_statement] = STATE(2),
    [sym_expression_statement] = STATE(2),
    [sym_empty_statement] = STATE(2),
    [sym_parenthesis] = STATE(153),
    [sym__expression] = STATE(153),
    [sym_calc] = STATE(153),
    [sym_call] = STATE(153),
    [sym_assignable_variable_list] = STATE(158),
    [sym_assignable_variable] = STATE(133),
    [sym_local_variable] = STATE(120),
    [sym_local_array_variable] = STATE(120),
    [sym_game_variable] = STATE(120),
    [sym_constant_variable] = STATE(153),
    [sym_literal] = STATE(153),
    [sym_string_literal] = STATE(74),
    [aux_sym_script_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(64),
    [sym_identifier] = ACTIONS(66),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(64),
    [anon_sym_LPAREN] = ACTIONS(68),
    [anon_sym_LBRACE] = ACTIONS(70),
    [anon_sym_return] = ACTIONS(72),
    [anon_sym_SEMI] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(76),
    [anon_sym_while] = ACTIONS(78),
    [sym_switch_type_keyword] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(82),
    [sym_def_type_keyword] = ACTIONS(84),
    [anon_sym_calc] = ACTIONS(86),
    [anon_sym_PERCENT] = ACTIONS(88),
    [anon_sym_TILDE] = ACTIONS(90),
    [anon_sym_AT] = ACTIONS(90),
    [anon_sym_DOT_PERCENT] = ACTIONS(88),
    [anon_sym_CARET] = ACTIONS(92),
    [aux_sym_literal_token1] = ACTIONS(94),
    [aux_sym_literal_token2] = ACTIONS(94),
    [aux_sym_literal_token3] = ACTIONS(96),
    [anon_sym_null] = ACTIONS(94),
    [sym_integer_literal] = ACTIONS(94),
    [sym_coord_literal] = ACTIONS(94),
    [anon_sym_DQUOTE] = ACTIONS(98),
  },
  [14] = {
    [sym__statement] = STATE(13),
    [sym_block_statement] = STATE(13),
    [sym_return_statement] = STATE(13),
    [sym_if_statement] = STATE(13),
    [sym_while_statement] = STATE(13),
    [sym_switch_statement] = STATE(13),
    [sym_declaration_statement] = STATE(13),
    [sym_array_declaration_statement] = STATE(13),
    [sym_assignment_statement] = STATE(13),
    [sym_expression_statement] = STATE(13),
    [sym_empty_statement] = STATE(13),
    [sym_parenthesis] = STATE(153),
    [sym__expression] = STATE(153),
    [sym_calc] = STATE(153),
    [sym_call] = STATE(153),
    [sym_assignable_variable_list] = STATE(158),
    [sym_assignable_variable] = STATE(133),
    [sym_local_variable] = STATE(120),
    [sym_local_array_variable] = STATE(120),
    [sym_game_variable] = STATE(120),
    [sym_constant_variable] = STATE(153),
    [sym_literal] = STATE(153),
    [sym_string_literal] = STATE(74),
    [aux_sym_script_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(120),
    [sym_identifier] = ACTIONS(66),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(120),
    [anon_sym_LPAREN] = ACTIONS(68),
    [anon_sym_LBRACE] = ACTIONS(70),
    [anon_sym_return] = ACTIONS(72),
    [anon_sym_SEMI] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(76),
    [anon_sym_while] = ACTIONS(78),
    [sym_switch_type_keyword] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(82),
    [sym_def_type_keyword] = ACTIONS(84),
    [anon_sym_calc] = ACTIONS(86),
    [anon_sym_PERCENT] = ACTIONS(88),
    [anon_sym_TILDE] = ACTIONS(90),
    [anon_sym_AT] = ACTIONS(90),
    [anon_sym_DOT_PERCENT] = ACTIONS(88),
    [anon_sym_CARET] = ACTIONS(92),
    [aux_sym_literal_token1] = ACTIONS(94),
    [aux_sym_literal_token2] = ACTIONS(94),
    [aux_sym_literal_token3] = ACTIONS(96),
    [anon_sym_null] = ACTIONS(94),
    [sym_integer_literal] = ACTIONS(94),
    [sym_coord_literal] = ACTIONS(94),
    [anon_sym_DQUOTE] = ACTIONS(98),
  },
  [15] = {
    [sym__statement] = STATE(4),
    [sym_block_statement] = STATE(4),
    [sym_return_statement] = STATE(4),
    [sym_if_statement] = STATE(4),
    [sym_while_statement] = STATE(4),
    [sym_switch_statement] = STATE(4),
    [sym_declaration_statement] = STATE(4),
    [sym_array_declaration_statement] = STATE(4),
    [sym_assignment_statement] = STATE(4),
    [sym_expression_statement] = STATE(4),
    [sym_empty_statement] = STATE(4),
    [sym_parenthesis] = STATE(153),
    [sym__expression] = STATE(153),
    [sym_calc] = STATE(153),
    [sym_call] = STATE(153),
    [sym_assignable_variable_list] = STATE(158),
    [sym_assignable_variable] = STATE(133),
    [sym_local_variable] = STATE(120),
    [sym_local_array_variable] = STATE(120),
    [sym_game_variable] = STATE(120),
    [sym_constant_variable] = STATE(153),
    [sym_literal] = STATE(153),
    [sym_string_literal] = STATE(74),
    [aux_sym_script_repeat1] = STATE(4),
    [sym_identifier] = ACTIONS(66),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(68),
    [anon_sym_LBRACE] = ACTIONS(70),
    [anon_sym_RBRACE] = ACTIONS(122),
    [anon_sym_return] = ACTIONS(72),
    [anon_sym_SEMI] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(76),
    [anon_sym_while] = ACTIONS(78),
    [sym_switch_type_keyword] = ACTIONS(80),
    [anon_sym_case] = ACTIONS(124),
    [anon_sym_DOLLAR] = ACTIONS(82),
    [sym_def_type_keyword] = ACTIONS(84),
    [anon_sym_calc] = ACTIONS(86),
    [anon_sym_PERCENT] = ACTIONS(88),
    [anon_sym_TILDE] = ACTIONS(90),
    [anon_sym_AT] = ACTIONS(90),
    [anon_sym_DOT_PERCENT] = ACTIONS(88),
    [anon_sym_CARET] = ACTIONS(92),
    [aux_sym_literal_token1] = ACTIONS(94),
    [aux_sym_literal_token2] = ACTIONS(94),
    [aux_sym_literal_token3] = ACTIONS(96),
    [anon_sym_null] = ACTIONS(94),
    [sym_integer_literal] = ACTIONS(94),
    [sym_coord_literal] = ACTIONS(94),
    [anon_sym_DQUOTE] = ACTIONS(98),
  },
  [16] = {
    [sym__statement] = STATE(2),
    [sym_block_statement] = STATE(2),
    [sym_return_statement] = STATE(2),
    [sym_if_statement] = STATE(2),
    [sym_while_statement] = STATE(2),
    [sym_switch_statement] = STATE(2),
    [sym_declaration_statement] = STATE(2),
    [sym_array_declaration_statement] = STATE(2),
    [sym_assignment_statement] = STATE(2),
    [sym_expression_statement] = STATE(2),
    [sym_empty_statement] = STATE(2),
    [sym_parenthesis] = STATE(153),
    [sym__expression] = STATE(153),
    [sym_calc] = STATE(153),
    [sym_call] = STATE(153),
    [sym_assignable_variable_list] = STATE(158),
    [sym_assignable_variable] = STATE(133),
    [sym_local_variable] = STATE(120),
    [sym_local_array_variable] = STATE(120),
    [sym_game_variable] = STATE(120),
    [sym_constant_variable] = STATE(153),
    [sym_literal] = STATE(153),
    [sym_string_literal] = STATE(74),
    [aux_sym_script_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(126),
    [sym_identifier] = ACTIONS(66),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(126),
    [anon_sym_LPAREN] = ACTIONS(68),
    [anon_sym_LBRACE] = ACTIONS(70),
    [anon_sym_return] = ACTIONS(72),
    [anon_sym_SEMI] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(76),
    [anon_sym_while] = ACTIONS(78),
    [sym_switch_type_keyword] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(82),
    [sym_def_type_keyword] = ACTIONS(84),
    [anon_sym_calc] = ACTIONS(86),
    [anon_sym_PERCENT] = ACTIONS(88),
    [anon_sym_TILDE] = ACTIONS(90),
    [anon_sym_AT] = ACTIONS(90),
    [anon_sym_DOT_PERCENT] = ACTIONS(88),
    [anon_sym_CARET] = ACTIONS(92),
    [aux_sym_literal_token1] = ACTIONS(94),
    [aux_sym_literal_token2] = ACTIONS(94),
    [aux_sym_literal_token3] = ACTIONS(96),
    [anon_sym_null] = ACTIONS(94),
    [sym_integer_literal] = ACTIONS(94),
    [sym_coord_literal] = ACTIONS(94),
    [anon_sym_DQUOTE] = ACTIONS(98),
  },
  [17] = {
    [sym__statement] = STATE(2),
    [sym_block_statement] = STATE(2),
    [sym_return_statement] = STATE(2),
    [sym_if_statement] = STATE(2),
    [sym_while_statement] = STATE(2),
    [sym_switch_statement] = STATE(2),
    [sym_declaration_statement] = STATE(2),
    [sym_array_declaration_statement] = STATE(2),
    [sym_assignment_statement] = STATE(2),
    [sym_expression_statement] = STATE(2),
    [sym_empty_statement] = STATE(2),
    [sym_parenthesis] = STATE(153),
    [sym__expression] = STATE(153),
    [sym_calc] = STATE(153),
    [sym_call] = STATE(153),
    [sym_assignable_variable_list] = STATE(158),
    [sym_assignable_variable] = STATE(133),
    [sym_local_variable] = STATE(120),
    [sym_local_array_variable] = STATE(120),
    [sym_game_variable] = STATE(120),
    [sym_constant_variable] = STATE(153),
    [sym_literal] = STATE(153),
    [sym_string_literal] = STATE(74),
    [aux_sym_script_repeat1] = STATE(2),
    [sym_identifier] = ACTIONS(66),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(68),
    [anon_sym_LBRACE] = ACTIONS(70),
    [anon_sym_RBRACE] = ACTIONS(128),
    [anon_sym_return] = ACTIONS(72),
    [anon_sym_SEMI] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(76),
    [anon_sym_while] = ACTIONS(78),
    [sym_switch_type_keyword] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(82),
    [sym_def_type_keyword] = ACTIONS(84),
    [anon_sym_calc] = ACTIONS(86),
    [anon_sym_PERCENT] = ACTIONS(88),
    [anon_sym_TILDE] = ACTIONS(90),
    [anon_sym_AT] = ACTIONS(90),
    [anon_sym_DOT_PERCENT] = ACTIONS(88),
    [anon_sym_CARET] = ACTIONS(92),
    [aux_sym_literal_token1] = ACTIONS(94),
    [aux_sym_literal_token2] = ACTIONS(94),
    [aux_sym_literal_token3] = ACTIONS(96),
    [anon_sym_null] = ACTIONS(94),
    [sym_integer_literal] = ACTIONS(94),
    [sym_coord_literal] = ACTIONS(94),
    [anon_sym_DQUOTE] = ACTIONS(98),
  },
  [18] = {
    [sym__statement] = STATE(17),
    [sym_block_statement] = STATE(17),
    [sym_return_statement] = STATE(17),
    [sym_if_statement] = STATE(17),
    [sym_while_statement] = STATE(17),
    [sym_switch_statement] = STATE(17),
    [sym_declaration_statement] = STATE(17),
    [sym_array_declaration_statement] = STATE(17),
    [sym_assignment_statement] = STATE(17),
    [sym_expression_statement] = STATE(17),
    [sym_empty_statement] = STATE(17),
    [sym_parenthesis] = STATE(153),
    [sym__expression] = STATE(153),
    [sym_calc] = STATE(153),
    [sym_call] = STATE(153),
    [sym_assignable_variable_list] = STATE(158),
    [sym_assignable_variable] = STATE(133),
    [sym_local_variable] = STATE(120),
    [sym_local_array_variable] = STATE(120),
    [sym_game_variable] = STATE(120),
    [sym_constant_variable] = STATE(153),
    [sym_literal] = STATE(153),
    [sym_string_literal] = STATE(74),
    [aux_sym_script_repeat1] = STATE(17),
    [sym_identifier] = ACTIONS(66),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(68),
    [anon_sym_LBRACE] = ACTIONS(70),
    [anon_sym_RBRACE] = ACTIONS(130),
    [anon_sym_return] = ACTIONS(72),
    [anon_sym_SEMI] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(76),
    [anon_sym_while] = ACTIONS(78),
    [sym_switch_type_keyword] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(82),
    [sym_def_type_keyword] = ACTIONS(84),
    [anon_sym_calc] = ACTIONS(86),
    [anon_sym_PERCENT] = ACTIONS(88),
    [anon_sym_TILDE] = ACTIONS(90),
    [anon_sym_AT] = ACTIONS(90),
    [anon_sym_DOT_PERCENT] = ACTIONS(88),
    [anon_sym_CARET] = ACTIONS(92),
    [aux_sym_literal_token1] = ACTIONS(94),
    [aux_sym_literal_token2] = ACTIONS(94),
    [aux_sym_literal_token3] = ACTIONS(96),
    [anon_sym_null] = ACTIONS(94),
    [sym_integer_literal] = ACTIONS(94),
    [sym_coord_literal] = ACTIONS(94),
    [anon_sym_DQUOTE] = ACTIONS(98),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      sym_identifier,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(72), 1,
      anon_sym_return,
    ACTIONS(74), 1,
      anon_sym_SEMI,
    ACTIONS(80), 1,
      sym_switch_type_keyword,
    ACTIONS(82), 1,
      anon_sym_DOLLAR,
    ACTIONS(84), 1,
      sym_def_type_keyword,
    ACTIONS(86), 1,
      anon_sym_calc,
    ACTIONS(92), 1,
      anon_sym_CARET,
    ACTIONS(96), 1,
      aux_sym_literal_token3,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(132), 1,
      anon_sym_if,
    ACTIONS(134), 1,
      anon_sym_while,
    STATE(74), 1,
      sym_string_literal,
    STATE(133), 1,
      sym_assignable_variable,
    STATE(158), 1,
      sym_assignable_variable_list,
    ACTIONS(88), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(90), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    STATE(120), 3,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
    ACTIONS(94), 5,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      anon_sym_null,
      sym_integer_literal,
      sym_coord_literal,
    STATE(153), 6,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_constant_variable,
      sym_literal,
    STATE(40), 11,
      sym__statement,
      sym_block_statement,
      sym_return_statement,
      sym_if_statement,
      sym_while_statement,
      sym_switch_statement,
      sym_declaration_statement,
      sym_array_declaration_statement,
      sym_assignment_statement,
      sym_expression_statement,
      sym_empty_statement,
  [96] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      sym_identifier,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(72), 1,
      anon_sym_return,
    ACTIONS(74), 1,
      anon_sym_SEMI,
    ACTIONS(80), 1,
      sym_switch_type_keyword,
    ACTIONS(82), 1,
      anon_sym_DOLLAR,
    ACTIONS(84), 1,
      sym_def_type_keyword,
    ACTIONS(86), 1,
      anon_sym_calc,
    ACTIONS(92), 1,
      anon_sym_CARET,
    ACTIONS(96), 1,
      aux_sym_literal_token3,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(132), 1,
      anon_sym_if,
    ACTIONS(134), 1,
      anon_sym_while,
    STATE(74), 1,
      sym_string_literal,
    STATE(133), 1,
      sym_assignable_variable,
    STATE(158), 1,
      sym_assignable_variable_list,
    ACTIONS(88), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(90), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    STATE(120), 3,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
    ACTIONS(94), 5,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      anon_sym_null,
      sym_integer_literal,
      sym_coord_literal,
    STATE(153), 6,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_constant_variable,
      sym_literal,
    STATE(41), 11,
      sym__statement,
      sym_block_statement,
      sym_return_statement,
      sym_if_statement,
      sym_while_statement,
      sym_switch_statement,
      sym_declaration_statement,
      sym_array_declaration_statement,
      sym_assignment_statement,
      sym_expression_statement,
      sym_empty_statement,
  [192] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      sym_identifier,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(72), 1,
      anon_sym_return,
    ACTIONS(74), 1,
      anon_sym_SEMI,
    ACTIONS(76), 1,
      anon_sym_if,
    ACTIONS(78), 1,
      anon_sym_while,
    ACTIONS(80), 1,
      sym_switch_type_keyword,
    ACTIONS(82), 1,
      anon_sym_DOLLAR,
    ACTIONS(84), 1,
      sym_def_type_keyword,
    ACTIONS(86), 1,
      anon_sym_calc,
    ACTIONS(92), 1,
      anon_sym_CARET,
    ACTIONS(96), 1,
      aux_sym_literal_token3,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    STATE(74), 1,
      sym_string_literal,
    STATE(133), 1,
      sym_assignable_variable,
    STATE(158), 1,
      sym_assignable_variable_list,
    ACTIONS(88), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(90), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    STATE(120), 3,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
    ACTIONS(94), 5,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      anon_sym_null,
      sym_integer_literal,
      sym_coord_literal,
    STATE(153), 6,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_constant_variable,
      sym_literal,
    STATE(41), 11,
      sym__statement,
      sym_block_statement,
      sym_return_statement,
      sym_if_statement,
      sym_while_statement,
      sym_switch_statement,
      sym_declaration_statement,
      sym_array_declaration_statement,
      sym_assignment_statement,
      sym_expression_statement,
      sym_empty_statement,
  [288] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      sym_identifier,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(72), 1,
      anon_sym_return,
    ACTIONS(74), 1,
      anon_sym_SEMI,
    ACTIONS(76), 1,
      anon_sym_if,
    ACTIONS(78), 1,
      anon_sym_while,
    ACTIONS(80), 1,
      sym_switch_type_keyword,
    ACTIONS(82), 1,
      anon_sym_DOLLAR,
    ACTIONS(84), 1,
      sym_def_type_keyword,
    ACTIONS(86), 1,
      anon_sym_calc,
    ACTIONS(92), 1,
      anon_sym_CARET,
    ACTIONS(96), 1,
      aux_sym_literal_token3,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    STATE(74), 1,
      sym_string_literal,
    STATE(133), 1,
      sym_assignable_variable,
    STATE(158), 1,
      sym_assignable_variable_list,
    ACTIONS(88), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(90), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    STATE(120), 3,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
    ACTIONS(94), 5,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      anon_sym_null,
      sym_integer_literal,
      sym_coord_literal,
    STATE(153), 6,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_constant_variable,
      sym_literal,
    STATE(45), 11,
      sym__statement,
      sym_block_statement,
      sym_return_statement,
      sym_if_statement,
      sym_while_statement,
      sym_switch_statement,
      sym_declaration_statement,
      sym_array_declaration_statement,
      sym_assignment_statement,
      sym_expression_statement,
      sym_empty_statement,
  [384] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      sym_identifier,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(72), 1,
      anon_sym_return,
    ACTIONS(74), 1,
      anon_sym_SEMI,
    ACTIONS(80), 1,
      sym_switch_type_keyword,
    ACTIONS(82), 1,
      anon_sym_DOLLAR,
    ACTIONS(84), 1,
      sym_def_type_keyword,
    ACTIONS(86), 1,
      anon_sym_calc,
    ACTIONS(92), 1,
      anon_sym_CARET,
    ACTIONS(96), 1,
      aux_sym_literal_token3,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(132), 1,
      anon_sym_if,
    ACTIONS(134), 1,
      anon_sym_while,
    STATE(74), 1,
      sym_string_literal,
    STATE(133), 1,
      sym_assignable_variable,
    STATE(158), 1,
      sym_assignable_variable_list,
    ACTIONS(88), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(90), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    STATE(120), 3,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
    ACTIONS(94), 5,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      anon_sym_null,
      sym_integer_literal,
      sym_coord_literal,
    STATE(153), 6,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_constant_variable,
      sym_literal,
    STATE(46), 11,
      sym__statement,
      sym_block_statement,
      sym_return_statement,
      sym_if_statement,
      sym_while_statement,
      sym_switch_statement,
      sym_declaration_statement,
      sym_array_declaration_statement,
      sym_assignment_statement,
      sym_expression_statement,
      sym_empty_statement,
  [480] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      sym_identifier,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      anon_sym_DOLLAR,
    ACTIONS(86), 1,
      anon_sym_calc,
    ACTIONS(92), 1,
      anon_sym_CARET,
    ACTIONS(96), 1,
      aux_sym_literal_token3,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(136), 1,
      anon_sym_RPAREN,
    STATE(74), 1,
      sym_string_literal,
    STATE(135), 1,
      sym_parameter,
    STATE(155), 1,
      sym_parameter_list,
    ACTIONS(88), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(90), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    ACTIONS(138), 2,
      aux_sym_parameter_token1,
      aux_sym_parameter_token2,
    ACTIONS(94), 5,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      anon_sym_null,
      sym_integer_literal,
      sym_coord_literal,
    STATE(163), 9,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
      sym_constant_variable,
      sym_literal,
  [547] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      sym_identifier,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      anon_sym_DOLLAR,
    ACTIONS(86), 1,
      anon_sym_calc,
    ACTIONS(92), 1,
      anon_sym_CARET,
    ACTIONS(96), 1,
      aux_sym_literal_token3,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(140), 1,
      anon_sym_RPAREN,
    ACTIONS(142), 1,
      aux_sym_parameter_token1,
    STATE(74), 1,
      sym_string_literal,
    STATE(132), 1,
      sym_type,
    STATE(169), 1,
      sym_type_list,
    ACTIONS(88), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(90), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    ACTIONS(94), 5,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      anon_sym_null,
      sym_integer_literal,
      sym_coord_literal,
    STATE(163), 9,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
      sym_constant_variable,
      sym_literal,
  [613] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      sym_identifier,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      anon_sym_DOLLAR,
    ACTIONS(86), 1,
      anon_sym_calc,
    ACTIONS(92), 1,
      anon_sym_CARET,
    ACTIONS(96), 1,
      aux_sym_literal_token3,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(142), 1,
      aux_sym_parameter_token1,
    ACTIONS(144), 1,
      anon_sym_RPAREN,
    STATE(74), 1,
      sym_string_literal,
    STATE(132), 1,
      sym_type,
    STATE(157), 1,
      sym_type_list,
    ACTIONS(88), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(90), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    ACTIONS(94), 5,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      anon_sym_null,
      sym_integer_literal,
      sym_coord_literal,
    STATE(163), 9,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
      sym_constant_variable,
      sym_literal,
  [679] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      sym_identifier,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      anon_sym_DOLLAR,
    ACTIONS(86), 1,
      anon_sym_calc,
    ACTIONS(92), 1,
      anon_sym_CARET,
    ACTIONS(96), 1,
      aux_sym_literal_token3,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(146), 1,
      anon_sym_RPAREN,
    STATE(74), 1,
      sym_string_literal,
    STATE(161), 1,
      sym_expression_list,
    ACTIONS(88), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(90), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    ACTIONS(94), 5,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      anon_sym_null,
      sym_integer_literal,
      sym_coord_literal,
    STATE(110), 9,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
      sym_constant_variable,
      sym_literal,
  [739] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 12,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_case,
      anon_sym_calc,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      anon_sym_null,
      sym_integer_literal,
      sym_coord_literal,
      sym_identifier,
    ACTIONS(148), 16,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_switch_type_keyword,
      anon_sym_DOLLAR,
      sym_def_type_keyword,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token3,
      anon_sym_DQUOTE,
  [775] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 12,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_case,
      anon_sym_calc,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      anon_sym_null,
      sym_integer_literal,
      sym_coord_literal,
      sym_identifier,
    ACTIONS(152), 16,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_switch_type_keyword,
      anon_sym_DOLLAR,
      sym_def_type_keyword,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token3,
      anon_sym_DQUOTE,
  [811] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 12,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_case,
      anon_sym_calc,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      anon_sym_null,
      sym_integer_literal,
      sym_coord_literal,
      sym_identifier,
    ACTIONS(156), 16,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_switch_type_keyword,
      anon_sym_DOLLAR,
      sym_def_type_keyword,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token3,
      anon_sym_DQUOTE,
  [847] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      sym_identifier,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      anon_sym_DOLLAR,
    ACTIONS(86), 1,
      anon_sym_calc,
    ACTIONS(92), 1,
      anon_sym_CARET,
    ACTIONS(96), 1,
      aux_sym_literal_token3,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(160), 1,
      anon_sym_RPAREN,
    STATE(74), 1,
      sym_string_literal,
    STATE(167), 1,
      sym_expression_list,
    ACTIONS(88), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(90), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    ACTIONS(94), 5,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      anon_sym_null,
      sym_integer_literal,
      sym_coord_literal,
    STATE(110), 9,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
      sym_constant_variable,
      sym_literal,
  [907] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      sym_identifier,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      anon_sym_DOLLAR,
    ACTIONS(86), 1,
      anon_sym_calc,
    ACTIONS(92), 1,
      anon_sym_CARET,
    ACTIONS(96), 1,
      aux_sym_literal_token3,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(162), 1,
      anon_sym_RPAREN,
    STATE(74), 1,
      sym_string_literal,
    STATE(175), 1,
      sym_expression_list,
    ACTIONS(88), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(90), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    ACTIONS(94), 5,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      anon_sym_null,
      sym_integer_literal,
      sym_coord_literal,
    STATE(110), 9,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
      sym_constant_variable,
      sym_literal,
  [967] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 12,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_case,
      anon_sym_calc,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      anon_sym_null,
      sym_integer_literal,
      sym_coord_literal,
      sym_identifier,
    ACTIONS(164), 16,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_switch_type_keyword,
      anon_sym_DOLLAR,
      sym_def_type_keyword,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token3,
      anon_sym_DQUOTE,
  [1003] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 12,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_case,
      anon_sym_calc,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      anon_sym_null,
      sym_integer_literal,
      sym_coord_literal,
      sym_identifier,
    ACTIONS(168), 16,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_switch_type_keyword,
      anon_sym_DOLLAR,
      sym_def_type_keyword,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token3,
      anon_sym_DQUOTE,
  [1039] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 12,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_case,
      anon_sym_calc,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      anon_sym_null,
      sym_integer_literal,
      sym_coord_literal,
      sym_identifier,
    ACTIONS(172), 16,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_switch_type_keyword,
      anon_sym_DOLLAR,
      sym_def_type_keyword,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token3,
      anon_sym_DQUOTE,
  [1075] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 12,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_case,
      anon_sym_calc,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      anon_sym_null,
      sym_integer_literal,
      sym_coord_literal,
      sym_identifier,
    ACTIONS(176), 16,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_switch_type_keyword,
      anon_sym_DOLLAR,
      sym_def_type_keyword,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token3,
      anon_sym_DQUOTE,
  [1111] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      sym_identifier,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      anon_sym_DOLLAR,
    ACTIONS(86), 1,
      anon_sym_calc,
    ACTIONS(92), 1,
      anon_sym_CARET,
    ACTIONS(96), 1,
      aux_sym_literal_token3,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(180), 1,
      anon_sym_default,
    STATE(74), 1,
      sym_string_literal,
    STATE(170), 1,
      sym_expression_list,
    ACTIONS(88), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(90), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    ACTIONS(94), 5,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      anon_sym_null,
      sym_integer_literal,
      sym_coord_literal,
    STATE(110), 9,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
      sym_constant_variable,
      sym_literal,
  [1171] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 12,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_case,
      anon_sym_calc,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      anon_sym_null,
      sym_integer_literal,
      sym_coord_literal,
      sym_identifier,
    ACTIONS(182), 16,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_switch_type_keyword,
      anon_sym_DOLLAR,
      sym_def_type_keyword,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token3,
      anon_sym_DQUOTE,
  [1207] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 12,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_case,
      anon_sym_calc,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      anon_sym_null,
      sym_integer_literal,
      sym_coord_literal,
      sym_identifier,
    ACTIONS(186), 16,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_switch_type_keyword,
      anon_sym_DOLLAR,
      sym_def_type_keyword,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token3,
      anon_sym_DQUOTE,
  [1243] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_else,
    ACTIONS(192), 11,
      anon_sym_return,
      anon_sym_if,
      anon_sym_while,
      anon_sym_case,
      anon_sym_calc,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      anon_sym_null,
      sym_integer_literal,
      sym_coord_literal,
      sym_identifier,
    ACTIONS(190), 16,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_switch_type_keyword,
      anon_sym_DOLLAR,
      sym_def_type_keyword,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token3,
      anon_sym_DQUOTE,
  [1281] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 12,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_case,
      anon_sym_calc,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      anon_sym_null,
      sym_integer_literal,
      sym_coord_literal,
      sym_identifier,
    ACTIONS(196), 16,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_switch_type_keyword,
      anon_sym_DOLLAR,
      sym_def_type_keyword,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token3,
      anon_sym_DQUOTE,
  [1317] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 12,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_case,
      anon_sym_calc,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      anon_sym_null,
      sym_integer_literal,
      sym_coord_literal,
      sym_identifier,
    ACTIONS(200), 16,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_switch_type_keyword,
      anon_sym_DOLLAR,
      sym_def_type_keyword,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token3,
      anon_sym_DQUOTE,
  [1353] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 12,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_case,
      anon_sym_calc,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      anon_sym_null,
      sym_integer_literal,
      sym_coord_literal,
      sym_identifier,
    ACTIONS(204), 16,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_switch_type_keyword,
      anon_sym_DOLLAR,
      sym_def_type_keyword,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token3,
      anon_sym_DQUOTE,
  [1389] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 12,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_case,
      anon_sym_calc,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      anon_sym_null,
      sym_integer_literal,
      sym_coord_literal,
      sym_identifier,
    ACTIONS(208), 16,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_switch_type_keyword,
      anon_sym_DOLLAR,
      sym_def_type_keyword,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token3,
      anon_sym_DQUOTE,
  [1425] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 12,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_case,
      anon_sym_calc,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      anon_sym_null,
      sym_integer_literal,
      sym_coord_literal,
      sym_identifier,
    ACTIONS(212), 16,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_switch_type_keyword,
      anon_sym_DOLLAR,
      sym_def_type_keyword,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token3,
      anon_sym_DQUOTE,
  [1461] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 12,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_case,
      anon_sym_calc,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      anon_sym_null,
      sym_integer_literal,
      sym_coord_literal,
      sym_identifier,
    ACTIONS(190), 16,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_switch_type_keyword,
      anon_sym_DOLLAR,
      sym_def_type_keyword,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token3,
      anon_sym_DQUOTE,
  [1497] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 12,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_case,
      anon_sym_calc,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      anon_sym_null,
      sym_integer_literal,
      sym_coord_literal,
      sym_identifier,
    ACTIONS(216), 16,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_switch_type_keyword,
      anon_sym_DOLLAR,
      sym_def_type_keyword,
      anon_sym_PERCENT,
      anon_sym_TILDE,
      anon_sym_AT,
      anon_sym_DOT_PERCENT,
      anon_sym_CARET,
      aux_sym_literal_token3,
      anon_sym_DQUOTE,
  [1533] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      sym_identifier,
    ACTIONS(82), 1,
      anon_sym_DOLLAR,
    ACTIONS(86), 1,
      anon_sym_calc,
    ACTIONS(92), 1,
      anon_sym_CARET,
    ACTIONS(96), 1,
      aux_sym_literal_token3,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    STATE(74), 1,
      sym_string_literal,
    STATE(103), 1,
      sym_arithmetic,
    ACTIONS(88), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(90), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    ACTIONS(94), 5,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      anon_sym_null,
      sym_integer_literal,
      sym_coord_literal,
    STATE(96), 9,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
      sym_constant_variable,
      sym_literal,
  [1590] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      sym_identifier,
    ACTIONS(82), 1,
      anon_sym_DOLLAR,
    ACTIONS(86), 1,
      anon_sym_calc,
    ACTIONS(92), 1,
      anon_sym_CARET,
    ACTIONS(96), 1,
      aux_sym_literal_token3,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(222), 1,
      anon_sym_LPAREN,
    STATE(74), 1,
      sym_string_literal,
    STATE(93), 1,
      sym_condition,
    ACTIONS(88), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(90), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    ACTIONS(94), 5,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      anon_sym_null,
      sym_integer_literal,
      sym_coord_literal,
    STATE(94), 9,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
      sym_constant_variable,
      sym_literal,
  [1647] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      sym_identifier,
    ACTIONS(82), 1,
      anon_sym_DOLLAR,
    ACTIONS(86), 1,
      anon_sym_calc,
    ACTIONS(92), 1,
      anon_sym_CARET,
    ACTIONS(96), 1,
      aux_sym_literal_token3,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    STATE(74), 1,
      sym_string_literal,
    STATE(101), 1,
      sym_arithmetic,
    ACTIONS(88), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(90), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    ACTIONS(94), 5,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      anon_sym_null,
      sym_integer_literal,
      sym_coord_literal,
    STATE(96), 9,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
      sym_constant_variable,
      sym_literal,
  [1704] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      sym_identifier,
    ACTIONS(82), 1,
      anon_sym_DOLLAR,
    ACTIONS(86), 1,
      anon_sym_calc,
    ACTIONS(92), 1,
      anon_sym_CARET,
    ACTIONS(96), 1,
      aux_sym_literal_token3,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    STATE(74), 1,
      sym_string_literal,
    STATE(104), 1,
      sym_arithmetic,
    ACTIONS(88), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(90), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    ACTIONS(94), 5,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      anon_sym_null,
      sym_integer_literal,
      sym_coord_literal,
    STATE(96), 9,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
      sym_constant_variable,
      sym_literal,
  [1761] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      sym_identifier,
    ACTIONS(82), 1,
      anon_sym_DOLLAR,
    ACTIONS(86), 1,
      anon_sym_calc,
    ACTIONS(92), 1,
      anon_sym_CARET,
    ACTIONS(96), 1,
      aux_sym_literal_token3,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    STATE(74), 1,
      sym_string_literal,
    STATE(102), 1,
      sym_arithmetic,
    ACTIONS(88), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(90), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    ACTIONS(94), 5,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      anon_sym_null,
      sym_integer_literal,
      sym_coord_literal,
    STATE(96), 9,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
      sym_constant_variable,
      sym_literal,
  [1818] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      sym_identifier,
    ACTIONS(82), 1,
      anon_sym_DOLLAR,
    ACTIONS(86), 1,
      anon_sym_calc,
    ACTIONS(92), 1,
      anon_sym_CARET,
    ACTIONS(96), 1,
      aux_sym_literal_token3,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    STATE(74), 1,
      sym_string_literal,
    STATE(97), 1,
      sym_arithmetic,
    ACTIONS(88), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(90), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    ACTIONS(94), 5,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      anon_sym_null,
      sym_integer_literal,
      sym_coord_literal,
    STATE(98), 9,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
      sym_constant_variable,
      sym_literal,
  [1875] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      sym_identifier,
    ACTIONS(82), 1,
      anon_sym_DOLLAR,
    ACTIONS(86), 1,
      anon_sym_calc,
    ACTIONS(92), 1,
      anon_sym_CARET,
    ACTIONS(96), 1,
      aux_sym_literal_token3,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(222), 1,
      anon_sym_LPAREN,
    STATE(74), 1,
      sym_string_literal,
    STATE(91), 1,
      sym_condition,
    ACTIONS(88), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(90), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    ACTIONS(94), 5,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      anon_sym_null,
      sym_integer_literal,
      sym_coord_literal,
    STATE(84), 9,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
      sym_constant_variable,
      sym_literal,
  [1932] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      sym_identifier,
    ACTIONS(82), 1,
      anon_sym_DOLLAR,
    ACTIONS(86), 1,
      anon_sym_calc,
    ACTIONS(92), 1,
      anon_sym_CARET,
    ACTIONS(96), 1,
      aux_sym_literal_token3,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(222), 1,
      anon_sym_LPAREN,
    STATE(74), 1,
      sym_string_literal,
    STATE(92), 1,
      sym_condition,
    ACTIONS(88), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(90), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    ACTIONS(94), 5,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      anon_sym_null,
      sym_integer_literal,
      sym_coord_literal,
    STATE(94), 9,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
      sym_constant_variable,
      sym_literal,
  [1989] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      sym_identifier,
    ACTIONS(82), 1,
      anon_sym_DOLLAR,
    ACTIONS(86), 1,
      anon_sym_calc,
    ACTIONS(92), 1,
      anon_sym_CARET,
    ACTIONS(96), 1,
      aux_sym_literal_token3,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(222), 1,
      anon_sym_LPAREN,
    STATE(74), 1,
      sym_string_literal,
    STATE(88), 1,
      sym_condition,
    ACTIONS(88), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(90), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    ACTIONS(94), 5,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      anon_sym_null,
      sym_integer_literal,
      sym_coord_literal,
    STATE(94), 9,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
      sym_constant_variable,
      sym_literal,
  [2046] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      sym_identifier,
    ACTIONS(82), 1,
      anon_sym_DOLLAR,
    ACTIONS(86), 1,
      anon_sym_calc,
    ACTIONS(92), 1,
      anon_sym_CARET,
    ACTIONS(96), 1,
      aux_sym_literal_token3,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(222), 1,
      anon_sym_LPAREN,
    STATE(74), 1,
      sym_string_literal,
    STATE(86), 1,
      sym_condition,
    ACTIONS(88), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(90), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    ACTIONS(94), 5,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      anon_sym_null,
      sym_integer_literal,
      sym_coord_literal,
    STATE(94), 9,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
      sym_constant_variable,
      sym_literal,
  [2103] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      sym_identifier,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      anon_sym_DOLLAR,
    ACTIONS(86), 1,
      anon_sym_calc,
    ACTIONS(92), 1,
      anon_sym_CARET,
    ACTIONS(96), 1,
      aux_sym_literal_token3,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    STATE(74), 1,
      sym_string_literal,
    STATE(162), 1,
      sym_expression_list,
    ACTIONS(88), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(90), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    ACTIONS(94), 5,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      anon_sym_null,
      sym_integer_literal,
      sym_coord_literal,
    STATE(110), 9,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
      sym_constant_variable,
      sym_literal,
  [2160] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      sym_identifier,
    ACTIONS(82), 1,
      anon_sym_DOLLAR,
    ACTIONS(86), 1,
      anon_sym_calc,
    ACTIONS(92), 1,
      anon_sym_CARET,
    ACTIONS(96), 1,
      aux_sym_literal_token3,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(222), 1,
      anon_sym_LPAREN,
    STATE(74), 1,
      sym_string_literal,
    STATE(85), 1,
      sym_condition,
    ACTIONS(88), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(90), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    ACTIONS(94), 5,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      anon_sym_null,
      sym_integer_literal,
      sym_coord_literal,
    STATE(94), 9,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
      sym_constant_variable,
      sym_literal,
  [2217] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      sym_identifier,
    ACTIONS(82), 1,
      anon_sym_DOLLAR,
    ACTIONS(86), 1,
      anon_sym_calc,
    ACTIONS(92), 1,
      anon_sym_CARET,
    ACTIONS(96), 1,
      aux_sym_literal_token3,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(222), 1,
      anon_sym_LPAREN,
    STATE(74), 1,
      sym_string_literal,
    STATE(95), 1,
      sym_condition,
    ACTIONS(88), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(90), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    ACTIONS(94), 5,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      anon_sym_null,
      sym_integer_literal,
      sym_coord_literal,
    STATE(94), 9,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
      sym_constant_variable,
      sym_literal,
  [2274] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      sym_identifier,
    ACTIONS(82), 1,
      anon_sym_DOLLAR,
    ACTIONS(86), 1,
      anon_sym_calc,
    ACTIONS(92), 1,
      anon_sym_CARET,
    ACTIONS(96), 1,
      aux_sym_literal_token3,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    STATE(74), 1,
      sym_string_literal,
    STATE(99), 1,
      sym_arithmetic,
    ACTIONS(88), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(90), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    ACTIONS(94), 5,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      anon_sym_null,
      sym_integer_literal,
      sym_coord_literal,
    STATE(96), 9,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
      sym_constant_variable,
      sym_literal,
  [2331] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      sym_identifier,
    ACTIONS(82), 1,
      anon_sym_DOLLAR,
    ACTIONS(86), 1,
      anon_sym_calc,
    ACTIONS(92), 1,
      anon_sym_CARET,
    ACTIONS(96), 1,
      aux_sym_literal_token3,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(222), 1,
      anon_sym_LPAREN,
    STATE(74), 1,
      sym_string_literal,
    STATE(89), 1,
      sym_condition,
    ACTIONS(88), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(90), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    ACTIONS(94), 5,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      anon_sym_null,
      sym_integer_literal,
      sym_coord_literal,
    STATE(94), 9,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
      sym_constant_variable,
      sym_literal,
  [2388] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      sym_identifier,
    ACTIONS(82), 1,
      anon_sym_DOLLAR,
    ACTIONS(86), 1,
      anon_sym_calc,
    ACTIONS(92), 1,
      anon_sym_CARET,
    ACTIONS(96), 1,
      aux_sym_literal_token3,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(222), 1,
      anon_sym_LPAREN,
    STATE(74), 1,
      sym_string_literal,
    STATE(90), 1,
      sym_condition,
    ACTIONS(88), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(90), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    ACTIONS(94), 5,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      anon_sym_null,
      sym_integer_literal,
      sym_coord_literal,
    STATE(94), 9,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
      sym_constant_variable,
      sym_literal,
  [2445] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      sym_identifier,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      anon_sym_DOLLAR,
    ACTIONS(86), 1,
      anon_sym_calc,
    ACTIONS(92), 1,
      anon_sym_CARET,
    ACTIONS(96), 1,
      aux_sym_literal_token3,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    STATE(74), 1,
      sym_string_literal,
    ACTIONS(88), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(90), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    ACTIONS(94), 5,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      anon_sym_null,
      sym_integer_literal,
      sym_coord_literal,
    STATE(163), 9,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
      sym_constant_variable,
      sym_literal,
  [2499] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      sym_identifier,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      anon_sym_DOLLAR,
    ACTIONS(86), 1,
      anon_sym_calc,
    ACTIONS(92), 1,
      anon_sym_CARET,
    ACTIONS(96), 1,
      aux_sym_literal_token3,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    STATE(74), 1,
      sym_string_literal,
    ACTIONS(88), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(90), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    ACTIONS(94), 5,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      anon_sym_null,
      sym_integer_literal,
      sym_coord_literal,
    STATE(149), 9,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
      sym_constant_variable,
      sym_literal,
  [2553] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      sym_identifier,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      anon_sym_DOLLAR,
    ACTIONS(86), 1,
      anon_sym_calc,
    ACTIONS(92), 1,
      anon_sym_CARET,
    ACTIONS(96), 1,
      aux_sym_literal_token3,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    STATE(74), 1,
      sym_string_literal,
    ACTIONS(88), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(90), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    ACTIONS(94), 5,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      anon_sym_null,
      sym_integer_literal,
      sym_coord_literal,
    STATE(115), 9,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
      sym_constant_variable,
      sym_literal,
  [2607] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      sym_identifier,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      anon_sym_DOLLAR,
    ACTIONS(86), 1,
      anon_sym_calc,
    ACTIONS(92), 1,
      anon_sym_CARET,
    ACTIONS(96), 1,
      aux_sym_literal_token3,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    STATE(74), 1,
      sym_string_literal,
    ACTIONS(88), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    ACTIONS(90), 2,
      anon_sym_TILDE,
      anon_sym_AT,
    ACTIONS(94), 5,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      anon_sym_null,
      sym_integer_literal,
      sym_coord_literal,
    STATE(154), 9,
      sym_parenthesis,
      sym__expression,
      sym_calc,
      sym_call,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
      sym_constant_variable,
      sym_literal,
  [2661] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    STATE(82), 1,
      sym_parenthesis,
    ACTIONS(226), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(224), 14,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2692] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(228), 15,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2718] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_LPAREN,
    ACTIONS(236), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(232), 14,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2746] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(238), 15,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2772] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_LPAREN,
    ACTIONS(246), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(242), 14,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2800] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(248), 14,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2825] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(252), 14,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2850] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(256), 14,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2875] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(260), 14,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2900] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(264), 14,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2925] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(268), 14,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2950] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(272), 14,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2975] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(276), 14,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
  [3000] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(280), 14,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
  [3025] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(284), 14,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
  [3050] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(288), 14,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
  [3075] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(292), 7,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_PIPE,
  [3092] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_RPAREN,
    ACTIONS(304), 1,
      anon_sym_AMP,
    ACTIONS(306), 1,
      anon_sym_PIPE,
    ACTIONS(298), 2,
      anon_sym_EQ,
      anon_sym_BANG,
    ACTIONS(300), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(302), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3117] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(308), 7,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_PIPE,
  [3134] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(308), 7,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_PIPE,
  [3151] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(302), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(308), 5,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_PIPE,
  [3170] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 2,
      anon_sym_EQ,
      anon_sym_BANG,
    ACTIONS(300), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(302), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(308), 3,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
  [3191] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_AMP,
    ACTIONS(298), 2,
      anon_sym_EQ,
      anon_sym_BANG,
    ACTIONS(300), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(302), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(308), 2,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [3214] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_AMP,
    ACTIONS(306), 1,
      anon_sym_PIPE,
    ACTIONS(312), 1,
      anon_sym_RPAREN,
    ACTIONS(298), 2,
      anon_sym_EQ,
      anon_sym_BANG,
    ACTIONS(300), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(302), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3239] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_AMP,
    ACTIONS(306), 1,
      anon_sym_PIPE,
    ACTIONS(314), 1,
      anon_sym_RPAREN,
    ACTIONS(298), 2,
      anon_sym_EQ,
      anon_sym_BANG,
    ACTIONS(300), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(302), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3264] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_AMP,
    ACTIONS(306), 1,
      anon_sym_PIPE,
    ACTIONS(316), 1,
      anon_sym_RPAREN,
    ACTIONS(298), 2,
      anon_sym_EQ,
      anon_sym_BANG,
    ACTIONS(300), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(302), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3289] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(292), 7,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG,
      anon_sym_AMP,
      anon_sym_PIPE,
  [3306] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_AMP,
    ACTIONS(306), 1,
      anon_sym_PIPE,
    ACTIONS(318), 1,
      anon_sym_RPAREN,
    ACTIONS(298), 2,
      anon_sym_EQ,
      anon_sym_BANG,
    ACTIONS(300), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(302), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3331] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_SLASH,
    ACTIONS(320), 7,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
  [3347] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      anon_sym_RPAREN,
    ACTIONS(326), 1,
      anon_sym_AMP,
    ACTIONS(328), 1,
      anon_sym_PIPE,
    ACTIONS(332), 1,
      anon_sym_SLASH,
    ACTIONS(330), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(334), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [3371] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_SLASH,
    ACTIONS(320), 7,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
  [3387] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_AMP,
    ACTIONS(328), 1,
      anon_sym_PIPE,
    ACTIONS(332), 1,
      anon_sym_SLASH,
    ACTIONS(336), 1,
      anon_sym_RPAREN,
    ACTIONS(330), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(334), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [3411] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_SLASH,
    ACTIONS(338), 7,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
  [3427] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_SLASH,
    ACTIONS(338), 7,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
  [3443] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_AMP,
    ACTIONS(332), 1,
      anon_sym_SLASH,
    ACTIONS(330), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(334), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(338), 2,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [3465] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_SLASH,
    ACTIONS(330), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(334), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(338), 3,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
  [3485] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_SLASH,
    ACTIONS(330), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(338), 5,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
  [3503] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LT,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    STATE(106), 2,
      sym_string_interpolation,
      aux_sym_string_literal_repeat1,
    ACTIONS(346), 3,
      sym__string_chars,
      sym_escape_sequence,
      sym_string_tag,
  [3522] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      anon_sym_LT,
    ACTIONS(351), 1,
      anon_sym_DQUOTE,
    STATE(106), 2,
      sym_string_interpolation,
      aux_sym_string_literal_repeat1,
    ACTIONS(353), 3,
      sym__string_chars,
      sym_escape_sequence,
      sym_string_tag,
  [3541] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LT,
    ACTIONS(356), 1,
      anon_sym_DQUOTE,
    STATE(105), 2,
      sym_string_interpolation,
      aux_sym_string_literal_repeat1,
    ACTIONS(358), 3,
      sym__string_chars,
      sym_escape_sequence,
      sym_string_tag,
  [3560] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_DOLLAR,
    STATE(143), 1,
      sym_assignable_variable,
    ACTIONS(88), 2,
      anon_sym_PERCENT,
      anon_sym_DOT_PERCENT,
    STATE(144), 3,
      sym_local_variable,
      sym_local_array_variable,
      sym_game_variable,
  [3579] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_LT,
    ACTIONS(362), 4,
      sym__string_chars,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym_string_tag,
  [3592] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_COMMA,
    STATE(112), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(366), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON,
  [3607] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_COMMA,
    STATE(111), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(371), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON,
  [3622] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_COMMA,
    STATE(111), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(373), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON,
  [3637] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_RBRACE,
    ACTIONS(377), 1,
      anon_sym_case,
    STATE(114), 2,
      sym_switch_case,
      aux_sym_switch_statement_repeat1,
  [3651] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_RBRACE,
    ACTIONS(381), 1,
      anon_sym_case,
    STATE(114), 2,
      sym_switch_case,
      aux_sym_switch_statement_repeat1,
  [3665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_COLON,
  [3675] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      ts_builtin_sym_end,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    STATE(116), 2,
      sym_script,
      aux_sym_source_file_repeat1,
  [3689] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(389), 1,
      ts_builtin_sym_end,
    STATE(116), 2,
      sym_script,
      aux_sym_source_file_repeat1,
  [3703] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_case,
    ACTIONS(391), 1,
      anon_sym_RBRACE,
    STATE(113), 2,
      sym_switch_case,
      aux_sym_switch_statement_repeat1,
  [3717] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    STATE(156), 1,
      sym_parenthesis,
    ACTIONS(224), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [3731] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_SEMI,
    ACTIONS(393), 2,
      anon_sym_COMMA,
      anon_sym_EQ,
  [3742] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      sym_identifier,
    ACTIONS(397), 1,
      aux_sym__advanced_identifier_token1,
    STATE(148), 1,
      sym__advanced_identifier,
  [3755] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      aux_sym_parameter_token2,
    ACTIONS(399), 1,
      aux_sym_parameter_token1,
    STATE(136), 1,
      sym_parameter,
  [3768] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_COMMA,
    ACTIONS(404), 1,
      anon_sym_RPAREN,
    STATE(123), 1,
      aux_sym_parameter_list_repeat1,
  [3781] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      anon_sym_COMMA,
    ACTIONS(408), 1,
      anon_sym_EQ,
    STATE(127), 1,
      aux_sym_assignable_variable_list_repeat1,
  [3794] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      sym_identifier,
    ACTIONS(397), 1,
      aux_sym__advanced_identifier_token1,
    STATE(119), 1,
      sym__advanced_identifier,
  [3807] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      sym_identifier,
    ACTIONS(397), 1,
      aux_sym__advanced_identifier_token1,
    STATE(68), 1,
      sym__advanced_identifier,
  [3820] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_COMMA,
    ACTIONS(413), 1,
      anon_sym_EQ,
    STATE(127), 1,
      aux_sym_assignable_variable_list_repeat1,
  [3833] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_COMMA,
    ACTIONS(417), 1,
      anon_sym_RPAREN,
    STATE(130), 1,
      aux_sym_type_list_repeat1,
  [3846] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_COMMA,
    ACTIONS(421), 1,
      anon_sym_RPAREN,
    STATE(123), 1,
      aux_sym_parameter_list_repeat1,
  [3859] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_COMMA,
    ACTIONS(426), 1,
      anon_sym_RPAREN,
    STATE(130), 1,
      aux_sym_type_list_repeat1,
  [3872] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      sym_identifier,
    ACTIONS(397), 1,
      aux_sym__advanced_identifier_token1,
    STATE(79), 1,
      sym__advanced_identifier,
  [3885] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_COMMA,
    ACTIONS(428), 1,
      anon_sym_RPAREN,
    STATE(128), 1,
      aux_sym_type_list_repeat1,
  [3898] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      anon_sym_COMMA,
    ACTIONS(430), 1,
      anon_sym_EQ,
    STATE(124), 1,
      aux_sym_assignable_variable_list_repeat1,
  [3911] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      sym_identifier,
    ACTIONS(397), 1,
      aux_sym__advanced_identifier_token1,
    STATE(77), 1,
      sym__advanced_identifier,
  [3924] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_COMMA,
    ACTIONS(432), 1,
      anon_sym_RPAREN,
    STATE(129), 1,
      aux_sym_parameter_list_repeat1,
  [3937] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3945] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      aux_sym_parameter_token1,
    STATE(142), 1,
      sym_type,
  [3955] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      anon_sym_DOLLAR,
    STATE(145), 1,
      sym_local_variable,
  [3965] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      anon_sym_DOLLAR,
    STATE(141), 1,
      sym_local_variable,
  [3975] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_LPAREN,
    ACTIONS(442), 1,
      anon_sym_SEMI,
  [3985] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3993] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4001] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 2,
      anon_sym_COMMA,
      anon_sym_EQ,
  [4009] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 2,
      anon_sym_COMMA,
      anon_sym_EQ,
  [4017] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_SEMI,
    ACTIONS(448), 1,
      anon_sym_EQ,
  [4027] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4035] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    STATE(152), 1,
      sym_parenthesis,
  [4045] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4053] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_SEMI,
  [4060] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_RBRACK,
  [4067] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      sym_identifier,
  [4074] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_LBRACE,
  [4081] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_SEMI,
  [4088] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      anon_sym_GT,
  [4095] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_RPAREN,
  [4102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_SEMI,
  [4109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      anon_sym_RPAREN,
  [4116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_EQ,
  [4123] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_LPAREN,
  [4130] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      anon_sym_LPAREN,
  [4137] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_RPAREN,
  [4144] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_SEMI,
  [4151] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_RPAREN,
  [4158] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      sym_identifier,
  [4165] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      sym_identifier,
  [4172] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
  [4179] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_RPAREN,
  [4186] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_COMMA,
  [4193] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      anon_sym_RPAREN,
  [4200] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      anon_sym_COLON,
  [4207] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      ts_builtin_sym_end,
  [4214] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_LPAREN,
  [4221] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_SEMI,
  [4228] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_SEMI,
  [4235] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      anon_sym_RPAREN,
  [4242] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(19)] = 0,
  [SMALL_STATE(20)] = 96,
  [SMALL_STATE(21)] = 192,
  [SMALL_STATE(22)] = 288,
  [SMALL_STATE(23)] = 384,
  [SMALL_STATE(24)] = 480,
  [SMALL_STATE(25)] = 547,
  [SMALL_STATE(26)] = 613,
  [SMALL_STATE(27)] = 679,
  [SMALL_STATE(28)] = 739,
  [SMALL_STATE(29)] = 775,
  [SMALL_STATE(30)] = 811,
  [SMALL_STATE(31)] = 847,
  [SMALL_STATE(32)] = 907,
  [SMALL_STATE(33)] = 967,
  [SMALL_STATE(34)] = 1003,
  [SMALL_STATE(35)] = 1039,
  [SMALL_STATE(36)] = 1075,
  [SMALL_STATE(37)] = 1111,
  [SMALL_STATE(38)] = 1171,
  [SMALL_STATE(39)] = 1207,
  [SMALL_STATE(40)] = 1243,
  [SMALL_STATE(41)] = 1281,
  [SMALL_STATE(42)] = 1317,
  [SMALL_STATE(43)] = 1353,
  [SMALL_STATE(44)] = 1389,
  [SMALL_STATE(45)] = 1425,
  [SMALL_STATE(46)] = 1461,
  [SMALL_STATE(47)] = 1497,
  [SMALL_STATE(48)] = 1533,
  [SMALL_STATE(49)] = 1590,
  [SMALL_STATE(50)] = 1647,
  [SMALL_STATE(51)] = 1704,
  [SMALL_STATE(52)] = 1761,
  [SMALL_STATE(53)] = 1818,
  [SMALL_STATE(54)] = 1875,
  [SMALL_STATE(55)] = 1932,
  [SMALL_STATE(56)] = 1989,
  [SMALL_STATE(57)] = 2046,
  [SMALL_STATE(58)] = 2103,
  [SMALL_STATE(59)] = 2160,
  [SMALL_STATE(60)] = 2217,
  [SMALL_STATE(61)] = 2274,
  [SMALL_STATE(62)] = 2331,
  [SMALL_STATE(63)] = 2388,
  [SMALL_STATE(64)] = 2445,
  [SMALL_STATE(65)] = 2499,
  [SMALL_STATE(66)] = 2553,
  [SMALL_STATE(67)] = 2607,
  [SMALL_STATE(68)] = 2661,
  [SMALL_STATE(69)] = 2692,
  [SMALL_STATE(70)] = 2718,
  [SMALL_STATE(71)] = 2746,
  [SMALL_STATE(72)] = 2772,
  [SMALL_STATE(73)] = 2800,
  [SMALL_STATE(74)] = 2825,
  [SMALL_STATE(75)] = 2850,
  [SMALL_STATE(76)] = 2875,
  [SMALL_STATE(77)] = 2900,
  [SMALL_STATE(78)] = 2925,
  [SMALL_STATE(79)] = 2950,
  [SMALL_STATE(80)] = 2975,
  [SMALL_STATE(81)] = 3000,
  [SMALL_STATE(82)] = 3025,
  [SMALL_STATE(83)] = 3050,
  [SMALL_STATE(84)] = 3075,
  [SMALL_STATE(85)] = 3092,
  [SMALL_STATE(86)] = 3117,
  [SMALL_STATE(87)] = 3134,
  [SMALL_STATE(88)] = 3151,
  [SMALL_STATE(89)] = 3170,
  [SMALL_STATE(90)] = 3191,
  [SMALL_STATE(91)] = 3214,
  [SMALL_STATE(92)] = 3239,
  [SMALL_STATE(93)] = 3264,
  [SMALL_STATE(94)] = 3289,
  [SMALL_STATE(95)] = 3306,
  [SMALL_STATE(96)] = 3331,
  [SMALL_STATE(97)] = 3347,
  [SMALL_STATE(98)] = 3371,
  [SMALL_STATE(99)] = 3387,
  [SMALL_STATE(100)] = 3411,
  [SMALL_STATE(101)] = 3427,
  [SMALL_STATE(102)] = 3443,
  [SMALL_STATE(103)] = 3465,
  [SMALL_STATE(104)] = 3485,
  [SMALL_STATE(105)] = 3503,
  [SMALL_STATE(106)] = 3522,
  [SMALL_STATE(107)] = 3541,
  [SMALL_STATE(108)] = 3560,
  [SMALL_STATE(109)] = 3579,
  [SMALL_STATE(110)] = 3592,
  [SMALL_STATE(111)] = 3607,
  [SMALL_STATE(112)] = 3622,
  [SMALL_STATE(113)] = 3637,
  [SMALL_STATE(114)] = 3651,
  [SMALL_STATE(115)] = 3665,
  [SMALL_STATE(116)] = 3675,
  [SMALL_STATE(117)] = 3689,
  [SMALL_STATE(118)] = 3703,
  [SMALL_STATE(119)] = 3717,
  [SMALL_STATE(120)] = 3731,
  [SMALL_STATE(121)] = 3742,
  [SMALL_STATE(122)] = 3755,
  [SMALL_STATE(123)] = 3768,
  [SMALL_STATE(124)] = 3781,
  [SMALL_STATE(125)] = 3794,
  [SMALL_STATE(126)] = 3807,
  [SMALL_STATE(127)] = 3820,
  [SMALL_STATE(128)] = 3833,
  [SMALL_STATE(129)] = 3846,
  [SMALL_STATE(130)] = 3859,
  [SMALL_STATE(131)] = 3872,
  [SMALL_STATE(132)] = 3885,
  [SMALL_STATE(133)] = 3898,
  [SMALL_STATE(134)] = 3911,
  [SMALL_STATE(135)] = 3924,
  [SMALL_STATE(136)] = 3937,
  [SMALL_STATE(137)] = 3945,
  [SMALL_STATE(138)] = 3955,
  [SMALL_STATE(139)] = 3965,
  [SMALL_STATE(140)] = 3975,
  [SMALL_STATE(141)] = 3985,
  [SMALL_STATE(142)] = 3993,
  [SMALL_STATE(143)] = 4001,
  [SMALL_STATE(144)] = 4009,
  [SMALL_STATE(145)] = 4017,
  [SMALL_STATE(146)] = 4027,
  [SMALL_STATE(147)] = 4035,
  [SMALL_STATE(148)] = 4045,
  [SMALL_STATE(149)] = 4053,
  [SMALL_STATE(150)] = 4060,
  [SMALL_STATE(151)] = 4067,
  [SMALL_STATE(152)] = 4074,
  [SMALL_STATE(153)] = 4081,
  [SMALL_STATE(154)] = 4088,
  [SMALL_STATE(155)] = 4095,
  [SMALL_STATE(156)] = 4102,
  [SMALL_STATE(157)] = 4109,
  [SMALL_STATE(158)] = 4116,
  [SMALL_STATE(159)] = 4123,
  [SMALL_STATE(160)] = 4130,
  [SMALL_STATE(161)] = 4137,
  [SMALL_STATE(162)] = 4144,
  [SMALL_STATE(163)] = 4151,
  [SMALL_STATE(164)] = 4158,
  [SMALL_STATE(165)] = 4165,
  [SMALL_STATE(166)] = 4172,
  [SMALL_STATE(167)] = 4179,
  [SMALL_STATE(168)] = 4186,
  [SMALL_STATE(169)] = 4193,
  [SMALL_STATE(170)] = 4200,
  [SMALL_STATE(171)] = 4207,
  [SMALL_STATE(172)] = 4214,
  [SMALL_STATE(173)] = 4221,
  [SMALL_STATE(174)] = 4228,
  [SMALL_STATE(175)] = 4235,
  [SMALL_STATE(176)] = 4242,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0),
  [11] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [14] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(140),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(159),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(166),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(147),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(126),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(138),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(160),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(134),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(165),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(131),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 11, 0, 1),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_case, 4, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_case, 4, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 6, 0, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 7, 0, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 9, 0, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 8, 0, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 5, 0, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 10, 0, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_case, 3, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_case, 3, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 12, 0, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement, 2, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_statement, 2, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement, 3, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_statement, 3, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_statement, 3, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_statement, 3, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 4, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 4, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_statement, 1, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_statement, 1, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_statement, 4, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_statement, 4, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 4, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_statement, 4, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 5, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 5, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 5, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 5, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_statement, 5, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_statement, 5, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_declaration_statement, 5, 0, 6),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_declaration_statement, 5, 0, 6),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_statement, 5, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_statement, 5, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 2, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 2, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variable, 2, 0, 2),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_variable, 2, 0, 2),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesis, 3, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesis, 3, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__advanced_identifier, 1, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__advanced_identifier, 1, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 2, 0, 3),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 2, 0, 3),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_calc, 4, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_calc, 4, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3, 0, 0),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3, 0, 0),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4, 0, 3),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 4, 0, 3),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game_variable, 2, 0, 2),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game_variable, 2, 0, 2),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4, 0, 5),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 4, 0, 5),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_variable, 2, 0, 2),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant_variable, 2, 0, 2),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3, 0, 5),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3, 0, 5),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 5, 0, 3),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 5, 0, 3),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_array_variable, 3, 0, 2),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_array_variable, 3, 0, 2),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 1, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 1, 0, 0),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 3, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arithmetic, 1, 0, 0),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arithmetic, 1, 0, 0),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arithmetic, 3, 0, 0),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arithmetic, 3, 0, 0),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [348] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(106),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_interpolation, 3, 0, 0),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_interpolation, 3, 0, 0),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1, 0, 0),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_statement_repeat1, 2, 0, 0),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [386] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(164),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignable_variable, 1, 0, 0),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0), SHIFT_REPEAT(122),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignable_variable_list, 2, 0, 0),
  [410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignable_variable_list_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignable_variable_list_repeat1, 2, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_list, 2, 0, 0),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [423] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_list_repeat1, 2, 0, 0), SHIFT_REPEAT(137),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_list_repeat1, 2, 0, 0),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_list, 1, 0, 0),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignable_variable_list, 1, 0, 0),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 1, 0, 0),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, 0, 4),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [494] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__string_chars = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__string_chars] = sym__string_chars,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__string_chars] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_runescript_external_scanner_create(void);
void tree_sitter_runescript_external_scanner_destroy(void *);
bool tree_sitter_runescript_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_runescript_external_scanner_serialize(void *, char *);
void tree_sitter_runescript_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_runescript(void) {
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
      tree_sitter_runescript_external_scanner_create,
      tree_sitter_runescript_external_scanner_destroy,
      tree_sitter_runescript_external_scanner_scan,
      tree_sitter_runescript_external_scanner_serialize,
      tree_sitter_runescript_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
