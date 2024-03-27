#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 417
#define LARGE_STATE_COUNT 15
#define SYMBOL_COUNT 142
#define ALIAS_COUNT 1
#define TOKEN_COUNT 78
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 20
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 32

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_LF = 2,
  anon_sym_SEMI = 3,
  anon_sym_NULL = 4,
  anon_sym_func = 5,
  anon_sym_LPAREN = 6,
  anon_sym_COMMA = 7,
  anon_sym_RPAREN = 8,
  anon_sym_EQ = 9,
  anon_sym_LBRACE = 10,
  anon_sym_RBRACE = 11,
  anon_sym_const = 12,
  anon_sym_var = 13,
  anon_sym_COLON_EQ = 14,
  anon_sym_PLUS_PLUS = 15,
  anon_sym_DASH_DASH = 16,
  anon_sym_STAR_EQ = 17,
  anon_sym_DASH_EQ = 18,
  anon_sym_PLUS_EQ = 19,
  anon_sym_SLASH_EQ = 20,
  anon_sym_break = 21,
  anon_sym_continue = 22,
  anon_sym_return = 23,
  anon_sym_go = 24,
  anon_sym_defer = 25,
  anon_sym_import = 26,
  anon_sym_from = 27,
  anon_sym_DOT = 28,
  anon_sym_as = 29,
  anon_sym_if = 30,
  anon_sym_else = 31,
  anon_sym_for = 32,
  anon_sym_range = 33,
  anon_sym_switch = 34,
  anon_sym_case = 35,
  anon_sym_COLON = 36,
  anon_sym_default = 37,
  anon_sym_LBRACK = 38,
  anon_sym_RBRACK = 39,
  anon_sym_PLUS = 40,
  anon_sym_DASH = 41,
  anon_sym_BANG = 42,
  anon_sym_CARET = 43,
  anon_sym_STAR = 44,
  anon_sym_AMP = 45,
  anon_sym_LT_DASH = 46,
  anon_sym_SLASH = 47,
  anon_sym_STAR_STAR = 48,
  anon_sym_PERCENT = 49,
  anon_sym_LT_LT = 50,
  anon_sym_GT_GT = 51,
  anon_sym_PIPE = 52,
  anon_sym_EQ_EQ = 53,
  anon_sym_BANG_EQ = 54,
  anon_sym_LT = 55,
  anon_sym_LT_EQ = 56,
  anon_sym_GT = 57,
  anon_sym_GT_EQ = 58,
  anon_sym_AMP_AMP = 59,
  anon_sym_PIPE_PIPE = 60,
  anon_sym_QMARK = 61,
  anon_sym_DQUOTE = 62,
  anon_sym_DQUOTE2 = 63,
  sym__string_non_escaped_content = 64,
  anon_sym_SQUOTE = 65,
  anon_sym_SQUOTE2 = 66,
  sym_string_template_char = 67,
  aux_sym_escape_sequence_token1 = 68,
  sym_escape_sequence_invalid = 69,
  sym_format_sequence = 70,
  sym_string_backtick = 71,
  sym_int_literal = 72,
  sym_float_literal = 73,
  sym_nil = 74,
  sym_true = 75,
  sym_false = 76,
  sym_comment = 77,
  sym_source_file = 78,
  sym__definition = 79,
  sym_function_declaration = 80,
  sym_parameter_list = 81,
  sym__parameter_declaration = 82,
  sym_parameter_declaration = 83,
  sym_parameter_declaration_default = 84,
  sym_block = 85,
  sym__statement_list = 86,
  sym__statement = 87,
  sym__simple_statement = 88,
  sym__declaration = 89,
  sym_const_declaration = 90,
  sym_var_declaration = 91,
  sym_short_var_declaration = 92,
  sym_inc_statement = 93,
  sym_dec_statement = 94,
  sym_assignment_statement = 95,
  sym_break_statement = 96,
  sym_continue_statement = 97,
  sym_return_statement = 98,
  sym_go_statement = 99,
  sym_defer_statement = 100,
  sym_import_statement = 101,
  sym_import_statement_from = 102,
  sym_import_statement_as = 103,
  sym_if_statement = 104,
  sym_for_statement = 105,
  sym_for_clause = 106,
  sym_range_clause = 107,
  sym_switch_statement = 108,
  sym_switch_case = 109,
  sym_default_case = 110,
  sym_expression_statement = 111,
  sym__expression = 112,
  sym_selector_expression = 113,
  sym_index_expression = 114,
  sym_expression_list = 115,
  sym_parenthesized_expression = 116,
  sym_call_expression = 117,
  sym_argument_list = 118,
  sym__complex_literal = 119,
  sym_list_literal = 120,
  sym_map_or_set_literal = 121,
  sym_set_literal_values = 122,
  sym_map_literal_values = 123,
  sym_map_literal_pair = 124,
  sym_unary_expression = 125,
  sym_binary_expression = 126,
  sym_conditional_expression = 127,
  sym_func_literal = 128,
  sym_string = 129,
  sym_string_template = 130,
  sym_escape_sequence = 131,
  sym_string_template_argument = 132,
  aux_sym_source_file_repeat1 = 133,
  aux_sym_parameter_list_repeat1 = 134,
  aux_sym__statement_list_repeat1 = 135,
  aux_sym_import_statement_from_repeat1 = 136,
  aux_sym_switch_statement_repeat1 = 137,
  aux_sym_expression_list_repeat1 = 138,
  aux_sym_map_literal_values_repeat1 = 139,
  aux_sym_string_repeat1 = 140,
  aux_sym_string_template_repeat1 = 141,
  alias_sym_field_identifier = 142,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_LF] = "\n",
  [anon_sym_SEMI] = ";",
  [anon_sym_NULL] = "\0",
  [anon_sym_func] = "func",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_const] = "const",
  [anon_sym_var] = "var",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_PLUS_PLUS] = "++",
  [anon_sym_DASH_DASH] = "--",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_SLASH_EQ] = "/=",
  [anon_sym_break] = "break",
  [anon_sym_continue] = "continue",
  [anon_sym_return] = "return",
  [anon_sym_go] = "go",
  [anon_sym_defer] = "defer",
  [anon_sym_import] = "import",
  [anon_sym_from] = "from",
  [anon_sym_DOT] = ".",
  [anon_sym_as] = "as",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_for] = "for",
  [anon_sym_range] = "range",
  [anon_sym_switch] = "switch",
  [anon_sym_case] = "case",
  [anon_sym_COLON] = ":",
  [anon_sym_default] = "default",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_BANG] = "!",
  [anon_sym_CARET] = "^",
  [anon_sym_STAR] = "*",
  [anon_sym_AMP] = "&",
  [anon_sym_LT_DASH] = "<-",
  [anon_sym_SLASH] = "/",
  [anon_sym_STAR_STAR] = "**",
  [anon_sym_PERCENT] = "%",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_PIPE] = "|",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_QMARK] = "\?",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_DQUOTE2] = "\"",
  [sym__string_non_escaped_content] = "_string_non_escaped_content",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_SQUOTE2] = "'",
  [sym_string_template_char] = "string_template_char",
  [aux_sym_escape_sequence_token1] = "escape_sequence_token1",
  [sym_escape_sequence_invalid] = "escape_sequence_invalid",
  [sym_format_sequence] = "format_sequence",
  [sym_string_backtick] = "string_backtick",
  [sym_int_literal] = "int_literal",
  [sym_float_literal] = "float_literal",
  [sym_nil] = "nil",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_function_declaration] = "function_declaration",
  [sym_parameter_list] = "parameter_list",
  [sym__parameter_declaration] = "_parameter_declaration",
  [sym_parameter_declaration] = "parameter_declaration",
  [sym_parameter_declaration_default] = "parameter_declaration_default",
  [sym_block] = "block",
  [sym__statement_list] = "_statement_list",
  [sym__statement] = "_statement",
  [sym__simple_statement] = "_simple_statement",
  [sym__declaration] = "_declaration",
  [sym_const_declaration] = "const_declaration",
  [sym_var_declaration] = "var_declaration",
  [sym_short_var_declaration] = "short_var_declaration",
  [sym_inc_statement] = "inc_statement",
  [sym_dec_statement] = "dec_statement",
  [sym_assignment_statement] = "assignment_statement",
  [sym_break_statement] = "break_statement",
  [sym_continue_statement] = "continue_statement",
  [sym_return_statement] = "return_statement",
  [sym_go_statement] = "go_statement",
  [sym_defer_statement] = "defer_statement",
  [sym_import_statement] = "import_statement",
  [sym_import_statement_from] = "import_statement_from",
  [sym_import_statement_as] = "import_statement_as",
  [sym_if_statement] = "if_statement",
  [sym_for_statement] = "for_statement",
  [sym_for_clause] = "for_clause",
  [sym_range_clause] = "range_clause",
  [sym_switch_statement] = "switch_statement",
  [sym_switch_case] = "switch_case",
  [sym_default_case] = "default_case",
  [sym_expression_statement] = "expression_statement",
  [sym__expression] = "_expression",
  [sym_selector_expression] = "selector_expression",
  [sym_index_expression] = "index_expression",
  [sym_expression_list] = "expression_list",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_call_expression] = "call_expression",
  [sym_argument_list] = "argument_list",
  [sym__complex_literal] = "_complex_literal",
  [sym_list_literal] = "list_literal",
  [sym_map_or_set_literal] = "map_or_set_literal",
  [sym_set_literal_values] = "set_literal_values",
  [sym_map_literal_values] = "map_literal_values",
  [sym_map_literal_pair] = "map_literal_pair",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_conditional_expression] = "conditional_expression",
  [sym_func_literal] = "func_literal",
  [sym_string] = "string",
  [sym_string_template] = "string_template",
  [sym_escape_sequence] = "escape_sequence",
  [sym_string_template_argument] = "string_template_argument",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym__statement_list_repeat1] = "_statement_list_repeat1",
  [aux_sym_import_statement_from_repeat1] = "import_statement_from_repeat1",
  [aux_sym_switch_statement_repeat1] = "switch_statement_repeat1",
  [aux_sym_expression_list_repeat1] = "expression_list_repeat1",
  [aux_sym_map_literal_values_repeat1] = "map_literal_values_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_template_repeat1] = "string_template_repeat1",
  [alias_sym_field_identifier] = "field_identifier",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_NULL] = anon_sym_NULL,
  [anon_sym_func] = anon_sym_func,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_PLUS_PLUS] = anon_sym_PLUS_PLUS,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [anon_sym_STAR_EQ] = anon_sym_STAR_EQ,
  [anon_sym_DASH_EQ] = anon_sym_DASH_EQ,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_SLASH_EQ] = anon_sym_SLASH_EQ,
  [anon_sym_break] = anon_sym_break,
  [anon_sym_continue] = anon_sym_continue,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_go] = anon_sym_go,
  [anon_sym_defer] = anon_sym_defer,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_range] = anon_sym_range,
  [anon_sym_switch] = anon_sym_switch,
  [anon_sym_case] = anon_sym_case,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_LT_DASH] = anon_sym_LT_DASH,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_STAR_STAR] = anon_sym_STAR_STAR,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_DQUOTE2] = anon_sym_DQUOTE,
  [sym__string_non_escaped_content] = sym__string_non_escaped_content,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_SQUOTE2] = anon_sym_SQUOTE,
  [sym_string_template_char] = sym_string_template_char,
  [aux_sym_escape_sequence_token1] = aux_sym_escape_sequence_token1,
  [sym_escape_sequence_invalid] = sym_escape_sequence_invalid,
  [sym_format_sequence] = sym_format_sequence,
  [sym_string_backtick] = sym_string_backtick,
  [sym_int_literal] = sym_int_literal,
  [sym_float_literal] = sym_float_literal,
  [sym_nil] = sym_nil,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_function_declaration] = sym_function_declaration,
  [sym_parameter_list] = sym_parameter_list,
  [sym__parameter_declaration] = sym__parameter_declaration,
  [sym_parameter_declaration] = sym_parameter_declaration,
  [sym_parameter_declaration_default] = sym_parameter_declaration_default,
  [sym_block] = sym_block,
  [sym__statement_list] = sym__statement_list,
  [sym__statement] = sym__statement,
  [sym__simple_statement] = sym__simple_statement,
  [sym__declaration] = sym__declaration,
  [sym_const_declaration] = sym_const_declaration,
  [sym_var_declaration] = sym_var_declaration,
  [sym_short_var_declaration] = sym_short_var_declaration,
  [sym_inc_statement] = sym_inc_statement,
  [sym_dec_statement] = sym_dec_statement,
  [sym_assignment_statement] = sym_assignment_statement,
  [sym_break_statement] = sym_break_statement,
  [sym_continue_statement] = sym_continue_statement,
  [sym_return_statement] = sym_return_statement,
  [sym_go_statement] = sym_go_statement,
  [sym_defer_statement] = sym_defer_statement,
  [sym_import_statement] = sym_import_statement,
  [sym_import_statement_from] = sym_import_statement_from,
  [sym_import_statement_as] = sym_import_statement_as,
  [sym_if_statement] = sym_if_statement,
  [sym_for_statement] = sym_for_statement,
  [sym_for_clause] = sym_for_clause,
  [sym_range_clause] = sym_range_clause,
  [sym_switch_statement] = sym_switch_statement,
  [sym_switch_case] = sym_switch_case,
  [sym_default_case] = sym_default_case,
  [sym_expression_statement] = sym_expression_statement,
  [sym__expression] = sym__expression,
  [sym_selector_expression] = sym_selector_expression,
  [sym_index_expression] = sym_index_expression,
  [sym_expression_list] = sym_expression_list,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_call_expression] = sym_call_expression,
  [sym_argument_list] = sym_argument_list,
  [sym__complex_literal] = sym__complex_literal,
  [sym_list_literal] = sym_list_literal,
  [sym_map_or_set_literal] = sym_map_or_set_literal,
  [sym_set_literal_values] = sym_set_literal_values,
  [sym_map_literal_values] = sym_map_literal_values,
  [sym_map_literal_pair] = sym_map_literal_pair,
  [sym_unary_expression] = sym_unary_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_conditional_expression] = sym_conditional_expression,
  [sym_func_literal] = sym_func_literal,
  [sym_string] = sym_string,
  [sym_string_template] = sym_string_template,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_string_template_argument] = sym_string_template_argument,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym__statement_list_repeat1] = aux_sym__statement_list_repeat1,
  [aux_sym_import_statement_from_repeat1] = aux_sym_import_statement_from_repeat1,
  [aux_sym_switch_statement_repeat1] = aux_sym_switch_statement_repeat1,
  [aux_sym_expression_list_repeat1] = aux_sym_expression_list_repeat1,
  [aux_sym_map_literal_values_repeat1] = aux_sym_map_literal_values_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_string_template_repeat1] = aux_sym_string_template_repeat1,
  [alias_sym_field_identifier] = alias_sym_field_identifier,
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
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NULL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_func] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
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
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_break] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_continue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_go] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
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
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_range] = {
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
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
  [anon_sym_PLUS] = {
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
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
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
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [sym__string_non_escaped_content] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [sym_string_template_char] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_escape_sequence_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence_invalid] = {
    .visible = true,
    .named = true,
  },
  [sym_format_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_string_backtick] = {
    .visible = true,
    .named = true,
  },
  [sym_int_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_float_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_nil] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
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
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym__parameter_declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_parameter_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_declaration_default] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_list] = {
    .visible = false,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym__simple_statement] = {
    .visible = false,
    .named = true,
  },
  [sym__declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_const_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_var_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_short_var_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_inc_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_dec_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment_statement] = {
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
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_go_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_defer_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_import_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_import_statement_from] = {
    .visible = true,
    .named = true,
  },
  [sym_import_statement_as] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_for_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_for_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_range_clause] = {
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
  [sym_default_case] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_selector_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_index_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_list] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym__complex_literal] = {
    .visible = false,
    .named = true,
  },
  [sym_list_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_map_or_set_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_set_literal_values] = {
    .visible = true,
    .named = true,
  },
  [sym_map_literal_values] = {
    .visible = true,
    .named = true,
  },
  [sym_map_literal_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_func_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_string_template] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_string_template_argument] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__statement_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_import_statement_from_repeat1] = {
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
  [aux_sym_map_literal_values_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_template_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_field_identifier] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_alternative = 1,
  field_arguments = 2,
  field_as = 3,
  field_body = 4,
  field_condition = 5,
  field_consequence = 6,
  field_default = 7,
  field_field = 8,
  field_from = 9,
  field_function = 10,
  field_index = 11,
  field_initializer = 12,
  field_left = 13,
  field_name = 14,
  field_operand = 15,
  field_operator = 16,
  field_parameters = 17,
  field_right = 18,
  field_update = 19,
  field_value = 20,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_arguments] = "arguments",
  [field_as] = "as",
  [field_body] = "body",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_default] = "default",
  [field_field] = "field",
  [field_from] = "from",
  [field_function] = "function",
  [field_index] = "index",
  [field_initializer] = "initializer",
  [field_left] = "left",
  [field_name] = "name",
  [field_operand] = "operand",
  [field_operator] = "operator",
  [field_parameters] = "parameters",
  [field_right] = "right",
  [field_update] = "update",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 1},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 2},
  [8] = {.index = 11, .length = 2},
  [9] = {.index = 13, .length = 1},
  [10] = {.index = 14, .length = 2},
  [11] = {.index = 16, .length = 2},
  [12] = {.index = 18, .length = 3},
  [13] = {.index = 21, .length = 2},
  [14] = {.index = 23, .length = 3},
  [15] = {.index = 26, .length = 2},
  [16] = {.index = 28, .length = 2},
  [17] = {.index = 30, .length = 1},
  [18] = {.index = 31, .length = 1},
  [19] = {.index = 32, .length = 1},
  [20] = {.index = 33, .length = 1},
  [21] = {.index = 34, .length = 3},
  [22] = {.index = 37, .length = 2},
  [23] = {.index = 39, .length = 2},
  [24] = {.index = 41, .length = 3},
  [25] = {.index = 44, .length = 2},
  [26] = {.index = 46, .length = 2},
  [27] = {.index = 48, .length = 2},
  [28] = {.index = 50, .length = 3},
  [29] = {.index = 53, .length = 3},
  [30] = {.index = 56, .length = 4},
  [31] = {.index = 60, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_body, 1},
  [2] =
    {field_operand, 1},
    {field_operator, 0},
  [4] =
    {field_arguments, 1},
    {field_function, 0},
  [6] =
    {field_name, 0},
  [7] =
    {field_body, 2},
    {field_parameters, 1},
  [9] =
    {field_as, 2},
    {field_name, 1},
  [11] =
    {field_condition, 1},
    {field_consequence, 2},
  [13] =
    {field_body, 2},
  [14] =
    {field_from, 0},
    {field_name, 2},
  [16] =
    {field_field, 2},
    {field_operand, 0},
  [18] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [21] =
    {field_left, 0},
    {field_right, 2},
  [23] =
    {field_body, 3},
    {field_name, 1},
    {field_parameters, 2},
  [26] =
    {field_name, 0},
    {field_value, 2},
  [28] =
    {field_name, 1},
    {field_value, 3},
  [30] =
    {field_update, 2},
  [31] =
    {field_condition, 1},
  [32] =
    {field_initializer, 0},
  [33] =
    {field_value, 1},
  [34] =
    {field_as, 3},
    {field_from, 0},
    {field_name, 2},
  [37] =
    {field_index, 2},
    {field_operand, 0},
  [39] =
    {field_default, 2},
    {field_name, 0},
  [41] =
    {field_alternative, 4},
    {field_condition, 1},
    {field_consequence, 2},
  [44] =
    {field_condition, 1},
    {field_update, 3},
  [46] =
    {field_initializer, 0},
    {field_update, 3},
  [48] =
    {field_condition, 2},
    {field_initializer, 0},
  [50] =
    {field_left, 0},
    {field_left, 1},
    {field_right, 3},
  [53] =
    {field_alternative, 4},
    {field_condition, 0},
    {field_consequence, 2},
  [56] =
    {field_left, 0},
    {field_left, 1},
    {field_left, 2},
    {field_right, 4},
  [60] =
    {field_condition, 2},
    {field_initializer, 0},
    {field_update, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [11] = {
    [2] = alias_sym_field_identifier,
  },
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
  [10] = 9,
  [11] = 9,
  [12] = 9,
  [13] = 9,
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
  [29] = 25,
  [30] = 25,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 25,
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
  [58] = 57,
  [59] = 57,
  [60] = 57,
  [61] = 61,
  [62] = 61,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 61,
  [68] = 68,
  [69] = 68,
  [70] = 61,
  [71] = 71,
  [72] = 63,
  [73] = 68,
  [74] = 68,
  [75] = 63,
  [76] = 76,
  [77] = 77,
  [78] = 63,
  [79] = 79,
  [80] = 80,
  [81] = 23,
  [82] = 33,
  [83] = 22,
  [84] = 35,
  [85] = 32,
  [86] = 86,
  [87] = 31,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 64,
  [92] = 90,
  [93] = 26,
  [94] = 94,
  [95] = 42,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 102,
  [104] = 101,
  [105] = 56,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 100,
  [111] = 52,
  [112] = 112,
  [113] = 40,
  [114] = 37,
  [115] = 112,
  [116] = 38,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 47,
  [123] = 48,
  [124] = 43,
  [125] = 49,
  [126] = 41,
  [127] = 53,
  [128] = 36,
  [129] = 50,
  [130] = 51,
  [131] = 120,
  [132] = 99,
  [133] = 98,
  [134] = 119,
  [135] = 97,
  [136] = 108,
  [137] = 109,
  [138] = 96,
  [139] = 139,
  [140] = 140,
  [141] = 140,
  [142] = 96,
  [143] = 45,
  [144] = 97,
  [145] = 140,
  [146] = 146,
  [147] = 147,
  [148] = 99,
  [149] = 54,
  [150] = 150,
  [151] = 44,
  [152] = 98,
  [153] = 97,
  [154] = 96,
  [155] = 55,
  [156] = 106,
  [157] = 140,
  [158] = 98,
  [159] = 99,
  [160] = 100,
  [161] = 119,
  [162] = 120,
  [163] = 106,
  [164] = 100,
  [165] = 119,
  [166] = 120,
  [167] = 112,
  [168] = 24,
  [169] = 106,
  [170] = 27,
  [171] = 171,
  [172] = 112,
  [173] = 31,
  [174] = 35,
  [175] = 23,
  [176] = 28,
  [177] = 26,
  [178] = 178,
  [179] = 179,
  [180] = 27,
  [181] = 24,
  [182] = 182,
  [183] = 22,
  [184] = 33,
  [185] = 32,
  [186] = 51,
  [187] = 38,
  [188] = 27,
  [189] = 47,
  [190] = 24,
  [191] = 48,
  [192] = 43,
  [193] = 49,
  [194] = 37,
  [195] = 41,
  [196] = 40,
  [197] = 53,
  [198] = 36,
  [199] = 50,
  [200] = 55,
  [201] = 52,
  [202] = 54,
  [203] = 44,
  [204] = 56,
  [205] = 42,
  [206] = 45,
  [207] = 207,
  [208] = 33,
  [209] = 23,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 26,
  [215] = 31,
  [216] = 216,
  [217] = 22,
  [218] = 35,
  [219] = 219,
  [220] = 220,
  [221] = 32,
  [222] = 41,
  [223] = 50,
  [224] = 36,
  [225] = 42,
  [226] = 49,
  [227] = 54,
  [228] = 45,
  [229] = 43,
  [230] = 44,
  [231] = 55,
  [232] = 48,
  [233] = 47,
  [234] = 27,
  [235] = 40,
  [236] = 52,
  [237] = 37,
  [238] = 24,
  [239] = 53,
  [240] = 38,
  [241] = 56,
  [242] = 51,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 245,
  [248] = 245,
  [249] = 246,
  [250] = 246,
  [251] = 245,
  [252] = 246,
  [253] = 219,
  [254] = 220,
  [255] = 216,
  [256] = 213,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 262,
  [266] = 262,
  [267] = 263,
  [268] = 264,
  [269] = 263,
  [270] = 264,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 264,
  [275] = 263,
  [276] = 276,
  [277] = 277,
  [278] = 262,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 280,
  [284] = 282,
  [285] = 285,
  [286] = 282,
  [287] = 287,
  [288] = 280,
  [289] = 280,
  [290] = 282,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 293,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 295,
  [300] = 295,
  [301] = 293,
  [302] = 295,
  [303] = 303,
  [304] = 304,
  [305] = 293,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 309,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 308,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 337,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 336,
  [348] = 336,
  [349] = 349,
  [350] = 350,
  [351] = 336,
  [352] = 337,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 337,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 328,
  [364] = 359,
  [365] = 365,
  [366] = 366,
  [367] = 362,
  [368] = 359,
  [369] = 362,
  [370] = 362,
  [371] = 371,
  [372] = 359,
  [373] = 373,
  [374] = 323,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 380,
  [384] = 381,
  [385] = 375,
  [386] = 386,
  [387] = 380,
  [388] = 375,
  [389] = 379,
  [390] = 379,
  [391] = 375,
  [392] = 381,
  [393] = 393,
  [394] = 394,
  [395] = 380,
  [396] = 396,
  [397] = 397,
  [398] = 379,
  [399] = 399,
  [400] = 379,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 378,
  [405] = 377,
  [406] = 406,
  [407] = 407,
  [408] = 381,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 43520
    ? (c < 4197
      ? (c < 2730
        ? (c < 2036
          ? (c < 1015
            ? (c < 750
              ? (c < 216
                ? (c < 181
                  ? (c < 170
                    ? (c >= 'A' && c <= 'z')
                    : c <= 170)
                  : (c <= 181 || (c < 192
                    ? c == 186
                    : c <= 214)))
                : (c <= 246 || (c < 736
                  ? (c < 710
                    ? (c >= 248 && c <= 705)
                    : c <= 721)
                  : (c <= 740 || c == 748))))
              : (c <= 750 || (c < 902
                ? (c < 891
                  ? (c < 886
                    ? (c >= 880 && c <= 884)
                    : c <= 887)
                  : (c <= 893 || c == 895))
                : (c <= 902 || (c < 910
                  ? (c < 908
                    ? (c >= 904 && c <= 906)
                    : c <= 908)
                  : (c <= 929 || (c >= 931 && c <= 1013)))))))
            : (c <= 1153 || (c < 1749
              ? (c < 1488
                ? (c < 1369
                  ? (c < 1329
                    ? (c >= 1162 && c <= 1327)
                    : c <= 1366)
                  : (c <= 1369 || (c >= 1376 && c <= 1416)))
                : (c <= 1514 || (c < 1646
                  ? (c < 1568
                    ? (c >= 1519 && c <= 1522)
                    : c <= 1610)
                  : (c <= 1647 || (c >= 1649 && c <= 1747)))))
              : (c <= 1749 || (c < 1808
                ? (c < 1786
                  ? (c < 1774
                    ? (c >= 1765 && c <= 1766)
                    : c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1969
                  ? (c < 1869
                    ? (c >= 1810 && c <= 1839)
                    : c <= 1957)
                  : (c <= 1969 || (c >= 1994 && c <= 2026)))))))))
          : (c <= 2037 || (c < 2486
            ? (c < 2308
              ? (c < 2112
                ? (c < 2074
                  ? (c < 2048
                    ? c == 2042
                    : c <= 2069)
                  : (c <= 2074 || (c < 2088
                    ? c == 2084
                    : c <= 2088)))
                : (c <= 2136 || (c < 2185
                  ? (c < 2160
                    ? (c >= 2144 && c <= 2154)
                    : c <= 2183)
                  : (c <= 2190 || (c >= 2208 && c <= 2249)))))
              : (c <= 2361 || (c < 2437
                ? (c < 2392
                  ? (c < 2384
                    ? c == 2365
                    : c <= 2384)
                  : (c <= 2401 || (c >= 2417 && c <= 2432)))
                : (c <= 2444 || (c < 2474
                  ? (c < 2451
                    ? (c >= 2447 && c <= 2448)
                    : c <= 2472)
                  : (c <= 2480 || c == 2482))))))
            : (c <= 2489 || (c < 2602
              ? (c < 2544
                ? (c < 2524
                  ? (c < 2510
                    ? c == 2493
                    : c <= 2510)
                  : (c <= 2525 || (c >= 2527 && c <= 2529)))
                : (c <= 2545 || (c < 2575
                  ? (c < 2565
                    ? c == 2556
                    : c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))))
              : (c <= 2608 || (c < 2654
                ? (c < 2616
                  ? (c < 2613
                    ? (c >= 2610 && c <= 2611)
                    : c <= 2614)
                  : (c <= 2617 || (c >= 2649 && c <= 2652)))
                : (c <= 2654 || (c < 2703
                  ? (c < 2693
                    ? (c >= 2674 && c <= 2676)
                    : c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))))))))))
        : (c <= 2736 || (c < 3253
          ? (c < 2969
            ? (c < 2866
              ? (c < 2809
                ? (c < 2749
                  ? (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)
                  : (c <= 2749 || (c < 2784
                    ? c == 2768
                    : c <= 2785)))
                : (c <= 2809 || (c < 2835
                  ? (c < 2831
                    ? (c >= 2821 && c <= 2828)
                    : c <= 2832)
                  : (c <= 2856 || (c >= 2858 && c <= 2864)))))
              : (c <= 2867 || (c < 2929
                ? (c < 2908
                  ? (c < 2877
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2877)
                  : (c <= 2909 || (c >= 2911 && c <= 2913)))
                : (c <= 2929 || (c < 2958
                  ? (c < 2949
                    ? c == 2947
                    : c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))))))
            : (c <= 2970 || (c < 3114
              ? (c < 2990
                ? (c < 2979
                  ? (c < 2974
                    ? c == 2972
                    : c <= 2975)
                  : (c <= 2980 || (c >= 2984 && c <= 2986)))
                : (c <= 3001 || (c < 3086
                  ? (c < 3077
                    ? c == 3024
                    : c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))))
              : (c <= 3129 || (c < 3200
                ? (c < 3165
                  ? (c < 3160
                    ? c == 3133
                    : c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3218
                  ? (c < 3214
                    ? (c >= 3205 && c <= 3212)
                    : c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))))))))
          : (c <= 3257 || (c < 3713
            ? (c < 3423
              ? (c < 3342
                ? (c < 3296
                  ? (c < 3293
                    ? c == 3261
                    : c <= 3294)
                  : (c <= 3297 || (c < 3332
                    ? (c >= 3313 && c <= 3314)
                    : c <= 3340)))
                : (c <= 3344 || (c < 3406
                  ? (c < 3389
                    ? (c >= 3346 && c <= 3386)
                    : c <= 3389)
                  : (c <= 3406 || (c >= 3412 && c <= 3414)))))
              : (c <= 3425 || (c < 3517
                ? (c < 3482
                  ? (c < 3461
                    ? (c >= 3450 && c <= 3455)
                    : c <= 3478)
                  : (c <= 3505 || (c >= 3507 && c <= 3515)))
                : (c <= 3517 || (c < 3634
                  ? (c < 3585
                    ? (c >= 3520 && c <= 3526)
                    : c <= 3632)
                  : (c <= 3634 || (c >= 3648 && c <= 3654)))))))
            : (c <= 3714 || (c < 3804
              ? (c < 3751
                ? (c < 3724
                  ? (c < 3718
                    ? c == 3716
                    : c <= 3722)
                  : (c <= 3747 || c == 3749))
                : (c <= 3760 || (c < 3776
                  ? (c < 3773
                    ? c == 3762
                    : c <= 3773)
                  : (c <= 3780 || c == 3782))))
              : (c <= 3807 || (c < 4096
                ? (c < 3913
                  ? (c < 3904
                    ? c == 3840
                    : c <= 3911)
                  : (c <= 3948 || (c >= 3976 && c <= 3980)))
                : (c <= 4138 || (c < 4186
                  ? (c < 4176
                    ? c == 4159
                    : c <= 4181)
                  : (c <= 4189 || c == 4193))))))))))))
      : (c <= 4198 || (c < 8144
        ? (c < 6272
          ? (c < 4824
            ? (c < 4696
              ? (c < 4301
                ? (c < 4238
                  ? (c < 4213
                    ? (c >= 4206 && c <= 4208)
                    : c <= 4225)
                  : (c <= 4238 || (c < 4295
                    ? (c >= 4256 && c <= 4293)
                    : c <= 4295)))
                : (c <= 4301 || (c < 4682
                  ? (c < 4348
                    ? (c >= 4304 && c <= 4346)
                    : c <= 4680)
                  : (c <= 4685 || (c >= 4688 && c <= 4694)))))
              : (c <= 4696 || (c < 4786
                ? (c < 4746
                  ? (c < 4704
                    ? (c >= 4698 && c <= 4701)
                    : c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c >= 4808 && c <= 4822)))))))
            : (c <= 4880 || (c < 5870
              ? (c < 5112
                ? (c < 4992
                  ? (c < 4888
                    ? (c >= 4882 && c <= 4885)
                    : c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c >= 5792 && c <= 5866)))))
              : (c <= 5880 || (c < 5998
                ? (c < 5952
                  ? (c < 5919
                    ? (c >= 5888 && c <= 5905)
                    : c <= 5937)
                  : (c <= 5969 || (c >= 5984 && c <= 5996)))
                : (c <= 6000 || (c < 6108
                  ? (c < 6103
                    ? (c >= 6016 && c <= 6067)
                    : c <= 6103)
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))))))))
          : (c <= 6312 || (c < 7357
            ? (c < 6917
              ? (c < 6528
                ? (c < 6400
                  ? (c < 6320
                    ? c == 6314
                    : c <= 6389)
                  : (c <= 6430 || (c < 6512
                    ? (c >= 6480 && c <= 6509)
                    : c <= 6516)))
                : (c <= 6571 || (c < 6688
                  ? (c < 6656
                    ? (c >= 6576 && c <= 6601)
                    : c <= 6678)
                  : (c <= 6740 || c == 6823))))
              : (c <= 6963 || (c < 7168
                ? (c < 7086
                  ? (c < 7043
                    ? (c >= 6981 && c <= 6988)
                    : c <= 7072)
                  : (c <= 7087 || (c >= 7098 && c <= 7141)))
                : (c <= 7203 || (c < 7296
                  ? (c < 7258
                    ? (c >= 7245 && c <= 7247)
                    : c <= 7293)
                  : (c <= 7304 || (c >= 7312 && c <= 7354)))))))
            : (c <= 7359 || (c < 8016
              ? (c < 7424
                ? (c < 7413
                  ? (c < 7406
                    ? (c >= 7401 && c <= 7404)
                    : c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7680 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c >= 8008 && c <= 8013)))))
              : (c <= 8023 || (c < 8064
                ? (c < 8029
                  ? (c < 8027
                    ? c == 8025
                    : c <= 8027)
                  : (c <= 8029 || (c >= 8031 && c <= 8061)))
                : (c <= 8116 || (c < 8130
                  ? (c < 8126
                    ? (c >= 8118 && c <= 8124)
                    : c <= 8126)
                  : (c <= 8132 || (c >= 8134 && c <= 8140)))))))))))
        : (c <= 8147 || (c < 12344
          ? (c < 11264
            ? (c < 8469
              ? (c < 8319
                ? (c < 8178
                  ? (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)
                  : (c <= 8180 || (c < 8305
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8305)))
                : (c <= 8319 || (c < 8455
                  ? (c < 8450
                    ? (c >= 8336 && c <= 8348)
                    : c <= 8450)
                  : (c <= 8455 || (c >= 8458 && c <= 8467)))))
              : (c <= 8469 || (c < 8490
                ? (c < 8486
                  ? (c < 8484
                    ? (c >= 8472 && c <= 8477)
                    : c <= 8484)
                  : (c <= 8486 || c == 8488))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c >= 8544 && c <= 8584)))))))
            : (c <= 11492 || (c < 11688
              ? (c < 11565
                ? (c < 11520
                  ? (c < 11506
                    ? (c >= 11499 && c <= 11502)
                    : c <= 11507)
                  : (c <= 11557 || c == 11559))
                : (c <= 11565 || (c < 11648
                  ? (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))))
              : (c <= 11694 || (c < 11728
                ? (c < 11712
                  ? (c < 11704
                    ? (c >= 11696 && c <= 11702)
                    : c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 12321
                  ? (c < 12293
                    ? (c >= 11736 && c <= 11742)
                    : c <= 12295)
                  : (c <= 12329 || (c >= 12337 && c <= 12341)))))))))
          : (c <= 12348 || (c < 42960
            ? (c < 42192
              ? (c < 12593
                ? (c < 12449
                  ? (c < 12445
                    ? (c >= 12353 && c <= 12438)
                    : c <= 12447)
                  : (c <= 12538 || (c < 12549
                    ? (c >= 12540 && c <= 12543)
                    : c <= 12591)))
                : (c <= 12686 || (c < 13312
                  ? (c < 12784
                    ? (c >= 12704 && c <= 12735)
                    : c <= 12799)
                  : (c <= 19903 || (c >= 19968 && c <= 42124)))))
              : (c <= 42237 || (c < 42623
                ? (c < 42538
                  ? (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42527)
                  : (c <= 42539 || (c >= 42560 && c <= 42606)))
                : (c <= 42653 || (c < 42786
                  ? (c < 42775
                    ? (c >= 42656 && c <= 42735)
                    : c <= 42783)
                  : (c <= 42888 || (c >= 42891 && c <= 42954)))))))
            : (c <= 42961 || (c < 43259
              ? (c < 43015
                ? (c < 42994
                  ? (c < 42965
                    ? c == 42963
                    : c <= 42969)
                  : (c <= 43009 || (c >= 43011 && c <= 43013)))
                : (c <= 43018 || (c < 43138
                  ? (c < 43072
                    ? (c >= 43020 && c <= 43042)
                    : c <= 43123)
                  : (c <= 43187 || (c >= 43250 && c <= 43255)))))
              : (c <= 43259 || (c < 43396
                ? (c < 43312
                  ? (c < 43274
                    ? (c >= 43261 && c <= 43262)
                    : c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))
                : (c <= 43442 || (c < 43494
                  ? (c < 43488
                    ? c == 43471
                    : c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))))))))))))))
    : (c <= 43560 || (c < 70751
      ? (c < 66964
        ? (c < 65008
          ? (c < 43888
            ? (c < 43739
              ? (c < 43697
                ? (c < 43616
                  ? (c < 43588
                    ? (c >= 43584 && c <= 43586)
                    : c <= 43595)
                  : (c <= 43638 || (c < 43646
                    ? c == 43642
                    : c <= 43695)))
                : (c <= 43697 || (c < 43712
                  ? (c < 43705
                    ? (c >= 43701 && c <= 43702)
                    : c <= 43709)
                  : (c <= 43712 || c == 43714))))
              : (c <= 43741 || (c < 43793
                ? (c < 43777
                  ? (c < 43762
                    ? (c >= 43744 && c <= 43754)
                    : c <= 43764)
                  : (c <= 43782 || (c >= 43785 && c <= 43790)))
                : (c <= 43798 || (c < 43824
                  ? (c < 43816
                    ? (c >= 43808 && c <= 43814)
                    : c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))))))
            : (c <= 44002 || (c < 64298
              ? (c < 64112
                ? (c < 55243
                  ? (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64285
                  ? (c < 64275
                    ? (c >= 64256 && c <= 64262)
                    : c <= 64279)
                  : (c <= 64285 || (c >= 64287 && c <= 64296)))))
              : (c <= 64310 || (c < 64326
                ? (c < 64320
                  ? (c < 64318
                    ? (c >= 64312 && c <= 64316)
                    : c <= 64318)
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))
                : (c <= 64433 || (c < 64848
                  ? (c < 64612
                    ? (c >= 64467 && c <= 64605)
                    : c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))))))))
          : (c <= 65017 || (c < 65616
            ? (c < 65440
              ? (c < 65149
                ? (c < 65143
                  ? (c < 65139
                    ? c == 65137
                    : c <= 65139)
                  : (c <= 65143 || (c < 65147
                    ? c == 65145
                    : c <= 65147)))
                : (c <= 65149 || (c < 65345
                  ? (c < 65313
                    ? (c >= 65151 && c <= 65276)
                    : c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65437)))))
              : (c <= 65470 || (c < 65536
                ? (c < 65490
                  ? (c < 65482
                    ? (c >= 65474 && c <= 65479)
                    : c <= 65487)
                  : (c <= 65495 || (c >= 65498 && c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c >= 65599 && c <= 65613)))))))
            : (c <= 65629 || (c < 66504
              ? (c < 66304
                ? (c < 66176
                  ? (c < 65856
                    ? (c >= 65664 && c <= 65786)
                    : c <= 65908)
                  : (c <= 66204 || (c >= 66208 && c <= 66256)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66421)
                  : (c <= 66461 || (c >= 66464 && c <= 66499)))))
              : (c <= 66511 || (c < 66816
                ? (c < 66736
                  ? (c < 66560
                    ? (c >= 66513 && c <= 66517)
                    : c <= 66717)
                  : (c <= 66771 || (c >= 66776 && c <= 66811)))
                : (c <= 66855 || (c < 66940
                  ? (c < 66928
                    ? (c >= 66864 && c <= 66915)
                    : c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))))))))))
        : (c <= 66965 || (c < 69248
          ? (c < 67840
            ? (c < 67584
              ? (c < 67392
                ? (c < 66995
                  ? (c < 66979
                    ? (c >= 66967 && c <= 66977)
                    : c <= 66993)
                  : (c <= 67001 || (c < 67072
                    ? (c >= 67003 && c <= 67004)
                    : c <= 67382)))
                : (c <= 67413 || (c < 67463
                  ? (c < 67456
                    ? (c >= 67424 && c <= 67431)
                    : c <= 67461)
                  : (c <= 67504 || (c >= 67506 && c <= 67514)))))
              : (c <= 67589 || (c < 67647
                ? (c < 67639
                  ? (c < 67594
                    ? c == 67592
                    : c <= 67637)
                  : (c <= 67640 || c == 67644))
                : (c <= 67669 || (c < 67808
                  ? (c < 67712
                    ? (c >= 67680 && c <= 67702)
                    : c <= 67742)
                  : (c <= 67826 || (c >= 67828 && c <= 67829)))))))
            : (c <= 67861 || (c < 68288
              ? (c < 68112
                ? (c < 68030
                  ? (c < 67968
                    ? (c >= 67872 && c <= 67897)
                    : c <= 68023)
                  : (c <= 68031 || c == 68096))
                : (c <= 68115 || (c < 68192
                  ? (c < 68121
                    ? (c >= 68117 && c <= 68119)
                    : c <= 68149)
                  : (c <= 68220 || (c >= 68224 && c <= 68252)))))
              : (c <= 68295 || (c < 68480
                ? (c < 68416
                  ? (c < 68352
                    ? (c >= 68297 && c <= 68324)
                    : c <= 68405)
                  : (c <= 68437 || (c >= 68448 && c <= 68466)))
                : (c <= 68497 || (c < 68800
                  ? (c < 68736
                    ? (c >= 68608 && c <= 68680)
                    : c <= 68786)
                  : (c <= 68850 || (c >= 68864 && c <= 68899)))))))))
          : (c <= 69289 || (c < 70108
            ? (c < 69763
              ? (c < 69552
                ? (c < 69415
                  ? (c < 69376
                    ? (c >= 69296 && c <= 69297)
                    : c <= 69404)
                  : (c <= 69415 || (c < 69488
                    ? (c >= 69424 && c <= 69445)
                    : c <= 69505)))
                : (c <= 69572 || (c < 69745
                  ? (c < 69635
                    ? (c >= 69600 && c <= 69622)
                    : c <= 69687)
                  : (c <= 69746 || c == 69749))))
              : (c <= 69807 || (c < 69968
                ? (c < 69956
                  ? (c < 69891
                    ? (c >= 69840 && c <= 69864)
                    : c <= 69926)
                  : (c <= 69956 || c == 69959))
                : (c <= 70002 || (c < 70081
                  ? (c < 70019
                    ? c == 70006
                    : c <= 70066)
                  : (c <= 70084 || c == 70106))))))
            : (c <= 70108 || (c < 70415
              ? (c < 70282
                ? (c < 70272
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70187)
                  : (c <= 70278 || c == 70280))
                : (c <= 70285 || (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70366 || (c >= 70405 && c <= 70412)))))
              : (c <= 70416 || (c < 70461
                ? (c < 70450
                  ? (c < 70442
                    ? (c >= 70419 && c <= 70440)
                    : c <= 70448)
                  : (c <= 70451 || (c >= 70453 && c <= 70457)))
                : (c <= 70461 || (c < 70656
                  ? (c < 70493
                    ? c == 70480
                    : c <= 70497)
                  : (c <= 70708 || (c >= 70727 && c <= 70730)))))))))))))
      : (c <= 70753 || (c < 119966
        ? (c < 73063
          ? (c < 72096
            ? (c < 71488
              ? (c < 71168
                ? (c < 70855
                  ? (c < 70852
                    ? (c >= 70784 && c <= 70831)
                    : c <= 70853)
                  : (c <= 70855 || (c < 71128
                    ? (c >= 71040 && c <= 71086)
                    : c <= 71131)))
                : (c <= 71215 || (c < 71352
                  ? (c < 71296
                    ? c == 71236
                    : c <= 71338)
                  : (c <= 71352 || (c >= 71424 && c <= 71450)))))
              : (c <= 71494 || (c < 71948
                ? (c < 71935
                  ? (c < 71840
                    ? (c >= 71680 && c <= 71723)
                    : c <= 71903)
                  : (c <= 71942 || c == 71945))
                : (c <= 71955 || (c < 71999
                  ? (c < 71960
                    ? (c >= 71957 && c <= 71958)
                    : c <= 71983)
                  : (c <= 71999 || c == 72001))))))
            : (c <= 72103 || (c < 72368
              ? (c < 72203
                ? (c < 72163
                  ? (c < 72161
                    ? (c >= 72106 && c <= 72144)
                    : c <= 72161)
                  : (c <= 72163 || c == 72192))
                : (c <= 72242 || (c < 72284
                  ? (c < 72272
                    ? c == 72250
                    : c <= 72272)
                  : (c <= 72329 || c == 72349))))
              : (c <= 72440 || (c < 72960
                ? (c < 72768
                  ? (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72750)
                  : (c <= 72768 || (c >= 72818 && c <= 72847)))
                : (c <= 72966 || (c < 73030
                  ? (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73008)
                  : (c <= 73030 || (c >= 73056 && c <= 73061)))))))))
          : (c <= 73064 || (c < 94032
            ? (c < 92160
              ? (c < 74752
                ? (c < 73440
                  ? (c < 73112
                    ? (c >= 73066 && c <= 73097)
                    : c <= 73112)
                  : (c <= 73458 || (c < 73728
                    ? c == 73648
                    : c <= 74649)))
                : (c <= 74862 || (c < 77824
                  ? (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)
                  : (c <= 78894 || (c >= 82944 && c <= 83526)))))
              : (c <= 92728 || (c < 92992
                ? (c < 92880
                  ? (c < 92784
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92862)
                  : (c <= 92909 || (c >= 92928 && c <= 92975)))
                : (c <= 92995 || (c < 93760
                  ? (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)
                  : (c <= 93823 || (c >= 93952 && c <= 94026)))))))
            : (c <= 94032 || (c < 110592
              ? (c < 100352
                ? (c < 94179
                  ? (c < 94176
                    ? (c >= 94099 && c <= 94111)
                    : c <= 94177)
                  : (c <= 94179 || (c >= 94208 && c <= 100343)))
                : (c <= 101589 || (c < 110581
                  ? (c < 110576
                    ? (c >= 101632 && c <= 101640)
                    : c <= 110579)
                  : (c <= 110587 || (c >= 110589 && c <= 110590)))))
              : (c <= 110882 || (c < 113776
                ? (c < 110960
                  ? (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)
                  : (c <= 111355 || (c >= 113664 && c <= 113770)))
                : (c <= 113788 || (c < 119808
                  ? (c < 113808
                    ? (c >= 113792 && c <= 113800)
                    : c <= 113817)
                  : (c <= 119892 || (c >= 119894 && c <= 119964)))))))))))
        : (c <= 119967 || (c < 126464
          ? (c < 120598
            ? (c < 120094
              ? (c < 119997
                ? (c < 119977
                  ? (c < 119973
                    ? c == 119970
                    : c <= 119974)
                  : (c <= 119980 || (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)))
                : (c <= 120003 || (c < 120077
                  ? (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)
                  : (c <= 120084 || (c >= 120086 && c <= 120092)))))
              : (c <= 120121 || (c < 120146
                ? (c < 120134
                  ? (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)
                  : (c <= 120134 || (c >= 120138 && c <= 120144)))
                : (c <= 120485 || (c < 120540
                  ? (c < 120514
                    ? (c >= 120488 && c <= 120512)
                    : c <= 120538)
                  : (c <= 120570 || (c >= 120572 && c <= 120596)))))))
            : (c <= 120628 || (c < 123214
              ? (c < 120746
                ? (c < 120688
                  ? (c < 120656
                    ? (c >= 120630 && c <= 120654)
                    : c <= 120686)
                  : (c <= 120712 || (c >= 120714 && c <= 120744)))
                : (c <= 120770 || (c < 123136
                  ? (c < 122624
                    ? (c >= 120772 && c <= 120779)
                    : c <= 122654)
                  : (c <= 123180 || (c >= 123191 && c <= 123197)))))
              : (c <= 123214 || (c < 124909
                ? (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123565)
                    : c <= 123627)
                  : (c <= 124902 || (c >= 124904 && c <= 124907)))
                : (c <= 124910 || (c < 125184
                  ? (c < 124928
                    ? (c >= 124912 && c <= 124926)
                    : c <= 125124)
                  : (c <= 125251 || c == 125259))))))))
          : (c <= 126467 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126500
                  ? (c < 126497
                    ? (c >= 126469 && c <= 126495)
                    : c <= 126498)
                  : (c <= 126500 || c == 126503))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 931
            ? (c < 748
              ? (c < 192
                ? (c < 170
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= 'z')
                  : (c <= 170 || (c < 186
                    ? c == 181
                    : c <= 186)))
                : (c <= 214 || (c < 710
                  ? (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))))
              : (c <= 748 || (c < 895
                ? (c < 886
                  ? (c < 880
                    ? c == 750
                    : c <= 884)
                  : (c <= 887 || (c >= 891 && c <= 893)))
                : (c <= 895 || (c < 908
                  ? (c < 904
                    ? c == 902
                    : c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))))))
            : (c <= 1013 || (c < 1649
              ? (c < 1376
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1327)
                  : (c <= 1366 || c == 1369))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3648
            ? (c < 3412
              ? (c < 3332
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))))
              : (c <= 3414 || (c < 3507
                ? (c < 3461
                  ? (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3585
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3632 || c == 3634))))))
            : (c <= 3654 || (c < 3782
              ? (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3773
                  ? (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3762)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))))))))))
      : (c <= 4193 || (c < 8134
        ? (c < 6176
          ? (c < 4808
            ? (c < 4688
              ? (c < 4295
                ? (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || (c < 4256
                    ? c == 4238
                    : c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))
              : (c <= 4694 || (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))
            : (c <= 4822 || (c < 5792
              ? (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))))))
          : (c <= 6264 || (c < 7312
            ? (c < 6823
              ? (c < 6512
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6656
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6823 || (c < 7098
                ? (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 8008
              ? (c < 7418
                ? (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))))))
        : (c <= 8140 || (c < 12337
          ? (c < 8544
            ? (c < 8458
              ? (c < 8305
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))
              : (c <= 8467 || (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))))
            : (c <= 8584 || (c < 11680
              ? (c < 11559
                ? (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))))
              : (c <= 11686 || (c < 11720
                ? (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 12293
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))))))
          : (c <= 12341 || (c < 42891
            ? (c < 19968
              ? (c < 12549
                ? (c < 12445
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))
                : (c <= 12591 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))))
              : (c <= 42124 || (c < 42560
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))
            : (c <= 42954 || (c < 43250
              ? (c < 43011
                ? (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))
                : (c <= 43013 || (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))))
              : (c <= 43255 || (c < 43360
                ? (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))))))))))))))
    : (c <= 43518 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43868
            ? (c < 43714
              ? (c < 43646
                ? (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)))
                : (c <= 43695 || (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43785
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))))
            : (c <= 43881 || (c < 64287
              ? (c < 63744
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_3(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 910
            ? (c < 736
              ? (c < 186
                ? (c < 'a'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'z' || (c < 181
                    ? c == 170
                    : c <= 181)))
                : (c <= 186 || (c < 248
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))))
              : (c <= 740 || (c < 891
                ? (c < 880
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 904
                  ? (c < 902
                    ? c == 895
                    : c <= 902)
                  : (c <= 906 || c == 908))))))
            : (c <= 929 || (c < 1649
              ? (c < 1376
                ? (c < 1162
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1327 || (c < 1369
                    ? (c >= 1329 && c <= 1366)
                    : c <= 1369)))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3648
            ? (c < 3412
              ? (c < 3332
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))))
              : (c <= 3414 || (c < 3507
                ? (c < 3461
                  ? (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3585
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3632 || c == 3634))))))
            : (c <= 3654 || (c < 3782
              ? (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3773
                  ? (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3762)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))))))))))
      : (c <= 4193 || (c < 8134
        ? (c < 6176
          ? (c < 4808
            ? (c < 4688
              ? (c < 4295
                ? (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || (c < 4256
                    ? c == 4238
                    : c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))
              : (c <= 4694 || (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))
            : (c <= 4822 || (c < 5792
              ? (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))))))
          : (c <= 6264 || (c < 7312
            ? (c < 6823
              ? (c < 6512
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6656
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6823 || (c < 7098
                ? (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 8008
              ? (c < 7418
                ? (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))))))
        : (c <= 8140 || (c < 12337
          ? (c < 8544
            ? (c < 8458
              ? (c < 8305
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))
              : (c <= 8467 || (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))))
            : (c <= 8584 || (c < 11680
              ? (c < 11559
                ? (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))))
              : (c <= 11686 || (c < 11720
                ? (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 12293
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))))))
          : (c <= 12341 || (c < 42891
            ? (c < 19968
              ? (c < 12549
                ? (c < 12445
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))
                : (c <= 12591 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))))
              : (c <= 42124 || (c < 42560
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))
            : (c <= 42954 || (c < 43250
              ? (c < 43011
                ? (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))
                : (c <= 43013 || (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))))
              : (c <= 43255 || (c < 43360
                ? (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))))))))))))))
    : (c <= 43518 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43868
            ? (c < 43714
              ? (c < 43646
                ? (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)))
                : (c <= 43695 || (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43785
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))))
            : (c <= 43881 || (c < 64287
              ? (c < 63744
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_4(int32_t c) {
  return (c < 43616
    ? (c < 3782
      ? (c < 2748
        ? (c < 2045
          ? (c < 1015
            ? (c < 710
              ? (c < 181
                ? (c < '_'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'a' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 192
                  ? (c < 186
                    ? c == 183
                    : c <= 186)
                  : (c <= 214 || (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)))))
              : (c <= 721 || (c < 891
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c < 886
                    ? (c >= 768 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 908
                  ? (c < 902
                    ? c == 895
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))))))
            : (c <= 1153 || (c < 1519
              ? (c < 1425
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1770
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)
                  : (c <= 1747 || (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)))
                : (c <= 1788 || (c < 1869
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1866)
                  : (c <= 1969 || (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)))))))))
          : (c <= 2045 || (c < 2558
            ? (c < 2451
              ? (c < 2200
                ? (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)))
                : (c <= 2273 || (c < 2417
                  ? (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)
                  : (c <= 2435 || (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)))))
              : (c <= 2472 || (c < 2507
                ? (c < 2486
                  ? (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)
                  : (c <= 2489 || (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)))
                : (c <= 2510 || (c < 2527
                  ? (c < 2524
                    ? c == 2519
                    : c <= 2525)
                  : (c <= 2531 || (c < 2556
                    ? (c >= 2534 && c <= 2545)
                    : c <= 2556)))))))
            : (c <= 2558 || (c < 2635
              ? (c < 2610
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)))
                : (c <= 2611 || (c < 2620
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2620 || (c < 2631
                    ? (c >= 2622 && c <= 2626)
                    : c <= 2632)))))
              : (c <= 2637 || (c < 2693
                ? (c < 2654
                  ? (c < 2649
                    ? c == 2641
                    : c <= 2652)
                  : (c <= 2654 || (c < 2689
                    ? (c >= 2662 && c <= 2677)
                    : c <= 2691)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))))))))))
        : (c <= 2757 || (c < 3168
          ? (c < 2958
            ? (c < 2866
              ? (c < 2809
                ? (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))
                : (c <= 2815 || (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))))
              : (c <= 2867 || (c < 2908
                ? (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)))
                : (c <= 2909 || (c < 2929
                  ? (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)
                  : (c <= 2929 || (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)))))))
            : (c <= 2960 || (c < 3031
              ? (c < 2984
                ? (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)))
                : (c <= 2986 || (c < 3014
                  ? (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)
                  : (c <= 3016 || (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)))))
              : (c <= 3031 || (c < 3132
                ? (c < 3086
                  ? (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)
                  : (c <= 3088 || (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)))
                : (c <= 3140 || (c < 3157
                  ? (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)
                  : (c <= 3158 || (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)))))))))
          : (c <= 3171 || (c < 3450
            ? (c < 3293
              ? (c < 3242
                ? (c < 3205
                  ? (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)
                  : (c <= 3212 || (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)))
                : (c <= 3251 || (c < 3270
                  ? (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)
                  : (c <= 3272 || (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)))))
              : (c <= 3294 || (c < 3346
                ? (c < 3313
                  ? (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)
                  : (c <= 3314 || (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)))
                : (c <= 3396 || (c < 3412
                  ? (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)
                  : (c <= 3415 || (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)))))))
            : (c <= 3455 || (c < 3570
              ? (c < 3520
                ? (c < 3482
                  ? (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)
                  : (c <= 3505 || (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)))
                : (c <= 3526 || (c < 3542
                  ? (c < 3535
                    ? c == 3530
                    : c <= 3540)
                  : (c <= 3542 || (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)))))
              : (c <= 3571 || (c < 3718
                ? (c < 3664
                  ? (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)
                  : (c <= 3673 || (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)))
                : (c <= 3722 || (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))))))))))
      : (c <= 3782 || (c < 8025
        ? (c < 5888
          ? (c < 4688
            ? (c < 3953
              ? (c < 3872
                ? (c < 3804
                  ? (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)
                  : (c <= 3807 || (c < 3864
                    ? c == 3840
                    : c <= 3865)))
                : (c <= 3881 || (c < 3897
                  ? (c < 3895
                    ? c == 3893
                    : c <= 3895)
                  : (c <= 3897 || (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)))))
              : (c <= 3972 || (c < 4256
                ? (c < 4038
                  ? (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)
                  : (c <= 4038 || (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)))))))
            : (c <= 4694 || (c < 4882
              ? (c < 4786
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))))
              : (c <= 4885 || (c < 5112
                ? (c < 4969
                  ? (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)
                  : (c <= 4977 || (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)))
                : (c <= 5117 || (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)))))))))
          : (c <= 5909 || (c < 6688
            ? (c < 6176
              ? (c < 6016
                ? (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)
                  : (c <= 5996 || (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)))
                : (c <= 6099 || (c < 6112
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6109)
                  : (c <= 6121 || (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)))))
              : (c <= 6264 || (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))))
            : (c <= 6750 || (c < 7232
              ? (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6862 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)
                  : (c <= 7027 || (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)))))
              : (c <= 7241 || (c < 7380
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)))
                : (c <= 7418 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7424 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)))))))))))
        : (c <= 8025 || (c < 11720
          ? (c < 8458
            ? (c < 8178
              ? (c < 8126
                ? (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)))
                : (c <= 8126 || (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)))))
              : (c <= 8180 || (c < 8336
                ? (c < 8276
                  ? (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)
                  : (c <= 8276 || (c < 8319
                    ? c == 8305
                    : c <= 8319)))
                : (c <= 8348 || (c < 8421
                  ? (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)
                  : (c <= 8432 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))))))
            : (c <= 8467 || (c < 11499
              ? (c < 8490
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || (c < 8488
                    ? c == 8486
                    : c <= 8488)))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)))))
              : (c <= 11507 || (c < 11647
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))
                : (c <= 11670 || (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))))))))
          : (c <= 11726 || (c < 42623
            ? (c < 12540
              ? (c < 12337
                ? (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)))
                : (c <= 12341 || (c < 12441
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12442 || (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)))))
              : (c <= 12543 || (c < 19968
                ? (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)))
                : (c <= 42124 || (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42539 || (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)))))))
            : (c <= 42737 || (c < 43232
              ? (c < 42965
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)))
                : (c <= 42969 || (c < 43072
                  ? (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)
                  : (c <= 43123 || (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)))))
              : (c <= 43255 || (c < 43471
                ? (c < 43312
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43309)
                  : (c <= 43347 || (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)))
                : (c <= 43481 || (c < 43584
                  ? (c < 43520
                    ? (c >= 43488 && c <= 43518)
                    : c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))))))))))
    : (c <= 43638 || (c < 71453
      ? (c < 67639
        ? (c < 65345
          ? (c < 64312
            ? (c < 43888
              ? (c < 43785
                ? (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)))))
              : (c <= 44010 || (c < 63744
                ? (c < 44032
                  ? (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)))))))
            : (c <= 64316 || (c < 65075
              ? (c < 64612
                ? (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)))
                : (c <= 64829 || (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)))))
              : (c <= 65076 || (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65101 && c <= 65103)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65296
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65305 || (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)))))))))
          : (c <= 65370 || (c < 66513
            ? (c < 65664
              ? (c < 65536
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)))))
              : (c <= 65786 || (c < 66304
                ? (c < 66176
                  ? (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)
                  : (c <= 66204 || (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)
                  : (c <= 66461 || (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)))))))
            : (c <= 66517 || (c < 66979
              ? (c < 66864
                ? (c < 66736
                  ? (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)
                  : (c <= 66771 || (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)))
                : (c <= 66915 || (c < 66956
                  ? (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)
                  : (c <= 66962 || (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)))))
              : (c <= 66993 || (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || (c < 67594
                    ? c == 67592
                    : c <= 67637)))))))))))
        : (c <= 67640 || (c < 69956
          ? (c < 68448
            ? (c < 68101
              ? (c < 67828
                ? (c < 67680
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)))
                : (c <= 67829 || (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)))))
              : (c <= 68102 || (c < 68192
                ? (c < 68121
                  ? (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c < 68159
                    ? (c >= 68152 && c <= 68154)
                    : c <= 68159)))
                : (c <= 68220 || (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))))))
            : (c <= 68466 || (c < 69424
              ? (c < 68912
                ? (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))
                : (c <= 68921 || (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))))
              : (c <= 69456 || (c < 69759
                ? (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69509)
                    : c <= 69572)
                  : (c <= 69622 || (c < 69734
                    ? (c >= 69632 && c <= 69702)
                    : c <= 69749)))
                : (c <= 69818 || (c < 69872
                  ? (c < 69840
                    ? c == 69826
                    : c <= 69864)
                  : (c <= 69881 || (c < 69942
                    ? (c >= 69888 && c <= 69940)
                    : c <= 69951)))))))))
          : (c <= 69959 || (c < 70459
            ? (c < 70282
              ? (c < 70108
                ? (c < 70016
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70003)
                    : c <= 70006)
                  : (c <= 70084 || (c < 70094
                    ? (c >= 70089 && c <= 70092)
                    : c <= 70106)))
                : (c <= 70108 || (c < 70206
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70199)
                  : (c <= 70206 || (c < 70280
                    ? (c >= 70272 && c <= 70278)
                    : c <= 70280)))))
              : (c <= 70285 || (c < 70405
                ? (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70378 || (c < 70400
                    ? (c >= 70384 && c <= 70393)
                    : c <= 70403)))
                : (c <= 70412 || (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))))))
            : (c <= 70468 || (c < 70855
              ? (c < 70502
                ? (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || (c < 70493
                    ? c == 70487
                    : c <= 70499)))
                : (c <= 70508 || (c < 70736
                  ? (c < 70656
                    ? (c >= 70512 && c <= 70516)
                    : c <= 70730)
                  : (c <= 70745 || (c < 70784
                    ? (c >= 70750 && c <= 70753)
                    : c <= 70853)))))
              : (c <= 70855 || (c < 71236
                ? (c < 71096
                  ? (c < 71040
                    ? (c >= 70864 && c <= 70873)
                    : c <= 71093)
                  : (c <= 71104 || (c < 71168
                    ? (c >= 71128 && c <= 71133)
                    : c <= 71232)))
                : (c <= 71236 || (c < 71360
                  ? (c < 71296
                    ? (c >= 71248 && c <= 71257)
                    : c <= 71352)
                  : (c <= 71369 || (c >= 71424 && c <= 71450)))))))))))))
      : (c <= 71467 || (c < 119973
        ? (c < 77824
          ? (c < 72760
            ? (c < 72016
              ? (c < 71945
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71472 && c <= 71481)
                    : c <= 71494)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))))
              : (c <= 72025 || (c < 72263
                ? (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c < 72192
                    ? (c >= 72163 && c <= 72164)
                    : c <= 72254)))
                : (c <= 72263 || (c < 72368
                  ? (c < 72349
                    ? (c >= 72272 && c <= 72345)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72758)))))))
            : (c <= 72768 || (c < 73056
              ? (c < 72968
                ? (c < 72850
                  ? (c < 72818
                    ? (c >= 72784 && c <= 72793)
                    : c <= 72847)
                  : (c <= 72871 || (c < 72960
                    ? (c >= 72873 && c <= 72886)
                    : c <= 72966)))
                : (c <= 72969 || (c < 73020
                  ? (c < 73018
                    ? (c >= 72971 && c <= 73014)
                    : c <= 73018)
                  : (c <= 73021 || (c < 73040
                    ? (c >= 73023 && c <= 73031)
                    : c <= 73049)))))
              : (c <= 73061 || (c < 73440
                ? (c < 73104
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73102)
                  : (c <= 73105 || (c < 73120
                    ? (c >= 73107 && c <= 73112)
                    : c <= 73129)))
                : (c <= 73462 || (c < 74752
                  ? (c < 73728
                    ? c == 73648
                    : c <= 74649)
                  : (c <= 74862 || (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)))))))))
          : (c <= 78894 || (c < 110576
            ? (c < 93027
              ? (c < 92864
                ? (c < 92736
                  ? (c < 92160
                    ? (c >= 82944 && c <= 83526)
                    : c <= 92728)
                  : (c <= 92766 || (c < 92784
                    ? (c >= 92768 && c <= 92777)
                    : c <= 92862)))
                : (c <= 92873 || (c < 92928
                  ? (c < 92912
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92916)
                  : (c <= 92982 || (c < 93008
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93017)))))
              : (c <= 93047 || (c < 94176
                ? (c < 93952
                  ? (c < 93760
                    ? (c >= 93053 && c <= 93071)
                    : c <= 93823)
                  : (c <= 94026 || (c < 94095
                    ? (c >= 94031 && c <= 94087)
                    : c <= 94111)))
                : (c <= 94177 || (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))))))
            : (c <= 110579 || (c < 118528
              ? (c < 110960
                ? (c < 110592
                  ? (c < 110589
                    ? (c >= 110581 && c <= 110587)
                    : c <= 110590)
                  : (c <= 110882 || (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)))
                : (c <= 111355 || (c < 113792
                  ? (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)
                  : (c <= 113800 || (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)))))
              : (c <= 118573 || (c < 119210
                ? (c < 119149
                  ? (c < 119141
                    ? (c >= 118576 && c <= 118598)
                    : c <= 119145)
                  : (c <= 119154 || (c < 119173
                    ? (c >= 119163 && c <= 119170)
                    : c <= 119179)))
                : (c <= 119213 || (c < 119894
                  ? (c < 119808
                    ? (c >= 119362 && c <= 119364)
                    : c <= 119892)
                  : (c <= 119964 || (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)))))))))))
        : (c <= 119974 || (c < 124912
          ? (c < 120746
            ? (c < 120134
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)))))
              : (c <= 120134 || (c < 120572
                ? (c < 120488
                  ? (c < 120146
                    ? (c >= 120138 && c <= 120144)
                    : c <= 120485)
                  : (c <= 120512 || (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)))
                : (c <= 120596 || (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)))))))
            : (c <= 120770 || (c < 122907
              ? (c < 121476
                ? (c < 121344
                  ? (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)
                  : (c <= 121398 || (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)))
                : (c <= 121476 || (c < 122624
                  ? (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)
                  : (c <= 122654 || (c < 122888
                    ? (c >= 122880 && c <= 122886)
                    : c <= 122904)))))
              : (c <= 122913 || (c < 123214
                ? (c < 123136
                  ? (c < 122918
                    ? (c >= 122915 && c <= 122916)
                    : c <= 122922)
                  : (c <= 123180 || (c < 123200
                    ? (c >= 123184 && c <= 123197)
                    : c <= 123209)))
                : (c <= 123214 || (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123566)
                    : c <= 123641)
                  : (c <= 124902 || (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_format_sequence_character_set_1(int32_t c) {
  return (c < 'b'
    ? (c < 'O'
      ? (c < 'E'
        ? c == '%'
        : c <= 'G')
      : (c <= 'O' || (c < 'X'
        ? (c >= 'T' && c <= 'U')
        : c <= 'X')))
    : (c <= 'g' || (c < 'v'
      ? (c < 's'
        ? (c >= 'o' && c <= 'q')
        : c <= 't')
      : (c <= 'v' || c == 'x'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(33);
      if (!eof && (lookahead == 0)) ADVANCE(36);
      if (lookahead == '!') ADVANCE(63);
      if (lookahead == '"') ADVANCE(89);
      if (lookahead == '#') ADVANCE(123);
      if (lookahead == '%') ADVANCE(74);
      if (lookahead == '&') ADVANCE(69);
      if (lookahead == '\'') ADVANCE(93);
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == '*') ADVANCE(67);
      if (lookahead == '+') ADVANCE(57);
      if (lookahead == ',') ADVANCE(38);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == '0') ADVANCE(117);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == ';') ADVANCE(35);
      if (lookahead == '<') ADVANCE(80);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == '>') ADVANCE(82);
      if (lookahead == '?') ADVANCE(86);
      if (lookahead == '[') ADVANCE(54);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead == ']') ADVANCE(55);
      if (lookahead == '^') ADVANCE(64);
      if (lookahead == '`') ADVANCE(25);
      if (lookahead == '{') ADVANCE(42);
      if (lookahead == '|') ADVANCE(77);
      if (lookahead == '}') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(31)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(119);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(87);
      END_STATE();
    case 1:
      if (!eof && (lookahead == 0)) ADVANCE(36);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '!') ADVANCE(62);
      if (lookahead == '"') ADVANCE(88);
      if (lookahead == '#') ADVANCE(123);
      if (lookahead == '&') ADVANCE(69);
      if (lookahead == '\'') ADVANCE(92);
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == '*') ADVANCE(65);
      if (lookahead == '+') ADVANCE(56);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '0') ADVANCE(117);
      if (lookahead == ';') ADVANCE(35);
      if (lookahead == '<') ADVANCE(16);
      if (lookahead == '[') ADVANCE(54);
      if (lookahead == '^') ADVANCE(64);
      if (lookahead == '`') ADVANCE(25);
      if (lookahead == '{') ADVANCE(42);
      if (lookahead == '}') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(119);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 2:
      if (!eof && (lookahead == 0)) ADVANCE(36);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '#') ADVANCE(123);
      if (lookahead == '%') ADVANCE(74);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == '*') ADVANCE(67);
      if (lookahead == '+') ADVANCE(57);
      if (lookahead == ',') ADVANCE(38);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == ';') ADVANCE(35);
      if (lookahead == '<') ADVANCE(80);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == '>') ADVANCE(82);
      if (lookahead == '?') ADVANCE(86);
      if (lookahead == '[') ADVANCE(54);
      if (lookahead == '{') ADVANCE(42);
      if (lookahead == '|') ADVANCE(77);
      if (lookahead == '}') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(2)
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(87);
      END_STATE();
    case 3:
      if (!eof && (lookahead == 0)) ADVANCE(36);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '#') ADVANCE(123);
      if (lookahead == '%') ADVANCE(74);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == '*') ADVANCE(66);
      if (lookahead == '+') ADVANCE(56);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '/') ADVANCE(71);
      if (lookahead == ';') ADVANCE(35);
      if (lookahead == '<') ADVANCE(80);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '>') ADVANCE(82);
      if (lookahead == '?') ADVANCE(86);
      if (lookahead == '[') ADVANCE(54);
      if (lookahead == '{') ADVANCE(42);
      if (lookahead == '|') ADVANCE(77);
      if (lookahead == '}') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(3)
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(87);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '#') ADVANCE(94);
      if (lookahead == '%') ADVANCE(95);
      if (lookahead == '\'') ADVANCE(93);
      if (lookahead == '/') ADVANCE(94);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead == '{') ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(94);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '"') ADVANCE(89);
      if (lookahead == '#') ADVANCE(90);
      if (lookahead == '%') ADVANCE(91);
      if (lookahead == '/') ADVANCE(90);
      if (lookahead == '\\') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(90);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '#') ADVANCE(123);
      if (lookahead == '%') ADVANCE(74);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == '*') ADVANCE(67);
      if (lookahead == '+') ADVANCE(58);
      if (lookahead == ',') ADVANCE(38);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == ';') ADVANCE(35);
      if (lookahead == '<') ADVANCE(80);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == '>') ADVANCE(82);
      if (lookahead == '?') ADVANCE(86);
      if (lookahead == '[') ADVANCE(54);
      if (lookahead == ']') ADVANCE(55);
      if (lookahead == '{') ADVANCE(42);
      if (lookahead == '|') ADVANCE(77);
      if (lookahead == '}') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '#') ADVANCE(123);
      if (lookahead == '%') ADVANCE(74);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == '*') ADVANCE(67);
      if (lookahead == '+') ADVANCE(57);
      if (lookahead == ',') ADVANCE(38);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == ';') ADVANCE(35);
      if (lookahead == '<') ADVANCE(80);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == '>') ADVANCE(82);
      if (lookahead == '?') ADVANCE(86);
      if (lookahead == '[') ADVANCE(54);
      if (lookahead == '{') ADVANCE(42);
      if (lookahead == '|') ADVANCE(77);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(123);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '/') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(8)
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(87);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(123);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '{') ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(123);
      if (lookahead == '/') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == '&') ADVANCE(84);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(123);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(123);
      if (lookahead == '=') ADVANCE(50);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(122);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(70);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == '[') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (sym_format_sequence_character_set_1(lookahead)) ADVANCE(115);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '[') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (sym_format_sequence_character_set_1(lookahead)) ADVANCE(115);
      END_STATE();
    case 19:
      if (lookahead == '=') ADVANCE(79);
      END_STATE();
    case 20:
      if (lookahead == '=') ADVANCE(44);
      END_STATE();
    case 21:
      if (lookahead == '=') ADVANCE(78);
      END_STATE();
    case 22:
      if (lookahead == 'U') ADVANCE(107);
      if (lookahead == 'u') ADVANCE(103);
      if (lookahead == 'x') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(99);
      if (lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'e' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          ('t' <= lookahead && lookahead <= 'v')) ADVANCE(96);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 23:
      if (lookahead == '[') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (sym_format_sequence_character_set_1(lookahead)) ADVANCE(115);
      END_STATE();
    case 24:
      if (lookahead == ']') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '`') ADVANCE(116);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 29:
      if (sym_format_sequence_character_set_1(lookahead)) ADVANCE(115);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(120);
      END_STATE();
    case 31:
      if (eof) ADVANCE(33);
      if (!eof && (lookahead == 0)) ADVANCE(36);
      if (lookahead == '!') ADVANCE(63);
      if (lookahead == '"') ADVANCE(88);
      if (lookahead == '#') ADVANCE(123);
      if (lookahead == '%') ADVANCE(74);
      if (lookahead == '&') ADVANCE(69);
      if (lookahead == '\'') ADVANCE(92);
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == '*') ADVANCE(67);
      if (lookahead == '+') ADVANCE(57);
      if (lookahead == ',') ADVANCE(38);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == '0') ADVANCE(117);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == ';') ADVANCE(35);
      if (lookahead == '<') ADVANCE(80);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == '>') ADVANCE(82);
      if (lookahead == '?') ADVANCE(86);
      if (lookahead == '[') ADVANCE(54);
      if (lookahead == ']') ADVANCE(55);
      if (lookahead == '^') ADVANCE(64);
      if (lookahead == '`') ADVANCE(25);
      if (lookahead == '{') ADVANCE(42);
      if (lookahead == '|') ADVANCE(77);
      if (lookahead == '}') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(31)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(119);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 32:
      if (eof) ADVANCE(33);
      if (lookahead == '!') ADVANCE(62);
      if (lookahead == '"') ADVANCE(88);
      if (lookahead == '#') ADVANCE(123);
      if (lookahead == '&') ADVANCE(69);
      if (lookahead == '\'') ADVANCE(92);
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == '*') ADVANCE(68);
      if (lookahead == '+') ADVANCE(58);
      if (lookahead == ',') ADVANCE(38);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '0') ADVANCE(117);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == ';') ADVANCE(35);
      if (lookahead == '<') ADVANCE(16);
      if (lookahead == '=') ADVANCE(40);
      if (lookahead == '[') ADVANCE(54);
      if (lookahead == ']') ADVANCE(55);
      if (lookahead == '^') ADVANCE(64);
      if (lookahead == '`') ADVANCE(25);
      if (lookahead == '{') ADVANCE(42);
      if (lookahead == '}') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(32)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(119);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_NULL);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(78);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(44);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(45);
      if (lookahead == '=') ADVANCE(49);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(49);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == '=') ADVANCE(48);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(48);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(79);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(73);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(73);
      if (lookahead == '=') ADVANCE(47);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(47);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '=') ADVANCE(50);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(85);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(75);
      if (lookahead == '=') ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(83);
      if (lookahead == '>') ADVANCE(76);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__string_non_escaped_content);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__string_non_escaped_content);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '[') ADVANCE(28);
      if (lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '+' ||
          lookahead == '-') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (sym_format_sequence_character_set_1(lookahead)) ADVANCE(115);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_string_template_char);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_string_template_char);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '[') ADVANCE(28);
      if (lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '+' ||
          lookahead == '-') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (sym_format_sequence_character_set_1(lookahead)) ADVANCE(115);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token1);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(108);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(108);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(109);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(110);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(111);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(112);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(113);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(114);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(108);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(109);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(110);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(111);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(112);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_escape_sequence_invalid);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(113);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_format_sequence);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_string_backtick);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(30);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(118);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_int_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_float_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(123);
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
      if (lookahead == 'a') ADVANCE(1);
      if (lookahead == 'b') ADVANCE(2);
      if (lookahead == 'c') ADVANCE(3);
      if (lookahead == 'd') ADVANCE(4);
      if (lookahead == 'e') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(6);
      if (lookahead == 'g') ADVANCE(7);
      if (lookahead == 'i') ADVANCE(8);
      if (lookahead == 'n') ADVANCE(9);
      if (lookahead == 'r') ADVANCE(10);
      if (lookahead == 's') ADVANCE(11);
      if (lookahead == 't') ADVANCE(12);
      if (lookahead == 'v') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 2:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(16);
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 5:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(21);
      if (lookahead == 'r') ADVANCE(22);
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 7:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 8:
      if (lookahead == 'f') ADVANCE(25);
      if (lookahead == 'm') ADVANCE(26);
      END_STATE();
    case 9:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 11:
      if (lookahead == 'w') ADVANCE(30);
      END_STATE();
    case 12:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 16:
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 18:
      if (lookahead == 'f') ADVANCE(36);
      END_STATE();
    case 19:
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 21:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 22:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_go);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 26:
      if (lookahead == 'p') ADVANCE(42);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 31:
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 35:
      if (lookahead == 's') ADVANCE(51);
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(53);
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 38:
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 40:
      if (lookahead == 'm') ADVANCE(57);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(58);
      END_STATE();
    case 42:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_nil);
      END_STATE();
    case 44:
      if (lookahead == 'g') ADVANCE(60);
      END_STATE();
    case 45:
      if (lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 49:
      if (lookahead == 'k') ADVANCE(64);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 53:
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_func);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(73);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_defer);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_range);
      END_STATE();
    case 72:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 73:
      if (lookahead == 'h') ADVANCE(78);
      END_STATE();
    case 74:
      if (lookahead == 'u') ADVANCE(79);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_continue);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 32},
  [2] = {.lex_state = 32},
  [3] = {.lex_state = 32},
  [4] = {.lex_state = 32},
  [5] = {.lex_state = 32},
  [6] = {.lex_state = 32},
  [7] = {.lex_state = 32},
  [8] = {.lex_state = 32},
  [9] = {.lex_state = 32},
  [10] = {.lex_state = 32},
  [11] = {.lex_state = 32},
  [12] = {.lex_state = 32},
  [13] = {.lex_state = 32},
  [14] = {.lex_state = 32},
  [15] = {.lex_state = 32},
  [16] = {.lex_state = 32},
  [17] = {.lex_state = 32},
  [18] = {.lex_state = 32},
  [19] = {.lex_state = 32},
  [20] = {.lex_state = 32},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 32},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 32},
  [30] = {.lex_state = 32},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 32},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 32},
  [58] = {.lex_state = 32},
  [59] = {.lex_state = 32},
  [60] = {.lex_state = 32},
  [61] = {.lex_state = 32},
  [62] = {.lex_state = 32},
  [63] = {.lex_state = 32},
  [64] = {.lex_state = 32},
  [65] = {.lex_state = 32},
  [66] = {.lex_state = 32},
  [67] = {.lex_state = 32},
  [68] = {.lex_state = 32},
  [69] = {.lex_state = 32},
  [70] = {.lex_state = 32},
  [71] = {.lex_state = 32},
  [72] = {.lex_state = 32},
  [73] = {.lex_state = 32},
  [74] = {.lex_state = 32},
  [75] = {.lex_state = 32},
  [76] = {.lex_state = 7},
  [77] = {.lex_state = 32},
  [78] = {.lex_state = 32},
  [79] = {.lex_state = 32},
  [80] = {.lex_state = 32},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 32},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 32},
  [89] = {.lex_state = 32},
  [90] = {.lex_state = 32},
  [91] = {.lex_state = 32},
  [92] = {.lex_state = 32},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 32},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 32},
  [97] = {.lex_state = 32},
  [98] = {.lex_state = 32},
  [99] = {.lex_state = 32},
  [100] = {.lex_state = 32},
  [101] = {.lex_state = 32},
  [102] = {.lex_state = 32},
  [103] = {.lex_state = 32},
  [104] = {.lex_state = 32},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 32},
  [107] = {.lex_state = 32},
  [108] = {.lex_state = 32},
  [109] = {.lex_state = 32},
  [110] = {.lex_state = 32},
  [111] = {.lex_state = 6},
  [112] = {.lex_state = 32},
  [113] = {.lex_state = 6},
  [114] = {.lex_state = 6},
  [115] = {.lex_state = 32},
  [116] = {.lex_state = 6},
  [117] = {.lex_state = 32},
  [118] = {.lex_state = 32},
  [119] = {.lex_state = 32},
  [120] = {.lex_state = 32},
  [121] = {.lex_state = 32},
  [122] = {.lex_state = 6},
  [123] = {.lex_state = 6},
  [124] = {.lex_state = 6},
  [125] = {.lex_state = 6},
  [126] = {.lex_state = 6},
  [127] = {.lex_state = 6},
  [128] = {.lex_state = 6},
  [129] = {.lex_state = 6},
  [130] = {.lex_state = 6},
  [131] = {.lex_state = 32},
  [132] = {.lex_state = 32},
  [133] = {.lex_state = 32},
  [134] = {.lex_state = 32},
  [135] = {.lex_state = 32},
  [136] = {.lex_state = 32},
  [137] = {.lex_state = 32},
  [138] = {.lex_state = 32},
  [139] = {.lex_state = 32},
  [140] = {.lex_state = 32},
  [141] = {.lex_state = 32},
  [142] = {.lex_state = 32},
  [143] = {.lex_state = 6},
  [144] = {.lex_state = 32},
  [145] = {.lex_state = 32},
  [146] = {.lex_state = 32},
  [147] = {.lex_state = 32},
  [148] = {.lex_state = 32},
  [149] = {.lex_state = 6},
  [150] = {.lex_state = 32},
  [151] = {.lex_state = 6},
  [152] = {.lex_state = 32},
  [153] = {.lex_state = 32},
  [154] = {.lex_state = 32},
  [155] = {.lex_state = 6},
  [156] = {.lex_state = 32},
  [157] = {.lex_state = 32},
  [158] = {.lex_state = 32},
  [159] = {.lex_state = 32},
  [160] = {.lex_state = 32},
  [161] = {.lex_state = 32},
  [162] = {.lex_state = 32},
  [163] = {.lex_state = 32},
  [164] = {.lex_state = 32},
  [165] = {.lex_state = 32},
  [166] = {.lex_state = 32},
  [167] = {.lex_state = 32},
  [168] = {.lex_state = 6},
  [169] = {.lex_state = 32},
  [170] = {.lex_state = 6},
  [171] = {.lex_state = 32},
  [172] = {.lex_state = 32},
  [173] = {.lex_state = 7},
  [174] = {.lex_state = 7},
  [175] = {.lex_state = 7},
  [176] = {.lex_state = 7},
  [177] = {.lex_state = 7},
  [178] = {.lex_state = 32},
  [179] = {.lex_state = 6},
  [180] = {.lex_state = 32},
  [181] = {.lex_state = 32},
  [182] = {.lex_state = 32},
  [183] = {.lex_state = 7},
  [184] = {.lex_state = 7},
  [185] = {.lex_state = 7},
  [186] = {.lex_state = 7},
  [187] = {.lex_state = 7},
  [188] = {.lex_state = 7},
  [189] = {.lex_state = 7},
  [190] = {.lex_state = 7},
  [191] = {.lex_state = 7},
  [192] = {.lex_state = 7},
  [193] = {.lex_state = 7},
  [194] = {.lex_state = 7},
  [195] = {.lex_state = 7},
  [196] = {.lex_state = 7},
  [197] = {.lex_state = 7},
  [198] = {.lex_state = 7},
  [199] = {.lex_state = 7},
  [200] = {.lex_state = 7},
  [201] = {.lex_state = 7},
  [202] = {.lex_state = 7},
  [203] = {.lex_state = 7},
  [204] = {.lex_state = 7},
  [205] = {.lex_state = 7},
  [206] = {.lex_state = 7},
  [207] = {.lex_state = 3},
  [208] = {.lex_state = 3},
  [209] = {.lex_state = 3},
  [210] = {.lex_state = 3},
  [211] = {.lex_state = 3},
  [212] = {.lex_state = 3},
  [213] = {.lex_state = 3},
  [214] = {.lex_state = 3},
  [215] = {.lex_state = 3},
  [216] = {.lex_state = 3},
  [217] = {.lex_state = 3},
  [218] = {.lex_state = 3},
  [219] = {.lex_state = 3},
  [220] = {.lex_state = 3},
  [221] = {.lex_state = 3},
  [222] = {.lex_state = 3},
  [223] = {.lex_state = 3},
  [224] = {.lex_state = 3},
  [225] = {.lex_state = 3},
  [226] = {.lex_state = 3},
  [227] = {.lex_state = 3},
  [228] = {.lex_state = 3},
  [229] = {.lex_state = 3},
  [230] = {.lex_state = 3},
  [231] = {.lex_state = 3},
  [232] = {.lex_state = 3},
  [233] = {.lex_state = 3},
  [234] = {.lex_state = 3},
  [235] = {.lex_state = 3},
  [236] = {.lex_state = 3},
  [237] = {.lex_state = 3},
  [238] = {.lex_state = 3},
  [239] = {.lex_state = 3},
  [240] = {.lex_state = 3},
  [241] = {.lex_state = 3},
  [242] = {.lex_state = 3},
  [243] = {.lex_state = 6},
  [244] = {.lex_state = 6},
  [245] = {.lex_state = 6},
  [246] = {.lex_state = 6},
  [247] = {.lex_state = 6},
  [248] = {.lex_state = 6},
  [249] = {.lex_state = 6},
  [250] = {.lex_state = 6},
  [251] = {.lex_state = 6},
  [252] = {.lex_state = 6},
  [253] = {.lex_state = 6},
  [254] = {.lex_state = 6},
  [255] = {.lex_state = 6},
  [256] = {.lex_state = 6},
  [257] = {.lex_state = 6},
  [258] = {.lex_state = 6},
  [259] = {.lex_state = 6},
  [260] = {.lex_state = 6},
  [261] = {.lex_state = 6},
  [262] = {.lex_state = 6},
  [263] = {.lex_state = 6},
  [264] = {.lex_state = 6},
  [265] = {.lex_state = 6},
  [266] = {.lex_state = 6},
  [267] = {.lex_state = 6},
  [268] = {.lex_state = 6},
  [269] = {.lex_state = 6},
  [270] = {.lex_state = 6},
  [271] = {.lex_state = 6},
  [272] = {.lex_state = 6},
  [273] = {.lex_state = 6},
  [274] = {.lex_state = 6},
  [275] = {.lex_state = 6},
  [276] = {.lex_state = 6},
  [277] = {.lex_state = 6},
  [278] = {.lex_state = 6},
  [279] = {.lex_state = 32},
  [280] = {.lex_state = 4},
  [281] = {.lex_state = 4},
  [282] = {.lex_state = 4},
  [283] = {.lex_state = 4},
  [284] = {.lex_state = 4},
  [285] = {.lex_state = 32},
  [286] = {.lex_state = 4},
  [287] = {.lex_state = 32},
  [288] = {.lex_state = 4},
  [289] = {.lex_state = 4},
  [290] = {.lex_state = 4},
  [291] = {.lex_state = 1},
  [292] = {.lex_state = 1},
  [293] = {.lex_state = 5},
  [294] = {.lex_state = 5},
  [295] = {.lex_state = 5},
  [296] = {.lex_state = 1},
  [297] = {.lex_state = 1},
  [298] = {.lex_state = 1},
  [299] = {.lex_state = 5},
  [300] = {.lex_state = 5},
  [301] = {.lex_state = 5},
  [302] = {.lex_state = 5},
  [303] = {.lex_state = 1},
  [304] = {.lex_state = 5},
  [305] = {.lex_state = 5},
  [306] = {.lex_state = 1},
  [307] = {.lex_state = 32},
  [308] = {.lex_state = 4},
  [309] = {.lex_state = 32},
  [310] = {.lex_state = 1},
  [311] = {.lex_state = 1},
  [312] = {.lex_state = 32},
  [313] = {.lex_state = 32},
  [314] = {.lex_state = 32},
  [315] = {.lex_state = 1},
  [316] = {.lex_state = 32},
  [317] = {.lex_state = 1},
  [318] = {.lex_state = 1},
  [319] = {.lex_state = 1},
  [320] = {.lex_state = 1},
  [321] = {.lex_state = 1},
  [322] = {.lex_state = 4},
  [323] = {.lex_state = 1},
  [324] = {.lex_state = 1},
  [325] = {.lex_state = 1},
  [326] = {.lex_state = 32},
  [327] = {.lex_state = 1},
  [328] = {.lex_state = 1},
  [329] = {.lex_state = 32},
  [330] = {.lex_state = 1},
  [331] = {.lex_state = 5},
  [332] = {.lex_state = 32},
  [333] = {.lex_state = 32},
  [334] = {.lex_state = 32},
  [335] = {.lex_state = 32},
  [336] = {.lex_state = 32},
  [337] = {.lex_state = 32},
  [338] = {.lex_state = 32},
  [339] = {.lex_state = 32},
  [340] = {.lex_state = 32},
  [341] = {.lex_state = 32},
  [342] = {.lex_state = 8},
  [343] = {.lex_state = 32},
  [344] = {.lex_state = 32},
  [345] = {.lex_state = 32},
  [346] = {.lex_state = 32},
  [347] = {.lex_state = 32},
  [348] = {.lex_state = 32},
  [349] = {.lex_state = 8},
  [350] = {.lex_state = 32},
  [351] = {.lex_state = 32},
  [352] = {.lex_state = 32},
  [353] = {.lex_state = 8},
  [354] = {.lex_state = 32},
  [355] = {.lex_state = 1},
  [356] = {.lex_state = 32},
  [357] = {.lex_state = 32},
  [358] = {.lex_state = 32},
  [359] = {.lex_state = 32},
  [360] = {.lex_state = 32},
  [361] = {.lex_state = 32},
  [362] = {.lex_state = 32},
  [363] = {.lex_state = 32},
  [364] = {.lex_state = 32},
  [365] = {.lex_state = 32},
  [366] = {.lex_state = 32},
  [367] = {.lex_state = 32},
  [368] = {.lex_state = 32},
  [369] = {.lex_state = 32},
  [370] = {.lex_state = 32},
  [371] = {.lex_state = 8},
  [372] = {.lex_state = 32},
  [373] = {.lex_state = 32},
  [374] = {.lex_state = 32},
  [375] = {.lex_state = 32},
  [376] = {.lex_state = 32},
  [377] = {.lex_state = 32},
  [378] = {.lex_state = 32},
  [379] = {.lex_state = 32},
  [380] = {.lex_state = 32},
  [381] = {.lex_state = 32},
  [382] = {.lex_state = 32},
  [383] = {.lex_state = 32},
  [384] = {.lex_state = 32},
  [385] = {.lex_state = 32},
  [386] = {.lex_state = 32},
  [387] = {.lex_state = 32},
  [388] = {.lex_state = 32},
  [389] = {.lex_state = 32},
  [390] = {.lex_state = 32},
  [391] = {.lex_state = 32},
  [392] = {.lex_state = 32},
  [393] = {.lex_state = 32},
  [394] = {.lex_state = 32},
  [395] = {.lex_state = 32},
  [396] = {.lex_state = 32},
  [397] = {.lex_state = 32},
  [398] = {.lex_state = 32},
  [399] = {.lex_state = 32},
  [400] = {.lex_state = 32},
  [401] = {.lex_state = 32},
  [402] = {.lex_state = 32},
  [403] = {.lex_state = 32},
  [404] = {.lex_state = 32},
  [405] = {.lex_state = 32},
  [406] = {.lex_state = 32},
  [407] = {.lex_state = 32},
  [408] = {.lex_state = 32},
  [409] = {.lex_state = 32},
  [410] = {.lex_state = 32},
  [411] = {.lex_state = 32},
  [412] = {.lex_state = 32},
  [413] = {.lex_state = 32},
  [414] = {.lex_state = 32},
  [415] = {.lex_state = 32},
  [416] = {.lex_state = 32},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_NULL] = ACTIONS(1),
    [anon_sym_func] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_break] = ACTIONS(1),
    [anon_sym_continue] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_go] = ACTIONS(1),
    [anon_sym_defer] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_range] = ACTIONS(1),
    [anon_sym_switch] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE2] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE2] = ACTIONS(1),
    [aux_sym_escape_sequence_token1] = ACTIONS(1),
    [sym_escape_sequence_invalid] = ACTIONS(1),
    [sym_string_backtick] = ACTIONS(1),
    [sym_int_literal] = ACTIONS(1),
    [sym_float_literal] = ACTIONS(1),
    [sym_nil] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(410),
    [sym__definition] = STATE(6),
    [sym_function_declaration] = STATE(6),
    [sym__statement] = STATE(355),
    [sym__simple_statement] = STATE(306),
    [sym__declaration] = STATE(306),
    [sym_const_declaration] = STATE(306),
    [sym_var_declaration] = STATE(306),
    [sym_short_var_declaration] = STATE(306),
    [sym_inc_statement] = STATE(306),
    [sym_dec_statement] = STATE(306),
    [sym_assignment_statement] = STATE(306),
    [sym_break_statement] = STATE(306),
    [sym_continue_statement] = STATE(306),
    [sym_return_statement] = STATE(306),
    [sym_go_statement] = STATE(306),
    [sym_defer_statement] = STATE(306),
    [sym_import_statement] = STATE(306),
    [sym_import_statement_from] = STATE(406),
    [sym_if_statement] = STATE(306),
    [sym_for_statement] = STATE(306),
    [sym_switch_statement] = STATE(306),
    [sym_expression_statement] = STATE(306),
    [sym__expression] = STATE(28),
    [sym_selector_expression] = STATE(55),
    [sym_index_expression] = STATE(55),
    [sym_expression_list] = STATE(314),
    [sym_parenthesized_expression] = STATE(55),
    [sym_call_expression] = STATE(55),
    [sym__complex_literal] = STATE(55),
    [sym_list_literal] = STATE(55),
    [sym_map_or_set_literal] = STATE(55),
    [sym_unary_expression] = STATE(55),
    [sym_binary_expression] = STATE(55),
    [sym_conditional_expression] = STATE(55),
    [sym_func_literal] = STATE(55),
    [sym_string] = STATE(55),
    [sym_string_template] = STATE(55),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_func] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_const] = ACTIONS(15),
    [anon_sym_var] = ACTIONS(17),
    [anon_sym_break] = ACTIONS(19),
    [anon_sym_continue] = ACTIONS(21),
    [anon_sym_return] = ACTIONS(23),
    [anon_sym_go] = ACTIONS(25),
    [anon_sym_defer] = ACTIONS(27),
    [anon_sym_import] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_switch] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [anon_sym_CARET] = ACTIONS(41),
    [anon_sym_STAR] = ACTIONS(41),
    [anon_sym_AMP] = ACTIONS(41),
    [anon_sym_LT_DASH] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_string_backtick] = ACTIONS(47),
    [sym_int_literal] = ACTIONS(7),
    [sym_float_literal] = ACTIONS(47),
    [sym_nil] = ACTIONS(7),
    [sym_true] = ACTIONS(7),
    [sym_false] = ACTIONS(7),
    [sym_comment] = ACTIONS(49),
  },
  [2] = {
    [sym__statement_list] = STATE(398),
    [sym__statement] = STATE(298),
    [sym__simple_statement] = STATE(306),
    [sym__declaration] = STATE(306),
    [sym_const_declaration] = STATE(306),
    [sym_var_declaration] = STATE(306),
    [sym_short_var_declaration] = STATE(306),
    [sym_inc_statement] = STATE(306),
    [sym_dec_statement] = STATE(306),
    [sym_assignment_statement] = STATE(306),
    [sym_break_statement] = STATE(306),
    [sym_continue_statement] = STATE(306),
    [sym_return_statement] = STATE(306),
    [sym_go_statement] = STATE(306),
    [sym_defer_statement] = STATE(306),
    [sym_import_statement] = STATE(306),
    [sym_import_statement_from] = STATE(406),
    [sym_if_statement] = STATE(306),
    [sym_for_statement] = STATE(306),
    [sym_switch_statement] = STATE(306),
    [sym_expression_statement] = STATE(306),
    [sym__expression] = STATE(46),
    [sym_selector_expression] = STATE(55),
    [sym_index_expression] = STATE(55),
    [sym_expression_list] = STATE(314),
    [sym_parenthesized_expression] = STATE(55),
    [sym_call_expression] = STATE(55),
    [sym__complex_literal] = STATE(55),
    [sym_list_literal] = STATE(55),
    [sym_map_or_set_literal] = STATE(55),
    [sym_set_literal_values] = STATE(383),
    [sym_map_literal_values] = STATE(383),
    [sym_map_literal_pair] = STATE(341),
    [sym_unary_expression] = STATE(55),
    [sym_binary_expression] = STATE(55),
    [sym_conditional_expression] = STATE(55),
    [sym_func_literal] = STATE(55),
    [sym_string] = STATE(55),
    [sym_string_template] = STATE(55),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_func] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(53),
    [anon_sym_const] = ACTIONS(15),
    [anon_sym_var] = ACTIONS(17),
    [anon_sym_break] = ACTIONS(19),
    [anon_sym_continue] = ACTIONS(21),
    [anon_sym_return] = ACTIONS(23),
    [anon_sym_go] = ACTIONS(25),
    [anon_sym_defer] = ACTIONS(27),
    [anon_sym_import] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_switch] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [anon_sym_CARET] = ACTIONS(41),
    [anon_sym_STAR] = ACTIONS(41),
    [anon_sym_AMP] = ACTIONS(41),
    [anon_sym_LT_DASH] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_string_backtick] = ACTIONS(47),
    [sym_int_literal] = ACTIONS(7),
    [sym_float_literal] = ACTIONS(47),
    [sym_nil] = ACTIONS(7),
    [sym_true] = ACTIONS(7),
    [sym_false] = ACTIONS(7),
    [sym_comment] = ACTIONS(49),
  },
  [3] = {
    [sym__statement_list] = STATE(339),
    [sym__statement] = STATE(298),
    [sym__simple_statement] = STATE(306),
    [sym__declaration] = STATE(306),
    [sym_const_declaration] = STATE(306),
    [sym_var_declaration] = STATE(306),
    [sym_short_var_declaration] = STATE(306),
    [sym_inc_statement] = STATE(306),
    [sym_dec_statement] = STATE(306),
    [sym_assignment_statement] = STATE(306),
    [sym_break_statement] = STATE(306),
    [sym_continue_statement] = STATE(306),
    [sym_return_statement] = STATE(306),
    [sym_go_statement] = STATE(306),
    [sym_defer_statement] = STATE(306),
    [sym_import_statement] = STATE(306),
    [sym_import_statement_from] = STATE(406),
    [sym_if_statement] = STATE(306),
    [sym_for_statement] = STATE(306),
    [sym_switch_statement] = STATE(306),
    [sym_expression_statement] = STATE(306),
    [sym__expression] = STATE(28),
    [sym_selector_expression] = STATE(55),
    [sym_index_expression] = STATE(55),
    [sym_expression_list] = STATE(314),
    [sym_parenthesized_expression] = STATE(55),
    [sym_call_expression] = STATE(55),
    [sym__complex_literal] = STATE(55),
    [sym_list_literal] = STATE(55),
    [sym_map_or_set_literal] = STATE(55),
    [sym_unary_expression] = STATE(55),
    [sym_binary_expression] = STATE(55),
    [sym_conditional_expression] = STATE(55),
    [sym_func_literal] = STATE(55),
    [sym_string] = STATE(55),
    [sym_string_template] = STATE(55),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_func] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(55),
    [anon_sym_const] = ACTIONS(15),
    [anon_sym_var] = ACTIONS(17),
    [anon_sym_break] = ACTIONS(19),
    [anon_sym_continue] = ACTIONS(21),
    [anon_sym_return] = ACTIONS(23),
    [anon_sym_go] = ACTIONS(25),
    [anon_sym_defer] = ACTIONS(27),
    [anon_sym_import] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_switch] = ACTIONS(37),
    [anon_sym_case] = ACTIONS(57),
    [anon_sym_default] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [anon_sym_CARET] = ACTIONS(41),
    [anon_sym_STAR] = ACTIONS(41),
    [anon_sym_AMP] = ACTIONS(41),
    [anon_sym_LT_DASH] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_string_backtick] = ACTIONS(47),
    [sym_int_literal] = ACTIONS(7),
    [sym_float_literal] = ACTIONS(47),
    [sym_nil] = ACTIONS(7),
    [sym_true] = ACTIONS(7),
    [sym_false] = ACTIONS(7),
    [sym_comment] = ACTIONS(49),
  },
  [4] = {
    [sym__statement_list] = STATE(354),
    [sym__statement] = STATE(298),
    [sym__simple_statement] = STATE(306),
    [sym__declaration] = STATE(306),
    [sym_const_declaration] = STATE(306),
    [sym_var_declaration] = STATE(306),
    [sym_short_var_declaration] = STATE(306),
    [sym_inc_statement] = STATE(306),
    [sym_dec_statement] = STATE(306),
    [sym_assignment_statement] = STATE(306),
    [sym_break_statement] = STATE(306),
    [sym_continue_statement] = STATE(306),
    [sym_return_statement] = STATE(306),
    [sym_go_statement] = STATE(306),
    [sym_defer_statement] = STATE(306),
    [sym_import_statement] = STATE(306),
    [sym_import_statement_from] = STATE(406),
    [sym_if_statement] = STATE(306),
    [sym_for_statement] = STATE(306),
    [sym_switch_statement] = STATE(306),
    [sym_expression_statement] = STATE(306),
    [sym__expression] = STATE(28),
    [sym_selector_expression] = STATE(55),
    [sym_index_expression] = STATE(55),
    [sym_expression_list] = STATE(314),
    [sym_parenthesized_expression] = STATE(55),
    [sym_call_expression] = STATE(55),
    [sym__complex_literal] = STATE(55),
    [sym_list_literal] = STATE(55),
    [sym_map_or_set_literal] = STATE(55),
    [sym_unary_expression] = STATE(55),
    [sym_binary_expression] = STATE(55),
    [sym_conditional_expression] = STATE(55),
    [sym_func_literal] = STATE(55),
    [sym_string] = STATE(55),
    [sym_string_template] = STATE(55),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_func] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(59),
    [anon_sym_const] = ACTIONS(15),
    [anon_sym_var] = ACTIONS(17),
    [anon_sym_break] = ACTIONS(19),
    [anon_sym_continue] = ACTIONS(21),
    [anon_sym_return] = ACTIONS(23),
    [anon_sym_go] = ACTIONS(25),
    [anon_sym_defer] = ACTIONS(27),
    [anon_sym_import] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_switch] = ACTIONS(37),
    [anon_sym_case] = ACTIONS(61),
    [anon_sym_default] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [anon_sym_CARET] = ACTIONS(41),
    [anon_sym_STAR] = ACTIONS(41),
    [anon_sym_AMP] = ACTIONS(41),
    [anon_sym_LT_DASH] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_string_backtick] = ACTIONS(47),
    [sym_int_literal] = ACTIONS(7),
    [sym_float_literal] = ACTIONS(47),
    [sym_nil] = ACTIONS(7),
    [sym_true] = ACTIONS(7),
    [sym_false] = ACTIONS(7),
    [sym_comment] = ACTIONS(49),
  },
  [5] = {
    [sym__definition] = STATE(5),
    [sym_function_declaration] = STATE(5),
    [sym__statement] = STATE(355),
    [sym__simple_statement] = STATE(306),
    [sym__declaration] = STATE(306),
    [sym_const_declaration] = STATE(306),
    [sym_var_declaration] = STATE(306),
    [sym_short_var_declaration] = STATE(306),
    [sym_inc_statement] = STATE(306),
    [sym_dec_statement] = STATE(306),
    [sym_assignment_statement] = STATE(306),
    [sym_break_statement] = STATE(306),
    [sym_continue_statement] = STATE(306),
    [sym_return_statement] = STATE(306),
    [sym_go_statement] = STATE(306),
    [sym_defer_statement] = STATE(306),
    [sym_import_statement] = STATE(306),
    [sym_import_statement_from] = STATE(406),
    [sym_if_statement] = STATE(306),
    [sym_for_statement] = STATE(306),
    [sym_switch_statement] = STATE(306),
    [sym_expression_statement] = STATE(306),
    [sym__expression] = STATE(28),
    [sym_selector_expression] = STATE(55),
    [sym_index_expression] = STATE(55),
    [sym_expression_list] = STATE(314),
    [sym_parenthesized_expression] = STATE(55),
    [sym_call_expression] = STATE(55),
    [sym__complex_literal] = STATE(55),
    [sym_list_literal] = STATE(55),
    [sym_map_or_set_literal] = STATE(55),
    [sym_unary_expression] = STATE(55),
    [sym_binary_expression] = STATE(55),
    [sym_conditional_expression] = STATE(55),
    [sym_func_literal] = STATE(55),
    [sym_string] = STATE(55),
    [sym_string_template] = STATE(55),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(63),
    [sym_identifier] = ACTIONS(65),
    [anon_sym_func] = ACTIONS(68),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_LBRACE] = ACTIONS(74),
    [anon_sym_const] = ACTIONS(77),
    [anon_sym_var] = ACTIONS(80),
    [anon_sym_break] = ACTIONS(83),
    [anon_sym_continue] = ACTIONS(86),
    [anon_sym_return] = ACTIONS(89),
    [anon_sym_go] = ACTIONS(92),
    [anon_sym_defer] = ACTIONS(95),
    [anon_sym_import] = ACTIONS(98),
    [anon_sym_from] = ACTIONS(101),
    [anon_sym_if] = ACTIONS(104),
    [anon_sym_for] = ACTIONS(107),
    [anon_sym_switch] = ACTIONS(110),
    [anon_sym_LBRACK] = ACTIONS(113),
    [anon_sym_PLUS] = ACTIONS(116),
    [anon_sym_DASH] = ACTIONS(116),
    [anon_sym_BANG] = ACTIONS(116),
    [anon_sym_CARET] = ACTIONS(116),
    [anon_sym_STAR] = ACTIONS(116),
    [anon_sym_AMP] = ACTIONS(116),
    [anon_sym_LT_DASH] = ACTIONS(116),
    [anon_sym_DQUOTE] = ACTIONS(119),
    [anon_sym_SQUOTE] = ACTIONS(122),
    [sym_string_backtick] = ACTIONS(125),
    [sym_int_literal] = ACTIONS(65),
    [sym_float_literal] = ACTIONS(125),
    [sym_nil] = ACTIONS(65),
    [sym_true] = ACTIONS(65),
    [sym_false] = ACTIONS(65),
    [sym_comment] = ACTIONS(49),
  },
  [6] = {
    [sym__definition] = STATE(5),
    [sym_function_declaration] = STATE(5),
    [sym__statement] = STATE(355),
    [sym__simple_statement] = STATE(306),
    [sym__declaration] = STATE(306),
    [sym_const_declaration] = STATE(306),
    [sym_var_declaration] = STATE(306),
    [sym_short_var_declaration] = STATE(306),
    [sym_inc_statement] = STATE(306),
    [sym_dec_statement] = STATE(306),
    [sym_assignment_statement] = STATE(306),
    [sym_break_statement] = STATE(306),
    [sym_continue_statement] = STATE(306),
    [sym_return_statement] = STATE(306),
    [sym_go_statement] = STATE(306),
    [sym_defer_statement] = STATE(306),
    [sym_import_statement] = STATE(306),
    [sym_import_statement_from] = STATE(406),
    [sym_if_statement] = STATE(306),
    [sym_for_statement] = STATE(306),
    [sym_switch_statement] = STATE(306),
    [sym_expression_statement] = STATE(306),
    [sym__expression] = STATE(28),
    [sym_selector_expression] = STATE(55),
    [sym_index_expression] = STATE(55),
    [sym_expression_list] = STATE(314),
    [sym_parenthesized_expression] = STATE(55),
    [sym_call_expression] = STATE(55),
    [sym__complex_literal] = STATE(55),
    [sym_list_literal] = STATE(55),
    [sym_map_or_set_literal] = STATE(55),
    [sym_unary_expression] = STATE(55),
    [sym_binary_expression] = STATE(55),
    [sym_conditional_expression] = STATE(55),
    [sym_func_literal] = STATE(55),
    [sym_string] = STATE(55),
    [sym_string_template] = STATE(55),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(128),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_func] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_const] = ACTIONS(15),
    [anon_sym_var] = ACTIONS(17),
    [anon_sym_break] = ACTIONS(19),
    [anon_sym_continue] = ACTIONS(21),
    [anon_sym_return] = ACTIONS(23),
    [anon_sym_go] = ACTIONS(25),
    [anon_sym_defer] = ACTIONS(27),
    [anon_sym_import] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_switch] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [anon_sym_CARET] = ACTIONS(41),
    [anon_sym_STAR] = ACTIONS(41),
    [anon_sym_AMP] = ACTIONS(41),
    [anon_sym_LT_DASH] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_string_backtick] = ACTIONS(47),
    [sym_int_literal] = ACTIONS(7),
    [sym_float_literal] = ACTIONS(47),
    [sym_nil] = ACTIONS(7),
    [sym_true] = ACTIONS(7),
    [sym_false] = ACTIONS(7),
    [sym_comment] = ACTIONS(49),
  },
  [7] = {
    [sym__statement] = STATE(319),
    [sym__simple_statement] = STATE(306),
    [sym__declaration] = STATE(306),
    [sym_const_declaration] = STATE(306),
    [sym_var_declaration] = STATE(306),
    [sym_short_var_declaration] = STATE(306),
    [sym_inc_statement] = STATE(306),
    [sym_dec_statement] = STATE(306),
    [sym_assignment_statement] = STATE(306),
    [sym_break_statement] = STATE(306),
    [sym_continue_statement] = STATE(306),
    [sym_return_statement] = STATE(306),
    [sym_go_statement] = STATE(306),
    [sym_defer_statement] = STATE(306),
    [sym_import_statement] = STATE(306),
    [sym_import_statement_from] = STATE(406),
    [sym_if_statement] = STATE(306),
    [sym_for_statement] = STATE(306),
    [sym_switch_statement] = STATE(306),
    [sym_expression_statement] = STATE(306),
    [sym__expression] = STATE(28),
    [sym_selector_expression] = STATE(55),
    [sym_index_expression] = STATE(55),
    [sym_expression_list] = STATE(314),
    [sym_parenthesized_expression] = STATE(55),
    [sym_call_expression] = STATE(55),
    [sym__complex_literal] = STATE(55),
    [sym_list_literal] = STATE(55),
    [sym_map_or_set_literal] = STATE(55),
    [sym_unary_expression] = STATE(55),
    [sym_binary_expression] = STATE(55),
    [sym_conditional_expression] = STATE(55),
    [sym_func_literal] = STATE(55),
    [sym_string] = STATE(55),
    [sym_string_template] = STATE(55),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_func] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(130),
    [anon_sym_const] = ACTIONS(15),
    [anon_sym_var] = ACTIONS(17),
    [anon_sym_break] = ACTIONS(19),
    [anon_sym_continue] = ACTIONS(21),
    [anon_sym_return] = ACTIONS(23),
    [anon_sym_go] = ACTIONS(25),
    [anon_sym_defer] = ACTIONS(27),
    [anon_sym_import] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_switch] = ACTIONS(37),
    [anon_sym_case] = ACTIONS(132),
    [anon_sym_default] = ACTIONS(132),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [anon_sym_CARET] = ACTIONS(41),
    [anon_sym_STAR] = ACTIONS(41),
    [anon_sym_AMP] = ACTIONS(41),
    [anon_sym_LT_DASH] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_string_backtick] = ACTIONS(47),
    [sym_int_literal] = ACTIONS(7),
    [sym_float_literal] = ACTIONS(47),
    [sym_nil] = ACTIONS(7),
    [sym_true] = ACTIONS(7),
    [sym_false] = ACTIONS(7),
    [sym_comment] = ACTIONS(49),
  },
  [8] = {
    [sym__statement] = STATE(319),
    [sym__simple_statement] = STATE(306),
    [sym__declaration] = STATE(306),
    [sym_const_declaration] = STATE(306),
    [sym_var_declaration] = STATE(306),
    [sym_short_var_declaration] = STATE(306),
    [sym_inc_statement] = STATE(306),
    [sym_dec_statement] = STATE(306),
    [sym_assignment_statement] = STATE(306),
    [sym_break_statement] = STATE(306),
    [sym_continue_statement] = STATE(306),
    [sym_return_statement] = STATE(306),
    [sym_go_statement] = STATE(306),
    [sym_defer_statement] = STATE(306),
    [sym_import_statement] = STATE(306),
    [sym_import_statement_from] = STATE(406),
    [sym_if_statement] = STATE(306),
    [sym_for_statement] = STATE(306),
    [sym_switch_statement] = STATE(306),
    [sym_expression_statement] = STATE(306),
    [sym__expression] = STATE(28),
    [sym_selector_expression] = STATE(55),
    [sym_index_expression] = STATE(55),
    [sym_expression_list] = STATE(314),
    [sym_parenthesized_expression] = STATE(55),
    [sym_call_expression] = STATE(55),
    [sym__complex_literal] = STATE(55),
    [sym_list_literal] = STATE(55),
    [sym_map_or_set_literal] = STATE(55),
    [sym_unary_expression] = STATE(55),
    [sym_binary_expression] = STATE(55),
    [sym_conditional_expression] = STATE(55),
    [sym_func_literal] = STATE(55),
    [sym_string] = STATE(55),
    [sym_string_template] = STATE(55),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_func] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(134),
    [anon_sym_const] = ACTIONS(15),
    [anon_sym_var] = ACTIONS(17),
    [anon_sym_break] = ACTIONS(19),
    [anon_sym_continue] = ACTIONS(21),
    [anon_sym_return] = ACTIONS(23),
    [anon_sym_go] = ACTIONS(25),
    [anon_sym_defer] = ACTIONS(27),
    [anon_sym_import] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_switch] = ACTIONS(37),
    [anon_sym_case] = ACTIONS(136),
    [anon_sym_default] = ACTIONS(136),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [anon_sym_CARET] = ACTIONS(41),
    [anon_sym_STAR] = ACTIONS(41),
    [anon_sym_AMP] = ACTIONS(41),
    [anon_sym_LT_DASH] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_string_backtick] = ACTIONS(47),
    [sym_int_literal] = ACTIONS(7),
    [sym_float_literal] = ACTIONS(47),
    [sym_nil] = ACTIONS(7),
    [sym_true] = ACTIONS(7),
    [sym_false] = ACTIONS(7),
    [sym_comment] = ACTIONS(49),
  },
  [9] = {
    [sym__statement_list] = STATE(379),
    [sym__statement] = STATE(298),
    [sym__simple_statement] = STATE(306),
    [sym__declaration] = STATE(306),
    [sym_const_declaration] = STATE(306),
    [sym_var_declaration] = STATE(306),
    [sym_short_var_declaration] = STATE(306),
    [sym_inc_statement] = STATE(306),
    [sym_dec_statement] = STATE(306),
    [sym_assignment_statement] = STATE(306),
    [sym_break_statement] = STATE(306),
    [sym_continue_statement] = STATE(306),
    [sym_return_statement] = STATE(306),
    [sym_go_statement] = STATE(306),
    [sym_defer_statement] = STATE(306),
    [sym_import_statement] = STATE(306),
    [sym_import_statement_from] = STATE(406),
    [sym_if_statement] = STATE(306),
    [sym_for_statement] = STATE(306),
    [sym_switch_statement] = STATE(306),
    [sym_expression_statement] = STATE(306),
    [sym__expression] = STATE(28),
    [sym_selector_expression] = STATE(55),
    [sym_index_expression] = STATE(55),
    [sym_expression_list] = STATE(314),
    [sym_parenthesized_expression] = STATE(55),
    [sym_call_expression] = STATE(55),
    [sym__complex_literal] = STATE(55),
    [sym_list_literal] = STATE(55),
    [sym_map_or_set_literal] = STATE(55),
    [sym_unary_expression] = STATE(55),
    [sym_binary_expression] = STATE(55),
    [sym_conditional_expression] = STATE(55),
    [sym_func_literal] = STATE(55),
    [sym_string] = STATE(55),
    [sym_string_template] = STATE(55),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_func] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(138),
    [anon_sym_const] = ACTIONS(15),
    [anon_sym_var] = ACTIONS(17),
    [anon_sym_break] = ACTIONS(19),
    [anon_sym_continue] = ACTIONS(21),
    [anon_sym_return] = ACTIONS(23),
    [anon_sym_go] = ACTIONS(25),
    [anon_sym_defer] = ACTIONS(27),
    [anon_sym_import] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_switch] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [anon_sym_CARET] = ACTIONS(41),
    [anon_sym_STAR] = ACTIONS(41),
    [anon_sym_AMP] = ACTIONS(41),
    [anon_sym_LT_DASH] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_string_backtick] = ACTIONS(47),
    [sym_int_literal] = ACTIONS(7),
    [sym_float_literal] = ACTIONS(47),
    [sym_nil] = ACTIONS(7),
    [sym_true] = ACTIONS(7),
    [sym_false] = ACTIONS(7),
    [sym_comment] = ACTIONS(49),
  },
  [10] = {
    [sym__statement_list] = STATE(398),
    [sym__statement] = STATE(298),
    [sym__simple_statement] = STATE(306),
    [sym__declaration] = STATE(306),
    [sym_const_declaration] = STATE(306),
    [sym_var_declaration] = STATE(306),
    [sym_short_var_declaration] = STATE(306),
    [sym_inc_statement] = STATE(306),
    [sym_dec_statement] = STATE(306),
    [sym_assignment_statement] = STATE(306),
    [sym_break_statement] = STATE(306),
    [sym_continue_statement] = STATE(306),
    [sym_return_statement] = STATE(306),
    [sym_go_statement] = STATE(306),
    [sym_defer_statement] = STATE(306),
    [sym_import_statement] = STATE(306),
    [sym_import_statement_from] = STATE(406),
    [sym_if_statement] = STATE(306),
    [sym_for_statement] = STATE(306),
    [sym_switch_statement] = STATE(306),
    [sym_expression_statement] = STATE(306),
    [sym__expression] = STATE(28),
    [sym_selector_expression] = STATE(55),
    [sym_index_expression] = STATE(55),
    [sym_expression_list] = STATE(314),
    [sym_parenthesized_expression] = STATE(55),
    [sym_call_expression] = STATE(55),
    [sym__complex_literal] = STATE(55),
    [sym_list_literal] = STATE(55),
    [sym_map_or_set_literal] = STATE(55),
    [sym_unary_expression] = STATE(55),
    [sym_binary_expression] = STATE(55),
    [sym_conditional_expression] = STATE(55),
    [sym_func_literal] = STATE(55),
    [sym_string] = STATE(55),
    [sym_string_template] = STATE(55),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_func] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(140),
    [anon_sym_const] = ACTIONS(15),
    [anon_sym_var] = ACTIONS(17),
    [anon_sym_break] = ACTIONS(19),
    [anon_sym_continue] = ACTIONS(21),
    [anon_sym_return] = ACTIONS(23),
    [anon_sym_go] = ACTIONS(25),
    [anon_sym_defer] = ACTIONS(27),
    [anon_sym_import] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_switch] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [anon_sym_CARET] = ACTIONS(41),
    [anon_sym_STAR] = ACTIONS(41),
    [anon_sym_AMP] = ACTIONS(41),
    [anon_sym_LT_DASH] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_string_backtick] = ACTIONS(47),
    [sym_int_literal] = ACTIONS(7),
    [sym_float_literal] = ACTIONS(47),
    [sym_nil] = ACTIONS(7),
    [sym_true] = ACTIONS(7),
    [sym_false] = ACTIONS(7),
    [sym_comment] = ACTIONS(49),
  },
  [11] = {
    [sym__statement_list] = STATE(390),
    [sym__statement] = STATE(298),
    [sym__simple_statement] = STATE(306),
    [sym__declaration] = STATE(306),
    [sym_const_declaration] = STATE(306),
    [sym_var_declaration] = STATE(306),
    [sym_short_var_declaration] = STATE(306),
    [sym_inc_statement] = STATE(306),
    [sym_dec_statement] = STATE(306),
    [sym_assignment_statement] = STATE(306),
    [sym_break_statement] = STATE(306),
    [sym_continue_statement] = STATE(306),
    [sym_return_statement] = STATE(306),
    [sym_go_statement] = STATE(306),
    [sym_defer_statement] = STATE(306),
    [sym_import_statement] = STATE(306),
    [sym_import_statement_from] = STATE(406),
    [sym_if_statement] = STATE(306),
    [sym_for_statement] = STATE(306),
    [sym_switch_statement] = STATE(306),
    [sym_expression_statement] = STATE(306),
    [sym__expression] = STATE(28),
    [sym_selector_expression] = STATE(55),
    [sym_index_expression] = STATE(55),
    [sym_expression_list] = STATE(314),
    [sym_parenthesized_expression] = STATE(55),
    [sym_call_expression] = STATE(55),
    [sym__complex_literal] = STATE(55),
    [sym_list_literal] = STATE(55),
    [sym_map_or_set_literal] = STATE(55),
    [sym_unary_expression] = STATE(55),
    [sym_binary_expression] = STATE(55),
    [sym_conditional_expression] = STATE(55),
    [sym_func_literal] = STATE(55),
    [sym_string] = STATE(55),
    [sym_string_template] = STATE(55),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_func] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(142),
    [anon_sym_const] = ACTIONS(15),
    [anon_sym_var] = ACTIONS(17),
    [anon_sym_break] = ACTIONS(19),
    [anon_sym_continue] = ACTIONS(21),
    [anon_sym_return] = ACTIONS(23),
    [anon_sym_go] = ACTIONS(25),
    [anon_sym_defer] = ACTIONS(27),
    [anon_sym_import] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_switch] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [anon_sym_CARET] = ACTIONS(41),
    [anon_sym_STAR] = ACTIONS(41),
    [anon_sym_AMP] = ACTIONS(41),
    [anon_sym_LT_DASH] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_string_backtick] = ACTIONS(47),
    [sym_int_literal] = ACTIONS(7),
    [sym_float_literal] = ACTIONS(47),
    [sym_nil] = ACTIONS(7),
    [sym_true] = ACTIONS(7),
    [sym_false] = ACTIONS(7),
    [sym_comment] = ACTIONS(49),
  },
  [12] = {
    [sym__statement_list] = STATE(400),
    [sym__statement] = STATE(298),
    [sym__simple_statement] = STATE(306),
    [sym__declaration] = STATE(306),
    [sym_const_declaration] = STATE(306),
    [sym_var_declaration] = STATE(306),
    [sym_short_var_declaration] = STATE(306),
    [sym_inc_statement] = STATE(306),
    [sym_dec_statement] = STATE(306),
    [sym_assignment_statement] = STATE(306),
    [sym_break_statement] = STATE(306),
    [sym_continue_statement] = STATE(306),
    [sym_return_statement] = STATE(306),
    [sym_go_statement] = STATE(306),
    [sym_defer_statement] = STATE(306),
    [sym_import_statement] = STATE(306),
    [sym_import_statement_from] = STATE(406),
    [sym_if_statement] = STATE(306),
    [sym_for_statement] = STATE(306),
    [sym_switch_statement] = STATE(306),
    [sym_expression_statement] = STATE(306),
    [sym__expression] = STATE(28),
    [sym_selector_expression] = STATE(55),
    [sym_index_expression] = STATE(55),
    [sym_expression_list] = STATE(314),
    [sym_parenthesized_expression] = STATE(55),
    [sym_call_expression] = STATE(55),
    [sym__complex_literal] = STATE(55),
    [sym_list_literal] = STATE(55),
    [sym_map_or_set_literal] = STATE(55),
    [sym_unary_expression] = STATE(55),
    [sym_binary_expression] = STATE(55),
    [sym_conditional_expression] = STATE(55),
    [sym_func_literal] = STATE(55),
    [sym_string] = STATE(55),
    [sym_string_template] = STATE(55),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_func] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(144),
    [anon_sym_const] = ACTIONS(15),
    [anon_sym_var] = ACTIONS(17),
    [anon_sym_break] = ACTIONS(19),
    [anon_sym_continue] = ACTIONS(21),
    [anon_sym_return] = ACTIONS(23),
    [anon_sym_go] = ACTIONS(25),
    [anon_sym_defer] = ACTIONS(27),
    [anon_sym_import] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_switch] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [anon_sym_CARET] = ACTIONS(41),
    [anon_sym_STAR] = ACTIONS(41),
    [anon_sym_AMP] = ACTIONS(41),
    [anon_sym_LT_DASH] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_string_backtick] = ACTIONS(47),
    [sym_int_literal] = ACTIONS(7),
    [sym_float_literal] = ACTIONS(47),
    [sym_nil] = ACTIONS(7),
    [sym_true] = ACTIONS(7),
    [sym_false] = ACTIONS(7),
    [sym_comment] = ACTIONS(49),
  },
  [13] = {
    [sym__statement_list] = STATE(389),
    [sym__statement] = STATE(298),
    [sym__simple_statement] = STATE(306),
    [sym__declaration] = STATE(306),
    [sym_const_declaration] = STATE(306),
    [sym_var_declaration] = STATE(306),
    [sym_short_var_declaration] = STATE(306),
    [sym_inc_statement] = STATE(306),
    [sym_dec_statement] = STATE(306),
    [sym_assignment_statement] = STATE(306),
    [sym_break_statement] = STATE(306),
    [sym_continue_statement] = STATE(306),
    [sym_return_statement] = STATE(306),
    [sym_go_statement] = STATE(306),
    [sym_defer_statement] = STATE(306),
    [sym_import_statement] = STATE(306),
    [sym_import_statement_from] = STATE(406),
    [sym_if_statement] = STATE(306),
    [sym_for_statement] = STATE(306),
    [sym_switch_statement] = STATE(306),
    [sym_expression_statement] = STATE(306),
    [sym__expression] = STATE(28),
    [sym_selector_expression] = STATE(55),
    [sym_index_expression] = STATE(55),
    [sym_expression_list] = STATE(314),
    [sym_parenthesized_expression] = STATE(55),
    [sym_call_expression] = STATE(55),
    [sym__complex_literal] = STATE(55),
    [sym_list_literal] = STATE(55),
    [sym_map_or_set_literal] = STATE(55),
    [sym_unary_expression] = STATE(55),
    [sym_binary_expression] = STATE(55),
    [sym_conditional_expression] = STATE(55),
    [sym_func_literal] = STATE(55),
    [sym_string] = STATE(55),
    [sym_string_template] = STATE(55),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_func] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(146),
    [anon_sym_const] = ACTIONS(15),
    [anon_sym_var] = ACTIONS(17),
    [anon_sym_break] = ACTIONS(19),
    [anon_sym_continue] = ACTIONS(21),
    [anon_sym_return] = ACTIONS(23),
    [anon_sym_go] = ACTIONS(25),
    [anon_sym_defer] = ACTIONS(27),
    [anon_sym_import] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_switch] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [anon_sym_CARET] = ACTIONS(41),
    [anon_sym_STAR] = ACTIONS(41),
    [anon_sym_AMP] = ACTIONS(41),
    [anon_sym_LT_DASH] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_string_backtick] = ACTIONS(47),
    [sym_int_literal] = ACTIONS(7),
    [sym_float_literal] = ACTIONS(47),
    [sym_nil] = ACTIONS(7),
    [sym_true] = ACTIONS(7),
    [sym_false] = ACTIONS(7),
    [sym_comment] = ACTIONS(49),
  },
  [14] = {
    [sym__statement] = STATE(319),
    [sym__simple_statement] = STATE(306),
    [sym__declaration] = STATE(306),
    [sym_const_declaration] = STATE(306),
    [sym_var_declaration] = STATE(306),
    [sym_short_var_declaration] = STATE(306),
    [sym_inc_statement] = STATE(306),
    [sym_dec_statement] = STATE(306),
    [sym_assignment_statement] = STATE(306),
    [sym_break_statement] = STATE(306),
    [sym_continue_statement] = STATE(306),
    [sym_return_statement] = STATE(306),
    [sym_go_statement] = STATE(306),
    [sym_defer_statement] = STATE(306),
    [sym_import_statement] = STATE(306),
    [sym_import_statement_from] = STATE(406),
    [sym_if_statement] = STATE(306),
    [sym_for_statement] = STATE(306),
    [sym_switch_statement] = STATE(306),
    [sym_expression_statement] = STATE(306),
    [sym__expression] = STATE(28),
    [sym_selector_expression] = STATE(55),
    [sym_index_expression] = STATE(55),
    [sym_expression_list] = STATE(314),
    [sym_parenthesized_expression] = STATE(55),
    [sym_call_expression] = STATE(55),
    [sym__complex_literal] = STATE(55),
    [sym_list_literal] = STATE(55),
    [sym_map_or_set_literal] = STATE(55),
    [sym_unary_expression] = STATE(55),
    [sym_binary_expression] = STATE(55),
    [sym_conditional_expression] = STATE(55),
    [sym_func_literal] = STATE(55),
    [sym_string] = STATE(55),
    [sym_string_template] = STATE(55),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_func] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_const] = ACTIONS(15),
    [anon_sym_var] = ACTIONS(17),
    [anon_sym_break] = ACTIONS(19),
    [anon_sym_continue] = ACTIONS(21),
    [anon_sym_return] = ACTIONS(23),
    [anon_sym_go] = ACTIONS(25),
    [anon_sym_defer] = ACTIONS(27),
    [anon_sym_import] = ACTIONS(29),
    [anon_sym_from] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_switch] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [anon_sym_CARET] = ACTIONS(41),
    [anon_sym_STAR] = ACTIONS(41),
    [anon_sym_AMP] = ACTIONS(41),
    [anon_sym_LT_DASH] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_string_backtick] = ACTIONS(47),
    [sym_int_literal] = ACTIONS(7),
    [sym_float_literal] = ACTIONS(47),
    [sym_nil] = ACTIONS(7),
    [sym_true] = ACTIONS(7),
    [sym_false] = ACTIONS(7),
    [sym_comment] = ACTIONS(49),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 19,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_SEMI,
    ACTIONS(152), 1,
      anon_sym_func,
    ACTIONS(154), 1,
      anon_sym_LPAREN,
    ACTIONS(156), 1,
      anon_sym_LBRACE,
    ACTIONS(158), 1,
      anon_sym_const,
    ACTIONS(160), 1,
      anon_sym_var,
    ACTIONS(162), 1,
      anon_sym_LBRACK,
    ACTIONS(166), 1,
      anon_sym_DQUOTE,
    ACTIONS(168), 1,
      anon_sym_SQUOTE,
    STATE(76), 1,
      sym__expression,
    STATE(307), 1,
      sym_expression_list,
    STATE(318), 1,
      sym_block,
    ACTIONS(170), 2,
      sym_string_backtick,
      sym_float_literal,
    STATE(361), 2,
      sym_for_clause,
      sym_range_clause,
    ACTIONS(148), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(164), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(382), 9,
      sym__simple_statement,
      sym__declaration,
      sym_const_declaration,
      sym_var_declaration,
      sym_short_var_declaration,
      sym_inc_statement,
      sym_dec_statement,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(200), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [90] = 16,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_func,
    ACTIONS(154), 1,
      anon_sym_LPAREN,
    ACTIONS(162), 1,
      anon_sym_LBRACK,
    ACTIONS(166), 1,
      anon_sym_DQUOTE,
    ACTIONS(168), 1,
      anon_sym_SQUOTE,
    ACTIONS(172), 1,
      anon_sym_LBRACE,
    ACTIONS(174), 1,
      anon_sym_const,
    ACTIONS(176), 1,
      anon_sym_var,
    STATE(176), 1,
      sym__expression,
    STATE(309), 1,
      sym_expression_list,
    ACTIONS(170), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(148), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(164), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(415), 9,
      sym__simple_statement,
      sym__declaration,
      sym_const_declaration,
      sym_var_declaration,
      sym_short_var_declaration,
      sym_inc_statement,
      sym_dec_statement,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(200), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [170] = 16,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_func,
    ACTIONS(154), 1,
      anon_sym_LPAREN,
    ACTIONS(162), 1,
      anon_sym_LBRACK,
    ACTIONS(166), 1,
      anon_sym_DQUOTE,
    ACTIONS(168), 1,
      anon_sym_SQUOTE,
    ACTIONS(174), 1,
      anon_sym_const,
    ACTIONS(176), 1,
      anon_sym_var,
    ACTIONS(178), 1,
      anon_sym_LBRACE,
    STATE(176), 1,
      sym__expression,
    STATE(309), 1,
      sym_expression_list,
    ACTIONS(170), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(148), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(164), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(412), 9,
      sym__simple_statement,
      sym__declaration,
      sym_const_declaration,
      sym_var_declaration,
      sym_short_var_declaration,
      sym_inc_statement,
      sym_dec_statement,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(200), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [250] = 16,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_func,
    ACTIONS(154), 1,
      anon_sym_LPAREN,
    ACTIONS(162), 1,
      anon_sym_LBRACK,
    ACTIONS(166), 1,
      anon_sym_DQUOTE,
    ACTIONS(168), 1,
      anon_sym_SQUOTE,
    ACTIONS(174), 1,
      anon_sym_const,
    ACTIONS(176), 1,
      anon_sym_var,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    STATE(176), 1,
      sym__expression,
    STATE(309), 1,
      sym_expression_list,
    ACTIONS(170), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(148), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(164), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(393), 9,
      sym__simple_statement,
      sym__declaration,
      sym_const_declaration,
      sym_var_declaration,
      sym_short_var_declaration,
      sym_inc_statement,
      sym_dec_statement,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(200), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [330] = 16,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_func,
    ACTIONS(154), 1,
      anon_sym_LPAREN,
    ACTIONS(162), 1,
      anon_sym_LBRACK,
    ACTIONS(166), 1,
      anon_sym_DQUOTE,
    ACTIONS(168), 1,
      anon_sym_SQUOTE,
    ACTIONS(174), 1,
      anon_sym_const,
    ACTIONS(176), 1,
      anon_sym_var,
    ACTIONS(182), 1,
      anon_sym_LBRACE,
    STATE(176), 1,
      sym__expression,
    STATE(309), 1,
      sym_expression_list,
    ACTIONS(170), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(148), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(164), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(407), 9,
      sym__simple_statement,
      sym__declaration,
      sym_const_declaration,
      sym_var_declaration,
      sym_short_var_declaration,
      sym_inc_statement,
      sym_dec_statement,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(200), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [410] = 18,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_func,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(192), 1,
      anon_sym_RBRACE,
    ACTIONS(194), 1,
      anon_sym_case,
    ACTIONS(196), 1,
      anon_sym_default,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    STATE(244), 1,
      sym__expression,
    STATE(341), 1,
      sym_map_literal_pair,
    ACTIONS(206), 2,
      sym_string_backtick,
      sym_float_literal,
    STATE(395), 2,
      sym_set_literal_values,
      sym_map_literal_values,
    STATE(313), 3,
      sym_switch_case,
      sym_default_case,
      aux_sym_switch_statement_repeat1,
    ACTIONS(184), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(200), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(155), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [491] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_LF,
    ACTIONS(214), 1,
      anon_sym_func,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    ACTIONS(218), 1,
      anon_sym_LBRACE,
    ACTIONS(220), 1,
      anon_sym_LBRACK,
    ACTIONS(224), 1,
      anon_sym_DQUOTE,
    ACTIONS(226), 1,
      anon_sym_SQUOTE,
    STATE(210), 1,
      sym__expression,
    ACTIONS(212), 5,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
    ACTIONS(208), 7,
      sym_identifier,
      sym_string_backtick,
      sym_int_literal,
      sym_float_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(222), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(231), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [559] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_LF,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      anon_sym_DOT,
    ACTIONS(236), 1,
      anon_sym_LBRACK,
    STATE(51), 1,
      sym_argument_list,
    ACTIONS(230), 33,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_case,
      anon_sym_COLON,
      anon_sym_default,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [613] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      anon_sym_DOT,
    ACTIONS(236), 1,
      anon_sym_LBRACK,
    ACTIONS(238), 1,
      anon_sym_LF,
    STATE(51), 1,
      sym_argument_list,
    ACTIONS(240), 33,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_case,
      anon_sym_COLON,
      anon_sym_default,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [667] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_LF,
    ACTIONS(244), 37,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_else,
      anon_sym_case,
      anon_sym_COLON,
      anon_sym_default,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [713] = 15,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_func,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    ACTIONS(246), 1,
      anon_sym_RBRACE,
    STATE(244), 1,
      sym__expression,
    STATE(341), 1,
      sym_map_literal_pair,
    ACTIONS(206), 2,
      sym_string_backtick,
      sym_float_literal,
    STATE(395), 2,
      sym_set_literal_values,
      sym_map_literal_values,
    ACTIONS(184), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(200), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(155), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [783] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      anon_sym_DOT,
    ACTIONS(236), 1,
      anon_sym_LBRACK,
    ACTIONS(248), 1,
      anon_sym_LF,
    ACTIONS(258), 1,
      anon_sym_QMARK,
    STATE(51), 1,
      sym_argument_list,
    ACTIONS(252), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(254), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(256), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(250), 17,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_case,
      anon_sym_COLON,
      anon_sym_default,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [845] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_LF,
    ACTIONS(262), 37,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_else,
      anon_sym_case,
      anon_sym_COLON,
      anon_sym_default,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [891] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      anon_sym_DOT,
    ACTIONS(236), 1,
      anon_sym_LBRACK,
    ACTIONS(258), 1,
      anon_sym_QMARK,
    ACTIONS(264), 1,
      anon_sym_LF,
    ACTIONS(268), 1,
      anon_sym_COMMA,
    ACTIONS(272), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(274), 1,
      anon_sym_DASH_DASH,
    ACTIONS(276), 1,
      anon_sym_AMP_AMP,
    ACTIONS(278), 1,
      anon_sym_PIPE_PIPE,
    STATE(51), 1,
      sym_argument_list,
    STATE(285), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(252), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(266), 5,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
    ACTIONS(254), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(256), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(270), 6,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
  [967] = 15,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_func,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    ACTIONS(280), 1,
      anon_sym_RBRACE,
    STATE(244), 1,
      sym__expression,
    STATE(341), 1,
      sym_map_literal_pair,
    ACTIONS(206), 2,
      sym_string_backtick,
      sym_float_literal,
    STATE(387), 2,
      sym_set_literal_values,
      sym_map_literal_values,
    ACTIONS(184), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(200), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(155), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [1037] = 15,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_func,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    ACTIONS(282), 1,
      anon_sym_RBRACE,
    STATE(244), 1,
      sym__expression,
    STATE(341), 1,
      sym_map_literal_pair,
    ACTIONS(206), 2,
      sym_string_backtick,
      sym_float_literal,
    STATE(380), 2,
      sym_set_literal_values,
      sym_map_literal_values,
    ACTIONS(184), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(200), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(155), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [1107] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_LF,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      anon_sym_DOT,
    ACTIONS(236), 1,
      anon_sym_LBRACK,
    ACTIONS(258), 1,
      anon_sym_QMARK,
    ACTIONS(276), 1,
      anon_sym_AMP_AMP,
    STATE(51), 1,
      sym_argument_list,
    ACTIONS(252), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(254), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(256), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(230), 16,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_case,
      anon_sym_COLON,
      anon_sym_default,
      anon_sym_PIPE_PIPE,
  [1171] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_LF,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      anon_sym_DOT,
    ACTIONS(236), 1,
      anon_sym_LBRACK,
    ACTIONS(258), 1,
      anon_sym_QMARK,
    STATE(51), 1,
      sym_argument_list,
    ACTIONS(252), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(254), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(256), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(230), 17,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_case,
      anon_sym_COLON,
      anon_sym_default,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1233] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_LF,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      anon_sym_DOT,
    ACTIONS(236), 1,
      anon_sym_LBRACK,
    STATE(51), 1,
      sym_argument_list,
    ACTIONS(254), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(230), 27,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_case,
      anon_sym_COLON,
      anon_sym_default,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [1289] = 15,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_func,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    ACTIONS(284), 1,
      anon_sym_RBRACE,
    STATE(244), 1,
      sym__expression,
    STATE(341), 1,
      sym_map_literal_pair,
    ACTIONS(206), 2,
      sym_string_backtick,
      sym_float_literal,
    STATE(383), 2,
      sym_set_literal_values,
      sym_map_literal_values,
    ACTIONS(184), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(200), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(155), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [1359] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_LF,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      anon_sym_DOT,
    ACTIONS(236), 1,
      anon_sym_LBRACK,
    STATE(51), 1,
      sym_argument_list,
    ACTIONS(252), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(254), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(230), 24,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_case,
      anon_sym_COLON,
      anon_sym_default,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [1417] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_LF,
    ACTIONS(288), 36,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_COLON,
      anon_sym_default,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [1462] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_LF,
    ACTIONS(292), 36,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_COLON,
      anon_sym_default,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [1507] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_LF,
    ACTIONS(296), 36,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_COLON,
      anon_sym_default,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [1552] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_LF,
    ACTIONS(244), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
    ACTIONS(298), 32,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [1599] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_LF,
    ACTIONS(302), 36,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_COLON,
      anon_sym_default,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [1644] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_LF,
    ACTIONS(306), 36,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_COLON,
      anon_sym_default,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [1689] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_LF,
    ACTIONS(310), 36,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_COLON,
      anon_sym_default,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [1734] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_LF,
    ACTIONS(314), 36,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_COLON,
      anon_sym_default,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [1779] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_LF,
    ACTIONS(298), 36,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_COLON,
      anon_sym_default,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [1824] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_LF,
    ACTIONS(320), 36,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_COLON,
      anon_sym_default,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [1869] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      anon_sym_DOT,
    ACTIONS(236), 1,
      anon_sym_LBRACK,
    ACTIONS(258), 1,
      anon_sym_QMARK,
    ACTIONS(264), 1,
      anon_sym_LF,
    ACTIONS(268), 1,
      anon_sym_COMMA,
    ACTIONS(272), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(274), 1,
      anon_sym_DASH_DASH,
    ACTIONS(276), 1,
      anon_sym_AMP_AMP,
    ACTIONS(278), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(322), 1,
      anon_sym_COLON,
    STATE(51), 1,
      sym_argument_list,
    STATE(287), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(252), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(266), 3,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_RBRACE,
    ACTIONS(254), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(256), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(270), 6,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
  [1946] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      anon_sym_LF,
    ACTIONS(326), 36,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_COLON,
      anon_sym_default,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [1991] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_LF,
    ACTIONS(330), 36,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_COLON,
      anon_sym_default,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [2036] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_LF,
    ACTIONS(334), 36,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_COLON,
      anon_sym_default,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [2081] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_LF,
    ACTIONS(338), 36,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_COLON,
      anon_sym_default,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [2126] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_LF,
    ACTIONS(342), 36,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_COLON,
      anon_sym_default,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [2171] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_LF,
    ACTIONS(346), 36,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_COLON,
      anon_sym_default,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [2216] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      anon_sym_LF,
    ACTIONS(350), 36,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_COLON,
      anon_sym_default,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [2261] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_LF,
    ACTIONS(354), 36,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_COLON,
      anon_sym_default,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [2306] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_LF,
    ACTIONS(358), 36,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_COLON,
      anon_sym_default,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [2351] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_LF,
    ACTIONS(362), 36,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_COLON,
      anon_sym_default,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [2396] = 14,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_func,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    ACTIONS(364), 1,
      anon_sym_COMMA,
    ACTIONS(366), 1,
      anon_sym_RPAREN,
    STATE(249), 1,
      sym__expression,
    ACTIONS(206), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(184), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(200), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(155), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [2462] = 14,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_func,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    ACTIONS(368), 1,
      anon_sym_COMMA,
    ACTIONS(370), 1,
      anon_sym_RPAREN,
    STATE(246), 1,
      sym__expression,
    ACTIONS(206), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(184), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(200), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(155), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [2528] = 14,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_func,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    ACTIONS(372), 1,
      anon_sym_COMMA,
    ACTIONS(374), 1,
      anon_sym_RPAREN,
    STATE(250), 1,
      sym__expression,
    ACTIONS(206), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(184), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(200), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(155), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [2594] = 14,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_func,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    ACTIONS(376), 1,
      anon_sym_COMMA,
    ACTIONS(378), 1,
      anon_sym_RPAREN,
    STATE(252), 1,
      sym__expression,
    ACTIONS(206), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(184), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(200), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(155), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [2660] = 13,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_func,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    ACTIONS(380), 1,
      anon_sym_RPAREN,
    STATE(179), 1,
      sym__expression,
    ACTIONS(206), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(184), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(200), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(155), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [2723] = 13,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_func,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    ACTIONS(382), 1,
      anon_sym_RPAREN,
    STATE(179), 1,
      sym__expression,
    ACTIONS(206), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(184), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(200), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(155), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [2786] = 13,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_func,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    ACTIONS(384), 1,
      anon_sym_RBRACK,
    STATE(247), 1,
      sym__expression,
    ACTIONS(206), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(184), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(200), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(155), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [2849] = 13,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_func,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    STATE(243), 1,
      sym__expression,
    STATE(405), 1,
      sym_expression_list,
    ACTIONS(206), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(184), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(200), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(155), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [2912] = 13,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_func,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    ACTIONS(386), 1,
      anon_sym_SEMI,
    STATE(277), 1,
      sym__expression,
    ACTIONS(206), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(184), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(200), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(155), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [2975] = 13,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_func,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    ACTIONS(388), 1,
      anon_sym_range,
    STATE(255), 1,
      sym__expression,
    ACTIONS(206), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(184), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(200), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(155), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [3038] = 13,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_func,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    ACTIONS(390), 1,
      anon_sym_RPAREN,
    STATE(179), 1,
      sym__expression,
    ACTIONS(206), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(184), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(200), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(155), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [3101] = 13,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_func,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    ACTIONS(392), 1,
      anon_sym_RPAREN,
    STATE(179), 1,
      sym__expression,
    ACTIONS(206), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(184), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(200), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(155), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [3164] = 13,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_func,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_RPAREN,
    STATE(179), 1,
      sym__expression,
    ACTIONS(206), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(184), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(200), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(155), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [3227] = 13,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_func,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    ACTIONS(396), 1,
      anon_sym_RPAREN,
    STATE(179), 1,
      sym__expression,
    ACTIONS(206), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(184), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(200), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(155), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [3290] = 13,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_func,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    ACTIONS(388), 1,
      anon_sym_range,
    STATE(256), 1,
      sym__expression,
    ACTIONS(206), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(184), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(200), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(155), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [3353] = 13,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_func,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    ACTIONS(398), 1,
      anon_sym_RBRACK,
    STATE(245), 1,
      sym__expression,
    ACTIONS(206), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(184), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(200), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(155), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [3416] = 13,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_func,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    ACTIONS(400), 1,
      anon_sym_RPAREN,
    STATE(179), 1,
      sym__expression,
    ACTIONS(206), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(184), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(200), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(155), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [3479] = 13,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_func,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    ACTIONS(402), 1,
      anon_sym_RPAREN,
    STATE(179), 1,
      sym__expression,
    ACTIONS(206), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(184), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(200), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(155), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [3542] = 13,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_func,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    ACTIONS(404), 1,
      anon_sym_RBRACK,
    STATE(248), 1,
      sym__expression,
    ACTIONS(206), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(184), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(200), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(155), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [3605] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_SEMI,
    ACTIONS(270), 1,
      anon_sym_EQ,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(408), 1,
      anon_sym_COMMA,
    ACTIONS(410), 1,
      anon_sym_LBRACE,
    ACTIONS(414), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(416), 1,
      anon_sym_DASH_DASH,
    ACTIONS(418), 1,
      anon_sym_DOT,
    ACTIONS(420), 1,
      anon_sym_LBRACK,
    ACTIONS(432), 1,
      anon_sym_AMP_AMP,
    ACTIONS(434), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(436), 1,
      anon_sym_QMARK,
    STATE(186), 1,
      sym_argument_list,
    STATE(285), 1,
      aux_sym_expression_list_repeat1,
    STATE(315), 1,
      sym_block,
    ACTIONS(424), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(430), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(422), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(426), 4,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(428), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(412), 5,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
  [3686] = 13,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_func,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    STATE(243), 1,
      sym__expression,
    STATE(401), 1,
      sym_expression_list,
    ACTIONS(206), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(184), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(200), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(155), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [3749] = 13,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_func,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    ACTIONS(438), 1,
      anon_sym_RBRACK,
    STATE(251), 1,
      sym__expression,
    ACTIONS(206), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(184), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(200), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(155), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [3812] = 13,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_func,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    STATE(276), 1,
      sym__expression,
    STATE(360), 1,
      sym_map_literal_pair,
    ACTIONS(206), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(184), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(200), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(155), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [3875] = 13,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_func,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    ACTIONS(440), 1,
      anon_sym_range,
    STATE(253), 1,
      sym__expression,
    ACTIONS(206), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(184), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(200), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(155), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [3938] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
    ACTIONS(444), 1,
      anon_sym_DOT,
    ACTIONS(446), 1,
      anon_sym_LBRACK,
    STATE(130), 1,
      sym_argument_list,
    ACTIONS(240), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(238), 22,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_RBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [3989] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
    ACTIONS(444), 1,
      anon_sym_DOT,
    ACTIONS(446), 1,
      anon_sym_LBRACK,
    STATE(130), 1,
      sym_argument_list,
    ACTIONS(448), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(450), 4,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(230), 7,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(228), 18,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [4044] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
    ACTIONS(444), 1,
      anon_sym_DOT,
    ACTIONS(446), 1,
      anon_sym_LBRACK,
    STATE(130), 1,
      sym_argument_list,
    ACTIONS(230), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(228), 22,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_RBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [4095] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
    ACTIONS(444), 1,
      anon_sym_DOT,
    ACTIONS(446), 1,
      anon_sym_LBRACK,
    STATE(130), 1,
      sym_argument_list,
    ACTIONS(448), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(452), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(230), 4,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(450), 4,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(228), 18,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [4152] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
    ACTIONS(444), 1,
      anon_sym_DOT,
    ACTIONS(446), 1,
      anon_sym_LBRACK,
    ACTIONS(458), 1,
      anon_sym_QMARK,
    STATE(130), 1,
      sym_argument_list,
    ACTIONS(230), 2,
      anon_sym_EQ,
      anon_sym_COLON,
    ACTIONS(448), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(456), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(452), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(450), 4,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(454), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(228), 13,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [4215] = 13,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_func,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    STATE(243), 1,
      sym__expression,
    STATE(409), 1,
      sym_expression_list,
    ACTIONS(206), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(184), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(200), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(155), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [4278] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
    ACTIONS(444), 1,
      anon_sym_DOT,
    ACTIONS(446), 1,
      anon_sym_LBRACK,
    ACTIONS(458), 1,
      anon_sym_QMARK,
    ACTIONS(460), 1,
      anon_sym_AMP_AMP,
    STATE(130), 1,
      sym_argument_list,
    ACTIONS(230), 2,
      anon_sym_EQ,
      anon_sym_COLON,
    ACTIONS(448), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(456), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(452), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(450), 4,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(454), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(228), 12,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_RBRACK,
      anon_sym_PIPE_PIPE,
  [4343] = 13,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_func,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    STATE(243), 1,
      sym__expression,
    STATE(399), 1,
      sym_expression_list,
    ACTIONS(206), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(184), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(200), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(155), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [4406] = 13,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_func,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    ACTIONS(462), 1,
      anon_sym_SEMI,
    STATE(272), 1,
      sym__expression,
    ACTIONS(206), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(184), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(200), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(155), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [4469] = 13,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_func,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    STATE(243), 1,
      sym__expression,
    STATE(404), 1,
      sym_expression_list,
    ACTIONS(206), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(184), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(200), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(155), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [4532] = 13,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_func,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    STATE(243), 1,
      sym__expression,
    STATE(377), 1,
      sym_expression_list,
    ACTIONS(206), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(184), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(200), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(155), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [4595] = 13,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_func,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    STATE(243), 1,
      sym__expression,
    STATE(378), 1,
      sym_expression_list,
    ACTIONS(206), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(184), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(200), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(155), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [4658] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
    ACTIONS(444), 1,
      anon_sym_DOT,
    ACTIONS(446), 1,
      anon_sym_LBRACK,
    ACTIONS(458), 1,
      anon_sym_QMARK,
    STATE(130), 1,
      sym_argument_list,
    ACTIONS(250), 2,
      anon_sym_EQ,
      anon_sym_COLON,
    ACTIONS(448), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(456), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(452), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(450), 4,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(454), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(248), 13,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [4721] = 12,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_func,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    STATE(260), 1,
      sym__expression,
    ACTIONS(206), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(184), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(200), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(155), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [4781] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(308), 25,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [4823] = 12,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_func,
    STATE(22), 1,
      sym__expression,
    ACTIONS(47), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(7), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(41), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(55), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [4883] = 12,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_func,
    STATE(35), 1,
      sym__expression,
    ACTIONS(47), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(7), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(41), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(55), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [4943] = 12,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_func,
    STATE(32), 1,
      sym__expression,
    ACTIONS(47), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(7), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(41), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(55), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [5003] = 12,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_func,
    STATE(31), 1,
      sym__expression,
    ACTIONS(47), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(7), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(41), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(55), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [5063] = 12,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_func,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    STATE(267), 1,
      sym__expression,
    ACTIONS(206), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(184), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(200), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(155), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [5123] = 12,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_func,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
    ACTIONS(466), 1,
      anon_sym_LBRACE,
    ACTIONS(468), 1,
      anon_sym_LBRACK,
    ACTIONS(472), 1,
      anon_sym_DQUOTE,
    ACTIONS(474), 1,
      anon_sym_SQUOTE,
    STATE(220), 1,
      sym__expression,
    ACTIONS(476), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(208), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(470), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(231), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [5183] = 12,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_func,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
    ACTIONS(466), 1,
      anon_sym_LBRACE,
    ACTIONS(468), 1,
      anon_sym_LBRACK,
    ACTIONS(472), 1,
      anon_sym_DQUOTE,
    ACTIONS(474), 1,
      anon_sym_SQUOTE,
    STATE(219), 1,
      sym__expression,
    ACTIONS(476), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(208), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(470), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(231), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [5243] = 12,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_func,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    STATE(253), 1,
      sym__expression,
    ACTIONS(206), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(184), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(200), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(155), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [5303] = 12,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_func,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    STATE(254), 1,
      sym__expression,
    ACTIONS(206), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(184), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(200), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(155), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [5363] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(360), 25,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [5405] = 12,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_func,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    STATE(81), 1,
      sym__expression,
    ACTIONS(206), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(184), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(200), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(155), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [5465] = 12,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_func,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    STATE(258), 1,
      sym__expression,
    ACTIONS(206), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(184), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(200), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(155), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [5525] = 12,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_func,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
    ACTIONS(466), 1,
      anon_sym_LBRACE,
    ACTIONS(468), 1,
      anon_sym_LBRACK,
    ACTIONS(472), 1,
      anon_sym_DQUOTE,
    ACTIONS(474), 1,
      anon_sym_SQUOTE,
    STATE(216), 1,
      sym__expression,
    ACTIONS(476), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(208), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(470), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(231), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [5585] = 12,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_func,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
    ACTIONS(466), 1,
      anon_sym_LBRACE,
    ACTIONS(468), 1,
      anon_sym_LBRACK,
    ACTIONS(472), 1,
      anon_sym_DQUOTE,
    ACTIONS(474), 1,
      anon_sym_SQUOTE,
    STATE(213), 1,
      sym__expression,
    ACTIONS(476), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(208), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(470), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(231), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [5645] = 12,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_func,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    STATE(263), 1,
      sym__expression,
    ACTIONS(206), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(184), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(200), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(155), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [5705] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(344), 25,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [5747] = 12,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_func,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    STATE(93), 1,
      sym__expression,
    ACTIONS(206), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(184), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(200), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(155), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [5807] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(300), 25,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [5849] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(290), 25,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [5891] = 12,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_func,
    ACTIONS(154), 1,
      anon_sym_LPAREN,
    ACTIONS(162), 1,
      anon_sym_LBRACK,
    ACTIONS(166), 1,
      anon_sym_DQUOTE,
    ACTIONS(168), 1,
      anon_sym_SQUOTE,
    ACTIONS(478), 1,
      anon_sym_LBRACE,
    STATE(177), 1,
      sym__expression,
    ACTIONS(170), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(148), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(164), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(200), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [5951] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(294), 25,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [5993] = 12,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_func,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
    ACTIONS(466), 1,
      anon_sym_LBRACE,
    ACTIONS(468), 1,
      anon_sym_LBRACK,
    ACTIONS(472), 1,
      anon_sym_DQUOTE,
    ACTIONS(474), 1,
      anon_sym_SQUOTE,
    STATE(212), 1,
      sym__expression,
    ACTIONS(476), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(208), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(470), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(231), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [6053] = 12,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_func,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
    ACTIONS(466), 1,
      anon_sym_LBRACE,
    ACTIONS(468), 1,
      anon_sym_LBRACK,
    ACTIONS(472), 1,
      anon_sym_DQUOTE,
    ACTIONS(474), 1,
      anon_sym_SQUOTE,
    STATE(211), 1,
      sym__expression,
    ACTIONS(476), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(208), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(470), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(231), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [6113] = 12,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_func,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    STATE(268), 1,
      sym__expression,
    ACTIONS(206), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(184), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(200), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(155), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [6173] = 12,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_func,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    STATE(265), 1,
      sym__expression,
    ACTIONS(206), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(184), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(200), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(155), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [6233] = 12,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_func,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    STATE(257), 1,
      sym__expression,
    ACTIONS(206), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(184), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(200), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(155), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [6293] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(324), 25,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [6335] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(328), 25,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [6377] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(312), 25,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [6419] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(332), 25,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [6461] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(304), 25,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [6503] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(348), 25,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [6545] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(286), 25,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [6587] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(336), 25,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [6629] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(340), 25,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [6671] = 12,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_func,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    STATE(262), 1,
      sym__expression,
    ACTIONS(206), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(184), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(200), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(155), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [6731] = 12,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_func,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    STATE(87), 1,
      sym__expression,
    ACTIONS(206), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(184), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(200), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(155), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [6791] = 12,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_func,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    STATE(85), 1,
      sym__expression,
    ACTIONS(206), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(184), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(200), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(155), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [6851] = 12,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_func,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    STATE(264), 1,
      sym__expression,
    ACTIONS(206), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(184), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(200), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(155), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [6911] = 12,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_func,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    STATE(84), 1,
      sym__expression,
    ACTIONS(206), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(184), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(200), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(155), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [6971] = 12,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_func,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    STATE(255), 1,
      sym__expression,
    ACTIONS(206), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(184), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(200), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(155), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [7031] = 12,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_func,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    STATE(256), 1,
      sym__expression,
    ACTIONS(206), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(184), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(200), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(155), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [7091] = 12,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_func,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    STATE(83), 1,
      sym__expression,
    ACTIONS(206), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(184), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(200), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(155), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [7151] = 12,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_func,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    STATE(179), 1,
      sym__expression,
    ACTIONS(206), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(184), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(200), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(155), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [7211] = 12,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_func,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    STATE(82), 1,
      sym__expression,
    ACTIONS(206), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(184), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(200), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(155), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [7271] = 12,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_func,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
    ACTIONS(466), 1,
      anon_sym_LBRACE,
    ACTIONS(468), 1,
      anon_sym_LBRACK,
    ACTIONS(472), 1,
      anon_sym_DQUOTE,
    ACTIONS(474), 1,
      anon_sym_SQUOTE,
    STATE(208), 1,
      sym__expression,
    ACTIONS(476), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(208), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(470), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(231), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [7331] = 12,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_func,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
    ACTIONS(466), 1,
      anon_sym_LBRACE,
    ACTIONS(468), 1,
      anon_sym_LBRACK,
    ACTIONS(472), 1,
      anon_sym_DQUOTE,
    ACTIONS(474), 1,
      anon_sym_SQUOTE,
    STATE(217), 1,
      sym__expression,
    ACTIONS(476), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(208), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(470), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(231), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [7391] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(318), 25,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [7433] = 12,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_func,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
    ACTIONS(466), 1,
      anon_sym_LBRACE,
    ACTIONS(468), 1,
      anon_sym_LBRACK,
    ACTIONS(472), 1,
      anon_sym_DQUOTE,
    ACTIONS(474), 1,
      anon_sym_SQUOTE,
    STATE(218), 1,
      sym__expression,
    ACTIONS(476), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(208), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(470), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(231), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [7493] = 12,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_func,
    STATE(33), 1,
      sym__expression,
    ACTIONS(47), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(7), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(41), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(55), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [7553] = 12,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_func,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    STATE(259), 1,
      sym__expression,
    ACTIONS(206), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(184), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(200), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(155), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [7613] = 12,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_func,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    ACTIONS(480), 1,
      anon_sym_LBRACE,
    STATE(261), 1,
      sym__expression,
    ACTIONS(206), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(184), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(200), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(155), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [7673] = 12,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_func,
    ACTIONS(154), 1,
      anon_sym_LPAREN,
    ACTIONS(162), 1,
      anon_sym_LBRACK,
    ACTIONS(166), 1,
      anon_sym_DQUOTE,
    ACTIONS(168), 1,
      anon_sym_SQUOTE,
    ACTIONS(478), 1,
      anon_sym_LBRACE,
    STATE(173), 1,
      sym__expression,
    ACTIONS(170), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(148), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(164), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(200), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [7733] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(352), 25,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [7775] = 12,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_func,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    STATE(273), 1,
      sym__expression,
    ACTIONS(206), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(184), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(200), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(155), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [7835] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(316), 25,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [7877] = 12,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_func,
    ACTIONS(154), 1,
      anon_sym_LPAREN,
    ACTIONS(162), 1,
      anon_sym_LBRACK,
    ACTIONS(166), 1,
      anon_sym_DQUOTE,
    ACTIONS(168), 1,
      anon_sym_SQUOTE,
    ACTIONS(478), 1,
      anon_sym_LBRACE,
    STATE(185), 1,
      sym__expression,
    ACTIONS(170), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(148), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(164), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(200), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [7937] = 12,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_func,
    ACTIONS(154), 1,
      anon_sym_LPAREN,
    ACTIONS(162), 1,
      anon_sym_LBRACK,
    ACTIONS(166), 1,
      anon_sym_DQUOTE,
    ACTIONS(168), 1,
      anon_sym_SQUOTE,
    ACTIONS(478), 1,
      anon_sym_LBRACE,
    STATE(174), 1,
      sym__expression,
    ACTIONS(170), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(148), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(164), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(200), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [7997] = 12,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_func,
    ACTIONS(154), 1,
      anon_sym_LPAREN,
    ACTIONS(162), 1,
      anon_sym_LBRACK,
    ACTIONS(166), 1,
      anon_sym_DQUOTE,
    ACTIONS(168), 1,
      anon_sym_SQUOTE,
    ACTIONS(478), 1,
      anon_sym_LBRACE,
    STATE(183), 1,
      sym__expression,
    ACTIONS(170), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(148), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(164), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(200), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [8057] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(356), 25,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [8099] = 12,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_func,
    STATE(23), 1,
      sym__expression,
    ACTIONS(47), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(7), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(41), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(55), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [8159] = 12,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_func,
    ACTIONS(154), 1,
      anon_sym_LPAREN,
    ACTIONS(162), 1,
      anon_sym_LBRACK,
    ACTIONS(166), 1,
      anon_sym_DQUOTE,
    ACTIONS(168), 1,
      anon_sym_SQUOTE,
    ACTIONS(478), 1,
      anon_sym_LBRACE,
    STATE(184), 1,
      sym__expression,
    ACTIONS(170), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(148), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(164), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(200), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [8219] = 12,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_func,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
    ACTIONS(466), 1,
      anon_sym_LBRACE,
    ACTIONS(468), 1,
      anon_sym_LBRACK,
    ACTIONS(472), 1,
      anon_sym_DQUOTE,
    ACTIONS(474), 1,
      anon_sym_SQUOTE,
    STATE(221), 1,
      sym__expression,
    ACTIONS(476), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(208), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(470), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(231), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [8279] = 12,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_func,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
    ACTIONS(466), 1,
      anon_sym_LBRACE,
    ACTIONS(468), 1,
      anon_sym_LBRACK,
    ACTIONS(472), 1,
      anon_sym_DQUOTE,
    ACTIONS(474), 1,
      anon_sym_SQUOTE,
    STATE(215), 1,
      sym__expression,
    ACTIONS(476), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(208), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(470), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(231), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [8339] = 12,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_func,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    STATE(269), 1,
      sym__expression,
    ACTIONS(206), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(184), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(200), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(155), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [8399] = 12,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_func,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    STATE(270), 1,
      sym__expression,
    ACTIONS(206), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(184), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(200), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(155), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [8459] = 12,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_func,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    STATE(278), 1,
      sym__expression,
    ACTIONS(206), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(184), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(200), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(155), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [8519] = 12,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_func,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
    ACTIONS(466), 1,
      anon_sym_LBRACE,
    ACTIONS(468), 1,
      anon_sym_LBRACK,
    ACTIONS(472), 1,
      anon_sym_DQUOTE,
    ACTIONS(474), 1,
      anon_sym_SQUOTE,
    STATE(209), 1,
      sym__expression,
    ACTIONS(476), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(208), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(470), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(231), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [8579] = 12,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_func,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    STATE(275), 1,
      sym__expression,
    ACTIONS(206), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(184), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(200), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(155), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [8639] = 12,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_func,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    STATE(274), 1,
      sym__expression,
    ACTIONS(206), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(184), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(200), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(155), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [8699] = 12,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_func,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    STATE(266), 1,
      sym__expression,
    ACTIONS(206), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(184), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(200), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(155), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [8759] = 12,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_func,
    STATE(26), 1,
      sym__expression,
    ACTIONS(47), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(7), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(41), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(55), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [8819] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(242), 25,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [8861] = 12,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_func,
    ACTIONS(154), 1,
      anon_sym_LPAREN,
    ACTIONS(162), 1,
      anon_sym_LBRACK,
    ACTIONS(166), 1,
      anon_sym_DQUOTE,
    ACTIONS(168), 1,
      anon_sym_SQUOTE,
    ACTIONS(478), 1,
      anon_sym_LBRACE,
    STATE(175), 1,
      sym__expression,
    ACTIONS(170), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(148), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(164), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(200), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [8921] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 9,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(260), 25,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [8963] = 12,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_func,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    STATE(271), 1,
      sym__expression,
    ACTIONS(206), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(184), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(200), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(155), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [9023] = 12,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_func,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
    ACTIONS(466), 1,
      anon_sym_LBRACE,
    ACTIONS(468), 1,
      anon_sym_LBRACK,
    ACTIONS(472), 1,
      anon_sym_DQUOTE,
    ACTIONS(474), 1,
      anon_sym_SQUOTE,
    STATE(214), 1,
      sym__expression,
    ACTIONS(476), 2,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(208), 5,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
    ACTIONS(470), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
    STATE(231), 13,
      sym_selector_expression,
      sym_index_expression,
      sym_parenthesized_expression,
      sym_call_expression,
      sym__complex_literal,
      sym_list_literal,
      sym_map_or_set_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_conditional_expression,
      sym_func_literal,
      sym_string,
      sym_string_template,
  [9083] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_EQ,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(418), 1,
      anon_sym_DOT,
    ACTIONS(420), 1,
      anon_sym_LBRACK,
    ACTIONS(432), 1,
      anon_sym_AMP_AMP,
    ACTIONS(436), 1,
      anon_sym_QMARK,
    STATE(186), 1,
      sym_argument_list,
    ACTIONS(424), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(430), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(422), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(426), 4,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(428), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(228), 11,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PIPE_PIPE,
  [9146] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(418), 1,
      anon_sym_DOT,
    ACTIONS(420), 1,
      anon_sym_LBRACK,
    STATE(186), 1,
      sym_argument_list,
    ACTIONS(424), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(230), 3,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(422), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(426), 4,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(228), 17,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [9201] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(418), 1,
      anon_sym_DOT,
    ACTIONS(420), 1,
      anon_sym_LBRACK,
    STATE(186), 1,
      sym_argument_list,
    ACTIONS(240), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(238), 21,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [9250] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 1,
      anon_sym_EQ,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(408), 1,
      anon_sym_COMMA,
    ACTIONS(414), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(416), 1,
      anon_sym_DASH_DASH,
    ACTIONS(418), 1,
      anon_sym_DOT,
    ACTIONS(420), 1,
      anon_sym_LBRACK,
    ACTIONS(432), 1,
      anon_sym_AMP_AMP,
    ACTIONS(434), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(436), 1,
      anon_sym_QMARK,
    STATE(186), 1,
      sym_argument_list,
    STATE(285), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(424), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(430), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(422), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(426), 4,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(428), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(412), 5,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
  [9325] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_EQ,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(418), 1,
      anon_sym_DOT,
    ACTIONS(420), 1,
      anon_sym_LBRACK,
    ACTIONS(436), 1,
      anon_sym_QMARK,
    STATE(186), 1,
      sym_argument_list,
    ACTIONS(424), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(430), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(422), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(426), 4,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(428), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(248), 12,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9386] = 3,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(63), 15,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(482), 18,
      anon_sym_func,
      anon_sym_const,
      anon_sym_var,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_go,
      anon_sym_defer,
      anon_sym_import,
      anon_sym_from,
      anon_sym_if,
      anon_sym_for,
      anon_sym_switch,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
  [9427] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
    ACTIONS(444), 1,
      anon_sym_DOT,
    ACTIONS(446), 1,
      anon_sym_LBRACK,
    ACTIONS(458), 1,
      anon_sym_QMARK,
    ACTIONS(460), 1,
      anon_sym_AMP_AMP,
    ACTIONS(488), 1,
      anon_sym_PIPE_PIPE,
    STATE(130), 1,
      sym_argument_list,
    ACTIONS(448), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(456), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(486), 2,
      anon_sym_EQ,
      anon_sym_COLON,
    ACTIONS(452), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(450), 4,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(454), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(484), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_RBRACK,
  [9492] = 3,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(260), 15,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(262), 18,
      anon_sym_func,
      anon_sym_const,
      anon_sym_var,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_go,
      anon_sym_defer,
      anon_sym_import,
      anon_sym_from,
      anon_sym_if,
      anon_sym_for,
      anon_sym_switch,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
  [9533] = 3,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(242), 15,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(244), 18,
      anon_sym_func,
      anon_sym_const,
      anon_sym_var,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_go,
      anon_sym_defer,
      anon_sym_import,
      anon_sym_from,
      anon_sym_if,
      anon_sym_for,
      anon_sym_switch,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
  [9574] = 3,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(490), 15,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_LT_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_string_backtick,
      sym_float_literal,
    ACTIONS(492), 18,
      anon_sym_func,
      anon_sym_const,
      anon_sym_var,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_return,
      anon_sym_go,
      anon_sym_defer,
      anon_sym_import,
      anon_sym_from,
      anon_sym_if,
      anon_sym_for,
      anon_sym_switch,
      sym_identifier,
      sym_int_literal,
      sym_nil,
      sym_true,
      sym_false,
  [9615] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(418), 1,
      anon_sym_DOT,
    ACTIONS(420), 1,
      anon_sym_LBRACK,
    STATE(186), 1,
      sym_argument_list,
    ACTIONS(230), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(228), 21,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [9664] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(418), 1,
      anon_sym_DOT,
    ACTIONS(420), 1,
      anon_sym_LBRACK,
    STATE(186), 1,
      sym_argument_list,
    ACTIONS(424), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(426), 4,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(230), 6,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(228), 17,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [9717] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_EQ,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(418), 1,
      anon_sym_DOT,
    ACTIONS(420), 1,
      anon_sym_LBRACK,
    ACTIONS(436), 1,
      anon_sym_QMARK,
    STATE(186), 1,
      sym_argument_list,
    ACTIONS(424), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(430), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(422), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(426), 4,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(428), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(228), 12,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9778] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(340), 24,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [9818] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(294), 24,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [9858] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(260), 24,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [9898] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(324), 24,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [9938] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(242), 24,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [9978] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(328), 24,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [10018] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(312), 24,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [10058] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(332), 24,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [10098] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(290), 24,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [10138] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(304), 24,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [10178] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(300), 24,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [10218] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(348), 24,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [10258] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(286), 24,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [10298] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(336), 24,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [10338] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(356), 24,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [10378] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(344), 24,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [10418] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(352), 24,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [10458] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(316), 24,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [10498] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(360), 24,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [10538] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(308), 24,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [10578] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 8,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(318), 24,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [10618] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_LF,
    ACTIONS(496), 5,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
    ACTIONS(298), 22,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [10656] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_LF,
    ACTIONS(498), 1,
      anon_sym_LPAREN,
    ACTIONS(500), 1,
      anon_sym_DOT,
    ACTIONS(502), 1,
      anon_sym_LBRACK,
    STATE(242), 1,
      sym_argument_list,
    ACTIONS(504), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(230), 17,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [10702] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_LF,
    ACTIONS(498), 1,
      anon_sym_LPAREN,
    ACTIONS(500), 1,
      anon_sym_DOT,
    ACTIONS(502), 1,
      anon_sym_LBRACK,
    STATE(242), 1,
      sym_argument_list,
    ACTIONS(240), 23,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [10746] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_LPAREN,
    ACTIONS(500), 1,
      anon_sym_DOT,
    ACTIONS(502), 1,
      anon_sym_LBRACK,
    ACTIONS(506), 1,
      anon_sym_LF,
    ACTIONS(514), 1,
      anon_sym_AMP_AMP,
    ACTIONS(516), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(518), 1,
      anon_sym_QMARK,
    STATE(242), 1,
      sym_argument_list,
    ACTIONS(510), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(508), 5,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
    ACTIONS(504), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(512), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [10802] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_LPAREN,
    ACTIONS(500), 1,
      anon_sym_DOT,
    ACTIONS(502), 1,
      anon_sym_LBRACK,
    ACTIONS(514), 1,
      anon_sym_AMP_AMP,
    ACTIONS(516), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(518), 1,
      anon_sym_QMARK,
    ACTIONS(520), 1,
      anon_sym_LF,
    STATE(242), 1,
      sym_argument_list,
    ACTIONS(510), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(522), 5,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
    ACTIONS(504), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(512), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [10858] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_LPAREN,
    ACTIONS(500), 1,
      anon_sym_DOT,
    ACTIONS(502), 1,
      anon_sym_LBRACK,
    ACTIONS(514), 1,
      anon_sym_AMP_AMP,
    ACTIONS(516), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(518), 1,
      anon_sym_QMARK,
    ACTIONS(524), 1,
      anon_sym_LF,
    STATE(242), 1,
      sym_argument_list,
    ACTIONS(510), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(526), 5,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
    ACTIONS(504), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(512), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [10914] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_LPAREN,
    ACTIONS(500), 1,
      anon_sym_DOT,
    ACTIONS(502), 1,
      anon_sym_LBRACK,
    ACTIONS(514), 1,
      anon_sym_AMP_AMP,
    ACTIONS(516), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(518), 1,
      anon_sym_QMARK,
    ACTIONS(528), 1,
      anon_sym_LF,
    STATE(242), 1,
      sym_argument_list,
    ACTIONS(510), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(530), 5,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
    ACTIONS(504), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(512), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [10970] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_LF,
    ACTIONS(498), 1,
      anon_sym_LPAREN,
    ACTIONS(500), 1,
      anon_sym_DOT,
    ACTIONS(502), 1,
      anon_sym_LBRACK,
    ACTIONS(518), 1,
      anon_sym_QMARK,
    STATE(242), 1,
      sym_argument_list,
    ACTIONS(510), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(504), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(512), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(250), 7,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11022] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_LF,
    ACTIONS(498), 1,
      anon_sym_LPAREN,
    ACTIONS(500), 1,
      anon_sym_DOT,
    ACTIONS(502), 1,
      anon_sym_LBRACK,
    ACTIONS(514), 1,
      anon_sym_AMP_AMP,
    ACTIONS(518), 1,
      anon_sym_QMARK,
    STATE(242), 1,
      sym_argument_list,
    ACTIONS(510), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(230), 6,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
      anon_sym_PIPE_PIPE,
    ACTIONS(504), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(512), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [11076] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_LPAREN,
    ACTIONS(500), 1,
      anon_sym_DOT,
    ACTIONS(502), 1,
      anon_sym_LBRACK,
    ACTIONS(514), 1,
      anon_sym_AMP_AMP,
    ACTIONS(516), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(518), 1,
      anon_sym_QMARK,
    ACTIONS(532), 1,
      anon_sym_LF,
    STATE(242), 1,
      sym_argument_list,
    ACTIONS(510), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(534), 5,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
    ACTIONS(504), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(512), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [11132] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_LF,
    ACTIONS(498), 1,
      anon_sym_LPAREN,
    ACTIONS(500), 1,
      anon_sym_DOT,
    ACTIONS(502), 1,
      anon_sym_LBRACK,
    STATE(242), 1,
      sym_argument_list,
    ACTIONS(230), 23,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [11176] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_LF,
    ACTIONS(498), 1,
      anon_sym_LPAREN,
    ACTIONS(500), 1,
      anon_sym_DOT,
    ACTIONS(502), 1,
      anon_sym_LBRACK,
    STATE(242), 1,
      sym_argument_list,
    ACTIONS(510), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(504), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(230), 14,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [11224] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_LPAREN,
    ACTIONS(500), 1,
      anon_sym_DOT,
    ACTIONS(502), 1,
      anon_sym_LBRACK,
    ACTIONS(514), 1,
      anon_sym_AMP_AMP,
    ACTIONS(516), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(518), 1,
      anon_sym_QMARK,
    ACTIONS(536), 1,
      anon_sym_LF,
    STATE(242), 1,
      sym_argument_list,
    ACTIONS(510), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(538), 5,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
    ACTIONS(504), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(512), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [11280] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_LPAREN,
    ACTIONS(500), 1,
      anon_sym_DOT,
    ACTIONS(502), 1,
      anon_sym_LBRACK,
    ACTIONS(514), 1,
      anon_sym_AMP_AMP,
    ACTIONS(516), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(518), 1,
      anon_sym_QMARK,
    ACTIONS(540), 1,
      anon_sym_LF,
    STATE(242), 1,
      sym_argument_list,
    ACTIONS(510), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(542), 5,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
    ACTIONS(504), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(512), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [11336] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_LF,
    ACTIONS(498), 1,
      anon_sym_LPAREN,
    ACTIONS(500), 1,
      anon_sym_DOT,
    ACTIONS(502), 1,
      anon_sym_LBRACK,
    ACTIONS(518), 1,
      anon_sym_QMARK,
    STATE(242), 1,
      sym_argument_list,
    ACTIONS(510), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
    ACTIONS(504), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(512), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(230), 7,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11388] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_LF,
    ACTIONS(306), 26,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_default,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [11423] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_LF,
    ACTIONS(338), 26,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_default,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [11458] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_LF,
    ACTIONS(288), 26,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_default,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [11493] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_LF,
    ACTIONS(310), 26,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_default,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [11528] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_LF,
    ACTIONS(334), 26,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_default,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [11563] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_LF,
    ACTIONS(354), 26,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_default,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [11598] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_LF,
    ACTIONS(320), 26,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_default,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [11633] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_LF,
    ACTIONS(314), 26,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_default,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [11668] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_LF,
    ACTIONS(298), 26,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_default,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [11703] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_LF,
    ACTIONS(358), 26,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_default,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [11738] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_LF,
    ACTIONS(330), 26,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_default,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [11773] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      anon_sym_LF,
    ACTIONS(326), 26,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_default,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [11808] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_LF,
    ACTIONS(262), 26,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_default,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [11843] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_LF,
    ACTIONS(302), 26,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_default,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [11878] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_LF,
    ACTIONS(346), 26,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_default,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [11913] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_LF,
    ACTIONS(292), 26,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_default,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [11948] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_LF,
    ACTIONS(244), 26,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_default,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [11983] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      anon_sym_LF,
    ACTIONS(350), 26,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_default,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [12018] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_LF,
    ACTIONS(296), 26,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_default,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [12053] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_LF,
    ACTIONS(362), 26,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_default,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [12088] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_LF,
    ACTIONS(342), 26,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_case,
      anon_sym_default,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK,
  [12123] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_EQ,
    ACTIONS(408), 1,
      anon_sym_COMMA,
    ACTIONS(412), 1,
      anon_sym_COLON,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
    ACTIONS(444), 1,
      anon_sym_DOT,
    ACTIONS(446), 1,
      anon_sym_LBRACK,
    ACTIONS(448), 1,
      anon_sym_STAR,
    ACTIONS(452), 1,
      anon_sym_PIPE,
    ACTIONS(458), 1,
      anon_sym_QMARK,
    ACTIONS(460), 1,
      anon_sym_AMP_AMP,
    ACTIONS(488), 1,
      anon_sym_PIPE_PIPE,
    STATE(130), 1,
      sym_argument_list,
    STATE(285), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(456), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(544), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(454), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(450), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12187] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_COMMA,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
    ACTIONS(444), 1,
      anon_sym_DOT,
    ACTIONS(446), 1,
      anon_sym_LBRACK,
    ACTIONS(448), 1,
      anon_sym_STAR,
    ACTIONS(452), 1,
      anon_sym_PIPE,
    ACTIONS(458), 1,
      anon_sym_QMARK,
    ACTIONS(460), 1,
      anon_sym_AMP_AMP,
    ACTIONS(488), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(546), 1,
      anon_sym_RBRACE,
    ACTIONS(548), 1,
      anon_sym_COLON,
    STATE(130), 1,
      sym_argument_list,
    STATE(345), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(456), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(544), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(454), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(450), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12251] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_COMMA,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
    ACTIONS(444), 1,
      anon_sym_DOT,
    ACTIONS(446), 1,
      anon_sym_LBRACK,
    ACTIONS(448), 1,
      anon_sym_STAR,
    ACTIONS(452), 1,
      anon_sym_PIPE,
    ACTIONS(458), 1,
      anon_sym_QMARK,
    ACTIONS(460), 1,
      anon_sym_AMP_AMP,
    ACTIONS(488), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(550), 1,
      anon_sym_RBRACK,
    STATE(130), 1,
      sym_argument_list,
    STATE(337), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(456), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(544), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(454), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(450), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12312] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
    ACTIONS(444), 1,
      anon_sym_DOT,
    ACTIONS(446), 1,
      anon_sym_LBRACK,
    ACTIONS(448), 1,
      anon_sym_STAR,
    ACTIONS(452), 1,
      anon_sym_PIPE,
    ACTIONS(458), 1,
      anon_sym_QMARK,
    ACTIONS(460), 1,
      anon_sym_AMP_AMP,
    ACTIONS(488), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(552), 1,
      anon_sym_COMMA,
    ACTIONS(554), 1,
      anon_sym_RPAREN,
    STATE(130), 1,
      sym_argument_list,
    STATE(336), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(456), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(544), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(454), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(450), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12373] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_COMMA,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
    ACTIONS(444), 1,
      anon_sym_DOT,
    ACTIONS(446), 1,
      anon_sym_LBRACK,
    ACTIONS(448), 1,
      anon_sym_STAR,
    ACTIONS(452), 1,
      anon_sym_PIPE,
    ACTIONS(458), 1,
      anon_sym_QMARK,
    ACTIONS(460), 1,
      anon_sym_AMP_AMP,
    ACTIONS(488), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(556), 1,
      anon_sym_RBRACK,
    STATE(130), 1,
      sym_argument_list,
    STATE(358), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(456), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(544), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(454), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(450), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12434] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_COMMA,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
    ACTIONS(444), 1,
      anon_sym_DOT,
    ACTIONS(446), 1,
      anon_sym_LBRACK,
    ACTIONS(448), 1,
      anon_sym_STAR,
    ACTIONS(452), 1,
      anon_sym_PIPE,
    ACTIONS(458), 1,
      anon_sym_QMARK,
    ACTIONS(460), 1,
      anon_sym_AMP_AMP,
    ACTIONS(488), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(558), 1,
      anon_sym_RBRACK,
    STATE(130), 1,
      sym_argument_list,
    STATE(343), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(456), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(544), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(454), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(450), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12495] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
    ACTIONS(444), 1,
      anon_sym_DOT,
    ACTIONS(446), 1,
      anon_sym_LBRACK,
    ACTIONS(448), 1,
      anon_sym_STAR,
    ACTIONS(452), 1,
      anon_sym_PIPE,
    ACTIONS(458), 1,
      anon_sym_QMARK,
    ACTIONS(460), 1,
      anon_sym_AMP_AMP,
    ACTIONS(488), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(560), 1,
      anon_sym_COMMA,
    ACTIONS(562), 1,
      anon_sym_RPAREN,
    STATE(130), 1,
      sym_argument_list,
    STATE(351), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(456), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(544), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(454), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(450), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12556] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
    ACTIONS(444), 1,
      anon_sym_DOT,
    ACTIONS(446), 1,
      anon_sym_LBRACK,
    ACTIONS(448), 1,
      anon_sym_STAR,
    ACTIONS(452), 1,
      anon_sym_PIPE,
    ACTIONS(458), 1,
      anon_sym_QMARK,
    ACTIONS(460), 1,
      anon_sym_AMP_AMP,
    ACTIONS(488), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(564), 1,
      anon_sym_COMMA,
    ACTIONS(566), 1,
      anon_sym_RPAREN,
    STATE(130), 1,
      sym_argument_list,
    STATE(348), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(456), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(544), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(454), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(450), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12617] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_COMMA,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
    ACTIONS(444), 1,
      anon_sym_DOT,
    ACTIONS(446), 1,
      anon_sym_LBRACK,
    ACTIONS(448), 1,
      anon_sym_STAR,
    ACTIONS(452), 1,
      anon_sym_PIPE,
    ACTIONS(458), 1,
      anon_sym_QMARK,
    ACTIONS(460), 1,
      anon_sym_AMP_AMP,
    ACTIONS(488), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(568), 1,
      anon_sym_RBRACK,
    STATE(130), 1,
      sym_argument_list,
    STATE(352), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(456), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(544), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(454), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(450), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12678] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
    ACTIONS(444), 1,
      anon_sym_DOT,
    ACTIONS(446), 1,
      anon_sym_LBRACK,
    ACTIONS(448), 1,
      anon_sym_STAR,
    ACTIONS(452), 1,
      anon_sym_PIPE,
    ACTIONS(458), 1,
      anon_sym_QMARK,
    ACTIONS(460), 1,
      anon_sym_AMP_AMP,
    ACTIONS(488), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(570), 1,
      anon_sym_COMMA,
    ACTIONS(572), 1,
      anon_sym_RPAREN,
    STATE(130), 1,
      sym_argument_list,
    STATE(347), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(456), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(544), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(454), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(450), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12739] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
    ACTIONS(444), 1,
      anon_sym_DOT,
    ACTIONS(446), 1,
      anon_sym_LBRACK,
    ACTIONS(448), 1,
      anon_sym_STAR,
    ACTIONS(452), 1,
      anon_sym_PIPE,
    ACTIONS(458), 1,
      anon_sym_QMARK,
    ACTIONS(460), 1,
      anon_sym_AMP_AMP,
    ACTIONS(488), 1,
      anon_sym_PIPE_PIPE,
    STATE(130), 1,
      sym_argument_list,
    ACTIONS(456), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(536), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    ACTIONS(544), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(454), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(450), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12795] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
    ACTIONS(444), 1,
      anon_sym_DOT,
    ACTIONS(446), 1,
      anon_sym_LBRACK,
    ACTIONS(448), 1,
      anon_sym_STAR,
    ACTIONS(452), 1,
      anon_sym_PIPE,
    ACTIONS(458), 1,
      anon_sym_QMARK,
    ACTIONS(460), 1,
      anon_sym_AMP_AMP,
    ACTIONS(488), 1,
      anon_sym_PIPE_PIPE,
    STATE(130), 1,
      sym_argument_list,
    ACTIONS(456), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(540), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    ACTIONS(544), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(454), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(450), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12851] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
    ACTIONS(444), 1,
      anon_sym_DOT,
    ACTIONS(446), 1,
      anon_sym_LBRACK,
    ACTIONS(448), 1,
      anon_sym_STAR,
    ACTIONS(452), 1,
      anon_sym_PIPE,
    ACTIONS(458), 1,
      anon_sym_QMARK,
    ACTIONS(460), 1,
      anon_sym_AMP_AMP,
    ACTIONS(488), 1,
      anon_sym_PIPE_PIPE,
    STATE(130), 1,
      sym_argument_list,
    ACTIONS(456), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(532), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    ACTIONS(544), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(454), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(450), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12907] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
    ACTIONS(444), 1,
      anon_sym_DOT,
    ACTIONS(446), 1,
      anon_sym_LBRACK,
    ACTIONS(448), 1,
      anon_sym_STAR,
    ACTIONS(452), 1,
      anon_sym_PIPE,
    ACTIONS(458), 1,
      anon_sym_QMARK,
    ACTIONS(460), 1,
      anon_sym_AMP_AMP,
    ACTIONS(488), 1,
      anon_sym_PIPE_PIPE,
    STATE(130), 1,
      sym_argument_list,
    ACTIONS(456), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(528), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    ACTIONS(544), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(454), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(450), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [12963] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_LBRACE,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
    ACTIONS(444), 1,
      anon_sym_DOT,
    ACTIONS(446), 1,
      anon_sym_LBRACK,
    ACTIONS(448), 1,
      anon_sym_STAR,
    ACTIONS(452), 1,
      anon_sym_PIPE,
    ACTIONS(458), 1,
      anon_sym_QMARK,
    ACTIONS(460), 1,
      anon_sym_AMP_AMP,
    ACTIONS(488), 1,
      anon_sym_PIPE_PIPE,
    STATE(130), 1,
      sym_argument_list,
    STATE(296), 1,
      sym_block,
    ACTIONS(456), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(544), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(454), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(450), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [13021] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
    ACTIONS(444), 1,
      anon_sym_DOT,
    ACTIONS(446), 1,
      anon_sym_LBRACK,
    ACTIONS(448), 1,
      anon_sym_STAR,
    ACTIONS(452), 1,
      anon_sym_PIPE,
    ACTIONS(458), 1,
      anon_sym_QMARK,
    ACTIONS(460), 1,
      anon_sym_AMP_AMP,
    ACTIONS(488), 1,
      anon_sym_PIPE_PIPE,
    STATE(130), 1,
      sym_argument_list,
    ACTIONS(456), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(544), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(574), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(454), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(450), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [13077] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
    ACTIONS(444), 1,
      anon_sym_DOT,
    ACTIONS(446), 1,
      anon_sym_LBRACK,
    ACTIONS(448), 1,
      anon_sym_STAR,
    ACTIONS(452), 1,
      anon_sym_PIPE,
    ACTIONS(458), 1,
      anon_sym_QMARK,
    ACTIONS(460), 1,
      anon_sym_AMP_AMP,
    ACTIONS(488), 1,
      anon_sym_PIPE_PIPE,
    STATE(130), 1,
      sym_argument_list,
    ACTIONS(456), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(544), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(576), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(454), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(450), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [13133] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
    ACTIONS(444), 1,
      anon_sym_DOT,
    ACTIONS(446), 1,
      anon_sym_LBRACK,
    ACTIONS(448), 1,
      anon_sym_STAR,
    ACTIONS(452), 1,
      anon_sym_PIPE,
    ACTIONS(458), 1,
      anon_sym_QMARK,
    ACTIONS(460), 1,
      anon_sym_AMP_AMP,
    ACTIONS(488), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(578), 1,
      anon_sym_LBRACE,
    STATE(130), 1,
      sym_argument_list,
    ACTIONS(456), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(544), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(454), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(450), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [13188] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
    ACTIONS(444), 1,
      anon_sym_DOT,
    ACTIONS(446), 1,
      anon_sym_LBRACK,
    ACTIONS(448), 1,
      anon_sym_STAR,
    ACTIONS(452), 1,
      anon_sym_PIPE,
    ACTIONS(458), 1,
      anon_sym_QMARK,
    ACTIONS(460), 1,
      anon_sym_AMP_AMP,
    ACTIONS(488), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(580), 1,
      anon_sym_LBRACE,
    STATE(130), 1,
      sym_argument_list,
    ACTIONS(456), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(544), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(454), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(450), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [13243] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
    ACTIONS(444), 1,
      anon_sym_DOT,
    ACTIONS(446), 1,
      anon_sym_LBRACK,
    ACTIONS(448), 1,
      anon_sym_STAR,
    ACTIONS(452), 1,
      anon_sym_PIPE,
    ACTIONS(458), 1,
      anon_sym_QMARK,
    ACTIONS(460), 1,
      anon_sym_AMP_AMP,
    ACTIONS(488), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(582), 1,
      anon_sym_RPAREN,
    STATE(130), 1,
      sym_argument_list,
    ACTIONS(456), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(544), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(454), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(450), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [13298] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
    ACTIONS(444), 1,
      anon_sym_DOT,
    ACTIONS(446), 1,
      anon_sym_LBRACK,
    ACTIONS(448), 1,
      anon_sym_STAR,
    ACTIONS(452), 1,
      anon_sym_PIPE,
    ACTIONS(458), 1,
      anon_sym_QMARK,
    ACTIONS(460), 1,
      anon_sym_AMP_AMP,
    ACTIONS(488), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(584), 1,
      anon_sym_COLON,
    STATE(130), 1,
      sym_argument_list,
    ACTIONS(456), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(544), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(454), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(450), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [13353] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
    ACTIONS(444), 1,
      anon_sym_DOT,
    ACTIONS(446), 1,
      anon_sym_LBRACK,
    ACTIONS(448), 1,
      anon_sym_STAR,
    ACTIONS(452), 1,
      anon_sym_PIPE,
    ACTIONS(458), 1,
      anon_sym_QMARK,
    ACTIONS(460), 1,
      anon_sym_AMP_AMP,
    ACTIONS(488), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(586), 1,
      anon_sym_RBRACK,
    STATE(130), 1,
      sym_argument_list,
    ACTIONS(456), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(544), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(454), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(450), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [13408] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
    ACTIONS(444), 1,
      anon_sym_DOT,
    ACTIONS(446), 1,
      anon_sym_LBRACK,
    ACTIONS(448), 1,
      anon_sym_STAR,
    ACTIONS(452), 1,
      anon_sym_PIPE,
    ACTIONS(458), 1,
      anon_sym_QMARK,
    ACTIONS(460), 1,
      anon_sym_AMP_AMP,
    ACTIONS(488), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(588), 1,
      anon_sym_RPAREN,
    STATE(130), 1,
      sym_argument_list,
    ACTIONS(456), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(544), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(454), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(450), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [13463] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
    ACTIONS(444), 1,
      anon_sym_DOT,
    ACTIONS(446), 1,
      anon_sym_LBRACK,
    ACTIONS(448), 1,
      anon_sym_STAR,
    ACTIONS(452), 1,
      anon_sym_PIPE,
    ACTIONS(458), 1,
      anon_sym_QMARK,
    ACTIONS(460), 1,
      anon_sym_AMP_AMP,
    ACTIONS(488), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(590), 1,
      anon_sym_RPAREN,
    STATE(130), 1,
      sym_argument_list,
    ACTIONS(456), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(544), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(454), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(450), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [13518] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
    ACTIONS(444), 1,
      anon_sym_DOT,
    ACTIONS(446), 1,
      anon_sym_LBRACK,
    ACTIONS(448), 1,
      anon_sym_STAR,
    ACTIONS(452), 1,
      anon_sym_PIPE,
    ACTIONS(458), 1,
      anon_sym_QMARK,
    ACTIONS(460), 1,
      anon_sym_AMP_AMP,
    ACTIONS(488), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(592), 1,
      anon_sym_COLON,
    STATE(130), 1,
      sym_argument_list,
    ACTIONS(456), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(544), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(454), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(450), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [13573] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
    ACTIONS(444), 1,
      anon_sym_DOT,
    ACTIONS(446), 1,
      anon_sym_LBRACK,
    ACTIONS(448), 1,
      anon_sym_STAR,
    ACTIONS(452), 1,
      anon_sym_PIPE,
    ACTIONS(458), 1,
      anon_sym_QMARK,
    ACTIONS(460), 1,
      anon_sym_AMP_AMP,
    ACTIONS(488), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(594), 1,
      anon_sym_RBRACK,
    STATE(130), 1,
      sym_argument_list,
    ACTIONS(456), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(544), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(454), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(450), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [13628] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
    ACTIONS(444), 1,
      anon_sym_DOT,
    ACTIONS(446), 1,
      anon_sym_LBRACK,
    ACTIONS(448), 1,
      anon_sym_STAR,
    ACTIONS(452), 1,
      anon_sym_PIPE,
    ACTIONS(458), 1,
      anon_sym_QMARK,
    ACTIONS(460), 1,
      anon_sym_AMP_AMP,
    ACTIONS(488), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(596), 1,
      anon_sym_COLON,
    STATE(130), 1,
      sym_argument_list,
    ACTIONS(456), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(544), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(454), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(450), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [13683] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
    ACTIONS(444), 1,
      anon_sym_DOT,
    ACTIONS(446), 1,
      anon_sym_LBRACK,
    ACTIONS(448), 1,
      anon_sym_STAR,
    ACTIONS(452), 1,
      anon_sym_PIPE,
    ACTIONS(458), 1,
      anon_sym_QMARK,
    ACTIONS(460), 1,
      anon_sym_AMP_AMP,
    ACTIONS(488), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(598), 1,
      anon_sym_RBRACK,
    STATE(130), 1,
      sym_argument_list,
    ACTIONS(456), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(544), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(454), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(450), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [13738] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
    ACTIONS(444), 1,
      anon_sym_DOT,
    ACTIONS(446), 1,
      anon_sym_LBRACK,
    ACTIONS(448), 1,
      anon_sym_STAR,
    ACTIONS(452), 1,
      anon_sym_PIPE,
    ACTIONS(458), 1,
      anon_sym_QMARK,
    ACTIONS(460), 1,
      anon_sym_AMP_AMP,
    ACTIONS(488), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(600), 1,
      anon_sym_LBRACE,
    STATE(130), 1,
      sym_argument_list,
    ACTIONS(456), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(544), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(454), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(450), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [13793] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
    ACTIONS(444), 1,
      anon_sym_DOT,
    ACTIONS(446), 1,
      anon_sym_LBRACK,
    ACTIONS(448), 1,
      anon_sym_STAR,
    ACTIONS(452), 1,
      anon_sym_PIPE,
    ACTIONS(458), 1,
      anon_sym_QMARK,
    ACTIONS(460), 1,
      anon_sym_AMP_AMP,
    ACTIONS(488), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(602), 1,
      anon_sym_SEMI,
    STATE(130), 1,
      sym_argument_list,
    ACTIONS(456), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(544), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(454), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(450), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [13848] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
    ACTIONS(444), 1,
      anon_sym_DOT,
    ACTIONS(446), 1,
      anon_sym_LBRACK,
    ACTIONS(448), 1,
      anon_sym_STAR,
    ACTIONS(452), 1,
      anon_sym_PIPE,
    ACTIONS(458), 1,
      anon_sym_QMARK,
    ACTIONS(460), 1,
      anon_sym_AMP_AMP,
    ACTIONS(488), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(604), 1,
      anon_sym_RBRACE,
    STATE(130), 1,
      sym_argument_list,
    ACTIONS(456), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(544), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(454), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(450), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [13903] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
    ACTIONS(444), 1,
      anon_sym_DOT,
    ACTIONS(446), 1,
      anon_sym_LBRACK,
    ACTIONS(448), 1,
      anon_sym_STAR,
    ACTIONS(452), 1,
      anon_sym_PIPE,
    ACTIONS(458), 1,
      anon_sym_QMARK,
    ACTIONS(460), 1,
      anon_sym_AMP_AMP,
    ACTIONS(488), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(606), 1,
      anon_sym_RBRACK,
    STATE(130), 1,
      sym_argument_list,
    ACTIONS(456), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(544), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(454), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(450), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [13958] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
    ACTIONS(444), 1,
      anon_sym_DOT,
    ACTIONS(446), 1,
      anon_sym_LBRACK,
    ACTIONS(448), 1,
      anon_sym_STAR,
    ACTIONS(452), 1,
      anon_sym_PIPE,
    ACTIONS(458), 1,
      anon_sym_QMARK,
    ACTIONS(460), 1,
      anon_sym_AMP_AMP,
    ACTIONS(488), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(608), 1,
      anon_sym_COLON,
    STATE(130), 1,
      sym_argument_list,
    ACTIONS(456), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(544), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(454), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(450), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [14013] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
    ACTIONS(444), 1,
      anon_sym_DOT,
    ACTIONS(446), 1,
      anon_sym_LBRACK,
    ACTIONS(448), 1,
      anon_sym_STAR,
    ACTIONS(452), 1,
      anon_sym_PIPE,
    ACTIONS(458), 1,
      anon_sym_QMARK,
    ACTIONS(460), 1,
      anon_sym_AMP_AMP,
    ACTIONS(488), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(548), 1,
      anon_sym_COLON,
    STATE(130), 1,
      sym_argument_list,
    ACTIONS(456), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(544), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(454), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(450), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [14068] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
    ACTIONS(444), 1,
      anon_sym_DOT,
    ACTIONS(446), 1,
      anon_sym_LBRACK,
    ACTIONS(448), 1,
      anon_sym_STAR,
    ACTIONS(452), 1,
      anon_sym_PIPE,
    ACTIONS(458), 1,
      anon_sym_QMARK,
    ACTIONS(460), 1,
      anon_sym_AMP_AMP,
    ACTIONS(488), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(610), 1,
      anon_sym_SEMI,
    STATE(130), 1,
      sym_argument_list,
    ACTIONS(456), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(544), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(454), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(450), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [14123] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
    ACTIONS(444), 1,
      anon_sym_DOT,
    ACTIONS(446), 1,
      anon_sym_LBRACK,
    ACTIONS(448), 1,
      anon_sym_STAR,
    ACTIONS(452), 1,
      anon_sym_PIPE,
    ACTIONS(458), 1,
      anon_sym_QMARK,
    ACTIONS(460), 1,
      anon_sym_AMP_AMP,
    ACTIONS(488), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(612), 1,
      anon_sym_RPAREN,
    STATE(130), 1,
      sym_argument_list,
    ACTIONS(456), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(544), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(454), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(450), 5,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [14178] = 5,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_COLON,
    ACTIONS(614), 1,
      anon_sym_COMMA,
    STATE(279), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(484), 9,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_RBRACK,
  [14202] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_LBRACE,
    ACTIONS(619), 1,
      anon_sym_SQUOTE2,
    ACTIONS(621), 1,
      sym_string_template_char,
    ACTIONS(623), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(625), 1,
      sym_escape_sequence_invalid,
    ACTIONS(627), 1,
      sym_format_sequence,
    STATE(284), 3,
      sym_escape_sequence,
      sym_string_template_argument,
      aux_sym_string_template_repeat1,
  [14229] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      anon_sym_LBRACE,
    ACTIONS(632), 1,
      anon_sym_SQUOTE2,
    ACTIONS(634), 1,
      sym_string_template_char,
    ACTIONS(637), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(640), 1,
      sym_escape_sequence_invalid,
    ACTIONS(643), 1,
      sym_format_sequence,
    STATE(281), 3,
      sym_escape_sequence,
      sym_string_template_argument,
      aux_sym_string_template_repeat1,
  [14256] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_LBRACE,
    ACTIONS(623), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(625), 1,
      sym_escape_sequence_invalid,
    ACTIONS(646), 1,
      anon_sym_SQUOTE2,
    ACTIONS(648), 1,
      sym_string_template_char,
    ACTIONS(650), 1,
      sym_format_sequence,
    STATE(281), 3,
      sym_escape_sequence,
      sym_string_template_argument,
      aux_sym_string_template_repeat1,
  [14283] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_LBRACE,
    ACTIONS(623), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(625), 1,
      sym_escape_sequence_invalid,
    ACTIONS(652), 1,
      anon_sym_SQUOTE2,
    ACTIONS(654), 1,
      sym_string_template_char,
    ACTIONS(656), 1,
      sym_format_sequence,
    STATE(282), 3,
      sym_escape_sequence,
      sym_string_template_argument,
      aux_sym_string_template_repeat1,
  [14310] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_LBRACE,
    ACTIONS(623), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(625), 1,
      sym_escape_sequence_invalid,
    ACTIONS(648), 1,
      sym_string_template_char,
    ACTIONS(650), 1,
      sym_format_sequence,
    ACTIONS(658), 1,
      anon_sym_SQUOTE2,
    STATE(281), 3,
      sym_escape_sequence,
      sym_string_template_argument,
      aux_sym_string_template_repeat1,
  [14337] = 5,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_COMMA,
    ACTIONS(662), 1,
      anon_sym_COLON,
    STATE(279), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(660), 6,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
  [14358] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_LBRACE,
    ACTIONS(623), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(625), 1,
      sym_escape_sequence_invalid,
    ACTIONS(648), 1,
      sym_string_template_char,
    ACTIONS(650), 1,
      sym_format_sequence,
    ACTIONS(664), 1,
      anon_sym_SQUOTE2,
    STATE(281), 3,
      sym_escape_sequence,
      sym_string_template_argument,
      aux_sym_string_template_repeat1,
  [14385] = 5,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_COMMA,
    ACTIONS(666), 1,
      anon_sym_RBRACE,
    STATE(279), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(660), 6,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
  [14406] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_LBRACE,
    ACTIONS(623), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(625), 1,
      sym_escape_sequence_invalid,
    ACTIONS(668), 1,
      anon_sym_SQUOTE2,
    ACTIONS(670), 1,
      sym_string_template_char,
    ACTIONS(672), 1,
      sym_format_sequence,
    STATE(290), 3,
      sym_escape_sequence,
      sym_string_template_argument,
      aux_sym_string_template_repeat1,
  [14433] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_LBRACE,
    ACTIONS(623), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(625), 1,
      sym_escape_sequence_invalid,
    ACTIONS(674), 1,
      anon_sym_SQUOTE2,
    ACTIONS(676), 1,
      sym_string_template_char,
    ACTIONS(678), 1,
      sym_format_sequence,
    STATE(286), 3,
      sym_escape_sequence,
      sym_string_template_argument,
      aux_sym_string_template_repeat1,
  [14460] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_LBRACE,
    ACTIONS(623), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(625), 1,
      sym_escape_sequence_invalid,
    ACTIONS(648), 1,
      sym_string_template_char,
    ACTIONS(650), 1,
      sym_format_sequence,
    ACTIONS(680), 1,
      anon_sym_SQUOTE2,
    STATE(281), 3,
      sym_escape_sequence,
      sym_string_template_argument,
      aux_sym_string_template_repeat1,
  [14487] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      anon_sym_LF,
    ACTIONS(686), 1,
      anon_sym_as,
    STATE(321), 1,
      sym_import_statement_as,
    ACTIONS(684), 5,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [14507] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      anon_sym_as,
    ACTIONS(688), 1,
      anon_sym_LF,
    STATE(324), 1,
      sym_import_statement_as,
    ACTIONS(690), 5,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [14527] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      anon_sym_DQUOTE2,
    ACTIONS(694), 1,
      sym__string_non_escaped_content,
    ACTIONS(696), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(698), 1,
      sym_escape_sequence_invalid,
    ACTIONS(700), 1,
      sym_format_sequence,
    STATE(300), 2,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [14550] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(698), 1,
      sym_escape_sequence_invalid,
    ACTIONS(702), 1,
      anon_sym_DQUOTE2,
    ACTIONS(704), 1,
      sym__string_non_escaped_content,
    ACTIONS(706), 1,
      sym_format_sequence,
    STATE(295), 2,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [14573] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(698), 1,
      sym_escape_sequence_invalid,
    ACTIONS(708), 1,
      anon_sym_DQUOTE2,
    ACTIONS(710), 1,
      sym__string_non_escaped_content,
    ACTIONS(712), 1,
      sym_format_sequence,
    STATE(304), 2,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [14596] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 1,
      anon_sym_LF,
    ACTIONS(718), 1,
      anon_sym_else,
    ACTIONS(716), 5,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [14613] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 1,
      anon_sym_LF,
    STATE(303), 1,
      aux_sym__statement_list_repeat1,
    ACTIONS(722), 2,
      anon_sym_SEMI,
      anon_sym_NULL,
    ACTIONS(132), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [14632] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_LF,
    STATE(297), 1,
      aux_sym__statement_list_repeat1,
    ACTIONS(726), 2,
      anon_sym_SEMI,
      anon_sym_NULL,
    ACTIONS(728), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [14651] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(698), 1,
      sym_escape_sequence_invalid,
    ACTIONS(710), 1,
      sym__string_non_escaped_content,
    ACTIONS(712), 1,
      sym_format_sequence,
    ACTIONS(730), 1,
      anon_sym_DQUOTE2,
    STATE(304), 2,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [14674] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(698), 1,
      sym_escape_sequence_invalid,
    ACTIONS(710), 1,
      sym__string_non_escaped_content,
    ACTIONS(712), 1,
      sym_format_sequence,
    ACTIONS(732), 1,
      anon_sym_DQUOTE2,
    STATE(304), 2,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [14697] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(698), 1,
      sym_escape_sequence_invalid,
    ACTIONS(734), 1,
      anon_sym_DQUOTE2,
    ACTIONS(736), 1,
      sym__string_non_escaped_content,
    ACTIONS(738), 1,
      sym_format_sequence,
    STATE(302), 2,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [14720] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(698), 1,
      sym_escape_sequence_invalid,
    ACTIONS(710), 1,
      sym__string_non_escaped_content,
    ACTIONS(712), 1,
      sym_format_sequence,
    ACTIONS(740), 1,
      anon_sym_DQUOTE2,
    STATE(304), 2,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [14743] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      anon_sym_LF,
    STATE(303), 1,
      aux_sym__statement_list_repeat1,
    ACTIONS(745), 2,
      anon_sym_SEMI,
      anon_sym_NULL,
    ACTIONS(748), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [14762] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 1,
      anon_sym_DQUOTE2,
    ACTIONS(752), 1,
      sym__string_non_escaped_content,
    ACTIONS(755), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(758), 1,
      sym_escape_sequence_invalid,
    ACTIONS(761), 1,
      sym_format_sequence,
    STATE(304), 2,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [14785] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 1,
      aux_sym_escape_sequence_token1,
    ACTIONS(698), 1,
      sym_escape_sequence_invalid,
    ACTIONS(764), 1,
      anon_sym_DQUOTE2,
    ACTIONS(766), 1,
      sym__string_non_escaped_content,
    ACTIONS(768), 1,
      sym_format_sequence,
    STATE(299), 2,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [14808] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_LF,
    ACTIONS(772), 5,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [14822] = 3,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(776), 1,
      anon_sym_COLON_EQ,
    ACTIONS(774), 5,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
  [14836] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 3,
      anon_sym_LBRACE,
      sym_string_template_char,
      sym_escape_sequence_invalid,
    ACTIONS(780), 3,
      anon_sym_SQUOTE2,
      aux_sym_escape_sequence_token1,
      sym_format_sequence,
  [14850] = 3,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(782), 1,
      anon_sym_COLON_EQ,
    ACTIONS(774), 5,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
  [14864] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 1,
      anon_sym_LF,
    ACTIONS(786), 5,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [14878] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 1,
      anon_sym_LF,
    ACTIONS(790), 5,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [14892] = 5,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(792), 1,
      anon_sym_RBRACE,
    ACTIONS(794), 1,
      anon_sym_case,
    ACTIONS(796), 1,
      anon_sym_default,
    STATE(326), 3,
      sym_switch_case,
      sym_default_case,
      aux_sym_switch_statement_repeat1,
  [14910] = 5,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(794), 1,
      anon_sym_case,
    ACTIONS(796), 1,
      anon_sym_default,
    ACTIONS(798), 1,
      anon_sym_RBRACE,
    STATE(329), 3,
      sym_switch_case,
      sym_default_case,
      aux_sym_switch_statement_repeat1,
  [14928] = 3,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(802), 1,
      anon_sym_COLON_EQ,
    ACTIONS(800), 5,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH_EQ,
  [14942] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      anon_sym_LF,
    ACTIONS(806), 5,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [14956] = 5,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(808), 1,
      sym_identifier,
    ACTIONS(810), 1,
      anon_sym_COMMA,
    ACTIONS(812), 1,
      anon_sym_RPAREN,
    STATE(338), 3,
      sym__parameter_declaration,
      sym_parameter_declaration,
      sym_parameter_declaration_default,
  [14974] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym_LF,
    ACTIONS(816), 5,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [14988] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym_LF,
    ACTIONS(820), 5,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [15002] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 1,
      anon_sym_LF,
    ACTIONS(748), 5,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [15016] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      anon_sym_LF,
    ACTIONS(826), 5,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [15030] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(828), 1,
      anon_sym_LF,
    ACTIONS(830), 5,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [15044] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(832), 3,
      anon_sym_LBRACE,
      sym_string_template_char,
      sym_escape_sequence_invalid,
    ACTIONS(834), 3,
      anon_sym_SQUOTE2,
      aux_sym_escape_sequence_token1,
      sym_format_sequence,
  [15058] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      anon_sym_LF,
    ACTIONS(838), 5,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [15072] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(840), 1,
      anon_sym_LF,
    ACTIONS(842), 5,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [15086] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(844), 1,
      anon_sym_LF,
    ACTIONS(846), 5,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [15100] = 5,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(794), 1,
      anon_sym_case,
    ACTIONS(796), 1,
      anon_sym_default,
    ACTIONS(848), 1,
      anon_sym_RBRACE,
    STATE(329), 3,
      sym_switch_case,
      sym_default_case,
      aux_sym_switch_statement_repeat1,
  [15118] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(850), 1,
      anon_sym_LF,
    ACTIONS(852), 5,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [15132] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(854), 1,
      anon_sym_LF,
    ACTIONS(856), 5,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [15146] = 5,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(858), 1,
      anon_sym_RBRACE,
    ACTIONS(860), 1,
      anon_sym_case,
    ACTIONS(863), 1,
      anon_sym_default,
    STATE(329), 3,
      sym_switch_case,
      sym_default_case,
      aux_sym_switch_statement_repeat1,
  [15164] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      anon_sym_LF,
    ACTIONS(868), 5,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [15178] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 2,
      sym__string_non_escaped_content,
      sym_escape_sequence_invalid,
    ACTIONS(780), 3,
      anon_sym_DQUOTE2,
      aux_sym_escape_sequence_token1,
      sym_format_sequence,
  [15191] = 4,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(808), 1,
      sym_identifier,
    ACTIONS(870), 1,
      anon_sym_RPAREN,
    STATE(365), 3,
      sym__parameter_declaration,
      sym_parameter_declaration,
      sym_parameter_declaration_default,
  [15206] = 4,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(808), 1,
      sym_identifier,
    ACTIONS(872), 1,
      anon_sym_RPAREN,
    STATE(365), 3,
      sym__parameter_declaration,
      sym_parameter_declaration,
      sym_parameter_declaration_default,
  [15221] = 4,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_LBRACE,
    ACTIONS(874), 1,
      anon_sym_if,
    STATE(320), 2,
      sym_block,
      sym_if_statement,
  [15235] = 3,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(808), 1,
      sym_identifier,
    STATE(365), 3,
      sym__parameter_declaration,
      sym_parameter_declaration,
      sym_parameter_declaration_default,
  [15247] = 4,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_RPAREN,
    ACTIONS(876), 1,
      anon_sym_COMMA,
    STATE(279), 1,
      aux_sym_expression_list_repeat1,
  [15260] = 4,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_COMMA,
    ACTIONS(878), 1,
      anon_sym_RBRACK,
    STATE(279), 1,
      aux_sym_expression_list_repeat1,
  [15273] = 4,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(880), 1,
      anon_sym_COMMA,
    ACTIONS(882), 1,
      anon_sym_RPAREN,
    STATE(357), 1,
      aux_sym_parameter_list_repeat1,
  [15286] = 2,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(884), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [15295] = 3,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(888), 1,
      anon_sym_EQ,
    ACTIONS(886), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15306] = 4,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(890), 1,
      anon_sym_COMMA,
    ACTIONS(892), 1,
      anon_sym_RBRACE,
    STATE(346), 1,
      aux_sym_map_literal_values_repeat1,
  [15319] = 4,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(894), 1,
      anon_sym_import,
    ACTIONS(896), 1,
      anon_sym_DOT,
    STATE(342), 1,
      aux_sym_import_statement_from_repeat1,
  [15332] = 4,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_COMMA,
    ACTIONS(899), 1,
      anon_sym_RBRACK,
    STATE(279), 1,
      aux_sym_expression_list_repeat1,
  [15345] = 4,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(901), 1,
      sym_identifier,
    ACTIONS(903), 1,
      anon_sym_LPAREN,
    STATE(370), 1,
      sym_parameter_list,
  [15358] = 4,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_COMMA,
    ACTIONS(666), 1,
      anon_sym_RBRACE,
    STATE(279), 1,
      aux_sym_expression_list_repeat1,
  [15371] = 4,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(890), 1,
      anon_sym_COMMA,
    ACTIONS(905), 1,
      anon_sym_RBRACE,
    STATE(350), 1,
      aux_sym_map_literal_values_repeat1,
  [15384] = 4,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(402), 1,
      anon_sym_RPAREN,
    ACTIONS(907), 1,
      anon_sym_COMMA,
    STATE(279), 1,
      aux_sym_expression_list_repeat1,
  [15397] = 4,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_RPAREN,
    ACTIONS(909), 1,
      anon_sym_COMMA,
    STATE(279), 1,
      aux_sym_expression_list_repeat1,
  [15410] = 4,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(911), 1,
      anon_sym_import,
    ACTIONS(913), 1,
      anon_sym_DOT,
    STATE(342), 1,
      aux_sym_import_statement_from_repeat1,
  [15423] = 4,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(915), 1,
      anon_sym_COMMA,
    ACTIONS(918), 1,
      anon_sym_RBRACE,
    STATE(350), 1,
      aux_sym_map_literal_values_repeat1,
  [15436] = 4,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_RPAREN,
    ACTIONS(920), 1,
      anon_sym_COMMA,
    STATE(279), 1,
      aux_sym_expression_list_repeat1,
  [15449] = 4,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_COMMA,
    ACTIONS(922), 1,
      anon_sym_RBRACK,
    STATE(279), 1,
      aux_sym_expression_list_repeat1,
  [15462] = 4,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(913), 1,
      anon_sym_DOT,
    ACTIONS(924), 1,
      anon_sym_import,
    STATE(349), 1,
      aux_sym_import_statement_from_repeat1,
  [15475] = 2,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(926), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [15484] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(928), 1,
      anon_sym_LF,
    ACTIONS(930), 2,
      anon_sym_SEMI,
      anon_sym_NULL,
  [15495] = 4,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(932), 1,
      anon_sym_COMMA,
    ACTIONS(935), 1,
      anon_sym_RPAREN,
    STATE(356), 1,
      aux_sym_parameter_list_repeat1,
  [15508] = 4,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(870), 1,
      anon_sym_RPAREN,
    ACTIONS(937), 1,
      anon_sym_COMMA,
    STATE(356), 1,
      aux_sym_parameter_list_repeat1,
  [15521] = 4,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_COMMA,
    ACTIONS(939), 1,
      anon_sym_RBRACK,
    STATE(279), 1,
      aux_sym_expression_list_repeat1,
  [15534] = 3,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(903), 1,
      anon_sym_LPAREN,
    STATE(367), 1,
      sym_parameter_list,
  [15544] = 2,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(918), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [15552] = 3,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_LBRACE,
    STATE(315), 1,
      sym_block,
  [15562] = 3,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(941), 1,
      anon_sym_LBRACE,
    STATE(129), 1,
      sym_block,
  [15572] = 2,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(854), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [15580] = 3,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(903), 1,
      anon_sym_LPAREN,
    STATE(370), 1,
      sym_parameter_list,
  [15590] = 2,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(935), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15598] = 3,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(903), 1,
      anon_sym_LPAREN,
    STATE(373), 1,
      sym_parameter_list,
  [15608] = 3,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(943), 1,
      anon_sym_LBRACE,
    STATE(223), 1,
      sym_block,
  [15618] = 3,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(903), 1,
      anon_sym_LPAREN,
    STATE(369), 1,
      sym_parameter_list,
  [15628] = 3,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(945), 1,
      anon_sym_LBRACE,
    STATE(199), 1,
      sym_block,
  [15638] = 3,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_LBRACE,
    STATE(50), 1,
      sym_block,
  [15648] = 2,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(894), 2,
      anon_sym_import,
      anon_sym_DOT,
  [15656] = 3,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(903), 1,
      anon_sym_LPAREN,
    STATE(362), 1,
      sym_parameter_list,
  [15666] = 3,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(947), 1,
      anon_sym_LBRACE,
    STATE(182), 1,
      sym_block,
  [15676] = 2,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(836), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [15684] = 2,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(949), 1,
      sym_identifier,
  [15691] = 2,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(882), 1,
      anon_sym_RPAREN,
  [15698] = 2,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(951), 1,
      anon_sym_EQ,
  [15705] = 2,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(953), 1,
      anon_sym_EQ,
  [15712] = 2,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(955), 1,
      anon_sym_RBRACE,
  [15719] = 2,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(957), 1,
      anon_sym_RBRACE,
  [15726] = 2,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_RPAREN,
  [15733] = 2,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(959), 1,
      anon_sym_SEMI,
  [15740] = 2,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(961), 1,
      anon_sym_RBRACE,
  [15747] = 2,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(566), 1,
      anon_sym_RPAREN,
  [15754] = 2,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(963), 1,
      sym_identifier,
  [15761] = 2,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(965), 1,
      sym_identifier,
  [15768] = 2,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(967), 1,
      anon_sym_RBRACE,
  [15775] = 2,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(969), 1,
      sym_identifier,
  [15782] = 2,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(971), 1,
      anon_sym_RBRACE,
  [15789] = 2,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(973), 1,
      anon_sym_RBRACE,
  [15796] = 2,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(975), 1,
      sym_identifier,
  [15803] = 2,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(572), 1,
      anon_sym_RPAREN,
  [15810] = 2,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(977), 1,
      anon_sym_LBRACE,
  [15817] = 2,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(979), 1,
      anon_sym_LBRACE,
  [15824] = 2,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(981), 1,
      anon_sym_RBRACE,
  [15831] = 2,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(983), 1,
      sym_identifier,
  [15838] = 2,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(985), 1,
      sym_identifier,
  [15845] = 2,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(987), 1,
      anon_sym_RBRACE,
  [15852] = 2,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(989), 1,
      anon_sym_EQ,
  [15859] = 2,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(991), 1,
      anon_sym_RBRACE,
  [15866] = 2,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(993), 1,
      anon_sym_EQ,
  [15873] = 2,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(995), 1,
      anon_sym_COLON,
  [15880] = 2,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(997), 1,
      anon_sym_LBRACE,
  [15887] = 2,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(999), 1,
      anon_sym_EQ,
  [15894] = 2,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(1001), 1,
      anon_sym_EQ,
  [15901] = 2,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(1003), 1,
      anon_sym_import,
  [15908] = 2,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(1005), 1,
      anon_sym_LBRACE,
  [15915] = 2,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(562), 1,
      anon_sym_RPAREN,
  [15922] = 2,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(1007), 1,
      anon_sym_COLON,
  [15929] = 2,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(1009), 1,
      ts_builtin_sym_end,
  [15936] = 2,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(1011), 1,
      anon_sym_LBRACE,
  [15943] = 2,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(1013), 1,
      anon_sym_LBRACE,
  [15950] = 2,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(1015), 1,
      sym_identifier,
  [15957] = 2,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(1017), 1,
      sym_identifier,
  [15964] = 2,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(1019), 1,
      anon_sym_LBRACE,
  [15971] = 2,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(1021), 1,
      anon_sym_LBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(15)] = 0,
  [SMALL_STATE(16)] = 90,
  [SMALL_STATE(17)] = 170,
  [SMALL_STATE(18)] = 250,
  [SMALL_STATE(19)] = 330,
  [SMALL_STATE(20)] = 410,
  [SMALL_STATE(21)] = 491,
  [SMALL_STATE(22)] = 559,
  [SMALL_STATE(23)] = 613,
  [SMALL_STATE(24)] = 667,
  [SMALL_STATE(25)] = 713,
  [SMALL_STATE(26)] = 783,
  [SMALL_STATE(27)] = 845,
  [SMALL_STATE(28)] = 891,
  [SMALL_STATE(29)] = 967,
  [SMALL_STATE(30)] = 1037,
  [SMALL_STATE(31)] = 1107,
  [SMALL_STATE(32)] = 1171,
  [SMALL_STATE(33)] = 1233,
  [SMALL_STATE(34)] = 1289,
  [SMALL_STATE(35)] = 1359,
  [SMALL_STATE(36)] = 1417,
  [SMALL_STATE(37)] = 1462,
  [SMALL_STATE(38)] = 1507,
  [SMALL_STATE(39)] = 1552,
  [SMALL_STATE(40)] = 1599,
  [SMALL_STATE(41)] = 1644,
  [SMALL_STATE(42)] = 1689,
  [SMALL_STATE(43)] = 1734,
  [SMALL_STATE(44)] = 1779,
  [SMALL_STATE(45)] = 1824,
  [SMALL_STATE(46)] = 1869,
  [SMALL_STATE(47)] = 1946,
  [SMALL_STATE(48)] = 1991,
  [SMALL_STATE(49)] = 2036,
  [SMALL_STATE(50)] = 2081,
  [SMALL_STATE(51)] = 2126,
  [SMALL_STATE(52)] = 2171,
  [SMALL_STATE(53)] = 2216,
  [SMALL_STATE(54)] = 2261,
  [SMALL_STATE(55)] = 2306,
  [SMALL_STATE(56)] = 2351,
  [SMALL_STATE(57)] = 2396,
  [SMALL_STATE(58)] = 2462,
  [SMALL_STATE(59)] = 2528,
  [SMALL_STATE(60)] = 2594,
  [SMALL_STATE(61)] = 2660,
  [SMALL_STATE(62)] = 2723,
  [SMALL_STATE(63)] = 2786,
  [SMALL_STATE(64)] = 2849,
  [SMALL_STATE(65)] = 2912,
  [SMALL_STATE(66)] = 2975,
  [SMALL_STATE(67)] = 3038,
  [SMALL_STATE(68)] = 3101,
  [SMALL_STATE(69)] = 3164,
  [SMALL_STATE(70)] = 3227,
  [SMALL_STATE(71)] = 3290,
  [SMALL_STATE(72)] = 3353,
  [SMALL_STATE(73)] = 3416,
  [SMALL_STATE(74)] = 3479,
  [SMALL_STATE(75)] = 3542,
  [SMALL_STATE(76)] = 3605,
  [SMALL_STATE(77)] = 3686,
  [SMALL_STATE(78)] = 3749,
  [SMALL_STATE(79)] = 3812,
  [SMALL_STATE(80)] = 3875,
  [SMALL_STATE(81)] = 3938,
  [SMALL_STATE(82)] = 3989,
  [SMALL_STATE(83)] = 4044,
  [SMALL_STATE(84)] = 4095,
  [SMALL_STATE(85)] = 4152,
  [SMALL_STATE(86)] = 4215,
  [SMALL_STATE(87)] = 4278,
  [SMALL_STATE(88)] = 4343,
  [SMALL_STATE(89)] = 4406,
  [SMALL_STATE(90)] = 4469,
  [SMALL_STATE(91)] = 4532,
  [SMALL_STATE(92)] = 4595,
  [SMALL_STATE(93)] = 4658,
  [SMALL_STATE(94)] = 4721,
  [SMALL_STATE(95)] = 4781,
  [SMALL_STATE(96)] = 4823,
  [SMALL_STATE(97)] = 4883,
  [SMALL_STATE(98)] = 4943,
  [SMALL_STATE(99)] = 5003,
  [SMALL_STATE(100)] = 5063,
  [SMALL_STATE(101)] = 5123,
  [SMALL_STATE(102)] = 5183,
  [SMALL_STATE(103)] = 5243,
  [SMALL_STATE(104)] = 5303,
  [SMALL_STATE(105)] = 5363,
  [SMALL_STATE(106)] = 5405,
  [SMALL_STATE(107)] = 5465,
  [SMALL_STATE(108)] = 5525,
  [SMALL_STATE(109)] = 5585,
  [SMALL_STATE(110)] = 5645,
  [SMALL_STATE(111)] = 5705,
  [SMALL_STATE(112)] = 5747,
  [SMALL_STATE(113)] = 5807,
  [SMALL_STATE(114)] = 5849,
  [SMALL_STATE(115)] = 5891,
  [SMALL_STATE(116)] = 5951,
  [SMALL_STATE(117)] = 5993,
  [SMALL_STATE(118)] = 6053,
  [SMALL_STATE(119)] = 6113,
  [SMALL_STATE(120)] = 6173,
  [SMALL_STATE(121)] = 6233,
  [SMALL_STATE(122)] = 6293,
  [SMALL_STATE(123)] = 6335,
  [SMALL_STATE(124)] = 6377,
  [SMALL_STATE(125)] = 6419,
  [SMALL_STATE(126)] = 6461,
  [SMALL_STATE(127)] = 6503,
  [SMALL_STATE(128)] = 6545,
  [SMALL_STATE(129)] = 6587,
  [SMALL_STATE(130)] = 6629,
  [SMALL_STATE(131)] = 6671,
  [SMALL_STATE(132)] = 6731,
  [SMALL_STATE(133)] = 6791,
  [SMALL_STATE(134)] = 6851,
  [SMALL_STATE(135)] = 6911,
  [SMALL_STATE(136)] = 6971,
  [SMALL_STATE(137)] = 7031,
  [SMALL_STATE(138)] = 7091,
  [SMALL_STATE(139)] = 7151,
  [SMALL_STATE(140)] = 7211,
  [SMALL_STATE(141)] = 7271,
  [SMALL_STATE(142)] = 7331,
  [SMALL_STATE(143)] = 7391,
  [SMALL_STATE(144)] = 7433,
  [SMALL_STATE(145)] = 7493,
  [SMALL_STATE(146)] = 7553,
  [SMALL_STATE(147)] = 7613,
  [SMALL_STATE(148)] = 7673,
  [SMALL_STATE(149)] = 7733,
  [SMALL_STATE(150)] = 7775,
  [SMALL_STATE(151)] = 7835,
  [SMALL_STATE(152)] = 7877,
  [SMALL_STATE(153)] = 7937,
  [SMALL_STATE(154)] = 7997,
  [SMALL_STATE(155)] = 8057,
  [SMALL_STATE(156)] = 8099,
  [SMALL_STATE(157)] = 8159,
  [SMALL_STATE(158)] = 8219,
  [SMALL_STATE(159)] = 8279,
  [SMALL_STATE(160)] = 8339,
  [SMALL_STATE(161)] = 8399,
  [SMALL_STATE(162)] = 8459,
  [SMALL_STATE(163)] = 8519,
  [SMALL_STATE(164)] = 8579,
  [SMALL_STATE(165)] = 8639,
  [SMALL_STATE(166)] = 8699,
  [SMALL_STATE(167)] = 8759,
  [SMALL_STATE(168)] = 8819,
  [SMALL_STATE(169)] = 8861,
  [SMALL_STATE(170)] = 8921,
  [SMALL_STATE(171)] = 8963,
  [SMALL_STATE(172)] = 9023,
  [SMALL_STATE(173)] = 9083,
  [SMALL_STATE(174)] = 9146,
  [SMALL_STATE(175)] = 9201,
  [SMALL_STATE(176)] = 9250,
  [SMALL_STATE(177)] = 9325,
  [SMALL_STATE(178)] = 9386,
  [SMALL_STATE(179)] = 9427,
  [SMALL_STATE(180)] = 9492,
  [SMALL_STATE(181)] = 9533,
  [SMALL_STATE(182)] = 9574,
  [SMALL_STATE(183)] = 9615,
  [SMALL_STATE(184)] = 9664,
  [SMALL_STATE(185)] = 9717,
  [SMALL_STATE(186)] = 9778,
  [SMALL_STATE(187)] = 9818,
  [SMALL_STATE(188)] = 9858,
  [SMALL_STATE(189)] = 9898,
  [SMALL_STATE(190)] = 9938,
  [SMALL_STATE(191)] = 9978,
  [SMALL_STATE(192)] = 10018,
  [SMALL_STATE(193)] = 10058,
  [SMALL_STATE(194)] = 10098,
  [SMALL_STATE(195)] = 10138,
  [SMALL_STATE(196)] = 10178,
  [SMALL_STATE(197)] = 10218,
  [SMALL_STATE(198)] = 10258,
  [SMALL_STATE(199)] = 10298,
  [SMALL_STATE(200)] = 10338,
  [SMALL_STATE(201)] = 10378,
  [SMALL_STATE(202)] = 10418,
  [SMALL_STATE(203)] = 10458,
  [SMALL_STATE(204)] = 10498,
  [SMALL_STATE(205)] = 10538,
  [SMALL_STATE(206)] = 10578,
  [SMALL_STATE(207)] = 10618,
  [SMALL_STATE(208)] = 10656,
  [SMALL_STATE(209)] = 10702,
  [SMALL_STATE(210)] = 10746,
  [SMALL_STATE(211)] = 10802,
  [SMALL_STATE(212)] = 10858,
  [SMALL_STATE(213)] = 10914,
  [SMALL_STATE(214)] = 10970,
  [SMALL_STATE(215)] = 11022,
  [SMALL_STATE(216)] = 11076,
  [SMALL_STATE(217)] = 11132,
  [SMALL_STATE(218)] = 11176,
  [SMALL_STATE(219)] = 11224,
  [SMALL_STATE(220)] = 11280,
  [SMALL_STATE(221)] = 11336,
  [SMALL_STATE(222)] = 11388,
  [SMALL_STATE(223)] = 11423,
  [SMALL_STATE(224)] = 11458,
  [SMALL_STATE(225)] = 11493,
  [SMALL_STATE(226)] = 11528,
  [SMALL_STATE(227)] = 11563,
  [SMALL_STATE(228)] = 11598,
  [SMALL_STATE(229)] = 11633,
  [SMALL_STATE(230)] = 11668,
  [SMALL_STATE(231)] = 11703,
  [SMALL_STATE(232)] = 11738,
  [SMALL_STATE(233)] = 11773,
  [SMALL_STATE(234)] = 11808,
  [SMALL_STATE(235)] = 11843,
  [SMALL_STATE(236)] = 11878,
  [SMALL_STATE(237)] = 11913,
  [SMALL_STATE(238)] = 11948,
  [SMALL_STATE(239)] = 11983,
  [SMALL_STATE(240)] = 12018,
  [SMALL_STATE(241)] = 12053,
  [SMALL_STATE(242)] = 12088,
  [SMALL_STATE(243)] = 12123,
  [SMALL_STATE(244)] = 12187,
  [SMALL_STATE(245)] = 12251,
  [SMALL_STATE(246)] = 12312,
  [SMALL_STATE(247)] = 12373,
  [SMALL_STATE(248)] = 12434,
  [SMALL_STATE(249)] = 12495,
  [SMALL_STATE(250)] = 12556,
  [SMALL_STATE(251)] = 12617,
  [SMALL_STATE(252)] = 12678,
  [SMALL_STATE(253)] = 12739,
  [SMALL_STATE(254)] = 12795,
  [SMALL_STATE(255)] = 12851,
  [SMALL_STATE(256)] = 12907,
  [SMALL_STATE(257)] = 12963,
  [SMALL_STATE(258)] = 13021,
  [SMALL_STATE(259)] = 13077,
  [SMALL_STATE(260)] = 13133,
  [SMALL_STATE(261)] = 13188,
  [SMALL_STATE(262)] = 13243,
  [SMALL_STATE(263)] = 13298,
  [SMALL_STATE(264)] = 13353,
  [SMALL_STATE(265)] = 13408,
  [SMALL_STATE(266)] = 13463,
  [SMALL_STATE(267)] = 13518,
  [SMALL_STATE(268)] = 13573,
  [SMALL_STATE(269)] = 13628,
  [SMALL_STATE(270)] = 13683,
  [SMALL_STATE(271)] = 13738,
  [SMALL_STATE(272)] = 13793,
  [SMALL_STATE(273)] = 13848,
  [SMALL_STATE(274)] = 13903,
  [SMALL_STATE(275)] = 13958,
  [SMALL_STATE(276)] = 14013,
  [SMALL_STATE(277)] = 14068,
  [SMALL_STATE(278)] = 14123,
  [SMALL_STATE(279)] = 14178,
  [SMALL_STATE(280)] = 14202,
  [SMALL_STATE(281)] = 14229,
  [SMALL_STATE(282)] = 14256,
  [SMALL_STATE(283)] = 14283,
  [SMALL_STATE(284)] = 14310,
  [SMALL_STATE(285)] = 14337,
  [SMALL_STATE(286)] = 14358,
  [SMALL_STATE(287)] = 14385,
  [SMALL_STATE(288)] = 14406,
  [SMALL_STATE(289)] = 14433,
  [SMALL_STATE(290)] = 14460,
  [SMALL_STATE(291)] = 14487,
  [SMALL_STATE(292)] = 14507,
  [SMALL_STATE(293)] = 14527,
  [SMALL_STATE(294)] = 14550,
  [SMALL_STATE(295)] = 14573,
  [SMALL_STATE(296)] = 14596,
  [SMALL_STATE(297)] = 14613,
  [SMALL_STATE(298)] = 14632,
  [SMALL_STATE(299)] = 14651,
  [SMALL_STATE(300)] = 14674,
  [SMALL_STATE(301)] = 14697,
  [SMALL_STATE(302)] = 14720,
  [SMALL_STATE(303)] = 14743,
  [SMALL_STATE(304)] = 14762,
  [SMALL_STATE(305)] = 14785,
  [SMALL_STATE(306)] = 14808,
  [SMALL_STATE(307)] = 14822,
  [SMALL_STATE(308)] = 14836,
  [SMALL_STATE(309)] = 14850,
  [SMALL_STATE(310)] = 14864,
  [SMALL_STATE(311)] = 14878,
  [SMALL_STATE(312)] = 14892,
  [SMALL_STATE(313)] = 14910,
  [SMALL_STATE(314)] = 14928,
  [SMALL_STATE(315)] = 14942,
  [SMALL_STATE(316)] = 14956,
  [SMALL_STATE(317)] = 14974,
  [SMALL_STATE(318)] = 14988,
  [SMALL_STATE(319)] = 15002,
  [SMALL_STATE(320)] = 15016,
  [SMALL_STATE(321)] = 15030,
  [SMALL_STATE(322)] = 15044,
  [SMALL_STATE(323)] = 15058,
  [SMALL_STATE(324)] = 15072,
  [SMALL_STATE(325)] = 15086,
  [SMALL_STATE(326)] = 15100,
  [SMALL_STATE(327)] = 15118,
  [SMALL_STATE(328)] = 15132,
  [SMALL_STATE(329)] = 15146,
  [SMALL_STATE(330)] = 15164,
  [SMALL_STATE(331)] = 15178,
  [SMALL_STATE(332)] = 15191,
  [SMALL_STATE(333)] = 15206,
  [SMALL_STATE(334)] = 15221,
  [SMALL_STATE(335)] = 15235,
  [SMALL_STATE(336)] = 15247,
  [SMALL_STATE(337)] = 15260,
  [SMALL_STATE(338)] = 15273,
  [SMALL_STATE(339)] = 15286,
  [SMALL_STATE(340)] = 15295,
  [SMALL_STATE(341)] = 15306,
  [SMALL_STATE(342)] = 15319,
  [SMALL_STATE(343)] = 15332,
  [SMALL_STATE(344)] = 15345,
  [SMALL_STATE(345)] = 15358,
  [SMALL_STATE(346)] = 15371,
  [SMALL_STATE(347)] = 15384,
  [SMALL_STATE(348)] = 15397,
  [SMALL_STATE(349)] = 15410,
  [SMALL_STATE(350)] = 15423,
  [SMALL_STATE(351)] = 15436,
  [SMALL_STATE(352)] = 15449,
  [SMALL_STATE(353)] = 15462,
  [SMALL_STATE(354)] = 15475,
  [SMALL_STATE(355)] = 15484,
  [SMALL_STATE(356)] = 15495,
  [SMALL_STATE(357)] = 15508,
  [SMALL_STATE(358)] = 15521,
  [SMALL_STATE(359)] = 15534,
  [SMALL_STATE(360)] = 15544,
  [SMALL_STATE(361)] = 15552,
  [SMALL_STATE(362)] = 15562,
  [SMALL_STATE(363)] = 15572,
  [SMALL_STATE(364)] = 15580,
  [SMALL_STATE(365)] = 15590,
  [SMALL_STATE(366)] = 15598,
  [SMALL_STATE(367)] = 15608,
  [SMALL_STATE(368)] = 15618,
  [SMALL_STATE(369)] = 15628,
  [SMALL_STATE(370)] = 15638,
  [SMALL_STATE(371)] = 15648,
  [SMALL_STATE(372)] = 15656,
  [SMALL_STATE(373)] = 15666,
  [SMALL_STATE(374)] = 15676,
  [SMALL_STATE(375)] = 15684,
  [SMALL_STATE(376)] = 15691,
  [SMALL_STATE(377)] = 15698,
  [SMALL_STATE(378)] = 15705,
  [SMALL_STATE(379)] = 15712,
  [SMALL_STATE(380)] = 15719,
  [SMALL_STATE(381)] = 15726,
  [SMALL_STATE(382)] = 15733,
  [SMALL_STATE(383)] = 15740,
  [SMALL_STATE(384)] = 15747,
  [SMALL_STATE(385)] = 15754,
  [SMALL_STATE(386)] = 15761,
  [SMALL_STATE(387)] = 15768,
  [SMALL_STATE(388)] = 15775,
  [SMALL_STATE(389)] = 15782,
  [SMALL_STATE(390)] = 15789,
  [SMALL_STATE(391)] = 15796,
  [SMALL_STATE(392)] = 15803,
  [SMALL_STATE(393)] = 15810,
  [SMALL_STATE(394)] = 15817,
  [SMALL_STATE(395)] = 15824,
  [SMALL_STATE(396)] = 15831,
  [SMALL_STATE(397)] = 15838,
  [SMALL_STATE(398)] = 15845,
  [SMALL_STATE(399)] = 15852,
  [SMALL_STATE(400)] = 15859,
  [SMALL_STATE(401)] = 15866,
  [SMALL_STATE(402)] = 15873,
  [SMALL_STATE(403)] = 15880,
  [SMALL_STATE(404)] = 15887,
  [SMALL_STATE(405)] = 15894,
  [SMALL_STATE(406)] = 15901,
  [SMALL_STATE(407)] = 15908,
  [SMALL_STATE(408)] = 15915,
  [SMALL_STATE(409)] = 15922,
  [SMALL_STATE(410)] = 15929,
  [SMALL_STATE(411)] = 15936,
  [SMALL_STATE(412)] = 15943,
  [SMALL_STATE(413)] = 15950,
  [SMALL_STATE(414)] = 15957,
  [SMALL_STATE(415)] = 15964,
  [SMALL_STATE(416)] = 15971,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_case, 3, .production_id = 20),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_case, 3, .production_id = 20),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_case, 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_default_case, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(55),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(344),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(131),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(29),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(92),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(91),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(310),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(311),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(117),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(118),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(414),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(413),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(121),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(147),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(78),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(156),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(293),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(283),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(55),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 2),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 3),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 3, .production_id = 19),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 3, .production_id = 18),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 4, .production_id = 27),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 2),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 1),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 12),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 12),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 3),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, .production_id = 3),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_expression, 5, .production_id = 29),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_expression, 5, .production_id = 29),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 1),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 1),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_list, 1),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 4),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_literal, 4),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_or_set_literal, 2),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_expression, 4, .production_id = 22),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_expression, 4, .production_id = 22),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 3),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_literal, 3),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_template, 3),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_template, 3),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_or_set_literal, 2),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_template, 2),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_template, 2),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_expression, 3, .production_id = 11),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_expression, 3, .production_id = 11),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_literal, 3, .production_id = 6),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_literal, 3, .production_id = 6),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 4),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 4),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_or_set_literal, 3),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_or_set_literal, 3),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 2),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_literal, 2),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 5),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 5),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, .production_id = 14),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 4, .production_id = 14),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_statement, 3),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_statement, 3),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defer_statement, 2),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defer_statement, 2),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_go_statement, 2),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_go_statement, 2),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 4, .production_id = 16),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 4, .production_id = 16),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_declaration, 4, .production_id = 16),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const_declaration, 4, .production_id = 16),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_short_var_declaration, 3, .production_id = 13),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_short_var_declaration, 3, .production_id = 13),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 3, .production_id = 12),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_statement, 3, .production_id = 12),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_literal_values, 1),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_literal_pair, 3, .production_id = 15),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration_default, 3, .production_id = 23),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_clause, 5, .production_id = 30),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_clause, 4, .production_id = 28),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [614] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(139),
  [617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [629] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_template_repeat1, 2), SHIFT_REPEAT(150),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_template_repeat1, 2),
  [634] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_template_repeat1, 2), SHIFT_REPEAT(281),
  [637] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_template_repeat1, 2), SHIFT_REPEAT(308),
  [640] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_template_repeat1, 2), SHIFT_REPEAT(308),
  [643] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_template_repeat1, 2), SHIFT_REPEAT(281),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [648] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [654] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_list, 2),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_literal_values, 2),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [670] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [676] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3, .production_id = 10),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 3, .production_id = 10),
  [686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 2, .production_id = 1),
  [690] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 2, .production_id = 1),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [694] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [704] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [710] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, .production_id = 8),
  [716] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, .production_id = 8),
  [718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [722] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [728] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 1),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [736] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [742] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(14),
  [745] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(14),
  [748] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [752] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(304),
  [755] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(331),
  [758] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(331),
  [761] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(304),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [766] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [772] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [778] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 1),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 1),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break_statement, 1),
  [786] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_break_statement, 1),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continue_statement, 1),
  [790] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continue_statement, 1),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 3, .production_id = 9),
  [806] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 3, .production_id = 9),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_statement, 5, .production_id = 20),
  [816] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_statement, 5, .production_id = 20),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 2, .production_id = 2),
  [820] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 2, .production_id = 2),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 24),
  [826] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, .production_id = 24),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4, .production_id = 21),
  [830] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 4, .production_id = 21),
  [832] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_template_argument, 3),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_template_argument, 3),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inc_statement, 2),
  [838] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inc_statement, 2),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3, .production_id = 7),
  [842] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 3, .production_id = 7),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement_as, 2, .production_id = 1),
  [846] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement_as, 2, .production_id = 1),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_statement, 4, .production_id = 20),
  [852] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_statement, 4, .production_id = 20),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dec_statement, 2),
  [856] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dec_statement, 2),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_statement_repeat1, 2),
  [860] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_statement_repeat1, 2), SHIFT_REPEAT(86),
  [863] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_statement_repeat1, 2), SHIFT_REPEAT(402),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_statement, 4),
  [868] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_statement, 4),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_case, 4, .production_id = 20),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration, 1, .production_id = 5),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_literal_values, 1),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_from_repeat1, 2),
  [896] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_statement_from_repeat1, 2), SHIFT_REPEAT(397),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_literal_values, 2),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement_from, 3),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [915] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_literal_values_repeat1, 2), SHIFT_REPEAT(79),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_literal_values_repeat1, 2),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement_from, 2),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_case, 3),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [930] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [932] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(335),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 5, .production_id = 31),
  [979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 3, .production_id = 17),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [1009] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1011] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [1013] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 4, .production_id = 25),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_clause, 4, .production_id = 26),
  [1021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 5),
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

TS_PUBLIC const TSLanguage *tree_sitter_risor() {
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
