#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 354
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 102
#define ALIAS_COUNT 6
#define TOKEN_COUNT 59
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 20

enum {
  sym_identifier = 1,
  sym_comment = 2,
  anon_sym_SEMI = 3,
  anon_sym_LF = 4,
  anon_sym_use = 5,
  anon_sym_PLUS = 6,
  anon_sym_DASH = 7,
  anon_sym_STAR = 8,
  anon_sym_SLASH = 9,
  anon_sym_PERCENT = 10,
  anon_sym_LT = 11,
  anon_sym_LT_EQ = 12,
  anon_sym_EQ_EQ = 13,
  anon_sym_BANG_EQ = 14,
  anon_sym_GT = 15,
  anon_sym_GT_EQ = 16,
  anon_sym_LTs = 17,
  anon_sym_LT_EQs = 18,
  anon_sym_EQ_EQs = 19,
  anon_sym_BANG_EQs = 20,
  anon_sym_GTs = 21,
  anon_sym_GT_EQs = 22,
  anon_sym_AMP = 23,
  anon_sym_PIPE = 24,
  anon_sym_GT_GT = 25,
  anon_sym_LT_GT = 26,
  aux_sym_redirection_token1 = 27,
  aux_sym_redirection_token2 = 28,
  anon_sym_var = 29,
  anon_sym_set = 30,
  anon_sym_tmp = 31,
  anon_sym_del = 32,
  anon_sym_AT = 33,
  anon_sym_LBRACK = 34,
  anon_sym_RBRACK = 35,
  anon_sym_EQ = 36,
  anon_sym_fn = 37,
  anon_sym_if = 38,
  anon_sym_LBRACE = 39,
  anon_sym_RBRACE = 40,
  anon_sym_elif = 41,
  anon_sym_else = 42,
  anon_sym_while = 43,
  anon_sym_for = 44,
  anon_sym_try = 45,
  anon_sym_catch = 46,
  anon_sym_finally = 47,
  aux_sym_lambda_token1 = 48,
  anon_sym_LPAREN = 49,
  anon_sym_RPAREN = 50,
  anon_sym_QMARK_LPAREN = 51,
  anon_sym_DOLLAR = 52,
  sym_number = 53,
  sym_string = 54,
  sym_bareword = 55,
  anon_sym_STAR_STAR = 56,
  anon_sym_QMARK = 57,
  anon_sym_LBRACK2 = 58,
  sym_source_file = 59,
  sym__statements = 60,
  sym_import = 61,
  sym_command = 62,
  sym_pipeline = 63,
  sym_redirection = 64,
  sym_variable_declaration = 65,
  sym_variable_assignment = 66,
  sym_temporary_assignment = 67,
  sym_variable_deletion = 68,
  sym__assignment = 69,
  sym_function_definition = 70,
  sym_if = 71,
  sym_elif = 72,
  sym_else = 73,
  sym_while = 74,
  sym_for = 75,
  sym_try = 76,
  sym_catch = 77,
  sym_finally = 78,
  sym_lambda = 79,
  sym_parameter_list = 80,
  sym_option = 81,
  sym_indexing = 82,
  sym_braced_list = 83,
  sym_output_capture = 84,
  sym_exception_capture = 85,
  sym_variable = 86,
  sym_wildcard = 87,
  sym_list = 88,
  sym_map = 89,
  sym_pair = 90,
  aux_sym__statements_repeat1 = 91,
  aux_sym_command_repeat1 = 92,
  aux_sym_pipeline_repeat1 = 93,
  aux_sym_variable_deletion_repeat1 = 94,
  aux_sym__assignment_repeat1 = 95,
  aux_sym__assignment_repeat2 = 96,
  aux_sym__assignment_repeat3 = 97,
  aux_sym_if_repeat1 = 98,
  aux_sym_parameter_list_repeat1 = 99,
  aux_sym_wildcard_repeat1 = 100,
  aux_sym_map_repeat1 = 101,
  alias_sym_chunk = 102,
  alias_sym_file = 103,
  alias_sym_indices = 104,
  alias_sym_lhs = 105,
  alias_sym_modifier = 106,
  alias_sym_rhs = 107,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym_comment] = "comment",
  [anon_sym_SEMI] = ";",
  [anon_sym_LF] = "\n",
  [anon_sym_use] = "use",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LTs] = "<s",
  [anon_sym_LT_EQs] = "<=s",
  [anon_sym_EQ_EQs] = "==s",
  [anon_sym_BANG_EQs] = "!=s",
  [anon_sym_GTs] = ">s",
  [anon_sym_GT_EQs] = ">=s",
  [anon_sym_AMP] = "&",
  [anon_sym_PIPE] = "|",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_LT_GT] = "<>",
  [aux_sym_redirection_token1] = "io_port",
  [aux_sym_redirection_token2] = "io_port",
  [anon_sym_var] = "var",
  [anon_sym_set] = "set",
  [anon_sym_tmp] = "tmp",
  [anon_sym_del] = "del",
  [anon_sym_AT] = "@",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_EQ] = "=",
  [anon_sym_fn] = "fn",
  [anon_sym_if] = "if",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_elif] = "elif",
  [anon_sym_else] = "else",
  [anon_sym_while] = "while",
  [anon_sym_for] = "for",
  [anon_sym_try] = "try",
  [anon_sym_catch] = "catch",
  [anon_sym_finally] = "finally",
  [aux_sym_lambda_token1] = "lambda_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_QMARK_LPAREN] = "\?(",
  [anon_sym_DOLLAR] = "$",
  [sym_number] = "number",
  [sym_string] = "string",
  [sym_bareword] = "bareword",
  [anon_sym_STAR_STAR] = "**",
  [anon_sym_QMARK] = "\?",
  [anon_sym_LBRACK2] = "[",
  [sym_source_file] = "source_file",
  [sym__statements] = "_statements",
  [sym_import] = "import",
  [sym_command] = "command",
  [sym_pipeline] = "pipeline",
  [sym_redirection] = "redirection",
  [sym_variable_declaration] = "variable_declaration",
  [sym_variable_assignment] = "variable_assignment",
  [sym_temporary_assignment] = "temporary_assignment",
  [sym_variable_deletion] = "variable_deletion",
  [sym__assignment] = "_assignment",
  [sym_function_definition] = "function_definition",
  [sym_if] = "if",
  [sym_elif] = "elif",
  [sym_else] = "else",
  [sym_while] = "while",
  [sym_for] = "for",
  [sym_try] = "try",
  [sym_catch] = "catch",
  [sym_finally] = "finally",
  [sym_lambda] = "lambda",
  [sym_parameter_list] = "parameter_list",
  [sym_option] = "option",
  [sym_indexing] = "indexing",
  [sym_braced_list] = "braced_list",
  [sym_output_capture] = "output_capture",
  [sym_exception_capture] = "exception_capture",
  [sym_variable] = "variable",
  [sym_wildcard] = "wildcard",
  [sym_list] = "list",
  [sym_map] = "map",
  [sym_pair] = "pair",
  [aux_sym__statements_repeat1] = "_statements_repeat1",
  [aux_sym_command_repeat1] = "command_repeat1",
  [aux_sym_pipeline_repeat1] = "pipeline_repeat1",
  [aux_sym_variable_deletion_repeat1] = "variable_deletion_repeat1",
  [aux_sym__assignment_repeat1] = "_assignment_repeat1",
  [aux_sym__assignment_repeat2] = "_assignment_repeat2",
  [aux_sym__assignment_repeat3] = "_assignment_repeat3",
  [aux_sym_if_repeat1] = "if_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_wildcard_repeat1] = "wildcard_repeat1",
  [aux_sym_map_repeat1] = "map_repeat1",
  [alias_sym_chunk] = "chunk",
  [alias_sym_file] = "file",
  [alias_sym_indices] = "indices",
  [alias_sym_lhs] = "lhs",
  [alias_sym_modifier] = "modifier",
  [alias_sym_rhs] = "rhs",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [sym_comment] = sym_comment,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_use] = anon_sym_use,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LTs] = anon_sym_LTs,
  [anon_sym_LT_EQs] = anon_sym_LT_EQs,
  [anon_sym_EQ_EQs] = anon_sym_EQ_EQs,
  [anon_sym_BANG_EQs] = anon_sym_BANG_EQs,
  [anon_sym_GTs] = anon_sym_GTs,
  [anon_sym_GT_EQs] = anon_sym_GT_EQs,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [aux_sym_redirection_token1] = aux_sym_redirection_token1,
  [aux_sym_redirection_token2] = aux_sym_redirection_token1,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_tmp] = anon_sym_tmp,
  [anon_sym_del] = anon_sym_del,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_elif] = anon_sym_elif,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_try] = anon_sym_try,
  [anon_sym_catch] = anon_sym_catch,
  [anon_sym_finally] = anon_sym_finally,
  [aux_sym_lambda_token1] = aux_sym_lambda_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_QMARK_LPAREN] = anon_sym_QMARK_LPAREN,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [sym_bareword] = sym_bareword,
  [anon_sym_STAR_STAR] = anon_sym_STAR_STAR,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_LBRACK2] = anon_sym_LBRACK,
  [sym_source_file] = sym_source_file,
  [sym__statements] = sym__statements,
  [sym_import] = sym_import,
  [sym_command] = sym_command,
  [sym_pipeline] = sym_pipeline,
  [sym_redirection] = sym_redirection,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_variable_assignment] = sym_variable_assignment,
  [sym_temporary_assignment] = sym_temporary_assignment,
  [sym_variable_deletion] = sym_variable_deletion,
  [sym__assignment] = sym__assignment,
  [sym_function_definition] = sym_function_definition,
  [sym_if] = sym_if,
  [sym_elif] = sym_elif,
  [sym_else] = sym_else,
  [sym_while] = sym_while,
  [sym_for] = sym_for,
  [sym_try] = sym_try,
  [sym_catch] = sym_catch,
  [sym_finally] = sym_finally,
  [sym_lambda] = sym_lambda,
  [sym_parameter_list] = sym_parameter_list,
  [sym_option] = sym_option,
  [sym_indexing] = sym_indexing,
  [sym_braced_list] = sym_braced_list,
  [sym_output_capture] = sym_output_capture,
  [sym_exception_capture] = sym_exception_capture,
  [sym_variable] = sym_variable,
  [sym_wildcard] = sym_wildcard,
  [sym_list] = sym_list,
  [sym_map] = sym_map,
  [sym_pair] = sym_pair,
  [aux_sym__statements_repeat1] = aux_sym__statements_repeat1,
  [aux_sym_command_repeat1] = aux_sym_command_repeat1,
  [aux_sym_pipeline_repeat1] = aux_sym_pipeline_repeat1,
  [aux_sym_variable_deletion_repeat1] = aux_sym_variable_deletion_repeat1,
  [aux_sym__assignment_repeat1] = aux_sym__assignment_repeat1,
  [aux_sym__assignment_repeat2] = aux_sym__assignment_repeat2,
  [aux_sym__assignment_repeat3] = aux_sym__assignment_repeat3,
  [aux_sym_if_repeat1] = aux_sym_if_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_wildcard_repeat1] = aux_sym_wildcard_repeat1,
  [aux_sym_map_repeat1] = aux_sym_map_repeat1,
  [alias_sym_chunk] = alias_sym_chunk,
  [alias_sym_file] = alias_sym_file,
  [alias_sym_indices] = alias_sym_indices,
  [alias_sym_lhs] = alias_sym_lhs,
  [alias_sym_modifier] = alias_sym_modifier,
  [alias_sym_rhs] = alias_sym_rhs,
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
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_use] = {
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
  [anon_sym_PERCENT] = {
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
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
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
  [anon_sym_LTs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GTs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQs] = {
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
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_redirection_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_redirection_token2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tmp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_del] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
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
  [anon_sym_elif] = {
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
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_try] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_catch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_finally] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_lambda_token1] = {
    .visible = false,
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
  [anon_sym_QMARK_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
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
  [sym_bareword] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK2] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statements] = {
    .visible = false,
    .named = true,
  },
  [sym_import] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym_pipeline] = {
    .visible = true,
    .named = true,
  },
  [sym_redirection] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_temporary_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_deletion] = {
    .visible = true,
    .named = true,
  },
  [sym__assignment] = {
    .visible = false,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_if] = {
    .visible = true,
    .named = true,
  },
  [sym_elif] = {
    .visible = true,
    .named = true,
  },
  [sym_else] = {
    .visible = true,
    .named = true,
  },
  [sym_while] = {
    .visible = true,
    .named = true,
  },
  [sym_for] = {
    .visible = true,
    .named = true,
  },
  [sym_try] = {
    .visible = true,
    .named = true,
  },
  [sym_catch] = {
    .visible = true,
    .named = true,
  },
  [sym_finally] = {
    .visible = true,
    .named = true,
  },
  [sym_lambda] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_option] = {
    .visible = true,
    .named = true,
  },
  [sym_indexing] = {
    .visible = true,
    .named = true,
  },
  [sym_braced_list] = {
    .visible = true,
    .named = true,
  },
  [sym_output_capture] = {
    .visible = true,
    .named = true,
  },
  [sym_exception_capture] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_wildcard] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_map] = {
    .visible = true,
    .named = true,
  },
  [sym_pair] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__statements_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pipeline_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_deletion_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__assignment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__assignment_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__assignment_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_wildcard_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_map_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_chunk] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_file] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_indices] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_lhs] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_modifier] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_rhs] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_argument = 1,
  field_condition = 2,
  field_container = 3,
  field_exception = 4,
  field_head = 5,
  field_key = 6,
  field_parameter = 7,
  field_value = 8,
  field_var = 9,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_argument] = "argument",
  [field_condition] = "condition",
  [field_container] = "container",
  [field_exception] = "exception",
  [field_head] = "head",
  [field_key] = "key",
  [field_parameter] = "parameter",
  [field_value] = "value",
  [field_var] = "var",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [6] = {.index = 4, .length = 2},
  [7] = {.index = 6, .length = 1},
  [10] = {.index = 7, .length = 2},
  [11] = {.index = 9, .length = 1},
  [12] = {.index = 10, .length = 2},
  [16] = {.index = 12, .length = 1},
  [17] = {.index = 13, .length = 2},
  [18] = {.index = 15, .length = 2},
  [19] = {.index = 17, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_head, 0},
  [1] =
    {field_argument, 0},
  [2] =
    {field_argument, 1, .inherited = true},
    {field_head, 0},
  [4] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
  [6] =
    {field_parameter, 0},
  [7] =
    {field_parameter, 0},
    {field_parameter, 1},
  [9] =
    {field_parameter, 1, .inherited = true},
  [10] =
    {field_parameter, 0, .inherited = true},
    {field_parameter, 1, .inherited = true},
  [12] =
    {field_condition, 1},
  [13] =
    {field_key, 1},
    {field_value, 3},
  [15] =
    {field_container, 2},
    {field_var, 1},
  [17] =
    {field_exception, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [4] = {
    [0] = alias_sym_lhs,
  },
  [5] = {
    [1] = alias_sym_file,
  },
  [8] = {
    [1] = alias_sym_chunk,
  },
  [9] = {
    [0] = alias_sym_lhs,
    [2] = alias_sym_rhs,
  },
  [13] = {
    [2] = alias_sym_chunk,
  },
  [14] = {
    [1] = alias_sym_modifier,
  },
  [15] = {
    [1] = alias_sym_indices,
  },
  [16] = {
    [3] = alias_sym_chunk,
  },
  [18] = {
    [4] = alias_sym_chunk,
  },
  [19] = {
    [3] = alias_sym_chunk,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__statements, 2,
    sym__statements,
    alias_sym_chunk,
  aux_sym__assignment_repeat1, 3,
    aux_sym__assignment_repeat1,
    alias_sym_indices,
    alias_sym_rhs,
  aux_sym__assignment_repeat3, 2,
    aux_sym__assignment_repeat3,
    alias_sym_lhs,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 3,
  [6] = 3,
  [7] = 2,
  [8] = 4,
  [9] = 9,
  [10] = 2,
  [11] = 11,
  [12] = 3,
  [13] = 13,
  [14] = 3,
  [15] = 4,
  [16] = 4,
  [17] = 2,
  [18] = 3,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 4,
  [23] = 23,
  [24] = 3,
  [25] = 25,
  [26] = 2,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 29,
  [37] = 30,
  [38] = 32,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 43,
  [46] = 46,
  [47] = 43,
  [48] = 43,
  [49] = 49,
  [50] = 50,
  [51] = 49,
  [52] = 52,
  [53] = 49,
  [54] = 49,
  [55] = 55,
  [56] = 43,
  [57] = 49,
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
  [69] = 61,
  [70] = 62,
  [71] = 71,
  [72] = 63,
  [73] = 73,
  [74] = 74,
  [75] = 39,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 78,
  [80] = 80,
  [81] = 78,
  [82] = 82,
  [83] = 80,
  [84] = 80,
  [85] = 78,
  [86] = 82,
  [87] = 80,
  [88] = 80,
  [89] = 82,
  [90] = 82,
  [91] = 78,
  [92] = 80,
  [93] = 82,
  [94] = 94,
  [95] = 94,
  [96] = 94,
  [97] = 94,
  [98] = 94,
  [99] = 94,
  [100] = 100,
  [101] = 101,
  [102] = 42,
  [103] = 103,
  [104] = 52,
  [105] = 103,
  [106] = 106,
  [107] = 103,
  [108] = 108,
  [109] = 109,
  [110] = 44,
  [111] = 55,
  [112] = 50,
  [113] = 41,
  [114] = 109,
  [115] = 109,
  [116] = 116,
  [117] = 46,
  [118] = 109,
  [119] = 119,
  [120] = 120,
  [121] = 109,
  [122] = 62,
  [123] = 63,
  [124] = 67,
  [125] = 59,
  [126] = 61,
  [127] = 65,
  [128] = 58,
  [129] = 66,
  [130] = 41,
  [131] = 55,
  [132] = 132,
  [133] = 74,
  [134] = 77,
  [135] = 42,
  [136] = 73,
  [137] = 46,
  [138] = 68,
  [139] = 76,
  [140] = 61,
  [141] = 71,
  [142] = 62,
  [143] = 52,
  [144] = 63,
  [145] = 63,
  [146] = 58,
  [147] = 59,
  [148] = 66,
  [149] = 62,
  [150] = 65,
  [151] = 61,
  [152] = 67,
  [153] = 52,
  [154] = 55,
  [155] = 155,
  [156] = 41,
  [157] = 42,
  [158] = 46,
  [159] = 71,
  [160] = 74,
  [161] = 68,
  [162] = 76,
  [163] = 61,
  [164] = 65,
  [165] = 132,
  [166] = 62,
  [167] = 66,
  [168] = 58,
  [169] = 67,
  [170] = 59,
  [171] = 63,
  [172] = 76,
  [173] = 71,
  [174] = 68,
  [175] = 74,
  [176] = 155,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 46,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 66,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 55,
  [208] = 41,
  [209] = 52,
  [210] = 44,
  [211] = 42,
  [212] = 212,
  [213] = 46,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 62,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 61,
  [225] = 63,
  [226] = 66,
  [227] = 227,
  [228] = 59,
  [229] = 67,
  [230] = 58,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 65,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 243,
  [245] = 243,
  [246] = 246,
  [247] = 247,
  [248] = 77,
  [249] = 243,
  [250] = 74,
  [251] = 76,
  [252] = 243,
  [253] = 71,
  [254] = 254,
  [255] = 68,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 264,
  [266] = 264,
  [267] = 264,
  [268] = 268,
  [269] = 264,
  [270] = 270,
  [271] = 192,
  [272] = 272,
  [273] = 272,
  [274] = 272,
  [275] = 275,
  [276] = 276,
  [277] = 198,
  [278] = 278,
  [279] = 279,
  [280] = 202,
  [281] = 279,
  [282] = 282,
  [283] = 272,
  [284] = 204,
  [285] = 272,
  [286] = 272,
  [287] = 190,
  [288] = 288,
  [289] = 272,
  [290] = 191,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 293,
  [296] = 296,
  [297] = 212,
  [298] = 298,
  [299] = 299,
  [300] = 291,
  [301] = 301,
  [302] = 302,
  [303] = 292,
  [304] = 301,
  [305] = 305,
  [306] = 293,
  [307] = 294,
  [308] = 294,
  [309] = 293,
  [310] = 298,
  [311] = 311,
  [312] = 292,
  [313] = 291,
  [314] = 301,
  [315] = 302,
  [316] = 292,
  [317] = 317,
  [318] = 292,
  [319] = 293,
  [320] = 294,
  [321] = 294,
  [322] = 301,
  [323] = 302,
  [324] = 291,
  [325] = 301,
  [326] = 291,
  [327] = 301,
  [328] = 291,
  [329] = 301,
  [330] = 291,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 298,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 215,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 6688
    ? (c < 3077
      ? (c < 2406
        ? (c < 1488
          ? (c < 750
            ? (c < 188
              ? (c < 170
                ? (c < '_'
                  ? (c >= '0' && c <= 'Z')
                  : (c <= '_' || (c >= 'a' && c <= '~')))
                : (c <= 170 || (c < 181
                  ? (c >= 178 && c <= 179)
                  : (c <= 181 || (c >= 185 && c <= 186)))))
              : (c <= 190 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 910
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : (c <= 906 || c == 908))))
              : (c <= 929 || (c < 1329
                ? (c < 1015
                  ? (c >= 931 && c <= 1013)
                  : (c <= 1153 || (c >= 1162 && c <= 1327)))
                : (c <= 1366 || (c < 1376
                  ? c == 1369
                  : c <= 1416)))))))
          : (c <= 1514 || (c < 2036
            ? (c < 1774
              ? (c < 1646
                ? (c < 1568
                  ? (c >= 1519 && c <= 1522)
                  : (c <= 1610 || (c >= 1632 && c <= 1641)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : (c <= 1749 || (c >= 1765 && c <= 1766)))))
              : (c <= 1788 || (c < 1869
                ? (c < 1808
                  ? c == 1791
                  : (c <= 1808 || (c >= 1810 && c <= 1839)))
                : (c <= 1957 || (c < 1984
                  ? c == 1969
                  : c <= 2026)))))
            : (c <= 2037 || (c < 2160
              ? (c < 2084
                ? (c < 2048
                  ? c == 2042
                  : (c <= 2069 || c == 2074))
                : (c <= 2084 || (c < 2112
                  ? c == 2088
                  : (c <= 2136 || (c >= 2144 && c <= 2154)))))
              : (c <= 2183 || (c < 2365
                ? (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : (c <= 2249 || (c >= 2308 && c <= 2361)))
                : (c <= 2365 || (c < 2392
                  ? c == 2384
                  : c <= 2401)))))))))
        : (c <= 2415 || (c < 2738
          ? (c < 2565
            ? (c < 2493
              ? (c < 2451
                ? (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : (c <= 2444 || (c >= 2447 && c <= 2448)))
                : (c <= 2472 || (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))))
              : (c <= 2493 || (c < 2534
                ? (c < 2524
                  ? c == 2510
                  : (c <= 2525 || (c >= 2527 && c <= 2529)))
                : (c <= 2545 || (c < 2556
                  ? (c >= 2548 && c <= 2553)
                  : c <= 2556)))))
            : (c <= 2570 || (c < 2654
              ? (c < 2610
                ? (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : (c <= 2600 || (c >= 2602 && c <= 2608)))
                : (c <= 2611 || (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : (c <= 2617 || (c >= 2649 && c <= 2652)))))
              : (c <= 2654 || (c < 2703
                ? (c < 2674
                  ? (c >= 2662 && c <= 2671)
                  : (c <= 2676 || (c >= 2693 && c <= 2701)))
                : (c <= 2705 || (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : c <= 2736)))))))
          : (c <= 2739 || (c < 2911
            ? (c < 2831
              ? (c < 2784
                ? (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : (c <= 2749 || c == 2768))
                : (c <= 2785 || (c < 2809
                  ? (c >= 2790 && c <= 2799)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))))
              : (c <= 2832 || (c < 2869
                ? (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : (c <= 2864 || (c >= 2866 && c <= 2867)))
                : (c <= 2873 || (c < 2908
                  ? c == 2877
                  : c <= 2909)))))
            : (c <= 2913 || (c < 2972
              ? (c < 2949
                ? (c < 2929
                  ? (c >= 2918 && c <= 2927)
                  : (c <= 2935 || c == 2947))
                : (c <= 2954 || (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : (c <= 2965 || (c >= 2969 && c <= 2970)))))
              : (c <= 2972 || (c < 2990
                ? (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : (c <= 2980 || (c >= 2984 && c <= 2986)))
                : (c <= 3001 || (c < 3046
                  ? c == 3024
                  : c <= 3058)))))))))))
      : (c <= 3084 || (c < 4186
        ? (c < 3461
          ? (c < 3253
            ? (c < 3174
              ? (c < 3133
                ? (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : (c <= 3112 || (c >= 3114 && c <= 3129)))
                : (c <= 3133 || (c < 3165
                  ? (c >= 3160 && c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3169)))))
              : (c <= 3183 || (c < 3214
                ? (c < 3200
                  ? (c >= 3192 && c <= 3198)
                  : (c <= 3200 || (c >= 3205 && c <= 3212)))
                : (c <= 3216 || (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : c <= 3251)))))
            : (c <= 3257 || (c < 3346
              ? (c < 3302
                ? (c < 3293
                  ? c == 3261
                  : (c <= 3294 || (c >= 3296 && c <= 3297)))
                : (c <= 3311 || (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : (c <= 3340 || (c >= 3342 && c <= 3344)))))
              : (c <= 3386 || (c < 3416
                ? (c < 3406
                  ? c == 3389
                  : (c <= 3406 || (c >= 3412 && c <= 3414)))
                : (c <= 3425 || (c < 3450
                  ? (c >= 3430 && c <= 3448)
                  : c <= 3455)))))))
          : (c <= 3478 || (c < 3751
            ? (c < 3648
              ? (c < 3520
                ? (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : (c <= 3515 || c == 3517))
                : (c <= 3526 || (c < 3585
                  ? (c >= 3558 && c <= 3567)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))))
              : (c <= 3654 || (c < 3718
                ? (c < 3713
                  ? (c >= 3664 && c <= 3673)
                  : (c <= 3714 || c == 3716))
                : (c <= 3722 || (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : c <= 3749)))))
            : (c <= 3760 || (c < 3872
              ? (c < 3782
                ? (c < 3773
                  ? (c >= 3762 && c <= 3763)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))
                : (c <= 3782 || (c < 3804
                  ? (c >= 3792 && c <= 3801)
                  : (c <= 3807 || c == 3840))))
              : (c <= 3891 || (c < 4096
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : (c <= 3948 || (c >= 3976 && c <= 3980)))
                : (c <= 4138 || (c < 4176
                  ? (c >= 4159 && c <= 4169)
                  : c <= 4181)))))))))
        : (c <= 4189 || (c < 5112
          ? (c < 4698
            ? (c < 4295
              ? (c < 4213
                ? (c < 4197
                  ? c == 4193
                  : (c <= 4198 || (c >= 4206 && c <= 4208)))
                : (c <= 4225 || (c < 4240
                  ? c == 4238
                  : (c <= 4249 || (c >= 4256 && c <= 4293)))))
              : (c <= 4295 || (c < 4682
                ? (c < 4304
                  ? c == 4301
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))
                : (c <= 4685 || (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : c <= 4696)))))
            : (c <= 4701 || (c < 4808
              ? (c < 4786
                ? (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))
              : (c <= 4822 || (c < 4969
                ? (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))
                : (c <= 4988 || (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : c <= 5109)))))))
          : (c <= 5117 || (c < 6128
            ? (c < 5952
              ? (c < 5792
                ? (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))
                : (c <= 5866 || (c < 5888
                  ? (c >= 5870 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))))
              : (c <= 5969 || (c < 6103
                ? (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : (c <= 6000 || (c >= 6016 && c <= 6067)))
                : (c <= 6103 || (c < 6112
                  ? c == 6108
                  : c <= 6121)))))
            : (c <= 6137 || (c < 6400
              ? (c < 6279
                ? (c < 6176
                  ? (c >= 6160 && c <= 6169)
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))
              : (c <= 6430 || (c < 6576
                ? (c < 6512
                  ? (c >= 6470 && c <= 6509)
                  : (c <= 6516 || (c >= 6528 && c <= 6571)))
                : (c <= 6601 || (c < 6656
                  ? (c >= 6608 && c <= 6618)
                  : c <= 6678)))))))))))))
    : (c <= 6740 || (c < 43138
      ? (c < 11264
        ? (c < 8118
          ? (c < 7401
            ? (c < 7086
              ? (c < 6917
                ? (c < 6800
                  ? (c >= 6784 && c <= 6793)
                  : (c <= 6809 || c == 6823))
                : (c <= 6963 || (c < 6992
                  ? (c >= 6981 && c <= 6988)
                  : (c <= 7001 || (c >= 7043 && c <= 7072)))))
              : (c <= 7141 || (c < 7296
                ? (c < 7232
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7241 || (c >= 7245 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 8008
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8029
                ? (c < 8025
                  ? (c >= 8016 && c <= 8023)
                  : (c <= 8025 || c == 8027))
                : (c <= 8029 || (c < 8064
                  ? (c >= 8031 && c <= 8061)
                  : c <= 8116)))))))
          : (c <= 8124 || (c < 8458
            ? (c < 8182
              ? (c < 8144
                ? (c < 8130
                  ? c == 8126
                  : (c <= 8132 || (c >= 8134 && c <= 8140)))
                : (c <= 8147 || (c < 8160
                  ? (c >= 8150 && c <= 8155)
                  : (c <= 8172 || (c >= 8178 && c <= 8180)))))
              : (c <= 8188 || (c < 8336
                ? (c < 8308
                  ? (c >= 8304 && c <= 8305)
                  : (c <= 8313 || (c >= 8319 && c <= 8329)))
                : (c <= 8348 || (c < 8455
                  ? c == 8450
                  : c <= 8455)))))
            : (c <= 8467 || (c < 8508
              ? (c < 8486
                ? (c < 8473
                  ? c == 8469
                  : (c <= 8477 || c == 8484))
                : (c <= 8486 || (c < 8490
                  ? c == 8488
                  : (c <= 8493 || (c >= 8495 && c <= 8505)))))
              : (c <= 8511 || (c < 9312
                ? (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : (c <= 8526 || (c >= 8528 && c <= 8585)))
                : (c <= 9371 || (c < 10102
                  ? (c >= 9450 && c <= 9471)
                  : c <= 10131)))))))))
        : (c <= 11492 || (c < 12704
          ? (c < 11720
            ? (c < 11631
              ? (c < 11520
                ? (c < 11506
                  ? (c >= 11499 && c <= 11502)
                  : (c <= 11507 || c == 11517))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : (c <= 11565 || (c >= 11568 && c <= 11623)))))
              : (c <= 11631 || (c < 11696
                ? (c < 11680
                  ? (c >= 11648 && c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))
                : (c <= 11702 || (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : c <= 11718)))))
            : (c <= 11726 || (c < 12353
              ? (c < 12293
                ? (c < 11736
                  ? (c >= 11728 && c <= 11734)
                  : (c <= 11742 || c == 11823))
                : (c <= 12295 || (c < 12337
                  ? (c >= 12321 && c <= 12329)
                  : (c <= 12341 || (c >= 12344 && c <= 12348)))))
              : (c <= 12438 || (c < 12549
                ? (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : (c <= 12538 || (c >= 12540 && c <= 12543)))
                : (c <= 12591 || (c < 12690
                  ? (c >= 12593 && c <= 12686)
                  : c <= 12693)))))))
          : (c <= 12735 || (c < 42623
            ? (c < 19903
              ? (c < 12881
                ? (c < 12832
                  ? (c >= 12784 && c <= 12799)
                  : (c <= 12841 || (c >= 12872 && c <= 12879)))
                : (c <= 12895 || (c < 12977
                  ? (c >= 12928 && c <= 12937)
                  : (c <= 12991 || c == 13312))))
              : (c <= 19903 || (c < 42240
                ? (c < 40959
                  ? c == 19968
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42560
                  ? (c >= 42512 && c <= 42539)
                  : c <= 42606)))))
            : (c <= 42653 || (c < 42965
              ? (c < 42891
                ? (c < 42775
                  ? (c >= 42656 && c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42954 || (c < 42963
                  ? (c >= 42960 && c <= 42961)
                  : c <= 42963)))
              : (c <= 42969 || (c < 43020
                ? (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))
                : (c <= 43042 || (c < 43072
                  ? (c >= 43056 && c <= 43061)
                  : c <= 43123)))))))))))
      : (c <= 43187 || (c < 65345
        ? (c < 43808
          ? (c < 43600
            ? (c < 43396
              ? (c < 43261
                ? (c < 43250
                  ? (c >= 43216 && c <= 43225)
                  : (c <= 43255 || c == 43259))
                : (c <= 43262 || (c < 43312
                  ? (c >= 43264 && c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))))
              : (c <= 43442 || (c < 43520
                ? (c < 43488
                  ? (c >= 43471 && c <= 43481)
                  : (c <= 43492 || (c >= 43494 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43609 || (c < 43714
              ? (c < 43697
                ? (c < 43642
                  ? (c >= 43616 && c <= 43638)
                  : (c <= 43642 || (c >= 43646 && c <= 43695)))
                : (c <= 43697 || (c < 43705
                  ? (c >= 43701 && c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43754 || (c >= 43762 && c <= 43764)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 44032
                  ? (c >= 44016 && c <= 44025)
                  : (c <= 44032 || c == 55203))))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64848
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : (c <= 64433 || (c >= 64467 && c <= 64829)))))
              : (c <= 64911 || (c < 65142
                ? (c < 65008
                  ? (c >= 64914 && c <= 64967)
                  : (c <= 65019 || (c >= 65136 && c <= 65140)))
                : (c <= 65276 || (c < 65313
                  ? (c >= 65296 && c <= 65305)
                  : c <= 65338)))))))))
        : (c <= 65370 || (c < 66816
          ? (c < 65930
            ? (c < 65576
              ? (c < 65490
                ? (c < 65474
                  ? (c >= 65382 && c <= 65470)
                  : (c <= 65479 || (c >= 65482 && c <= 65487)))
                : (c <= 65495 || (c < 65536
                  ? (c >= 65498 && c <= 65500)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))))
              : (c <= 65594 || (c < 65664
                ? (c < 65599
                  ? (c >= 65596 && c <= 65597)
                  : (c <= 65613 || (c >= 65616 && c <= 65629)))
                : (c <= 65786 || (c < 65856
                  ? (c >= 65799 && c <= 65843)
                  : c <= 65912)))))
            : (c <= 65931 || (c < 66464
              ? (c < 66304
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66273 && c <= 66299)))
                : (c <= 66339 || (c < 66384
                  ? (c >= 66349 && c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66720
                ? (c < 66513
                  ? (c >= 66504 && c <= 66511)
                  : (c <= 66517 || (c >= 66560 && c <= 66717)))
                : (c <= 66729 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67506
            ? (c < 66995
              ? (c < 66956
                ? (c < 66928
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))
                : (c <= 66962 || (c < 66967
                  ? (c >= 66964 && c <= 66965)
                  : (c <= 66977 || (c >= 66979 && c <= 66993)))))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67672
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67751
                  ? (c >= 67705 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 6608
    ? (c < 2990
      ? (c < 2365
        ? (c < 1329
          ? (c < 710
            ? (c < 178
              ? (c < '_'
                ? (c < '0'
                  ? c == '-'
                  : (c <= ':' || (c >= 'A' && c <= 'Z')))
                : (c <= '_' || (c < '~'
                  ? (c >= 'a' && c <= 'z')
                  : (c <= '~' || c == 170))))
              : (c <= 179 || (c < 192
                ? (c < 185
                  ? c == 181
                  : (c <= 186 || (c >= 188 && c <= 190)))
                : (c <= 214 || (c < 248
                  ? (c >= 216 && c <= 246)
                  : c <= 705)))))
            : (c <= 721 || (c < 902
              ? (c < 880
                ? (c < 748
                  ? (c >= 736 && c <= 740)
                  : (c <= 748 || c == 750))
                : (c <= 884 || (c < 890
                  ? (c >= 886 && c <= 887)
                  : (c <= 893 || c == 895))))
              : (c <= 902 || (c < 931
                ? (c < 908
                  ? (c >= 904 && c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))
                : (c <= 1013 || (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)))))))
          : (c <= 1366 || (c < 1869
            ? (c < 1649
              ? (c < 1519
                ? (c < 1376
                  ? c == 1369
                  : (c <= 1416 || (c >= 1488 && c <= 1514)))
                : (c <= 1522 || (c < 1632
                  ? (c >= 1568 && c <= 1610)
                  : (c <= 1641 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1765
                  ? c == 1749
                  : (c <= 1766 || (c >= 1774 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2088
              ? (c < 2042
                ? (c < 1984
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : (c <= 2074 || c == 2084))))
              : (c <= 2088 || (c < 2185
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : (c <= 2154 || (c >= 2160 && c <= 2183)))
                : (c <= 2190 || (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : c <= 2361)))))))))
        : (c <= 2365 || (c < 2703
          ? (c < 2534
            ? (c < 2474
              ? (c < 2417
                ? (c < 2392
                  ? c == 2384
                  : (c <= 2401 || (c >= 2406 && c <= 2415)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : (c <= 2448 || (c >= 2451 && c <= 2472)))))
              : (c <= 2480 || (c < 2510
                ? (c < 2486
                  ? c == 2482
                  : (c <= 2489 || c == 2493))
                : (c <= 2510 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : c <= 2529)))))
            : (c <= 2545 || (c < 2613
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2548 && c <= 2553)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : (c <= 2608 || (c >= 2610 && c <= 2611)))))
              : (c <= 2614 || (c < 2662
                ? (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : (c <= 2652 || c == 2654))
                : (c <= 2671 || (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : c <= 2701)))))))
          : (c <= 2705 || (c < 2869
            ? (c < 2790
              ? (c < 2741
                ? (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))
                : (c <= 2745 || (c < 2768
                  ? c == 2749
                  : (c <= 2768 || (c >= 2784 && c <= 2785)))))
              : (c <= 2799 || (c < 2835
                ? (c < 2821
                  ? c == 2809
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))
                : (c <= 2856 || (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : c <= 2867)))))
            : (c <= 2873 || (c < 2958
              ? (c < 2918
                ? (c < 2908
                  ? c == 2877
                  : (c <= 2909 || (c >= 2911 && c <= 2913)))
                : (c <= 2927 || (c < 2947
                  ? (c >= 2929 && c <= 2935)
                  : (c <= 2947 || (c >= 2949 && c <= 2954)))))
              : (c <= 2960 || (c < 2974
                ? (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : (c <= 2970 || c == 2972))
                : (c <= 2975 || (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : c <= 2986)))))))))))
      : (c <= 3001 || (c < 4096
        ? (c < 3416
          ? (c < 3214
            ? (c < 3160
              ? (c < 3086
                ? (c < 3046
                  ? c == 3024
                  : (c <= 3058 || (c >= 3077 && c <= 3084)))
                : (c <= 3088 || (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : (c <= 3129 || c == 3133))))
              : (c <= 3162 || (c < 3192
                ? (c < 3168
                  ? c == 3165
                  : (c <= 3169 || (c >= 3174 && c <= 3183)))
                : (c <= 3198 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : (c <= 3297 || (c >= 3302 && c <= 3311)))))
              : (c <= 3314 || (c < 3389
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : (c <= 3344 || (c >= 3346 && c <= 3386)))
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3718
            ? (c < 3558
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3430 && c <= 3448)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : (c <= 3517 || (c >= 3520 && c <= 3526)))))
              : (c <= 3567 || (c < 3664
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3673 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3792
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : (c <= 3780 || c == 3782))))
              : (c <= 3801 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : (c <= 3840 || (c >= 3872 && c <= 3891)))
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4969
          ? (c < 4682
            ? (c < 4238
              ? (c < 4193
                ? (c < 4176
                  ? (c >= 4159 && c <= 4169)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))))
              : (c <= 4238 || (c < 4301
                ? (c < 4256
                  ? (c >= 4240 && c <= 4249)
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4792
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : (c <= 4784 || (c >= 4786 && c <= 4789)))))
              : (c <= 4798 || (c < 4824
                ? (c < 4802
                  ? c == 4800
                  : (c <= 4805 || (c >= 4808 && c <= 4822)))
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 4988 || (c < 6103
            ? (c < 5870
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : (c <= 5786 || (c >= 5792 && c <= 5866)))))
              : (c <= 5880 || (c < 5984
                ? (c < 5919
                  ? (c >= 5888 && c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6016
                  ? (c >= 5998 && c <= 6000)
                  : c <= 6067)))))
            : (c <= 6103 || (c < 6314
              ? (c < 6160
                ? (c < 6112
                  ? c == 6108
                  : (c <= 6121 || (c >= 6128 && c <= 6137)))
                : (c <= 6169 || (c < 6272
                  ? (c >= 6176 && c <= 6264)
                  : (c <= 6276 || (c >= 6279 && c <= 6312)))))
              : (c <= 6314 || (c < 6512
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : (c <= 6430 || (c >= 6470 && c <= 6509)))
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6618 || (c < 43072
      ? (c < 9450
        ? (c < 8031
          ? (c < 7312
            ? (c < 6992
              ? (c < 6800
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || (c >= 6784 && c <= 6793)))
                : (c <= 6809 || (c < 6917
                  ? c == 6823
                  : (c <= 6963 || (c >= 6981 && c <= 6988)))))
              : (c <= 7001 || (c < 7232
                ? (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : (c <= 7141 || (c >= 7168 && c <= 7203)))
                : (c <= 7241 || (c < 7296
                  ? (c >= 7245 && c <= 7293)
                  : c <= 7304)))))
            : (c <= 7354 || (c < 7960
              ? (c < 7413
                ? (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : (c <= 7404 || (c >= 7406 && c <= 7411)))
                : (c <= 7414 || (c < 7424
                  ? c == 7418
                  : (c <= 7615 || (c >= 7680 && c <= 7957)))))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8160
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : (c <= 8147 || (c >= 8150 && c <= 8155)))))
              : (c <= 8172 || (c < 8308
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || (c >= 8304 && c <= 8305)))
                : (c <= 8313 || (c < 8336
                  ? (c >= 8319 && c <= 8329)
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8490
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : (c <= 8486 || c == 8488))))
              : (c <= 8493 || (c < 8526
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : (c <= 8511 || (c >= 8517 && c <= 8521)))
                : (c <= 8526 || (c < 9312
                  ? (c >= 8528 && c <= 8585)
                  : c <= 9371)))))))))
        : (c <= 9471 || (c < 12593
          ? (c < 11704
            ? (c < 11565
              ? (c < 11506
                ? (c < 11264
                  ? (c >= 10102 && c <= 10131)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))
                : (c <= 11507 || (c < 11520
                  ? c == 11517
                  : (c <= 11557 || c == 11559))))
              : (c <= 11565 || (c < 11680
                ? (c < 11631
                  ? (c >= 11568 && c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))
                : (c <= 11686 || (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : c <= 11702)))))
            : (c <= 11710 || (c < 12337
              ? (c < 11736
                ? (c < 11720
                  ? (c >= 11712 && c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))
                : (c <= 11742 || (c < 12293
                  ? c == 11823
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))
              : (c <= 12341 || (c < 12449
                ? (c < 12353
                  ? (c >= 12344 && c <= 12348)
                  : (c <= 12438 || (c >= 12445 && c <= 12447)))
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42512
            ? (c < 12977
              ? (c < 12832
                ? (c < 12704
                  ? (c >= 12690 && c <= 12693)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))
                : (c <= 12841 || (c < 12881
                  ? (c >= 12872 && c <= 12879)
                  : (c <= 12895 || (c >= 12928 && c <= 12937)))))
              : (c <= 12991 || (c < 40959
                ? (c < 19903
                  ? c == 13312
                  : (c <= 19903 || c == 19968))
                : (c <= 42124 || (c < 42240
                  ? (c >= 42192 && c <= 42237)
                  : c <= 42508)))))
            : (c <= 42539 || (c < 42963
              ? (c < 42775
                ? (c < 42623
                  ? (c >= 42560 && c <= 42606)
                  : (c <= 42653 || (c >= 42656 && c <= 42735)))
                : (c <= 42783 || (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))))
              : (c <= 42963 || (c < 43015
                ? (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : (c <= 43009 || (c >= 43011 && c <= 43013)))
                : (c <= 43018 || (c < 43056
                  ? (c >= 43020 && c <= 43042)
                  : c <= 43061)))))))))))
      : (c <= 43123 || (c < 65313
        ? (c < 43793
          ? (c < 43588
            ? (c < 43360
              ? (c < 43259
                ? (c < 43216
                  ? (c >= 43138 && c <= 43187)
                  : (c <= 43225 || (c >= 43250 && c <= 43255)))
                : (c <= 43259 || (c < 43264
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))))
              : (c <= 43388 || (c < 43494
                ? (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : (c <= 43481 || (c >= 43488 && c <= 43492)))
                : (c <= 43518 || (c < 43584
                  ? (c >= 43520 && c <= 43560)
                  : c <= 43586)))))
            : (c <= 43595 || (c < 43712
              ? (c < 43646
                ? (c < 43616
                  ? (c >= 43600 && c <= 43609)
                  : (c <= 43638 || c == 43642))
                : (c <= 43695 || (c < 43701
                  ? c == 43697
                  : (c <= 43702 || (c >= 43705 && c <= 43709)))))
              : (c <= 43712 || (c < 43762
                ? (c < 43739
                  ? c == 43714
                  : (c <= 43741 || (c >= 43744 && c <= 43754)))
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44016
                  ? (c >= 43888 && c <= 44002)
                  : (c <= 44025 || c == 44032))))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64467
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : (c <= 64324 || (c >= 64326 && c <= 64433)))))
              : (c <= 64829 || (c < 65136
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : (c <= 64967 || (c >= 65008 && c <= 65019)))
                : (c <= 65140 || (c < 65296
                  ? (c >= 65142 && c <= 65276)
                  : c <= 65305)))))))))
        : (c <= 65338 || (c < 66776
          ? (c < 65856
            ? (c < 65549
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : (c <= 65500 || (c >= 65536 && c <= 65547)))))
              : (c <= 65574 || (c < 65616
                ? (c < 65596
                  ? (c >= 65576 && c <= 65594)
                  : (c <= 65597 || (c >= 65599 && c <= 65613)))
                : (c <= 65629 || (c < 65799
                  ? (c >= 65664 && c <= 65786)
                  : c <= 65843)))))
            : (c <= 65912 || (c < 66432
              ? (c < 66273
                ? (c < 66176
                  ? (c >= 65930 && c <= 65931)
                  : (c <= 66204 || (c >= 66208 && c <= 66256)))
                : (c <= 66299 || (c < 66349
                  ? (c >= 66304 && c <= 66339)
                  : (c <= 66378 || (c >= 66384 && c <= 66421)))))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : (c <= 66511 || (c >= 66513 && c <= 66517)))
                : (c <= 66717 || (c < 66736
                  ? (c >= 66720 && c <= 66729)
                  : c <= 66771)))))))
          : (c <= 66811 || (c < 67463
            ? (c < 66979
              ? (c < 66940
                ? (c < 66864
                  ? (c >= 66816 && c <= 66855)
                  : (c <= 66915 || (c >= 66928 && c <= 66938)))
                : (c <= 66954 || (c < 66964
                  ? (c >= 66956 && c <= 66962)
                  : (c <= 66965 || (c >= 66967 && c <= 66977)))))
              : (c <= 66993 || (c < 67392
                ? (c < 67003
                  ? (c >= 66995 && c <= 67001)
                  : (c <= 67004 || (c >= 67072 && c <= 67382)))
                : (c <= 67413 || (c < 67456
                  ? (c >= 67424 && c <= 67431)
                  : c <= 67461)))))
            : (c <= 67504 || (c < 67672
              ? (c < 67594
                ? (c < 67584
                  ? (c >= 67506 && c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))))
              : (c <= 67702 || (c < 67828
                ? (c < 67751
                  ? (c >= 67705 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_3(int32_t c) {
  return (c < 6656
    ? (c < 3024
      ? (c < 2384
        ? (c < 1369
          ? (c < 736
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= ':')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'z' || (c < 170
                  ? c == '~'
                  : (c <= 170 || (c >= 178 && c <= 179)))))
              : (c <= 181 || (c < 216
                ? (c < 188
                  ? (c >= 185 && c <= 186)
                  : (c <= 190 || (c >= 192 && c <= 214)))
                : (c <= 246 || (c < 710
                  ? (c >= 248 && c <= 705)
                  : c <= 721)))))
            : (c <= 740 || (c < 904
              ? (c < 886
                ? (c < 750
                  ? c == 748
                  : (c <= 750 || (c >= 880 && c <= 884)))
                : (c <= 887 || (c < 895
                  ? (c >= 890 && c <= 893)
                  : (c <= 895 || c == 902))))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1969
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1646
                  ? (c >= 1632 && c <= 1641)
                  : (c <= 1647 || (c >= 1649 && c <= 1747)))))
              : (c <= 1749 || (c < 1808
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2112
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1984 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : (c <= 2084 || c == 2088))))
              : (c <= 2136 || (c < 2208
                ? (c < 2160
                  ? (c >= 2144 && c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))
                : (c <= 2249 || (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : c <= 2365)))))))))
        : (c <= 2384 || (c < 2707
          ? (c < 2548
            ? (c < 2482
              ? (c < 2437
                ? (c < 2406
                  ? (c >= 2392 && c <= 2401)
                  : (c <= 2415 || (c >= 2417 && c <= 2432)))
                : (c <= 2444 || (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))
              : (c <= 2482 || (c < 2524
                ? (c < 2493
                  ? (c >= 2486 && c <= 2489)
                  : (c <= 2493 || c == 2510))
                : (c <= 2525 || (c < 2534
                  ? (c >= 2527 && c <= 2529)
                  : c <= 2545)))))
            : (c <= 2553 || (c < 2616
              ? (c < 2579
                ? (c < 2565
                  ? c == 2556
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : (c <= 2611 || (c >= 2613 && c <= 2614)))))
              : (c <= 2617 || (c < 2674
                ? (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : (c <= 2654 || (c >= 2662 && c <= 2671)))
                : (c <= 2676 || (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : c <= 2705)))))))
          : (c <= 2728 || (c < 2877
            ? (c < 2809
              ? (c < 2749
                ? (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : (c <= 2739 || (c >= 2741 && c <= 2745)))
                : (c <= 2749 || (c < 2784
                  ? c == 2768
                  : (c <= 2785 || (c >= 2790 && c <= 2799)))))
              : (c <= 2809 || (c < 2858
                ? (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))
                : (c <= 2864 || (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : c <= 2873)))))
            : (c <= 2877 || (c < 2962
              ? (c < 2929
                ? (c < 2911
                  ? (c >= 2908 && c <= 2909)
                  : (c <= 2913 || (c >= 2918 && c <= 2927)))
                : (c <= 2935 || (c < 2949
                  ? c == 2947
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))
              : (c <= 2965 || (c < 2979
                ? (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : (c <= 2972 || (c >= 2974 && c <= 2975)))
                : (c <= 2980 || (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : c <= 3001)))))))))))
      : (c <= 3024 || (c < 4159
        ? (c < 3430
          ? (c < 3218
            ? (c < 3165
              ? (c < 3090
                ? (c < 3077
                  ? (c >= 3046 && c <= 3058)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))
                : (c <= 3112 || (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))))
              : (c <= 3165 || (c < 3200
                ? (c < 3174
                  ? (c >= 3168 && c <= 3169)
                  : (c <= 3183 || (c >= 3192 && c <= 3198)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3293
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3302
                  ? (c >= 3296 && c <= 3297)
                  : (c <= 3311 || (c >= 3313 && c <= 3314)))))
              : (c <= 3340 || (c < 3406
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : (c <= 3386 || c == 3389))
                : (c <= 3406 || (c < 3416
                  ? (c >= 3412 && c <= 3414)
                  : c <= 3425)))))))
          : (c <= 3448 || (c < 3724
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : (c <= 3526 || (c >= 3558 && c <= 3567)))))
              : (c <= 3632 || (c < 3713
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3664 && c <= 3673)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : (c <= 3782 || (c >= 3792 && c <= 3801)))))
              : (c <= 3807 || (c < 3913
                ? (c < 3872
                  ? c == 3840
                  : (c <= 3891 || (c >= 3904 && c <= 3911)))
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4169 || (c < 4992
          ? (c < 4688
            ? (c < 4240
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : (c <= 4225 || c == 4238))))
              : (c <= 4249 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4800
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : (c <= 4789 || (c >= 4792 && c <= 4798)))))
              : (c <= 4800 || (c < 4882
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : (c <= 4822 || (c >= 4824 && c <= 4880)))
                : (c <= 4885 || (c < 4969
                  ? (c >= 4888 && c <= 4954)
                  : c <= 4988)))))))
          : (c <= 5007 || (c < 6108
            ? (c < 5888
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : (c <= 5866 || (c >= 5870 && c <= 5880)))))
              : (c <= 5905 || (c < 5998
                ? (c < 5952
                  ? (c >= 5919 && c <= 5937)
                  : (c <= 5969 || (c >= 5984 && c <= 5996)))
                : (c <= 6000 || (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : c <= 6103)))))
            : (c <= 6108 || (c < 6320
              ? (c < 6176
                ? (c < 6128
                  ? (c >= 6112 && c <= 6121)
                  : (c <= 6137 || (c >= 6160 && c <= 6169)))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : (c <= 6312 || c == 6314))))
              : (c <= 6389 || (c < 6528
                ? (c < 6470
                  ? (c >= 6400 && c <= 6430)
                  : (c <= 6509 || (c >= 6512 && c <= 6516)))
                : (c <= 6571 || (c < 6608
                  ? (c >= 6576 && c <= 6601)
                  : c <= 6618)))))))))))))
    : (c <= 6678 || (c < 43138
      ? (c < 10102
        ? (c < 8064
          ? (c < 7357
            ? (c < 7043
              ? (c < 6823
                ? (c < 6784
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6793 || (c >= 6800 && c <= 6809)))
                : (c <= 6823 || (c < 6981
                  ? (c >= 6917 && c <= 6963)
                  : (c <= 6988 || (c >= 6992 && c <= 7001)))))
              : (c <= 7072 || (c < 7245
                ? (c < 7168
                  ? (c >= 7086 && c <= 7141)
                  : (c <= 7203 || (c >= 7232 && c <= 7241)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7968
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : (c <= 7957 || (c >= 7960 && c <= 7965)))))
              : (c <= 8005 || (c < 8027
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : (c <= 8023 || c == 8025))
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))))))
          : (c <= 8116 || (c < 8455
            ? (c < 8178
              ? (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : (c <= 8155 || (c >= 8160 && c <= 8172)))))
              : (c <= 8180 || (c < 8319
                ? (c < 8304
                  ? (c >= 8182 && c <= 8188)
                  : (c <= 8305 || (c >= 8308 && c <= 8313)))
                : (c <= 8329 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))))
            : (c <= 8455 || (c < 8495
              ? (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : (c <= 8488 || (c >= 8490 && c <= 8493)))))
              : (c <= 8505 || (c < 8528
                ? (c < 8517
                  ? (c >= 8508 && c <= 8511)
                  : (c <= 8521 || c == 8526))
                : (c <= 8585 || (c < 9450
                  ? (c >= 9312 && c <= 9371)
                  : c <= 9471)))))))))
        : (c <= 10131 || (c < 12690
          ? (c < 11712
            ? (c < 11568
              ? (c < 11517
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11517 || (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : (c <= 11559 || c == 11565))))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12344
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12321
                  ? (c >= 12293 && c <= 12295)
                  : (c <= 12329 || (c >= 12337 && c <= 12341)))))
              : (c <= 12348 || (c < 12540
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : (c <= 12447 || (c >= 12449 && c <= 12538)))
                : (c <= 12543 || (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : c <= 12686)))))))
          : (c <= 12693 || (c < 42560
            ? (c < 13312
              ? (c < 12872
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || (c >= 12832 && c <= 12841)))
                : (c <= 12879 || (c < 12928
                  ? (c >= 12881 && c <= 12895)
                  : (c <= 12937 || (c >= 12977 && c <= 12991)))))
              : (c <= 13312 || (c < 42192
                ? (c < 19968
                  ? c == 19903
                  : (c <= 19968 || (c >= 40959 && c <= 42124)))
                : (c <= 42237 || (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42965
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42735 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42960
                  ? (c >= 42891 && c <= 42954)
                  : (c <= 42961 || c == 42963))))
              : (c <= 42969 || (c < 43020
                ? (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))
                : (c <= 43042 || (c < 43072
                  ? (c >= 43056 && c <= 43061)
                  : c <= 43123)))))))))))
      : (c <= 43187 || (c < 65345
        ? (c < 43808
          ? (c < 43600
            ? (c < 43396
              ? (c < 43261
                ? (c < 43250
                  ? (c >= 43216 && c <= 43225)
                  : (c <= 43255 || c == 43259))
                : (c <= 43262 || (c < 43312
                  ? (c >= 43264 && c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))))
              : (c <= 43442 || (c < 43520
                ? (c < 43488
                  ? (c >= 43471 && c <= 43481)
                  : (c <= 43492 || (c >= 43494 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43609 || (c < 43714
              ? (c < 43697
                ? (c < 43642
                  ? (c >= 43616 && c <= 43638)
                  : (c <= 43642 || (c >= 43646 && c <= 43695)))
                : (c <= 43697 || (c < 43705
                  ? (c >= 43701 && c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43754 || (c >= 43762 && c <= 43764)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 44032
                  ? (c >= 44016 && c <= 44025)
                  : (c <= 44032 || c == 55203))))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64848
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : (c <= 64433 || (c >= 64467 && c <= 64829)))))
              : (c <= 64911 || (c < 65142
                ? (c < 65008
                  ? (c >= 64914 && c <= 64967)
                  : (c <= 65019 || (c >= 65136 && c <= 65140)))
                : (c <= 65276 || (c < 65313
                  ? (c >= 65296 && c <= 65305)
                  : c <= 65338)))))))))
        : (c <= 65370 || (c < 66816
          ? (c < 65930
            ? (c < 65576
              ? (c < 65490
                ? (c < 65474
                  ? (c >= 65382 && c <= 65470)
                  : (c <= 65479 || (c >= 65482 && c <= 65487)))
                : (c <= 65495 || (c < 65536
                  ? (c >= 65498 && c <= 65500)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))))
              : (c <= 65594 || (c < 65664
                ? (c < 65599
                  ? (c >= 65596 && c <= 65597)
                  : (c <= 65613 || (c >= 65616 && c <= 65629)))
                : (c <= 65786 || (c < 65856
                  ? (c >= 65799 && c <= 65843)
                  : c <= 65912)))))
            : (c <= 65931 || (c < 66464
              ? (c < 66304
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66273 && c <= 66299)))
                : (c <= 66339 || (c < 66384
                  ? (c >= 66349 && c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66720
                ? (c < 66513
                  ? (c >= 66504 && c <= 66511)
                  : (c <= 66517 || (c >= 66560 && c <= 66717)))
                : (c <= 66729 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67506
            ? (c < 66995
              ? (c < 66956
                ? (c < 66928
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))
                : (c <= 66962 || (c < 66967
                  ? (c >= 66964 && c <= 66965)
                  : (c <= 66977 || (c >= 66979 && c <= 66993)))))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67672
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67751
                  ? (c >= 67705 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_bareword_character_set_1(int32_t c) {
  return (c < 6608
    ? (c < 2990
      ? (c < 2365
        ? (c < 1329
          ? (c < 710
            ? (c < 178
              ? (c < '_'
                ? (c < ','
                  ? (c >= '!' && c <= '%')
                  : (c <= ':' || (c >= '=' && c <= '\\')))
                : (c <= '_' || (c < '~'
                  ? (c >= 'a' && c <= 'z')
                  : (c <= '~' || c == 170))))
              : (c <= 179 || (c < 192
                ? (c < 185
                  ? c == 181
                  : (c <= 186 || (c >= 188 && c <= 190)))
                : (c <= 214 || (c < 248
                  ? (c >= 216 && c <= 246)
                  : c <= 705)))))
            : (c <= 721 || (c < 902
              ? (c < 880
                ? (c < 748
                  ? (c >= 736 && c <= 740)
                  : (c <= 748 || c == 750))
                : (c <= 884 || (c < 890
                  ? (c >= 886 && c <= 887)
                  : (c <= 893 || c == 895))))
              : (c <= 902 || (c < 931
                ? (c < 908
                  ? (c >= 904 && c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))
                : (c <= 1013 || (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)))))))
          : (c <= 1366 || (c < 1869
            ? (c < 1649
              ? (c < 1519
                ? (c < 1376
                  ? c == 1369
                  : (c <= 1416 || (c >= 1488 && c <= 1514)))
                : (c <= 1522 || (c < 1632
                  ? (c >= 1568 && c <= 1610)
                  : (c <= 1641 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1765
                  ? c == 1749
                  : (c <= 1766 || (c >= 1774 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2088
              ? (c < 2042
                ? (c < 1984
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : (c <= 2074 || c == 2084))))
              : (c <= 2088 || (c < 2185
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : (c <= 2154 || (c >= 2160 && c <= 2183)))
                : (c <= 2190 || (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : c <= 2361)))))))))
        : (c <= 2365 || (c < 2703
          ? (c < 2534
            ? (c < 2474
              ? (c < 2417
                ? (c < 2392
                  ? c == 2384
                  : (c <= 2401 || (c >= 2406 && c <= 2415)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : (c <= 2448 || (c >= 2451 && c <= 2472)))))
              : (c <= 2480 || (c < 2510
                ? (c < 2486
                  ? c == 2482
                  : (c <= 2489 || c == 2493))
                : (c <= 2510 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : c <= 2529)))))
            : (c <= 2545 || (c < 2613
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2548 && c <= 2553)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : (c <= 2608 || (c >= 2610 && c <= 2611)))))
              : (c <= 2614 || (c < 2662
                ? (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : (c <= 2652 || c == 2654))
                : (c <= 2671 || (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : c <= 2701)))))))
          : (c <= 2705 || (c < 2869
            ? (c < 2790
              ? (c < 2741
                ? (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))
                : (c <= 2745 || (c < 2768
                  ? c == 2749
                  : (c <= 2768 || (c >= 2784 && c <= 2785)))))
              : (c <= 2799 || (c < 2835
                ? (c < 2821
                  ? c == 2809
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))
                : (c <= 2856 || (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : c <= 2867)))))
            : (c <= 2873 || (c < 2958
              ? (c < 2918
                ? (c < 2908
                  ? c == 2877
                  : (c <= 2909 || (c >= 2911 && c <= 2913)))
                : (c <= 2927 || (c < 2947
                  ? (c >= 2929 && c <= 2935)
                  : (c <= 2947 || (c >= 2949 && c <= 2954)))))
              : (c <= 2960 || (c < 2974
                ? (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : (c <= 2970 || c == 2972))
                : (c <= 2975 || (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : c <= 2986)))))))))))
      : (c <= 3001 || (c < 4096
        ? (c < 3416
          ? (c < 3214
            ? (c < 3160
              ? (c < 3086
                ? (c < 3046
                  ? c == 3024
                  : (c <= 3058 || (c >= 3077 && c <= 3084)))
                : (c <= 3088 || (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : (c <= 3129 || c == 3133))))
              : (c <= 3162 || (c < 3192
                ? (c < 3168
                  ? c == 3165
                  : (c <= 3169 || (c >= 3174 && c <= 3183)))
                : (c <= 3198 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : (c <= 3297 || (c >= 3302 && c <= 3311)))))
              : (c <= 3314 || (c < 3389
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : (c <= 3344 || (c >= 3346 && c <= 3386)))
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3718
            ? (c < 3558
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3430 && c <= 3448)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : (c <= 3517 || (c >= 3520 && c <= 3526)))))
              : (c <= 3567 || (c < 3664
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3673 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3792
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : (c <= 3780 || c == 3782))))
              : (c <= 3801 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : (c <= 3840 || (c >= 3872 && c <= 3891)))
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4969
          ? (c < 4682
            ? (c < 4238
              ? (c < 4193
                ? (c < 4176
                  ? (c >= 4159 && c <= 4169)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))))
              : (c <= 4238 || (c < 4301
                ? (c < 4256
                  ? (c >= 4240 && c <= 4249)
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4792
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : (c <= 4784 || (c >= 4786 && c <= 4789)))))
              : (c <= 4798 || (c < 4824
                ? (c < 4802
                  ? c == 4800
                  : (c <= 4805 || (c >= 4808 && c <= 4822)))
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 4988 || (c < 6103
            ? (c < 5870
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : (c <= 5786 || (c >= 5792 && c <= 5866)))))
              : (c <= 5880 || (c < 5984
                ? (c < 5919
                  ? (c >= 5888 && c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6016
                  ? (c >= 5998 && c <= 6000)
                  : c <= 6067)))))
            : (c <= 6103 || (c < 6314
              ? (c < 6160
                ? (c < 6112
                  ? c == 6108
                  : (c <= 6121 || (c >= 6128 && c <= 6137)))
                : (c <= 6169 || (c < 6272
                  ? (c >= 6176 && c <= 6264)
                  : (c <= 6276 || (c >= 6279 && c <= 6312)))))
              : (c <= 6314 || (c < 6512
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : (c <= 6430 || (c >= 6470 && c <= 6509)))
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6618 || (c < 43072
      ? (c < 9450
        ? (c < 8031
          ? (c < 7312
            ? (c < 6992
              ? (c < 6800
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || (c >= 6784 && c <= 6793)))
                : (c <= 6809 || (c < 6917
                  ? c == 6823
                  : (c <= 6963 || (c >= 6981 && c <= 6988)))))
              : (c <= 7001 || (c < 7232
                ? (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : (c <= 7141 || (c >= 7168 && c <= 7203)))
                : (c <= 7241 || (c < 7296
                  ? (c >= 7245 && c <= 7293)
                  : c <= 7304)))))
            : (c <= 7354 || (c < 7960
              ? (c < 7413
                ? (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : (c <= 7404 || (c >= 7406 && c <= 7411)))
                : (c <= 7414 || (c < 7424
                  ? c == 7418
                  : (c <= 7615 || (c >= 7680 && c <= 7957)))))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8160
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : (c <= 8147 || (c >= 8150 && c <= 8155)))))
              : (c <= 8172 || (c < 8308
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || (c >= 8304 && c <= 8305)))
                : (c <= 8313 || (c < 8336
                  ? (c >= 8319 && c <= 8329)
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8490
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : (c <= 8486 || c == 8488))))
              : (c <= 8493 || (c < 8526
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : (c <= 8511 || (c >= 8517 && c <= 8521)))
                : (c <= 8526 || (c < 9312
                  ? (c >= 8528 && c <= 8585)
                  : c <= 9371)))))))))
        : (c <= 9471 || (c < 12593
          ? (c < 11704
            ? (c < 11565
              ? (c < 11506
                ? (c < 11264
                  ? (c >= 10102 && c <= 10131)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))
                : (c <= 11507 || (c < 11520
                  ? c == 11517
                  : (c <= 11557 || c == 11559))))
              : (c <= 11565 || (c < 11680
                ? (c < 11631
                  ? (c >= 11568 && c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))
                : (c <= 11686 || (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : c <= 11702)))))
            : (c <= 11710 || (c < 12337
              ? (c < 11736
                ? (c < 11720
                  ? (c >= 11712 && c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))
                : (c <= 11742 || (c < 12293
                  ? c == 11823
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))
              : (c <= 12341 || (c < 12449
                ? (c < 12353
                  ? (c >= 12344 && c <= 12348)
                  : (c <= 12438 || (c >= 12445 && c <= 12447)))
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42512
            ? (c < 12977
              ? (c < 12832
                ? (c < 12704
                  ? (c >= 12690 && c <= 12693)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))
                : (c <= 12841 || (c < 12881
                  ? (c >= 12872 && c <= 12879)
                  : (c <= 12895 || (c >= 12928 && c <= 12937)))))
              : (c <= 12991 || (c < 40959
                ? (c < 19903
                  ? c == 13312
                  : (c <= 19903 || c == 19968))
                : (c <= 42124 || (c < 42240
                  ? (c >= 42192 && c <= 42237)
                  : c <= 42508)))))
            : (c <= 42539 || (c < 42963
              ? (c < 42775
                ? (c < 42623
                  ? (c >= 42560 && c <= 42606)
                  : (c <= 42653 || (c >= 42656 && c <= 42735)))
                : (c <= 42783 || (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))))
              : (c <= 42963 || (c < 43015
                ? (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : (c <= 43009 || (c >= 43011 && c <= 43013)))
                : (c <= 43018 || (c < 43056
                  ? (c >= 43020 && c <= 43042)
                  : c <= 43061)))))))))))
      : (c <= 43123 || (c < 65313
        ? (c < 43793
          ? (c < 43588
            ? (c < 43360
              ? (c < 43259
                ? (c < 43216
                  ? (c >= 43138 && c <= 43187)
                  : (c <= 43225 || (c >= 43250 && c <= 43255)))
                : (c <= 43259 || (c < 43264
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))))
              : (c <= 43388 || (c < 43494
                ? (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : (c <= 43481 || (c >= 43488 && c <= 43492)))
                : (c <= 43518 || (c < 43584
                  ? (c >= 43520 && c <= 43560)
                  : c <= 43586)))))
            : (c <= 43595 || (c < 43712
              ? (c < 43646
                ? (c < 43616
                  ? (c >= 43600 && c <= 43609)
                  : (c <= 43638 || c == 43642))
                : (c <= 43695 || (c < 43701
                  ? c == 43697
                  : (c <= 43702 || (c >= 43705 && c <= 43709)))))
              : (c <= 43712 || (c < 43762
                ? (c < 43739
                  ? c == 43714
                  : (c <= 43741 || (c >= 43744 && c <= 43754)))
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44016
                  ? (c >= 43888 && c <= 44002)
                  : (c <= 44025 || c == 44032))))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64467
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : (c <= 64324 || (c >= 64326 && c <= 64433)))))
              : (c <= 64829 || (c < 65136
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : (c <= 64967 || (c >= 65008 && c <= 65019)))
                : (c <= 65140 || (c < 65296
                  ? (c >= 65142 && c <= 65276)
                  : c <= 65305)))))))))
        : (c <= 65338 || (c < 66776
          ? (c < 65856
            ? (c < 65549
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : (c <= 65500 || (c >= 65536 && c <= 65547)))))
              : (c <= 65574 || (c < 65616
                ? (c < 65596
                  ? (c >= 65576 && c <= 65594)
                  : (c <= 65597 || (c >= 65599 && c <= 65613)))
                : (c <= 65629 || (c < 65799
                  ? (c >= 65664 && c <= 65786)
                  : c <= 65843)))))
            : (c <= 65912 || (c < 66432
              ? (c < 66273
                ? (c < 66176
                  ? (c >= 65930 && c <= 65931)
                  : (c <= 66204 || (c >= 66208 && c <= 66256)))
                : (c <= 66299 || (c < 66349
                  ? (c >= 66304 && c <= 66339)
                  : (c <= 66378 || (c >= 66384 && c <= 66421)))))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : (c <= 66511 || (c >= 66513 && c <= 66517)))
                : (c <= 66717 || (c < 66736
                  ? (c >= 66720 && c <= 66729)
                  : c <= 66771)))))))
          : (c <= 66811 || (c < 67463
            ? (c < 66979
              ? (c < 66940
                ? (c < 66864
                  ? (c >= 66816 && c <= 66855)
                  : (c <= 66915 || (c >= 66928 && c <= 66938)))
                : (c <= 66954 || (c < 66964
                  ? (c >= 66956 && c <= 66962)
                  : (c <= 66965 || (c >= 66967 && c <= 66977)))))
              : (c <= 66993 || (c < 67392
                ? (c < 67003
                  ? (c >= 66995 && c <= 67001)
                  : (c <= 67004 || (c >= 67072 && c <= 67382)))
                : (c <= 67413 || (c < 67456
                  ? (c >= 67424 && c <= 67431)
                  : c <= 67461)))))
            : (c <= 67504 || (c < 67672
              ? (c < 67594
                ? (c < 67584
                  ? (c >= 67506 && c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))))
              : (c <= 67702 || (c < 67828
                ? (c < 67751
                  ? (c >= 67705 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_bareword_character_set_2(int32_t c) {
  return (c < 6608
    ? (c < 2990
      ? (c < 2365
        ? (c < 1329
          ? (c < 710
            ? (c < 170
              ? (c < '@'
                ? (c < ','
                  ? (c >= '!' && c <= '%')
                  : (c <= ':' || c == '='))
                : (c <= '\\' || (c < 'a'
                  ? c == '_'
                  : (c <= 'z' || c == '~'))))
              : (c <= 170 || (c < 188
                ? (c < 181
                  ? (c >= 178 && c <= 179)
                  : (c <= 181 || (c >= 185 && c <= 186)))
                : (c <= 190 || (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))))))
            : (c <= 721 || (c < 902
              ? (c < 880
                ? (c < 748
                  ? (c >= 736 && c <= 740)
                  : (c <= 748 || c == 750))
                : (c <= 884 || (c < 890
                  ? (c >= 886 && c <= 887)
                  : (c <= 893 || c == 895))))
              : (c <= 902 || (c < 931
                ? (c < 908
                  ? (c >= 904 && c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))
                : (c <= 1013 || (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)))))))
          : (c <= 1366 || (c < 1869
            ? (c < 1649
              ? (c < 1519
                ? (c < 1376
                  ? c == 1369
                  : (c <= 1416 || (c >= 1488 && c <= 1514)))
                : (c <= 1522 || (c < 1632
                  ? (c >= 1568 && c <= 1610)
                  : (c <= 1641 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1765
                  ? c == 1749
                  : (c <= 1766 || (c >= 1774 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2088
              ? (c < 2042
                ? (c < 1984
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : (c <= 2074 || c == 2084))))
              : (c <= 2088 || (c < 2185
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : (c <= 2154 || (c >= 2160 && c <= 2183)))
                : (c <= 2190 || (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : c <= 2361)))))))))
        : (c <= 2365 || (c < 2703
          ? (c < 2534
            ? (c < 2474
              ? (c < 2417
                ? (c < 2392
                  ? c == 2384
                  : (c <= 2401 || (c >= 2406 && c <= 2415)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : (c <= 2448 || (c >= 2451 && c <= 2472)))))
              : (c <= 2480 || (c < 2510
                ? (c < 2486
                  ? c == 2482
                  : (c <= 2489 || c == 2493))
                : (c <= 2510 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : c <= 2529)))))
            : (c <= 2545 || (c < 2613
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2548 && c <= 2553)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : (c <= 2608 || (c >= 2610 && c <= 2611)))))
              : (c <= 2614 || (c < 2662
                ? (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : (c <= 2652 || c == 2654))
                : (c <= 2671 || (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : c <= 2701)))))))
          : (c <= 2705 || (c < 2869
            ? (c < 2790
              ? (c < 2741
                ? (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))
                : (c <= 2745 || (c < 2768
                  ? c == 2749
                  : (c <= 2768 || (c >= 2784 && c <= 2785)))))
              : (c <= 2799 || (c < 2835
                ? (c < 2821
                  ? c == 2809
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))
                : (c <= 2856 || (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : c <= 2867)))))
            : (c <= 2873 || (c < 2958
              ? (c < 2918
                ? (c < 2908
                  ? c == 2877
                  : (c <= 2909 || (c >= 2911 && c <= 2913)))
                : (c <= 2927 || (c < 2947
                  ? (c >= 2929 && c <= 2935)
                  : (c <= 2947 || (c >= 2949 && c <= 2954)))))
              : (c <= 2960 || (c < 2974
                ? (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : (c <= 2970 || c == 2972))
                : (c <= 2975 || (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : c <= 2986)))))))))))
      : (c <= 3001 || (c < 4096
        ? (c < 3416
          ? (c < 3214
            ? (c < 3160
              ? (c < 3086
                ? (c < 3046
                  ? c == 3024
                  : (c <= 3058 || (c >= 3077 && c <= 3084)))
                : (c <= 3088 || (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : (c <= 3129 || c == 3133))))
              : (c <= 3162 || (c < 3192
                ? (c < 3168
                  ? c == 3165
                  : (c <= 3169 || (c >= 3174 && c <= 3183)))
                : (c <= 3198 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : (c <= 3297 || (c >= 3302 && c <= 3311)))))
              : (c <= 3314 || (c < 3389
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : (c <= 3344 || (c >= 3346 && c <= 3386)))
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3718
            ? (c < 3558
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3430 && c <= 3448)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : (c <= 3517 || (c >= 3520 && c <= 3526)))))
              : (c <= 3567 || (c < 3664
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3673 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3792
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : (c <= 3780 || c == 3782))))
              : (c <= 3801 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : (c <= 3840 || (c >= 3872 && c <= 3891)))
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4969
          ? (c < 4682
            ? (c < 4238
              ? (c < 4193
                ? (c < 4176
                  ? (c >= 4159 && c <= 4169)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))))
              : (c <= 4238 || (c < 4301
                ? (c < 4256
                  ? (c >= 4240 && c <= 4249)
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4792
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : (c <= 4784 || (c >= 4786 && c <= 4789)))))
              : (c <= 4798 || (c < 4824
                ? (c < 4802
                  ? c == 4800
                  : (c <= 4805 || (c >= 4808 && c <= 4822)))
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 4988 || (c < 6103
            ? (c < 5870
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : (c <= 5786 || (c >= 5792 && c <= 5866)))))
              : (c <= 5880 || (c < 5984
                ? (c < 5919
                  ? (c >= 5888 && c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6016
                  ? (c >= 5998 && c <= 6000)
                  : c <= 6067)))))
            : (c <= 6103 || (c < 6314
              ? (c < 6160
                ? (c < 6112
                  ? c == 6108
                  : (c <= 6121 || (c >= 6128 && c <= 6137)))
                : (c <= 6169 || (c < 6272
                  ? (c >= 6176 && c <= 6264)
                  : (c <= 6276 || (c >= 6279 && c <= 6312)))))
              : (c <= 6314 || (c < 6512
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : (c <= 6430 || (c >= 6470 && c <= 6509)))
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6618 || (c < 43072
      ? (c < 9450
        ? (c < 8031
          ? (c < 7312
            ? (c < 6992
              ? (c < 6800
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || (c >= 6784 && c <= 6793)))
                : (c <= 6809 || (c < 6917
                  ? c == 6823
                  : (c <= 6963 || (c >= 6981 && c <= 6988)))))
              : (c <= 7001 || (c < 7232
                ? (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : (c <= 7141 || (c >= 7168 && c <= 7203)))
                : (c <= 7241 || (c < 7296
                  ? (c >= 7245 && c <= 7293)
                  : c <= 7304)))))
            : (c <= 7354 || (c < 7960
              ? (c < 7413
                ? (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : (c <= 7404 || (c >= 7406 && c <= 7411)))
                : (c <= 7414 || (c < 7424
                  ? c == 7418
                  : (c <= 7615 || (c >= 7680 && c <= 7957)))))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8160
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : (c <= 8147 || (c >= 8150 && c <= 8155)))))
              : (c <= 8172 || (c < 8308
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || (c >= 8304 && c <= 8305)))
                : (c <= 8313 || (c < 8336
                  ? (c >= 8319 && c <= 8329)
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8490
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : (c <= 8486 || c == 8488))))
              : (c <= 8493 || (c < 8526
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : (c <= 8511 || (c >= 8517 && c <= 8521)))
                : (c <= 8526 || (c < 9312
                  ? (c >= 8528 && c <= 8585)
                  : c <= 9371)))))))))
        : (c <= 9471 || (c < 12593
          ? (c < 11704
            ? (c < 11565
              ? (c < 11506
                ? (c < 11264
                  ? (c >= 10102 && c <= 10131)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))
                : (c <= 11507 || (c < 11520
                  ? c == 11517
                  : (c <= 11557 || c == 11559))))
              : (c <= 11565 || (c < 11680
                ? (c < 11631
                  ? (c >= 11568 && c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))
                : (c <= 11686 || (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : c <= 11702)))))
            : (c <= 11710 || (c < 12337
              ? (c < 11736
                ? (c < 11720
                  ? (c >= 11712 && c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))
                : (c <= 11742 || (c < 12293
                  ? c == 11823
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))
              : (c <= 12341 || (c < 12449
                ? (c < 12353
                  ? (c >= 12344 && c <= 12348)
                  : (c <= 12438 || (c >= 12445 && c <= 12447)))
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42512
            ? (c < 12977
              ? (c < 12832
                ? (c < 12704
                  ? (c >= 12690 && c <= 12693)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))
                : (c <= 12841 || (c < 12881
                  ? (c >= 12872 && c <= 12879)
                  : (c <= 12895 || (c >= 12928 && c <= 12937)))))
              : (c <= 12991 || (c < 40959
                ? (c < 19903
                  ? c == 13312
                  : (c <= 19903 || c == 19968))
                : (c <= 42124 || (c < 42240
                  ? (c >= 42192 && c <= 42237)
                  : c <= 42508)))))
            : (c <= 42539 || (c < 42963
              ? (c < 42775
                ? (c < 42623
                  ? (c >= 42560 && c <= 42606)
                  : (c <= 42653 || (c >= 42656 && c <= 42735)))
                : (c <= 42783 || (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))))
              : (c <= 42963 || (c < 43015
                ? (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : (c <= 43009 || (c >= 43011 && c <= 43013)))
                : (c <= 43018 || (c < 43056
                  ? (c >= 43020 && c <= 43042)
                  : c <= 43061)))))))))))
      : (c <= 43123 || (c < 65313
        ? (c < 43793
          ? (c < 43588
            ? (c < 43360
              ? (c < 43259
                ? (c < 43216
                  ? (c >= 43138 && c <= 43187)
                  : (c <= 43225 || (c >= 43250 && c <= 43255)))
                : (c <= 43259 || (c < 43264
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))))
              : (c <= 43388 || (c < 43494
                ? (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : (c <= 43481 || (c >= 43488 && c <= 43492)))
                : (c <= 43518 || (c < 43584
                  ? (c >= 43520 && c <= 43560)
                  : c <= 43586)))))
            : (c <= 43595 || (c < 43712
              ? (c < 43646
                ? (c < 43616
                  ? (c >= 43600 && c <= 43609)
                  : (c <= 43638 || c == 43642))
                : (c <= 43695 || (c < 43701
                  ? c == 43697
                  : (c <= 43702 || (c >= 43705 && c <= 43709)))))
              : (c <= 43712 || (c < 43762
                ? (c < 43739
                  ? c == 43714
                  : (c <= 43741 || (c >= 43744 && c <= 43754)))
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44016
                  ? (c >= 43888 && c <= 44002)
                  : (c <= 44025 || c == 44032))))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64467
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : (c <= 64324 || (c >= 64326 && c <= 64433)))))
              : (c <= 64829 || (c < 65136
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : (c <= 64967 || (c >= 65008 && c <= 65019)))
                : (c <= 65140 || (c < 65296
                  ? (c >= 65142 && c <= 65276)
                  : c <= 65305)))))))))
        : (c <= 65338 || (c < 66776
          ? (c < 65856
            ? (c < 65549
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : (c <= 65500 || (c >= 65536 && c <= 65547)))))
              : (c <= 65574 || (c < 65616
                ? (c < 65596
                  ? (c >= 65576 && c <= 65594)
                  : (c <= 65597 || (c >= 65599 && c <= 65613)))
                : (c <= 65629 || (c < 65799
                  ? (c >= 65664 && c <= 65786)
                  : c <= 65843)))))
            : (c <= 65912 || (c < 66432
              ? (c < 66273
                ? (c < 66176
                  ? (c >= 65930 && c <= 65931)
                  : (c <= 66204 || (c >= 66208 && c <= 66256)))
                : (c <= 66299 || (c < 66349
                  ? (c >= 66304 && c <= 66339)
                  : (c <= 66378 || (c >= 66384 && c <= 66421)))))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : (c <= 66511 || (c >= 66513 && c <= 66517)))
                : (c <= 66717 || (c < 66736
                  ? (c >= 66720 && c <= 66729)
                  : c <= 66771)))))))
          : (c <= 66811 || (c < 67463
            ? (c < 66979
              ? (c < 66940
                ? (c < 66864
                  ? (c >= 66816 && c <= 66855)
                  : (c <= 66915 || (c >= 66928 && c <= 66938)))
                : (c <= 66954 || (c < 66964
                  ? (c >= 66956 && c <= 66962)
                  : (c <= 66965 || (c >= 66967 && c <= 66977)))))
              : (c <= 66993 || (c < 67392
                ? (c < 67003
                  ? (c >= 66995 && c <= 67001)
                  : (c <= 67004 || (c >= 67072 && c <= 67382)))
                : (c <= 67413 || (c < 67456
                  ? (c >= 67424 && c <= 67431)
                  : c <= 67461)))))
            : (c <= 67504 || (c < 67672
              ? (c < 67594
                ? (c < 67584
                  ? (c >= 67506 && c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))))
              : (c <= 67702 || (c < 67828
                ? (c < 67751
                  ? (c >= 67705 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_bareword_character_set_3(int32_t c) {
  return (c < 6608
    ? (c < 2990
      ? (c < 2365
        ? (c < 1329
          ? (c < 710
            ? (c < 178
              ? (c < '@'
                ? (c < ','
                  ? (c >= '!' && c <= '%')
                  : (c <= ':' || c == '='))
                : (c <= '\\' || (c < 'a'
                  ? c == '_'
                  : (c <= '~' || c == 170))))
              : (c <= 179 || (c < 192
                ? (c < 185
                  ? c == 181
                  : (c <= 186 || (c >= 188 && c <= 190)))
                : (c <= 214 || (c < 248
                  ? (c >= 216 && c <= 246)
                  : c <= 705)))))
            : (c <= 721 || (c < 902
              ? (c < 880
                ? (c < 748
                  ? (c >= 736 && c <= 740)
                  : (c <= 748 || c == 750))
                : (c <= 884 || (c < 890
                  ? (c >= 886 && c <= 887)
                  : (c <= 893 || c == 895))))
              : (c <= 902 || (c < 931
                ? (c < 908
                  ? (c >= 904 && c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))
                : (c <= 1013 || (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)))))))
          : (c <= 1366 || (c < 1869
            ? (c < 1649
              ? (c < 1519
                ? (c < 1376
                  ? c == 1369
                  : (c <= 1416 || (c >= 1488 && c <= 1514)))
                : (c <= 1522 || (c < 1632
                  ? (c >= 1568 && c <= 1610)
                  : (c <= 1641 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1765
                  ? c == 1749
                  : (c <= 1766 || (c >= 1774 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2088
              ? (c < 2042
                ? (c < 1984
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : (c <= 2074 || c == 2084))))
              : (c <= 2088 || (c < 2185
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : (c <= 2154 || (c >= 2160 && c <= 2183)))
                : (c <= 2190 || (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : c <= 2361)))))))))
        : (c <= 2365 || (c < 2703
          ? (c < 2534
            ? (c < 2474
              ? (c < 2417
                ? (c < 2392
                  ? c == 2384
                  : (c <= 2401 || (c >= 2406 && c <= 2415)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : (c <= 2448 || (c >= 2451 && c <= 2472)))))
              : (c <= 2480 || (c < 2510
                ? (c < 2486
                  ? c == 2482
                  : (c <= 2489 || c == 2493))
                : (c <= 2510 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : c <= 2529)))))
            : (c <= 2545 || (c < 2613
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2548 && c <= 2553)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : (c <= 2608 || (c >= 2610 && c <= 2611)))))
              : (c <= 2614 || (c < 2662
                ? (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : (c <= 2652 || c == 2654))
                : (c <= 2671 || (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : c <= 2701)))))))
          : (c <= 2705 || (c < 2869
            ? (c < 2790
              ? (c < 2741
                ? (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))
                : (c <= 2745 || (c < 2768
                  ? c == 2749
                  : (c <= 2768 || (c >= 2784 && c <= 2785)))))
              : (c <= 2799 || (c < 2835
                ? (c < 2821
                  ? c == 2809
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))
                : (c <= 2856 || (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : c <= 2867)))))
            : (c <= 2873 || (c < 2958
              ? (c < 2918
                ? (c < 2908
                  ? c == 2877
                  : (c <= 2909 || (c >= 2911 && c <= 2913)))
                : (c <= 2927 || (c < 2947
                  ? (c >= 2929 && c <= 2935)
                  : (c <= 2947 || (c >= 2949 && c <= 2954)))))
              : (c <= 2960 || (c < 2974
                ? (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : (c <= 2970 || c == 2972))
                : (c <= 2975 || (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : c <= 2986)))))))))))
      : (c <= 3001 || (c < 4096
        ? (c < 3416
          ? (c < 3214
            ? (c < 3160
              ? (c < 3086
                ? (c < 3046
                  ? c == 3024
                  : (c <= 3058 || (c >= 3077 && c <= 3084)))
                : (c <= 3088 || (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : (c <= 3129 || c == 3133))))
              : (c <= 3162 || (c < 3192
                ? (c < 3168
                  ? c == 3165
                  : (c <= 3169 || (c >= 3174 && c <= 3183)))
                : (c <= 3198 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : (c <= 3297 || (c >= 3302 && c <= 3311)))))
              : (c <= 3314 || (c < 3389
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : (c <= 3344 || (c >= 3346 && c <= 3386)))
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3718
            ? (c < 3558
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3430 && c <= 3448)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : (c <= 3517 || (c >= 3520 && c <= 3526)))))
              : (c <= 3567 || (c < 3664
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3673 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3792
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : (c <= 3780 || c == 3782))))
              : (c <= 3801 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : (c <= 3840 || (c >= 3872 && c <= 3891)))
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4969
          ? (c < 4682
            ? (c < 4238
              ? (c < 4193
                ? (c < 4176
                  ? (c >= 4159 && c <= 4169)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))))
              : (c <= 4238 || (c < 4301
                ? (c < 4256
                  ? (c >= 4240 && c <= 4249)
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4792
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : (c <= 4784 || (c >= 4786 && c <= 4789)))))
              : (c <= 4798 || (c < 4824
                ? (c < 4802
                  ? c == 4800
                  : (c <= 4805 || (c >= 4808 && c <= 4822)))
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 4988 || (c < 6103
            ? (c < 5870
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : (c <= 5786 || (c >= 5792 && c <= 5866)))))
              : (c <= 5880 || (c < 5984
                ? (c < 5919
                  ? (c >= 5888 && c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6016
                  ? (c >= 5998 && c <= 6000)
                  : c <= 6067)))))
            : (c <= 6103 || (c < 6314
              ? (c < 6160
                ? (c < 6112
                  ? c == 6108
                  : (c <= 6121 || (c >= 6128 && c <= 6137)))
                : (c <= 6169 || (c < 6272
                  ? (c >= 6176 && c <= 6264)
                  : (c <= 6276 || (c >= 6279 && c <= 6312)))))
              : (c <= 6314 || (c < 6512
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : (c <= 6430 || (c >= 6470 && c <= 6509)))
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6618 || (c < 43072
      ? (c < 9450
        ? (c < 8031
          ? (c < 7312
            ? (c < 6992
              ? (c < 6800
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || (c >= 6784 && c <= 6793)))
                : (c <= 6809 || (c < 6917
                  ? c == 6823
                  : (c <= 6963 || (c >= 6981 && c <= 6988)))))
              : (c <= 7001 || (c < 7232
                ? (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : (c <= 7141 || (c >= 7168 && c <= 7203)))
                : (c <= 7241 || (c < 7296
                  ? (c >= 7245 && c <= 7293)
                  : c <= 7304)))))
            : (c <= 7354 || (c < 7960
              ? (c < 7413
                ? (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : (c <= 7404 || (c >= 7406 && c <= 7411)))
                : (c <= 7414 || (c < 7424
                  ? c == 7418
                  : (c <= 7615 || (c >= 7680 && c <= 7957)))))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8160
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : (c <= 8147 || (c >= 8150 && c <= 8155)))))
              : (c <= 8172 || (c < 8308
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || (c >= 8304 && c <= 8305)))
                : (c <= 8313 || (c < 8336
                  ? (c >= 8319 && c <= 8329)
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8490
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : (c <= 8486 || c == 8488))))
              : (c <= 8493 || (c < 8526
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : (c <= 8511 || (c >= 8517 && c <= 8521)))
                : (c <= 8526 || (c < 9312
                  ? (c >= 8528 && c <= 8585)
                  : c <= 9371)))))))))
        : (c <= 9471 || (c < 12593
          ? (c < 11704
            ? (c < 11565
              ? (c < 11506
                ? (c < 11264
                  ? (c >= 10102 && c <= 10131)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))
                : (c <= 11507 || (c < 11520
                  ? c == 11517
                  : (c <= 11557 || c == 11559))))
              : (c <= 11565 || (c < 11680
                ? (c < 11631
                  ? (c >= 11568 && c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))
                : (c <= 11686 || (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : c <= 11702)))))
            : (c <= 11710 || (c < 12337
              ? (c < 11736
                ? (c < 11720
                  ? (c >= 11712 && c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))
                : (c <= 11742 || (c < 12293
                  ? c == 11823
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))
              : (c <= 12341 || (c < 12449
                ? (c < 12353
                  ? (c >= 12344 && c <= 12348)
                  : (c <= 12438 || (c >= 12445 && c <= 12447)))
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42512
            ? (c < 12977
              ? (c < 12832
                ? (c < 12704
                  ? (c >= 12690 && c <= 12693)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))
                : (c <= 12841 || (c < 12881
                  ? (c >= 12872 && c <= 12879)
                  : (c <= 12895 || (c >= 12928 && c <= 12937)))))
              : (c <= 12991 || (c < 40959
                ? (c < 19903
                  ? c == 13312
                  : (c <= 19903 || c == 19968))
                : (c <= 42124 || (c < 42240
                  ? (c >= 42192 && c <= 42237)
                  : c <= 42508)))))
            : (c <= 42539 || (c < 42963
              ? (c < 42775
                ? (c < 42623
                  ? (c >= 42560 && c <= 42606)
                  : (c <= 42653 || (c >= 42656 && c <= 42735)))
                : (c <= 42783 || (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))))
              : (c <= 42963 || (c < 43015
                ? (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : (c <= 43009 || (c >= 43011 && c <= 43013)))
                : (c <= 43018 || (c < 43056
                  ? (c >= 43020 && c <= 43042)
                  : c <= 43061)))))))))))
      : (c <= 43123 || (c < 65313
        ? (c < 43793
          ? (c < 43588
            ? (c < 43360
              ? (c < 43259
                ? (c < 43216
                  ? (c >= 43138 && c <= 43187)
                  : (c <= 43225 || (c >= 43250 && c <= 43255)))
                : (c <= 43259 || (c < 43264
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))))
              : (c <= 43388 || (c < 43494
                ? (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : (c <= 43481 || (c >= 43488 && c <= 43492)))
                : (c <= 43518 || (c < 43584
                  ? (c >= 43520 && c <= 43560)
                  : c <= 43586)))))
            : (c <= 43595 || (c < 43712
              ? (c < 43646
                ? (c < 43616
                  ? (c >= 43600 && c <= 43609)
                  : (c <= 43638 || c == 43642))
                : (c <= 43695 || (c < 43701
                  ? c == 43697
                  : (c <= 43702 || (c >= 43705 && c <= 43709)))))
              : (c <= 43712 || (c < 43762
                ? (c < 43739
                  ? c == 43714
                  : (c <= 43741 || (c >= 43744 && c <= 43754)))
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44016
                  ? (c >= 43888 && c <= 44002)
                  : (c <= 44025 || c == 44032))))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64467
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : (c <= 64324 || (c >= 64326 && c <= 64433)))))
              : (c <= 64829 || (c < 65136
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : (c <= 64967 || (c >= 65008 && c <= 65019)))
                : (c <= 65140 || (c < 65296
                  ? (c >= 65142 && c <= 65276)
                  : c <= 65305)))))))))
        : (c <= 65338 || (c < 66776
          ? (c < 65856
            ? (c < 65549
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : (c <= 65500 || (c >= 65536 && c <= 65547)))))
              : (c <= 65574 || (c < 65616
                ? (c < 65596
                  ? (c >= 65576 && c <= 65594)
                  : (c <= 65597 || (c >= 65599 && c <= 65613)))
                : (c <= 65629 || (c < 65799
                  ? (c >= 65664 && c <= 65786)
                  : c <= 65843)))))
            : (c <= 65912 || (c < 66432
              ? (c < 66273
                ? (c < 66176
                  ? (c >= 65930 && c <= 65931)
                  : (c <= 66204 || (c >= 66208 && c <= 66256)))
                : (c <= 66299 || (c < 66349
                  ? (c >= 66304 && c <= 66339)
                  : (c <= 66378 || (c >= 66384 && c <= 66421)))))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : (c <= 66511 || (c >= 66513 && c <= 66517)))
                : (c <= 66717 || (c < 66736
                  ? (c >= 66720 && c <= 66729)
                  : c <= 66771)))))))
          : (c <= 66811 || (c < 67463
            ? (c < 66979
              ? (c < 66940
                ? (c < 66864
                  ? (c >= 66816 && c <= 66855)
                  : (c <= 66915 || (c >= 66928 && c <= 66938)))
                : (c <= 66954 || (c < 66964
                  ? (c >= 66956 && c <= 66962)
                  : (c <= 66965 || (c >= 66967 && c <= 66977)))))
              : (c <= 66993 || (c < 67392
                ? (c < 67003
                  ? (c >= 66995 && c <= 67001)
                  : (c <= 67004 || (c >= 67072 && c <= 67382)))
                : (c <= 67413 || (c < 67456
                  ? (c >= 67424 && c <= 67431)
                  : c <= 67461)))))
            : (c <= 67504 || (c < 67672
              ? (c < 67594
                ? (c < 67584
                  ? (c >= 67506 && c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))))
              : (c <= 67702 || (c < 67828
                ? (c < 67751
                  ? (c >= 67705 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_bareword_character_set_4(int32_t c) {
  return (c < 6576
    ? (c < 2979
      ? (c < 2208
        ? (c < 1015
          ? (c < 216
            ? (c < 'a'
              ? (c < '='
                ? (c < '%'
                  ? c == '!'
                  : (c <= '%' || (c >= '+' && c <= ':')))
                : (c <= '=' || (c < '\\'
                  ? (c >= '@' && c <= 'Z')
                  : (c <= '\\' || c == '_'))))
              : (c <= 'z' || (c < 181
                ? (c < 170
                  ? c == '~'
                  : (c <= 170 || (c >= 178 && c <= 179)))
                : (c <= 181 || (c < 188
                  ? (c >= 185 && c <= 186)
                  : (c <= 190 || (c >= 192 && c <= 214)))))))
            : (c <= 246 || (c < 890
              ? (c < 748
                ? (c < 710
                  ? (c >= 248 && c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))
                : (c <= 748 || (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))))
              : (c <= 893 || (c < 908
                ? (c < 902
                  ? c == 895
                  : (c <= 902 || (c >= 904 && c <= 906)))
                : (c <= 908 || (c < 931
                  ? (c >= 910 && c <= 929)
                  : c <= 1013)))))))
          : (c <= 1153 || (c < 1808
            ? (c < 1632
              ? (c < 1376
                ? (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : (c <= 1366 || c == 1369))
                : (c <= 1416 || (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))))
              : (c <= 1641 || (c < 1765
                ? (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : (c <= 1747 || c == 1749))
                : (c <= 1766 || (c < 1791
                  ? (c >= 1774 && c <= 1788)
                  : c <= 1791)))))
            : (c <= 1808 || (c < 2074
              ? (c < 1984
                ? (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : (c <= 1957 || c == 1969))
                : (c <= 2026 || (c < 2042
                  ? (c >= 2036 && c <= 2037)
                  : (c <= 2042 || (c >= 2048 && c <= 2069)))))
              : (c <= 2074 || (c < 2144
                ? (c < 2088
                  ? c == 2084
                  : (c <= 2088 || (c >= 2112 && c <= 2136)))
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2417
                  ? (c >= 2406 && c <= 2415)
                  : (c <= 2432 || (c >= 2437 && c <= 2444)))))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2556
                ? (c < 2534
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || (c >= 2548 && c <= 2553)))
                : (c <= 2556 || (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))))
              : (c <= 2608 || (c < 2649
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2662
                  ? c == 2654
                  : c <= 2671)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2768
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : (c <= 2745 || c == 2749))))
              : (c <= 2768 || (c < 2821
                ? (c < 2790
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2799 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2918
                  ? (c >= 2911 && c <= 2913)
                  : (c <= 2927 || (c >= 2929 && c <= 2935)))))
              : (c <= 2947 || (c < 2969
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 3976
        ? (c < 3412
          ? (c < 3205
            ? (c < 3114
              ? (c < 3046
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3058 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3192
                  ? (c >= 3174 && c <= 3183)
                  : (c <= 3198 || c == 3200))))))
            : (c <= 3212 || (c < 3302
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : (c <= 3294 || (c >= 3296 && c <= 3297)))))
              : (c <= 3311 || (c < 3346
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : (c <= 3340 || (c >= 3342 && c <= 3344)))
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3716
            ? (c < 3520
              ? (c < 3461
                ? (c < 3430
                  ? (c >= 3416 && c <= 3425)
                  : (c <= 3448 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : (c <= 3515 || c == 3517))))
              : (c <= 3526 || (c < 3648
                ? (c < 3585
                  ? (c >= 3558 && c <= 3567)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3713
                  ? (c >= 3664 && c <= 3673)
                  : c <= 3714)))))
            : (c <= 3716 || (c < 3782
              ? (c < 3751
                ? (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : (c <= 3747 || c == 3749))
                : (c <= 3760 || (c < 3773
                  ? (c >= 3762 && c <= 3763)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3872
                ? (c < 3804
                  ? (c >= 3792 && c <= 3801)
                  : (c <= 3807 || c == 3840))
                : (c <= 3891 || (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)))))))))
        : (c <= 3980 || (c < 4888
          ? (c < 4348
            ? (c < 4213
              ? (c < 4186
                ? (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : (c <= 4169 || (c >= 4176 && c <= 4181)))
                : (c <= 4189 || (c < 4197
                  ? c == 4193
                  : (c <= 4198 || (c >= 4206 && c <= 4208)))))
              : (c <= 4225 || (c < 4295
                ? (c < 4240
                  ? c == 4238
                  : (c <= 4249 || (c >= 4256 && c <= 4293)))
                : (c <= 4295 || (c < 4304
                  ? c == 4301
                  : c <= 4346)))))
            : (c <= 4680 || (c < 4786
              ? (c < 4698
                ? (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : (c <= 4694 || c == 4696))
                : (c <= 4701 || (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))))
              : (c <= 4789 || (c < 4808
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 6016
            ? (c < 5792
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4969 && c <= 4988)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5952
                ? (c < 5888
                  ? (c >= 5870 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6279
              ? (c < 6128
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6112 && c <= 6121)))
                : (c <= 6137 || (c < 6176
                  ? (c >= 6160 && c <= 6169)
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))))
              : (c <= 6312 || (c < 6470
                ? (c < 6320
                  ? c == 6314
                  : (c <= 6389 || (c >= 6400 && c <= 6430)))
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43072
      ? (c < 9450
        ? (c < 8031
          ? (c < 7312
            ? (c < 6981
              ? (c < 6784
                ? (c < 6656
                  ? (c >= 6608 && c <= 6618)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))
                : (c <= 6793 || (c < 6823
                  ? (c >= 6800 && c <= 6809)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))))
              : (c <= 6988 || (c < 7168
                ? (c < 7043
                  ? (c >= 6992 && c <= 7001)
                  : (c <= 7072 || (c >= 7086 && c <= 7141)))
                : (c <= 7203 || (c < 7245
                  ? (c >= 7232 && c <= 7241)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 7960
              ? (c < 7413
                ? (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : (c <= 7404 || (c >= 7406 && c <= 7411)))
                : (c <= 7414 || (c < 7424
                  ? c == 7418
                  : (c <= 7615 || (c >= 7680 && c <= 7957)))))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8160
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : (c <= 8147 || (c >= 8150 && c <= 8155)))))
              : (c <= 8172 || (c < 8308
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || (c >= 8304 && c <= 8305)))
                : (c <= 8313 || (c < 8336
                  ? (c >= 8319 && c <= 8329)
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8490
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : (c <= 8486 || c == 8488))))
              : (c <= 8493 || (c < 8526
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : (c <= 8511 || (c >= 8517 && c <= 8521)))
                : (c <= 8526 || (c < 9312
                  ? (c >= 8528 && c <= 8585)
                  : c <= 9371)))))))))
        : (c <= 9471 || (c < 12593
          ? (c < 11704
            ? (c < 11565
              ? (c < 11506
                ? (c < 11264
                  ? (c >= 10102 && c <= 10131)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))
                : (c <= 11507 || (c < 11520
                  ? c == 11517
                  : (c <= 11557 || c == 11559))))
              : (c <= 11565 || (c < 11680
                ? (c < 11631
                  ? (c >= 11568 && c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))
                : (c <= 11686 || (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : c <= 11702)))))
            : (c <= 11710 || (c < 12337
              ? (c < 11736
                ? (c < 11720
                  ? (c >= 11712 && c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))
                : (c <= 11742 || (c < 12293
                  ? c == 11823
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))
              : (c <= 12341 || (c < 12449
                ? (c < 12353
                  ? (c >= 12344 && c <= 12348)
                  : (c <= 12438 || (c >= 12445 && c <= 12447)))
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42512
            ? (c < 12977
              ? (c < 12832
                ? (c < 12704
                  ? (c >= 12690 && c <= 12693)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))
                : (c <= 12841 || (c < 12881
                  ? (c >= 12872 && c <= 12879)
                  : (c <= 12895 || (c >= 12928 && c <= 12937)))))
              : (c <= 12991 || (c < 40959
                ? (c < 19903
                  ? c == 13312
                  : (c <= 19903 || c == 19968))
                : (c <= 42124 || (c < 42240
                  ? (c >= 42192 && c <= 42237)
                  : c <= 42508)))))
            : (c <= 42539 || (c < 42963
              ? (c < 42775
                ? (c < 42623
                  ? (c >= 42560 && c <= 42606)
                  : (c <= 42653 || (c >= 42656 && c <= 42735)))
                : (c <= 42783 || (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))))
              : (c <= 42963 || (c < 43015
                ? (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : (c <= 43009 || (c >= 43011 && c <= 43013)))
                : (c <= 43018 || (c < 43056
                  ? (c >= 43020 && c <= 43042)
                  : c <= 43061)))))))))))
      : (c <= 43123 || (c < 65313
        ? (c < 43793
          ? (c < 43588
            ? (c < 43360
              ? (c < 43259
                ? (c < 43216
                  ? (c >= 43138 && c <= 43187)
                  : (c <= 43225 || (c >= 43250 && c <= 43255)))
                : (c <= 43259 || (c < 43264
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))))
              : (c <= 43388 || (c < 43494
                ? (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : (c <= 43481 || (c >= 43488 && c <= 43492)))
                : (c <= 43518 || (c < 43584
                  ? (c >= 43520 && c <= 43560)
                  : c <= 43586)))))
            : (c <= 43595 || (c < 43712
              ? (c < 43646
                ? (c < 43616
                  ? (c >= 43600 && c <= 43609)
                  : (c <= 43638 || c == 43642))
                : (c <= 43695 || (c < 43701
                  ? c == 43697
                  : (c <= 43702 || (c >= 43705 && c <= 43709)))))
              : (c <= 43712 || (c < 43762
                ? (c < 43739
                  ? c == 43714
                  : (c <= 43741 || (c >= 43744 && c <= 43754)))
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44016
                  ? (c >= 43888 && c <= 44002)
                  : (c <= 44025 || c == 44032))))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64467
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : (c <= 64324 || (c >= 64326 && c <= 64433)))))
              : (c <= 64829 || (c < 65136
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : (c <= 64967 || (c >= 65008 && c <= 65019)))
                : (c <= 65140 || (c < 65296
                  ? (c >= 65142 && c <= 65276)
                  : c <= 65305)))))))))
        : (c <= 65338 || (c < 66776
          ? (c < 65856
            ? (c < 65549
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : (c <= 65500 || (c >= 65536 && c <= 65547)))))
              : (c <= 65574 || (c < 65616
                ? (c < 65596
                  ? (c >= 65576 && c <= 65594)
                  : (c <= 65597 || (c >= 65599 && c <= 65613)))
                : (c <= 65629 || (c < 65799
                  ? (c >= 65664 && c <= 65786)
                  : c <= 65843)))))
            : (c <= 65912 || (c < 66432
              ? (c < 66273
                ? (c < 66176
                  ? (c >= 65930 && c <= 65931)
                  : (c <= 66204 || (c >= 66208 && c <= 66256)))
                : (c <= 66299 || (c < 66349
                  ? (c >= 66304 && c <= 66339)
                  : (c <= 66378 || (c >= 66384 && c <= 66421)))))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : (c <= 66511 || (c >= 66513 && c <= 66517)))
                : (c <= 66717 || (c < 66736
                  ? (c >= 66720 && c <= 66729)
                  : c <= 66771)))))))
          : (c <= 66811 || (c < 67463
            ? (c < 66979
              ? (c < 66940
                ? (c < 66864
                  ? (c >= 66816 && c <= 66855)
                  : (c <= 66915 || (c >= 66928 && c <= 66938)))
                : (c <= 66954 || (c < 66964
                  ? (c >= 66956 && c <= 66962)
                  : (c <= 66965 || (c >= 66967 && c <= 66977)))))
              : (c <= 66993 || (c < 67392
                ? (c < 67003
                  ? (c >= 66995 && c <= 67001)
                  : (c <= 67004 || (c >= 67072 && c <= 67382)))
                : (c <= 67413 || (c < 67456
                  ? (c >= 67424 && c <= 67431)
                  : c <= 67461)))))
            : (c <= 67504 || (c < 67672
              ? (c < 67594
                ? (c < 67584
                  ? (c >= 67506 && c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))))
              : (c <= 67702 || (c < 67828
                ? (c < 67751
                  ? (c >= 67705 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_bareword_character_set_5(int32_t c) {
  return (c < 6688
    ? (c < 3077
      ? (c < 2406
        ? (c < 1488
          ? (c < 750
            ? (c < 188
              ? (c < 170
                ? (c < '_'
                  ? (c >= '!' && c <= '\\')
                  : (c <= '_' || (c >= 'a' && c <= '~')))
                : (c <= 170 || (c < 181
                  ? (c >= 178 && c <= 179)
                  : (c <= 181 || (c >= 185 && c <= 186)))))
              : (c <= 190 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 910
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : (c <= 906 || c == 908))))
              : (c <= 929 || (c < 1329
                ? (c < 1015
                  ? (c >= 931 && c <= 1013)
                  : (c <= 1153 || (c >= 1162 && c <= 1327)))
                : (c <= 1366 || (c < 1376
                  ? c == 1369
                  : c <= 1416)))))))
          : (c <= 1514 || (c < 2036
            ? (c < 1774
              ? (c < 1646
                ? (c < 1568
                  ? (c >= 1519 && c <= 1522)
                  : (c <= 1610 || (c >= 1632 && c <= 1641)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : (c <= 1749 || (c >= 1765 && c <= 1766)))))
              : (c <= 1788 || (c < 1869
                ? (c < 1808
                  ? c == 1791
                  : (c <= 1808 || (c >= 1810 && c <= 1839)))
                : (c <= 1957 || (c < 1984
                  ? c == 1969
                  : c <= 2026)))))
            : (c <= 2037 || (c < 2160
              ? (c < 2084
                ? (c < 2048
                  ? c == 2042
                  : (c <= 2069 || c == 2074))
                : (c <= 2084 || (c < 2112
                  ? c == 2088
                  : (c <= 2136 || (c >= 2144 && c <= 2154)))))
              : (c <= 2183 || (c < 2365
                ? (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : (c <= 2249 || (c >= 2308 && c <= 2361)))
                : (c <= 2365 || (c < 2392
                  ? c == 2384
                  : c <= 2401)))))))))
        : (c <= 2415 || (c < 2738
          ? (c < 2565
            ? (c < 2493
              ? (c < 2451
                ? (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : (c <= 2444 || (c >= 2447 && c <= 2448)))
                : (c <= 2472 || (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))))
              : (c <= 2493 || (c < 2534
                ? (c < 2524
                  ? c == 2510
                  : (c <= 2525 || (c >= 2527 && c <= 2529)))
                : (c <= 2545 || (c < 2556
                  ? (c >= 2548 && c <= 2553)
                  : c <= 2556)))))
            : (c <= 2570 || (c < 2654
              ? (c < 2610
                ? (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : (c <= 2600 || (c >= 2602 && c <= 2608)))
                : (c <= 2611 || (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : (c <= 2617 || (c >= 2649 && c <= 2652)))))
              : (c <= 2654 || (c < 2703
                ? (c < 2674
                  ? (c >= 2662 && c <= 2671)
                  : (c <= 2676 || (c >= 2693 && c <= 2701)))
                : (c <= 2705 || (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : c <= 2736)))))))
          : (c <= 2739 || (c < 2911
            ? (c < 2831
              ? (c < 2784
                ? (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : (c <= 2749 || c == 2768))
                : (c <= 2785 || (c < 2809
                  ? (c >= 2790 && c <= 2799)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))))
              : (c <= 2832 || (c < 2869
                ? (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : (c <= 2864 || (c >= 2866 && c <= 2867)))
                : (c <= 2873 || (c < 2908
                  ? c == 2877
                  : c <= 2909)))))
            : (c <= 2913 || (c < 2972
              ? (c < 2949
                ? (c < 2929
                  ? (c >= 2918 && c <= 2927)
                  : (c <= 2935 || c == 2947))
                : (c <= 2954 || (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : (c <= 2965 || (c >= 2969 && c <= 2970)))))
              : (c <= 2972 || (c < 2990
                ? (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : (c <= 2980 || (c >= 2984 && c <= 2986)))
                : (c <= 3001 || (c < 3046
                  ? c == 3024
                  : c <= 3058)))))))))))
      : (c <= 3084 || (c < 4186
        ? (c < 3461
          ? (c < 3253
            ? (c < 3174
              ? (c < 3133
                ? (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : (c <= 3112 || (c >= 3114 && c <= 3129)))
                : (c <= 3133 || (c < 3165
                  ? (c >= 3160 && c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3169)))))
              : (c <= 3183 || (c < 3214
                ? (c < 3200
                  ? (c >= 3192 && c <= 3198)
                  : (c <= 3200 || (c >= 3205 && c <= 3212)))
                : (c <= 3216 || (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : c <= 3251)))))
            : (c <= 3257 || (c < 3346
              ? (c < 3302
                ? (c < 3293
                  ? c == 3261
                  : (c <= 3294 || (c >= 3296 && c <= 3297)))
                : (c <= 3311 || (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : (c <= 3340 || (c >= 3342 && c <= 3344)))))
              : (c <= 3386 || (c < 3416
                ? (c < 3406
                  ? c == 3389
                  : (c <= 3406 || (c >= 3412 && c <= 3414)))
                : (c <= 3425 || (c < 3450
                  ? (c >= 3430 && c <= 3448)
                  : c <= 3455)))))))
          : (c <= 3478 || (c < 3751
            ? (c < 3648
              ? (c < 3520
                ? (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : (c <= 3515 || c == 3517))
                : (c <= 3526 || (c < 3585
                  ? (c >= 3558 && c <= 3567)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))))
              : (c <= 3654 || (c < 3718
                ? (c < 3713
                  ? (c >= 3664 && c <= 3673)
                  : (c <= 3714 || c == 3716))
                : (c <= 3722 || (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : c <= 3749)))))
            : (c <= 3760 || (c < 3872
              ? (c < 3782
                ? (c < 3773
                  ? (c >= 3762 && c <= 3763)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))
                : (c <= 3782 || (c < 3804
                  ? (c >= 3792 && c <= 3801)
                  : (c <= 3807 || c == 3840))))
              : (c <= 3891 || (c < 4096
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : (c <= 3948 || (c >= 3976 && c <= 3980)))
                : (c <= 4138 || (c < 4176
                  ? (c >= 4159 && c <= 4169)
                  : c <= 4181)))))))))
        : (c <= 4189 || (c < 5112
          ? (c < 4698
            ? (c < 4295
              ? (c < 4213
                ? (c < 4197
                  ? c == 4193
                  : (c <= 4198 || (c >= 4206 && c <= 4208)))
                : (c <= 4225 || (c < 4240
                  ? c == 4238
                  : (c <= 4249 || (c >= 4256 && c <= 4293)))))
              : (c <= 4295 || (c < 4682
                ? (c < 4304
                  ? c == 4301
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))
                : (c <= 4685 || (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : c <= 4696)))))
            : (c <= 4701 || (c < 4808
              ? (c < 4786
                ? (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))
              : (c <= 4822 || (c < 4969
                ? (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))
                : (c <= 4988 || (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : c <= 5109)))))))
          : (c <= 5117 || (c < 6128
            ? (c < 5952
              ? (c < 5792
                ? (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))
                : (c <= 5866 || (c < 5888
                  ? (c >= 5870 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))))
              : (c <= 5969 || (c < 6103
                ? (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : (c <= 6000 || (c >= 6016 && c <= 6067)))
                : (c <= 6103 || (c < 6112
                  ? c == 6108
                  : c <= 6121)))))
            : (c <= 6137 || (c < 6400
              ? (c < 6279
                ? (c < 6176
                  ? (c >= 6160 && c <= 6169)
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))
              : (c <= 6430 || (c < 6576
                ? (c < 6512
                  ? (c >= 6470 && c <= 6509)
                  : (c <= 6516 || (c >= 6528 && c <= 6571)))
                : (c <= 6601 || (c < 6656
                  ? (c >= 6608 && c <= 6618)
                  : c <= 6678)))))))))))))
    : (c <= 6740 || (c < 43138
      ? (c < 11264
        ? (c < 8118
          ? (c < 7401
            ? (c < 7086
              ? (c < 6917
                ? (c < 6800
                  ? (c >= 6784 && c <= 6793)
                  : (c <= 6809 || c == 6823))
                : (c <= 6963 || (c < 6992
                  ? (c >= 6981 && c <= 6988)
                  : (c <= 7001 || (c >= 7043 && c <= 7072)))))
              : (c <= 7141 || (c < 7296
                ? (c < 7232
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7241 || (c >= 7245 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 8008
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8029
                ? (c < 8025
                  ? (c >= 8016 && c <= 8023)
                  : (c <= 8025 || c == 8027))
                : (c <= 8029 || (c < 8064
                  ? (c >= 8031 && c <= 8061)
                  : c <= 8116)))))))
          : (c <= 8124 || (c < 8458
            ? (c < 8182
              ? (c < 8144
                ? (c < 8130
                  ? c == 8126
                  : (c <= 8132 || (c >= 8134 && c <= 8140)))
                : (c <= 8147 || (c < 8160
                  ? (c >= 8150 && c <= 8155)
                  : (c <= 8172 || (c >= 8178 && c <= 8180)))))
              : (c <= 8188 || (c < 8336
                ? (c < 8308
                  ? (c >= 8304 && c <= 8305)
                  : (c <= 8313 || (c >= 8319 && c <= 8329)))
                : (c <= 8348 || (c < 8455
                  ? c == 8450
                  : c <= 8455)))))
            : (c <= 8467 || (c < 8508
              ? (c < 8486
                ? (c < 8473
                  ? c == 8469
                  : (c <= 8477 || c == 8484))
                : (c <= 8486 || (c < 8490
                  ? c == 8488
                  : (c <= 8493 || (c >= 8495 && c <= 8505)))))
              : (c <= 8511 || (c < 9312
                ? (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : (c <= 8526 || (c >= 8528 && c <= 8585)))
                : (c <= 9371 || (c < 10102
                  ? (c >= 9450 && c <= 9471)
                  : c <= 10131)))))))))
        : (c <= 11492 || (c < 12704
          ? (c < 11720
            ? (c < 11631
              ? (c < 11520
                ? (c < 11506
                  ? (c >= 11499 && c <= 11502)
                  : (c <= 11507 || c == 11517))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : (c <= 11565 || (c >= 11568 && c <= 11623)))))
              : (c <= 11631 || (c < 11696
                ? (c < 11680
                  ? (c >= 11648 && c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))
                : (c <= 11702 || (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : c <= 11718)))))
            : (c <= 11726 || (c < 12353
              ? (c < 12293
                ? (c < 11736
                  ? (c >= 11728 && c <= 11734)
                  : (c <= 11742 || c == 11823))
                : (c <= 12295 || (c < 12337
                  ? (c >= 12321 && c <= 12329)
                  : (c <= 12341 || (c >= 12344 && c <= 12348)))))
              : (c <= 12438 || (c < 12549
                ? (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : (c <= 12538 || (c >= 12540 && c <= 12543)))
                : (c <= 12591 || (c < 12690
                  ? (c >= 12593 && c <= 12686)
                  : c <= 12693)))))))
          : (c <= 12735 || (c < 42623
            ? (c < 19903
              ? (c < 12881
                ? (c < 12832
                  ? (c >= 12784 && c <= 12799)
                  : (c <= 12841 || (c >= 12872 && c <= 12879)))
                : (c <= 12895 || (c < 12977
                  ? (c >= 12928 && c <= 12937)
                  : (c <= 12991 || c == 13312))))
              : (c <= 19903 || (c < 42240
                ? (c < 40959
                  ? c == 19968
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42560
                  ? (c >= 42512 && c <= 42539)
                  : c <= 42606)))))
            : (c <= 42653 || (c < 42965
              ? (c < 42891
                ? (c < 42775
                  ? (c >= 42656 && c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42954 || (c < 42963
                  ? (c >= 42960 && c <= 42961)
                  : c <= 42963)))
              : (c <= 42969 || (c < 43020
                ? (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))
                : (c <= 43042 || (c < 43072
                  ? (c >= 43056 && c <= 43061)
                  : c <= 43123)))))))))))
      : (c <= 43187 || (c < 65345
        ? (c < 43808
          ? (c < 43600
            ? (c < 43396
              ? (c < 43261
                ? (c < 43250
                  ? (c >= 43216 && c <= 43225)
                  : (c <= 43255 || c == 43259))
                : (c <= 43262 || (c < 43312
                  ? (c >= 43264 && c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))))
              : (c <= 43442 || (c < 43520
                ? (c < 43488
                  ? (c >= 43471 && c <= 43481)
                  : (c <= 43492 || (c >= 43494 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43609 || (c < 43714
              ? (c < 43697
                ? (c < 43642
                  ? (c >= 43616 && c <= 43638)
                  : (c <= 43642 || (c >= 43646 && c <= 43695)))
                : (c <= 43697 || (c < 43705
                  ? (c >= 43701 && c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43754 || (c >= 43762 && c <= 43764)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 44032
                  ? (c >= 44016 && c <= 44025)
                  : (c <= 44032 || c == 55203))))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64848
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : (c <= 64433 || (c >= 64467 && c <= 64829)))))
              : (c <= 64911 || (c < 65142
                ? (c < 65008
                  ? (c >= 64914 && c <= 64967)
                  : (c <= 65019 || (c >= 65136 && c <= 65140)))
                : (c <= 65276 || (c < 65313
                  ? (c >= 65296 && c <= 65305)
                  : c <= 65338)))))))))
        : (c <= 65370 || (c < 66816
          ? (c < 65930
            ? (c < 65576
              ? (c < 65490
                ? (c < 65474
                  ? (c >= 65382 && c <= 65470)
                  : (c <= 65479 || (c >= 65482 && c <= 65487)))
                : (c <= 65495 || (c < 65536
                  ? (c >= 65498 && c <= 65500)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))))
              : (c <= 65594 || (c < 65664
                ? (c < 65599
                  ? (c >= 65596 && c <= 65597)
                  : (c <= 65613 || (c >= 65616 && c <= 65629)))
                : (c <= 65786 || (c < 65856
                  ? (c >= 65799 && c <= 65843)
                  : c <= 65912)))))
            : (c <= 65931 || (c < 66464
              ? (c < 66304
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66273 && c <= 66299)))
                : (c <= 66339 || (c < 66384
                  ? (c >= 66349 && c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66720
                ? (c < 66513
                  ? (c >= 66504 && c <= 66511)
                  : (c <= 66517 || (c >= 66560 && c <= 66717)))
                : (c <= 66729 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67506
            ? (c < 66995
              ? (c < 66956
                ? (c < 66928
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))
                : (c <= 66962 || (c < 66967
                  ? (c >= 66964 && c <= 66965)
                  : (c <= 66977 || (c >= 66979 && c <= 66993)))))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67672
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67751
                  ? (c >= 67705 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_bareword_character_set_6(int32_t c) {
  return (c < 6576
    ? (c < 2984
      ? (c < 2308
        ? (c < 1162
          ? (c < 248
            ? (c < '~'
              ? (c < '='
                ? (c < '%'
                  ? c == '!'
                  : (c <= '%' || (c >= '+' && c <= ':')))
                : (c <= '=' || (c < '\\'
                  ? (c >= '@' && c <= 'Z')
                  : (c <= '\\' || (c >= 'a' && c <= 'z')))))
              : (c <= '~' || (c < 185
                ? (c < 178
                  ? c == 170
                  : (c <= 179 || c == 181))
                : (c <= 186 || (c < 192
                  ? (c >= 188 && c <= 190)
                  : (c <= 214 || (c >= 216 && c <= 246)))))))
            : (c <= 705 || (c < 895
              ? (c < 750
                ? (c < 736
                  ? (c >= 710 && c <= 721)
                  : (c <= 740 || c == 748))
                : (c <= 750 || (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))))
              : (c <= 895 || (c < 910
                ? (c < 904
                  ? c == 902
                  : (c <= 906 || c == 908))
                : (c <= 929 || (c < 1015
                  ? (c >= 931 && c <= 1013)
                  : c <= 1153)))))))
          : (c <= 1327 || (c < 1810
            ? (c < 1646
              ? (c < 1488
                ? (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : (c <= 1369 || (c >= 1376 && c <= 1416)))
                : (c <= 1514 || (c < 1568
                  ? (c >= 1519 && c <= 1522)
                  : (c <= 1610 || (c >= 1632 && c <= 1641)))))
              : (c <= 1647 || (c < 1774
                ? (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : (c <= 1749 || (c >= 1765 && c <= 1766)))
                : (c <= 1788 || (c < 1808
                  ? c == 1791
                  : c <= 1808)))))
            : (c <= 1839 || (c < 2084
              ? (c < 2036
                ? (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : (c <= 1969 || (c >= 1984 && c <= 2026)))
                : (c <= 2037 || (c < 2048
                  ? c == 2042
                  : (c <= 2069 || c == 2074))))
              : (c <= 2084 || (c < 2160
                ? (c < 2112
                  ? c == 2088
                  : (c <= 2136 || (c >= 2144 && c <= 2154)))
                : (c <= 2183 || (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : c <= 2249)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2406
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2415 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : (c <= 2444 || (c >= 2447 && c <= 2448)))))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2565
                ? (c < 2548
                  ? (c >= 2534 && c <= 2545)
                  : (c <= 2553 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : (c <= 2600 || (c >= 2602 && c <= 2608)))))
              : (c <= 2611 || (c < 2654
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : (c <= 2617 || (c >= 2649 && c <= 2652)))
                : (c <= 2654 || (c < 2674
                  ? (c >= 2662 && c <= 2671)
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2784
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : (c <= 2749 || c == 2768))))
              : (c <= 2785 || (c < 2831
                ? (c < 2809
                  ? (c >= 2790 && c <= 2799)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2929
                  ? (c >= 2918 && c <= 2927)
                  : (c <= 2935 || c == 2947))))
              : (c <= 2954 || (c < 2972
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : (c <= 2965 || (c >= 2969 && c <= 2970)))
                : (c <= 2972 || (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : c <= 2980)))))))))))
      : (c <= 2986 || (c < 3976
        ? (c < 3412
          ? (c < 3205
            ? (c < 3133
              ? (c < 3077
                ? (c < 3024
                  ? (c >= 2990 && c <= 3001)
                  : (c <= 3024 || (c >= 3046 && c <= 3058)))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : (c <= 3112 || (c >= 3114 && c <= 3129)))))
              : (c <= 3133 || (c < 3174
                ? (c < 3165
                  ? (c >= 3160 && c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3169)))
                : (c <= 3183 || (c < 3200
                  ? (c >= 3192 && c <= 3198)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3302
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : (c <= 3294 || (c >= 3296 && c <= 3297)))))
              : (c <= 3311 || (c < 3346
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : (c <= 3340 || (c >= 3342 && c <= 3344)))
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3716
            ? (c < 3520
              ? (c < 3461
                ? (c < 3430
                  ? (c >= 3416 && c <= 3425)
                  : (c <= 3448 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : (c <= 3515 || c == 3517))))
              : (c <= 3526 || (c < 3648
                ? (c < 3585
                  ? (c >= 3558 && c <= 3567)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3713
                  ? (c >= 3664 && c <= 3673)
                  : c <= 3714)))))
            : (c <= 3716 || (c < 3782
              ? (c < 3751
                ? (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : (c <= 3747 || c == 3749))
                : (c <= 3760 || (c < 3773
                  ? (c >= 3762 && c <= 3763)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3872
                ? (c < 3804
                  ? (c >= 3792 && c <= 3801)
                  : (c <= 3807 || c == 3840))
                : (c <= 3891 || (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)))))))))
        : (c <= 3980 || (c < 4888
          ? (c < 4348
            ? (c < 4213
              ? (c < 4186
                ? (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : (c <= 4169 || (c >= 4176 && c <= 4181)))
                : (c <= 4189 || (c < 4197
                  ? c == 4193
                  : (c <= 4198 || (c >= 4206 && c <= 4208)))))
              : (c <= 4225 || (c < 4295
                ? (c < 4240
                  ? c == 4238
                  : (c <= 4249 || (c >= 4256 && c <= 4293)))
                : (c <= 4295 || (c < 4304
                  ? c == 4301
                  : c <= 4346)))))
            : (c <= 4680 || (c < 4786
              ? (c < 4698
                ? (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : (c <= 4694 || c == 4696))
                : (c <= 4701 || (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))))
              : (c <= 4789 || (c < 4808
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 6016
            ? (c < 5792
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4969 && c <= 4988)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5952
                ? (c < 5888
                  ? (c >= 5870 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6279
              ? (c < 6128
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6112 && c <= 6121)))
                : (c <= 6137 || (c < 6176
                  ? (c >= 6160 && c <= 6169)
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))))
              : (c <= 6312 || (c < 6470
                ? (c < 6320
                  ? c == 6314
                  : (c <= 6389 || (c >= 6400 && c <= 6430)))
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43072
      ? (c < 9450
        ? (c < 8031
          ? (c < 7312
            ? (c < 6981
              ? (c < 6784
                ? (c < 6656
                  ? (c >= 6608 && c <= 6618)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))
                : (c <= 6793 || (c < 6823
                  ? (c >= 6800 && c <= 6809)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))))
              : (c <= 6988 || (c < 7168
                ? (c < 7043
                  ? (c >= 6992 && c <= 7001)
                  : (c <= 7072 || (c >= 7086 && c <= 7141)))
                : (c <= 7203 || (c < 7245
                  ? (c >= 7232 && c <= 7241)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 7960
              ? (c < 7413
                ? (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : (c <= 7404 || (c >= 7406 && c <= 7411)))
                : (c <= 7414 || (c < 7424
                  ? c == 7418
                  : (c <= 7615 || (c >= 7680 && c <= 7957)))))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8160
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : (c <= 8147 || (c >= 8150 && c <= 8155)))))
              : (c <= 8172 || (c < 8308
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || (c >= 8304 && c <= 8305)))
                : (c <= 8313 || (c < 8336
                  ? (c >= 8319 && c <= 8329)
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8490
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : (c <= 8486 || c == 8488))))
              : (c <= 8493 || (c < 8526
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : (c <= 8511 || (c >= 8517 && c <= 8521)))
                : (c <= 8526 || (c < 9312
                  ? (c >= 8528 && c <= 8585)
                  : c <= 9371)))))))))
        : (c <= 9471 || (c < 12593
          ? (c < 11704
            ? (c < 11565
              ? (c < 11506
                ? (c < 11264
                  ? (c >= 10102 && c <= 10131)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))
                : (c <= 11507 || (c < 11520
                  ? c == 11517
                  : (c <= 11557 || c == 11559))))
              : (c <= 11565 || (c < 11680
                ? (c < 11631
                  ? (c >= 11568 && c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))
                : (c <= 11686 || (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : c <= 11702)))))
            : (c <= 11710 || (c < 12337
              ? (c < 11736
                ? (c < 11720
                  ? (c >= 11712 && c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))
                : (c <= 11742 || (c < 12293
                  ? c == 11823
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))
              : (c <= 12341 || (c < 12449
                ? (c < 12353
                  ? (c >= 12344 && c <= 12348)
                  : (c <= 12438 || (c >= 12445 && c <= 12447)))
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42512
            ? (c < 12977
              ? (c < 12832
                ? (c < 12704
                  ? (c >= 12690 && c <= 12693)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))
                : (c <= 12841 || (c < 12881
                  ? (c >= 12872 && c <= 12879)
                  : (c <= 12895 || (c >= 12928 && c <= 12937)))))
              : (c <= 12991 || (c < 40959
                ? (c < 19903
                  ? c == 13312
                  : (c <= 19903 || c == 19968))
                : (c <= 42124 || (c < 42240
                  ? (c >= 42192 && c <= 42237)
                  : c <= 42508)))))
            : (c <= 42539 || (c < 42963
              ? (c < 42775
                ? (c < 42623
                  ? (c >= 42560 && c <= 42606)
                  : (c <= 42653 || (c >= 42656 && c <= 42735)))
                : (c <= 42783 || (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))))
              : (c <= 42963 || (c < 43015
                ? (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : (c <= 43009 || (c >= 43011 && c <= 43013)))
                : (c <= 43018 || (c < 43056
                  ? (c >= 43020 && c <= 43042)
                  : c <= 43061)))))))))))
      : (c <= 43123 || (c < 65313
        ? (c < 43793
          ? (c < 43588
            ? (c < 43360
              ? (c < 43259
                ? (c < 43216
                  ? (c >= 43138 && c <= 43187)
                  : (c <= 43225 || (c >= 43250 && c <= 43255)))
                : (c <= 43259 || (c < 43264
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))))
              : (c <= 43388 || (c < 43494
                ? (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : (c <= 43481 || (c >= 43488 && c <= 43492)))
                : (c <= 43518 || (c < 43584
                  ? (c >= 43520 && c <= 43560)
                  : c <= 43586)))))
            : (c <= 43595 || (c < 43712
              ? (c < 43646
                ? (c < 43616
                  ? (c >= 43600 && c <= 43609)
                  : (c <= 43638 || c == 43642))
                : (c <= 43695 || (c < 43701
                  ? c == 43697
                  : (c <= 43702 || (c >= 43705 && c <= 43709)))))
              : (c <= 43712 || (c < 43762
                ? (c < 43739
                  ? c == 43714
                  : (c <= 43741 || (c >= 43744 && c <= 43754)))
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44016
                  ? (c >= 43888 && c <= 44002)
                  : (c <= 44025 || c == 44032))))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64467
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : (c <= 64324 || (c >= 64326 && c <= 64433)))))
              : (c <= 64829 || (c < 65136
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : (c <= 64967 || (c >= 65008 && c <= 65019)))
                : (c <= 65140 || (c < 65296
                  ? (c >= 65142 && c <= 65276)
                  : c <= 65305)))))))))
        : (c <= 65338 || (c < 66776
          ? (c < 65856
            ? (c < 65549
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : (c <= 65500 || (c >= 65536 && c <= 65547)))))
              : (c <= 65574 || (c < 65616
                ? (c < 65596
                  ? (c >= 65576 && c <= 65594)
                  : (c <= 65597 || (c >= 65599 && c <= 65613)))
                : (c <= 65629 || (c < 65799
                  ? (c >= 65664 && c <= 65786)
                  : c <= 65843)))))
            : (c <= 65912 || (c < 66432
              ? (c < 66273
                ? (c < 66176
                  ? (c >= 65930 && c <= 65931)
                  : (c <= 66204 || (c >= 66208 && c <= 66256)))
                : (c <= 66299 || (c < 66349
                  ? (c >= 66304 && c <= 66339)
                  : (c <= 66378 || (c >= 66384 && c <= 66421)))))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : (c <= 66511 || (c >= 66513 && c <= 66517)))
                : (c <= 66717 || (c < 66736
                  ? (c >= 66720 && c <= 66729)
                  : c <= 66771)))))))
          : (c <= 66811 || (c < 67463
            ? (c < 66979
              ? (c < 66940
                ? (c < 66864
                  ? (c >= 66816 && c <= 66855)
                  : (c <= 66915 || (c >= 66928 && c <= 66938)))
                : (c <= 66954 || (c < 66964
                  ? (c >= 66956 && c <= 66962)
                  : (c <= 66965 || (c >= 66967 && c <= 66977)))))
              : (c <= 66993 || (c < 67392
                ? (c < 67003
                  ? (c >= 66995 && c <= 67001)
                  : (c <= 67004 || (c >= 67072 && c <= 67382)))
                : (c <= 67413 || (c < 67456
                  ? (c >= 67424 && c <= 67431)
                  : c <= 67461)))))
            : (c <= 67504 || (c < 67672
              ? (c < 67594
                ? (c < 67584
                  ? (c >= 67506 && c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))))
              : (c <= 67702 || (c < 67828
                ? (c < 67751
                  ? (c >= 67705 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_bareword_character_set_7(int32_t c) {
  return (c < 6576
    ? (c < 2984
      ? (c < 2308
        ? (c < 1162
          ? (c < 248
            ? (c < '~'
              ? (c < '='
                ? (c < '%'
                  ? c == '!'
                  : (c <= '%' || (c >= '+' && c <= ':')))
                : (c <= '=' || (c < '\\'
                  ? (c >= '@' && c <= 'Z')
                  : (c <= '\\' || (c >= 'g' && c <= 'z')))))
              : (c <= '~' || (c < 185
                ? (c < 178
                  ? c == 170
                  : (c <= 179 || c == 181))
                : (c <= 186 || (c < 192
                  ? (c >= 188 && c <= 190)
                  : (c <= 214 || (c >= 216 && c <= 246)))))))
            : (c <= 705 || (c < 895
              ? (c < 750
                ? (c < 736
                  ? (c >= 710 && c <= 721)
                  : (c <= 740 || c == 748))
                : (c <= 750 || (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))))
              : (c <= 895 || (c < 910
                ? (c < 904
                  ? c == 902
                  : (c <= 906 || c == 908))
                : (c <= 929 || (c < 1015
                  ? (c >= 931 && c <= 1013)
                  : c <= 1153)))))))
          : (c <= 1327 || (c < 1810
            ? (c < 1646
              ? (c < 1488
                ? (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : (c <= 1369 || (c >= 1376 && c <= 1416)))
                : (c <= 1514 || (c < 1568
                  ? (c >= 1519 && c <= 1522)
                  : (c <= 1610 || (c >= 1632 && c <= 1641)))))
              : (c <= 1647 || (c < 1774
                ? (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : (c <= 1749 || (c >= 1765 && c <= 1766)))
                : (c <= 1788 || (c < 1808
                  ? c == 1791
                  : c <= 1808)))))
            : (c <= 1839 || (c < 2084
              ? (c < 2036
                ? (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : (c <= 1969 || (c >= 1984 && c <= 2026)))
                : (c <= 2037 || (c < 2048
                  ? c == 2042
                  : (c <= 2069 || c == 2074))))
              : (c <= 2084 || (c < 2160
                ? (c < 2112
                  ? c == 2088
                  : (c <= 2136 || (c >= 2144 && c <= 2154)))
                : (c <= 2183 || (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : c <= 2249)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2406
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2415 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : (c <= 2444 || (c >= 2447 && c <= 2448)))))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2565
                ? (c < 2548
                  ? (c >= 2534 && c <= 2545)
                  : (c <= 2553 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : (c <= 2600 || (c >= 2602 && c <= 2608)))))
              : (c <= 2611 || (c < 2654
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : (c <= 2617 || (c >= 2649 && c <= 2652)))
                : (c <= 2654 || (c < 2674
                  ? (c >= 2662 && c <= 2671)
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2784
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : (c <= 2749 || c == 2768))))
              : (c <= 2785 || (c < 2831
                ? (c < 2809
                  ? (c >= 2790 && c <= 2799)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2929
                  ? (c >= 2918 && c <= 2927)
                  : (c <= 2935 || c == 2947))))
              : (c <= 2954 || (c < 2972
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : (c <= 2965 || (c >= 2969 && c <= 2970)))
                : (c <= 2972 || (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : c <= 2980)))))))))))
      : (c <= 2986 || (c < 3976
        ? (c < 3412
          ? (c < 3205
            ? (c < 3133
              ? (c < 3077
                ? (c < 3024
                  ? (c >= 2990 && c <= 3001)
                  : (c <= 3024 || (c >= 3046 && c <= 3058)))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : (c <= 3112 || (c >= 3114 && c <= 3129)))))
              : (c <= 3133 || (c < 3174
                ? (c < 3165
                  ? (c >= 3160 && c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3169)))
                : (c <= 3183 || (c < 3200
                  ? (c >= 3192 && c <= 3198)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3302
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : (c <= 3294 || (c >= 3296 && c <= 3297)))))
              : (c <= 3311 || (c < 3346
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : (c <= 3340 || (c >= 3342 && c <= 3344)))
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3716
            ? (c < 3520
              ? (c < 3461
                ? (c < 3430
                  ? (c >= 3416 && c <= 3425)
                  : (c <= 3448 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : (c <= 3515 || c == 3517))))
              : (c <= 3526 || (c < 3648
                ? (c < 3585
                  ? (c >= 3558 && c <= 3567)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3713
                  ? (c >= 3664 && c <= 3673)
                  : c <= 3714)))))
            : (c <= 3716 || (c < 3782
              ? (c < 3751
                ? (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : (c <= 3747 || c == 3749))
                : (c <= 3760 || (c < 3773
                  ? (c >= 3762 && c <= 3763)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3872
                ? (c < 3804
                  ? (c >= 3792 && c <= 3801)
                  : (c <= 3807 || c == 3840))
                : (c <= 3891 || (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)))))))))
        : (c <= 3980 || (c < 4888
          ? (c < 4348
            ? (c < 4213
              ? (c < 4186
                ? (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : (c <= 4169 || (c >= 4176 && c <= 4181)))
                : (c <= 4189 || (c < 4197
                  ? c == 4193
                  : (c <= 4198 || (c >= 4206 && c <= 4208)))))
              : (c <= 4225 || (c < 4295
                ? (c < 4240
                  ? c == 4238
                  : (c <= 4249 || (c >= 4256 && c <= 4293)))
                : (c <= 4295 || (c < 4304
                  ? c == 4301
                  : c <= 4346)))))
            : (c <= 4680 || (c < 4786
              ? (c < 4698
                ? (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : (c <= 4694 || c == 4696))
                : (c <= 4701 || (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))))
              : (c <= 4789 || (c < 4808
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 6016
            ? (c < 5792
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4969 && c <= 4988)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5952
                ? (c < 5888
                  ? (c >= 5870 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6279
              ? (c < 6128
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6112 && c <= 6121)))
                : (c <= 6137 || (c < 6176
                  ? (c >= 6160 && c <= 6169)
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))))
              : (c <= 6312 || (c < 6470
                ? (c < 6320
                  ? c == 6314
                  : (c <= 6389 || (c >= 6400 && c <= 6430)))
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43072
      ? (c < 9450
        ? (c < 8031
          ? (c < 7312
            ? (c < 6981
              ? (c < 6784
                ? (c < 6656
                  ? (c >= 6608 && c <= 6618)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))
                : (c <= 6793 || (c < 6823
                  ? (c >= 6800 && c <= 6809)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))))
              : (c <= 6988 || (c < 7168
                ? (c < 7043
                  ? (c >= 6992 && c <= 7001)
                  : (c <= 7072 || (c >= 7086 && c <= 7141)))
                : (c <= 7203 || (c < 7245
                  ? (c >= 7232 && c <= 7241)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 7960
              ? (c < 7413
                ? (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : (c <= 7404 || (c >= 7406 && c <= 7411)))
                : (c <= 7414 || (c < 7424
                  ? c == 7418
                  : (c <= 7615 || (c >= 7680 && c <= 7957)))))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8160
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : (c <= 8147 || (c >= 8150 && c <= 8155)))))
              : (c <= 8172 || (c < 8308
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || (c >= 8304 && c <= 8305)))
                : (c <= 8313 || (c < 8336
                  ? (c >= 8319 && c <= 8329)
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8490
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : (c <= 8486 || c == 8488))))
              : (c <= 8493 || (c < 8526
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : (c <= 8511 || (c >= 8517 && c <= 8521)))
                : (c <= 8526 || (c < 9312
                  ? (c >= 8528 && c <= 8585)
                  : c <= 9371)))))))))
        : (c <= 9471 || (c < 12593
          ? (c < 11704
            ? (c < 11565
              ? (c < 11506
                ? (c < 11264
                  ? (c >= 10102 && c <= 10131)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))
                : (c <= 11507 || (c < 11520
                  ? c == 11517
                  : (c <= 11557 || c == 11559))))
              : (c <= 11565 || (c < 11680
                ? (c < 11631
                  ? (c >= 11568 && c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))
                : (c <= 11686 || (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : c <= 11702)))))
            : (c <= 11710 || (c < 12337
              ? (c < 11736
                ? (c < 11720
                  ? (c >= 11712 && c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))
                : (c <= 11742 || (c < 12293
                  ? c == 11823
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))
              : (c <= 12341 || (c < 12449
                ? (c < 12353
                  ? (c >= 12344 && c <= 12348)
                  : (c <= 12438 || (c >= 12445 && c <= 12447)))
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42512
            ? (c < 12977
              ? (c < 12832
                ? (c < 12704
                  ? (c >= 12690 && c <= 12693)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))
                : (c <= 12841 || (c < 12881
                  ? (c >= 12872 && c <= 12879)
                  : (c <= 12895 || (c >= 12928 && c <= 12937)))))
              : (c <= 12991 || (c < 40959
                ? (c < 19903
                  ? c == 13312
                  : (c <= 19903 || c == 19968))
                : (c <= 42124 || (c < 42240
                  ? (c >= 42192 && c <= 42237)
                  : c <= 42508)))))
            : (c <= 42539 || (c < 42963
              ? (c < 42775
                ? (c < 42623
                  ? (c >= 42560 && c <= 42606)
                  : (c <= 42653 || (c >= 42656 && c <= 42735)))
                : (c <= 42783 || (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))))
              : (c <= 42963 || (c < 43015
                ? (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : (c <= 43009 || (c >= 43011 && c <= 43013)))
                : (c <= 43018 || (c < 43056
                  ? (c >= 43020 && c <= 43042)
                  : c <= 43061)))))))))))
      : (c <= 43123 || (c < 65313
        ? (c < 43793
          ? (c < 43588
            ? (c < 43360
              ? (c < 43259
                ? (c < 43216
                  ? (c >= 43138 && c <= 43187)
                  : (c <= 43225 || (c >= 43250 && c <= 43255)))
                : (c <= 43259 || (c < 43264
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))))
              : (c <= 43388 || (c < 43494
                ? (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : (c <= 43481 || (c >= 43488 && c <= 43492)))
                : (c <= 43518 || (c < 43584
                  ? (c >= 43520 && c <= 43560)
                  : c <= 43586)))))
            : (c <= 43595 || (c < 43712
              ? (c < 43646
                ? (c < 43616
                  ? (c >= 43600 && c <= 43609)
                  : (c <= 43638 || c == 43642))
                : (c <= 43695 || (c < 43701
                  ? c == 43697
                  : (c <= 43702 || (c >= 43705 && c <= 43709)))))
              : (c <= 43712 || (c < 43762
                ? (c < 43739
                  ? c == 43714
                  : (c <= 43741 || (c >= 43744 && c <= 43754)))
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44016
                  ? (c >= 43888 && c <= 44002)
                  : (c <= 44025 || c == 44032))))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64467
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : (c <= 64324 || (c >= 64326 && c <= 64433)))))
              : (c <= 64829 || (c < 65136
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : (c <= 64967 || (c >= 65008 && c <= 65019)))
                : (c <= 65140 || (c < 65296
                  ? (c >= 65142 && c <= 65276)
                  : c <= 65305)))))))))
        : (c <= 65338 || (c < 66776
          ? (c < 65856
            ? (c < 65549
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : (c <= 65500 || (c >= 65536 && c <= 65547)))))
              : (c <= 65574 || (c < 65616
                ? (c < 65596
                  ? (c >= 65576 && c <= 65594)
                  : (c <= 65597 || (c >= 65599 && c <= 65613)))
                : (c <= 65629 || (c < 65799
                  ? (c >= 65664 && c <= 65786)
                  : c <= 65843)))))
            : (c <= 65912 || (c < 66432
              ? (c < 66273
                ? (c < 66176
                  ? (c >= 65930 && c <= 65931)
                  : (c <= 66204 || (c >= 66208 && c <= 66256)))
                : (c <= 66299 || (c < 66349
                  ? (c >= 66304 && c <= 66339)
                  : (c <= 66378 || (c >= 66384 && c <= 66421)))))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : (c <= 66511 || (c >= 66513 && c <= 66517)))
                : (c <= 66717 || (c < 66736
                  ? (c >= 66720 && c <= 66729)
                  : c <= 66771)))))))
          : (c <= 66811 || (c < 67463
            ? (c < 66979
              ? (c < 66940
                ? (c < 66864
                  ? (c >= 66816 && c <= 66855)
                  : (c <= 66915 || (c >= 66928 && c <= 66938)))
                : (c <= 66954 || (c < 66964
                  ? (c >= 66956 && c <= 66962)
                  : (c <= 66965 || (c >= 66967 && c <= 66977)))))
              : (c <= 66993 || (c < 67392
                ? (c < 67003
                  ? (c >= 66995 && c <= 67001)
                  : (c <= 67004 || (c >= 67072 && c <= 67382)))
                : (c <= 67413 || (c < 67456
                  ? (c >= 67424 && c <= 67431)
                  : c <= 67461)))))
            : (c <= 67504 || (c < 67672
              ? (c < 67594
                ? (c < 67584
                  ? (c >= 67506 && c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))))
              : (c <= 67702 || (c < 67828
                ? (c < 67751
                  ? (c >= 67705 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_bareword_character_set_8(int32_t c) {
  return (c < 6576
    ? (c < 2979
      ? (c < 2208
        ? (c < 1015
          ? (c < 216
            ? (c < 'b'
              ? (c < '='
                ? (c < '%'
                  ? c == '!'
                  : (c <= '%' || (c >= '+' && c <= ':')))
                : (c <= '=' || (c < '\\'
                  ? (c >= '@' && c <= 'Z')
                  : (c <= '\\' || c == '_'))))
              : (c <= 'z' || (c < 181
                ? (c < 170
                  ? c == '~'
                  : (c <= 170 || (c >= 178 && c <= 179)))
                : (c <= 181 || (c < 188
                  ? (c >= 185 && c <= 186)
                  : (c <= 190 || (c >= 192 && c <= 214)))))))
            : (c <= 246 || (c < 890
              ? (c < 748
                ? (c < 710
                  ? (c >= 248 && c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))
                : (c <= 748 || (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))))
              : (c <= 893 || (c < 908
                ? (c < 902
                  ? c == 895
                  : (c <= 902 || (c >= 904 && c <= 906)))
                : (c <= 908 || (c < 931
                  ? (c >= 910 && c <= 929)
                  : c <= 1013)))))))
          : (c <= 1153 || (c < 1808
            ? (c < 1632
              ? (c < 1376
                ? (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : (c <= 1366 || c == 1369))
                : (c <= 1416 || (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))))
              : (c <= 1641 || (c < 1765
                ? (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : (c <= 1747 || c == 1749))
                : (c <= 1766 || (c < 1791
                  ? (c >= 1774 && c <= 1788)
                  : c <= 1791)))))
            : (c <= 1808 || (c < 2074
              ? (c < 1984
                ? (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : (c <= 1957 || c == 1969))
                : (c <= 2026 || (c < 2042
                  ? (c >= 2036 && c <= 2037)
                  : (c <= 2042 || (c >= 2048 && c <= 2069)))))
              : (c <= 2074 || (c < 2144
                ? (c < 2088
                  ? c == 2084
                  : (c <= 2088 || (c >= 2112 && c <= 2136)))
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2417
                  ? (c >= 2406 && c <= 2415)
                  : (c <= 2432 || (c >= 2437 && c <= 2444)))))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2556
                ? (c < 2534
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || (c >= 2548 && c <= 2553)))
                : (c <= 2556 || (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))))
              : (c <= 2608 || (c < 2649
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2662
                  ? c == 2654
                  : c <= 2671)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2768
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : (c <= 2745 || c == 2749))))
              : (c <= 2768 || (c < 2821
                ? (c < 2790
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2799 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2918
                  ? (c >= 2911 && c <= 2913)
                  : (c <= 2927 || (c >= 2929 && c <= 2935)))))
              : (c <= 2947 || (c < 2969
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 3976
        ? (c < 3412
          ? (c < 3205
            ? (c < 3114
              ? (c < 3046
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3058 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3192
                  ? (c >= 3174 && c <= 3183)
                  : (c <= 3198 || c == 3200))))))
            : (c <= 3212 || (c < 3302
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : (c <= 3294 || (c >= 3296 && c <= 3297)))))
              : (c <= 3311 || (c < 3346
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : (c <= 3340 || (c >= 3342 && c <= 3344)))
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3716
            ? (c < 3520
              ? (c < 3461
                ? (c < 3430
                  ? (c >= 3416 && c <= 3425)
                  : (c <= 3448 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : (c <= 3515 || c == 3517))))
              : (c <= 3526 || (c < 3648
                ? (c < 3585
                  ? (c >= 3558 && c <= 3567)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3713
                  ? (c >= 3664 && c <= 3673)
                  : c <= 3714)))))
            : (c <= 3716 || (c < 3782
              ? (c < 3751
                ? (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : (c <= 3747 || c == 3749))
                : (c <= 3760 || (c < 3773
                  ? (c >= 3762 && c <= 3763)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3872
                ? (c < 3804
                  ? (c >= 3792 && c <= 3801)
                  : (c <= 3807 || c == 3840))
                : (c <= 3891 || (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)))))))))
        : (c <= 3980 || (c < 4888
          ? (c < 4348
            ? (c < 4213
              ? (c < 4186
                ? (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : (c <= 4169 || (c >= 4176 && c <= 4181)))
                : (c <= 4189 || (c < 4197
                  ? c == 4193
                  : (c <= 4198 || (c >= 4206 && c <= 4208)))))
              : (c <= 4225 || (c < 4295
                ? (c < 4240
                  ? c == 4238
                  : (c <= 4249 || (c >= 4256 && c <= 4293)))
                : (c <= 4295 || (c < 4304
                  ? c == 4301
                  : c <= 4346)))))
            : (c <= 4680 || (c < 4786
              ? (c < 4698
                ? (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : (c <= 4694 || c == 4696))
                : (c <= 4701 || (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))))
              : (c <= 4789 || (c < 4808
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 6016
            ? (c < 5792
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4969 && c <= 4988)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5952
                ? (c < 5888
                  ? (c >= 5870 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6279
              ? (c < 6128
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6112 && c <= 6121)))
                : (c <= 6137 || (c < 6176
                  ? (c >= 6160 && c <= 6169)
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))))
              : (c <= 6312 || (c < 6470
                ? (c < 6320
                  ? c == 6314
                  : (c <= 6389 || (c >= 6400 && c <= 6430)))
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43072
      ? (c < 9450
        ? (c < 8031
          ? (c < 7312
            ? (c < 6981
              ? (c < 6784
                ? (c < 6656
                  ? (c >= 6608 && c <= 6618)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))
                : (c <= 6793 || (c < 6823
                  ? (c >= 6800 && c <= 6809)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))))
              : (c <= 6988 || (c < 7168
                ? (c < 7043
                  ? (c >= 6992 && c <= 7001)
                  : (c <= 7072 || (c >= 7086 && c <= 7141)))
                : (c <= 7203 || (c < 7245
                  ? (c >= 7232 && c <= 7241)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 7960
              ? (c < 7413
                ? (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : (c <= 7404 || (c >= 7406 && c <= 7411)))
                : (c <= 7414 || (c < 7424
                  ? c == 7418
                  : (c <= 7615 || (c >= 7680 && c <= 7957)))))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8160
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : (c <= 8147 || (c >= 8150 && c <= 8155)))))
              : (c <= 8172 || (c < 8308
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || (c >= 8304 && c <= 8305)))
                : (c <= 8313 || (c < 8336
                  ? (c >= 8319 && c <= 8329)
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8490
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : (c <= 8486 || c == 8488))))
              : (c <= 8493 || (c < 8526
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : (c <= 8511 || (c >= 8517 && c <= 8521)))
                : (c <= 8526 || (c < 9312
                  ? (c >= 8528 && c <= 8585)
                  : c <= 9371)))))))))
        : (c <= 9471 || (c < 12593
          ? (c < 11704
            ? (c < 11565
              ? (c < 11506
                ? (c < 11264
                  ? (c >= 10102 && c <= 10131)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))
                : (c <= 11507 || (c < 11520
                  ? c == 11517
                  : (c <= 11557 || c == 11559))))
              : (c <= 11565 || (c < 11680
                ? (c < 11631
                  ? (c >= 11568 && c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))
                : (c <= 11686 || (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : c <= 11702)))))
            : (c <= 11710 || (c < 12337
              ? (c < 11736
                ? (c < 11720
                  ? (c >= 11712 && c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))
                : (c <= 11742 || (c < 12293
                  ? c == 11823
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))
              : (c <= 12341 || (c < 12449
                ? (c < 12353
                  ? (c >= 12344 && c <= 12348)
                  : (c <= 12438 || (c >= 12445 && c <= 12447)))
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42512
            ? (c < 12977
              ? (c < 12832
                ? (c < 12704
                  ? (c >= 12690 && c <= 12693)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))
                : (c <= 12841 || (c < 12881
                  ? (c >= 12872 && c <= 12879)
                  : (c <= 12895 || (c >= 12928 && c <= 12937)))))
              : (c <= 12991 || (c < 40959
                ? (c < 19903
                  ? c == 13312
                  : (c <= 19903 || c == 19968))
                : (c <= 42124 || (c < 42240
                  ? (c >= 42192 && c <= 42237)
                  : c <= 42508)))))
            : (c <= 42539 || (c < 42963
              ? (c < 42775
                ? (c < 42623
                  ? (c >= 42560 && c <= 42606)
                  : (c <= 42653 || (c >= 42656 && c <= 42735)))
                : (c <= 42783 || (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))))
              : (c <= 42963 || (c < 43015
                ? (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : (c <= 43009 || (c >= 43011 && c <= 43013)))
                : (c <= 43018 || (c < 43056
                  ? (c >= 43020 && c <= 43042)
                  : c <= 43061)))))))))))
      : (c <= 43123 || (c < 65313
        ? (c < 43793
          ? (c < 43588
            ? (c < 43360
              ? (c < 43259
                ? (c < 43216
                  ? (c >= 43138 && c <= 43187)
                  : (c <= 43225 || (c >= 43250 && c <= 43255)))
                : (c <= 43259 || (c < 43264
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))))
              : (c <= 43388 || (c < 43494
                ? (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : (c <= 43481 || (c >= 43488 && c <= 43492)))
                : (c <= 43518 || (c < 43584
                  ? (c >= 43520 && c <= 43560)
                  : c <= 43586)))))
            : (c <= 43595 || (c < 43712
              ? (c < 43646
                ? (c < 43616
                  ? (c >= 43600 && c <= 43609)
                  : (c <= 43638 || c == 43642))
                : (c <= 43695 || (c < 43701
                  ? c == 43697
                  : (c <= 43702 || (c >= 43705 && c <= 43709)))))
              : (c <= 43712 || (c < 43762
                ? (c < 43739
                  ? c == 43714
                  : (c <= 43741 || (c >= 43744 && c <= 43754)))
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44016
                  ? (c >= 43888 && c <= 44002)
                  : (c <= 44025 || c == 44032))))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64467
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : (c <= 64324 || (c >= 64326 && c <= 64433)))))
              : (c <= 64829 || (c < 65136
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : (c <= 64967 || (c >= 65008 && c <= 65019)))
                : (c <= 65140 || (c < 65296
                  ? (c >= 65142 && c <= 65276)
                  : c <= 65305)))))))))
        : (c <= 65338 || (c < 66776
          ? (c < 65856
            ? (c < 65549
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : (c <= 65500 || (c >= 65536 && c <= 65547)))))
              : (c <= 65574 || (c < 65616
                ? (c < 65596
                  ? (c >= 65576 && c <= 65594)
                  : (c <= 65597 || (c >= 65599 && c <= 65613)))
                : (c <= 65629 || (c < 65799
                  ? (c >= 65664 && c <= 65786)
                  : c <= 65843)))))
            : (c <= 65912 || (c < 66432
              ? (c < 66273
                ? (c < 66176
                  ? (c >= 65930 && c <= 65931)
                  : (c <= 66204 || (c >= 66208 && c <= 66256)))
                : (c <= 66299 || (c < 66349
                  ? (c >= 66304 && c <= 66339)
                  : (c <= 66378 || (c >= 66384 && c <= 66421)))))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : (c <= 66511 || (c >= 66513 && c <= 66517)))
                : (c <= 66717 || (c < 66736
                  ? (c >= 66720 && c <= 66729)
                  : c <= 66771)))))))
          : (c <= 66811 || (c < 67463
            ? (c < 66979
              ? (c < 66940
                ? (c < 66864
                  ? (c >= 66816 && c <= 66855)
                  : (c <= 66915 || (c >= 66928 && c <= 66938)))
                : (c <= 66954 || (c < 66964
                  ? (c >= 66956 && c <= 66962)
                  : (c <= 66965 || (c >= 66967 && c <= 66977)))))
              : (c <= 66993 || (c < 67392
                ? (c < 67003
                  ? (c >= 66995 && c <= 67001)
                  : (c <= 67004 || (c >= 67072 && c <= 67382)))
                : (c <= 67413 || (c < 67456
                  ? (c >= 67424 && c <= 67431)
                  : c <= 67461)))))
            : (c <= 67504 || (c < 67672
              ? (c < 67594
                ? (c < 67584
                  ? (c >= 67506 && c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))))
              : (c <= 67702 || (c < 67828
                ? (c < 67751
                  ? (c >= 67705 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_bareword_character_set_9(int32_t c) {
  return (c < 6576
    ? (c < 2979
      ? (c < 2208
        ? (c < 1015
          ? (c < 216
            ? (c < 'a'
              ? (c < '='
                ? (c < '%'
                  ? c == '!'
                  : (c <= '%' || (c >= ',' && c <= ':')))
                : (c <= '=' || (c < '\\'
                  ? (c >= '@' && c <= 'Z')
                  : (c <= '\\' || c == '_'))))
              : (c <= 'z' || (c < 181
                ? (c < 170
                  ? c == '~'
                  : (c <= 170 || (c >= 178 && c <= 179)))
                : (c <= 181 || (c < 188
                  ? (c >= 185 && c <= 186)
                  : (c <= 190 || (c >= 192 && c <= 214)))))))
            : (c <= 246 || (c < 890
              ? (c < 748
                ? (c < 710
                  ? (c >= 248 && c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))
                : (c <= 748 || (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))))
              : (c <= 893 || (c < 908
                ? (c < 902
                  ? c == 895
                  : (c <= 902 || (c >= 904 && c <= 906)))
                : (c <= 908 || (c < 931
                  ? (c >= 910 && c <= 929)
                  : c <= 1013)))))))
          : (c <= 1153 || (c < 1808
            ? (c < 1632
              ? (c < 1376
                ? (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : (c <= 1366 || c == 1369))
                : (c <= 1416 || (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))))
              : (c <= 1641 || (c < 1765
                ? (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : (c <= 1747 || c == 1749))
                : (c <= 1766 || (c < 1791
                  ? (c >= 1774 && c <= 1788)
                  : c <= 1791)))))
            : (c <= 1808 || (c < 2074
              ? (c < 1984
                ? (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : (c <= 1957 || c == 1969))
                : (c <= 2026 || (c < 2042
                  ? (c >= 2036 && c <= 2037)
                  : (c <= 2042 || (c >= 2048 && c <= 2069)))))
              : (c <= 2074 || (c < 2144
                ? (c < 2088
                  ? c == 2084
                  : (c <= 2088 || (c >= 2112 && c <= 2136)))
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2417
                  ? (c >= 2406 && c <= 2415)
                  : (c <= 2432 || (c >= 2437 && c <= 2444)))))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2556
                ? (c < 2534
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || (c >= 2548 && c <= 2553)))
                : (c <= 2556 || (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))))
              : (c <= 2608 || (c < 2649
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2662
                  ? c == 2654
                  : c <= 2671)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2768
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : (c <= 2745 || c == 2749))))
              : (c <= 2768 || (c < 2821
                ? (c < 2790
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2799 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2918
                  ? (c >= 2911 && c <= 2913)
                  : (c <= 2927 || (c >= 2929 && c <= 2935)))))
              : (c <= 2947 || (c < 2969
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 3976
        ? (c < 3412
          ? (c < 3205
            ? (c < 3114
              ? (c < 3046
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3058 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3192
                  ? (c >= 3174 && c <= 3183)
                  : (c <= 3198 || c == 3200))))))
            : (c <= 3212 || (c < 3302
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : (c <= 3294 || (c >= 3296 && c <= 3297)))))
              : (c <= 3311 || (c < 3346
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : (c <= 3340 || (c >= 3342 && c <= 3344)))
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3716
            ? (c < 3520
              ? (c < 3461
                ? (c < 3430
                  ? (c >= 3416 && c <= 3425)
                  : (c <= 3448 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : (c <= 3515 || c == 3517))))
              : (c <= 3526 || (c < 3648
                ? (c < 3585
                  ? (c >= 3558 && c <= 3567)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3713
                  ? (c >= 3664 && c <= 3673)
                  : c <= 3714)))))
            : (c <= 3716 || (c < 3782
              ? (c < 3751
                ? (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : (c <= 3747 || c == 3749))
                : (c <= 3760 || (c < 3773
                  ? (c >= 3762 && c <= 3763)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3872
                ? (c < 3804
                  ? (c >= 3792 && c <= 3801)
                  : (c <= 3807 || c == 3840))
                : (c <= 3891 || (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)))))))))
        : (c <= 3980 || (c < 4888
          ? (c < 4348
            ? (c < 4213
              ? (c < 4186
                ? (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : (c <= 4169 || (c >= 4176 && c <= 4181)))
                : (c <= 4189 || (c < 4197
                  ? c == 4193
                  : (c <= 4198 || (c >= 4206 && c <= 4208)))))
              : (c <= 4225 || (c < 4295
                ? (c < 4240
                  ? c == 4238
                  : (c <= 4249 || (c >= 4256 && c <= 4293)))
                : (c <= 4295 || (c < 4304
                  ? c == 4301
                  : c <= 4346)))))
            : (c <= 4680 || (c < 4786
              ? (c < 4698
                ? (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : (c <= 4694 || c == 4696))
                : (c <= 4701 || (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))))
              : (c <= 4789 || (c < 4808
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 6016
            ? (c < 5792
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4969 && c <= 4988)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5952
                ? (c < 5888
                  ? (c >= 5870 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6279
              ? (c < 6128
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6112 && c <= 6121)))
                : (c <= 6137 || (c < 6176
                  ? (c >= 6160 && c <= 6169)
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))))
              : (c <= 6312 || (c < 6470
                ? (c < 6320
                  ? c == 6314
                  : (c <= 6389 || (c >= 6400 && c <= 6430)))
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43072
      ? (c < 9450
        ? (c < 8031
          ? (c < 7312
            ? (c < 6981
              ? (c < 6784
                ? (c < 6656
                  ? (c >= 6608 && c <= 6618)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))
                : (c <= 6793 || (c < 6823
                  ? (c >= 6800 && c <= 6809)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))))
              : (c <= 6988 || (c < 7168
                ? (c < 7043
                  ? (c >= 6992 && c <= 7001)
                  : (c <= 7072 || (c >= 7086 && c <= 7141)))
                : (c <= 7203 || (c < 7245
                  ? (c >= 7232 && c <= 7241)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 7960
              ? (c < 7413
                ? (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : (c <= 7404 || (c >= 7406 && c <= 7411)))
                : (c <= 7414 || (c < 7424
                  ? c == 7418
                  : (c <= 7615 || (c >= 7680 && c <= 7957)))))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8160
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : (c <= 8147 || (c >= 8150 && c <= 8155)))))
              : (c <= 8172 || (c < 8308
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || (c >= 8304 && c <= 8305)))
                : (c <= 8313 || (c < 8336
                  ? (c >= 8319 && c <= 8329)
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8490
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : (c <= 8486 || c == 8488))))
              : (c <= 8493 || (c < 8526
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : (c <= 8511 || (c >= 8517 && c <= 8521)))
                : (c <= 8526 || (c < 9312
                  ? (c >= 8528 && c <= 8585)
                  : c <= 9371)))))))))
        : (c <= 9471 || (c < 12593
          ? (c < 11704
            ? (c < 11565
              ? (c < 11506
                ? (c < 11264
                  ? (c >= 10102 && c <= 10131)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))
                : (c <= 11507 || (c < 11520
                  ? c == 11517
                  : (c <= 11557 || c == 11559))))
              : (c <= 11565 || (c < 11680
                ? (c < 11631
                  ? (c >= 11568 && c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))
                : (c <= 11686 || (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : c <= 11702)))))
            : (c <= 11710 || (c < 12337
              ? (c < 11736
                ? (c < 11720
                  ? (c >= 11712 && c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))
                : (c <= 11742 || (c < 12293
                  ? c == 11823
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))
              : (c <= 12341 || (c < 12449
                ? (c < 12353
                  ? (c >= 12344 && c <= 12348)
                  : (c <= 12438 || (c >= 12445 && c <= 12447)))
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42512
            ? (c < 12977
              ? (c < 12832
                ? (c < 12704
                  ? (c >= 12690 && c <= 12693)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))
                : (c <= 12841 || (c < 12881
                  ? (c >= 12872 && c <= 12879)
                  : (c <= 12895 || (c >= 12928 && c <= 12937)))))
              : (c <= 12991 || (c < 40959
                ? (c < 19903
                  ? c == 13312
                  : (c <= 19903 || c == 19968))
                : (c <= 42124 || (c < 42240
                  ? (c >= 42192 && c <= 42237)
                  : c <= 42508)))))
            : (c <= 42539 || (c < 42963
              ? (c < 42775
                ? (c < 42623
                  ? (c >= 42560 && c <= 42606)
                  : (c <= 42653 || (c >= 42656 && c <= 42735)))
                : (c <= 42783 || (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))))
              : (c <= 42963 || (c < 43015
                ? (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : (c <= 43009 || (c >= 43011 && c <= 43013)))
                : (c <= 43018 || (c < 43056
                  ? (c >= 43020 && c <= 43042)
                  : c <= 43061)))))))))))
      : (c <= 43123 || (c < 65313
        ? (c < 43793
          ? (c < 43588
            ? (c < 43360
              ? (c < 43259
                ? (c < 43216
                  ? (c >= 43138 && c <= 43187)
                  : (c <= 43225 || (c >= 43250 && c <= 43255)))
                : (c <= 43259 || (c < 43264
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))))
              : (c <= 43388 || (c < 43494
                ? (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : (c <= 43481 || (c >= 43488 && c <= 43492)))
                : (c <= 43518 || (c < 43584
                  ? (c >= 43520 && c <= 43560)
                  : c <= 43586)))))
            : (c <= 43595 || (c < 43712
              ? (c < 43646
                ? (c < 43616
                  ? (c >= 43600 && c <= 43609)
                  : (c <= 43638 || c == 43642))
                : (c <= 43695 || (c < 43701
                  ? c == 43697
                  : (c <= 43702 || (c >= 43705 && c <= 43709)))))
              : (c <= 43712 || (c < 43762
                ? (c < 43739
                  ? c == 43714
                  : (c <= 43741 || (c >= 43744 && c <= 43754)))
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44016
                  ? (c >= 43888 && c <= 44002)
                  : (c <= 44025 || c == 44032))))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64467
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : (c <= 64324 || (c >= 64326 && c <= 64433)))))
              : (c <= 64829 || (c < 65136
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : (c <= 64967 || (c >= 65008 && c <= 65019)))
                : (c <= 65140 || (c < 65296
                  ? (c >= 65142 && c <= 65276)
                  : c <= 65305)))))))))
        : (c <= 65338 || (c < 66776
          ? (c < 65856
            ? (c < 65549
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : (c <= 65500 || (c >= 65536 && c <= 65547)))))
              : (c <= 65574 || (c < 65616
                ? (c < 65596
                  ? (c >= 65576 && c <= 65594)
                  : (c <= 65597 || (c >= 65599 && c <= 65613)))
                : (c <= 65629 || (c < 65799
                  ? (c >= 65664 && c <= 65786)
                  : c <= 65843)))))
            : (c <= 65912 || (c < 66432
              ? (c < 66273
                ? (c < 66176
                  ? (c >= 65930 && c <= 65931)
                  : (c <= 66204 || (c >= 66208 && c <= 66256)))
                : (c <= 66299 || (c < 66349
                  ? (c >= 66304 && c <= 66339)
                  : (c <= 66378 || (c >= 66384 && c <= 66421)))))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : (c <= 66511 || (c >= 66513 && c <= 66517)))
                : (c <= 66717 || (c < 66736
                  ? (c >= 66720 && c <= 66729)
                  : c <= 66771)))))))
          : (c <= 66811 || (c < 67463
            ? (c < 66979
              ? (c < 66940
                ? (c < 66864
                  ? (c >= 66816 && c <= 66855)
                  : (c <= 66915 || (c >= 66928 && c <= 66938)))
                : (c <= 66954 || (c < 66964
                  ? (c >= 66956 && c <= 66962)
                  : (c <= 66965 || (c >= 66967 && c <= 66977)))))
              : (c <= 66993 || (c < 67392
                ? (c < 67003
                  ? (c >= 66995 && c <= 67001)
                  : (c <= 67004 || (c >= 67072 && c <= 67382)))
                : (c <= 67413 || (c < 67456
                  ? (c >= 67424 && c <= 67431)
                  : c <= 67461)))))
            : (c <= 67504 || (c < 67672
              ? (c < 67594
                ? (c < 67584
                  ? (c >= 67506 && c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))))
              : (c <= 67702 || (c < 67828
                ? (c < 67751
                  ? (c >= 67705 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_bareword_character_set_10(int32_t c) {
  return (c < 6576
    ? (c < 2979
      ? (c < 2208
        ? (c < 1015
          ? (c < 216
            ? (c < 'g'
              ? (c < '='
                ? (c < '%'
                  ? c == '!'
                  : (c <= '%' || (c >= '+' && c <= ':')))
                : (c <= '=' || (c < '\\'
                  ? (c >= '@' && c <= 'Z')
                  : (c <= '\\' || c == '_'))))
              : (c <= 'z' || (c < 181
                ? (c < 170
                  ? c == '~'
                  : (c <= 170 || (c >= 178 && c <= 179)))
                : (c <= 181 || (c < 188
                  ? (c >= 185 && c <= 186)
                  : (c <= 190 || (c >= 192 && c <= 214)))))))
            : (c <= 246 || (c < 890
              ? (c < 748
                ? (c < 710
                  ? (c >= 248 && c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))
                : (c <= 748 || (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))))
              : (c <= 893 || (c < 908
                ? (c < 902
                  ? c == 895
                  : (c <= 902 || (c >= 904 && c <= 906)))
                : (c <= 908 || (c < 931
                  ? (c >= 910 && c <= 929)
                  : c <= 1013)))))))
          : (c <= 1153 || (c < 1808
            ? (c < 1632
              ? (c < 1376
                ? (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : (c <= 1366 || c == 1369))
                : (c <= 1416 || (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))))
              : (c <= 1641 || (c < 1765
                ? (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : (c <= 1747 || c == 1749))
                : (c <= 1766 || (c < 1791
                  ? (c >= 1774 && c <= 1788)
                  : c <= 1791)))))
            : (c <= 1808 || (c < 2074
              ? (c < 1984
                ? (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : (c <= 1957 || c == 1969))
                : (c <= 2026 || (c < 2042
                  ? (c >= 2036 && c <= 2037)
                  : (c <= 2042 || (c >= 2048 && c <= 2069)))))
              : (c <= 2074 || (c < 2144
                ? (c < 2088
                  ? c == 2084
                  : (c <= 2088 || (c >= 2112 && c <= 2136)))
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2417
                  ? (c >= 2406 && c <= 2415)
                  : (c <= 2432 || (c >= 2437 && c <= 2444)))))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2556
                ? (c < 2534
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || (c >= 2548 && c <= 2553)))
                : (c <= 2556 || (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))))
              : (c <= 2608 || (c < 2649
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2662
                  ? c == 2654
                  : c <= 2671)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2768
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : (c <= 2745 || c == 2749))))
              : (c <= 2768 || (c < 2821
                ? (c < 2790
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2799 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2918
                  ? (c >= 2911 && c <= 2913)
                  : (c <= 2927 || (c >= 2929 && c <= 2935)))))
              : (c <= 2947 || (c < 2969
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 3976
        ? (c < 3412
          ? (c < 3205
            ? (c < 3114
              ? (c < 3046
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3058 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3192
                  ? (c >= 3174 && c <= 3183)
                  : (c <= 3198 || c == 3200))))))
            : (c <= 3212 || (c < 3302
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : (c <= 3294 || (c >= 3296 && c <= 3297)))))
              : (c <= 3311 || (c < 3346
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : (c <= 3340 || (c >= 3342 && c <= 3344)))
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3716
            ? (c < 3520
              ? (c < 3461
                ? (c < 3430
                  ? (c >= 3416 && c <= 3425)
                  : (c <= 3448 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : (c <= 3515 || c == 3517))))
              : (c <= 3526 || (c < 3648
                ? (c < 3585
                  ? (c >= 3558 && c <= 3567)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3713
                  ? (c >= 3664 && c <= 3673)
                  : c <= 3714)))))
            : (c <= 3716 || (c < 3782
              ? (c < 3751
                ? (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : (c <= 3747 || c == 3749))
                : (c <= 3760 || (c < 3773
                  ? (c >= 3762 && c <= 3763)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3872
                ? (c < 3804
                  ? (c >= 3792 && c <= 3801)
                  : (c <= 3807 || c == 3840))
                : (c <= 3891 || (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)))))))))
        : (c <= 3980 || (c < 4888
          ? (c < 4348
            ? (c < 4213
              ? (c < 4186
                ? (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : (c <= 4169 || (c >= 4176 && c <= 4181)))
                : (c <= 4189 || (c < 4197
                  ? c == 4193
                  : (c <= 4198 || (c >= 4206 && c <= 4208)))))
              : (c <= 4225 || (c < 4295
                ? (c < 4240
                  ? c == 4238
                  : (c <= 4249 || (c >= 4256 && c <= 4293)))
                : (c <= 4295 || (c < 4304
                  ? c == 4301
                  : c <= 4346)))))
            : (c <= 4680 || (c < 4786
              ? (c < 4698
                ? (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : (c <= 4694 || c == 4696))
                : (c <= 4701 || (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))))
              : (c <= 4789 || (c < 4808
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 6016
            ? (c < 5792
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4969 && c <= 4988)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5952
                ? (c < 5888
                  ? (c >= 5870 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6279
              ? (c < 6128
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6112 && c <= 6121)))
                : (c <= 6137 || (c < 6176
                  ? (c >= 6160 && c <= 6169)
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))))
              : (c <= 6312 || (c < 6470
                ? (c < 6320
                  ? c == 6314
                  : (c <= 6389 || (c >= 6400 && c <= 6430)))
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43072
      ? (c < 9450
        ? (c < 8031
          ? (c < 7312
            ? (c < 6981
              ? (c < 6784
                ? (c < 6656
                  ? (c >= 6608 && c <= 6618)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))
                : (c <= 6793 || (c < 6823
                  ? (c >= 6800 && c <= 6809)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))))
              : (c <= 6988 || (c < 7168
                ? (c < 7043
                  ? (c >= 6992 && c <= 7001)
                  : (c <= 7072 || (c >= 7086 && c <= 7141)))
                : (c <= 7203 || (c < 7245
                  ? (c >= 7232 && c <= 7241)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 7960
              ? (c < 7413
                ? (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : (c <= 7404 || (c >= 7406 && c <= 7411)))
                : (c <= 7414 || (c < 7424
                  ? c == 7418
                  : (c <= 7615 || (c >= 7680 && c <= 7957)))))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8160
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : (c <= 8147 || (c >= 8150 && c <= 8155)))))
              : (c <= 8172 || (c < 8308
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || (c >= 8304 && c <= 8305)))
                : (c <= 8313 || (c < 8336
                  ? (c >= 8319 && c <= 8329)
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8490
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : (c <= 8486 || c == 8488))))
              : (c <= 8493 || (c < 8526
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : (c <= 8511 || (c >= 8517 && c <= 8521)))
                : (c <= 8526 || (c < 9312
                  ? (c >= 8528 && c <= 8585)
                  : c <= 9371)))))))))
        : (c <= 9471 || (c < 12593
          ? (c < 11704
            ? (c < 11565
              ? (c < 11506
                ? (c < 11264
                  ? (c >= 10102 && c <= 10131)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))
                : (c <= 11507 || (c < 11520
                  ? c == 11517
                  : (c <= 11557 || c == 11559))))
              : (c <= 11565 || (c < 11680
                ? (c < 11631
                  ? (c >= 11568 && c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))
                : (c <= 11686 || (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : c <= 11702)))))
            : (c <= 11710 || (c < 12337
              ? (c < 11736
                ? (c < 11720
                  ? (c >= 11712 && c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))
                : (c <= 11742 || (c < 12293
                  ? c == 11823
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))
              : (c <= 12341 || (c < 12449
                ? (c < 12353
                  ? (c >= 12344 && c <= 12348)
                  : (c <= 12438 || (c >= 12445 && c <= 12447)))
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42512
            ? (c < 12977
              ? (c < 12832
                ? (c < 12704
                  ? (c >= 12690 && c <= 12693)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))
                : (c <= 12841 || (c < 12881
                  ? (c >= 12872 && c <= 12879)
                  : (c <= 12895 || (c >= 12928 && c <= 12937)))))
              : (c <= 12991 || (c < 40959
                ? (c < 19903
                  ? c == 13312
                  : (c <= 19903 || c == 19968))
                : (c <= 42124 || (c < 42240
                  ? (c >= 42192 && c <= 42237)
                  : c <= 42508)))))
            : (c <= 42539 || (c < 42963
              ? (c < 42775
                ? (c < 42623
                  ? (c >= 42560 && c <= 42606)
                  : (c <= 42653 || (c >= 42656 && c <= 42735)))
                : (c <= 42783 || (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))))
              : (c <= 42963 || (c < 43015
                ? (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : (c <= 43009 || (c >= 43011 && c <= 43013)))
                : (c <= 43018 || (c < 43056
                  ? (c >= 43020 && c <= 43042)
                  : c <= 43061)))))))))))
      : (c <= 43123 || (c < 65313
        ? (c < 43793
          ? (c < 43588
            ? (c < 43360
              ? (c < 43259
                ? (c < 43216
                  ? (c >= 43138 && c <= 43187)
                  : (c <= 43225 || (c >= 43250 && c <= 43255)))
                : (c <= 43259 || (c < 43264
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))))
              : (c <= 43388 || (c < 43494
                ? (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : (c <= 43481 || (c >= 43488 && c <= 43492)))
                : (c <= 43518 || (c < 43584
                  ? (c >= 43520 && c <= 43560)
                  : c <= 43586)))))
            : (c <= 43595 || (c < 43712
              ? (c < 43646
                ? (c < 43616
                  ? (c >= 43600 && c <= 43609)
                  : (c <= 43638 || c == 43642))
                : (c <= 43695 || (c < 43701
                  ? c == 43697
                  : (c <= 43702 || (c >= 43705 && c <= 43709)))))
              : (c <= 43712 || (c < 43762
                ? (c < 43739
                  ? c == 43714
                  : (c <= 43741 || (c >= 43744 && c <= 43754)))
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44016
                  ? (c >= 43888 && c <= 44002)
                  : (c <= 44025 || c == 44032))))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64467
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : (c <= 64324 || (c >= 64326 && c <= 64433)))))
              : (c <= 64829 || (c < 65136
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : (c <= 64967 || (c >= 65008 && c <= 65019)))
                : (c <= 65140 || (c < 65296
                  ? (c >= 65142 && c <= 65276)
                  : c <= 65305)))))))))
        : (c <= 65338 || (c < 66776
          ? (c < 65856
            ? (c < 65549
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : (c <= 65500 || (c >= 65536 && c <= 65547)))))
              : (c <= 65574 || (c < 65616
                ? (c < 65596
                  ? (c >= 65576 && c <= 65594)
                  : (c <= 65597 || (c >= 65599 && c <= 65613)))
                : (c <= 65629 || (c < 65799
                  ? (c >= 65664 && c <= 65786)
                  : c <= 65843)))))
            : (c <= 65912 || (c < 66432
              ? (c < 66273
                ? (c < 66176
                  ? (c >= 65930 && c <= 65931)
                  : (c <= 66204 || (c >= 66208 && c <= 66256)))
                : (c <= 66299 || (c < 66349
                  ? (c >= 66304 && c <= 66339)
                  : (c <= 66378 || (c >= 66384 && c <= 66421)))))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : (c <= 66511 || (c >= 66513 && c <= 66517)))
                : (c <= 66717 || (c < 66736
                  ? (c >= 66720 && c <= 66729)
                  : c <= 66771)))))))
          : (c <= 66811 || (c < 67463
            ? (c < 66979
              ? (c < 66940
                ? (c < 66864
                  ? (c >= 66816 && c <= 66855)
                  : (c <= 66915 || (c >= 66928 && c <= 66938)))
                : (c <= 66954 || (c < 66964
                  ? (c >= 66956 && c <= 66962)
                  : (c <= 66965 || (c >= 66967 && c <= 66977)))))
              : (c <= 66993 || (c < 67392
                ? (c < 67003
                  ? (c >= 66995 && c <= 67001)
                  : (c <= 67004 || (c >= 67072 && c <= 67382)))
                : (c <= 67413 || (c < 67456
                  ? (c >= 67424 && c <= 67431)
                  : c <= 67461)))))
            : (c <= 67504 || (c < 67672
              ? (c < 67594
                ? (c < 67584
                  ? (c >= 67506 && c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))))
              : (c <= 67702 || (c < 67828
                ? (c < 67751
                  ? (c >= 67705 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(33);
      if (lookahead == '!') ADVANCE(13);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(34);
      if (lookahead == '$') ADVANCE(79);
      if (lookahead == '%') ADVANCE(43);
      if (lookahead == '&') ADVANCE(60);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '(') ADVANCE(76);
      if (lookahead == ')') ADVANCE(77);
      if (lookahead == '*') ADVANCE(41);
      if (lookahead == '+') ADVANCE(38);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == ';') ADVANCE(35);
      if (lookahead == '<') ADVANCE(44);
      if (lookahead == '=') ADVANCE(72);
      if (lookahead == '>') ADVANCE(50);
      if (lookahead == '?') ADVANCE(133);
      if (lookahead == '@') ADVANCE(69);
      if (lookahead == '[') ADVANCE(70);
      if (lookahead == ']') ADVANCE(71);
      if (lookahead == '{') ADVANCE(73);
      if (lookahead == '|') ADVANCE(61);
      if (lookahead == '}') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(37);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(34);
      if (lookahead == '$') ADVANCE(79);
      if (lookahead == '&') ADVANCE(60);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '(') ADVANCE(76);
      if (lookahead == '*') ADVANCE(41);
      if (lookahead == '+') ADVANCE(98);
      if (lookahead == '-') ADVANCE(97);
      if (lookahead == '.') ADVANCE(127);
      if (lookahead == '0') ADVANCE(81);
      if (lookahead == '<') ADVANCE(46);
      if (lookahead == '>') ADVANCE(52);
      if (lookahead == '?') ADVANCE(133);
      if (lookahead == 'I') ADVANCE(108);
      if (lookahead == 'N') ADVANCE(102);
      if (lookahead == '[') ADVANCE(70);
      if (lookahead == 's') ADVANCE(115);
      if (lookahead == '{') ADVANCE(73);
      if (lookahead == '|') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (sym_bareword_character_set_1(lookahead)) ADVANCE(131);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(34);
      if (lookahead == '$') ADVANCE(79);
      if (lookahead == '&') ADVANCE(60);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '(') ADVANCE(76);
      if (lookahead == '*') ADVANCE(41);
      if (lookahead == '+') ADVANCE(98);
      if (lookahead == '-') ADVANCE(97);
      if (lookahead == '.') ADVANCE(127);
      if (lookahead == '0') ADVANCE(81);
      if (lookahead == '<') ADVANCE(46);
      if (lookahead == '>') ADVANCE(52);
      if (lookahead == '?') ADVANCE(133);
      if (lookahead == 'I') ADVANCE(108);
      if (lookahead == 'N') ADVANCE(102);
      if (lookahead == '[') ADVANCE(134);
      if (lookahead == 's') ADVANCE(115);
      if (lookahead == '{') ADVANCE(73);
      if (lookahead == '|') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (sym_bareword_character_set_1(lookahead)) ADVANCE(131);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(34);
      if (lookahead == '$') ADVANCE(79);
      if (lookahead == '&') ADVANCE(60);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '(') ADVANCE(76);
      if (lookahead == '*') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(98);
      if (lookahead == '.') ADVANCE(127);
      if (lookahead == '0') ADVANCE(83);
      if (lookahead == '?') ADVANCE(133);
      if (lookahead == 'I') ADVANCE(108);
      if (lookahead == 'N') ADVANCE(102);
      if (lookahead == '[') ADVANCE(70);
      if (lookahead == ']') ADVANCE(71);
      if (lookahead == '{') ADVANCE(73);
      if (lookahead == '}') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (sym_bareword_character_set_2(lookahead)) ADVANCE(131);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(34);
      if (lookahead == '$') ADVANCE(79);
      if (lookahead == '&') ADVANCE(60);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '(') ADVANCE(76);
      if (lookahead == '*') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(98);
      if (lookahead == '.') ADVANCE(127);
      if (lookahead == '0') ADVANCE(83);
      if (lookahead == '?') ADVANCE(133);
      if (lookahead == 'I') ADVANCE(108);
      if (lookahead == 'N') ADVANCE(102);
      if (lookahead == '[') ADVANCE(134);
      if (lookahead == ']') ADVANCE(71);
      if (lookahead == '{') ADVANCE(73);
      if (lookahead == '}') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (sym_bareword_character_set_2(lookahead)) ADVANCE(131);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(34);
      if (lookahead == '$') ADVANCE(79);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '(') ADVANCE(76);
      if (lookahead == '*') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(98);
      if (lookahead == '.') ADVANCE(127);
      if (lookahead == '0') ADVANCE(83);
      if (lookahead == '?') ADVANCE(133);
      if (lookahead == 'I') ADVANCE(108);
      if (lookahead == 'N') ADVANCE(102);
      if (lookahead == '[') ADVANCE(134);
      if (lookahead == '{') ADVANCE(73);
      if (lookahead == '|') ADVANCE(61);
      if (lookahead == '}') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(75);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (sym_bareword_character_set_3(lookahead)) ADVANCE(131);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(34);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(131);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(95);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(34);
      if (lookahead == '&') ADVANCE(60);
      if (lookahead == '@') ADVANCE(69);
      if (lookahead == '[') ADVANCE(70);
      if (lookahead == '|') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(37);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(34);
      if (lookahead == '&') ADVANCE(60);
      if (lookahead == '@') ADVANCE(69);
      if (lookahead == '|') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(37);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(34);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == 's') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(131);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(96);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == 's') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(49);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(48);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(19);
      if (lookahead == 'i') ADVANCE(17);
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 18:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 19:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 20:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 21:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 22:
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 23:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 24:
      if (eof) ADVANCE(33);
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(34);
      if (lookahead == '$') ADVANCE(79);
      if (lookahead == '&') ADVANCE(60);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '(') ADVANCE(76);
      if (lookahead == ')') ADVANCE(77);
      if (lookahead == '*') ADVANCE(41);
      if (lookahead == '+') ADVANCE(98);
      if (lookahead == '-') ADVANCE(97);
      if (lookahead == '.') ADVANCE(127);
      if (lookahead == '0') ADVANCE(81);
      if (lookahead == ';') ADVANCE(35);
      if (lookahead == '<') ADVANCE(46);
      if (lookahead == '>') ADVANCE(52);
      if (lookahead == '?') ADVANCE(133);
      if (lookahead == 'I') ADVANCE(108);
      if (lookahead == 'N') ADVANCE(102);
      if (lookahead == '[') ADVANCE(70);
      if (lookahead == 's') ADVANCE(115);
      if (lookahead == '{') ADVANCE(73);
      if (lookahead == '|') ADVANCE(61);
      if (lookahead == '}') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (sym_bareword_character_set_5(lookahead)) ADVANCE(131);
      END_STATE();
    case 25:
      if (eof) ADVANCE(33);
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(34);
      if (lookahead == '$') ADVANCE(79);
      if (lookahead == '&') ADVANCE(60);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '(') ADVANCE(76);
      if (lookahead == ')') ADVANCE(77);
      if (lookahead == '*') ADVANCE(41);
      if (lookahead == '+') ADVANCE(98);
      if (lookahead == '-') ADVANCE(97);
      if (lookahead == '.') ADVANCE(127);
      if (lookahead == '0') ADVANCE(81);
      if (lookahead == ';') ADVANCE(35);
      if (lookahead == '<') ADVANCE(46);
      if (lookahead == '>') ADVANCE(52);
      if (lookahead == '?') ADVANCE(133);
      if (lookahead == 'I') ADVANCE(108);
      if (lookahead == 'N') ADVANCE(102);
      if (lookahead == '[') ADVANCE(134);
      if (lookahead == 's') ADVANCE(115);
      if (lookahead == '{') ADVANCE(73);
      if (lookahead == '|') ADVANCE(61);
      if (lookahead == '}') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (sym_bareword_character_set_5(lookahead)) ADVANCE(131);
      END_STATE();
    case 26:
      if (eof) ADVANCE(33);
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(34);
      if (lookahead == '$') ADVANCE(79);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '(') ADVANCE(76);
      if (lookahead == ')') ADVANCE(77);
      if (lookahead == '*') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(98);
      if (lookahead == '.') ADVANCE(127);
      if (lookahead == '0') ADVANCE(83);
      if (lookahead == ';') ADVANCE(35);
      if (lookahead == '?') ADVANCE(133);
      if (lookahead == 'I') ADVANCE(108);
      if (lookahead == 'N') ADVANCE(102);
      if (lookahead == '[') ADVANCE(70);
      if (lookahead == '{') ADVANCE(73);
      if (lookahead == '}') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (sym_bareword_character_set_2(lookahead)) ADVANCE(131);
      END_STATE();
    case 27:
      if (eof) ADVANCE(33);
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(34);
      if (lookahead == '$') ADVANCE(79);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '(') ADVANCE(76);
      if (lookahead == ')') ADVANCE(77);
      if (lookahead == '*') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(98);
      if (lookahead == '.') ADVANCE(127);
      if (lookahead == '0') ADVANCE(83);
      if (lookahead == ';') ADVANCE(35);
      if (lookahead == '?') ADVANCE(133);
      if (lookahead == 'I') ADVANCE(108);
      if (lookahead == 'N') ADVANCE(102);
      if (lookahead == '[') ADVANCE(134);
      if (lookahead == '{') ADVANCE(73);
      if (lookahead == '}') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (sym_bareword_character_set_2(lookahead)) ADVANCE(131);
      END_STATE();
    case 28:
      if (eof) ADVANCE(33);
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(34);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == ')') ADVANCE(77);
      if (lookahead == ';') ADVANCE(35);
      if (lookahead == '}') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(131);
      END_STATE();
    case 29:
      if (eof) ADVANCE(33);
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == '#') ADVANCE(34);
      if (lookahead == ')') ADVANCE(77);
      if (lookahead == ';') ADVANCE(35);
      if (lookahead == '=') ADVANCE(72);
      if (lookahead == '@') ADVANCE(69);
      if (lookahead == '[') ADVANCE(70);
      if (lookahead == '|') ADVANCE(61);
      if (lookahead == '}') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(37);
      END_STATE();
    case 30:
      if (eof) ADVANCE(33);
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == '#') ADVANCE(34);
      if (lookahead == ')') ADVANCE(77);
      if (lookahead == ';') ADVANCE(35);
      if (lookahead == '=') ADVANCE(72);
      if (lookahead == '@') ADVANCE(69);
      if (lookahead == '|') ADVANCE(61);
      if (lookahead == '}') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(37);
      END_STATE();
    case 31:
      if (eof) ADVANCE(33);
      if (lookahead == '!') ADVANCE(13);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(34);
      if (lookahead == '$') ADVANCE(79);
      if (lookahead == '%') ADVANCE(43);
      if (lookahead == '&') ADVANCE(60);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '(') ADVANCE(76);
      if (lookahead == ')') ADVANCE(77);
      if (lookahead == '*') ADVANCE(41);
      if (lookahead == '+') ADVANCE(38);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == ';') ADVANCE(35);
      if (lookahead == '<') ADVANCE(44);
      if (lookahead == '=') ADVANCE(72);
      if (lookahead == '>') ADVANCE(50);
      if (lookahead == '?') ADVANCE(133);
      if (lookahead == '@') ADVANCE(69);
      if (lookahead == '[') ADVANCE(134);
      if (lookahead == ']') ADVANCE(71);
      if (lookahead == '{') ADVANCE(73);
      if (lookahead == '|') ADVANCE(61);
      if (lookahead == '}') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(37);
      END_STATE();
    case 32:
      if (eof) ADVANCE(33);
      if (lookahead == '!') ADVANCE(13);
      if (lookahead == '#') ADVANCE(34);
      if (lookahead == '$') ADVANCE(79);
      if (lookahead == '%') ADVANCE(43);
      if (lookahead == '(') ADVANCE(76);
      if (lookahead == ')') ADVANCE(77);
      if (lookahead == '*') ADVANCE(40);
      if (lookahead == '+') ADVANCE(38);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == '<') ADVANCE(45);
      if (lookahead == '=') ADVANCE(14);
      if (lookahead == '>') ADVANCE(51);
      if (lookahead == '{') ADVANCE(73);
      if (lookahead == '}') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(37);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(37);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(132);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(47);
      if (lookahead == '>') ADVANCE(63);
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(47);
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '>') ADVANCE(63);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == '>') ADVANCE(62);
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(62);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LTs);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LT_EQs);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_EQ_EQs);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_BANG_EQs);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_GTs);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_GT_EQs);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_redirection_token1);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_redirection_token2);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_redirection_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(131);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_redirection_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_redirection_token2);
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(131);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_lambda_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_QMARK_LPAREN);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '/') ADVANCE(99);
      if (lookahead == '>') ADVANCE(64);
      if (lookahead == '_') ADVANCE(126);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (sym_bareword_character_set_6(lookahead)) ADVANCE(131);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '/') ADVANCE(99);
      if (lookahead == '>') ADVANCE(64);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(122);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(124);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(129);
      if (lookahead == '_') ADVANCE(126);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (sym_bareword_character_set_6(lookahead)) ADVANCE(131);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '/') ADVANCE(99);
      if (lookahead == '_') ADVANCE(126);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (sym_bareword_character_set_6(lookahead)) ADVANCE(131);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '/') ADVANCE(99);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(122);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(124);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(129);
      if (lookahead == '_') ADVANCE(126);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (sym_bareword_character_set_6(lookahead)) ADVANCE(131);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '/') ADVANCE(99);
      if (lookahead == '_') ADVANCE(122);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(84);
      if (sym_bareword_character_set_6(lookahead)) ADVANCE(131);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '/') ADVANCE(99);
      if (lookahead == '_') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(85);
      if (sym_bareword_character_set_6(lookahead)) ADVANCE(131);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '/') ADVANCE(99);
      if (lookahead == '_') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      if (sym_bareword_character_set_7(lookahead)) ADVANCE(131);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(127);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      if (sym_bareword_character_set_6(lookahead)) ADVANCE(131);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(123);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(88);
      if (sym_bareword_character_set_6(lookahead)) ADVANCE(131);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(89);
      if (sym_bareword_character_set_6(lookahead)) ADVANCE(131);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      if (sym_bareword_character_set_7(lookahead)) ADVANCE(131);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (sym_bareword_character_set_6(lookahead)) ADVANCE(131);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(123);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(125);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(130);
      if (lookahead == '_') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (sym_bareword_character_set_6(lookahead)) ADVANCE(131);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(131);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_number);
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(131);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\'') ADVANCE(11);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_bareword);
      if (lookahead == '.') ADVANCE(127);
      if (lookahead == '0') ADVANCE(83);
      if (lookahead == '>') ADVANCE(64);
      if (lookahead == 'I') ADVANCE(108);
      if (lookahead == 'N') ADVANCE(102);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(131);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_bareword);
      if (lookahead == '.') ADVANCE(127);
      if (lookahead == '0') ADVANCE(83);
      if (lookahead == 'I') ADVANCE(108);
      if (lookahead == 'N') ADVANCE(102);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(131);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_bareword);
      if (lookahead == '0') ADVANCE(92);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(131);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_bareword);
      if (lookahead == '>') ADVANCE(64);
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(131);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_bareword);
      if (lookahead == 'N') ADVANCE(94);
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(131);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_bareword);
      if (lookahead == 'a') ADVANCE(101);
      if (sym_bareword_character_set_8(lookahead)) ADVANCE(131);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_bareword);
      if (lookahead == 'd') ADVANCE(105);
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(131);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_bareword);
      if (lookahead == 'd') ADVANCE(106);
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(131);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_bareword);
      if (lookahead == 'e') ADVANCE(113);
      if (lookahead == 'i') ADVANCE(109);
      if (lookahead == 'o') ADVANCE(119);
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(131);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_bareword);
      if (lookahead == 'e') ADVANCE(114);
      if (lookahead == 'i') ADVANCE(110);
      if (lookahead == 'o') ADVANCE(120);
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(131);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_bareword);
      if (lookahead == 'f') ADVANCE(94);
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(131);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_bareword);
      if (lookahead == 'n') ADVANCE(107);
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(131);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_bareword);
      if (lookahead == 'n') ADVANCE(100);
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(131);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_bareword);
      if (lookahead == 'n') ADVANCE(68);
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(131);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_bareword);
      if (lookahead == 'r') ADVANCE(100);
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(131);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_bareword);
      if (lookahead == 'r') ADVANCE(68);
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(131);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_bareword);
      if (lookahead == 'r') ADVANCE(111);
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(131);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_bareword);
      if (lookahead == 'r') ADVANCE(112);
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(131);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_bareword);
      if (lookahead == 't') ADVANCE(103);
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(131);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_bareword);
      if (lookahead == 't') ADVANCE(100);
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(131);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_bareword);
      if (lookahead == 't') ADVANCE(68);
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(131);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_bareword);
      if (lookahead == 't') ADVANCE(104);
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(131);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_bareword);
      if (lookahead == 'u') ADVANCE(116);
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(131);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_bareword);
      if (lookahead == 'u') ADVANCE(117);
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(131);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_bareword);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (sym_bareword_character_set_9(lookahead)) ADVANCE(131);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_bareword);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(84);
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(131);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_bareword);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(88);
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(131);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_bareword);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(85);
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(131);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_bareword);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(89);
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(131);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_bareword);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(131);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_bareword);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(131);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_bareword);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(131);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_bareword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      if (sym_bareword_character_set_10(lookahead)) ADVANCE(131);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_bareword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      if (sym_bareword_character_set_10(lookahead)) ADVANCE(131);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_bareword);
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '(') ADVANCE(78);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_LBRACK2);
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
      if (lookahead == 'c') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(2);
      if (lookahead == 'e') ADVANCE(3);
      if (lookahead == 'f') ADVANCE(4);
      if (lookahead == 'i') ADVANCE(5);
      if (lookahead == 's') ADVANCE(6);
      if (lookahead == 't') ADVANCE(7);
      if (lookahead == 'u') ADVANCE(8);
      if (lookahead == 'v') ADVANCE(9);
      if (lookahead == 'w') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
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
      if (lookahead == 'i') ADVANCE(14);
      if (lookahead == 'n') ADVANCE(15);
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 5:
      if (lookahead == 'f') ADVANCE(17);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 7:
      if (lookahead == 'm') ADVANCE(19);
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 8:
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 10:
      if (lookahead == 'h') ADVANCE(23);
      END_STATE();
    case 11:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 12:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 13:
      if (lookahead == 'i') ADVANCE(26);
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 14:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 18:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 19:
      if (lookahead == 'p') ADVANCE(31);
      END_STATE();
    case 20:
      if (lookahead == 'y') ADVANCE(32);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(36);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_del);
      END_STATE();
    case 26:
      if (lookahead == 'f') ADVANCE(37);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_tmp);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_try);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 36:
      if (lookahead == 'h') ADVANCE(41);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_elif);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_catch);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 44:
      if (lookahead == 'y') ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_finally);
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
  [21] = {.lex_state = 32},
  [22] = {.lex_state = 32},
  [23] = {.lex_state = 32},
  [24] = {.lex_state = 32},
  [25] = {.lex_state = 32},
  [26] = {.lex_state = 32},
  [27] = {.lex_state = 32},
  [28] = {.lex_state = 32},
  [29] = {.lex_state = 25},
  [30] = {.lex_state = 25},
  [31] = {.lex_state = 32},
  [32] = {.lex_state = 25},
  [33] = {.lex_state = 32},
  [34] = {.lex_state = 32},
  [35] = {.lex_state = 32},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 27},
  [40] = {.lex_state = 27},
  [41] = {.lex_state = 24},
  [42] = {.lex_state = 24},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 24},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 24},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 24},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 24},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 24},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 24},
  [59] = {.lex_state = 24},
  [60] = {.lex_state = 32},
  [61] = {.lex_state = 24},
  [62] = {.lex_state = 24},
  [63] = {.lex_state = 24},
  [64] = {.lex_state = 32},
  [65] = {.lex_state = 24},
  [66] = {.lex_state = 24},
  [67] = {.lex_state = 24},
  [68] = {.lex_state = 25},
  [69] = {.lex_state = 25},
  [70] = {.lex_state = 25},
  [71] = {.lex_state = 25},
  [72] = {.lex_state = 25},
  [73] = {.lex_state = 25},
  [74] = {.lex_state = 25},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 25},
  [77] = {.lex_state = 25},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 32},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 4},
  [121] = {.lex_state = 4},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 1},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 26},
  [131] = {.lex_state = 26},
  [132] = {.lex_state = 26},
  [133] = {.lex_state = 2},
  [134] = {.lex_state = 2},
  [135] = {.lex_state = 26},
  [136] = {.lex_state = 2},
  [137] = {.lex_state = 26},
  [138] = {.lex_state = 2},
  [139] = {.lex_state = 2},
  [140] = {.lex_state = 2},
  [141] = {.lex_state = 2},
  [142] = {.lex_state = 2},
  [143] = {.lex_state = 26},
  [144] = {.lex_state = 2},
  [145] = {.lex_state = 26},
  [146] = {.lex_state = 26},
  [147] = {.lex_state = 26},
  [148] = {.lex_state = 26},
  [149] = {.lex_state = 26},
  [150] = {.lex_state = 26},
  [151] = {.lex_state = 26},
  [152] = {.lex_state = 26},
  [153] = {.lex_state = 3},
  [154] = {.lex_state = 3},
  [155] = {.lex_state = 27},
  [156] = {.lex_state = 3},
  [157] = {.lex_state = 3},
  [158] = {.lex_state = 3},
  [159] = {.lex_state = 27},
  [160] = {.lex_state = 27},
  [161] = {.lex_state = 27},
  [162] = {.lex_state = 27},
  [163] = {.lex_state = 3},
  [164] = {.lex_state = 3},
  [165] = {.lex_state = 3},
  [166] = {.lex_state = 3},
  [167] = {.lex_state = 3},
  [168] = {.lex_state = 3},
  [169] = {.lex_state = 3},
  [170] = {.lex_state = 3},
  [171] = {.lex_state = 3},
  [172] = {.lex_state = 4},
  [173] = {.lex_state = 4},
  [174] = {.lex_state = 4},
  [175] = {.lex_state = 4},
  [176] = {.lex_state = 4},
  [177] = {.lex_state = 29},
  [178] = {.lex_state = 29},
  [179] = {.lex_state = 29},
  [180] = {.lex_state = 29},
  [181] = {.lex_state = 29},
  [182] = {.lex_state = 29},
  [183] = {.lex_state = 29},
  [184] = {.lex_state = 29},
  [185] = {.lex_state = 29},
  [186] = {.lex_state = 29},
  [187] = {.lex_state = 29},
  [188] = {.lex_state = 29},
  [189] = {.lex_state = 29},
  [190] = {.lex_state = 25},
  [191] = {.lex_state = 25},
  [192] = {.lex_state = 25},
  [193] = {.lex_state = 28},
  [194] = {.lex_state = 29},
  [195] = {.lex_state = 29},
  [196] = {.lex_state = 29},
  [197] = {.lex_state = 29},
  [198] = {.lex_state = 25},
  [199] = {.lex_state = 29},
  [200] = {.lex_state = 29},
  [201] = {.lex_state = 29},
  [202] = {.lex_state = 29},
  [203] = {.lex_state = 29},
  [204] = {.lex_state = 29},
  [205] = {.lex_state = 25},
  [206] = {.lex_state = 8},
  [207] = {.lex_state = 8},
  [208] = {.lex_state = 8},
  [209] = {.lex_state = 8},
  [210] = {.lex_state = 8},
  [211] = {.lex_state = 8},
  [212] = {.lex_state = 25},
  [213] = {.lex_state = 8},
  [214] = {.lex_state = 8},
  [215] = {.lex_state = 25},
  [216] = {.lex_state = 25},
  [217] = {.lex_state = 25},
  [218] = {.lex_state = 29},
  [219] = {.lex_state = 8},
  [220] = {.lex_state = 25},
  [221] = {.lex_state = 25},
  [222] = {.lex_state = 25},
  [223] = {.lex_state = 25},
  [224] = {.lex_state = 8},
  [225] = {.lex_state = 8},
  [226] = {.lex_state = 8},
  [227] = {.lex_state = 8},
  [228] = {.lex_state = 8},
  [229] = {.lex_state = 8},
  [230] = {.lex_state = 8},
  [231] = {.lex_state = 25},
  [232] = {.lex_state = 25},
  [233] = {.lex_state = 25},
  [234] = {.lex_state = 25},
  [235] = {.lex_state = 25},
  [236] = {.lex_state = 25},
  [237] = {.lex_state = 25},
  [238] = {.lex_state = 8},
  [239] = {.lex_state = 25},
  [240] = {.lex_state = 25},
  [241] = {.lex_state = 25},
  [242] = {.lex_state = 25},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 8},
  [248] = {.lex_state = 8},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 8},
  [251] = {.lex_state = 8},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 8},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 8},
  [256] = {.lex_state = 8},
  [257] = {.lex_state = 8},
  [258] = {.lex_state = 8},
  [259] = {.lex_state = 8},
  [260] = {.lex_state = 25},
  [261] = {.lex_state = 5},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 8},
  [273] = {.lex_state = 8},
  [274] = {.lex_state = 8},
  [275] = {.lex_state = 6},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 8},
  [279] = {.lex_state = 10},
  [280] = {.lex_state = 8},
  [281] = {.lex_state = 10},
  [282] = {.lex_state = 25},
  [283] = {.lex_state = 8},
  [284] = {.lex_state = 8},
  [285] = {.lex_state = 8},
  [286] = {.lex_state = 8},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 8},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 8},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 8},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 8},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 8},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 8},
  [311] = {.lex_state = 8},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 8},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 8},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 8},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 8},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 8},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 8},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 8},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 8},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 8},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 8},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_use] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LTs] = ACTIONS(1),
    [anon_sym_LT_EQs] = ACTIONS(1),
    [anon_sym_BANG_EQs] = ACTIONS(1),
    [anon_sym_GTs] = ACTIONS(1),
    [anon_sym_GT_EQs] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_tmp] = ACTIONS(1),
    [anon_sym_del] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_elif] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_try] = ACTIONS(1),
    [anon_sym_catch] = ACTIONS(1),
    [anon_sym_finally] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_QMARK_LPAREN] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_LBRACK2] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(344),
    [sym__statements] = STATE(343),
    [sym_import] = STATE(235),
    [sym_command] = STATE(205),
    [sym_pipeline] = STATE(235),
    [sym_variable_declaration] = STATE(235),
    [sym_variable_assignment] = STATE(235),
    [sym_temporary_assignment] = STATE(235),
    [sym_variable_deletion] = STATE(235),
    [sym_function_definition] = STATE(235),
    [sym_if] = STATE(235),
    [sym_while] = STATE(235),
    [sym_for] = STATE(235),
    [sym_try] = STATE(235),
    [sym_lambda] = STATE(235),
    [sym_output_capture] = STATE(29),
    [sym_variable] = STATE(29),
    [aux_sym__statements_repeat1] = STATE(27),
    [aux_sym_pipeline_repeat1] = STATE(64),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_use] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_STAR] = ACTIONS(11),
    [anon_sym_SLASH] = ACTIONS(11),
    [anon_sym_PERCENT] = ACTIONS(11),
    [anon_sym_LT] = ACTIONS(7),
    [anon_sym_LT_EQ] = ACTIONS(7),
    [anon_sym_EQ_EQ] = ACTIONS(7),
    [anon_sym_BANG_EQ] = ACTIONS(7),
    [anon_sym_GT] = ACTIONS(7),
    [anon_sym_GT_EQ] = ACTIONS(7),
    [anon_sym_LTs] = ACTIONS(11),
    [anon_sym_LT_EQs] = ACTIONS(11),
    [anon_sym_EQ_EQs] = ACTIONS(11),
    [anon_sym_BANG_EQs] = ACTIONS(11),
    [anon_sym_GTs] = ACTIONS(11),
    [anon_sym_GT_EQs] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(13),
    [anon_sym_set] = ACTIONS(15),
    [anon_sym_tmp] = ACTIONS(17),
    [anon_sym_del] = ACTIONS(19),
    [anon_sym_fn] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_while] = ACTIONS(27),
    [anon_sym_for] = ACTIONS(29),
    [anon_sym_try] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(33),
    [anon_sym_DOLLAR] = ACTIONS(35),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(13), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_tmp,
    ACTIONS(19), 1,
      anon_sym_del,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      anon_sym_try,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    STATE(27), 1,
      aux_sym__statements_repeat1,
    STATE(64), 1,
      aux_sym_pipeline_repeat1,
    STATE(205), 1,
      sym_command,
    STATE(318), 1,
      sym__statements,
    STATE(29), 2,
      sym_output_capture,
      sym_variable,
    ACTIONS(7), 8,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(11), 10,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LTs,
      anon_sym_LT_EQs,
      anon_sym_EQ_EQs,
      anon_sym_BANG_EQs,
      anon_sym_GTs,
      anon_sym_GT_EQs,
    STATE(235), 12,
      sym_import,
      sym_pipeline,
      sym_variable_declaration,
      sym_variable_assignment,
      sym_temporary_assignment,
      sym_variable_deletion,
      sym_function_definition,
      sym_if,
      sym_while,
      sym_for,
      sym_try,
      sym_lambda,
  [95] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(13), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_tmp,
    ACTIONS(19), 1,
      anon_sym_del,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      anon_sym_try,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    STATE(27), 1,
      aux_sym__statements_repeat1,
    STATE(64), 1,
      aux_sym_pipeline_repeat1,
    STATE(205), 1,
      sym_command,
    STATE(330), 1,
      sym__statements,
    STATE(29), 2,
      sym_output_capture,
      sym_variable,
    ACTIONS(7), 8,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(11), 10,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LTs,
      anon_sym_LT_EQs,
      anon_sym_EQ_EQs,
      anon_sym_BANG_EQs,
      anon_sym_GTs,
      anon_sym_GT_EQs,
    STATE(235), 12,
      sym_import,
      sym_pipeline,
      sym_variable_declaration,
      sym_variable_assignment,
      sym_temporary_assignment,
      sym_variable_deletion,
      sym_function_definition,
      sym_if,
      sym_while,
      sym_for,
      sym_try,
      sym_lambda,
  [190] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(13), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_tmp,
    ACTIONS(19), 1,
      anon_sym_del,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      anon_sym_try,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    STATE(27), 1,
      aux_sym__statements_repeat1,
    STATE(64), 1,
      aux_sym_pipeline_repeat1,
    STATE(205), 1,
      sym_command,
    STATE(309), 1,
      sym__statements,
    STATE(29), 2,
      sym_output_capture,
      sym_variable,
    ACTIONS(7), 8,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(11), 10,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LTs,
      anon_sym_LT_EQs,
      anon_sym_EQ_EQs,
      anon_sym_BANG_EQs,
      anon_sym_GTs,
      anon_sym_GT_EQs,
    STATE(235), 12,
      sym_import,
      sym_pipeline,
      sym_variable_declaration,
      sym_variable_assignment,
      sym_temporary_assignment,
      sym_variable_deletion,
      sym_function_definition,
      sym_if,
      sym_while,
      sym_for,
      sym_try,
      sym_lambda,
  [285] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(13), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_tmp,
    ACTIONS(19), 1,
      anon_sym_del,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      anon_sym_try,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    STATE(27), 1,
      aux_sym__statements_repeat1,
    STATE(64), 1,
      aux_sym_pipeline_repeat1,
    STATE(205), 1,
      sym_command,
    STATE(324), 1,
      sym__statements,
    STATE(29), 2,
      sym_output_capture,
      sym_variable,
    ACTIONS(7), 8,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(11), 10,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LTs,
      anon_sym_LT_EQs,
      anon_sym_EQ_EQs,
      anon_sym_BANG_EQs,
      anon_sym_GTs,
      anon_sym_GT_EQs,
    STATE(235), 12,
      sym_import,
      sym_pipeline,
      sym_variable_declaration,
      sym_variable_assignment,
      sym_temporary_assignment,
      sym_variable_deletion,
      sym_function_definition,
      sym_if,
      sym_while,
      sym_for,
      sym_try,
      sym_lambda,
  [380] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(13), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_tmp,
    ACTIONS(19), 1,
      anon_sym_del,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      anon_sym_try,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    STATE(27), 1,
      aux_sym__statements_repeat1,
    STATE(64), 1,
      aux_sym_pipeline_repeat1,
    STATE(205), 1,
      sym_command,
    STATE(291), 1,
      sym__statements,
    STATE(29), 2,
      sym_output_capture,
      sym_variable,
    ACTIONS(7), 8,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(11), 10,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LTs,
      anon_sym_LT_EQs,
      anon_sym_EQ_EQs,
      anon_sym_BANG_EQs,
      anon_sym_GTs,
      anon_sym_GT_EQs,
    STATE(235), 12,
      sym_import,
      sym_pipeline,
      sym_variable_declaration,
      sym_variable_assignment,
      sym_temporary_assignment,
      sym_variable_deletion,
      sym_function_definition,
      sym_if,
      sym_while,
      sym_for,
      sym_try,
      sym_lambda,
  [475] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(13), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_tmp,
    ACTIONS(19), 1,
      anon_sym_del,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      anon_sym_try,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    STATE(27), 1,
      aux_sym__statements_repeat1,
    STATE(64), 1,
      aux_sym_pipeline_repeat1,
    STATE(205), 1,
      sym_command,
    STATE(292), 1,
      sym__statements,
    STATE(29), 2,
      sym_output_capture,
      sym_variable,
    ACTIONS(7), 8,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(11), 10,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LTs,
      anon_sym_LT_EQs,
      anon_sym_EQ_EQs,
      anon_sym_BANG_EQs,
      anon_sym_GTs,
      anon_sym_GT_EQs,
    STATE(235), 12,
      sym_import,
      sym_pipeline,
      sym_variable_declaration,
      sym_variable_assignment,
      sym_temporary_assignment,
      sym_variable_deletion,
      sym_function_definition,
      sym_if,
      sym_while,
      sym_for,
      sym_try,
      sym_lambda,
  [570] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(13), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_tmp,
    ACTIONS(19), 1,
      anon_sym_del,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      anon_sym_try,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    STATE(27), 1,
      aux_sym__statements_repeat1,
    STATE(64), 1,
      aux_sym_pipeline_repeat1,
    STATE(205), 1,
      sym_command,
    STATE(319), 1,
      sym__statements,
    STATE(29), 2,
      sym_output_capture,
      sym_variable,
    ACTIONS(7), 8,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(11), 10,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LTs,
      anon_sym_LT_EQs,
      anon_sym_EQ_EQs,
      anon_sym_BANG_EQs,
      anon_sym_GTs,
      anon_sym_GT_EQs,
    STATE(235), 12,
      sym_import,
      sym_pipeline,
      sym_variable_declaration,
      sym_variable_assignment,
      sym_temporary_assignment,
      sym_variable_deletion,
      sym_function_definition,
      sym_if,
      sym_while,
      sym_for,
      sym_try,
      sym_lambda,
  [665] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(13), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_tmp,
    ACTIONS(19), 1,
      anon_sym_del,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      anon_sym_try,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    STATE(27), 1,
      aux_sym__statements_repeat1,
    STATE(64), 1,
      aux_sym_pipeline_repeat1,
    STATE(205), 1,
      sym_command,
    STATE(345), 1,
      sym__statements,
    STATE(29), 2,
      sym_output_capture,
      sym_variable,
    ACTIONS(7), 8,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(11), 10,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LTs,
      anon_sym_LT_EQs,
      anon_sym_EQ_EQs,
      anon_sym_BANG_EQs,
      anon_sym_GTs,
      anon_sym_GT_EQs,
    STATE(235), 12,
      sym_import,
      sym_pipeline,
      sym_variable_declaration,
      sym_variable_assignment,
      sym_temporary_assignment,
      sym_variable_deletion,
      sym_function_definition,
      sym_if,
      sym_while,
      sym_for,
      sym_try,
      sym_lambda,
  [760] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(13), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_tmp,
    ACTIONS(19), 1,
      anon_sym_del,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      anon_sym_try,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    STATE(27), 1,
      aux_sym__statements_repeat1,
    STATE(64), 1,
      aux_sym_pipeline_repeat1,
    STATE(205), 1,
      sym_command,
    STATE(316), 1,
      sym__statements,
    STATE(29), 2,
      sym_output_capture,
      sym_variable,
    ACTIONS(7), 8,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(11), 10,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LTs,
      anon_sym_LT_EQs,
      anon_sym_EQ_EQs,
      anon_sym_BANG_EQs,
      anon_sym_GTs,
      anon_sym_GT_EQs,
    STATE(235), 12,
      sym_import,
      sym_pipeline,
      sym_variable_declaration,
      sym_variable_assignment,
      sym_temporary_assignment,
      sym_variable_deletion,
      sym_function_definition,
      sym_if,
      sym_while,
      sym_for,
      sym_try,
      sym_lambda,
  [855] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(13), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_tmp,
    ACTIONS(19), 1,
      anon_sym_del,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      anon_sym_try,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    STATE(27), 1,
      aux_sym__statements_repeat1,
    STATE(64), 1,
      aux_sym_pipeline_repeat1,
    STATE(205), 1,
      sym_command,
    STATE(352), 1,
      sym__statements,
    STATE(29), 2,
      sym_output_capture,
      sym_variable,
    ACTIONS(7), 8,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(11), 10,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LTs,
      anon_sym_LT_EQs,
      anon_sym_EQ_EQs,
      anon_sym_BANG_EQs,
      anon_sym_GTs,
      anon_sym_GT_EQs,
    STATE(235), 12,
      sym_import,
      sym_pipeline,
      sym_variable_declaration,
      sym_variable_assignment,
      sym_temporary_assignment,
      sym_variable_deletion,
      sym_function_definition,
      sym_if,
      sym_while,
      sym_for,
      sym_try,
      sym_lambda,
  [950] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(13), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_tmp,
    ACTIONS(19), 1,
      anon_sym_del,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      anon_sym_try,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    STATE(27), 1,
      aux_sym__statements_repeat1,
    STATE(64), 1,
      aux_sym_pipeline_repeat1,
    STATE(205), 1,
      sym_command,
    STATE(313), 1,
      sym__statements,
    STATE(29), 2,
      sym_output_capture,
      sym_variable,
    ACTIONS(7), 8,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(11), 10,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LTs,
      anon_sym_LT_EQs,
      anon_sym_EQ_EQs,
      anon_sym_BANG_EQs,
      anon_sym_GTs,
      anon_sym_GT_EQs,
    STATE(235), 12,
      sym_import,
      sym_pipeline,
      sym_variable_declaration,
      sym_variable_assignment,
      sym_temporary_assignment,
      sym_variable_deletion,
      sym_function_definition,
      sym_if,
      sym_while,
      sym_for,
      sym_try,
      sym_lambda,
  [1045] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(13), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_tmp,
    ACTIONS(19), 1,
      anon_sym_del,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      anon_sym_try,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    STATE(27), 1,
      aux_sym__statements_repeat1,
    STATE(64), 1,
      aux_sym_pipeline_repeat1,
    STATE(205), 1,
      sym_command,
    STATE(336), 1,
      sym__statements,
    STATE(29), 2,
      sym_output_capture,
      sym_variable,
    ACTIONS(7), 8,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(11), 10,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LTs,
      anon_sym_LT_EQs,
      anon_sym_EQ_EQs,
      anon_sym_BANG_EQs,
      anon_sym_GTs,
      anon_sym_GT_EQs,
    STATE(235), 12,
      sym_import,
      sym_pipeline,
      sym_variable_declaration,
      sym_variable_assignment,
      sym_temporary_assignment,
      sym_variable_deletion,
      sym_function_definition,
      sym_if,
      sym_while,
      sym_for,
      sym_try,
      sym_lambda,
  [1140] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(13), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_tmp,
    ACTIONS(19), 1,
      anon_sym_del,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      anon_sym_try,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    STATE(27), 1,
      aux_sym__statements_repeat1,
    STATE(64), 1,
      aux_sym_pipeline_repeat1,
    STATE(205), 1,
      sym_command,
    STATE(326), 1,
      sym__statements,
    STATE(29), 2,
      sym_output_capture,
      sym_variable,
    ACTIONS(7), 8,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(11), 10,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LTs,
      anon_sym_LT_EQs,
      anon_sym_EQ_EQs,
      anon_sym_BANG_EQs,
      anon_sym_GTs,
      anon_sym_GT_EQs,
    STATE(235), 12,
      sym_import,
      sym_pipeline,
      sym_variable_declaration,
      sym_variable_assignment,
      sym_temporary_assignment,
      sym_variable_deletion,
      sym_function_definition,
      sym_if,
      sym_while,
      sym_for,
      sym_try,
      sym_lambda,
  [1235] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(13), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_tmp,
    ACTIONS(19), 1,
      anon_sym_del,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      anon_sym_try,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    STATE(27), 1,
      aux_sym__statements_repeat1,
    STATE(64), 1,
      aux_sym_pipeline_repeat1,
    STATE(205), 1,
      sym_command,
    STATE(293), 1,
      sym__statements,
    STATE(29), 2,
      sym_output_capture,
      sym_variable,
    ACTIONS(7), 8,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(11), 10,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LTs,
      anon_sym_LT_EQs,
      anon_sym_EQ_EQs,
      anon_sym_BANG_EQs,
      anon_sym_GTs,
      anon_sym_GT_EQs,
    STATE(235), 12,
      sym_import,
      sym_pipeline,
      sym_variable_declaration,
      sym_variable_assignment,
      sym_temporary_assignment,
      sym_variable_deletion,
      sym_function_definition,
      sym_if,
      sym_while,
      sym_for,
      sym_try,
      sym_lambda,
  [1330] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(13), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_tmp,
    ACTIONS(19), 1,
      anon_sym_del,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      anon_sym_try,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    STATE(27), 1,
      aux_sym__statements_repeat1,
    STATE(64), 1,
      aux_sym_pipeline_repeat1,
    STATE(205), 1,
      sym_command,
    STATE(306), 1,
      sym__statements,
    STATE(29), 2,
      sym_output_capture,
      sym_variable,
    ACTIONS(7), 8,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(11), 10,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LTs,
      anon_sym_LT_EQs,
      anon_sym_EQ_EQs,
      anon_sym_BANG_EQs,
      anon_sym_GTs,
      anon_sym_GT_EQs,
    STATE(235), 12,
      sym_import,
      sym_pipeline,
      sym_variable_declaration,
      sym_variable_assignment,
      sym_temporary_assignment,
      sym_variable_deletion,
      sym_function_definition,
      sym_if,
      sym_while,
      sym_for,
      sym_try,
      sym_lambda,
  [1425] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(13), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_tmp,
    ACTIONS(19), 1,
      anon_sym_del,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      anon_sym_try,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    STATE(27), 1,
      aux_sym__statements_repeat1,
    STATE(64), 1,
      aux_sym_pipeline_repeat1,
    STATE(205), 1,
      sym_command,
    STATE(303), 1,
      sym__statements,
    STATE(29), 2,
      sym_output_capture,
      sym_variable,
    ACTIONS(7), 8,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(11), 10,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LTs,
      anon_sym_LT_EQs,
      anon_sym_EQ_EQs,
      anon_sym_BANG_EQs,
      anon_sym_GTs,
      anon_sym_GT_EQs,
    STATE(235), 12,
      sym_import,
      sym_pipeline,
      sym_variable_declaration,
      sym_variable_assignment,
      sym_temporary_assignment,
      sym_variable_deletion,
      sym_function_definition,
      sym_if,
      sym_while,
      sym_for,
      sym_try,
      sym_lambda,
  [1520] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(13), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_tmp,
    ACTIONS(19), 1,
      anon_sym_del,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      anon_sym_try,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    STATE(27), 1,
      aux_sym__statements_repeat1,
    STATE(64), 1,
      aux_sym_pipeline_repeat1,
    STATE(205), 1,
      sym_command,
    STATE(300), 1,
      sym__statements,
    STATE(29), 2,
      sym_output_capture,
      sym_variable,
    ACTIONS(7), 8,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(11), 10,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LTs,
      anon_sym_LT_EQs,
      anon_sym_EQ_EQs,
      anon_sym_BANG_EQs,
      anon_sym_GTs,
      anon_sym_GT_EQs,
    STATE(235), 12,
      sym_import,
      sym_pipeline,
      sym_variable_declaration,
      sym_variable_assignment,
      sym_temporary_assignment,
      sym_variable_deletion,
      sym_function_definition,
      sym_if,
      sym_while,
      sym_for,
      sym_try,
      sym_lambda,
  [1615] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(13), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_tmp,
    ACTIONS(19), 1,
      anon_sym_del,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      anon_sym_try,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    STATE(27), 1,
      aux_sym__statements_repeat1,
    STATE(64), 1,
      aux_sym_pipeline_repeat1,
    STATE(205), 1,
      sym_command,
    STATE(348), 1,
      sym__statements,
    STATE(29), 2,
      sym_output_capture,
      sym_variable,
    ACTIONS(7), 8,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(11), 10,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LTs,
      anon_sym_LT_EQs,
      anon_sym_EQ_EQs,
      anon_sym_BANG_EQs,
      anon_sym_GTs,
      anon_sym_GT_EQs,
    STATE(235), 12,
      sym_import,
      sym_pipeline,
      sym_variable_declaration,
      sym_variable_assignment,
      sym_temporary_assignment,
      sym_variable_deletion,
      sym_function_definition,
      sym_if,
      sym_while,
      sym_for,
      sym_try,
      sym_lambda,
  [1710] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(13), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_tmp,
    ACTIONS(19), 1,
      anon_sym_del,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      anon_sym_try,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    STATE(27), 1,
      aux_sym__statements_repeat1,
    STATE(64), 1,
      aux_sym_pipeline_repeat1,
    STATE(205), 1,
      sym_command,
    STATE(350), 1,
      sym__statements,
    STATE(29), 2,
      sym_output_capture,
      sym_variable,
    ACTIONS(7), 8,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(11), 10,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LTs,
      anon_sym_LT_EQs,
      anon_sym_EQ_EQs,
      anon_sym_BANG_EQs,
      anon_sym_GTs,
      anon_sym_GT_EQs,
    STATE(235), 12,
      sym_import,
      sym_pipeline,
      sym_variable_declaration,
      sym_variable_assignment,
      sym_temporary_assignment,
      sym_variable_deletion,
      sym_function_definition,
      sym_if,
      sym_while,
      sym_for,
      sym_try,
      sym_lambda,
  [1805] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(13), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_tmp,
    ACTIONS(19), 1,
      anon_sym_del,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      anon_sym_try,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    STATE(27), 1,
      aux_sym__statements_repeat1,
    STATE(64), 1,
      aux_sym_pipeline_repeat1,
    STATE(205), 1,
      sym_command,
    STATE(351), 1,
      sym__statements,
    STATE(29), 2,
      sym_output_capture,
      sym_variable,
    ACTIONS(7), 8,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(11), 10,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LTs,
      anon_sym_LT_EQs,
      anon_sym_EQ_EQs,
      anon_sym_BANG_EQs,
      anon_sym_GTs,
      anon_sym_GT_EQs,
    STATE(235), 12,
      sym_import,
      sym_pipeline,
      sym_variable_declaration,
      sym_variable_assignment,
      sym_temporary_assignment,
      sym_variable_deletion,
      sym_function_definition,
      sym_if,
      sym_while,
      sym_for,
      sym_try,
      sym_lambda,
  [1900] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(13), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_tmp,
    ACTIONS(19), 1,
      anon_sym_del,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      anon_sym_try,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    STATE(27), 1,
      aux_sym__statements_repeat1,
    STATE(64), 1,
      aux_sym_pipeline_repeat1,
    STATE(205), 1,
      sym_command,
    STATE(295), 1,
      sym__statements,
    STATE(29), 2,
      sym_output_capture,
      sym_variable,
    ACTIONS(7), 8,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(11), 10,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LTs,
      anon_sym_LT_EQs,
      anon_sym_EQ_EQs,
      anon_sym_BANG_EQs,
      anon_sym_GTs,
      anon_sym_GT_EQs,
    STATE(235), 12,
      sym_import,
      sym_pipeline,
      sym_variable_declaration,
      sym_variable_assignment,
      sym_temporary_assignment,
      sym_variable_deletion,
      sym_function_definition,
      sym_if,
      sym_while,
      sym_for,
      sym_try,
      sym_lambda,
  [1995] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(13), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_tmp,
    ACTIONS(19), 1,
      anon_sym_del,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      anon_sym_try,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    STATE(27), 1,
      aux_sym__statements_repeat1,
    STATE(64), 1,
      aux_sym_pipeline_repeat1,
    STATE(205), 1,
      sym_command,
    STATE(333), 1,
      sym__statements,
    STATE(29), 2,
      sym_output_capture,
      sym_variable,
    ACTIONS(7), 8,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(11), 10,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LTs,
      anon_sym_LT_EQs,
      anon_sym_EQ_EQs,
      anon_sym_BANG_EQs,
      anon_sym_GTs,
      anon_sym_GT_EQs,
    STATE(235), 12,
      sym_import,
      sym_pipeline,
      sym_variable_declaration,
      sym_variable_assignment,
      sym_temporary_assignment,
      sym_variable_deletion,
      sym_function_definition,
      sym_if,
      sym_while,
      sym_for,
      sym_try,
      sym_lambda,
  [2090] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(13), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_tmp,
    ACTIONS(19), 1,
      anon_sym_del,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      anon_sym_try,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    STATE(27), 1,
      aux_sym__statements_repeat1,
    STATE(64), 1,
      aux_sym_pipeline_repeat1,
    STATE(205), 1,
      sym_command,
    STATE(328), 1,
      sym__statements,
    STATE(29), 2,
      sym_output_capture,
      sym_variable,
    ACTIONS(7), 8,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(11), 10,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LTs,
      anon_sym_LT_EQs,
      anon_sym_EQ_EQs,
      anon_sym_BANG_EQs,
      anon_sym_GTs,
      anon_sym_GT_EQs,
    STATE(235), 12,
      sym_import,
      sym_pipeline,
      sym_variable_declaration,
      sym_variable_assignment,
      sym_temporary_assignment,
      sym_variable_deletion,
      sym_function_definition,
      sym_if,
      sym_while,
      sym_for,
      sym_try,
      sym_lambda,
  [2185] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(13), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_tmp,
    ACTIONS(19), 1,
      anon_sym_del,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      anon_sym_try,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    STATE(27), 1,
      aux_sym__statements_repeat1,
    STATE(64), 1,
      aux_sym_pipeline_repeat1,
    STATE(205), 1,
      sym_command,
    STATE(305), 1,
      sym__statements,
    STATE(29), 2,
      sym_output_capture,
      sym_variable,
    ACTIONS(7), 8,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(11), 10,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LTs,
      anon_sym_LT_EQs,
      anon_sym_EQ_EQs,
      anon_sym_BANG_EQs,
      anon_sym_GTs,
      anon_sym_GT_EQs,
    STATE(235), 12,
      sym_import,
      sym_pipeline,
      sym_variable_declaration,
      sym_variable_assignment,
      sym_temporary_assignment,
      sym_variable_deletion,
      sym_function_definition,
      sym_if,
      sym_while,
      sym_for,
      sym_try,
      sym_lambda,
  [2280] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(13), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_tmp,
    ACTIONS(19), 1,
      anon_sym_del,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      anon_sym_try,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    STATE(27), 1,
      aux_sym__statements_repeat1,
    STATE(64), 1,
      aux_sym_pipeline_repeat1,
    STATE(205), 1,
      sym_command,
    STATE(312), 1,
      sym__statements,
    STATE(29), 2,
      sym_output_capture,
      sym_variable,
    ACTIONS(7), 8,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(11), 10,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LTs,
      anon_sym_LT_EQs,
      anon_sym_EQ_EQs,
      anon_sym_BANG_EQs,
      anon_sym_GTs,
      anon_sym_GT_EQs,
    STATE(235), 12,
      sym_import,
      sym_pipeline,
      sym_variable_declaration,
      sym_variable_assignment,
      sym_temporary_assignment,
      sym_variable_deletion,
      sym_function_definition,
      sym_if,
      sym_while,
      sym_for,
      sym_try,
      sym_lambda,
  [2375] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(13), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_tmp,
    ACTIONS(19), 1,
      anon_sym_del,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      anon_sym_try,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    STATE(28), 1,
      aux_sym__statements_repeat1,
    STATE(64), 1,
      aux_sym_pipeline_repeat1,
    STATE(216), 1,
      sym_command,
    STATE(29), 2,
      sym_output_capture,
      sym_variable,
    ACTIONS(7), 8,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(11), 10,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LTs,
      anon_sym_LT_EQs,
      anon_sym_EQ_EQs,
      anon_sym_BANG_EQs,
      anon_sym_GTs,
      anon_sym_GT_EQs,
    STATE(223), 12,
      sym_import,
      sym_pipeline,
      sym_variable_declaration,
      sym_variable_assignment,
      sym_temporary_assignment,
      sym_variable_deletion,
      sym_function_definition,
      sym_if,
      sym_while,
      sym_for,
      sym_try,
      sym_lambda,
  [2467] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      anon_sym_use,
    ACTIONS(46), 1,
      anon_sym_var,
    ACTIONS(49), 1,
      anon_sym_set,
    ACTIONS(52), 1,
      anon_sym_tmp,
    ACTIONS(55), 1,
      anon_sym_del,
    ACTIONS(58), 1,
      anon_sym_fn,
    ACTIONS(61), 1,
      anon_sym_if,
    ACTIONS(64), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_while,
    ACTIONS(70), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_try,
    ACTIONS(76), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      anon_sym_DOLLAR,
    STATE(28), 1,
      aux_sym__statements_repeat1,
    STATE(64), 1,
      aux_sym_pipeline_repeat1,
    STATE(260), 1,
      sym_command,
    STATE(29), 2,
      sym_output_capture,
      sym_variable,
    ACTIONS(37), 8,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(43), 10,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LTs,
      anon_sym_LT_EQs,
      anon_sym_EQ_EQs,
      anon_sym_BANG_EQs,
      anon_sym_GTs,
      anon_sym_GT_EQs,
    STATE(282), 12,
      sym_import,
      sym_pipeline,
      sym_variable_declaration,
      sym_variable_assignment,
      sym_temporary_assignment,
      sym_variable_deletion,
      sym_function_definition,
      sym_if,
      sym_while,
      sym_for,
      sym_try,
      sym_lambda,
  [2559] = 16,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_AMP,
    ACTIONS(94), 1,
      anon_sym_LBRACE,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(100), 1,
      anon_sym_DOLLAR,
    ACTIONS(104), 1,
      anon_sym_LBRACK2,
    STATE(30), 1,
      aux_sym_command_repeat1,
    STATE(191), 1,
      sym_redirection,
    ACTIONS(82), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(88), 3,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
    ACTIONS(102), 3,
      sym_number,
      sym_string,
      sym_bareword,
    ACTIONS(86), 4,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    STATE(50), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    ACTIONS(90), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
    STATE(73), 6,
      sym_lambda,
      sym_option,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [2628] = 16,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_LBRACE,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(100), 1,
      anon_sym_DOLLAR,
    ACTIONS(104), 1,
      anon_sym_LBRACK2,
    ACTIONS(110), 1,
      anon_sym_AMP,
    STATE(32), 1,
      aux_sym_command_repeat1,
    STATE(192), 1,
      sym_redirection,
    ACTIONS(106), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(88), 3,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
    ACTIONS(102), 3,
      sym_number,
      sym_string,
      sym_bareword,
    ACTIONS(108), 4,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    STATE(50), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    ACTIONS(90), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
    STATE(73), 6,
      sym_lambda,
      sym_option,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [2697] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(116), 13,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LTs,
      anon_sym_LT_EQs,
      anon_sym_EQ_EQs,
      anon_sym_BANG_EQs,
      anon_sym_GTs,
      anon_sym_GT_EQs,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
    ACTIONS(114), 18,
      sym_identifier,
      anon_sym_use,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_var,
      anon_sym_set,
      anon_sym_tmp,
      anon_sym_del,
      anon_sym_fn,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_try,
  [2741] = 14,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_AMP,
    ACTIONS(128), 1,
      anon_sym_LBRACE,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    ACTIONS(134), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(137), 1,
      anon_sym_DOLLAR,
    ACTIONS(143), 1,
      anon_sym_LBRACK2,
    STATE(32), 1,
      aux_sym_command_repeat1,
    ACTIONS(118), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(122), 3,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
    ACTIONS(140), 3,
      sym_number,
      sym_string,
      sym_bareword,
    STATE(50), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(73), 6,
      sym_lambda,
      sym_option,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
    ACTIONS(120), 9,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [2805] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(116), 13,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LTs,
      anon_sym_LT_EQs,
      anon_sym_EQ_EQs,
      anon_sym_BANG_EQs,
      anon_sym_GTs,
      anon_sym_GT_EQs,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
    ACTIONS(114), 18,
      sym_identifier,
      anon_sym_use,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_var,
      anon_sym_set,
      anon_sym_tmp,
      anon_sym_del,
      anon_sym_fn,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_try,
  [2849] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 13,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LTs,
      anon_sym_LT_EQs,
      anon_sym_EQ_EQs,
      anon_sym_BANG_EQs,
      anon_sym_GTs,
      anon_sym_GT_EQs,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
    ACTIONS(114), 18,
      sym_identifier,
      anon_sym_use,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_var,
      anon_sym_set,
      anon_sym_tmp,
      anon_sym_del,
      anon_sym_fn,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_try,
  [2888] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 13,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LTs,
      anon_sym_LT_EQs,
      anon_sym_EQ_EQs,
      anon_sym_BANG_EQs,
      anon_sym_GTs,
      anon_sym_GT_EQs,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
    ACTIONS(148), 18,
      sym_identifier,
      anon_sym_use,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_var,
      anon_sym_set,
      anon_sym_tmp,
      anon_sym_del,
      anon_sym_fn,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_try,
  [2927] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_PIPE,
    ACTIONS(156), 1,
      anon_sym_AMP,
    ACTIONS(160), 1,
      anon_sym_LBRACE,
    ACTIONS(162), 1,
      anon_sym_LPAREN,
    ACTIONS(164), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(166), 1,
      anon_sym_DOLLAR,
    ACTIONS(170), 1,
      sym_string,
    ACTIONS(172), 1,
      anon_sym_STAR_STAR,
    ACTIONS(174), 1,
      anon_sym_LBRACK2,
    STATE(37), 1,
      aux_sym_command_repeat1,
    STATE(290), 1,
      sym_redirection,
    ACTIONS(152), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(154), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(168), 2,
      sym_number,
      sym_bareword,
    ACTIONS(158), 3,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
    STATE(112), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(136), 6,
      sym_lambda,
      sym_option,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [2995] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_PIPE,
    ACTIONS(160), 1,
      anon_sym_LBRACE,
    ACTIONS(162), 1,
      anon_sym_LPAREN,
    ACTIONS(164), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(166), 1,
      anon_sym_DOLLAR,
    ACTIONS(170), 1,
      sym_string,
    ACTIONS(172), 1,
      anon_sym_STAR_STAR,
    ACTIONS(174), 1,
      anon_sym_LBRACK2,
    ACTIONS(176), 1,
      anon_sym_AMP,
    STATE(38), 1,
      aux_sym_command_repeat1,
    STATE(271), 1,
      sym_redirection,
    ACTIONS(152), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(154), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(168), 2,
      sym_number,
      sym_bareword,
    ACTIONS(158), 3,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
    STATE(112), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(136), 6,
      sym_lambda,
      sym_option,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [3063] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_AMP,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(193), 1,
      anon_sym_DOLLAR,
    ACTIONS(199), 1,
      sym_string,
    ACTIONS(202), 1,
      anon_sym_STAR_STAR,
    ACTIONS(205), 1,
      anon_sym_LBRACK2,
    STATE(38), 1,
      aux_sym_command_repeat1,
    ACTIONS(120), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(178), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(196), 2,
      sym_number,
      sym_bareword,
    ACTIONS(118), 4,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
    STATE(112), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(136), 6,
      sym_lambda,
      sym_option,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [3126] = 13,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_LBRACE,
    ACTIONS(218), 1,
      anon_sym_LPAREN,
    ACTIONS(221), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(224), 1,
      anon_sym_DOLLAR,
    ACTIONS(230), 1,
      anon_sym_LBRACK2,
    STATE(39), 1,
      aux_sym__assignment_repeat1,
    ACTIONS(208), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(210), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(212), 3,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
    ACTIONS(227), 3,
      sym_number,
      sym_string,
      sym_bareword,
    STATE(132), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(155), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [3180] = 13,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_LBRACE,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(243), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(245), 1,
      anon_sym_DOLLAR,
    ACTIONS(249), 1,
      anon_sym_LBRACK2,
    STATE(39), 1,
      aux_sym__assignment_repeat1,
    ACTIONS(233), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(235), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(237), 3,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
    ACTIONS(247), 3,
      sym_number,
      sym_string,
      sym_bareword,
    STATE(132), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(155), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [3234] = 5,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_LBRACK,
    STATE(46), 1,
      aux_sym__assignment_repeat2,
    ACTIONS(251), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(253), 21,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [3271] = 5,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_LBRACK,
    STATE(42), 1,
      aux_sym_wildcard_repeat1,
    ACTIONS(257), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(259), 21,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [3308] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_AMP,
    ACTIONS(268), 1,
      anon_sym_RBRACK,
    ACTIONS(270), 1,
      anon_sym_LBRACE,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(276), 1,
      anon_sym_DOLLAR,
    ACTIONS(280), 1,
      sym_string,
    ACTIONS(282), 1,
      anon_sym_STAR_STAR,
    ACTIONS(284), 1,
      anon_sym_LBRACK2,
    STATE(93), 1,
      aux_sym__assignment_repeat1,
    ACTIONS(264), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(278), 2,
      sym_number,
      sym_bareword,
    STATE(252), 2,
      sym_pair,
      aux_sym_map_repeat1,
    STATE(165), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(176), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [3367] = 5,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_LBRACK,
    STATE(41), 1,
      aux_sym__assignment_repeat2,
    ACTIONS(286), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(288), 21,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [3404] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_AMP,
    ACTIONS(270), 1,
      anon_sym_LBRACE,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(276), 1,
      anon_sym_DOLLAR,
    ACTIONS(280), 1,
      sym_string,
    ACTIONS(282), 1,
      anon_sym_STAR_STAR,
    ACTIONS(284), 1,
      anon_sym_LBRACK2,
    ACTIONS(290), 1,
      anon_sym_RBRACK,
    STATE(82), 1,
      aux_sym__assignment_repeat1,
    ACTIONS(264), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(278), 2,
      sym_number,
      sym_bareword,
    STATE(249), 2,
      sym_pair,
      aux_sym_map_repeat1,
    STATE(165), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(176), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [3463] = 5,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_LBRACK,
    STATE(46), 1,
      aux_sym__assignment_repeat2,
    ACTIONS(292), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(294), 21,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [3500] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_AMP,
    ACTIONS(270), 1,
      anon_sym_LBRACE,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(276), 1,
      anon_sym_DOLLAR,
    ACTIONS(280), 1,
      sym_string,
    ACTIONS(282), 1,
      anon_sym_STAR_STAR,
    ACTIONS(284), 1,
      anon_sym_LBRACK2,
    ACTIONS(299), 1,
      anon_sym_RBRACK,
    STATE(90), 1,
      aux_sym__assignment_repeat1,
    ACTIONS(264), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(278), 2,
      sym_number,
      sym_bareword,
    STATE(244), 2,
      sym_pair,
      aux_sym_map_repeat1,
    STATE(165), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(176), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [3559] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_AMP,
    ACTIONS(270), 1,
      anon_sym_LBRACE,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(276), 1,
      anon_sym_DOLLAR,
    ACTIONS(280), 1,
      sym_string,
    ACTIONS(282), 1,
      anon_sym_STAR_STAR,
    ACTIONS(284), 1,
      anon_sym_LBRACK2,
    ACTIONS(301), 1,
      anon_sym_RBRACK,
    STATE(86), 1,
      aux_sym__assignment_repeat1,
    ACTIONS(264), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(278), 2,
      sym_number,
      sym_bareword,
    STATE(243), 2,
      sym_pair,
      aux_sym_map_repeat1,
    STATE(165), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(176), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [3618] = 15,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_PIPE,
    ACTIONS(305), 1,
      anon_sym_LBRACE,
    ACTIONS(307), 1,
      anon_sym_RBRACE,
    ACTIONS(309), 1,
      aux_sym_lambda_token1,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(313), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(315), 1,
      anon_sym_DOLLAR,
    ACTIONS(317), 1,
      anon_sym_LBRACK2,
    STATE(8), 1,
      sym_parameter_list,
    STATE(85), 1,
      aux_sym__assignment_repeat1,
    ACTIONS(264), 3,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
    ACTIONS(278), 3,
      sym_number,
      sym_string,
      sym_bareword,
    STATE(165), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(176), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [3675] = 5,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_LBRACK,
    STATE(41), 1,
      aux_sym__assignment_repeat2,
    ACTIONS(319), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(321), 21,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [3712] = 15,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_PIPE,
    ACTIONS(305), 1,
      anon_sym_LBRACE,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(313), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(315), 1,
      anon_sym_DOLLAR,
    ACTIONS(317), 1,
      anon_sym_LBRACK2,
    ACTIONS(323), 1,
      anon_sym_RBRACE,
    ACTIONS(325), 1,
      aux_sym_lambda_token1,
    STATE(22), 1,
      sym_parameter_list,
    STATE(79), 1,
      aux_sym__assignment_repeat1,
    ACTIONS(264), 3,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
    ACTIONS(278), 3,
      sym_number,
      sym_string,
      sym_bareword,
    STATE(165), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(176), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [3769] = 5,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_LBRACK,
    STATE(55), 1,
      aux_sym_wildcard_repeat1,
    ACTIONS(327), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(329), 21,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [3806] = 15,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_PIPE,
    ACTIONS(305), 1,
      anon_sym_LBRACE,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(313), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(315), 1,
      anon_sym_DOLLAR,
    ACTIONS(317), 1,
      anon_sym_LBRACK2,
    ACTIONS(333), 1,
      anon_sym_RBRACE,
    ACTIONS(335), 1,
      aux_sym_lambda_token1,
    STATE(16), 1,
      sym_parameter_list,
    STATE(78), 1,
      aux_sym__assignment_repeat1,
    ACTIONS(264), 3,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
    ACTIONS(278), 3,
      sym_number,
      sym_string,
      sym_bareword,
    STATE(165), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(176), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [3863] = 15,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_PIPE,
    ACTIONS(305), 1,
      anon_sym_LBRACE,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(313), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(315), 1,
      anon_sym_DOLLAR,
    ACTIONS(317), 1,
      anon_sym_LBRACK2,
    ACTIONS(337), 1,
      anon_sym_RBRACE,
    ACTIONS(339), 1,
      aux_sym_lambda_token1,
    STATE(4), 1,
      sym_parameter_list,
    STATE(81), 1,
      aux_sym__assignment_repeat1,
    ACTIONS(264), 3,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
    ACTIONS(278), 3,
      sym_number,
      sym_string,
      sym_bareword,
    STATE(165), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(176), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [3920] = 5,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_LBRACK,
    STATE(42), 1,
      aux_sym_wildcard_repeat1,
    ACTIONS(341), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(343), 21,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [3957] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_AMP,
    ACTIONS(270), 1,
      anon_sym_LBRACE,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(276), 1,
      anon_sym_DOLLAR,
    ACTIONS(280), 1,
      sym_string,
    ACTIONS(282), 1,
      anon_sym_STAR_STAR,
    ACTIONS(284), 1,
      anon_sym_LBRACK2,
    ACTIONS(345), 1,
      anon_sym_RBRACK,
    STATE(89), 1,
      aux_sym__assignment_repeat1,
    ACTIONS(264), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(278), 2,
      sym_number,
      sym_bareword,
    STATE(245), 2,
      sym_pair,
      aux_sym_map_repeat1,
    STATE(165), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(176), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [4016] = 15,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_PIPE,
    ACTIONS(305), 1,
      anon_sym_LBRACE,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(313), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(315), 1,
      anon_sym_DOLLAR,
    ACTIONS(317), 1,
      anon_sym_LBRACK2,
    ACTIONS(347), 1,
      anon_sym_RBRACE,
    ACTIONS(349), 1,
      aux_sym_lambda_token1,
    STATE(15), 1,
      sym_parameter_list,
    STATE(91), 1,
      aux_sym__assignment_repeat1,
    ACTIONS(264), 3,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
    ACTIONS(278), 3,
      sym_number,
      sym_string,
      sym_bareword,
    STATE(165), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(176), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [4073] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(351), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACK,
    ACTIONS(353), 21,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [4105] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(355), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACK,
    ACTIONS(357), 21,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [4137] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(368), 1,
      anon_sym_DOLLAR,
    STATE(60), 1,
      aux_sym_pipeline_repeat1,
    STATE(317), 1,
      sym_command,
    STATE(36), 2,
      sym_output_capture,
      sym_variable,
    ACTIONS(359), 8,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(362), 10,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LTs,
      anon_sym_LT_EQs,
      anon_sym_EQ_EQs,
      anon_sym_BANG_EQs,
      anon_sym_GTs,
      anon_sym_GT_EQs,
  [4179] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(371), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACK,
    ACTIONS(373), 21,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [4211] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(375), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACK,
    ACTIONS(377), 21,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [4243] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(379), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACK,
    ACTIONS(381), 21,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [4275] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    STATE(60), 1,
      aux_sym_pipeline_repeat1,
    STATE(217), 1,
      sym_command,
    STATE(29), 2,
      sym_output_capture,
      sym_variable,
    ACTIONS(7), 8,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(11), 10,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LTs,
      anon_sym_LT_EQs,
      anon_sym_EQ_EQs,
      anon_sym_BANG_EQs,
      anon_sym_GTs,
      anon_sym_GT_EQs,
  [4317] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(383), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACK,
    ACTIONS(385), 21,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [4349] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(387), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACK,
    ACTIONS(389), 21,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [4381] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(391), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACK,
    ACTIONS(393), 21,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [4413] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(395), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(397), 21,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [4444] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(371), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(373), 21,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [4475] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(375), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(377), 21,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [4506] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(399), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(401), 21,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [4537] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(379), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(381), 21,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [4568] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(319), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(321), 21,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [4599] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(403), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(405), 21,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [4630] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_LBRACE,
    ACTIONS(413), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(419), 1,
      anon_sym_DOLLAR,
    ACTIONS(425), 1,
      sym_string,
    ACTIONS(428), 1,
      anon_sym_STAR_STAR,
    ACTIONS(431), 1,
      anon_sym_LBRACK2,
    STATE(75), 1,
      aux_sym__assignment_repeat1,
    ACTIONS(208), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    ACTIONS(407), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(422), 2,
      sym_number,
      sym_bareword,
    STATE(165), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(176), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [4683] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(434), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(436), 21,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [4714] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(286), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(288), 21,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [4745] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_LBRACE,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(276), 1,
      anon_sym_DOLLAR,
    ACTIONS(280), 1,
      sym_string,
    ACTIONS(282), 1,
      anon_sym_STAR_STAR,
    ACTIONS(284), 1,
      anon_sym_LBRACK2,
    ACTIONS(438), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      aux_sym__assignment_repeat1,
    ACTIONS(264), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(278), 2,
      sym_number,
      sym_bareword,
    STATE(165), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(176), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [4797] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_LBRACE,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(276), 1,
      anon_sym_DOLLAR,
    ACTIONS(280), 1,
      sym_string,
    ACTIONS(282), 1,
      anon_sym_STAR_STAR,
    ACTIONS(284), 1,
      anon_sym_LBRACK2,
    ACTIONS(440), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      aux_sym__assignment_repeat1,
    ACTIONS(264), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(278), 2,
      sym_number,
      sym_bareword,
    STATE(165), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(176), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [4849] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_LBRACE,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(276), 1,
      anon_sym_DOLLAR,
    ACTIONS(280), 1,
      sym_string,
    ACTIONS(282), 1,
      anon_sym_STAR_STAR,
    ACTIONS(284), 1,
      anon_sym_LBRACK2,
    ACTIONS(442), 1,
      anon_sym_RBRACK,
    STATE(75), 1,
      aux_sym__assignment_repeat1,
    ACTIONS(264), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(278), 2,
      sym_number,
      sym_bareword,
    STATE(165), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(176), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [4901] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_LBRACE,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(276), 1,
      anon_sym_DOLLAR,
    ACTIONS(280), 1,
      sym_string,
    ACTIONS(282), 1,
      anon_sym_STAR_STAR,
    ACTIONS(284), 1,
      anon_sym_LBRACK2,
    ACTIONS(444), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      aux_sym__assignment_repeat1,
    ACTIONS(264), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(278), 2,
      sym_number,
      sym_bareword,
    STATE(165), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(176), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [4953] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_LBRACE,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(276), 1,
      anon_sym_DOLLAR,
    ACTIONS(280), 1,
      sym_string,
    ACTIONS(282), 1,
      anon_sym_STAR_STAR,
    ACTIONS(284), 1,
      anon_sym_LBRACK2,
    ACTIONS(446), 1,
      anon_sym_RBRACK,
    STATE(75), 1,
      aux_sym__assignment_repeat1,
    ACTIONS(264), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(278), 2,
      sym_number,
      sym_bareword,
    STATE(165), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(176), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [5005] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_LBRACE,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(276), 1,
      anon_sym_DOLLAR,
    ACTIONS(280), 1,
      sym_string,
    ACTIONS(282), 1,
      anon_sym_STAR_STAR,
    ACTIONS(284), 1,
      anon_sym_LBRACK2,
    ACTIONS(448), 1,
      anon_sym_RBRACK,
    STATE(75), 1,
      aux_sym__assignment_repeat1,
    ACTIONS(264), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(278), 2,
      sym_number,
      sym_bareword,
    STATE(165), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(176), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [5057] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_LBRACE,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(276), 1,
      anon_sym_DOLLAR,
    ACTIONS(280), 1,
      sym_string,
    ACTIONS(282), 1,
      anon_sym_STAR_STAR,
    ACTIONS(284), 1,
      anon_sym_LBRACK2,
    ACTIONS(450), 1,
      anon_sym_RBRACK,
    STATE(75), 1,
      aux_sym__assignment_repeat1,
    ACTIONS(264), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(278), 2,
      sym_number,
      sym_bareword,
    STATE(165), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(176), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [5109] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_LBRACE,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(276), 1,
      anon_sym_DOLLAR,
    ACTIONS(280), 1,
      sym_string,
    ACTIONS(282), 1,
      anon_sym_STAR_STAR,
    ACTIONS(284), 1,
      anon_sym_LBRACK2,
    ACTIONS(452), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      aux_sym__assignment_repeat1,
    ACTIONS(264), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(278), 2,
      sym_number,
      sym_bareword,
    STATE(165), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(176), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [5161] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_LBRACE,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(276), 1,
      anon_sym_DOLLAR,
    ACTIONS(280), 1,
      sym_string,
    ACTIONS(282), 1,
      anon_sym_STAR_STAR,
    ACTIONS(284), 1,
      anon_sym_LBRACK2,
    ACTIONS(454), 1,
      anon_sym_RBRACK,
    STATE(75), 1,
      aux_sym__assignment_repeat1,
    ACTIONS(264), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(278), 2,
      sym_number,
      sym_bareword,
    STATE(165), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(176), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [5213] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_LBRACE,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(276), 1,
      anon_sym_DOLLAR,
    ACTIONS(280), 1,
      sym_string,
    ACTIONS(282), 1,
      anon_sym_STAR_STAR,
    ACTIONS(284), 1,
      anon_sym_LBRACK2,
    ACTIONS(456), 1,
      anon_sym_RBRACK,
    STATE(75), 1,
      aux_sym__assignment_repeat1,
    ACTIONS(264), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(278), 2,
      sym_number,
      sym_bareword,
    STATE(165), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(176), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [5265] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_LBRACE,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(276), 1,
      anon_sym_DOLLAR,
    ACTIONS(280), 1,
      sym_string,
    ACTIONS(282), 1,
      anon_sym_STAR_STAR,
    ACTIONS(284), 1,
      anon_sym_LBRACK2,
    ACTIONS(458), 1,
      anon_sym_RBRACK,
    STATE(75), 1,
      aux_sym__assignment_repeat1,
    ACTIONS(264), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(278), 2,
      sym_number,
      sym_bareword,
    STATE(165), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(176), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [5317] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_LBRACE,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(276), 1,
      anon_sym_DOLLAR,
    ACTIONS(280), 1,
      sym_string,
    ACTIONS(282), 1,
      anon_sym_STAR_STAR,
    ACTIONS(284), 1,
      anon_sym_LBRACK2,
    ACTIONS(460), 1,
      anon_sym_RBRACK,
    STATE(75), 1,
      aux_sym__assignment_repeat1,
    ACTIONS(264), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(278), 2,
      sym_number,
      sym_bareword,
    STATE(165), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(176), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [5369] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_LBRACE,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(276), 1,
      anon_sym_DOLLAR,
    ACTIONS(280), 1,
      sym_string,
    ACTIONS(282), 1,
      anon_sym_STAR_STAR,
    ACTIONS(284), 1,
      anon_sym_LBRACK2,
    ACTIONS(462), 1,
      anon_sym_RBRACK,
    STATE(75), 1,
      aux_sym__assignment_repeat1,
    ACTIONS(264), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(278), 2,
      sym_number,
      sym_bareword,
    STATE(165), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(176), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [5421] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_LBRACE,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(276), 1,
      anon_sym_DOLLAR,
    ACTIONS(280), 1,
      sym_string,
    ACTIONS(282), 1,
      anon_sym_STAR_STAR,
    ACTIONS(284), 1,
      anon_sym_LBRACK2,
    ACTIONS(464), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      aux_sym__assignment_repeat1,
    ACTIONS(264), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(278), 2,
      sym_number,
      sym_bareword,
    STATE(165), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(176), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [5473] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_LBRACE,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(276), 1,
      anon_sym_DOLLAR,
    ACTIONS(280), 1,
      sym_string,
    ACTIONS(282), 1,
      anon_sym_STAR_STAR,
    ACTIONS(284), 1,
      anon_sym_LBRACK2,
    ACTIONS(466), 1,
      anon_sym_RBRACK,
    STATE(75), 1,
      aux_sym__assignment_repeat1,
    ACTIONS(264), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(278), 2,
      sym_number,
      sym_bareword,
    STATE(165), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(176), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [5525] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_LBRACE,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(276), 1,
      anon_sym_DOLLAR,
    ACTIONS(280), 1,
      sym_string,
    ACTIONS(282), 1,
      anon_sym_STAR_STAR,
    ACTIONS(284), 1,
      anon_sym_LBRACK2,
    ACTIONS(468), 1,
      anon_sym_RBRACK,
    STATE(75), 1,
      aux_sym__assignment_repeat1,
    ACTIONS(264), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(278), 2,
      sym_number,
      sym_bareword,
    STATE(165), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(176), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [5577] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_LBRACE,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(276), 1,
      anon_sym_DOLLAR,
    ACTIONS(280), 1,
      sym_string,
    ACTIONS(282), 1,
      anon_sym_STAR_STAR,
    ACTIONS(284), 1,
      anon_sym_LBRACK2,
    STATE(92), 1,
      aux_sym__assignment_repeat1,
    ACTIONS(264), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(278), 2,
      sym_number,
      sym_bareword,
    STATE(165), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(176), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [5626] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_LBRACE,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(276), 1,
      anon_sym_DOLLAR,
    ACTIONS(280), 1,
      sym_string,
    ACTIONS(282), 1,
      anon_sym_STAR_STAR,
    ACTIONS(284), 1,
      anon_sym_LBRACK2,
    STATE(88), 1,
      aux_sym__assignment_repeat1,
    ACTIONS(264), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(278), 2,
      sym_number,
      sym_bareword,
    STATE(165), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(176), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [5675] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_LBRACE,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(276), 1,
      anon_sym_DOLLAR,
    ACTIONS(280), 1,
      sym_string,
    ACTIONS(282), 1,
      anon_sym_STAR_STAR,
    ACTIONS(284), 1,
      anon_sym_LBRACK2,
    STATE(80), 1,
      aux_sym__assignment_repeat1,
    ACTIONS(264), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(278), 2,
      sym_number,
      sym_bareword,
    STATE(165), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(176), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [5724] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_LBRACE,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(276), 1,
      anon_sym_DOLLAR,
    ACTIONS(280), 1,
      sym_string,
    ACTIONS(282), 1,
      anon_sym_STAR_STAR,
    ACTIONS(284), 1,
      anon_sym_LBRACK2,
    STATE(87), 1,
      aux_sym__assignment_repeat1,
    ACTIONS(264), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(278), 2,
      sym_number,
      sym_bareword,
    STATE(165), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(176), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [5773] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_LBRACE,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(276), 1,
      anon_sym_DOLLAR,
    ACTIONS(280), 1,
      sym_string,
    ACTIONS(282), 1,
      anon_sym_STAR_STAR,
    ACTIONS(284), 1,
      anon_sym_LBRACK2,
    STATE(83), 1,
      aux_sym__assignment_repeat1,
    ACTIONS(264), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(278), 2,
      sym_number,
      sym_bareword,
    STATE(165), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(176), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [5822] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_LBRACE,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(276), 1,
      anon_sym_DOLLAR,
    ACTIONS(280), 1,
      sym_string,
    ACTIONS(282), 1,
      anon_sym_STAR_STAR,
    ACTIONS(284), 1,
      anon_sym_LBRACK2,
    STATE(84), 1,
      aux_sym__assignment_repeat1,
    ACTIONS(264), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(278), 2,
      sym_number,
      sym_bareword,
    STATE(165), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(176), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [5871] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_LBRACE,
    ACTIONS(472), 1,
      anon_sym_LPAREN,
    ACTIONS(474), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(476), 1,
      anon_sym_DOLLAR,
    ACTIONS(478), 1,
      sym_string,
    ACTIONS(480), 1,
      anon_sym_STAR_STAR,
    ACTIONS(482), 1,
      anon_sym_LBRACK2,
    STATE(40), 1,
      aux_sym__assignment_repeat1,
    ACTIONS(237), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(247), 2,
      sym_number,
      sym_bareword,
    STATE(132), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(155), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [5920] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 8,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(486), 12,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LTs,
      anon_sym_LT_EQs,
      anon_sym_EQ_EQs,
      anon_sym_BANG_EQs,
      anon_sym_GTs,
      anon_sym_GT_EQs,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
  [5948] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_LBRACK,
    STATE(102), 1,
      aux_sym_wildcard_repeat1,
    ACTIONS(259), 7,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
    ACTIONS(257), 11,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
  [5980] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_LBRACE,
    ACTIONS(162), 1,
      anon_sym_LPAREN,
    ACTIONS(164), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(166), 1,
      anon_sym_DOLLAR,
    ACTIONS(172), 1,
      anon_sym_STAR_STAR,
    ACTIONS(174), 1,
      anon_sym_LBRACK2,
    ACTIONS(493), 1,
      sym_string,
    ACTIONS(152), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(491), 2,
      sym_number,
      sym_bareword,
    STATE(110), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(134), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [6026] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_LBRACK,
    STATE(111), 1,
      aux_sym_wildcard_repeat1,
    ACTIONS(329), 7,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
    ACTIONS(327), 11,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
  [6058] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      anon_sym_LBRACE,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(501), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(503), 1,
      anon_sym_DOLLAR,
    ACTIONS(507), 1,
      sym_string,
    ACTIONS(509), 1,
      anon_sym_STAR_STAR,
    ACTIONS(511), 1,
      anon_sym_LBRACK2,
    ACTIONS(88), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(505), 2,
      sym_number,
      sym_bareword,
    STATE(44), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(77), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [6104] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_LBRACE,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(276), 1,
      anon_sym_DOLLAR,
    ACTIONS(282), 1,
      anon_sym_STAR_STAR,
    ACTIONS(284), 1,
      anon_sym_LBRACK2,
    ACTIONS(515), 1,
      sym_string,
    ACTIONS(264), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(513), 2,
      sym_number,
      sym_bareword,
    STATE(270), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(334), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [6150] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_LBRACE,
    ACTIONS(521), 1,
      anon_sym_LPAREN,
    ACTIONS(523), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(525), 1,
      anon_sym_DOLLAR,
    ACTIONS(529), 1,
      sym_string,
    ACTIONS(531), 1,
      anon_sym_STAR_STAR,
    ACTIONS(533), 1,
      anon_sym_LBRACK2,
    ACTIONS(517), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(527), 2,
      sym_number,
      sym_bareword,
    STATE(210), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(248), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [6196] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_LBRACE,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(276), 1,
      anon_sym_DOLLAR,
    ACTIONS(282), 1,
      anon_sym_STAR_STAR,
    ACTIONS(284), 1,
      anon_sym_LBRACK2,
    ACTIONS(537), 1,
      sym_string,
    ACTIONS(264), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(535), 2,
      sym_number,
      sym_bareword,
    STATE(268), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(331), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [6242] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_LBRACE,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(276), 1,
      anon_sym_DOLLAR,
    ACTIONS(282), 1,
      anon_sym_STAR_STAR,
    ACTIONS(284), 1,
      anon_sym_LBRACK2,
    ACTIONS(541), 1,
      sym_string,
    ACTIONS(264), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(539), 2,
      sym_number,
      sym_bareword,
    STATE(266), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(307), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [6288] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      anon_sym_LBRACK,
    STATE(113), 1,
      aux_sym__assignment_repeat2,
    ACTIONS(288), 7,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
    ACTIONS(286), 11,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
  [6320] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_LBRACK,
    STATE(102), 1,
      aux_sym_wildcard_repeat1,
    ACTIONS(343), 7,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
    ACTIONS(341), 11,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
  [6352] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      anon_sym_LBRACK,
    STATE(113), 1,
      aux_sym__assignment_repeat2,
    ACTIONS(321), 7,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
    ACTIONS(319), 11,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
  [6384] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      anon_sym_LBRACK,
    STATE(117), 1,
      aux_sym__assignment_repeat2,
    ACTIONS(253), 7,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
    ACTIONS(251), 11,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
  [6416] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_LBRACE,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(276), 1,
      anon_sym_DOLLAR,
    ACTIONS(282), 1,
      anon_sym_STAR_STAR,
    ACTIONS(284), 1,
      anon_sym_LBRACK2,
    ACTIONS(547), 1,
      sym_string,
    ACTIONS(264), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(545), 2,
      sym_number,
      sym_bareword,
    STATE(267), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(320), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [6462] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_LBRACE,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(276), 1,
      anon_sym_DOLLAR,
    ACTIONS(282), 1,
      anon_sym_STAR_STAR,
    ACTIONS(284), 1,
      anon_sym_LBRACK2,
    ACTIONS(551), 1,
      sym_string,
    ACTIONS(264), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(549), 2,
      sym_number,
      sym_bareword,
    STATE(264), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(294), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [6508] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_LBRACE,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(276), 1,
      anon_sym_DOLLAR,
    ACTIONS(282), 1,
      anon_sym_STAR_STAR,
    ACTIONS(284), 1,
      anon_sym_LBRACK2,
    ACTIONS(555), 1,
      sym_string,
    ACTIONS(264), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(553), 2,
      sym_number,
      sym_bareword,
    STATE(262), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(342), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [6554] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_LBRACK,
    STATE(117), 1,
      aux_sym__assignment_repeat2,
    ACTIONS(294), 7,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
    ACTIONS(292), 11,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
  [6586] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_LBRACE,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(276), 1,
      anon_sym_DOLLAR,
    ACTIONS(282), 1,
      anon_sym_STAR_STAR,
    ACTIONS(284), 1,
      anon_sym_LBRACK2,
    ACTIONS(562), 1,
      sym_string,
    ACTIONS(264), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(560), 2,
      sym_number,
      sym_bareword,
    STATE(265), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(308), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [6632] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_LBRACE,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(276), 1,
      anon_sym_DOLLAR,
    ACTIONS(282), 1,
      anon_sym_STAR_STAR,
    ACTIONS(284), 1,
      anon_sym_LBRACK2,
    ACTIONS(566), 1,
      sym_string,
    ACTIONS(264), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(564), 2,
      sym_number,
      sym_bareword,
    STATE(246), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(288), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [6678] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_LBRACE,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(276), 1,
      anon_sym_DOLLAR,
    ACTIONS(282), 1,
      anon_sym_STAR_STAR,
    ACTIONS(284), 1,
      anon_sym_LBRACK2,
    ACTIONS(570), 1,
      sym_string,
    ACTIONS(264), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(568), 2,
      sym_number,
      sym_bareword,
    STATE(263), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(299), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [6724] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_LBRACE,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(276), 1,
      anon_sym_DOLLAR,
    ACTIONS(282), 1,
      anon_sym_STAR_STAR,
    ACTIONS(284), 1,
      anon_sym_LBRACK2,
    ACTIONS(574), 1,
      sym_string,
    ACTIONS(264), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(572), 2,
      sym_number,
      sym_bareword,
    STATE(269), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(321), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [6770] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 7,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
    ACTIONS(375), 12,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
  [6797] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 7,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
    ACTIONS(379), 12,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
  [6824] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 7,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
    ACTIONS(391), 12,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
  [6851] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 7,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
    ACTIONS(355), 12,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
  [6878] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 7,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
    ACTIONS(371), 12,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
  [6905] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 7,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
    ACTIONS(383), 12,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
  [6932] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 7,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
    ACTIONS(351), 12,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
  [6959] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 7,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
    ACTIONS(387), 12,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
  [6986] = 5,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_LBRACK,
    STATE(137), 1,
      aux_sym__assignment_repeat2,
    ACTIONS(251), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(253), 14,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [7016] = 5,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_LBRACK,
    STATE(135), 1,
      aux_sym_wildcard_repeat1,
    ACTIONS(341), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(343), 14,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [7046] = 5,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_LBRACK,
    STATE(130), 1,
      aux_sym__assignment_repeat2,
    ACTIONS(580), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(582), 14,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [7076] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 6,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
    ACTIONS(403), 12,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
      anon_sym_LBRACK2,
  [7102] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 6,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
    ACTIONS(286), 12,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
      anon_sym_LBRACK2,
  [7128] = 5,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(584), 1,
      anon_sym_LBRACK,
    STATE(135), 1,
      aux_sym_wildcard_repeat1,
    ACTIONS(257), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(259), 14,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [7158] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 6,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
    ACTIONS(319), 12,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
      anon_sym_LBRACK2,
  [7184] = 5,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_LBRACK,
    STATE(137), 1,
      aux_sym__assignment_repeat2,
    ACTIONS(292), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(294), 14,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [7214] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 6,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
    ACTIONS(395), 12,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
      anon_sym_LBRACK2,
  [7240] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 6,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
    ACTIONS(434), 12,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
      anon_sym_LBRACK2,
  [7266] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 6,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
    ACTIONS(371), 12,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
      anon_sym_LBRACK2,
  [7292] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 6,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
    ACTIONS(399), 12,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
      anon_sym_LBRACK2,
  [7318] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 6,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
    ACTIONS(375), 12,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
      anon_sym_LBRACK2,
  [7344] = 5,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_LBRACK,
    STATE(131), 1,
      aux_sym_wildcard_repeat1,
    ACTIONS(327), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(329), 14,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [7374] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 6,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
    ACTIONS(379), 12,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
      anon_sym_LBRACK2,
  [7400] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(379), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACK,
    ACTIONS(381), 14,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [7425] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(351), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACK,
    ACTIONS(353), 14,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [7450] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(355), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACK,
    ACTIONS(357), 14,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [7475] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(387), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACK,
    ACTIONS(389), 14,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [7500] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(375), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACK,
    ACTIONS(377), 14,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [7525] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(383), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACK,
    ACTIONS(385), 14,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [7550] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(371), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACK,
    ACTIONS(373), 14,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [7575] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(391), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACK,
    ACTIONS(393), 14,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [7600] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_LBRACK,
    STATE(154), 1,
      aux_sym_wildcard_repeat1,
    ACTIONS(329), 5,
      anon_sym_STAR,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
    ACTIONS(327), 9,
      anon_sym_AMP,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
  [7628] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_LBRACK,
    STATE(157), 1,
      aux_sym_wildcard_repeat1,
    ACTIONS(343), 5,
      anon_sym_STAR,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
    ACTIONS(341), 9,
      anon_sym_AMP,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
  [7656] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(580), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(582), 14,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [7680] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_LBRACK,
    STATE(158), 1,
      aux_sym__assignment_repeat2,
    ACTIONS(253), 5,
      anon_sym_STAR,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
    ACTIONS(251), 9,
      anon_sym_AMP,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
  [7708] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      anon_sym_LBRACK,
    STATE(157), 1,
      aux_sym_wildcard_repeat1,
    ACTIONS(259), 5,
      anon_sym_STAR,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
    ACTIONS(257), 9,
      anon_sym_AMP,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
  [7736] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_LBRACK,
    STATE(158), 1,
      aux_sym__assignment_repeat2,
    ACTIONS(294), 5,
      anon_sym_STAR,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
    ACTIONS(292), 9,
      anon_sym_AMP,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
  [7764] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(399), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(401), 14,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [7788] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(403), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(405), 14,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [7812] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(395), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(397), 14,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [7836] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(434), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(436), 14,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [7860] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 5,
      anon_sym_STAR,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
    ACTIONS(371), 10,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
  [7883] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 5,
      anon_sym_STAR,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
    ACTIONS(383), 10,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
  [7906] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_LBRACK,
    STATE(156), 1,
      aux_sym__assignment_repeat2,
    ACTIONS(582), 5,
      anon_sym_STAR,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
    ACTIONS(580), 8,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
  [7933] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 5,
      anon_sym_STAR,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
    ACTIONS(375), 10,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
  [7956] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 5,
      anon_sym_STAR,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
    ACTIONS(387), 10,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
  [7979] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 5,
      anon_sym_STAR,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
    ACTIONS(351), 10,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
  [8002] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 5,
      anon_sym_STAR,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
    ACTIONS(391), 10,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
  [8025] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 5,
      anon_sym_STAR,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
    ACTIONS(355), 10,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
  [8048] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 5,
      anon_sym_STAR,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
    ACTIONS(379), 10,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
  [8071] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 4,
      anon_sym_STAR,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
    ACTIONS(434), 10,
      anon_sym_AMP,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
      anon_sym_LBRACK2,
  [8093] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 4,
      anon_sym_STAR,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
    ACTIONS(399), 10,
      anon_sym_AMP,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
      anon_sym_LBRACK2,
  [8115] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 4,
      anon_sym_STAR,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
    ACTIONS(395), 10,
      anon_sym_AMP,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
      anon_sym_LBRACK2,
  [8137] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 4,
      anon_sym_STAR,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
    ACTIONS(403), 10,
      anon_sym_AMP,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
      anon_sym_LBRACK2,
  [8159] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 4,
      anon_sym_STAR,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
    ACTIONS(580), 9,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
      anon_sym_LBRACK2,
  [8180] = 9,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_else,
    ACTIONS(606), 1,
      anon_sym_catch,
    ACTIONS(608), 1,
      anon_sym_finally,
    STATE(189), 1,
      sym_catch,
    STATE(195), 1,
      sym_else,
    STATE(234), 1,
      sym_finally,
    ACTIONS(600), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(602), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [8211] = 5,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(614), 1,
      anon_sym_LBRACK,
    STATE(181), 1,
      aux_sym__assignment_repeat2,
    ACTIONS(610), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(612), 6,
      anon_sym_SEMI,
      sym_identifier,
      anon_sym_AT,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [8233] = 5,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(614), 1,
      anon_sym_LBRACK,
    STATE(178), 1,
      aux_sym__assignment_repeat2,
    ACTIONS(616), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(618), 6,
      anon_sym_SEMI,
      sym_identifier,
      anon_sym_AT,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [8255] = 7,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_else,
    ACTIONS(624), 1,
      anon_sym_elif,
    STATE(237), 1,
      sym_else,
    ACTIONS(620), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(185), 2,
      sym_elif,
      aux_sym_if_repeat1,
    ACTIONS(622), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [8281] = 5,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(626), 1,
      anon_sym_LBRACK,
    STATE(181), 1,
      aux_sym__assignment_repeat2,
    ACTIONS(292), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(294), 6,
      anon_sym_SEMI,
      sym_identifier,
      anon_sym_AT,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [8303] = 5,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(614), 1,
      anon_sym_LBRACK,
    STATE(181), 1,
      aux_sym__assignment_repeat2,
    ACTIONS(616), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(618), 6,
      anon_sym_SEMI,
      sym_identifier,
      anon_sym_AT,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [8325] = 7,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_else,
    ACTIONS(624), 1,
      anon_sym_elif,
    STATE(239), 1,
      sym_else,
    ACTIONS(629), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(180), 2,
      sym_elif,
      aux_sym_if_repeat1,
    ACTIONS(631), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [8351] = 5,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(614), 1,
      anon_sym_LBRACK,
    STATE(182), 1,
      aux_sym__assignment_repeat2,
    ACTIONS(633), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(635), 6,
      anon_sym_SEMI,
      sym_identifier,
      anon_sym_AT,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [8373] = 5,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_elif,
    ACTIONS(637), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(185), 2,
      sym_elif,
      aux_sym_if_repeat1,
    ACTIONS(639), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_RPAREN,
  [8394] = 6,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(644), 1,
      sym_identifier,
    ACTIONS(647), 1,
      anon_sym_AT,
    STATE(186), 1,
      aux_sym__assignment_repeat3,
    ACTIONS(616), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(618), 4,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [8417] = 7,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(652), 1,
      sym_identifier,
    ACTIONS(656), 1,
      anon_sym_AT,
    ACTIONS(658), 1,
      anon_sym_EQ,
    STATE(186), 1,
      aux_sym__assignment_repeat3,
    ACTIONS(650), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(654), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [8442] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(387), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACK,
    ACTIONS(389), 6,
      anon_sym_SEMI,
      sym_identifier,
      anon_sym_AT,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [8459] = 7,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_else,
    ACTIONS(608), 1,
      anon_sym_finally,
    STATE(196), 1,
      sym_else,
    STATE(240), 1,
      sym_finally,
    ACTIONS(660), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(662), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [8484] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(664), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(666), 5,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [8499] = 4,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(672), 1,
      anon_sym_AMP,
    ACTIONS(668), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(670), 4,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [8516] = 4,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(678), 1,
      anon_sym_AMP,
    ACTIONS(674), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(676), 4,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [8533] = 4,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(680), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(684), 2,
      sym_string,
      sym_bareword,
    ACTIONS(682), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [8550] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(686), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(688), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_finally,
      anon_sym_RPAREN,
  [8565] = 5,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_finally,
    STATE(240), 1,
      sym_finally,
    ACTIONS(660), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(662), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [8584] = 5,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_finally,
    STATE(233), 1,
      sym_finally,
    ACTIONS(690), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(692), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [8603] = 5,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(696), 1,
      sym_identifier,
    STATE(197), 1,
      aux_sym_variable_deletion_repeat1,
    ACTIONS(694), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(699), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [8622] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(701), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(703), 5,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [8637] = 5,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(707), 1,
      sym_identifier,
    STATE(197), 1,
      aux_sym_variable_deletion_repeat1,
    ACTIONS(705), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(709), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [8656] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(711), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(713), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_elif,
      anon_sym_else,
      anon_sym_RPAREN,
  [8671] = 5,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_else,
    STATE(242), 1,
      sym_else,
    ACTIONS(715), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(717), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [8690] = 4,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(719), 1,
      sym_identifier,
    ACTIONS(668), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(670), 4,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [8707] = 5,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_else,
    STATE(236), 1,
      sym_else,
    ACTIONS(721), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(723), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [8726] = 4,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(719), 1,
      sym_identifier,
    ACTIONS(674), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(676), 4,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [8743] = 6,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(725), 1,
      ts_builtin_sym_end,
    ACTIONS(727), 1,
      anon_sym_SEMI,
    ACTIONS(729), 1,
      anon_sym_LF,
    ACTIONS(731), 1,
      anon_sym_PIPE,
    ACTIONS(733), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [8763] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(735), 1,
      sym_identifier,
    ACTIONS(738), 1,
      anon_sym_AMP,
    ACTIONS(741), 1,
      anon_sym_PIPE,
    ACTIONS(743), 1,
      anon_sym_AT,
    STATE(206), 1,
      aux_sym_parameter_list_repeat1,
    STATE(247), 1,
      sym_option,
  [8785] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      anon_sym_LBRACK,
    STATE(211), 1,
      aux_sym_wildcard_repeat1,
    ACTIONS(341), 4,
      sym_identifier,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_AT,
  [8801] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 1,
      anon_sym_LBRACK,
    STATE(213), 1,
      aux_sym__assignment_repeat2,
    ACTIONS(251), 4,
      sym_identifier,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_AT,
  [8817] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      anon_sym_LBRACK,
    STATE(207), 1,
      aux_sym_wildcard_repeat1,
    ACTIONS(327), 4,
      sym_identifier,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_AT,
  [8833] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 1,
      anon_sym_LBRACK,
    STATE(208), 1,
      aux_sym__assignment_repeat2,
    ACTIONS(286), 4,
      sym_identifier,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_AT,
  [8849] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 1,
      anon_sym_LBRACK,
    STATE(211), 1,
      aux_sym_wildcard_repeat1,
    ACTIONS(257), 4,
      sym_identifier,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_AT,
  [8865] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(753), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(755), 4,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [8879] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 1,
      anon_sym_LBRACK,
    STATE(213), 1,
      aux_sym__assignment_repeat2,
    ACTIONS(292), 4,
      sym_identifier,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_AT,
  [8895] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      sym_identifier,
    ACTIONS(762), 1,
      anon_sym_AMP,
    ACTIONS(764), 1,
      anon_sym_PIPE,
    ACTIONS(766), 1,
      anon_sym_AT,
    STATE(206), 1,
      aux_sym_parameter_list_repeat1,
    STATE(247), 1,
      sym_option,
  [8917] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(768), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(770), 4,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [8931] = 6,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(112), 1,
      ts_builtin_sym_end,
    ACTIONS(731), 1,
      anon_sym_PIPE,
    ACTIONS(772), 1,
      anon_sym_SEMI,
    ACTIONS(774), 1,
      anon_sym_LF,
    ACTIONS(776), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [8951] = 4,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(731), 1,
      anon_sym_PIPE,
    ACTIONS(778), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(780), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [8967] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(782), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(784), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_finally,
      anon_sym_RPAREN,
  [8981] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 5,
      sym_identifier,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_AT,
      anon_sym_LBRACK,
  [8992] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(786), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(788), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [9005] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(790), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(792), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [9018] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(794), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(796), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [9031] = 5,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(112), 1,
      ts_builtin_sym_end,
    ACTIONS(772), 1,
      anon_sym_SEMI,
    ACTIONS(774), 1,
      anon_sym_LF,
    ACTIONS(776), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [9048] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 5,
      sym_identifier,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_AT,
      anon_sym_LBRACK,
  [9059] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 5,
      sym_identifier,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_AT,
      anon_sym_LBRACK,
  [9070] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 5,
      sym_identifier,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_AT,
      anon_sym_LBRACK,
  [9081] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      sym_identifier,
    ACTIONS(762), 1,
      anon_sym_AMP,
    ACTIONS(766), 1,
      anon_sym_AT,
    STATE(214), 1,
      aux_sym_parameter_list_repeat1,
    STATE(247), 1,
      sym_option,
  [9100] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 5,
      sym_identifier,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_AT,
      anon_sym_LBRACK,
  [9111] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 5,
      sym_identifier,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_AT,
      anon_sym_LBRACK,
  [9122] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 5,
      sym_identifier,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_AT,
      anon_sym_LBRACK,
  [9133] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(798), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(800), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [9146] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(802), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(804), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [9159] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(806), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(808), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [9172] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(660), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(662), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [9185] = 5,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(725), 1,
      ts_builtin_sym_end,
    ACTIONS(727), 1,
      anon_sym_SEMI,
    ACTIONS(729), 1,
      anon_sym_LF,
    ACTIONS(733), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [9202] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(810), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(812), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [9215] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(814), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(816), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [9228] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 5,
      sym_identifier,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_AT,
      anon_sym_LBRACK,
  [9239] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(620), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(622), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [9252] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(690), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(692), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [9265] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(818), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(820), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [9278] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(822), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(824), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [9291] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_AMP,
    ACTIONS(826), 1,
      anon_sym_RBRACK,
    STATE(254), 2,
      sym_pair,
      aux_sym_map_repeat1,
  [9305] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_AMP,
    ACTIONS(828), 1,
      anon_sym_RBRACK,
    STATE(254), 2,
      sym_pair,
      aux_sym_map_repeat1,
  [9319] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_AMP,
    ACTIONS(830), 1,
      anon_sym_RBRACK,
    STATE(254), 2,
      sym_pair,
      aux_sym_map_repeat1,
  [9333] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_LBRACK,
    STATE(156), 1,
      aux_sym__assignment_repeat2,
    ACTIONS(832), 2,
      anon_sym_AMP,
      anon_sym_RBRACK,
  [9347] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 4,
      sym_identifier,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_AT,
  [9357] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 4,
      sym_identifier,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_AT,
  [9367] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_AMP,
    ACTIONS(836), 1,
      anon_sym_RBRACK,
    STATE(254), 2,
      sym_pair,
      aux_sym_map_repeat1,
  [9381] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 4,
      sym_identifier,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_AT,
  [9391] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 4,
      sym_identifier,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_AT,
  [9401] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_AMP,
    ACTIONS(838), 1,
      anon_sym_RBRACK,
    STATE(254), 2,
      sym_pair,
      aux_sym_map_repeat1,
  [9415] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 4,
      sym_identifier,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_AT,
  [9425] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(840), 1,
      anon_sym_AMP,
    ACTIONS(843), 1,
      anon_sym_RBRACK,
    STATE(254), 2,
      sym_pair,
      aux_sym_map_repeat1,
  [9439] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 4,
      sym_identifier,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_AT,
  [9449] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 1,
      sym_identifier,
    ACTIONS(847), 1,
      anon_sym_AT,
    STATE(187), 1,
      aux_sym__assignment_repeat3,
    STATE(220), 1,
      sym__assignment,
  [9465] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 1,
      sym_identifier,
    ACTIONS(847), 1,
      anon_sym_AT,
    STATE(187), 1,
      aux_sym__assignment_repeat3,
    STATE(241), 1,
      sym__assignment,
  [9481] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 1,
      sym_identifier,
    ACTIONS(847), 1,
      anon_sym_AT,
    STATE(187), 1,
      aux_sym__assignment_repeat3,
    STATE(232), 1,
      sym__assignment,
  [9497] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(849), 4,
      sym_identifier,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_AT,
  [9507] = 4,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(731), 1,
      anon_sym_PIPE,
    ACTIONS(851), 1,
      anon_sym_SEMI,
    ACTIONS(853), 1,
      anon_sym_LF,
  [9520] = 4,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_PIPE,
    ACTIONS(325), 1,
      aux_sym_lambda_token1,
    STATE(22), 1,
      sym_parameter_list,
  [9533] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_LBRACK,
    ACTIONS(855), 1,
      anon_sym_LBRACE,
    STATE(156), 1,
      aux_sym__assignment_repeat2,
  [9546] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_LBRACK,
    ACTIONS(857), 1,
      anon_sym_LBRACE,
    STATE(156), 1,
      aux_sym__assignment_repeat2,
  [9559] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_LBRACK,
    ACTIONS(859), 1,
      anon_sym_RBRACK,
    STATE(156), 1,
      aux_sym__assignment_repeat2,
  [9572] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_LBRACK,
    ACTIONS(861), 1,
      anon_sym_RBRACK,
    STATE(156), 1,
      aux_sym__assignment_repeat2,
  [9585] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_LBRACK,
    ACTIONS(863), 1,
      anon_sym_RBRACK,
    STATE(156), 1,
      aux_sym__assignment_repeat2,
  [9598] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_LBRACK,
    ACTIONS(865), 1,
      anon_sym_RBRACK,
    STATE(156), 1,
      aux_sym__assignment_repeat2,
  [9611] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_LBRACK,
    ACTIONS(867), 1,
      anon_sym_LBRACE,
    STATE(156), 1,
      aux_sym__assignment_repeat2,
  [9624] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_LBRACK,
    ACTIONS(869), 1,
      anon_sym_RBRACK,
    STATE(156), 1,
      aux_sym__assignment_repeat2,
  [9637] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_LBRACK,
    ACTIONS(871), 1,
      anon_sym_LBRACE,
    STATE(156), 1,
      aux_sym__assignment_repeat2,
  [9650] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      anon_sym_PIPE,
    ACTIONS(873), 1,
      anon_sym_AMP,
  [9660] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(875), 1,
      sym_identifier,
    ACTIONS(877), 1,
      anon_sym_AT,
  [9670] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 1,
      sym_identifier,
    ACTIONS(881), 1,
      anon_sym_AT,
  [9680] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 1,
      sym_identifier,
    ACTIONS(885), 1,
      anon_sym_AT,
  [9690] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(887), 2,
      sym_string,
      sym_bareword,
  [9698] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    STATE(221), 1,
      sym_lambda,
  [9708] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
  [9716] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(889), 1,
      sym_identifier,
    STATE(199), 1,
      aux_sym_variable_deletion_repeat1,
  [9726] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(891), 1,
      aux_sym_redirection_token2,
    ACTIONS(893), 1,
      sym_bareword,
  [9736] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      anon_sym_PIPE,
    ACTIONS(895), 1,
      sym_identifier,
  [9746] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(897), 1,
      aux_sym_redirection_token2,
    ACTIONS(899), 1,
      sym_bareword,
  [9756] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(851), 1,
      anon_sym_SEMI,
    ACTIONS(853), 1,
      anon_sym_LF,
  [9766] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(901), 1,
      sym_identifier,
    ACTIONS(903), 1,
      anon_sym_AT,
  [9776] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      anon_sym_PIPE,
    ACTIONS(895), 1,
      sym_identifier,
  [9786] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(905), 1,
      sym_identifier,
    ACTIONS(907), 1,
      anon_sym_AT,
  [9796] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(909), 1,
      sym_identifier,
    ACTIONS(911), 1,
      anon_sym_AT,
  [9806] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
  [9814] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(832), 2,
      anon_sym_AMP,
      anon_sym_RBRACK,
  [9822] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(913), 1,
      sym_identifier,
    ACTIONS(915), 1,
      anon_sym_AT,
  [9832] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      anon_sym_PIPE,
    ACTIONS(917), 1,
      anon_sym_AMP,
  [9842] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(919), 1,
      anon_sym_RPAREN,
  [9849] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(921), 1,
      anon_sym_RPAREN,
  [9856] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(923), 1,
      anon_sym_RBRACE,
  [9863] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      anon_sym_RBRACK,
  [9870] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(925), 1,
      anon_sym_RBRACE,
  [9877] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(927), 1,
      sym_identifier,
  [9884] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(753), 1,
      anon_sym_PIPE,
  [9891] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(929), 1,
      sym_identifier,
  [9898] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(857), 1,
      anon_sym_LBRACE,
  [9905] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(931), 1,
      anon_sym_RPAREN,
  [9912] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(933), 1,
      sym_identifier,
  [9919] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(935), 1,
      anon_sym_EQ,
  [9926] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(937), 1,
      anon_sym_RPAREN,
  [9933] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(939), 1,
      sym_identifier,
  [9940] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(941), 1,
      anon_sym_RBRACE,
  [9947] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(943), 1,
      anon_sym_RBRACE,
  [9954] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(863), 1,
      anon_sym_RBRACK,
  [9961] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(861), 1,
      anon_sym_RBRACK,
  [9968] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(945), 1,
      anon_sym_RBRACE,
  [9975] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(947), 1,
      sym_identifier,
  [9982] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(949), 1,
      sym_identifier,
  [9989] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(951), 1,
      anon_sym_RPAREN,
  [9996] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(953), 1,
      anon_sym_RPAREN,
  [10003] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(955), 1,
      sym_identifier,
  [10010] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(957), 1,
      anon_sym_EQ,
  [10017] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(959), 1,
      anon_sym_RPAREN,
  [10024] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(961), 1,
      anon_sym_PIPE,
  [10031] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(963), 1,
      anon_sym_RPAREN,
  [10038] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(965), 1,
      anon_sym_RBRACE,
  [10045] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      anon_sym_RBRACK,
  [10052] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 1,
      anon_sym_RBRACK,
  [10059] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(967), 1,
      sym_identifier,
  [10066] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(969), 1,
      anon_sym_EQ,
  [10073] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(971), 1,
      anon_sym_RPAREN,
  [10080] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(973), 1,
      sym_identifier,
  [10087] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(975), 1,
      anon_sym_RPAREN,
  [10094] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(977), 1,
      sym_identifier,
  [10101] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(979), 1,
      anon_sym_RPAREN,
  [10108] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(981), 1,
      sym_identifier,
  [10115] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(983), 1,
      anon_sym_RPAREN,
  [10122] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(867), 1,
      anon_sym_LBRACE,
  [10129] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(985), 1,
      anon_sym_EQ,
  [10136] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(987), 1,
      anon_sym_RBRACE,
  [10143] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(871), 1,
      anon_sym_LBRACE,
  [10150] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(895), 1,
      sym_identifier,
  [10157] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(989), 1,
      anon_sym_RBRACE,
  [10164] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(991), 1,
      anon_sym_LBRACE,
  [10171] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(993), 1,
      sym_identifier,
  [10178] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(995), 1,
      anon_sym_LBRACE,
  [10185] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(997), 1,
      sym_identifier,
  [10192] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(999), 1,
      anon_sym_LBRACE,
  [10199] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(855), 1,
      anon_sym_LBRACE,
  [10206] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1001), 1,
      ts_builtin_sym_end,
  [10213] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1003), 1,
      ts_builtin_sym_end,
  [10220] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1005), 1,
      anon_sym_RBRACE,
  [10227] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1007), 1,
      anon_sym_LBRACE,
  [10234] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1009), 1,
      sym_identifier,
  [10241] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1011), 1,
      anon_sym_RBRACE,
  [10248] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1013), 1,
      sym_identifier,
  [10255] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1015), 1,
      anon_sym_RBRACE,
  [10262] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1017), 1,
      anon_sym_RBRACE,
  [10269] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1019), 1,
      anon_sym_RBRACE,
  [10276] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      anon_sym_PIPE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 95,
  [SMALL_STATE(4)] = 190,
  [SMALL_STATE(5)] = 285,
  [SMALL_STATE(6)] = 380,
  [SMALL_STATE(7)] = 475,
  [SMALL_STATE(8)] = 570,
  [SMALL_STATE(9)] = 665,
  [SMALL_STATE(10)] = 760,
  [SMALL_STATE(11)] = 855,
  [SMALL_STATE(12)] = 950,
  [SMALL_STATE(13)] = 1045,
  [SMALL_STATE(14)] = 1140,
  [SMALL_STATE(15)] = 1235,
  [SMALL_STATE(16)] = 1330,
  [SMALL_STATE(17)] = 1425,
  [SMALL_STATE(18)] = 1520,
  [SMALL_STATE(19)] = 1615,
  [SMALL_STATE(20)] = 1710,
  [SMALL_STATE(21)] = 1805,
  [SMALL_STATE(22)] = 1900,
  [SMALL_STATE(23)] = 1995,
  [SMALL_STATE(24)] = 2090,
  [SMALL_STATE(25)] = 2185,
  [SMALL_STATE(26)] = 2280,
  [SMALL_STATE(27)] = 2375,
  [SMALL_STATE(28)] = 2467,
  [SMALL_STATE(29)] = 2559,
  [SMALL_STATE(30)] = 2628,
  [SMALL_STATE(31)] = 2697,
  [SMALL_STATE(32)] = 2741,
  [SMALL_STATE(33)] = 2805,
  [SMALL_STATE(34)] = 2849,
  [SMALL_STATE(35)] = 2888,
  [SMALL_STATE(36)] = 2927,
  [SMALL_STATE(37)] = 2995,
  [SMALL_STATE(38)] = 3063,
  [SMALL_STATE(39)] = 3126,
  [SMALL_STATE(40)] = 3180,
  [SMALL_STATE(41)] = 3234,
  [SMALL_STATE(42)] = 3271,
  [SMALL_STATE(43)] = 3308,
  [SMALL_STATE(44)] = 3367,
  [SMALL_STATE(45)] = 3404,
  [SMALL_STATE(46)] = 3463,
  [SMALL_STATE(47)] = 3500,
  [SMALL_STATE(48)] = 3559,
  [SMALL_STATE(49)] = 3618,
  [SMALL_STATE(50)] = 3675,
  [SMALL_STATE(51)] = 3712,
  [SMALL_STATE(52)] = 3769,
  [SMALL_STATE(53)] = 3806,
  [SMALL_STATE(54)] = 3863,
  [SMALL_STATE(55)] = 3920,
  [SMALL_STATE(56)] = 3957,
  [SMALL_STATE(57)] = 4016,
  [SMALL_STATE(58)] = 4073,
  [SMALL_STATE(59)] = 4105,
  [SMALL_STATE(60)] = 4137,
  [SMALL_STATE(61)] = 4179,
  [SMALL_STATE(62)] = 4211,
  [SMALL_STATE(63)] = 4243,
  [SMALL_STATE(64)] = 4275,
  [SMALL_STATE(65)] = 4317,
  [SMALL_STATE(66)] = 4349,
  [SMALL_STATE(67)] = 4381,
  [SMALL_STATE(68)] = 4413,
  [SMALL_STATE(69)] = 4444,
  [SMALL_STATE(70)] = 4475,
  [SMALL_STATE(71)] = 4506,
  [SMALL_STATE(72)] = 4537,
  [SMALL_STATE(73)] = 4568,
  [SMALL_STATE(74)] = 4599,
  [SMALL_STATE(75)] = 4630,
  [SMALL_STATE(76)] = 4683,
  [SMALL_STATE(77)] = 4714,
  [SMALL_STATE(78)] = 4745,
  [SMALL_STATE(79)] = 4797,
  [SMALL_STATE(80)] = 4849,
  [SMALL_STATE(81)] = 4901,
  [SMALL_STATE(82)] = 4953,
  [SMALL_STATE(83)] = 5005,
  [SMALL_STATE(84)] = 5057,
  [SMALL_STATE(85)] = 5109,
  [SMALL_STATE(86)] = 5161,
  [SMALL_STATE(87)] = 5213,
  [SMALL_STATE(88)] = 5265,
  [SMALL_STATE(89)] = 5317,
  [SMALL_STATE(90)] = 5369,
  [SMALL_STATE(91)] = 5421,
  [SMALL_STATE(92)] = 5473,
  [SMALL_STATE(93)] = 5525,
  [SMALL_STATE(94)] = 5577,
  [SMALL_STATE(95)] = 5626,
  [SMALL_STATE(96)] = 5675,
  [SMALL_STATE(97)] = 5724,
  [SMALL_STATE(98)] = 5773,
  [SMALL_STATE(99)] = 5822,
  [SMALL_STATE(100)] = 5871,
  [SMALL_STATE(101)] = 5920,
  [SMALL_STATE(102)] = 5948,
  [SMALL_STATE(103)] = 5980,
  [SMALL_STATE(104)] = 6026,
  [SMALL_STATE(105)] = 6058,
  [SMALL_STATE(106)] = 6104,
  [SMALL_STATE(107)] = 6150,
  [SMALL_STATE(108)] = 6196,
  [SMALL_STATE(109)] = 6242,
  [SMALL_STATE(110)] = 6288,
  [SMALL_STATE(111)] = 6320,
  [SMALL_STATE(112)] = 6352,
  [SMALL_STATE(113)] = 6384,
  [SMALL_STATE(114)] = 6416,
  [SMALL_STATE(115)] = 6462,
  [SMALL_STATE(116)] = 6508,
  [SMALL_STATE(117)] = 6554,
  [SMALL_STATE(118)] = 6586,
  [SMALL_STATE(119)] = 6632,
  [SMALL_STATE(120)] = 6678,
  [SMALL_STATE(121)] = 6724,
  [SMALL_STATE(122)] = 6770,
  [SMALL_STATE(123)] = 6797,
  [SMALL_STATE(124)] = 6824,
  [SMALL_STATE(125)] = 6851,
  [SMALL_STATE(126)] = 6878,
  [SMALL_STATE(127)] = 6905,
  [SMALL_STATE(128)] = 6932,
  [SMALL_STATE(129)] = 6959,
  [SMALL_STATE(130)] = 6986,
  [SMALL_STATE(131)] = 7016,
  [SMALL_STATE(132)] = 7046,
  [SMALL_STATE(133)] = 7076,
  [SMALL_STATE(134)] = 7102,
  [SMALL_STATE(135)] = 7128,
  [SMALL_STATE(136)] = 7158,
  [SMALL_STATE(137)] = 7184,
  [SMALL_STATE(138)] = 7214,
  [SMALL_STATE(139)] = 7240,
  [SMALL_STATE(140)] = 7266,
  [SMALL_STATE(141)] = 7292,
  [SMALL_STATE(142)] = 7318,
  [SMALL_STATE(143)] = 7344,
  [SMALL_STATE(144)] = 7374,
  [SMALL_STATE(145)] = 7400,
  [SMALL_STATE(146)] = 7425,
  [SMALL_STATE(147)] = 7450,
  [SMALL_STATE(148)] = 7475,
  [SMALL_STATE(149)] = 7500,
  [SMALL_STATE(150)] = 7525,
  [SMALL_STATE(151)] = 7550,
  [SMALL_STATE(152)] = 7575,
  [SMALL_STATE(153)] = 7600,
  [SMALL_STATE(154)] = 7628,
  [SMALL_STATE(155)] = 7656,
  [SMALL_STATE(156)] = 7680,
  [SMALL_STATE(157)] = 7708,
  [SMALL_STATE(158)] = 7736,
  [SMALL_STATE(159)] = 7764,
  [SMALL_STATE(160)] = 7788,
  [SMALL_STATE(161)] = 7812,
  [SMALL_STATE(162)] = 7836,
  [SMALL_STATE(163)] = 7860,
  [SMALL_STATE(164)] = 7883,
  [SMALL_STATE(165)] = 7906,
  [SMALL_STATE(166)] = 7933,
  [SMALL_STATE(167)] = 7956,
  [SMALL_STATE(168)] = 7979,
  [SMALL_STATE(169)] = 8002,
  [SMALL_STATE(170)] = 8025,
  [SMALL_STATE(171)] = 8048,
  [SMALL_STATE(172)] = 8071,
  [SMALL_STATE(173)] = 8093,
  [SMALL_STATE(174)] = 8115,
  [SMALL_STATE(175)] = 8137,
  [SMALL_STATE(176)] = 8159,
  [SMALL_STATE(177)] = 8180,
  [SMALL_STATE(178)] = 8211,
  [SMALL_STATE(179)] = 8233,
  [SMALL_STATE(180)] = 8255,
  [SMALL_STATE(181)] = 8281,
  [SMALL_STATE(182)] = 8303,
  [SMALL_STATE(183)] = 8325,
  [SMALL_STATE(184)] = 8351,
  [SMALL_STATE(185)] = 8373,
  [SMALL_STATE(186)] = 8394,
  [SMALL_STATE(187)] = 8417,
  [SMALL_STATE(188)] = 8442,
  [SMALL_STATE(189)] = 8459,
  [SMALL_STATE(190)] = 8484,
  [SMALL_STATE(191)] = 8499,
  [SMALL_STATE(192)] = 8516,
  [SMALL_STATE(193)] = 8533,
  [SMALL_STATE(194)] = 8550,
  [SMALL_STATE(195)] = 8565,
  [SMALL_STATE(196)] = 8584,
  [SMALL_STATE(197)] = 8603,
  [SMALL_STATE(198)] = 8622,
  [SMALL_STATE(199)] = 8637,
  [SMALL_STATE(200)] = 8656,
  [SMALL_STATE(201)] = 8671,
  [SMALL_STATE(202)] = 8690,
  [SMALL_STATE(203)] = 8707,
  [SMALL_STATE(204)] = 8726,
  [SMALL_STATE(205)] = 8743,
  [SMALL_STATE(206)] = 8763,
  [SMALL_STATE(207)] = 8785,
  [SMALL_STATE(208)] = 8801,
  [SMALL_STATE(209)] = 8817,
  [SMALL_STATE(210)] = 8833,
  [SMALL_STATE(211)] = 8849,
  [SMALL_STATE(212)] = 8865,
  [SMALL_STATE(213)] = 8879,
  [SMALL_STATE(214)] = 8895,
  [SMALL_STATE(215)] = 8917,
  [SMALL_STATE(216)] = 8931,
  [SMALL_STATE(217)] = 8951,
  [SMALL_STATE(218)] = 8967,
  [SMALL_STATE(219)] = 8981,
  [SMALL_STATE(220)] = 8992,
  [SMALL_STATE(221)] = 9005,
  [SMALL_STATE(222)] = 9018,
  [SMALL_STATE(223)] = 9031,
  [SMALL_STATE(224)] = 9048,
  [SMALL_STATE(225)] = 9059,
  [SMALL_STATE(226)] = 9070,
  [SMALL_STATE(227)] = 9081,
  [SMALL_STATE(228)] = 9100,
  [SMALL_STATE(229)] = 9111,
  [SMALL_STATE(230)] = 9122,
  [SMALL_STATE(231)] = 9133,
  [SMALL_STATE(232)] = 9146,
  [SMALL_STATE(233)] = 9159,
  [SMALL_STATE(234)] = 9172,
  [SMALL_STATE(235)] = 9185,
  [SMALL_STATE(236)] = 9202,
  [SMALL_STATE(237)] = 9215,
  [SMALL_STATE(238)] = 9228,
  [SMALL_STATE(239)] = 9239,
  [SMALL_STATE(240)] = 9252,
  [SMALL_STATE(241)] = 9265,
  [SMALL_STATE(242)] = 9278,
  [SMALL_STATE(243)] = 9291,
  [SMALL_STATE(244)] = 9305,
  [SMALL_STATE(245)] = 9319,
  [SMALL_STATE(246)] = 9333,
  [SMALL_STATE(247)] = 9347,
  [SMALL_STATE(248)] = 9357,
  [SMALL_STATE(249)] = 9367,
  [SMALL_STATE(250)] = 9381,
  [SMALL_STATE(251)] = 9391,
  [SMALL_STATE(252)] = 9401,
  [SMALL_STATE(253)] = 9415,
  [SMALL_STATE(254)] = 9425,
  [SMALL_STATE(255)] = 9439,
  [SMALL_STATE(256)] = 9449,
  [SMALL_STATE(257)] = 9465,
  [SMALL_STATE(258)] = 9481,
  [SMALL_STATE(259)] = 9497,
  [SMALL_STATE(260)] = 9507,
  [SMALL_STATE(261)] = 9520,
  [SMALL_STATE(262)] = 9533,
  [SMALL_STATE(263)] = 9546,
  [SMALL_STATE(264)] = 9559,
  [SMALL_STATE(265)] = 9572,
  [SMALL_STATE(266)] = 9585,
  [SMALL_STATE(267)] = 9598,
  [SMALL_STATE(268)] = 9611,
  [SMALL_STATE(269)] = 9624,
  [SMALL_STATE(270)] = 9637,
  [SMALL_STATE(271)] = 9650,
  [SMALL_STATE(272)] = 9660,
  [SMALL_STATE(273)] = 9670,
  [SMALL_STATE(274)] = 9680,
  [SMALL_STATE(275)] = 9690,
  [SMALL_STATE(276)] = 9698,
  [SMALL_STATE(277)] = 9708,
  [SMALL_STATE(278)] = 9716,
  [SMALL_STATE(279)] = 9726,
  [SMALL_STATE(280)] = 9736,
  [SMALL_STATE(281)] = 9746,
  [SMALL_STATE(282)] = 9756,
  [SMALL_STATE(283)] = 9766,
  [SMALL_STATE(284)] = 9776,
  [SMALL_STATE(285)] = 9786,
  [SMALL_STATE(286)] = 9796,
  [SMALL_STATE(287)] = 9806,
  [SMALL_STATE(288)] = 9814,
  [SMALL_STATE(289)] = 9822,
  [SMALL_STATE(290)] = 9832,
  [SMALL_STATE(291)] = 9842,
  [SMALL_STATE(292)] = 9849,
  [SMALL_STATE(293)] = 9856,
  [SMALL_STATE(294)] = 9863,
  [SMALL_STATE(295)] = 9870,
  [SMALL_STATE(296)] = 9877,
  [SMALL_STATE(297)] = 9884,
  [SMALL_STATE(298)] = 9891,
  [SMALL_STATE(299)] = 9898,
  [SMALL_STATE(300)] = 9905,
  [SMALL_STATE(301)] = 9912,
  [SMALL_STATE(302)] = 9919,
  [SMALL_STATE(303)] = 9926,
  [SMALL_STATE(304)] = 9933,
  [SMALL_STATE(305)] = 9940,
  [SMALL_STATE(306)] = 9947,
  [SMALL_STATE(307)] = 9954,
  [SMALL_STATE(308)] = 9961,
  [SMALL_STATE(309)] = 9968,
  [SMALL_STATE(310)] = 9975,
  [SMALL_STATE(311)] = 9982,
  [SMALL_STATE(312)] = 9989,
  [SMALL_STATE(313)] = 9996,
  [SMALL_STATE(314)] = 10003,
  [SMALL_STATE(315)] = 10010,
  [SMALL_STATE(316)] = 10017,
  [SMALL_STATE(317)] = 10024,
  [SMALL_STATE(318)] = 10031,
  [SMALL_STATE(319)] = 10038,
  [SMALL_STATE(320)] = 10045,
  [SMALL_STATE(321)] = 10052,
  [SMALL_STATE(322)] = 10059,
  [SMALL_STATE(323)] = 10066,
  [SMALL_STATE(324)] = 10073,
  [SMALL_STATE(325)] = 10080,
  [SMALL_STATE(326)] = 10087,
  [SMALL_STATE(327)] = 10094,
  [SMALL_STATE(328)] = 10101,
  [SMALL_STATE(329)] = 10108,
  [SMALL_STATE(330)] = 10115,
  [SMALL_STATE(331)] = 10122,
  [SMALL_STATE(332)] = 10129,
  [SMALL_STATE(333)] = 10136,
  [SMALL_STATE(334)] = 10143,
  [SMALL_STATE(335)] = 10150,
  [SMALL_STATE(336)] = 10157,
  [SMALL_STATE(337)] = 10164,
  [SMALL_STATE(338)] = 10171,
  [SMALL_STATE(339)] = 10178,
  [SMALL_STATE(340)] = 10185,
  [SMALL_STATE(341)] = 10192,
  [SMALL_STATE(342)] = 10199,
  [SMALL_STATE(343)] = 10206,
  [SMALL_STATE(344)] = 10213,
  [SMALL_STATE(345)] = 10220,
  [SMALL_STATE(346)] = 10227,
  [SMALL_STATE(347)] = 10234,
  [SMALL_STATE(348)] = 10241,
  [SMALL_STATE(349)] = 10248,
  [SMALL_STATE(350)] = 10255,
  [SMALL_STATE(351)] = 10262,
  [SMALL_STATE(352)] = 10269,
  [SMALL_STATE(353)] = 10276,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(29),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(275),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(29),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(257),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(258),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(256),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(278),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(349),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(106),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(261),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(108),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(347),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(346),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(14),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(286),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1, .production_id = 1),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1, .production_id = 1),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2, .production_id = 3),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2, .production_id = 3),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statements, 2),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 6),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 6),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 6), SHIFT_REPEAT(52),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 6), SHIFT_REPEAT(310),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 6), SHIFT_REPEAT(51),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 6), SHIFT_REPEAT(3),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 6), SHIFT_REPEAT(26),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 6), SHIFT_REPEAT(285),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 6), SHIFT_REPEAT(73),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 6), SHIFT_REPEAT(47),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statements, 3),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3, .production_id = 11),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3, .production_id = 11),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 6), SHIFT_REPEAT(104),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 6), SHIFT_REPEAT(335),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 6), SHIFT_REPEAT(53),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 6), SHIFT_REPEAT(5),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 6), SHIFT_REPEAT(17),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 6), SHIFT_REPEAT(274),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 6), SHIFT_REPEAT(136),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 6), SHIFT_REPEAT(136),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 6), SHIFT_REPEAT(104),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 6), SHIFT_REPEAT(48),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__assignment_repeat1, 2),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__assignment_repeat1, 2),
  [212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__assignment_repeat1, 2), SHIFT_REPEAT(143),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__assignment_repeat1, 2), SHIFT_REPEAT(57),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__assignment_repeat1, 2), SHIFT_REPEAT(12),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__assignment_repeat1, 2), SHIFT_REPEAT(7),
  [224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__assignment_repeat1, 2), SHIFT_REPEAT(272),
  [227] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__assignment_repeat1, 2), SHIFT_REPEAT(155),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__assignment_repeat1, 2), SHIFT_REPEAT(56),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__assignment, 3, .production_id = 9),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__assignment, 3, .production_id = 9),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indexing, 2),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indexing, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_wildcard_repeat1, 2),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_wildcard_repeat1, 2),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_wildcard_repeat1, 2), SHIFT_REPEAT(121),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 4),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 4),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__assignment_repeat2, 2),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__assignment_repeat2, 2),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__assignment_repeat2, 2), SHIFT_REPEAT(97),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 1, .production_id = 2),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 1, .production_id = 2),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard, 1),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wildcard, 1),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard, 2),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wildcard, 2),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_wildcard_repeat1, 3, .production_id = 14),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_wildcard_repeat1, 3, .production_id = 14),
  [359] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pipeline_repeat1, 2), SHIFT_REPEAT(36),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pipeline_repeat1, 2), SHIFT_REPEAT(36),
  [365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pipeline_repeat1, 2), SHIFT_REPEAT(18),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pipeline_repeat1, 2), SHIFT_REPEAT(289),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_capture, 3, .production_id = 8),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_capture, 3, .production_id = 8),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 2),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__assignment_repeat2, 3, .production_id = 15),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__assignment_repeat2, 3, .production_id = 15),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 3),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 3),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 4, .production_id = 13),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 4, .production_id = 13),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_braced_list, 2),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_braced_list, 2),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_braced_list, 3),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_braced_list, 3),
  [407] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__assignment_repeat1, 2), SHIFT_REPEAT(153),
  [410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__assignment_repeat1, 2), SHIFT_REPEAT(54),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__assignment_repeat1, 2), SHIFT_REPEAT(6),
  [416] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__assignment_repeat1, 2), SHIFT_REPEAT(2),
  [419] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__assignment_repeat1, 2), SHIFT_REPEAT(283),
  [422] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__assignment_repeat1, 2), SHIFT_REPEAT(176),
  [425] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__assignment_repeat1, 2), SHIFT_REPEAT(176),
  [428] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__assignment_repeat1, 2), SHIFT_REPEAT(153),
  [431] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__assignment_repeat1, 2), SHIFT_REPEAT(45),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exception_capture, 3, .production_id = 8),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exception_capture, 3, .production_id = 8),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pipeline_repeat1, 2),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pipeline_repeat1, 2),
  [488] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_wildcard_repeat1, 2), SHIFT_REPEAT(109),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [557] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__assignment_repeat2, 2), SHIFT_REPEAT(98),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__assignment_repeat1, 1),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__assignment_repeat1, 1),
  [584] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_wildcard_repeat1, 2), SHIFT_REPEAT(115),
  [587] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__assignment_repeat2, 2), SHIFT_REPEAT(94),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [594] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_wildcard_repeat1, 2), SHIFT_REPEAT(118),
  [597] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__assignment_repeat2, 2), SHIFT_REPEAT(95),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try, 4, .production_id = 13),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_try, 4, .production_id = 13),
  [604] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [606] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [608] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__assignment_repeat3, 3),
  [612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__assignment_repeat3, 3),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__assignment_repeat3, 2),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__assignment_repeat3, 2),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 6, .production_id = 16),
  [622] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 6, .production_id = 16),
  [624] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [626] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__assignment_repeat2, 2), SHIFT_REPEAT(99),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 5, .production_id = 16),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 5, .production_id = 16),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__assignment_repeat3, 1),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__assignment_repeat3, 1),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_repeat1, 2),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_repeat1, 2),
  [641] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(116),
  [644] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__assignment_repeat3, 2), SHIFT_REPEAT(184),
  [647] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__assignment_repeat3, 2), SHIFT_REPEAT(340),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__assignment, 1, .production_id = 4),
  [652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [654] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__assignment, 1, .production_id = 4),
  [656] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [658] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try, 5, .production_id = 13),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_try, 5, .production_id = 13),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirection, 2, .production_id = 5),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redirection, 2, .production_id = 5),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2, .production_id = 1),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2, .production_id = 1),
  [672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3, .production_id = 3),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3, .production_id = 3),
  [678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2),
  [682] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 2),
  [684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_catch, 5, .production_id = 19),
  [688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_catch, 5, .production_id = 19),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try, 6, .production_id = 13),
  [692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_try, 6, .production_id = 13),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_deletion_repeat1, 2),
  [696] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_deletion_repeat1, 2), SHIFT_REPEAT(197),
  [699] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_deletion_repeat1, 2),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirection, 2),
  [703] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redirection, 2),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_deletion, 2),
  [707] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [709] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_deletion, 2),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elif, 5, .production_id = 16),
  [713] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elif, 5, .production_id = 16),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while, 5, .production_id = 16),
  [717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while, 5, .production_id = 16),
  [719] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for, 6, .production_id = 18),
  [723] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for, 6, .production_id = 18),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statements, 1),
  [727] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [731] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [733] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statements, 1),
  [735] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, .production_id = 12), SHIFT_REPEAT(247),
  [738] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, .production_id = 12), SHIFT_REPEAT(298),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, .production_id = 12),
  [743] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, .production_id = 12), SHIFT_REPEAT(296),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [750] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_wildcard_repeat1, 2), SHIFT_REPEAT(114),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3, .production_id = 1),
  [755] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3, .production_id = 1),
  [757] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__assignment_repeat2, 2), SHIFT_REPEAT(96),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4, .production_id = 3),
  [770] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 4, .production_id = 3),
  [772] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [776] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statements, 2),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 2),
  [780] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipeline, 2),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else, 4, .production_id = 13),
  [784] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else, 4, .production_id = 13),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_temporary_assignment, 2),
  [788] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_temporary_assignment, 2),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3),
  [792] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 3),
  [796] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 3),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_finally, 4, .production_id = 13),
  [800] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_finally, 4, .production_id = 13),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 2),
  [804] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 2),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try, 7, .production_id = 13),
  [808] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_try, 7, .production_id = 13),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for, 7, .production_id = 18),
  [812] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for, 7, .production_id = 18),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 7, .production_id = 16),
  [816] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 7, .production_id = 16),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 2),
  [820] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 2),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while, 6, .production_id = 16),
  [824] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while, 6, .production_id = 16),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 4, .production_id = 17),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 1, .production_id = 7),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [840] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2), SHIFT_REPEAT(311),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, .production_id = 10),
  [851] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [891] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [893] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [897] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [899] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [1003] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_elvish(void) {
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
