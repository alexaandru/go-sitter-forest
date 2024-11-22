#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 398
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 131
#define ALIAS_COUNT 4
#define TOKEN_COUNT 67
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 22

enum ts_symbol_identifiers {
  aux_sym_source_file_token1 = 1,
  aux_sym_settings_section_token1 = 2,
  aux_sym_settings_section_token2 = 3,
  aux_sym_setting_name_token1 = 4,
  aux_sym_setting_name_token2 = 5,
  aux_sym_setting_name_token3 = 6,
  aux_sym_setting_name_token4 = 7,
  aux_sym_setting_name_token5 = 8,
  aux_sym_setting_name_token6 = 9,
  aux_sym_setting_name_token7 = 10,
  aux_sym_setting_name_token8 = 11,
  aux_sym_setting_name_token9 = 12,
  aux_sym_setting_name_token10 = 13,
  aux_sym_setting_name_token11 = 14,
  aux_sym_setting_name_token12 = 15,
  aux_sym_setting_name_token13 = 16,
  aux_sym_setting_name_token14 = 17,
  aux_sym_setting_name_token15 = 18,
  aux_sym_setting_name_token16 = 19,
  aux_sym_setting_name_token17 = 20,
  aux_sym_variables_section_token1 = 21,
  anon_sym_DOLLAR_LBRACE = 22,
  anon_sym_RBRACE = 23,
  anon_sym_EQ = 24,
  anon_sym_EQ2 = 25,
  aux_sym_keywords_section_token1 = 26,
  anon_sym_LBRACK = 27,
  anon_sym_SPACE = 28,
  anon_sym_RBRACK = 29,
  aux_sym_keyword_setting_name_token1 = 30,
  aux_sym_keyword_setting_name_token2 = 31,
  aux_sym_keyword_setting_name_token3 = 32,
  aux_sym_keyword_setting_name_token4 = 33,
  aux_sym_keyword_setting_name_token5 = 34,
  aux_sym_test_cases_section_token1 = 35,
  aux_sym_test_case_setting_name_token1 = 36,
  aux_sym_test_case_setting_name_token2 = 37,
  anon_sym_RETURN = 38,
  sym_keyword = 39,
  anon_sym_IF = 40,
  anon_sym_END = 41,
  anon_sym_ELSEIF = 42,
  anon_sym_ELSE = 43,
  anon_sym_TRY = 44,
  anon_sym_EXCEPT = 45,
  anon_sym_FINALLY = 46,
  anon_sym_WHILE = 47,
  anon_sym_FOR = 48,
  anon_sym_IN = 49,
  anon_sym_INRANGE = 50,
  anon_sym_INENUMERATE = 51,
  anon_sym_INZIP = 52,
  sym_continue_statement = 53,
  sym_break_statement = 54,
  sym_ellipses = 55,
  anon_sym_AT_LBRACE = 56,
  anon_sym_AMP_LBRACE = 57,
  anon_sym_DOLLAR_LBRACE_LBRACE = 58,
  aux_sym_inline_python_expression_token1 = 59,
  anon_sym_RBRACE_RBRACE = 60,
  sym_variable_name = 61,
  sym_text_chunk = 62,
  sym_comment = 63,
  sym__separator = 64,
  sym__line_break = 65,
  aux_sym__empty_line_token1 = 66,
  sym_source_file = 67,
  sym_section = 68,
  sym_settings_section = 69,
  sym_setting_statement = 70,
  sym_setting_name = 71,
  sym_variables_section = 72,
  sym_variable_definition = 73,
  sym_keywords_section = 74,
  sym_keyword_definition = 75,
  sym_keyword_definition_body = 76,
  sym_keyword_setting = 77,
  sym_keyword_setting_name = 78,
  sym_test_cases_section = 79,
  sym_test_case_definition = 80,
  sym_test_case_definition_body = 81,
  sym_test_case_setting = 82,
  sym_test_case_setting_name = 83,
  sym_statement = 84,
  sym_return_statement = 85,
  sym_variable_assignment = 86,
  sym_keyword_invocation = 87,
  sym_if_statement = 88,
  sym_elseif_statement = 89,
  sym_else_statement = 90,
  sym_inline_if_statement = 91,
  sym_block = 92,
  sym_inline_elseif_statement = 93,
  sym_inline_else_statement = 94,
  sym_inline_statement = 95,
  sym_try_statement = 96,
  sym_except_statement = 97,
  sym_finally_statement = 98,
  sym_while_statement = 99,
  sym_for_statement = 100,
  sym__for_in = 101,
  sym__for_in_range = 102,
  sym__for_in_enumerate = 103,
  sym__for_in_zip = 104,
  sym_arguments = 105,
  sym_arguments_without_continuation = 106,
  sym_continuation = 107,
  sym_argument = 108,
  sym_scalar_variable = 109,
  sym_list_variable = 110,
  sym_dictionary_variable = 111,
  sym_inline_python_expression = 112,
  sym__indentation = 113,
  sym__empty_line = 114,
  aux_sym_source_file_repeat1 = 115,
  aux_sym_settings_section_repeat1 = 116,
  aux_sym_variables_section_repeat1 = 117,
  aux_sym_keywords_section_repeat1 = 118,
  aux_sym_keyword_definition_body_repeat1 = 119,
  aux_sym_test_cases_section_repeat1 = 120,
  aux_sym_test_case_definition_body_repeat1 = 121,
  aux_sym_if_statement_repeat1 = 122,
  aux_sym_inline_if_statement_repeat1 = 123,
  aux_sym_block_repeat1 = 124,
  aux_sym_try_statement_repeat1 = 125,
  aux_sym_for_statement_repeat1 = 126,
  aux_sym_arguments_repeat1 = 127,
  aux_sym_arguments_repeat2 = 128,
  aux_sym_argument_repeat1 = 129,
  aux_sym_inline_python_expression_repeat1 = 130,
  alias_sym_name = 131,
  alias_sym_python_expression = 132,
  alias_sym_return_value = 133,
  alias_sym_variable_list = 134,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_source_file_token1] = "source_file_token1",
  [aux_sym_settings_section_token1] = "section_header",
  [aux_sym_settings_section_token2] = "extra_text",
  [aux_sym_setting_name_token1] = "setting_name_token1",
  [aux_sym_setting_name_token2] = "setting_name_token2",
  [aux_sym_setting_name_token3] = "setting_name_token3",
  [aux_sym_setting_name_token4] = "setting_name_token4",
  [aux_sym_setting_name_token5] = "setting_name_token5",
  [aux_sym_setting_name_token6] = "setting_name_token6",
  [aux_sym_setting_name_token7] = "setting_name_token7",
  [aux_sym_setting_name_token8] = "setting_name_token8",
  [aux_sym_setting_name_token9] = "setting_name_token9",
  [aux_sym_setting_name_token10] = "setting_name_token10",
  [aux_sym_setting_name_token11] = "setting_name_token11",
  [aux_sym_setting_name_token12] = "setting_name_token12",
  [aux_sym_setting_name_token13] = "setting_name_token13",
  [aux_sym_setting_name_token14] = "setting_name_token14",
  [aux_sym_setting_name_token15] = "setting_name_token15",
  [aux_sym_setting_name_token16] = "setting_name_token16",
  [aux_sym_setting_name_token17] = "setting_name_token17",
  [aux_sym_variables_section_token1] = "section_header",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_RBRACE] = "}",
  [anon_sym_EQ] = "=",
  [anon_sym_EQ2] = " =",
  [aux_sym_keywords_section_token1] = "section_header",
  [anon_sym_LBRACK] = "[",
  [anon_sym_SPACE] = " ",
  [anon_sym_RBRACK] = "]",
  [aux_sym_keyword_setting_name_token1] = "keyword_setting_name_token1",
  [aux_sym_keyword_setting_name_token2] = "keyword_setting_name_token2",
  [aux_sym_keyword_setting_name_token3] = "keyword_setting_name_token3",
  [aux_sym_keyword_setting_name_token4] = "keyword_setting_name_token4",
  [aux_sym_keyword_setting_name_token5] = "keyword_setting_name_token5",
  [aux_sym_test_cases_section_token1] = "section_header",
  [aux_sym_test_case_setting_name_token1] = "test_case_setting_name_token1",
  [aux_sym_test_case_setting_name_token2] = "test_case_setting_name_token2",
  [anon_sym_RETURN] = "RETURN",
  [sym_keyword] = "keyword",
  [anon_sym_IF] = "IF",
  [anon_sym_END] = "END",
  [anon_sym_ELSEIF] = "ELSE IF",
  [anon_sym_ELSE] = "ELSE",
  [anon_sym_TRY] = "TRY",
  [anon_sym_EXCEPT] = "EXCEPT",
  [anon_sym_FINALLY] = "FINALLY",
  [anon_sym_WHILE] = "WHILE",
  [anon_sym_FOR] = "FOR",
  [anon_sym_IN] = "IN",
  [anon_sym_INRANGE] = "IN RANGE",
  [anon_sym_INENUMERATE] = "IN ENUMERATE",
  [anon_sym_INZIP] = "IN ZIP",
  [sym_continue_statement] = "continue_statement",
  [sym_break_statement] = "break_statement",
  [sym_ellipses] = "ellipses",
  [anon_sym_AT_LBRACE] = "@{",
  [anon_sym_AMP_LBRACE] = "&{",
  [anon_sym_DOLLAR_LBRACE_LBRACE] = "${{",
  [aux_sym_inline_python_expression_token1] = "inline_python_expression_token1",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [sym_variable_name] = "variable_name",
  [sym_text_chunk] = "text_chunk",
  [sym_comment] = "comment",
  [sym__separator] = "_separator",
  [sym__line_break] = "_line_break",
  [aux_sym__empty_line_token1] = "_empty_line_token1",
  [sym_source_file] = "source_file",
  [sym_section] = "section",
  [sym_settings_section] = "settings_section",
  [sym_setting_statement] = "setting_statement",
  [sym_setting_name] = "setting_name",
  [sym_variables_section] = "variables_section",
  [sym_variable_definition] = "variable_definition",
  [sym_keywords_section] = "keywords_section",
  [sym_keyword_definition] = "keyword_definition",
  [sym_keyword_definition_body] = "body",
  [sym_keyword_setting] = "keyword_setting",
  [sym_keyword_setting_name] = "keyword_setting_name",
  [sym_test_cases_section] = "test_cases_section",
  [sym_test_case_definition] = "test_case_definition",
  [sym_test_case_definition_body] = "body",
  [sym_test_case_setting] = "test_case_setting",
  [sym_test_case_setting_name] = "test_case_setting_name",
  [sym_statement] = "statement",
  [sym_return_statement] = "return_statement",
  [sym_variable_assignment] = "variable_assignment",
  [sym_keyword_invocation] = "keyword_invocation",
  [sym_if_statement] = "if_statement",
  [sym_elseif_statement] = "elseif_statement",
  [sym_else_statement] = "else_statement",
  [sym_inline_if_statement] = "inline_if_statement",
  [sym_block] = "block",
  [sym_inline_elseif_statement] = "inline_elseif_statement",
  [sym_inline_else_statement] = "inline_else_statement",
  [sym_inline_statement] = "inline_statement",
  [sym_try_statement] = "try_statement",
  [sym_except_statement] = "except_statement",
  [sym_finally_statement] = "finally_statement",
  [sym_while_statement] = "while_statement",
  [sym_for_statement] = "for_statement",
  [sym__for_in] = "in",
  [sym__for_in_range] = "in_range",
  [sym__for_in_enumerate] = "in_enumerate",
  [sym__for_in_zip] = "in_zip",
  [sym_arguments] = "arguments",
  [sym_arguments_without_continuation] = "arguments",
  [sym_continuation] = "continuation",
  [sym_argument] = "argument",
  [sym_scalar_variable] = "scalar_variable",
  [sym_list_variable] = "list_variable",
  [sym_dictionary_variable] = "dictionary_variable",
  [sym_inline_python_expression] = "inline_python_expression",
  [sym__indentation] = "_indentation",
  [sym__empty_line] = "_empty_line",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_settings_section_repeat1] = "settings_section_repeat1",
  [aux_sym_variables_section_repeat1] = "variables_section_repeat1",
  [aux_sym_keywords_section_repeat1] = "keywords_section_repeat1",
  [aux_sym_keyword_definition_body_repeat1] = "keyword_definition_body_repeat1",
  [aux_sym_test_cases_section_repeat1] = "test_cases_section_repeat1",
  [aux_sym_test_case_definition_body_repeat1] = "test_case_definition_body_repeat1",
  [aux_sym_if_statement_repeat1] = "if_statement_repeat1",
  [aux_sym_inline_if_statement_repeat1] = "inline_if_statement_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_try_statement_repeat1] = "try_statement_repeat1",
  [aux_sym_for_statement_repeat1] = "for_statement_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym_arguments_repeat2] = "arguments_repeat2",
  [aux_sym_argument_repeat1] = "argument_repeat1",
  [aux_sym_inline_python_expression_repeat1] = "inline_python_expression_repeat1",
  [alias_sym_name] = "name",
  [alias_sym_python_expression] = "python_expression",
  [alias_sym_return_value] = "return_value",
  [alias_sym_variable_list] = "variable_list",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_source_file_token1] = aux_sym_source_file_token1,
  [aux_sym_settings_section_token1] = aux_sym_settings_section_token1,
  [aux_sym_settings_section_token2] = aux_sym_settings_section_token2,
  [aux_sym_setting_name_token1] = aux_sym_setting_name_token1,
  [aux_sym_setting_name_token2] = aux_sym_setting_name_token2,
  [aux_sym_setting_name_token3] = aux_sym_setting_name_token3,
  [aux_sym_setting_name_token4] = aux_sym_setting_name_token4,
  [aux_sym_setting_name_token5] = aux_sym_setting_name_token5,
  [aux_sym_setting_name_token6] = aux_sym_setting_name_token6,
  [aux_sym_setting_name_token7] = aux_sym_setting_name_token7,
  [aux_sym_setting_name_token8] = aux_sym_setting_name_token8,
  [aux_sym_setting_name_token9] = aux_sym_setting_name_token9,
  [aux_sym_setting_name_token10] = aux_sym_setting_name_token10,
  [aux_sym_setting_name_token11] = aux_sym_setting_name_token11,
  [aux_sym_setting_name_token12] = aux_sym_setting_name_token12,
  [aux_sym_setting_name_token13] = aux_sym_setting_name_token13,
  [aux_sym_setting_name_token14] = aux_sym_setting_name_token14,
  [aux_sym_setting_name_token15] = aux_sym_setting_name_token15,
  [aux_sym_setting_name_token16] = aux_sym_setting_name_token16,
  [aux_sym_setting_name_token17] = aux_sym_setting_name_token17,
  [aux_sym_variables_section_token1] = aux_sym_settings_section_token1,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_EQ2] = anon_sym_EQ2,
  [aux_sym_keywords_section_token1] = aux_sym_settings_section_token1,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_SPACE] = anon_sym_SPACE,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_keyword_setting_name_token1] = aux_sym_keyword_setting_name_token1,
  [aux_sym_keyword_setting_name_token2] = aux_sym_keyword_setting_name_token2,
  [aux_sym_keyword_setting_name_token3] = aux_sym_keyword_setting_name_token3,
  [aux_sym_keyword_setting_name_token4] = aux_sym_keyword_setting_name_token4,
  [aux_sym_keyword_setting_name_token5] = aux_sym_keyword_setting_name_token5,
  [aux_sym_test_cases_section_token1] = aux_sym_settings_section_token1,
  [aux_sym_test_case_setting_name_token1] = aux_sym_test_case_setting_name_token1,
  [aux_sym_test_case_setting_name_token2] = aux_sym_test_case_setting_name_token2,
  [anon_sym_RETURN] = anon_sym_RETURN,
  [sym_keyword] = sym_keyword,
  [anon_sym_IF] = anon_sym_IF,
  [anon_sym_END] = anon_sym_END,
  [anon_sym_ELSEIF] = anon_sym_ELSEIF,
  [anon_sym_ELSE] = anon_sym_ELSE,
  [anon_sym_TRY] = anon_sym_TRY,
  [anon_sym_EXCEPT] = anon_sym_EXCEPT,
  [anon_sym_FINALLY] = anon_sym_FINALLY,
  [anon_sym_WHILE] = anon_sym_WHILE,
  [anon_sym_FOR] = anon_sym_FOR,
  [anon_sym_IN] = anon_sym_IN,
  [anon_sym_INRANGE] = anon_sym_INRANGE,
  [anon_sym_INENUMERATE] = anon_sym_INENUMERATE,
  [anon_sym_INZIP] = anon_sym_INZIP,
  [sym_continue_statement] = sym_continue_statement,
  [sym_break_statement] = sym_break_statement,
  [sym_ellipses] = sym_ellipses,
  [anon_sym_AT_LBRACE] = anon_sym_AT_LBRACE,
  [anon_sym_AMP_LBRACE] = anon_sym_AMP_LBRACE,
  [anon_sym_DOLLAR_LBRACE_LBRACE] = anon_sym_DOLLAR_LBRACE_LBRACE,
  [aux_sym_inline_python_expression_token1] = aux_sym_inline_python_expression_token1,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [sym_variable_name] = sym_variable_name,
  [sym_text_chunk] = sym_text_chunk,
  [sym_comment] = sym_comment,
  [sym__separator] = sym__separator,
  [sym__line_break] = sym__line_break,
  [aux_sym__empty_line_token1] = aux_sym__empty_line_token1,
  [sym_source_file] = sym_source_file,
  [sym_section] = sym_section,
  [sym_settings_section] = sym_settings_section,
  [sym_setting_statement] = sym_setting_statement,
  [sym_setting_name] = sym_setting_name,
  [sym_variables_section] = sym_variables_section,
  [sym_variable_definition] = sym_variable_definition,
  [sym_keywords_section] = sym_keywords_section,
  [sym_keyword_definition] = sym_keyword_definition,
  [sym_keyword_definition_body] = sym_keyword_definition_body,
  [sym_keyword_setting] = sym_keyword_setting,
  [sym_keyword_setting_name] = sym_keyword_setting_name,
  [sym_test_cases_section] = sym_test_cases_section,
  [sym_test_case_definition] = sym_test_case_definition,
  [sym_test_case_definition_body] = sym_keyword_definition_body,
  [sym_test_case_setting] = sym_test_case_setting,
  [sym_test_case_setting_name] = sym_test_case_setting_name,
  [sym_statement] = sym_statement,
  [sym_return_statement] = sym_return_statement,
  [sym_variable_assignment] = sym_variable_assignment,
  [sym_keyword_invocation] = sym_keyword_invocation,
  [sym_if_statement] = sym_if_statement,
  [sym_elseif_statement] = sym_elseif_statement,
  [sym_else_statement] = sym_else_statement,
  [sym_inline_if_statement] = sym_inline_if_statement,
  [sym_block] = sym_block,
  [sym_inline_elseif_statement] = sym_inline_elseif_statement,
  [sym_inline_else_statement] = sym_inline_else_statement,
  [sym_inline_statement] = sym_inline_statement,
  [sym_try_statement] = sym_try_statement,
  [sym_except_statement] = sym_except_statement,
  [sym_finally_statement] = sym_finally_statement,
  [sym_while_statement] = sym_while_statement,
  [sym_for_statement] = sym_for_statement,
  [sym__for_in] = sym__for_in,
  [sym__for_in_range] = sym__for_in_range,
  [sym__for_in_enumerate] = sym__for_in_enumerate,
  [sym__for_in_zip] = sym__for_in_zip,
  [sym_arguments] = sym_arguments,
  [sym_arguments_without_continuation] = sym_arguments,
  [sym_continuation] = sym_continuation,
  [sym_argument] = sym_argument,
  [sym_scalar_variable] = sym_scalar_variable,
  [sym_list_variable] = sym_list_variable,
  [sym_dictionary_variable] = sym_dictionary_variable,
  [sym_inline_python_expression] = sym_inline_python_expression,
  [sym__indentation] = sym__indentation,
  [sym__empty_line] = sym__empty_line,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_settings_section_repeat1] = aux_sym_settings_section_repeat1,
  [aux_sym_variables_section_repeat1] = aux_sym_variables_section_repeat1,
  [aux_sym_keywords_section_repeat1] = aux_sym_keywords_section_repeat1,
  [aux_sym_keyword_definition_body_repeat1] = aux_sym_keyword_definition_body_repeat1,
  [aux_sym_test_cases_section_repeat1] = aux_sym_test_cases_section_repeat1,
  [aux_sym_test_case_definition_body_repeat1] = aux_sym_test_case_definition_body_repeat1,
  [aux_sym_if_statement_repeat1] = aux_sym_if_statement_repeat1,
  [aux_sym_inline_if_statement_repeat1] = aux_sym_inline_if_statement_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_try_statement_repeat1] = aux_sym_try_statement_repeat1,
  [aux_sym_for_statement_repeat1] = aux_sym_for_statement_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
  [aux_sym_arguments_repeat2] = aux_sym_arguments_repeat2,
  [aux_sym_argument_repeat1] = aux_sym_argument_repeat1,
  [aux_sym_inline_python_expression_repeat1] = aux_sym_inline_python_expression_repeat1,
  [alias_sym_name] = alias_sym_name,
  [alias_sym_python_expression] = alias_sym_python_expression,
  [alias_sym_return_value] = alias_sym_return_value,
  [alias_sym_variable_list] = alias_sym_variable_list,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_settings_section_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_settings_section_token2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_setting_name_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_name_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_name_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_name_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_name_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_name_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_name_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_name_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_name_token9] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_name_token10] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_name_token11] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_name_token12] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_name_token13] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_name_token14] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_name_token15] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_name_token16] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_name_token17] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variables_section_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_keywords_section_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SPACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_keyword_setting_name_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_setting_name_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_setting_name_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_setting_name_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_setting_name_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_test_cases_section_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_test_case_setting_name_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_test_case_setting_name_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RETURN] = {
    .visible = true,
    .named = false,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_IF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_END] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ELSEIF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ELSE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TRY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EXCEPT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FINALLY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WHILE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FOR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INRANGE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INENUMERATE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INZIP] = {
    .visible = true,
    .named = false,
  },
  [sym_continue_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_break_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_ellipses] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AT_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_inline_python_expression_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_variable_name] = {
    .visible = true,
    .named = true,
  },
  [sym_text_chunk] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__separator] = {
    .visible = false,
    .named = true,
  },
  [sym__line_break] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__empty_line_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_section] = {
    .visible = true,
    .named = true,
  },
  [sym_settings_section] = {
    .visible = true,
    .named = true,
  },
  [sym_setting_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_setting_name] = {
    .visible = true,
    .named = true,
  },
  [sym_variables_section] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_keywords_section] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_definition_body] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_setting] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_setting_name] = {
    .visible = true,
    .named = true,
  },
  [sym_test_cases_section] = {
    .visible = true,
    .named = true,
  },
  [sym_test_case_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_test_case_definition_body] = {
    .visible = true,
    .named = true,
  },
  [sym_test_case_setting] = {
    .visible = true,
    .named = true,
  },
  [sym_test_case_setting_name] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_invocation] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_elseif_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_else_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_elseif_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_else_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_try_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_except_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_finally_statement] = {
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
  [sym__for_in] = {
    .visible = true,
    .named = true,
  },
  [sym__for_in_range] = {
    .visible = true,
    .named = true,
  },
  [sym__for_in_enumerate] = {
    .visible = true,
    .named = true,
  },
  [sym__for_in_zip] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments_without_continuation] = {
    .visible = true,
    .named = true,
  },
  [sym_continuation] = {
    .visible = true,
    .named = true,
  },
  [sym_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_scalar_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_list_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_dictionary_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_python_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__indentation] = {
    .visible = false,
    .named = true,
  },
  [sym__empty_line] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_settings_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variables_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keywords_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_definition_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_test_cases_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_test_case_definition_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_inline_if_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_try_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_for_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_inline_python_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_python_expression] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_return_value] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_variable_list] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_alternative = 1,
  field_body = 2,
  field_condition = 3,
  field_consequence = 4,
  field_left = 5,
  field_name = 6,
  field_right = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_body] = "body",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_left] = "left",
  [field_name] = "name",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [5] = {.index = 1, .length = 1},
  [6] = {.index = 2, .length = 1},
  [7] = {.index = 3, .length = 1},
  [8] = {.index = 4, .length = 1},
  [9] = {.index = 5, .length = 1},
  [10] = {.index = 6, .length = 2},
  [11] = {.index = 8, .length = 1},
  [12] = {.index = 9, .length = 2},
  [13] = {.index = 11, .length = 2},
  [14] = {.index = 13, .length = 2},
  [15] = {.index = 15, .length = 2},
  [16] = {.index = 17, .length = 3},
  [17] = {.index = 20, .length = 3},
  [18] = {.index = 23, .length = 3},
  [19] = {.index = 26, .length = 3},
  [20] = {.index = 29, .length = 4},
  [21] = {.index = 33, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_name, 1},
  [2] =
    {field_name, 2},
  [3] =
    {field_alternative, 0},
  [4] =
    {field_condition, 1},
  [5] =
    {field_condition, 2},
  [6] =
    {field_alternative, 0, .inherited = true},
    {field_alternative, 1, .inherited = true},
  [8] =
    {field_consequence, 3},
  [9] =
    {field_body, 3},
    {field_condition, 1},
  [11] =
    {field_alternative, 4},
    {field_condition, 2},
  [13] =
    {field_condition, 2},
    {field_consequence, 4},
  [15] =
    {field_alternative, 4, .inherited = true},
    {field_condition, 2},
  [17] =
    {field_alternative, 5},
    {field_condition, 2},
    {field_consequence, 4},
  [20] =
    {field_alternative, 5, .inherited = true},
    {field_condition, 2},
    {field_consequence, 4},
  [23] =
    {field_alternative, 4, .inherited = true},
    {field_alternative, 5},
    {field_condition, 2},
  [26] =
    {field_body, 5},
    {field_left, 1},
    {field_right, 3},
  [29] =
    {field_alternative, 5, .inherited = true},
    {field_alternative, 6},
    {field_condition, 2},
    {field_consequence, 4},
  [33] =
    {field_condition, 3},
    {field_consequence, 5},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [2] = {
    [0] = alias_sym_name,
  },
  [3] = {
    [1] = alias_sym_python_expression,
  },
  [4] = {
    [2] = alias_sym_return_value,
  },
  [19] = {
    [1] = alias_sym_variable_list,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_argument, 2,
    sym_argument,
    alias_sym_return_value,
  aux_sym_for_statement_repeat1, 2,
    aux_sym_for_statement_repeat1,
    alias_sym_variable_list,
  aux_sym_inline_python_expression_repeat1, 2,
    aux_sym_inline_python_expression_repeat1,
    alias_sym_python_expression,
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
  [48] = 48,
  [49] = 49,
  [50] = 44,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 7,
  [56] = 56,
  [57] = 53,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 52,
  [67] = 51,
  [68] = 68,
  [69] = 7,
  [70] = 53,
  [71] = 61,
  [72] = 51,
  [73] = 52,
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
  [93] = 93,
  [94] = 94,
  [95] = 95,
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
  [114] = 87,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 115,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 119,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 108,
  [127] = 125,
  [128] = 106,
  [129] = 109,
  [130] = 116,
  [131] = 121,
  [132] = 132,
  [133] = 107,
  [134] = 103,
  [135] = 98,
  [136] = 111,
  [137] = 112,
  [138] = 113,
  [139] = 139,
  [140] = 108,
  [141] = 141,
  [142] = 109,
  [143] = 116,
  [144] = 119,
  [145] = 121,
  [146] = 103,
  [147] = 98,
  [148] = 112,
  [149] = 113,
  [150] = 106,
  [151] = 107,
  [152] = 111,
  [153] = 141,
  [154] = 141,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 155,
  [165] = 165,
  [166] = 166,
  [167] = 157,
  [168] = 168,
  [169] = 155,
  [170] = 157,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 165,
  [186] = 166,
  [187] = 187,
  [188] = 178,
  [189] = 189,
  [190] = 190,
  [191] = 163,
  [192] = 181,
  [193] = 193,
  [194] = 194,
  [195] = 189,
  [196] = 7,
  [197] = 190,
  [198] = 187,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 225,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 200,
  [246] = 232,
  [247] = 234,
  [248] = 248,
  [249] = 249,
  [250] = 249,
  [251] = 231,
  [252] = 209,
  [253] = 223,
  [254] = 254,
  [255] = 200,
  [256] = 232,
  [257] = 234,
  [258] = 258,
  [259] = 259,
  [260] = 231,
  [261] = 209,
  [262] = 223,
  [263] = 200,
  [264] = 231,
  [265] = 225,
  [266] = 240,
  [267] = 211,
  [268] = 225,
  [269] = 240,
  [270] = 211,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 106,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 107,
  [329] = 329,
  [330] = 330,
  [331] = 111,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 293,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 310,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 335,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 273,
  [357] = 339,
  [358] = 303,
  [359] = 272,
  [360] = 307,
  [361] = 293,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 335,
  [370] = 354,
  [371] = 354,
  [372] = 372,
  [373] = 273,
  [374] = 303,
  [375] = 272,
  [376] = 307,
  [377] = 293,
  [378] = 378,
  [379] = 379,
  [380] = 335,
  [381] = 303,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 309,
  [386] = 313,
  [387] = 319,
  [388] = 343,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 309,
  [393] = 313,
  [394] = 319,
  [395] = 395,
  [396] = 309,
  [397] = 397,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(338);
      ADVANCE_MAP(
        '\t', 586,
        '\n', 590,
        '\r', 15,
        ' ', 379,
        '#', 584,
        '$', 119,
        '&', 121,
        '*', 41,
        '.', 58,
        '=', 372,
        '@', 123,
        'B', 103,
        'C', 100,
        'E', 88,
        'F', 83,
        'I', 76,
        'R', 65,
        'T', 104,
        'W', 79,
        '[', 377,
        ']', 384,
        'f', 237,
        'r', 171,
        't', 131,
        '}', 371,
        'A', 255,
        'a', 255,
        'D', 172,
        'd', 172,
        'L', 208,
        'l', 208,
        'M', 173,
        'm', 173,
        'S', 181,
        's', 181,
        'V', 136,
        'v', 136,
        0x0b, 15,
        '\f', 15,
      );
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(586);
      if (lookahead == '\n') ADVANCE(590);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(592);
      if (lookahead == '#') ADVANCE(584);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(586);
      if (lookahead == '\n') ADVANCE(590);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '#') ADVANCE(584);
      if (lookahead == '=') ADVANCE(372);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(12);
      if (lookahead == '\n') ADVANCE(590);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(586);
      if (lookahead == '#') ADVANCE(584);
      if (lookahead == '=') ADVANCE(373);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(27);
      if (lookahead == ' ') ADVANCE(588);
      if (lookahead == '#') ADVANCE(584);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '\t', 27,
        ' ', 382,
        '#', 584,
        ']', 384,
        '}', 370,
        'A', 255,
        'a', 255,
        'D', 236,
        'd', 236,
        'R', 190,
        'r', 190,
        'S', 180,
        's', 180,
        'T', 138,
        't', 138,
      );
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '\t', 585,
        '\n', 589,
        '\r', 14,
        ' ', 378,
        '#', 581,
        '$', 120,
        '&', 122,
        '@', 124,
        '{', 126,
        0x0b, 14,
        '\f', 14,
      );
      if (lookahead != 0) ADVANCE(498);
      END_STATE();
    case 7:
      if (lookahead == '\t') ADVANCE(587);
      if (lookahead == ' ') ADVANCE(380);
      if (lookahead == '#') ADVANCE(581);
      if (lookahead == '$') ADVANCE(120);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\n' <= lookahead && lookahead <= '\r') ||
          lookahead == '{') ADVANCE(126);
      if (lookahead != 0) ADVANCE(498);
      END_STATE();
    case 8:
      if (lookahead == '\t') ADVANCE(588);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '#') ADVANCE(584);
      if (lookahead == '.') ADVANCE(58);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '\t', 11,
        '\n', 589,
        '\r', 14,
        ' ', 381,
        '#', 581,
        '$', 120,
        '{', 126,
        '&', 332,
        '@', 332,
        0x0b, 14,
        '\f', 14,
      );
      if (lookahead != 0) ADVANCE(498);
      END_STATE();
    case 10:
      if (lookahead == '\t') ADVANCE(482);
      if (lookahead == ' ') ADVANCE(383);
      if (lookahead == '#') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(483);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(590);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(584);
      if (lookahead == '{') ADVANCE(526);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(590);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(584);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(590);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(344);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(345);
      if (lookahead != 0) ADVANCE(347);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(590);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '{') ADVANCE(526);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(590);
      if (lookahead == '\r') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 16:
      ADVANCE_MAP(
        ' ', 215,
        'K', 174,
        'k', 174,
        'S', 188,
        's', 188,
        'T', 182,
        't', 182,
        'V', 156,
        'v', 156,
      );
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(279);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(283);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(162);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(50);
      if (lookahead == '*') ADVANCE(42);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(298);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(307);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(53);
      if (lookahead == '*') ADVANCE(43);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(55);
      if (lookahead == '*') ADVANCE(44);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(56);
      if (lookahead == '*') ADVANCE(47);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(281);
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(584);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '#') ADVANCE(584);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 29:
      ADVANCE_MAP(
        '#', 397,
        '$', 443,
        '.', 398,
        'B', 432,
        'C', 427,
        'F', 428,
        'I', 410,
        'R', 403,
        'T', 430,
        'W', 412,
        '[', 377,
        '\t', 396,
        ' ', 396,
      );
      if (lookahead != 0) ADVANCE(444);
      END_STATE();
    case 30:
      ADVANCE_MAP(
        '#', 397,
        '$', 443,
        'B', 432,
        'C', 427,
        'E', 417,
        'F', 414,
        'I', 410,
        'R', 403,
        'T', 430,
        'W', 412,
        '\t', 396,
        ' ', 396,
      );
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(444);
      END_STATE();
    case 31:
      ADVANCE_MAP(
        '#', 397,
        '$', 443,
        'B', 432,
        'C', 427,
        'E', 421,
        'F', 428,
        'I', 410,
        'R', 403,
        'T', 430,
        'W', 412,
        '\t', 396,
        ' ', 396,
      );
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(444);
      END_STATE();
    case 32:
      ADVANCE_MAP(
        '#', 397,
        '$', 443,
        'B', 432,
        'C', 427,
        'E', 422,
        'F', 428,
        'I', 410,
        'R', 403,
        'T', 430,
        'W', 412,
        '\t', 396,
        ' ', 396,
      );
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(444);
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(397);
      if (lookahead == '$') ADVANCE(443);
      if (lookahead == 'R') ADVANCE(403);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(444);
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(478);
      if (lookahead == '}') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(479);
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(481);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(483);
      END_STATE();
    case 36:
      if (lookahead == '*') ADVANCE(16);
      END_STATE();
    case 37:
      if (lookahead == '*') ADVANCE(374);
      END_STATE();
    case 38:
      if (lookahead == '*') ADVANCE(341);
      END_STATE();
    case 39:
      if (lookahead == '*') ADVANCE(365);
      END_STATE();
    case 40:
      if (lookahead == '*') ADVANCE(390);
      END_STATE();
    case 41:
      if (lookahead == '*') ADVANCE(36);
      END_STATE();
    case 42:
      if (lookahead == '*') ADVANCE(37);
      END_STATE();
    case 43:
      if (lookahead == '*') ADVANCE(38);
      END_STATE();
    case 44:
      if (lookahead == '*') ADVANCE(39);
      END_STATE();
    case 45:
      if (lookahead == '*') ADVANCE(531);
      if (lookahead == '{') ADVANCE(499);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 46:
      if (lookahead == '*') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 47:
      if (lookahead == '*') ADVANCE(40);
      END_STATE();
    case 48:
      if (lookahead == '*') ADVANCE(532);
      if (lookahead == '{') ADVANCE(499);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 49:
      if (lookahead == '*') ADVANCE(532);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 50:
      if (lookahead == '*') ADVANCE(42);
      END_STATE();
    case 51:
      if (lookahead == '*') ADVANCE(533);
      if (lookahead == '{') ADVANCE(499);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 52:
      if (lookahead == '*') ADVANCE(533);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 53:
      if (lookahead == '*') ADVANCE(43);
      END_STATE();
    case 54:
      if (lookahead == '*') ADVANCE(534);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 55:
      if (lookahead == '*') ADVANCE(44);
      END_STATE();
    case 56:
      if (lookahead == '*') ADVANCE(47);
      END_STATE();
    case 57:
      if (lookahead == '.') ADVANCE(473);
      END_STATE();
    case 58:
      if (lookahead == '.') ADVANCE(57);
      END_STATE();
    case 59:
      if (lookahead == 'A') ADVANCE(87);
      END_STATE();
    case 60:
      if (lookahead == 'A') ADVANCE(90);
      END_STATE();
    case 61:
      if (lookahead == 'A') ADVANCE(113);
      END_STATE();
    case 62:
      if (lookahead == 'A') ADVANCE(96);
      END_STATE();
    case 63:
      if (lookahead == 'C') ADVANCE(68);
      END_STATE();
    case 64:
      if (lookahead == 'D') ADVANCE(447);
      END_STATE();
    case 65:
      if (lookahead == 'E') ADVANCE(110);
      if (lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 66:
      if (lookahead == 'E') ADVANCE(59);
      END_STATE();
    case 67:
      if (lookahead == 'E') ADVANCE(454);
      END_STATE();
    case 68:
      if (lookahead == 'E') ADVANCE(102);
      END_STATE();
    case 69:
      if (lookahead == 'E') ADVANCE(461);
      END_STATE();
    case 70:
      if (lookahead == 'E') ADVANCE(469);
      END_STATE();
    case 71:
      if (lookahead == 'E') ADVANCE(466);
      END_STATE();
    case 72:
      if (lookahead == 'E') ADVANCE(467);
      END_STATE();
    case 73:
      if (lookahead == 'E') ADVANCE(451);
      END_STATE();
    case 74:
      if (lookahead == 'E') ADVANCE(107);
      END_STATE();
    case 75:
      if (lookahead == 'E') ADVANCE(95);
      if (lookahead == 'R') ADVANCE(62);
      if (lookahead == 'Z') ADVANCE(84);
      END_STATE();
    case 76:
      if (lookahead == 'F') ADVANCE(445);
      if (lookahead == 'N') ADVANCE(465);
      END_STATE();
    case 77:
      if (lookahead == 'F') ADVANCE(449);
      END_STATE();
    case 78:
      if (lookahead == 'G') ADVANCE(71);
      END_STATE();
    case 79:
      if (lookahead == 'H') ADVANCE(80);
      END_STATE();
    case 80:
      if (lookahead == 'I') ADVANCE(91);
      END_STATE();
    case 81:
      if (lookahead == 'I') ADVANCE(77);
      END_STATE();
    case 82:
      if (lookahead == 'I') ADVANCE(98);
      END_STATE();
    case 83:
      if (lookahead == 'I') ADVANCE(98);
      if (lookahead == 'O') ADVANCE(105);
      if (lookahead == 'o') ADVANCE(258);
      END_STATE();
    case 84:
      if (lookahead == 'I') ADVANCE(101);
      END_STATE();
    case 85:
      if (lookahead == 'I') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 86:
      if (lookahead == 'I') ADVANCE(99);
      END_STATE();
    case 87:
      if (lookahead == 'K') ADVANCE(471);
      END_STATE();
    case 88:
      if (lookahead == 'L') ADVANCE(108);
      if (lookahead == 'N') ADVANCE(64);
      if (lookahead == 'X') ADVANCE(63);
      END_STATE();
    case 89:
      if (lookahead == 'L') ADVANCE(118);
      END_STATE();
    case 90:
      if (lookahead == 'L') ADVANCE(89);
      END_STATE();
    case 91:
      if (lookahead == 'L') ADVANCE(69);
      END_STATE();
    case 92:
      if (lookahead == 'L') ADVANCE(109);
      if (lookahead == 'N') ADVANCE(64);
      if (lookahead == 'X') ADVANCE(63);
      END_STATE();
    case 93:
      if (lookahead == 'M') ADVANCE(74);
      END_STATE();
    case 94:
      if (lookahead == 'N') ADVANCE(112);
      END_STATE();
    case 95:
      if (lookahead == 'N') ADVANCE(114);
      END_STATE();
    case 96:
      if (lookahead == 'N') ADVANCE(78);
      END_STATE();
    case 97:
      if (lookahead == 'N') ADVANCE(394);
      if (lookahead == 'n') ADVANCE(387);
      END_STATE();
    case 98:
      if (lookahead == 'N') ADVANCE(60);
      END_STATE();
    case 99:
      if (lookahead == 'N') ADVANCE(116);
      END_STATE();
    case 100:
      if (lookahead == 'O') ADVANCE(94);
      END_STATE();
    case 101:
      if (lookahead == 'P') ADVANCE(468);
      END_STATE();
    case 102:
      if (lookahead == 'P') ADVANCE(111);
      END_STATE();
    case 103:
      if (lookahead == 'R') ADVANCE(66);
      END_STATE();
    case 104:
      if (lookahead == 'R') ADVANCE(117);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(203);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(141);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(222);
      END_STATE();
    case 105:
      if (lookahead == 'R') ADVANCE(464);
      if (lookahead == 'r') ADVANCE(161);
      END_STATE();
    case 106:
      if (lookahead == 'R') ADVANCE(97);
      if (lookahead == 'r') ADVANCE(227);
      END_STATE();
    case 107:
      if (lookahead == 'R') ADVANCE(61);
      END_STATE();
    case 108:
      if (lookahead == 'S') ADVANCE(67);
      END_STATE();
    case 109:
      if (lookahead == 'S') ADVANCE(73);
      END_STATE();
    case 110:
      if (lookahead == 'T') ADVANCE(115);
      if (lookahead == 't') ADVANCE(316);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(242);
      END_STATE();
    case 111:
      if (lookahead == 'T') ADVANCE(457);
      END_STATE();
    case 112:
      if (lookahead == 'T') ADVANCE(86);
      END_STATE();
    case 113:
      if (lookahead == 'T') ADVANCE(72);
      END_STATE();
    case 114:
      if (lookahead == 'U') ADVANCE(93);
      END_STATE();
    case 115:
      if (lookahead == 'U') ADVANCE(106);
      if (lookahead == 'u') ADVANCE(257);
      END_STATE();
    case 116:
      if (lookahead == 'U') ADVANCE(70);
      END_STATE();
    case 117:
      if (lookahead == 'Y') ADVANCE(455);
      END_STATE();
    case 118:
      if (lookahead == 'Y') ADVANCE(459);
      END_STATE();
    case 119:
      if (lookahead == '{') ADVANCE(369);
      END_STATE();
    case 120:
      if (lookahead == '{') ADVANCE(369);
      if (lookahead != 0) ADVANCE(526);
      END_STATE();
    case 121:
      if (lookahead == '{') ADVANCE(475);
      END_STATE();
    case 122:
      if (lookahead == '{') ADVANCE(475);
      if (lookahead != 0) ADVANCE(526);
      END_STATE();
    case 123:
      if (lookahead == '{') ADVANCE(474);
      END_STATE();
    case 124:
      if (lookahead == '{') ADVANCE(474);
      if (lookahead != 0) ADVANCE(526);
      END_STATE();
    case 125:
      if (lookahead == '{') ADVANCE(368);
      END_STATE();
    case 126:
      if (lookahead == '{') ADVANCE(526);
      END_STATE();
    case 127:
      if (lookahead == '{') ADVANCE(499);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(538);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 128:
      ADVANCE_MAP(
        '{', 499,
        'K', 541,
        'k', 541,
        'S', 542,
        's', 542,
        'T', 543,
        't', 543,
        'V', 536,
        'v', 536,
        '$', 333,
        '&', 333,
        '@', 333,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 129:
      if (lookahead == '{') ADVANCE(499);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 130:
      if (lookahead == '{') ADVANCE(566);
      END_STATE();
    case 131:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(203);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(141);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(222);
      END_STATE();
    case 132:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(352);
      END_STATE();
    case 133:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(205);
      END_STATE();
    case 134:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(157);
      END_STATE();
    case 135:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(166);
      END_STATE();
    case 136:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(260);
      END_STATE();
    case 137:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(202);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(139);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(222);
      END_STATE();
    case 138:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(202);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(222);
      END_STATE();
    case 139:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(256);
      END_STATE();
    case 140:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(256);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(248);
      END_STATE();
    case 141:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(256);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(248);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(309);
      END_STATE();
    case 142:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(312);
      END_STATE();
    case 143:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(259);
      END_STATE();
    case 144:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(285);
      END_STATE();
    case 145:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(268);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(277);
      END_STATE();
    case 146:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(295);
      END_STATE();
    case 147:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(304);
      END_STATE();
    case 148:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(301);
      END_STATE();
    case 149:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(206);
      END_STATE();
    case 150:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(305);
      END_STATE();
    case 151:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(306);
      END_STATE();
    case 152:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(159);
      END_STATE();
    case 153:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(264);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(253);
      END_STATE();
    case 154:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(265);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(254);
      END_STATE();
    case 155:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(266);
      END_STATE();
    case 156:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(267);
      END_STATE();
    case 157:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(218);
      END_STATE();
    case 158:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(262);
      END_STATE();
    case 159:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(219);
      END_STATE();
    case 160:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(538);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 161:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(183);
      END_STATE();
    case 162:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(144);
      END_STATE();
    case 163:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(176);
      END_STATE();
    case 164:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(321);
      END_STATE();
    case 165:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(238);
      END_STATE();
    case 166:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(148);
      END_STATE();
    case 167:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(273);
      END_STATE();
    case 168:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(243);
      END_STATE();
    case 169:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(245);
      END_STATE();
    case 170:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(247);
      END_STATE();
    case 171:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 172:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(201);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(164);
      END_STATE();
    case 173:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(290);
      END_STATE();
    case 174:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(328);
      END_STATE();
    case 175:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(153);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(225);
      END_STATE();
    case 176:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(349);
      END_STATE();
    case 177:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(393);
      END_STATE();
    case 178:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(363);
      END_STATE();
    case 179:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(359);
      END_STATE();
    case 180:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(291);
      END_STATE();
    case 181:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(291);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(210);
      END_STATE();
    case 182:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(278);
      END_STATE();
    case 183:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 184:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 185:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(239);
      END_STATE();
    case 186:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 187:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(271);
      END_STATE();
    case 188:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(296);
      END_STATE();
    case 189:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 190:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(286);
      END_STATE();
    case 191:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 192:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(297);
      END_STATE();
    case 193:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 194:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(299);
      END_STATE();
    case 195:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(302);
      END_STATE();
    case 196:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(244);
      END_STATE();
    case 197:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 198:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(282);
      END_STATE();
    case 199:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(284);
      END_STATE();
    case 200:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(154);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(226);
      END_STATE();
    case 201:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(142);
      END_STATE();
    case 202:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(269);
      END_STATE();
    case 203:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(269);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(214);
      END_STATE();
    case 204:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(320);
      END_STATE();
    case 205:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(272);
      END_STATE();
    case 206:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(274);
      END_STATE();
    case 207:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(280);
      END_STATE();
    case 208:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 209:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 210:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(300);
      END_STATE();
    case 211:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(241);
      END_STATE();
    case 212:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(234);
      END_STATE();
    case 213:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(152);
      END_STATE();
    case 214:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(17);
      END_STATE();
    case 215:
      ADVANCE_MAP(
        'K', 174,
        'k', 174,
        'S', 188,
        's', 188,
        'T', 182,
        't', 182,
        'V', 156,
        'v', 156,
      );
      END_STATE();
    case 216:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(147);
      END_STATE();
    case 217:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(308);
      END_STATE();
    case 218:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(187);
      END_STATE();
    case 219:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(198);
      END_STATE();
    case 220:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(150);
      END_STATE();
    case 221:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(151);
      END_STATE();
    case 222:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(185);
      END_STATE();
    case 223:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(184);
      END_STATE();
    case 224:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(186);
      END_STATE();
    case 225:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(196);
      END_STATE();
    case 226:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(197);
      END_STATE();
    case 227:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(387);
      END_STATE();
    case 228:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(388);
      END_STATE();
    case 229:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(362);
      END_STATE();
    case 230:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(358);
      END_STATE();
    case 231:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(351);
      END_STATE();
    case 232:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(354);
      END_STATE();
    case 233:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(292);
      END_STATE();
    case 234:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(207);
      END_STATE();
    case 235:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(303);
      END_STATE();
    case 236:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(164);
      END_STATE();
    case 237:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(258);
      END_STATE();
    case 238:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(323);
      END_STATE();
    case 239:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(317);
      END_STATE();
    case 240:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(261);
      END_STATE();
    case 241:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(231);
      END_STATE();
    case 242:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(322);
      END_STATE();
    case 243:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(324);
      END_STATE();
    case 244:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(318);
      END_STATE();
    case 245:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(325);
      END_STATE();
    case 246:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(319);
      END_STATE();
    case 247:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(326);
      END_STATE();
    case 248:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(216);
      END_STATE();
    case 249:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(392);
      END_STATE();
    case 250:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(361);
      END_STATE();
    case 251:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(357);
      END_STATE();
    case 252:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(353);
      END_STATE();
    case 253:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(220);
      END_STATE();
    case 254:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(221);
      END_STATE();
    case 255:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(204);
      END_STATE();
    case 256:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(165);
      END_STATE();
    case 257:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(227);
      END_STATE();
    case 258:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(161);
      END_STATE();
    case 259:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(329);
      END_STATE();
    case 260:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(209);
      END_STATE();
    case 261:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 262:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 263:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(163);
      END_STATE();
    case 264:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(168);
      END_STATE();
    case 265:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(169);
      END_STATE();
    case 266:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(170);
      END_STATE();
    case 267:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(213);
      END_STATE();
    case 268:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(214);
      END_STATE();
    case 269:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(385);
      END_STATE();
    case 270:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(386);
      END_STATE();
    case 271:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(350);
      END_STATE();
    case 272:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(355);
      END_STATE();
    case 273:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(20);
      END_STATE();
    case 274:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(356);
      END_STATE();
    case 275:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(242);
      END_STATE();
    case 276:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(242);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(316);
      END_STATE();
    case 277:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(309);
      END_STATE();
    case 278:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(293);
      END_STATE();
    case 279:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(192);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(175);
      END_STATE();
    case 280:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(23);
      END_STATE();
    case 281:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(194);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(200);
      END_STATE();
    case 282:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(24);
      END_STATE();
    case 283:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(195);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(193);
      END_STATE();
    case 284:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(25);
      END_STATE();
    case 285:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(199);
      END_STATE();
    case 286:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(316);
      END_STATE();
    case 287:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(389);
      END_STATE();
    case 288:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(364);
      END_STATE();
    case 289:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(360);
      END_STATE();
    case 290:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(135);
      END_STATE();
    case 291:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(311);
      END_STATE();
    case 292:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(270);
      END_STATE();
    case 293:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(19);
      END_STATE();
    case 294:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(212);
      END_STATE();
    case 295:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(211);
      END_STATE();
    case 296:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(294);
      END_STATE();
    case 297:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(313);
      END_STATE();
    case 298:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(133);
      END_STATE();
    case 299:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(314);
      END_STATE();
    case 300:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(191);
      END_STATE();
    case 301:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(132);
      END_STATE();
    case 302:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(315);
      END_STATE();
    case 303:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(146);
      END_STATE();
    case 304:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(177);
      END_STATE();
    case 305:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(178);
      END_STATE();
    case 306:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(179);
      END_STATE();
    case 307:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(149);
      END_STATE();
    case 308:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(22);
      END_STATE();
    case 309:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(26);
      END_STATE();
    case 310:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(210);
      END_STATE();
    case 311:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(249);
      END_STATE();
    case 312:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(217);
      END_STATE();
    case 313:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(250);
      END_STATE();
    case 314:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(251);
      END_STATE();
    case 315:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(252);
      END_STATE();
    case 316:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(257);
      END_STATE();
    case 317:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(287);
      END_STATE();
    case 318:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(288);
      END_STATE();
    case 319:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(289);
      END_STATE();
    case 320:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(223);
      END_STATE();
    case 321:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(224);
      END_STATE();
    case 322:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(263);
      END_STATE();
    case 323:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(228);
      END_STATE();
    case 324:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(229);
      END_STATE();
    case 325:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(230);
      END_STATE();
    case 326:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(232);
      END_STATE();
    case 327:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(240);
      END_STATE();
    case 328:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(327);
      END_STATE();
    case 329:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(348);
      END_STATE();
    case 330:
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 331:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 332:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(526);
      END_STATE();
    case 333:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(566);
      END_STATE();
    case 334:
      if (eof) ADVANCE(338);
      ADVANCE_MAP(
        '\t', 585,
        '\n', 589,
        '\r', 14,
        ' ', 591,
        '#', 581,
        '*', 490,
        '{', 126,
        0x0b, 14,
        '\f', 14,
        '$', 332,
        '&', 332,
        '@', 332,
      );
      if (lookahead != 0) ADVANCE(498);
      END_STATE();
    case 335:
      if (eof) ADVANCE(338);
      ADVANCE_MAP(
        '\n', 590,
        '\r', 15,
        '#', 584,
        '$', 125,
        '*', 41,
        '\t', 594,
        ' ', 594,
        'D', 172,
        'd', 172,
        'F', 237,
        'f', 237,
        'L', 208,
        'l', 208,
        'M', 173,
        'm', 173,
        'R', 189,
        'r', 189,
        'S', 310,
        's', 310,
        'T', 145,
        't', 145,
        'V', 136,
        'v', 136,
        0x0b, 15,
        '\f', 15,
      );
      END_STATE();
    case 336:
      if (eof) ADVANCE(338);
      ADVANCE_MAP(
        '\n', 589,
        '\r', 14,
        '#', 581,
        '*', 490,
        '{', 126,
        '\t', 593,
        ' ', 593,
        0x0b, 14,
        '\f', 14,
        '$', 332,
        '&', 332,
        '@', 332,
      );
      if (lookahead != 0) ADVANCE(498);
      END_STATE();
    case 337:
      if (eof) ADVANCE(338);
      ADVANCE_MAP(
        '#', 584,
        '*', 41,
        'E', 92,
        'F', 82,
        '}', 370,
        '\t', 339,
        ' ', 339,
        'A', 255,
        'a', 255,
        'D', 236,
        'd', 236,
        'R', 190,
        'r', 190,
        'T', 137,
        't', 137,
      );
      if (('\n' <= lookahead && lookahead <= '\r')) ADVANCE(340);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '#') ADVANCE(584);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(339);
      if (('\n' <= lookahead && lookahead <= '\r')) ADVANCE(340);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(340);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead == '\n') ADVANCE(590);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(344);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(345);
      if (lookahead != 0) ADVANCE(347);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead == '\n') ADVANCE(590);
      if (lookahead == '\r') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(345);
      if (lookahead != 0) ADVANCE(347);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead == '\r') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(346);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(347);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_setting_name_token2);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_setting_name_token3);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_setting_name_token4);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_setting_name_token5);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_setting_name_token6);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_setting_name_token7);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_setting_name_token8);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_setting_name_token9);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_setting_name_token10);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_setting_name_token11);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_setting_name_token12);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_setting_name_token13);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_setting_name_token14);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_setting_name_token15);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_setting_name_token16);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_setting_name_token17);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      if (lookahead == '{') ADVANCE(476);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '}') ADVANCE(480);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(12);
      if (lookahead == '\n') ADVANCE(590);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(586);
      if (lookahead == '#') ADVANCE(584);
      if (lookahead == '{') ADVANCE(526);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(12);
      if (lookahead == '\n') ADVANCE(590);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(586);
      if (lookahead == '#') ADVANCE(584);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(27);
      if (lookahead == ' ') ADVANCE(588);
      if (lookahead == '#') ADVANCE(584);
      if (lookahead == '{') ADVANCE(526);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\n') ADVANCE(590);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(584);
      if (lookahead == '{') ADVANCE(526);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '#') ADVANCE(584);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '#') ADVANCE(481);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(483);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token1);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token2);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token3);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token4);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token5);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_test_cases_section_token1);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_test_cases_section_token1);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_test_case_setting_name_token1);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_test_case_setting_name_token2);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_RETURN);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_RETURN);
      if (lookahead == ' ') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '\t') ADVANCE(27);
      if (lookahead == ' ') ADVANCE(28);
      if (lookahead == '#') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(584);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == '.') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'A') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'A') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'C') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'D') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'E') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'E') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'E') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'E') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'E') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'E') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'E') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'F') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'F') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'H') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'I') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'I') ADVANCE(425);
      if (lookahead == 'O') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'I') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'K') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'L') ADVANCE(434);
      if (lookahead == 'N') ADVANCE(402);
      if (lookahead == 'X') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'L') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'L') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'L') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'L') ADVANCE(435);
      if (lookahead == 'N') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'N') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'N') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'N') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'N') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'N') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'O') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'O') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'P') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'R') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'R') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'R') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'R') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'S') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'S') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'T') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'T') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'T') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'U') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'U') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'Y') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == 'Y') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == '{') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == ' ') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_IF);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_IF);
      if (lookahead == ' ') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_END);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_END);
      if (lookahead == ' ') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_ELSEIF);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_ELSEIF);
      if (lookahead == ' ') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_ELSE);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(81);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_TRY);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_TRY);
      if (lookahead == ' ') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_EXCEPT);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_EXCEPT);
      if (lookahead == ' ') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_FINALLY);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_FINALLY);
      if (lookahead == ' ') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_WHILE);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_WHILE);
      if (lookahead == ' ') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_FOR);
      if (lookahead == ' ') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_FOR);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(183);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_IN);
      if (lookahead == ' ') ADVANCE(75);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_INRANGE);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_INENUMERATE);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_INZIP);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_continue_statement);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_continue_statement);
      if (lookahead == ' ') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_break_statement);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_break_statement);
      if (lookahead == ' ') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_ellipses);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_AT_LBRACE);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_AMP_LBRACE);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE_LBRACE);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_inline_python_expression_token1);
      if (lookahead == '#') ADVANCE(478);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '}') ADVANCE(479);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_inline_python_expression_token1);
      if (lookahead == '\r' ||
          lookahead == '}') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(478);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_inline_python_expression_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '}') ADVANCE(479);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '\n') ADVANCE(483);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(584);
      if (lookahead != 0) ADVANCE(481);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '#') ADVANCE(481);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(483);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(483);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(126);
      if (lookahead == ' ') ADVANCE(579);
      if (lookahead == '{') ADVANCE(487);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(577);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(581);
      if (lookahead != 0) ADVANCE(485);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(126);
      if (lookahead == ' ') ADVANCE(579);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(577);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(581);
      if (lookahead != 0) ADVANCE(485);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(126);
      if (lookahead == ' ') ADVANCE(579);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(577);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == '{') ADVANCE(581);
      if (lookahead != 0) ADVANCE(485);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(130);
      if (lookahead == ' ') ADVANCE(580);
      if (lookahead == '{') ADVANCE(484);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(578);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(582);
      if (lookahead != 0) ADVANCE(488);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(130);
      if (lookahead == ' ') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(578);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(582);
      if (lookahead != 0) ADVANCE(488);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(130);
      if (lookahead == ' ') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(578);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == '{') ADVANCE(582);
      if (lookahead != 0) ADVANCE(488);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == '*') ADVANCE(491);
      if (lookahead == '{') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == '*') ADVANCE(567);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == '*') ADVANCE(375);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == '*') ADVANCE(342);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == '*') ADVANCE(366);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == '*') ADVANCE(492);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == '*') ADVANCE(493);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == '*') ADVANCE(494);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == '{') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == '{') ADVANCE(535);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(514);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(502);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(511);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(516);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(524);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(521);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(517);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(519);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(518);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(512);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(501);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(507);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(508);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(515);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(510);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(503);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(570);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(520);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(572);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(574);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(522);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(509);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(513);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(523);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == '{') ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == '*') ADVANCE(391);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == '*') ADVANCE(376);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == '*') ADVANCE(343);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == '*') ADVANCE(367);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == '*') ADVANCE(528);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == '*') ADVANCE(529);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == '*') ADVANCE(530);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == '*') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == '{') ADVANCE(499);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(552);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(539);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(559);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(549);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(564);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(562);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(555);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(557);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(558);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(556);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(550);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(537);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(544);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(546);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(553);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(548);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(540);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(573);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(575);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(576);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(545);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(547);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(561);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(563);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == '{') ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_text_chunk);
      ADVANCE_MAP(
        ' ', 128,
        'K', 504,
        'k', 504,
        'S', 505,
        's', 505,
        'T', 506,
        't', 506,
        'V', 500,
        'v', 500,
        '$', 332,
        '&', 332,
        '@', 332,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(160);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(45);
      if (lookahead == '*') ADVANCE(495);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(46);
      if (lookahead == '*') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(48);
      if (lookahead == '*') ADVANCE(496);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(49);
      if (lookahead == '*') ADVANCE(532);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(51);
      if (lookahead == '*') ADVANCE(497);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(332);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(525);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(52);
      if (lookahead == '*') ADVANCE(533);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(54);
      if (lookahead == '*') ADVANCE(534);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(333);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(526);
      if (lookahead == '{') ADVANCE(584);
      if (lookahead != 0) ADVANCE(486);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(566);
      if (lookahead == '{') ADVANCE(584);
      if (lookahead != 0) ADVANCE(489);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(130);
      if (lookahead == '{') ADVANCE(484);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(578);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(582);
      if (lookahead != 0) ADVANCE(488);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(130);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(578);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(582);
      if (lookahead != 0) ADVANCE(488);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '{') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(584);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '{') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(584);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(584);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(584);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '\n') ADVANCE(590);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(584);
      if (lookahead == '{') ADVANCE(526);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(586);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '\n') ADVANCE(590);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(584);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(586);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '#') ADVANCE(584);
      if (lookahead == '{') ADVANCE(526);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(588);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '#') ADVANCE(584);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(588);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(590);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '{') ADVANCE(526);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(590);
      if (lookahead == '\r') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym__empty_line_token1);
      if (lookahead == '\t') ADVANCE(594);
      if (lookahead == '\n') ADVANCE(590);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(586);
      if (lookahead == '#') ADVANCE(584);
      if (lookahead == '{') ADVANCE(526);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym__empty_line_token1);
      if (lookahead == '\t') ADVANCE(594);
      if (lookahead == '\n') ADVANCE(590);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(586);
      if (lookahead == '#') ADVANCE(584);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym__empty_line_token1);
      if (lookahead == '\n') ADVANCE(590);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(584);
      if (lookahead == '{') ADVANCE(526);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(594);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym__empty_line_token1);
      if (lookahead == '\n') ADVANCE(590);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(584);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(594);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 337},
  [2] = {.lex_state = 335},
  [3] = {.lex_state = 335},
  [4] = {.lex_state = 335},
  [5] = {.lex_state = 335},
  [6] = {.lex_state = 335},
  [7] = {.lex_state = 335},
  [8] = {.lex_state = 335},
  [9] = {.lex_state = 30},
  [10] = {.lex_state = 31},
  [11] = {.lex_state = 29},
  [12] = {.lex_state = 29},
  [13] = {.lex_state = 29},
  [14] = {.lex_state = 32},
  [15] = {.lex_state = 29},
  [16] = {.lex_state = 334},
  [17] = {.lex_state = 334},
  [18] = {.lex_state = 334},
  [19] = {.lex_state = 334},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 336},
  [22] = {.lex_state = 336},
  [23] = {.lex_state = 336},
  [24] = {.lex_state = 336},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 335},
  [27] = {.lex_state = 336},
  [28] = {.lex_state = 335},
  [29] = {.lex_state = 336},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 335},
  [33] = {.lex_state = 335},
  [34] = {.lex_state = 335},
  [35] = {.lex_state = 336},
  [36] = {.lex_state = 336},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 336},
  [39] = {.lex_state = 336},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 334},
  [55] = {.lex_state = 334},
  [56] = {.lex_state = 334},
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 335},
  [60] = {.lex_state = 336},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 336},
  [63] = {.lex_state = 335},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 9},
  [67] = {.lex_state = 9},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 336},
  [70] = {.lex_state = 9},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 7},
  [73] = {.lex_state = 7},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 337},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 33},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 33},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 33},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 8},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 8},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 6},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 8},
  [106] = {.lex_state = 6},
  [107] = {.lex_state = 6},
  [108] = {.lex_state = 6},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 6},
  [112] = {.lex_state = 6},
  [113] = {.lex_state = 6},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 6},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 6},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 6},
  [122] = {.lex_state = 9},
  [123] = {.lex_state = 8},
  [124] = {.lex_state = 8},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 9},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 9},
  [129] = {.lex_state = 9},
  [130] = {.lex_state = 9},
  [131] = {.lex_state = 9},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 9},
  [134] = {.lex_state = 9},
  [135] = {.lex_state = 9},
  [136] = {.lex_state = 9},
  [137] = {.lex_state = 9},
  [138] = {.lex_state = 9},
  [139] = {.lex_state = 8},
  [140] = {.lex_state = 7},
  [141] = {.lex_state = 6},
  [142] = {.lex_state = 7},
  [143] = {.lex_state = 7},
  [144] = {.lex_state = 7},
  [145] = {.lex_state = 7},
  [146] = {.lex_state = 7},
  [147] = {.lex_state = 7},
  [148] = {.lex_state = 7},
  [149] = {.lex_state = 7},
  [150] = {.lex_state = 7},
  [151] = {.lex_state = 7},
  [152] = {.lex_state = 7},
  [153] = {.lex_state = 6},
  [154] = {.lex_state = 6},
  [155] = {.lex_state = 34},
  [156] = {.lex_state = 337},
  [157] = {.lex_state = 34},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 8},
  [160] = {.lex_state = 8},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 337},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 34},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 34},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 34},
  [170] = {.lex_state = 34},
  [171] = {.lex_state = 34},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 8},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 8},
  [177] = {.lex_state = 1},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 8},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 8},
  [194] = {.lex_state = 34},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 1},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 8},
  [199] = {.lex_state = 8},
  [200] = {.lex_state = 5},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 5},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 8},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 8},
  [207] = {.lex_state = 8},
  [208] = {.lex_state = 8},
  [209] = {.lex_state = 5},
  [210] = {.lex_state = 5},
  [211] = {.lex_state = 10},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 8},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 8},
  [220] = {.lex_state = 5},
  [221] = {.lex_state = 8},
  [222] = {.lex_state = 5},
  [223] = {.lex_state = 5},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 10},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 10},
  [228] = {.lex_state = 5},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 5},
  [232] = {.lex_state = 5},
  [233] = {.lex_state = 8},
  [234] = {.lex_state = 5},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 8},
  [237] = {.lex_state = 8},
  [238] = {.lex_state = 5},
  [239] = {.lex_state = 8},
  [240] = {.lex_state = 10},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 13},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 8},
  [245] = {.lex_state = 5},
  [246] = {.lex_state = 5},
  [247] = {.lex_state = 5},
  [248] = {.lex_state = 13},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 5},
  [252] = {.lex_state = 5},
  [253] = {.lex_state = 5},
  [254] = {.lex_state = 8},
  [255] = {.lex_state = 5},
  [256] = {.lex_state = 5},
  [257] = {.lex_state = 5},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 13},
  [260] = {.lex_state = 5},
  [261] = {.lex_state = 5},
  [262] = {.lex_state = 5},
  [263] = {.lex_state = 5},
  [264] = {.lex_state = 5},
  [265] = {.lex_state = 10},
  [266] = {.lex_state = 10},
  [267] = {.lex_state = 10},
  [268] = {.lex_state = 10},
  [269] = {.lex_state = 10},
  [270] = {.lex_state = 10},
  [271] = {.lex_state = 13},
  [272] = {.lex_state = 337},
  [273] = {.lex_state = 337},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 8},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 8},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 337},
  [304] = {.lex_state = 35},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 337},
  [307] = {.lex_state = 337},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 35},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 35},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 35},
  [320] = {.lex_state = 8},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 8},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 8},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 8},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 8},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 8},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 337},
  [336] = {.lex_state = 8},
  [337] = {.lex_state = 8},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 337},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 35},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 8},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 8},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 8},
  [352] = {.lex_state = 337},
  [353] = {.lex_state = 8},
  [354] = {.lex_state = 337},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 337},
  [357] = {.lex_state = 337},
  [358] = {.lex_state = 337},
  [359] = {.lex_state = 337},
  [360] = {.lex_state = 337},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 337},
  [370] = {.lex_state = 337},
  [371] = {.lex_state = 337},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 337},
  [374] = {.lex_state = 337},
  [375] = {.lex_state = 337},
  [376] = {.lex_state = 337},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 337},
  [381] = {.lex_state = 337},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 35},
  [386] = {.lex_state = 35},
  [387] = {.lex_state = 35},
  [388] = {.lex_state = 35},
  [389] = {.lex_state = 8},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 35},
  [393] = {.lex_state = 35},
  [394] = {.lex_state = 35},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 35},
  [397] = {.lex_state = 8},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_settings_section_token1] = ACTIONS(1),
    [aux_sym_setting_name_token1] = ACTIONS(1),
    [aux_sym_setting_name_token2] = ACTIONS(1),
    [aux_sym_setting_name_token3] = ACTIONS(1),
    [aux_sym_setting_name_token4] = ACTIONS(1),
    [aux_sym_setting_name_token5] = ACTIONS(1),
    [aux_sym_setting_name_token6] = ACTIONS(1),
    [aux_sym_setting_name_token7] = ACTIONS(1),
    [aux_sym_setting_name_token8] = ACTIONS(1),
    [aux_sym_setting_name_token9] = ACTIONS(1),
    [aux_sym_setting_name_token10] = ACTIONS(1),
    [aux_sym_setting_name_token11] = ACTIONS(1),
    [aux_sym_setting_name_token12] = ACTIONS(1),
    [aux_sym_setting_name_token13] = ACTIONS(1),
    [aux_sym_setting_name_token14] = ACTIONS(1),
    [aux_sym_setting_name_token15] = ACTIONS(1),
    [aux_sym_setting_name_token16] = ACTIONS(1),
    [aux_sym_setting_name_token17] = ACTIONS(1),
    [aux_sym_variables_section_token1] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_keywords_section_token1] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_SPACE] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [aux_sym_keyword_setting_name_token1] = ACTIONS(1),
    [aux_sym_keyword_setting_name_token2] = ACTIONS(1),
    [aux_sym_keyword_setting_name_token3] = ACTIONS(1),
    [aux_sym_keyword_setting_name_token4] = ACTIONS(1),
    [aux_sym_keyword_setting_name_token5] = ACTIONS(1),
    [aux_sym_test_cases_section_token1] = ACTIONS(1),
    [aux_sym_test_case_setting_name_token1] = ACTIONS(1),
    [aux_sym_test_case_setting_name_token2] = ACTIONS(1),
    [anon_sym_RETURN] = ACTIONS(1),
    [anon_sym_IF] = ACTIONS(1),
    [anon_sym_END] = ACTIONS(1),
    [anon_sym_ELSEIF] = ACTIONS(1),
    [anon_sym_ELSE] = ACTIONS(1),
    [anon_sym_TRY] = ACTIONS(1),
    [anon_sym_EXCEPT] = ACTIONS(1),
    [anon_sym_FINALLY] = ACTIONS(1),
    [anon_sym_WHILE] = ACTIONS(1),
    [anon_sym_FOR] = ACTIONS(1),
    [anon_sym_IN] = ACTIONS(1),
    [anon_sym_INRANGE] = ACTIONS(1),
    [anon_sym_INENUMERATE] = ACTIONS(1),
    [anon_sym_INZIP] = ACTIONS(1),
    [sym_continue_statement] = ACTIONS(1),
    [sym_break_statement] = ACTIONS(1),
    [sym_ellipses] = ACTIONS(1),
    [anon_sym_AT_LBRACE] = ACTIONS(1),
    [anon_sym_AMP_LBRACE] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__separator] = ACTIONS(1),
    [sym__line_break] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(302),
    [sym_section] = STATE(37),
    [sym_settings_section] = STATE(132),
    [sym_variables_section] = STATE(132),
    [sym_keywords_section] = STATE(132),
    [sym_test_cases_section] = STATE(132),
    [aux_sym_source_file_repeat1] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_source_file_token1] = ACTIONS(7),
    [aux_sym_settings_section_token1] = ACTIONS(9),
    [aux_sym_variables_section_token1] = ACTIONS(11),
    [aux_sym_keywords_section_token1] = ACTIONS(13),
    [aux_sym_test_cases_section_token1] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym__line_break,
    ACTIONS(23), 1,
      aux_sym__empty_line_token1,
    STATE(99), 1,
      sym_setting_name,
    STATE(4), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(17), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
    ACTIONS(19), 17,
      aux_sym_setting_name_token1,
      aux_sym_setting_name_token2,
      aux_sym_setting_name_token3,
      aux_sym_setting_name_token4,
      aux_sym_setting_name_token5,
      aux_sym_setting_name_token6,
      aux_sym_setting_name_token7,
      aux_sym_setting_name_token8,
      aux_sym_setting_name_token9,
      aux_sym_setting_name_token10,
      aux_sym_setting_name_token11,
      aux_sym_setting_name_token12,
      aux_sym_setting_name_token13,
      aux_sym_setting_name_token14,
      aux_sym_setting_name_token15,
      aux_sym_setting_name_token16,
      aux_sym_setting_name_token17,
  [44] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      aux_sym__empty_line_token1,
    ACTIONS(27), 1,
      sym__line_break,
    STATE(99), 1,
      sym_setting_name,
    STATE(6), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(25), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
    ACTIONS(19), 17,
      aux_sym_setting_name_token1,
      aux_sym_setting_name_token2,
      aux_sym_setting_name_token3,
      aux_sym_setting_name_token4,
      aux_sym_setting_name_token5,
      aux_sym_setting_name_token6,
      aux_sym_setting_name_token7,
      aux_sym_setting_name_token8,
      aux_sym_setting_name_token9,
      aux_sym_setting_name_token10,
      aux_sym_setting_name_token11,
      aux_sym_setting_name_token12,
      aux_sym_setting_name_token13,
      aux_sym_setting_name_token14,
      aux_sym_setting_name_token15,
      aux_sym_setting_name_token16,
      aux_sym_setting_name_token17,
  [88] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      aux_sym__empty_line_token1,
    ACTIONS(31), 1,
      sym__line_break,
    STATE(99), 1,
      sym_setting_name,
    STATE(5), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(29), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
    ACTIONS(19), 17,
      aux_sym_setting_name_token1,
      aux_sym_setting_name_token2,
      aux_sym_setting_name_token3,
      aux_sym_setting_name_token4,
      aux_sym_setting_name_token5,
      aux_sym_setting_name_token6,
      aux_sym_setting_name_token7,
      aux_sym_setting_name_token8,
      aux_sym_setting_name_token9,
      aux_sym_setting_name_token10,
      aux_sym_setting_name_token11,
      aux_sym_setting_name_token12,
      aux_sym_setting_name_token13,
      aux_sym_setting_name_token14,
      aux_sym_setting_name_token15,
      aux_sym_setting_name_token16,
      aux_sym_setting_name_token17,
  [132] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(38), 1,
      sym__line_break,
    ACTIONS(41), 1,
      aux_sym__empty_line_token1,
    STATE(99), 1,
      sym_setting_name,
    STATE(5), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(33), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
    ACTIONS(35), 17,
      aux_sym_setting_name_token1,
      aux_sym_setting_name_token2,
      aux_sym_setting_name_token3,
      aux_sym_setting_name_token4,
      aux_sym_setting_name_token5,
      aux_sym_setting_name_token6,
      aux_sym_setting_name_token7,
      aux_sym_setting_name_token8,
      aux_sym_setting_name_token9,
      aux_sym_setting_name_token10,
      aux_sym_setting_name_token11,
      aux_sym_setting_name_token12,
      aux_sym_setting_name_token13,
      aux_sym_setting_name_token14,
      aux_sym_setting_name_token15,
      aux_sym_setting_name_token16,
      aux_sym_setting_name_token17,
  [176] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      aux_sym__empty_line_token1,
    ACTIONS(31), 1,
      sym__line_break,
    STATE(99), 1,
      sym_setting_name,
    STATE(5), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(17), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
    ACTIONS(19), 17,
      aux_sym_setting_name_token1,
      aux_sym_setting_name_token2,
      aux_sym_setting_name_token3,
      aux_sym_setting_name_token4,
      aux_sym_setting_name_token5,
      aux_sym_setting_name_token6,
      aux_sym_setting_name_token7,
      aux_sym_setting_name_token8,
      aux_sym_setting_name_token9,
      aux_sym_setting_name_token10,
      aux_sym_setting_name_token11,
      aux_sym_setting_name_token12,
      aux_sym_setting_name_token13,
      aux_sym_setting_name_token14,
      aux_sym_setting_name_token15,
      aux_sym_setting_name_token16,
      aux_sym_setting_name_token17,
  [220] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 1,
      aux_sym__empty_line_token1,
    ACTIONS(44), 24,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_setting_name_token1,
      aux_sym_setting_name_token2,
      aux_sym_setting_name_token3,
      aux_sym_setting_name_token4,
      aux_sym_setting_name_token5,
      aux_sym_setting_name_token6,
      aux_sym_setting_name_token7,
      aux_sym_setting_name_token8,
      aux_sym_setting_name_token9,
      aux_sym_setting_name_token10,
      aux_sym_setting_name_token11,
      aux_sym_setting_name_token12,
      aux_sym_setting_name_token13,
      aux_sym_setting_name_token14,
      aux_sym_setting_name_token15,
      aux_sym_setting_name_token16,
      aux_sym_setting_name_token17,
      aux_sym_variables_section_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym__line_break,
  [253] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 1,
      aux_sym__empty_line_token1,
    ACTIONS(48), 23,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_setting_name_token1,
      aux_sym_setting_name_token2,
      aux_sym_setting_name_token3,
      aux_sym_setting_name_token4,
      aux_sym_setting_name_token5,
      aux_sym_setting_name_token6,
      aux_sym_setting_name_token7,
      aux_sym_setting_name_token8,
      aux_sym_setting_name_token9,
      aux_sym_setting_name_token10,
      aux_sym_setting_name_token11,
      aux_sym_setting_name_token12,
      aux_sym_setting_name_token13,
      aux_sym_setting_name_token14,
      aux_sym_setting_name_token15,
      aux_sym_setting_name_token16,
      aux_sym_setting_name_token17,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym__line_break,
  [285] = 15,
    ACTIONS(52), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(54), 1,
      anon_sym_RETURN,
    ACTIONS(56), 1,
      sym_keyword,
    ACTIONS(58), 1,
      anon_sym_IF,
    ACTIONS(60), 1,
      anon_sym_END,
    ACTIONS(62), 1,
      anon_sym_ELSE,
    ACTIONS(64), 1,
      anon_sym_TRY,
    ACTIONS(66), 1,
      anon_sym_EXCEPT,
    ACTIONS(68), 1,
      anon_sym_FINALLY,
    ACTIONS(70), 1,
      anon_sym_WHILE,
    ACTIONS(72), 1,
      anon_sym_FOR,
    ACTIONS(76), 1,
      sym_comment,
    STATE(275), 1,
      sym_statement,
    ACTIONS(74), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(317), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [339] = 14,
    ACTIONS(52), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(54), 1,
      anon_sym_RETURN,
    ACTIONS(56), 1,
      sym_keyword,
    ACTIONS(58), 1,
      anon_sym_IF,
    ACTIONS(62), 1,
      anon_sym_ELSE,
    ACTIONS(64), 1,
      anon_sym_TRY,
    ACTIONS(70), 1,
      anon_sym_WHILE,
    ACTIONS(72), 1,
      anon_sym_FOR,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_END,
    ACTIONS(80), 1,
      anon_sym_ELSEIF,
    STATE(275), 1,
      sym_statement,
    ACTIONS(74), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(317), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [390] = 12,
    ACTIONS(52), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(54), 1,
      anon_sym_RETURN,
    ACTIONS(56), 1,
      sym_keyword,
    ACTIONS(58), 1,
      anon_sym_IF,
    ACTIONS(64), 1,
      anon_sym_TRY,
    ACTIONS(70), 1,
      anon_sym_WHILE,
    ACTIONS(72), 1,
      anon_sym_FOR,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_LBRACK,
    ACTIONS(74), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(364), 2,
      sym_test_case_setting,
      sym_statement,
    STATE(317), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [436] = 12,
    ACTIONS(52), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(54), 1,
      anon_sym_RETURN,
    ACTIONS(56), 1,
      sym_keyword,
    ACTIONS(58), 1,
      anon_sym_IF,
    ACTIONS(64), 1,
      anon_sym_TRY,
    ACTIONS(70), 1,
      anon_sym_WHILE,
    ACTIONS(72), 1,
      anon_sym_FOR,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_LBRACK,
    ACTIONS(74), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(334), 2,
      sym_keyword_setting,
      sym_statement,
    STATE(317), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [482] = 12,
    ACTIONS(52), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(54), 1,
      anon_sym_RETURN,
    ACTIONS(56), 1,
      sym_keyword,
    ACTIONS(58), 1,
      anon_sym_IF,
    ACTIONS(64), 1,
      anon_sym_TRY,
    ACTIONS(70), 1,
      anon_sym_WHILE,
    ACTIONS(72), 1,
      anon_sym_FOR,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(86), 1,
      sym_ellipses,
    STATE(275), 1,
      sym_statement,
    ACTIONS(74), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(317), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [527] = 12,
    ACTIONS(52), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(54), 1,
      anon_sym_RETURN,
    ACTIONS(56), 1,
      sym_keyword,
    ACTIONS(58), 1,
      anon_sym_IF,
    ACTIONS(64), 1,
      anon_sym_TRY,
    ACTIONS(70), 1,
      anon_sym_WHILE,
    ACTIONS(72), 1,
      anon_sym_FOR,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_END,
    STATE(275), 1,
      sym_statement,
    ACTIONS(74), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(317), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [572] = 11,
    ACTIONS(52), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(54), 1,
      anon_sym_RETURN,
    ACTIONS(56), 1,
      sym_keyword,
    ACTIONS(58), 1,
      anon_sym_IF,
    ACTIONS(64), 1,
      anon_sym_TRY,
    ACTIONS(70), 1,
      anon_sym_WHILE,
    ACTIONS(72), 1,
      anon_sym_FOR,
    ACTIONS(76), 1,
      sym_comment,
    STATE(275), 1,
      sym_statement,
    ACTIONS(74), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(317), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [614] = 8,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    ACTIONS(94), 1,
      sym__separator,
    ACTIONS(96), 1,
      sym__line_break,
    ACTIONS(98), 1,
      aux_sym__empty_line_token1,
    STATE(12), 1,
      sym__indentation,
    STATE(18), 2,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
    ACTIONS(92), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [644] = 8,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(98), 1,
      aux_sym__empty_line_token1,
    ACTIONS(100), 1,
      ts_builtin_sym_end,
    ACTIONS(104), 1,
      sym__separator,
    ACTIONS(106), 1,
      sym__line_break,
    STATE(11), 1,
      sym__indentation,
    STATE(19), 2,
      sym__empty_line,
      aux_sym_test_case_definition_body_repeat1,
    ACTIONS(102), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [674] = 8,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
    ACTIONS(112), 1,
      sym__separator,
    ACTIONS(115), 1,
      sym__line_break,
    ACTIONS(118), 1,
      aux_sym__empty_line_token1,
    STATE(12), 1,
      sym__indentation,
    STATE(18), 2,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
    ACTIONS(110), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [704] = 8,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(125), 1,
      sym__separator,
    ACTIONS(128), 1,
      sym__line_break,
    ACTIONS(131), 1,
      aux_sym__empty_line_token1,
    STATE(11), 1,
      sym__indentation,
    STATE(19), 2,
      sym__empty_line,
      aux_sym_test_case_definition_body_repeat1,
    ACTIONS(123), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [734] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_settings_section_token1,
    ACTIONS(11), 1,
      aux_sym_variables_section_token1,
    ACTIONS(13), 1,
      aux_sym_keywords_section_token1,
    ACTIONS(15), 1,
      aux_sym_test_cases_section_token1,
    ACTIONS(134), 1,
      ts_builtin_sym_end,
    STATE(25), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(132), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [763] = 7,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(136), 1,
      ts_builtin_sym_end,
    ACTIONS(140), 1,
      sym_text_chunk,
    ACTIONS(142), 1,
      sym__line_break,
    ACTIONS(144), 1,
      aux_sym__empty_line_token1,
    STATE(22), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(138), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [790] = 7,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    ACTIONS(150), 1,
      sym_text_chunk,
    ACTIONS(153), 1,
      sym__line_break,
    ACTIONS(156), 1,
      aux_sym__empty_line_token1,
    STATE(22), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(148), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [817] = 7,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(144), 1,
      aux_sym__empty_line_token1,
    ACTIONS(159), 1,
      ts_builtin_sym_end,
    ACTIONS(163), 1,
      sym_text_chunk,
    ACTIONS(165), 1,
      sym__line_break,
    STATE(24), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(161), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [844] = 7,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(167), 1,
      ts_builtin_sym_end,
    ACTIONS(171), 1,
      sym_text_chunk,
    ACTIONS(174), 1,
      sym__line_break,
    ACTIONS(177), 1,
      aux_sym__empty_line_token1,
    STATE(24), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(169), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [871] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_settings_section_token1,
    ACTIONS(11), 1,
      aux_sym_variables_section_token1,
    ACTIONS(13), 1,
      aux_sym_keywords_section_token1,
    ACTIONS(15), 1,
      aux_sym_test_cases_section_token1,
    ACTIONS(180), 1,
      ts_builtin_sym_end,
    STATE(30), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(132), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [900] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      aux_sym__empty_line_token1,
    ACTIONS(184), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(186), 1,
      sym__line_break,
    STATE(32), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(182), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [925] = 7,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(140), 1,
      sym_text_chunk,
    ACTIONS(144), 1,
      aux_sym__empty_line_token1,
    ACTIONS(188), 1,
      ts_builtin_sym_end,
    ACTIONS(192), 1,
      sym__line_break,
    STATE(36), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(190), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [952] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      aux_sym__empty_line_token1,
    ACTIONS(184), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(196), 1,
      sym__line_break,
    STATE(33), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(194), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [977] = 7,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(144), 1,
      aux_sym__empty_line_token1,
    ACTIONS(163), 1,
      sym_text_chunk,
    ACTIONS(198), 1,
      ts_builtin_sym_end,
    ACTIONS(202), 1,
      sym__line_break,
    STATE(39), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(200), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1004] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      ts_builtin_sym_end,
    ACTIONS(206), 1,
      aux_sym_settings_section_token1,
    ACTIONS(209), 1,
      aux_sym_variables_section_token1,
    ACTIONS(212), 1,
      aux_sym_keywords_section_token1,
    ACTIONS(215), 1,
      aux_sym_test_cases_section_token1,
    STATE(30), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(132), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [1033] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      sym__separator,
    ACTIONS(220), 1,
      sym__line_break,
    ACTIONS(222), 1,
      aux_sym__empty_line_token1,
    STATE(9), 1,
      sym__indentation,
    STATE(101), 1,
      sym_block,
    STATE(193), 1,
      sym_else_statement,
    STATE(233), 1,
      sym_finally_statement,
    STATE(104), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
    STATE(105), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [1066] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      aux_sym__empty_line_token1,
    ACTIONS(184), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(224), 1,
      sym__line_break,
    STATE(34), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(194), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1091] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      aux_sym__empty_line_token1,
    ACTIONS(184), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(224), 1,
      sym__line_break,
    STATE(34), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(226), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1116] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(233), 1,
      sym__line_break,
    ACTIONS(236), 1,
      aux_sym__empty_line_token1,
    STATE(34), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(228), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1141] = 7,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(140), 1,
      sym_text_chunk,
    ACTIONS(144), 1,
      aux_sym__empty_line_token1,
    ACTIONS(239), 1,
      ts_builtin_sym_end,
    ACTIONS(243), 1,
      sym__line_break,
    STATE(21), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(241), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1168] = 7,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(140), 1,
      sym_text_chunk,
    ACTIONS(142), 1,
      sym__line_break,
    ACTIONS(144), 1,
      aux_sym__empty_line_token1,
    ACTIONS(239), 1,
      ts_builtin_sym_end,
    STATE(22), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(241), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1195] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_settings_section_token1,
    ACTIONS(11), 1,
      aux_sym_variables_section_token1,
    ACTIONS(13), 1,
      aux_sym_keywords_section_token1,
    ACTIONS(15), 1,
      aux_sym_test_cases_section_token1,
    ACTIONS(134), 1,
      ts_builtin_sym_end,
    STATE(30), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(132), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [1224] = 7,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(144), 1,
      aux_sym__empty_line_token1,
    ACTIONS(163), 1,
      sym_text_chunk,
    ACTIONS(245), 1,
      ts_builtin_sym_end,
    ACTIONS(249), 1,
      sym__line_break,
    STATE(23), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(247), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1251] = 7,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(144), 1,
      aux_sym__empty_line_token1,
    ACTIONS(163), 1,
      sym_text_chunk,
    ACTIONS(165), 1,
      sym__line_break,
    ACTIONS(245), 1,
      ts_builtin_sym_end,
    STATE(24), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(247), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1278] = 8,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(253), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(255), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(257), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(259), 1,
      sym_text_chunk,
    STATE(284), 1,
      sym_argument,
    STATE(72), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1306] = 8,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(263), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(265), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(267), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(269), 1,
      sym_text_chunk,
    STATE(226), 1,
      sym_argument,
    STATE(51), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1334] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(273), 1,
      anon_sym_IN,
    ACTIONS(275), 1,
      anon_sym_INRANGE,
    ACTIONS(277), 1,
      anon_sym_INENUMERATE,
    ACTIONS(279), 1,
      anon_sym_INZIP,
    STATE(324), 1,
      sym_scalar_variable,
    STATE(368), 4,
      sym__for_in,
      sym__for_in_range,
      sym__for_in_enumerate,
      sym__for_in_zip,
  [1362] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      sym__line_break,
    ACTIONS(222), 1,
      aux_sym__empty_line_token1,
    ACTIONS(281), 1,
      sym__separator,
    STATE(10), 1,
      sym__indentation,
    STATE(123), 1,
      aux_sym_if_statement_repeat1,
    STATE(139), 1,
      sym_block,
    STATE(207), 1,
      sym_else_statement,
    STATE(326), 1,
      sym_elseif_statement,
    STATE(104), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1394] = 8,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(285), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(287), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(289), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(291), 1,
      sym_text_chunk,
    STATE(229), 1,
      sym_argument,
    STATE(67), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1422] = 8,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(263), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(265), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(267), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(269), 1,
      sym_text_chunk,
    STATE(215), 1,
      sym_argument,
    STATE(51), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1450] = 8,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(285), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(287), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(289), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(291), 1,
      sym_text_chunk,
    STATE(279), 1,
      sym_argument,
    STATE(67), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1478] = 8,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(263), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(265), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(267), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(269), 1,
      sym_text_chunk,
    STATE(203), 1,
      sym_argument,
    STATE(51), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1506] = 8,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(263), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(265), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(267), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(269), 1,
      sym_text_chunk,
    STATE(230), 1,
      sym_argument,
    STATE(51), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1534] = 8,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(285), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(287), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(289), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(291), 1,
      sym_text_chunk,
    STATE(291), 1,
      sym_argument,
    STATE(67), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1562] = 8,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(263), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(265), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(267), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(269), 1,
      sym_text_chunk,
    STATE(229), 1,
      sym_argument,
    STATE(51), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1590] = 7,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(267), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(293), 1,
      anon_sym_SPACE,
    ACTIONS(295), 1,
      sym_text_chunk,
    ACTIONS(297), 2,
      sym__separator,
      sym__line_break,
    STATE(52), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [1615] = 7,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(267), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(293), 1,
      anon_sym_SPACE,
    ACTIONS(299), 1,
      sym_text_chunk,
    ACTIONS(301), 2,
      sym__separator,
      sym__line_break,
    STATE(53), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [1640] = 7,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(306), 1,
      anon_sym_SPACE,
    ACTIONS(309), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(312), 1,
      sym_text_chunk,
    ACTIONS(315), 2,
      sym__separator,
      sym__line_break,
    STATE(53), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [1665] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(317), 1,
      ts_builtin_sym_end,
    ACTIONS(319), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__separator,
      sym__line_break,
      aux_sym__empty_line_token1,
  [1682] = 3,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(46), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__separator,
      sym__line_break,
      aux_sym__empty_line_token1,
  [1699] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(321), 1,
      ts_builtin_sym_end,
    ACTIONS(323), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__separator,
      sym__line_break,
      aux_sym__empty_line_token1,
  [1716] = 7,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(315), 1,
      sym__separator,
    ACTIONS(325), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(328), 1,
      anon_sym_SPACE,
    ACTIONS(331), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(334), 1,
      sym_text_chunk,
    STATE(57), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [1740] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym__separator,
    ACTIONS(341), 1,
      sym__line_break,
    STATE(127), 1,
      aux_sym_arguments_repeat1,
    STATE(341), 1,
      sym_arguments,
    ACTIONS(337), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
    STATE(191), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [1764] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      aux_sym__empty_line_token1,
    ACTIONS(343), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym__line_break,
  [1780] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(347), 1,
      ts_builtin_sym_end,
    ACTIONS(349), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__line_break,
      aux_sym__empty_line_token1,
  [1796] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym__separator,
    ACTIONS(353), 1,
      sym__line_break,
    STATE(127), 1,
      aux_sym_arguments_repeat1,
    STATE(243), 1,
      sym_arguments,
    ACTIONS(351), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
    STATE(191), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [1820] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(356), 1,
      ts_builtin_sym_end,
    ACTIONS(358), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__line_break,
      aux_sym__empty_line_token1,
  [1836] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      aux_sym__empty_line_token1,
    ACTIONS(360), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym__line_break,
  [1852] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      sym__line_break,
    ACTIONS(222), 1,
      aux_sym__empty_line_token1,
    ACTIONS(364), 1,
      sym_ellipses,
    ACTIONS(366), 1,
      sym__separator,
    STATE(13), 1,
      sym__indentation,
    STATE(337), 1,
      sym_block,
    STATE(104), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1878] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_SPACE,
    STATE(210), 1,
      sym_keyword_setting_name,
    ACTIONS(369), 6,
      aux_sym_setting_name_token4,
      aux_sym_keyword_setting_name_token1,
      aux_sym_keyword_setting_name_token2,
      aux_sym_keyword_setting_name_token3,
      aux_sym_keyword_setting_name_token4,
      aux_sym_keyword_setting_name_token5,
  [1896] = 7,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(289), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(301), 1,
      sym__line_break,
    ACTIONS(373), 1,
      anon_sym_SPACE,
    ACTIONS(375), 1,
      sym_text_chunk,
    STATE(70), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [1920] = 7,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(289), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(297), 1,
      sym__line_break,
    ACTIONS(373), 1,
      anon_sym_SPACE,
    ACTIONS(377), 1,
      sym_text_chunk,
    STATE(66), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [1944] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      anon_sym_SPACE,
    STATE(222), 1,
      sym_test_case_setting_name,
    ACTIONS(379), 6,
      aux_sym_setting_name_token4,
      aux_sym_keyword_setting_name_token1,
      aux_sym_keyword_setting_name_token4,
      aux_sym_keyword_setting_name_token5,
      aux_sym_test_case_setting_name_token1,
      aux_sym_test_case_setting_name_token2,
  [1962] = 3,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(46), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__line_break,
      aux_sym__empty_line_token1,
  [1978] = 7,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(315), 1,
      sym__line_break,
    ACTIONS(383), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(386), 1,
      anon_sym_SPACE,
    ACTIONS(389), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(392), 1,
      sym_text_chunk,
    STATE(70), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [2002] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      sym__separator,
    ACTIONS(400), 1,
      sym__line_break,
    STATE(125), 1,
      aux_sym_arguments_repeat1,
    STATE(243), 1,
      sym_arguments,
    ACTIONS(395), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
    STATE(163), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2026] = 7,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(257), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(297), 1,
      sym__separator,
    ACTIONS(403), 1,
      anon_sym_SPACE,
    ACTIONS(405), 1,
      sym_text_chunk,
    STATE(73), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [2050] = 7,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(257), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(301), 1,
      sym__separator,
    ACTIONS(403), 1,
      anon_sym_SPACE,
    ACTIONS(407), 1,
      sym_text_chunk,
    STATE(57), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [2074] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(238), 1,
      sym_test_case_setting_name,
    ACTIONS(379), 6,
      aux_sym_setting_name_token4,
      aux_sym_keyword_setting_name_token1,
      aux_sym_keyword_setting_name_token4,
      aux_sym_keyword_setting_name_token5,
      aux_sym_test_case_setting_name_token1,
      aux_sym_test_case_setting_name_token2,
  [2089] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(228), 1,
      sym_keyword_setting_name,
    ACTIONS(369), 6,
      aux_sym_setting_name_token4,
      aux_sym_keyword_setting_name_token1,
      aux_sym_keyword_setting_name_token2,
      aux_sym_keyword_setting_name_token3,
      aux_sym_keyword_setting_name_token4,
      aux_sym_keyword_setting_name_token5,
  [2104] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      sym__line_break,
    ACTIONS(222), 1,
      aux_sym__empty_line_token1,
    ACTIONS(409), 1,
      sym__separator,
    STATE(14), 1,
      sym__indentation,
    STATE(206), 1,
      sym_block,
    STATE(104), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2127] = 6,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(413), 1,
      anon_sym_RETURN,
    ACTIONS(415), 1,
      sym_keyword,
    STATE(175), 1,
      sym_inline_statement,
    STATE(241), 3,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
  [2148] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      aux_sym__empty_line_token1,
    ACTIONS(104), 1,
      sym__separator,
    ACTIONS(417), 1,
      sym__line_break,
    STATE(11), 1,
      sym__indentation,
    STATE(62), 1,
      sym_test_case_definition_body,
    STATE(17), 2,
      sym__empty_line,
      aux_sym_test_case_definition_body_repeat1,
  [2171] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      sym__line_break,
    ACTIONS(222), 1,
      aux_sym__empty_line_token1,
    ACTIONS(419), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(397), 1,
      sym_block,
    STATE(104), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2194] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      sym__line_break,
    ACTIONS(222), 1,
      aux_sym__empty_line_token1,
    ACTIONS(421), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(346), 1,
      sym_block,
    STATE(104), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2217] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      sym__separator,
    ACTIONS(98), 1,
      aux_sym__empty_line_token1,
    ACTIONS(424), 1,
      sym__line_break,
    STATE(12), 1,
      sym__indentation,
    STATE(60), 1,
      sym_keyword_definition_body,
    STATE(16), 2,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
  [2240] = 6,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(413), 1,
      anon_sym_RETURN,
    ACTIONS(415), 1,
      sym_keyword,
    STATE(218), 1,
      sym_inline_statement,
    STATE(241), 3,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
  [2261] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      sym__line_break,
    ACTIONS(222), 1,
      aux_sym__empty_line_token1,
    ACTIONS(426), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(389), 1,
      sym_block,
    STATE(104), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2284] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      sym__line_break,
    ACTIONS(222), 1,
      aux_sym__empty_line_token1,
    ACTIONS(419), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(204), 1,
      sym_block,
    STATE(104), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2307] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      sym__line_break,
    ACTIONS(222), 1,
      aux_sym__empty_line_token1,
    ACTIONS(419), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(290), 1,
      sym_block,
    STATE(104), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2330] = 6,
    ACTIONS(52), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(54), 1,
      anon_sym_RETURN,
    ACTIONS(56), 1,
      sym_keyword,
    ACTIONS(76), 1,
      sym_comment,
    STATE(285), 1,
      sym_inline_statement,
    STATE(241), 3,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
  [2351] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym__separator,
    ACTIONS(429), 1,
      sym__line_break,
    STATE(127), 1,
      aux_sym_arguments_repeat1,
    STATE(212), 1,
      sym_arguments,
    STATE(191), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2371] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      sym__separator,
    STATE(162), 1,
      sym__indentation,
    STATE(176), 1,
      sym_else_statement,
    STATE(213), 1,
      sym_finally_statement,
    STATE(159), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [2391] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym__separator,
    ACTIONS(434), 1,
      sym__line_break,
    STATE(127), 1,
      aux_sym_arguments_repeat1,
    STATE(395), 1,
      sym_arguments,
    STATE(191), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2411] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      sym__separator,
    ACTIONS(439), 1,
      sym__line_break,
    ACTIONS(442), 1,
      aux_sym__empty_line_token1,
    STATE(15), 1,
      sym__indentation,
    STATE(90), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2431] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym__separator,
    ACTIONS(341), 1,
      sym__line_break,
    STATE(127), 1,
      aux_sym_arguments_repeat1,
    STATE(292), 1,
      sym_arguments,
    STATE(191), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2451] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym__separator,
    ACTIONS(341), 1,
      sym__line_break,
    STATE(127), 1,
      aux_sym_arguments_repeat1,
    STATE(295), 1,
      sym_arguments,
    STATE(191), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2471] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym__separator,
    ACTIONS(341), 1,
      sym__line_break,
    STATE(127), 1,
      aux_sym_arguments_repeat1,
    STATE(296), 1,
      sym_arguments,
    STATE(191), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2491] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym__separator,
    ACTIONS(341), 1,
      sym__line_break,
    STATE(127), 1,
      aux_sym_arguments_repeat1,
    STATE(300), 1,
      sym_arguments,
    STATE(191), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2511] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym__separator,
    ACTIONS(341), 1,
      sym__line_break,
    STATE(127), 1,
      aux_sym_arguments_repeat1,
    STATE(301), 1,
      sym_arguments,
    STATE(191), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2531] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym__separator,
    ACTIONS(341), 1,
      sym__line_break,
    STATE(127), 1,
      aux_sym_arguments_repeat1,
    STATE(308), 1,
      sym_arguments,
    STATE(191), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2551] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym__separator,
    ACTIONS(341), 1,
      sym__line_break,
    STATE(127), 1,
      aux_sym_arguments_repeat1,
    STATE(325), 1,
      sym_arguments,
    STATE(191), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2571] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(447), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(445), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2585] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym__separator,
    ACTIONS(341), 1,
      sym__line_break,
    STATE(127), 1,
      aux_sym_arguments_repeat1,
    STATE(294), 1,
      sym_arguments,
    STATE(191), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2605] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym__separator,
    ACTIONS(341), 1,
      sym__line_break,
    STATE(127), 1,
      aux_sym_arguments_repeat1,
    STATE(344), 1,
      sym_arguments,
    STATE(191), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2625] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      sym__separator,
    STATE(156), 1,
      sym__indentation,
    STATE(199), 1,
      sym_else_statement,
    STATE(254), 1,
      sym_finally_statement,
    STATE(88), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [2645] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym__separator,
    ACTIONS(341), 1,
      sym__line_break,
    STATE(127), 1,
      aux_sym_arguments_repeat1,
    STATE(350), 1,
      sym_arguments,
    STATE(191), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2665] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(453), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(451), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2679] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      aux_sym__empty_line_token1,
    ACTIONS(455), 1,
      sym__separator,
    ACTIONS(458), 1,
      sym__line_break,
    STATE(15), 1,
      sym__indentation,
    STATE(90), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2699] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      sym__separator,
    STATE(156), 1,
      sym__indentation,
    STATE(199), 1,
      sym_else_statement,
    STATE(254), 1,
      sym_finally_statement,
    STATE(159), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [2719] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(462), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(460), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2733] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(466), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(464), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2747] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(470), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(468), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2761] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(474), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(472), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2775] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym__separator,
    ACTIONS(341), 1,
      sym__line_break,
    STATE(127), 1,
      aux_sym_arguments_repeat1,
    STATE(298), 1,
      sym_arguments,
    STATE(191), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2795] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(478), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(476), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2809] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(482), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(480), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2823] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(486), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(484), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2837] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      sym__separator,
    ACTIONS(491), 1,
      sym__line_break,
    STATE(125), 1,
      aux_sym_arguments_repeat1,
    STATE(212), 1,
      sym_arguments,
    STATE(163), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2857] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym__separator,
    ACTIONS(494), 1,
      sym__line_break,
    STATE(127), 1,
      aux_sym_arguments_repeat1,
    STATE(235), 1,
      sym_arguments,
    STATE(191), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2877] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(499), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(497), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2891] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym__separator,
    ACTIONS(341), 1,
      sym__line_break,
    STATE(127), 1,
      aux_sym_arguments_repeat1,
    STATE(315), 1,
      sym_arguments,
    STATE(191), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2911] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      sym__separator,
    ACTIONS(504), 1,
      sym__line_break,
    STATE(125), 1,
      aux_sym_arguments_repeat1,
    STATE(235), 1,
      sym_arguments,
    STATE(163), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2931] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(509), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(507), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2945] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym__separator,
    ACTIONS(341), 1,
      sym__line_break,
    STATE(127), 1,
      aux_sym_arguments_repeat1,
    STATE(316), 1,
      sym_arguments,
    STATE(191), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2965] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(511), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(315), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2979] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(509), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(507), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [2992] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      sym__separator,
    STATE(160), 1,
      aux_sym_if_statement_repeat1,
    STATE(172), 1,
      sym__indentation,
    STATE(244), 1,
      sym_else_statement,
    STATE(326), 1,
      sym_elseif_statement,
  [3011] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      sym__separator,
    STATE(160), 1,
      aux_sym_if_statement_repeat1,
    STATE(184), 1,
      sym__indentation,
    STATE(208), 1,
      sym_else_statement,
    STATE(326), 1,
      sym_elseif_statement,
  [3030] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      sym__separator,
    ACTIONS(520), 1,
      sym__line_break,
    STATE(182), 1,
      aux_sym_arguments_repeat1,
    STATE(165), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3047] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(470), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(468), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3060] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym__separator,
    ACTIONS(523), 1,
      sym__line_break,
    STATE(182), 1,
      aux_sym_arguments_repeat1,
    STATE(185), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3077] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(462), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(460), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3090] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(474), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(472), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3103] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(499), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(497), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3116] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(511), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(315), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3129] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [3140] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(466), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(464), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3153] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(453), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(451), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3166] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(447), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(445), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3179] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(478), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(476), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3192] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(482), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(480), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3205] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(486), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(484), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3218] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      sym__separator,
    STATE(124), 1,
      aux_sym_if_statement_repeat1,
    STATE(180), 1,
      sym__indentation,
    STATE(239), 1,
      sym_else_statement,
    STATE(326), 1,
      sym_elseif_statement,
  [3237] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(470), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(468), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3250] = 5,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(267), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(530), 1,
      sym_text_chunk,
    STATE(121), 2,
      sym_scalar_variable,
      sym_inline_python_expression,
  [3267] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(474), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(472), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3280] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(499), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(497), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3293] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(509), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(507), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3306] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(511), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(315), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3319] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(453), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(451), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3332] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(447), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(445), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3345] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(482), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(480), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3358] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(486), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(484), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3371] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(462), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(460), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3384] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(466), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(464), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3397] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(478), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(476), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3410] = 5,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(289), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(532), 1,
      sym_text_chunk,
    STATE(131), 2,
      sym_scalar_variable,
      sym_inline_python_expression,
  [3427] = 5,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(257), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(534), 1,
      sym_text_chunk,
    STATE(145), 2,
      sym_scalar_variable,
      sym_inline_python_expression,
  [3444] = 4,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(538), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(157), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(536), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3458] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      anon_sym_END,
    ACTIONS(542), 1,
      anon_sym_ELSE,
    ACTIONS(544), 1,
      anon_sym_EXCEPT,
    ACTIONS(546), 1,
      anon_sym_FINALLY,
  [3474] = 4,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(171), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(536), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3488] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_ELSEIF,
    ACTIONS(552), 1,
      anon_sym_ELSE,
    STATE(205), 1,
      sym_inline_elseif_statement,
    STATE(362), 1,
      sym_inline_else_statement,
  [3504] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      sym__separator,
    STATE(282), 1,
      sym__indentation,
    STATE(159), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [3518] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      sym__separator,
    STATE(160), 1,
      aux_sym_if_statement_repeat1,
    STATE(326), 1,
      sym_elseif_statement,
    STATE(382), 1,
      sym__indentation,
  [3534] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_ELSEIF,
    ACTIONS(552), 1,
      anon_sym_ELSE,
    STATE(205), 1,
      sym_inline_elseif_statement,
    STATE(274), 1,
      sym_inline_else_statement,
  [3550] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      anon_sym_ELSE,
    ACTIONS(544), 1,
      anon_sym_EXCEPT,
    ACTIONS(546), 1,
      anon_sym_FINALLY,
    ACTIONS(560), 1,
      anon_sym_END,
  [3566] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      sym__line_break,
    ACTIONS(562), 1,
      sym__separator,
    STATE(166), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3580] = 4,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(564), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(167), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(536), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3594] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 1,
      sym__separator,
    ACTIONS(568), 1,
      sym__line_break,
    STATE(166), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3608] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      sym__separator,
    ACTIONS(573), 1,
      sym__line_break,
    STATE(166), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3622] = 4,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(171), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(536), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3636] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym__separator,
    ACTIONS(578), 1,
      sym__line_break,
    STATE(174), 1,
      aux_sym_arguments_repeat1,
    STATE(305), 1,
      sym_arguments_without_continuation,
  [3652] = 4,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(580), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(170), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(536), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3666] = 4,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(582), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(171), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(536), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3680] = 4,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(171), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(584), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3694] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 1,
      anon_sym_ELSE,
    ACTIONS(589), 1,
      anon_sym_END,
    ACTIONS(591), 1,
      anon_sym_ELSEIF,
  [3707] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym__separator,
    STATE(174), 1,
      aux_sym_arguments_repeat1,
    STATE(288), 1,
      sym_arguments_without_continuation,
  [3720] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym__separator,
    ACTIONS(593), 1,
      sym__line_break,
    STATE(182), 1,
      aux_sym_arguments_repeat1,
  [3733] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      sym__separator,
    ACTIONS(597), 1,
      sym__line_break,
    STATE(179), 1,
      aux_sym_inline_if_statement_repeat1,
  [3746] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      sym__separator,
    STATE(201), 1,
      sym__indentation,
    STATE(236), 1,
      sym_finally_statement,
  [3759] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      sym__line_break,
    ACTIONS(601), 2,
      sym__separator,
      aux_sym__empty_line_token1,
  [3770] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym__separator,
    ACTIONS(605), 1,
      sym__line_break,
    STATE(195), 1,
      aux_sym_arguments_repeat1,
  [3783] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      sym__separator,
    ACTIONS(609), 1,
      sym__line_break,
    STATE(183), 1,
      aux_sym_inline_if_statement_repeat1,
  [3796] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 1,
      anon_sym_ELSE,
    ACTIONS(591), 1,
      anon_sym_ELSEIF,
    ACTIONS(611), 1,
      anon_sym_END,
  [3809] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym__separator,
    ACTIONS(613), 1,
      sym__line_break,
    STATE(182), 1,
      aux_sym_arguments_repeat1,
  [3822] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      sym__separator,
    ACTIONS(618), 1,
      sym__line_break,
    STATE(182), 1,
      aux_sym_arguments_repeat1,
  [3835] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      sym__separator,
    ACTIONS(623), 1,
      sym__line_break,
    STATE(183), 1,
      aux_sym_inline_if_statement_repeat1,
  [3848] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 1,
      anon_sym_ELSE,
    ACTIONS(591), 1,
      anon_sym_ELSEIF,
    ACTIONS(625), 1,
      anon_sym_END,
  [3861] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      sym__line_break,
    STATE(186), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3872] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(630), 1,
      sym__line_break,
    STATE(186), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3883] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      sym_ellipses,
    ACTIONS(633), 1,
      sym__separator,
    STATE(310), 1,
      sym__indentation,
  [3896] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      sym__line_break,
    ACTIONS(635), 1,
      sym__separator,
    STATE(189), 1,
      aux_sym_arguments_repeat1,
  [3909] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(638), 1,
      sym__separator,
    ACTIONS(641), 1,
      sym__line_break,
    STATE(182), 1,
      aux_sym_arguments_repeat1,
  [3922] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(638), 1,
      sym__separator,
    ACTIONS(641), 1,
      sym__line_break,
    STATE(192), 1,
      aux_sym_arguments_repeat1,
  [3935] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      sym__line_break,
    STATE(186), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3946] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      sym__line_break,
    ACTIONS(643), 1,
      sym__separator,
    STATE(182), 1,
      aux_sym_arguments_repeat1,
  [3959] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 1,
      sym__separator,
    STATE(254), 1,
      sym_finally_statement,
    STATE(258), 1,
      sym__indentation,
  [3972] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(650), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(648), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3983] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym__separator,
    ACTIONS(641), 1,
      sym__line_break,
    STATE(182), 1,
      aux_sym_arguments_repeat1,
  [3996] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      sym__line_break,
    ACTIONS(46), 2,
      sym__separator,
      aux_sym__empty_line_token1,
  [4007] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym__separator,
    ACTIONS(641), 1,
      sym__line_break,
    STATE(181), 1,
      aux_sym_arguments_repeat1,
  [4020] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      sym_ellipses,
    ACTIONS(654), 1,
      sym__separator,
    STATE(342), 1,
      sym__indentation,
  [4033] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      sym__separator,
    STATE(213), 1,
      sym_finally_statement,
    STATE(216), 1,
      sym__indentation,
  [4046] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      anon_sym_RBRACE,
    ACTIONS(660), 1,
      anon_sym_SPACE,
  [4056] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_FINALLY,
    ACTIONS(662), 1,
      anon_sym_END,
  [4066] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      anon_sym_SPACE,
    ACTIONS(666), 1,
      anon_sym_RBRACK,
  [4076] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      sym__separator,
    ACTIONS(670), 1,
      sym__line_break,
  [4086] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 1,
      sym__separator,
    STATE(391), 1,
      sym__indentation,
  [4096] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      sym__line_break,
    ACTIONS(674), 1,
      sym__separator,
  [4106] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      sym__separator,
    STATE(287), 1,
      sym__indentation,
  [4116] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 1,
      sym__separator,
    STATE(314), 1,
      sym__indentation,
  [4126] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 1,
      sym__separator,
    STATE(277), 1,
      sym__indentation,
  [4136] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      anon_sym_RBRACE,
    ACTIONS(684), 1,
      anon_sym_SPACE,
  [4146] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      anon_sym_SPACE,
    ACTIONS(688), 1,
      anon_sym_RBRACK,
  [4156] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(690), 1,
      anon_sym_SPACE,
    ACTIONS(692), 1,
      sym_variable_name,
  [4166] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      sym__separator,
    ACTIONS(696), 1,
      sym__line_break,
  [4176] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      sym__separator,
    STATE(333), 1,
      sym__indentation,
  [4186] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_ELSEIF,
    STATE(205), 1,
      sym_inline_elseif_statement,
  [4196] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 1,
      sym__separator,
    ACTIONS(702), 1,
      sym__line_break,
  [4206] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_FINALLY,
    ACTIONS(560), 1,
      anon_sym_END,
  [4216] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(324), 1,
      sym_scalar_variable,
  [4226] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      sym__separator,
    ACTIONS(706), 1,
      sym__line_break,
  [4236] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      sym__separator,
    STATE(237), 1,
      aux_sym_for_statement_repeat1,
  [4246] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_SPACE,
    ACTIONS(712), 1,
      anon_sym_RBRACK,
  [4256] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 1,
      sym__separator,
    STATE(219), 1,
      aux_sym_for_statement_repeat1,
  [4266] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 1,
      anon_sym_SPACE,
    ACTIONS(718), 1,
      anon_sym_RBRACK,
  [4276] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 1,
      anon_sym_RBRACE,
    ACTIONS(722), 1,
      anon_sym_SPACE,
  [4286] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 1,
      sym__separator,
    ACTIONS(726), 1,
      sym__line_break,
  [4296] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_SPACE,
    ACTIONS(730), 1,
      sym_variable_name,
  [4306] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      sym__line_break,
    ACTIONS(732), 1,
      sym__separator,
  [4316] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(734), 1,
      anon_sym_SPACE,
    ACTIONS(736), 1,
      sym_variable_name,
  [4326] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      anon_sym_SPACE,
    ACTIONS(740), 1,
      anon_sym_RBRACK,
  [4336] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      sym__separator,
    ACTIONS(744), 1,
      sym__line_break,
  [4346] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      sym__separator,
    ACTIONS(748), 1,
      sym__line_break,
  [4356] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 1,
      anon_sym_RBRACE,
    ACTIONS(752), 1,
      anon_sym_SPACE,
  [4366] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      anon_sym_RBRACE,
    ACTIONS(756), 1,
      anon_sym_SPACE,
  [4376] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      sym__separator,
    STATE(299), 1,
      sym__indentation,
  [4386] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      anon_sym_RBRACE,
    ACTIONS(762), 1,
      anon_sym_SPACE,
  [4396] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      sym__separator,
    ACTIONS(766), 1,
      sym__line_break,
  [4406] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      sym__separator,
    STATE(384), 1,
      sym__indentation,
  [4416] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      sym__separator,
    STATE(237), 1,
      aux_sym_for_statement_repeat1,
  [4426] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 1,
      anon_sym_SPACE,
    ACTIONS(775), 1,
      anon_sym_RBRACK,
  [4436] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(777), 1,
      sym__separator,
    STATE(366), 1,
      sym__indentation,
  [4446] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(779), 1,
      anon_sym_SPACE,
    ACTIONS(781), 1,
      sym_variable_name,
  [4456] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(783), 1,
      sym__separator,
    ACTIONS(785), 1,
      sym__line_break,
  [4466] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(787), 1,
      aux_sym_settings_section_token2,
    ACTIONS(789), 1,
      sym__line_break,
  [4476] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(791), 1,
      sym__separator,
    ACTIONS(793), 1,
      sym__line_break,
  [4486] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(795), 1,
      sym__separator,
    STATE(378), 1,
      sym__indentation,
  [4496] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(797), 1,
      anon_sym_RBRACE,
    ACTIONS(799), 1,
      anon_sym_SPACE,
  [4506] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 1,
      anon_sym_RBRACE,
    ACTIONS(803), 1,
      anon_sym_SPACE,
  [4516] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(805), 1,
      anon_sym_RBRACE,
    ACTIONS(807), 1,
      anon_sym_SPACE,
  [4526] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(809), 1,
      aux_sym_settings_section_token2,
    ACTIONS(811), 1,
      sym__line_break,
  [4536] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      sym__separator,
    ACTIONS(815), 1,
      sym__line_break,
  [4546] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      sym__line_break,
    ACTIONS(817), 1,
      sym__separator,
  [4556] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(819), 1,
      anon_sym_RBRACE,
    ACTIONS(821), 1,
      anon_sym_SPACE,
  [4566] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(823), 1,
      anon_sym_RBRACE,
    ACTIONS(825), 1,
      anon_sym_SPACE,
  [4576] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      anon_sym_RBRACE,
    ACTIONS(829), 1,
      anon_sym_SPACE,
  [4586] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 1,
      sym__separator,
    STATE(349), 1,
      sym__indentation,
  [4596] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(833), 1,
      anon_sym_RBRACE,
    ACTIONS(835), 1,
      anon_sym_SPACE,
  [4606] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym_RBRACE,
    ACTIONS(839), 1,
      anon_sym_SPACE,
  [4616] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(841), 1,
      anon_sym_RBRACE,
    ACTIONS(843), 1,
      anon_sym_SPACE,
  [4626] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      anon_sym_END,
    ACTIONS(546), 1,
      anon_sym_FINALLY,
  [4636] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(845), 1,
      aux_sym_settings_section_token2,
    ACTIONS(847), 1,
      sym__line_break,
  [4646] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(849), 1,
      anon_sym_RBRACE,
    ACTIONS(851), 1,
      anon_sym_SPACE,
  [4656] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(853), 1,
      anon_sym_RBRACE,
    ACTIONS(855), 1,
      anon_sym_SPACE,
  [4666] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(857), 1,
      anon_sym_RBRACE,
    ACTIONS(859), 1,
      anon_sym_SPACE,
  [4676] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(861), 1,
      anon_sym_RBRACE,
    ACTIONS(863), 1,
      anon_sym_SPACE,
  [4686] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      anon_sym_RBRACE,
    ACTIONS(867), 1,
      anon_sym_SPACE,
  [4696] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(869), 1,
      anon_sym_SPACE,
    ACTIONS(871), 1,
      sym_variable_name,
  [4706] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(873), 1,
      anon_sym_SPACE,
    ACTIONS(875), 1,
      sym_variable_name,
  [4716] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(877), 1,
      anon_sym_SPACE,
    ACTIONS(879), 1,
      sym_variable_name,
  [4726] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(881), 1,
      anon_sym_SPACE,
    ACTIONS(883), 1,
      sym_variable_name,
  [4736] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(885), 1,
      anon_sym_SPACE,
    ACTIONS(887), 1,
      sym_variable_name,
  [4746] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(889), 1,
      anon_sym_SPACE,
    ACTIONS(891), 1,
      sym_variable_name,
  [4756] = 3,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(893), 1,
      aux_sym_settings_section_token2,
    ACTIONS(895), 1,
      sym__line_break,
  [4766] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(897), 1,
      anon_sym_RBRACE,
  [4773] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 1,
      anon_sym_RBRACE,
  [4780] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(899), 1,
      sym__line_break,
  [4787] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(901), 1,
      sym__line_break,
  [4794] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(903), 1,
      sym__line_break,
  [4801] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(905), 1,
      anon_sym_END,
  [4808] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(907), 1,
      sym__line_break,
  [4815] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(909), 1,
      sym__line_break,
  [4822] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(911), 1,
      sym__line_break,
  [4829] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(913), 1,
      sym__line_break,
  [4836] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_EXCEPT,
  [4843] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(915), 1,
      sym__line_break,
  [4850] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(917), 1,
      sym__separator,
  [4857] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(919), 1,
      sym__line_break,
  [4864] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(921), 1,
      sym__line_break,
  [4871] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(923), 1,
      anon_sym_END,
  [4878] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(925), 1,
      sym__line_break,
  [4885] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(927), 1,
      sym__line_break,
  [4892] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(929), 1,
      sym__separator,
  [4899] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(931), 1,
      sym__line_break,
  [4906] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(933), 1,
      sym__line_break,
  [4913] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(935), 1,
      sym__line_break,
  [4920] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(937), 1,
      sym__line_break,
  [4927] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(939), 1,
      sym__line_break,
  [4934] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(941), 1,
      sym__line_break,
  [4941] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(943), 1,
      sym__line_break,
  [4948] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(945), 1,
      sym__line_break,
  [4955] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      anon_sym_END,
  [4962] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(947), 1,
      sym__line_break,
  [4969] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(949), 1,
      sym__line_break,
  [4976] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(951), 1,
      ts_builtin_sym_end,
  [4983] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(953), 1,
      anon_sym_RBRACE,
  [4990] = 2,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(955), 1,
      sym_variable_name,
  [4997] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(957), 1,
      sym__line_break,
  [5004] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(959), 1,
      anon_sym_RBRACE,
  [5011] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(961), 1,
      anon_sym_RBRACE,
  [5018] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(963), 1,
      sym__line_break,
  [5025] = 2,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(965), 1,
      sym_variable_name,
  [5032] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      sym_ellipses,
  [5039] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(967), 1,
      sym__line_break,
  [5046] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(969), 1,
      anon_sym_RBRACK,
  [5053] = 2,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(971), 1,
      sym_variable_name,
  [5060] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(973), 1,
      anon_sym_END,
  [5067] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(975), 1,
      sym__line_break,
  [5074] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(977), 1,
      sym__line_break,
  [5081] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(979), 1,
      sym__line_break,
  [5088] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(981), 1,
      sym__line_break,
  [5095] = 2,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(983), 1,
      sym_variable_name,
  [5102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(985), 1,
      sym__separator,
  [5109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(987), 1,
      sym__line_break,
  [5116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      sym__separator,
  [5123] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(989), 1,
      sym__line_break,
  [5130] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(991), 1,
      sym__separator,
  [5137] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(993), 1,
      sym__line_break,
  [5144] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(995), 1,
      sym__separator,
  [5151] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(997), 1,
      sym__line_break,
  [5158] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      sym__separator,
  [5165] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(999), 1,
      anon_sym_RBRACK,
  [5172] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1001), 1,
      sym__line_break,
  [5179] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      sym__separator,
  [5186] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1003), 1,
      sym__line_break,
  [5193] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 1,
      anon_sym_END,
  [5200] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1005), 1,
      sym__line_break,
  [5207] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 1,
      anon_sym_RBRACE,
  [5214] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1007), 1,
      sym__separator,
  [5221] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1009), 1,
      sym__separator,
  [5228] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1011), 1,
      sym__line_break,
  [5235] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1013), 1,
      anon_sym_RBRACE,
  [5242] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1015), 1,
      anon_sym_RBRACK,
  [5249] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1017), 1,
      sym__line_break,
  [5256] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1019), 1,
      sym_ellipses,
  [5263] = 2,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(1021), 1,
      sym_variable_name,
  [5270] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1023), 1,
      sym__line_break,
  [5277] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1025), 1,
      sym__line_break,
  [5284] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1027), 1,
      sym__separator,
  [5291] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1029), 1,
      sym__line_break,
  [5298] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1031), 1,
      sym__separator,
  [5305] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_END,
  [5312] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1033), 1,
      sym__line_break,
  [5319] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1035), 1,
      sym__separator,
  [5326] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(819), 1,
      anon_sym_RBRACE,
  [5333] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1037), 1,
      sym__separator,
  [5340] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(823), 1,
      anon_sym_RBRACE,
  [5347] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1039), 1,
      sym__line_break,
  [5354] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      anon_sym_RBRACE,
  [5361] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1041), 1,
      anon_sym_RBRACE,
  [5368] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1043), 1,
      anon_sym_RBRACE,
  [5375] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1045), 1,
      anon_sym_RBRACE,
  [5382] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1047), 1,
      anon_sym_RBRACE,
  [5389] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1049), 1,
      sym__line_break,
  [5396] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1051), 1,
      sym__line_break,
  [5403] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1053), 1,
      sym__line_break,
  [5410] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1055), 1,
      sym__line_break,
  [5417] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1057), 1,
      sym__line_break,
  [5424] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1059), 1,
      anon_sym_END,
  [5431] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1061), 1,
      sym__line_break,
  [5438] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1063), 1,
      sym__line_break,
  [5445] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(849), 1,
      anon_sym_RBRACE,
  [5452] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      anon_sym_RBRACE,
  [5459] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(853), 1,
      anon_sym_RBRACE,
  [5466] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1065), 1,
      anon_sym_RBRACK,
  [5473] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(857), 1,
      anon_sym_RBRACE,
  [5480] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1067), 1,
      anon_sym_RBRACE,
  [5487] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1069), 1,
      anon_sym_RBRACE,
  [5494] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1071), 1,
      anon_sym_RBRACE,
  [5501] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1073), 1,
      sym__line_break,
  [5508] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1075), 1,
      anon_sym_END,
  [5515] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1077), 1,
      sym__line_break,
  [5522] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      anon_sym_RBRACE,
  [5529] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1079), 1,
      anon_sym_RBRACE,
  [5536] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_ELSEIF,
  [5543] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1081), 1,
      sym__line_break,
  [5550] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1083), 1,
      anon_sym_END,
  [5557] = 2,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(1085), 1,
      sym_variable_name,
  [5564] = 2,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(1087), 1,
      sym_variable_name,
  [5571] = 2,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(1089), 1,
      sym_variable_name,
  [5578] = 2,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(1091), 1,
      sym_variable_name,
  [5585] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1093), 1,
      sym__separator,
  [5592] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1095), 1,
      sym__line_break,
  [5599] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1097), 1,
      anon_sym_END,
  [5606] = 2,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(1099), 1,
      sym_variable_name,
  [5613] = 2,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(1101), 1,
      sym_variable_name,
  [5620] = 2,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(1103), 1,
      sym_variable_name,
  [5627] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1105), 1,
      sym__line_break,
  [5634] = 2,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(1107), 1,
      sym_variable_name,
  [5641] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1109), 1,
      sym__separator,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 44,
  [SMALL_STATE(4)] = 88,
  [SMALL_STATE(5)] = 132,
  [SMALL_STATE(6)] = 176,
  [SMALL_STATE(7)] = 220,
  [SMALL_STATE(8)] = 253,
  [SMALL_STATE(9)] = 285,
  [SMALL_STATE(10)] = 339,
  [SMALL_STATE(11)] = 390,
  [SMALL_STATE(12)] = 436,
  [SMALL_STATE(13)] = 482,
  [SMALL_STATE(14)] = 527,
  [SMALL_STATE(15)] = 572,
  [SMALL_STATE(16)] = 614,
  [SMALL_STATE(17)] = 644,
  [SMALL_STATE(18)] = 674,
  [SMALL_STATE(19)] = 704,
  [SMALL_STATE(20)] = 734,
  [SMALL_STATE(21)] = 763,
  [SMALL_STATE(22)] = 790,
  [SMALL_STATE(23)] = 817,
  [SMALL_STATE(24)] = 844,
  [SMALL_STATE(25)] = 871,
  [SMALL_STATE(26)] = 900,
  [SMALL_STATE(27)] = 925,
  [SMALL_STATE(28)] = 952,
  [SMALL_STATE(29)] = 977,
  [SMALL_STATE(30)] = 1004,
  [SMALL_STATE(31)] = 1033,
  [SMALL_STATE(32)] = 1066,
  [SMALL_STATE(33)] = 1091,
  [SMALL_STATE(34)] = 1116,
  [SMALL_STATE(35)] = 1141,
  [SMALL_STATE(36)] = 1168,
  [SMALL_STATE(37)] = 1195,
  [SMALL_STATE(38)] = 1224,
  [SMALL_STATE(39)] = 1251,
  [SMALL_STATE(40)] = 1278,
  [SMALL_STATE(41)] = 1306,
  [SMALL_STATE(42)] = 1334,
  [SMALL_STATE(43)] = 1362,
  [SMALL_STATE(44)] = 1394,
  [SMALL_STATE(45)] = 1422,
  [SMALL_STATE(46)] = 1450,
  [SMALL_STATE(47)] = 1478,
  [SMALL_STATE(48)] = 1506,
  [SMALL_STATE(49)] = 1534,
  [SMALL_STATE(50)] = 1562,
  [SMALL_STATE(51)] = 1590,
  [SMALL_STATE(52)] = 1615,
  [SMALL_STATE(53)] = 1640,
  [SMALL_STATE(54)] = 1665,
  [SMALL_STATE(55)] = 1682,
  [SMALL_STATE(56)] = 1699,
  [SMALL_STATE(57)] = 1716,
  [SMALL_STATE(58)] = 1740,
  [SMALL_STATE(59)] = 1764,
  [SMALL_STATE(60)] = 1780,
  [SMALL_STATE(61)] = 1796,
  [SMALL_STATE(62)] = 1820,
  [SMALL_STATE(63)] = 1836,
  [SMALL_STATE(64)] = 1852,
  [SMALL_STATE(65)] = 1878,
  [SMALL_STATE(66)] = 1896,
  [SMALL_STATE(67)] = 1920,
  [SMALL_STATE(68)] = 1944,
  [SMALL_STATE(69)] = 1962,
  [SMALL_STATE(70)] = 1978,
  [SMALL_STATE(71)] = 2002,
  [SMALL_STATE(72)] = 2026,
  [SMALL_STATE(73)] = 2050,
  [SMALL_STATE(74)] = 2074,
  [SMALL_STATE(75)] = 2089,
  [SMALL_STATE(76)] = 2104,
  [SMALL_STATE(77)] = 2127,
  [SMALL_STATE(78)] = 2148,
  [SMALL_STATE(79)] = 2171,
  [SMALL_STATE(80)] = 2194,
  [SMALL_STATE(81)] = 2217,
  [SMALL_STATE(82)] = 2240,
  [SMALL_STATE(83)] = 2261,
  [SMALL_STATE(84)] = 2284,
  [SMALL_STATE(85)] = 2307,
  [SMALL_STATE(86)] = 2330,
  [SMALL_STATE(87)] = 2351,
  [SMALL_STATE(88)] = 2371,
  [SMALL_STATE(89)] = 2391,
  [SMALL_STATE(90)] = 2411,
  [SMALL_STATE(91)] = 2431,
  [SMALL_STATE(92)] = 2451,
  [SMALL_STATE(93)] = 2471,
  [SMALL_STATE(94)] = 2491,
  [SMALL_STATE(95)] = 2511,
  [SMALL_STATE(96)] = 2531,
  [SMALL_STATE(97)] = 2551,
  [SMALL_STATE(98)] = 2571,
  [SMALL_STATE(99)] = 2585,
  [SMALL_STATE(100)] = 2605,
  [SMALL_STATE(101)] = 2625,
  [SMALL_STATE(102)] = 2645,
  [SMALL_STATE(103)] = 2665,
  [SMALL_STATE(104)] = 2679,
  [SMALL_STATE(105)] = 2699,
  [SMALL_STATE(106)] = 2719,
  [SMALL_STATE(107)] = 2733,
  [SMALL_STATE(108)] = 2747,
  [SMALL_STATE(109)] = 2761,
  [SMALL_STATE(110)] = 2775,
  [SMALL_STATE(111)] = 2795,
  [SMALL_STATE(112)] = 2809,
  [SMALL_STATE(113)] = 2823,
  [SMALL_STATE(114)] = 2837,
  [SMALL_STATE(115)] = 2857,
  [SMALL_STATE(116)] = 2877,
  [SMALL_STATE(117)] = 2891,
  [SMALL_STATE(118)] = 2911,
  [SMALL_STATE(119)] = 2931,
  [SMALL_STATE(120)] = 2945,
  [SMALL_STATE(121)] = 2965,
  [SMALL_STATE(122)] = 2979,
  [SMALL_STATE(123)] = 2992,
  [SMALL_STATE(124)] = 3011,
  [SMALL_STATE(125)] = 3030,
  [SMALL_STATE(126)] = 3047,
  [SMALL_STATE(127)] = 3060,
  [SMALL_STATE(128)] = 3077,
  [SMALL_STATE(129)] = 3090,
  [SMALL_STATE(130)] = 3103,
  [SMALL_STATE(131)] = 3116,
  [SMALL_STATE(132)] = 3129,
  [SMALL_STATE(133)] = 3140,
  [SMALL_STATE(134)] = 3153,
  [SMALL_STATE(135)] = 3166,
  [SMALL_STATE(136)] = 3179,
  [SMALL_STATE(137)] = 3192,
  [SMALL_STATE(138)] = 3205,
  [SMALL_STATE(139)] = 3218,
  [SMALL_STATE(140)] = 3237,
  [SMALL_STATE(141)] = 3250,
  [SMALL_STATE(142)] = 3267,
  [SMALL_STATE(143)] = 3280,
  [SMALL_STATE(144)] = 3293,
  [SMALL_STATE(145)] = 3306,
  [SMALL_STATE(146)] = 3319,
  [SMALL_STATE(147)] = 3332,
  [SMALL_STATE(148)] = 3345,
  [SMALL_STATE(149)] = 3358,
  [SMALL_STATE(150)] = 3371,
  [SMALL_STATE(151)] = 3384,
  [SMALL_STATE(152)] = 3397,
  [SMALL_STATE(153)] = 3410,
  [SMALL_STATE(154)] = 3427,
  [SMALL_STATE(155)] = 3444,
  [SMALL_STATE(156)] = 3458,
  [SMALL_STATE(157)] = 3474,
  [SMALL_STATE(158)] = 3488,
  [SMALL_STATE(159)] = 3504,
  [SMALL_STATE(160)] = 3518,
  [SMALL_STATE(161)] = 3534,
  [SMALL_STATE(162)] = 3550,
  [SMALL_STATE(163)] = 3566,
  [SMALL_STATE(164)] = 3580,
  [SMALL_STATE(165)] = 3594,
  [SMALL_STATE(166)] = 3608,
  [SMALL_STATE(167)] = 3622,
  [SMALL_STATE(168)] = 3636,
  [SMALL_STATE(169)] = 3652,
  [SMALL_STATE(170)] = 3666,
  [SMALL_STATE(171)] = 3680,
  [SMALL_STATE(172)] = 3694,
  [SMALL_STATE(173)] = 3707,
  [SMALL_STATE(174)] = 3720,
  [SMALL_STATE(175)] = 3733,
  [SMALL_STATE(176)] = 3746,
  [SMALL_STATE(177)] = 3759,
  [SMALL_STATE(178)] = 3770,
  [SMALL_STATE(179)] = 3783,
  [SMALL_STATE(180)] = 3796,
  [SMALL_STATE(181)] = 3809,
  [SMALL_STATE(182)] = 3822,
  [SMALL_STATE(183)] = 3835,
  [SMALL_STATE(184)] = 3848,
  [SMALL_STATE(185)] = 3861,
  [SMALL_STATE(186)] = 3872,
  [SMALL_STATE(187)] = 3883,
  [SMALL_STATE(188)] = 3896,
  [SMALL_STATE(189)] = 3909,
  [SMALL_STATE(190)] = 3922,
  [SMALL_STATE(191)] = 3935,
  [SMALL_STATE(192)] = 3946,
  [SMALL_STATE(193)] = 3959,
  [SMALL_STATE(194)] = 3972,
  [SMALL_STATE(195)] = 3983,
  [SMALL_STATE(196)] = 3996,
  [SMALL_STATE(197)] = 4007,
  [SMALL_STATE(198)] = 4020,
  [SMALL_STATE(199)] = 4033,
  [SMALL_STATE(200)] = 4046,
  [SMALL_STATE(201)] = 4056,
  [SMALL_STATE(202)] = 4066,
  [SMALL_STATE(203)] = 4076,
  [SMALL_STATE(204)] = 4086,
  [SMALL_STATE(205)] = 4096,
  [SMALL_STATE(206)] = 4106,
  [SMALL_STATE(207)] = 4116,
  [SMALL_STATE(208)] = 4126,
  [SMALL_STATE(209)] = 4136,
  [SMALL_STATE(210)] = 4146,
  [SMALL_STATE(211)] = 4156,
  [SMALL_STATE(212)] = 4166,
  [SMALL_STATE(213)] = 4176,
  [SMALL_STATE(214)] = 4186,
  [SMALL_STATE(215)] = 4196,
  [SMALL_STATE(216)] = 4206,
  [SMALL_STATE(217)] = 4216,
  [SMALL_STATE(218)] = 4226,
  [SMALL_STATE(219)] = 4236,
  [SMALL_STATE(220)] = 4246,
  [SMALL_STATE(221)] = 4256,
  [SMALL_STATE(222)] = 4266,
  [SMALL_STATE(223)] = 4276,
  [SMALL_STATE(224)] = 4286,
  [SMALL_STATE(225)] = 4296,
  [SMALL_STATE(226)] = 4306,
  [SMALL_STATE(227)] = 4316,
  [SMALL_STATE(228)] = 4326,
  [SMALL_STATE(229)] = 4336,
  [SMALL_STATE(230)] = 4346,
  [SMALL_STATE(231)] = 4356,
  [SMALL_STATE(232)] = 4366,
  [SMALL_STATE(233)] = 4376,
  [SMALL_STATE(234)] = 4386,
  [SMALL_STATE(235)] = 4396,
  [SMALL_STATE(236)] = 4406,
  [SMALL_STATE(237)] = 4416,
  [SMALL_STATE(238)] = 4426,
  [SMALL_STATE(239)] = 4436,
  [SMALL_STATE(240)] = 4446,
  [SMALL_STATE(241)] = 4456,
  [SMALL_STATE(242)] = 4466,
  [SMALL_STATE(243)] = 4476,
  [SMALL_STATE(244)] = 4486,
  [SMALL_STATE(245)] = 4496,
  [SMALL_STATE(246)] = 4506,
  [SMALL_STATE(247)] = 4516,
  [SMALL_STATE(248)] = 4526,
  [SMALL_STATE(249)] = 4536,
  [SMALL_STATE(250)] = 4546,
  [SMALL_STATE(251)] = 4556,
  [SMALL_STATE(252)] = 4566,
  [SMALL_STATE(253)] = 4576,
  [SMALL_STATE(254)] = 4586,
  [SMALL_STATE(255)] = 4596,
  [SMALL_STATE(256)] = 4606,
  [SMALL_STATE(257)] = 4616,
  [SMALL_STATE(258)] = 4626,
  [SMALL_STATE(259)] = 4636,
  [SMALL_STATE(260)] = 4646,
  [SMALL_STATE(261)] = 4656,
  [SMALL_STATE(262)] = 4666,
  [SMALL_STATE(263)] = 4676,
  [SMALL_STATE(264)] = 4686,
  [SMALL_STATE(265)] = 4696,
  [SMALL_STATE(266)] = 4706,
  [SMALL_STATE(267)] = 4716,
  [SMALL_STATE(268)] = 4726,
  [SMALL_STATE(269)] = 4736,
  [SMALL_STATE(270)] = 4746,
  [SMALL_STATE(271)] = 4756,
  [SMALL_STATE(272)] = 4766,
  [SMALL_STATE(273)] = 4773,
  [SMALL_STATE(274)] = 4780,
  [SMALL_STATE(275)] = 4787,
  [SMALL_STATE(276)] = 4794,
  [SMALL_STATE(277)] = 4801,
  [SMALL_STATE(278)] = 4808,
  [SMALL_STATE(279)] = 4815,
  [SMALL_STATE(280)] = 4822,
  [SMALL_STATE(281)] = 4829,
  [SMALL_STATE(282)] = 4836,
  [SMALL_STATE(283)] = 4843,
  [SMALL_STATE(284)] = 4850,
  [SMALL_STATE(285)] = 4857,
  [SMALL_STATE(286)] = 4864,
  [SMALL_STATE(287)] = 4871,
  [SMALL_STATE(288)] = 4878,
  [SMALL_STATE(289)] = 4885,
  [SMALL_STATE(290)] = 4892,
  [SMALL_STATE(291)] = 4899,
  [SMALL_STATE(292)] = 4906,
  [SMALL_STATE(293)] = 4913,
  [SMALL_STATE(294)] = 4920,
  [SMALL_STATE(295)] = 4927,
  [SMALL_STATE(296)] = 4934,
  [SMALL_STATE(297)] = 4941,
  [SMALL_STATE(298)] = 4948,
  [SMALL_STATE(299)] = 4955,
  [SMALL_STATE(300)] = 4962,
  [SMALL_STATE(301)] = 4969,
  [SMALL_STATE(302)] = 4976,
  [SMALL_STATE(303)] = 4983,
  [SMALL_STATE(304)] = 4990,
  [SMALL_STATE(305)] = 4997,
  [SMALL_STATE(306)] = 5004,
  [SMALL_STATE(307)] = 5011,
  [SMALL_STATE(308)] = 5018,
  [SMALL_STATE(309)] = 5025,
  [SMALL_STATE(310)] = 5032,
  [SMALL_STATE(311)] = 5039,
  [SMALL_STATE(312)] = 5046,
  [SMALL_STATE(313)] = 5053,
  [SMALL_STATE(314)] = 5060,
  [SMALL_STATE(315)] = 5067,
  [SMALL_STATE(316)] = 5074,
  [SMALL_STATE(317)] = 5081,
  [SMALL_STATE(318)] = 5088,
  [SMALL_STATE(319)] = 5095,
  [SMALL_STATE(320)] = 5102,
  [SMALL_STATE(321)] = 5109,
  [SMALL_STATE(322)] = 5116,
  [SMALL_STATE(323)] = 5123,
  [SMALL_STATE(324)] = 5130,
  [SMALL_STATE(325)] = 5137,
  [SMALL_STATE(326)] = 5144,
  [SMALL_STATE(327)] = 5151,
  [SMALL_STATE(328)] = 5158,
  [SMALL_STATE(329)] = 5165,
  [SMALL_STATE(330)] = 5172,
  [SMALL_STATE(331)] = 5179,
  [SMALL_STATE(332)] = 5186,
  [SMALL_STATE(333)] = 5193,
  [SMALL_STATE(334)] = 5200,
  [SMALL_STATE(335)] = 5207,
  [SMALL_STATE(336)] = 5214,
  [SMALL_STATE(337)] = 5221,
  [SMALL_STATE(338)] = 5228,
  [SMALL_STATE(339)] = 5235,
  [SMALL_STATE(340)] = 5242,
  [SMALL_STATE(341)] = 5249,
  [SMALL_STATE(342)] = 5256,
  [SMALL_STATE(343)] = 5263,
  [SMALL_STATE(344)] = 5270,
  [SMALL_STATE(345)] = 5277,
  [SMALL_STATE(346)] = 5284,
  [SMALL_STATE(347)] = 5291,
  [SMALL_STATE(348)] = 5298,
  [SMALL_STATE(349)] = 5305,
  [SMALL_STATE(350)] = 5312,
  [SMALL_STATE(351)] = 5319,
  [SMALL_STATE(352)] = 5326,
  [SMALL_STATE(353)] = 5333,
  [SMALL_STATE(354)] = 5340,
  [SMALL_STATE(355)] = 5347,
  [SMALL_STATE(356)] = 5354,
  [SMALL_STATE(357)] = 5361,
  [SMALL_STATE(358)] = 5368,
  [SMALL_STATE(359)] = 5375,
  [SMALL_STATE(360)] = 5382,
  [SMALL_STATE(361)] = 5389,
  [SMALL_STATE(362)] = 5396,
  [SMALL_STATE(363)] = 5403,
  [SMALL_STATE(364)] = 5410,
  [SMALL_STATE(365)] = 5417,
  [SMALL_STATE(366)] = 5424,
  [SMALL_STATE(367)] = 5431,
  [SMALL_STATE(368)] = 5438,
  [SMALL_STATE(369)] = 5445,
  [SMALL_STATE(370)] = 5452,
  [SMALL_STATE(371)] = 5459,
  [SMALL_STATE(372)] = 5466,
  [SMALL_STATE(373)] = 5473,
  [SMALL_STATE(374)] = 5480,
  [SMALL_STATE(375)] = 5487,
  [SMALL_STATE(376)] = 5494,
  [SMALL_STATE(377)] = 5501,
  [SMALL_STATE(378)] = 5508,
  [SMALL_STATE(379)] = 5515,
  [SMALL_STATE(380)] = 5522,
  [SMALL_STATE(381)] = 5529,
  [SMALL_STATE(382)] = 5536,
  [SMALL_STATE(383)] = 5543,
  [SMALL_STATE(384)] = 5550,
  [SMALL_STATE(385)] = 5557,
  [SMALL_STATE(386)] = 5564,
  [SMALL_STATE(387)] = 5571,
  [SMALL_STATE(388)] = 5578,
  [SMALL_STATE(389)] = 5585,
  [SMALL_STATE(390)] = 5592,
  [SMALL_STATE(391)] = 5599,
  [SMALL_STATE(392)] = 5606,
  [SMALL_STATE(393)] = 5613,
  [SMALL_STATE(394)] = 5620,
  [SMALL_STATE(395)] = 5627,
  [SMALL_STATE(396)] = 5634,
  [SMALL_STATE(397)] = 5641,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 3, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 2, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 4, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2, 0, 0),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2, 0, 0), SHIFT_REPEAT(224),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_settings_section_repeat1, 2, 0, 0), SHIFT_REPEAT(293),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__empty_line, 2, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__empty_line, 2, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_statement, 3, 0, 1),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting_statement, 3, 0, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition_body, 1, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition_body, 1, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_definition_body, 1, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_definition_body, 1, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2, 0, 0),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2, 0, 0), SHIFT_REPEAT(361),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2, 0, 0),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2, 0, 0), SHIFT_REPEAT(361),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 4, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 4, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keywords_section_repeat1, 2, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2, 0, 0),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2, 0, 0), SHIFT_REPEAT(330),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2, 0, 0), SHIFT_REPEAT(338),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_section, 4, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_section, 4, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_cases_section_repeat1, 2, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2, 0, 0),
  [171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2, 0, 0), SHIFT_REPEAT(168),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2, 0, 0), SHIFT_REPEAT(338),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 2, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 2, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 2, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 3, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_section, 2, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_section, 2, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(271),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(242),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(248),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(259),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 4, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2, 0, 0),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2, 0, 0), SHIFT_REPEAT(304),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variables_section_repeat1, 2, 0, 0), SHIFT_REPEAT(293),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 3, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 3, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_section, 3, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_section, 3, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 2, 0, 0),
  [303] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(225),
  [306] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(155),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 3, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 3, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 3, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 3, 0, 0),
  [325] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(227),
  [328] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(154),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(169),
  [334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5, 0, 0),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 5, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition, 3, 0, 2),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition, 3, 0, 2),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_assignment, 3, 0, 0), SHIFT(187),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_definition, 3, 0, 2),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_definition, 3, 0, 2),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 6, 0, 0),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 6, 0, 0),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [366] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_except_statement, 3, 100, 0), SHIFT(13),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [383] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(265),
  [386] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(153),
  [389] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(164),
  [392] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [397] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_variable_assignment, 3, 0, 0), SHIFT(41),
  [400] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_assignment, 3, 0, 0), SHIFT(198),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [421] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_finally_statement, 3, 100, 0), SHIFT(15),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [426] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_except_statement, 4, 100, 0), SHIFT(15),
  [429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_keyword_invocation, 1, 0, 0), SHIFT(187),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [436] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [439] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(90),
  [442] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(377),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 4, 0, 0),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 4, 0, 0),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 4, 0, 0),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 4, 0, 0),
  [455] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_block, 1, 0, 0), SHIFT(15),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 3, 0, 0),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 3, 0, 0),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 4, 0, 0),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 4, 0, 0),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_python_expression, 2, 0, 0),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_python_expression, 2, 0, 0),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 3, 0, 0),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 3, 0, 0),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 5, 0, 0),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 5, 0, 0),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 5, 0, 0),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 5, 0, 0),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 5, 0, 0),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 5, 0, 0),
  [488] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_keyword_invocation, 1, 0, 0), SHIFT(41),
  [491] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_keyword_invocation, 1, 0, 0), SHIFT(198),
  [494] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_assignment, 4, 0, 0), SHIFT(187),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 3, 0, 0),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 3, 0, 0),
  [501] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_variable_assignment, 4, 0, 0), SHIFT(41),
  [504] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_assignment, 4, 0, 0), SHIFT(198),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_python_expression, 3, 0, 3),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_python_expression, 3, 0, 3),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [517] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_arguments, 1, 0, 0), SHIFT(41),
  [520] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 1, 0, 0), SHIFT(198),
  [523] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 1, 0, 0), SHIFT(187),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1, 0, 0),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [554] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_try_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(282),
  [557] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2, 0, 10), SHIFT_REPEAT(382),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 1, 0, 0),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2, 0, 0),
  [568] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 2, 0, 0), SHIFT(198),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 2, 0, 0),
  [573] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2, 0, 0), SHIFT_REPEAT(198),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [584] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_python_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(194),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_python_expression_repeat1, 2, 0, 0),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments_without_continuation, 1, 0, 0),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 5, 0, 0),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 3, 0, 0),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 3, 0, 0),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 2, 100, 0),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 6, 0, 0),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 4, 100, 0),
  [615] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0),
  [620] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_if_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(214),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_if_statement_repeat1, 2, 0, 0),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [627] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 2, 0, 0), SHIFT(187),
  [630] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2, 0, 0), SHIFT_REPEAT(187),
  [633] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [635] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_continuation, 2, 100, 0), SHIFT(41),
  [638] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_continuation, 3, 100, 0), SHIFT(41),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 3, 100, 0),
  [643] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_continuation, 4, 100, 0), SHIFT(41),
  [646] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inline_python_expression_repeat1, 1, 0, 0),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_python_expression_repeat1, 1, 0, 0),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [654] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [656] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [660] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_setting_name, 1, 0, 0),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting_name, 1, 0, 0),
  [668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_range, 3, 0, 0),
  [672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inline_if_statement_repeat1, 2, 0, 0),
  [676] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_invocation, 2, 0, 0),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_invocation, 2, 0, 0),
  [698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_range, 5, 0, 0),
  [704] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_elseif_statement, 5, 100, 0),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_elseif_statement, 5, 100, 0),
  [708] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [710] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_setting_name, 1, 0, 0),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_setting_name, 1, 0, 0),
  [714] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [716] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [722] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [724] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting_name, 1, 0, 0),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_name, 1, 0, 0),
  [728] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [732] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0),
  [734] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [736] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [738] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [742] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3, 0, 4),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3, 0, 4),
  [746] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [752] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [756] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [762] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [764] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 5, 0, 0),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 5, 0, 0),
  [768] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [770] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(217),
  [773] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [777] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [779] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [781] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [783] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_statement, 1, 0, 0),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_statement, 1, 0, 0),
  [787] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [791] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 4, 0, 0),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 4, 0, 0),
  [795] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [803] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [807] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [809] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [813] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1, 0, 0),
  [817] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [821] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [825] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [829] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [831] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [835] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [839] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [843] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [845] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [851] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [855] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [859] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [863] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [867] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [869] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [871] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [873] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [875] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [877] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [879] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [881] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [883] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [885] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [887] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [889] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [891] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [893] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 8, 0, 0),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, 0, 16),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, 0, 17),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, 0, 18),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 8, 200, 0),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 8, 0, 19),
  [917] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_else_statement, 3, 100, 0),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 9, 0, 20),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 5, 0, 8),
  [929] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elseif_statement, 6, 100, 21),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_range, 7, 0, 0),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in, 2, 0, 0),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_enumerate, 2, 0, 0),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_zip, 2, 0, 0),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_setting, 4, 0, 5),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_setting, 5, 0, 6),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_setting, 5, 0, 5),
  [951] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [955] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting, 6, 0, 6),
  [965] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 4, 200, 0),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [971] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting, 5, 0, 6),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting, 5, 0, 5),
  [979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, 0, 9),
  [983] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [985] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [991] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_for_statement_repeat1, 2, 0, 0),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [995] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 1, 0, 7),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 6, 200, 0),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1007] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [1009] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_except_statement, 4, 100, 0),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1021] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [1023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting, 4, 0, 5),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1027] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_finally_statement, 4, 100, 0),
  [1029] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 6, 0, 12),
  [1031] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [1033] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_setting, 6, 0, 6),
  [1035] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [1037] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [1039] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 5, 200, 0),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1051] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 7, 0, 0),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1057] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, 0, 13),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1061] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, 0, 14),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1077] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, 0, 15),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1081] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 7, 200, 0),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1085] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [1087] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [1089] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [1091] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [1093] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_except_statement, 5, 100, 0),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1099] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [1101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [1103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [1109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_statement, 4, 100, 11),
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

TS_PUBLIC const TSLanguage *tree_sitter_robot(void) {
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
