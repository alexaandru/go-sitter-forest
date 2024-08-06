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
#define STATE_COUNT 371
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 126
#define ALIAS_COUNT 5
#define TOKEN_COUNT 65
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 20

enum ts_symbol_identifiers {
  aux_sym_source_file_token1 = 1,
  aux_sym_settings_section_token1 = 2,
  aux_sym_settings_section_token2 = 3,
  aux_sym_setting_statement_token1 = 4,
  aux_sym_setting_statement_token2 = 5,
  aux_sym_setting_statement_token3 = 6,
  aux_sym_setting_statement_token4 = 7,
  aux_sym_setting_statement_token5 = 8,
  aux_sym_setting_statement_token6 = 9,
  aux_sym_setting_statement_token7 = 10,
  aux_sym_setting_statement_token8 = 11,
  aux_sym_setting_statement_token9 = 12,
  aux_sym_setting_statement_token10 = 13,
  aux_sym_setting_statement_token11 = 14,
  aux_sym_setting_statement_token12 = 15,
  aux_sym_setting_statement_token13 = 16,
  aux_sym_setting_statement_token14 = 17,
  aux_sym_setting_statement_token15 = 18,
  aux_sym_setting_statement_token16 = 19,
  aux_sym_setting_statement_token17 = 20,
  aux_sym_variables_section_token1 = 21,
  anon_sym_DOLLAR_LBRACE = 22,
  anon_sym_RBRACE = 23,
  anon_sym_EQ = 24,
  anon_sym_EQ2 = 25,
  aux_sym_keywords_section_token1 = 26,
  aux_sym_keyword_setting_token1 = 27,
  aux_sym_keyword_setting_token2 = 28,
  aux_sym_keyword_setting_token3 = 29,
  aux_sym_keyword_setting_token4 = 30,
  aux_sym_keyword_setting_token5 = 31,
  aux_sym_keyword_setting_token6 = 32,
  aux_sym_test_cases_section_token1 = 33,
  aux_sym_test_case_setting_token1 = 34,
  aux_sym_test_case_setting_token2 = 35,
  anon_sym_RETURN = 36,
  anon_sym_IF = 37,
  anon_sym_END = 38,
  anon_sym_ELSEIF = 39,
  anon_sym_ELSE = 40,
  anon_sym_TRY = 41,
  anon_sym_EXCEPT = 42,
  anon_sym_FINALLY = 43,
  anon_sym_WHILE = 44,
  anon_sym_FOR = 45,
  anon_sym_IN = 46,
  anon_sym_INRANGE = 47,
  anon_sym_INENUMERATE = 48,
  anon_sym_INZIP = 49,
  sym_continue_statement = 50,
  sym_break_statement = 51,
  sym_ellipses = 52,
  anon_sym_SPACE = 53,
  anon_sym_AT_LBRACE = 54,
  anon_sym_AMP_LBRACE = 55,
  anon_sym_DOLLAR_LBRACE_LBRACE = 56,
  aux_sym_inline_python_expression_token1 = 57,
  anon_sym_RBRACE_RBRACE = 58,
  sym_variable_name = 59,
  sym_text_chunk = 60,
  sym_comment = 61,
  sym__separator = 62,
  aux_sym__whitespace_token1 = 63,
  sym__line_break = 64,
  sym_source_file = 65,
  sym_section = 66,
  sym_settings_section = 67,
  sym_setting_statement = 68,
  sym_variables_section = 69,
  sym_variable_definition = 70,
  sym_keywords_section = 71,
  sym_keyword_definition = 72,
  sym_keyword_definition_body = 73,
  sym_keyword_setting = 74,
  sym_test_cases_section = 75,
  sym_test_case_definition = 76,
  sym_test_case_definition_body = 77,
  sym_test_case_setting = 78,
  sym_statement = 79,
  sym_return_statement = 80,
  sym_variable_assignment = 81,
  sym_keyword_invocation = 82,
  sym_if_statement = 83,
  sym_elseif_statement = 84,
  sym_else_statement = 85,
  sym_inline_if_statement = 86,
  sym_block = 87,
  sym_inline_elseif_statement = 88,
  sym_inline_else_statement = 89,
  sym_inline_statement = 90,
  sym_try_statement = 91,
  sym_except_statement = 92,
  sym_finally_statement = 93,
  sym_while_statement = 94,
  sym_for_statement = 95,
  sym__for_in = 96,
  sym__for_in_range = 97,
  sym__for_in_enumerate = 98,
  sym__for_in_zip = 99,
  sym_arguments = 100,
  sym_arguments_without_continuation = 101,
  sym_continuation = 102,
  sym_argument = 103,
  sym_scalar_variable = 104,
  sym_list_variable = 105,
  sym_dictionary_variable = 106,
  sym_inline_python_expression = 107,
  sym__indentation = 108,
  sym__empty_line = 109,
  aux_sym_source_file_repeat1 = 110,
  aux_sym_settings_section_repeat1 = 111,
  aux_sym_variables_section_repeat1 = 112,
  aux_sym_keywords_section_repeat1 = 113,
  aux_sym_keyword_definition_body_repeat1 = 114,
  aux_sym_test_cases_section_repeat1 = 115,
  aux_sym_test_case_definition_body_repeat1 = 116,
  aux_sym_if_statement_repeat1 = 117,
  aux_sym_inline_if_statement_repeat1 = 118,
  aux_sym_block_repeat1 = 119,
  aux_sym_try_statement_repeat1 = 120,
  aux_sym_for_statement_repeat1 = 121,
  aux_sym_arguments_repeat1 = 122,
  aux_sym_arguments_repeat2 = 123,
  aux_sym_argument_repeat1 = 124,
  aux_sym_inline_python_expression_repeat1 = 125,
  alias_sym_keyword = 126,
  alias_sym_name = 127,
  alias_sym_python_expression = 128,
  alias_sym_return_value = 129,
  alias_sym_variable_list = 130,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_source_file_token1] = "source_file_token1",
  [aux_sym_settings_section_token1] = "section_header",
  [aux_sym_settings_section_token2] = "extra_text",
  [aux_sym_setting_statement_token1] = "setting_statement_token1",
  [aux_sym_setting_statement_token2] = "setting_statement_token2",
  [aux_sym_setting_statement_token3] = "setting_statement_token3",
  [aux_sym_setting_statement_token4] = "setting_statement_token4",
  [aux_sym_setting_statement_token5] = "setting_statement_token5",
  [aux_sym_setting_statement_token6] = "setting_statement_token6",
  [aux_sym_setting_statement_token7] = "setting_statement_token7",
  [aux_sym_setting_statement_token8] = "setting_statement_token8",
  [aux_sym_setting_statement_token9] = "setting_statement_token9",
  [aux_sym_setting_statement_token10] = "setting_statement_token10",
  [aux_sym_setting_statement_token11] = "setting_statement_token11",
  [aux_sym_setting_statement_token12] = "setting_statement_token12",
  [aux_sym_setting_statement_token13] = "setting_statement_token13",
  [aux_sym_setting_statement_token14] = "setting_statement_token14",
  [aux_sym_setting_statement_token15] = "setting_statement_token15",
  [aux_sym_setting_statement_token16] = "setting_statement_token16",
  [aux_sym_setting_statement_token17] = "setting_statement_token17",
  [aux_sym_variables_section_token1] = "section_header",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_RBRACE] = "}",
  [anon_sym_EQ] = "=",
  [anon_sym_EQ2] = " =",
  [aux_sym_keywords_section_token1] = "section_header",
  [aux_sym_keyword_setting_token1] = "keyword_setting_token1",
  [aux_sym_keyword_setting_token2] = "keyword_setting_token2",
  [aux_sym_keyword_setting_token3] = "keyword_setting_token3",
  [aux_sym_keyword_setting_token4] = "keyword_setting_token4",
  [aux_sym_keyword_setting_token5] = "keyword_setting_token5",
  [aux_sym_keyword_setting_token6] = "keyword_setting_token6",
  [aux_sym_test_cases_section_token1] = "section_header",
  [aux_sym_test_case_setting_token1] = "test_case_setting_token1",
  [aux_sym_test_case_setting_token2] = "test_case_setting_token2",
  [anon_sym_RETURN] = "RETURN",
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
  [anon_sym_SPACE] = " ",
  [anon_sym_AT_LBRACE] = "@{",
  [anon_sym_AMP_LBRACE] = "&{",
  [anon_sym_DOLLAR_LBRACE_LBRACE] = "${{",
  [aux_sym_inline_python_expression_token1] = "inline_python_expression_token1",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [sym_variable_name] = "variable_name",
  [sym_text_chunk] = "text_chunk",
  [sym_comment] = "comment",
  [sym__separator] = "_separator",
  [aux_sym__whitespace_token1] = "_whitespace_token1",
  [sym__line_break] = "_line_break",
  [sym_source_file] = "source_file",
  [sym_section] = "section",
  [sym_settings_section] = "settings_section",
  [sym_setting_statement] = "setting_statement",
  [sym_variables_section] = "variables_section",
  [sym_variable_definition] = "variable_definition",
  [sym_keywords_section] = "keywords_section",
  [sym_keyword_definition] = "keyword_definition",
  [sym_keyword_definition_body] = "body",
  [sym_keyword_setting] = "keyword_setting",
  [sym_test_cases_section] = "test_cases_section",
  [sym_test_case_definition] = "test_case_definition",
  [sym_test_case_definition_body] = "body",
  [sym_test_case_setting] = "test_case_setting",
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
  [alias_sym_keyword] = "keyword",
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
  [aux_sym_setting_statement_token1] = aux_sym_setting_statement_token1,
  [aux_sym_setting_statement_token2] = aux_sym_setting_statement_token2,
  [aux_sym_setting_statement_token3] = aux_sym_setting_statement_token3,
  [aux_sym_setting_statement_token4] = aux_sym_setting_statement_token4,
  [aux_sym_setting_statement_token5] = aux_sym_setting_statement_token5,
  [aux_sym_setting_statement_token6] = aux_sym_setting_statement_token6,
  [aux_sym_setting_statement_token7] = aux_sym_setting_statement_token7,
  [aux_sym_setting_statement_token8] = aux_sym_setting_statement_token8,
  [aux_sym_setting_statement_token9] = aux_sym_setting_statement_token9,
  [aux_sym_setting_statement_token10] = aux_sym_setting_statement_token10,
  [aux_sym_setting_statement_token11] = aux_sym_setting_statement_token11,
  [aux_sym_setting_statement_token12] = aux_sym_setting_statement_token12,
  [aux_sym_setting_statement_token13] = aux_sym_setting_statement_token13,
  [aux_sym_setting_statement_token14] = aux_sym_setting_statement_token14,
  [aux_sym_setting_statement_token15] = aux_sym_setting_statement_token15,
  [aux_sym_setting_statement_token16] = aux_sym_setting_statement_token16,
  [aux_sym_setting_statement_token17] = aux_sym_setting_statement_token17,
  [aux_sym_variables_section_token1] = aux_sym_settings_section_token1,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_EQ2] = anon_sym_EQ2,
  [aux_sym_keywords_section_token1] = aux_sym_settings_section_token1,
  [aux_sym_keyword_setting_token1] = aux_sym_keyword_setting_token1,
  [aux_sym_keyword_setting_token2] = aux_sym_keyword_setting_token2,
  [aux_sym_keyword_setting_token3] = aux_sym_keyword_setting_token3,
  [aux_sym_keyword_setting_token4] = aux_sym_keyword_setting_token4,
  [aux_sym_keyword_setting_token5] = aux_sym_keyword_setting_token5,
  [aux_sym_keyword_setting_token6] = aux_sym_keyword_setting_token6,
  [aux_sym_test_cases_section_token1] = aux_sym_settings_section_token1,
  [aux_sym_test_case_setting_token1] = aux_sym_test_case_setting_token1,
  [aux_sym_test_case_setting_token2] = aux_sym_test_case_setting_token2,
  [anon_sym_RETURN] = anon_sym_RETURN,
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
  [anon_sym_SPACE] = anon_sym_SPACE,
  [anon_sym_AT_LBRACE] = anon_sym_AT_LBRACE,
  [anon_sym_AMP_LBRACE] = anon_sym_AMP_LBRACE,
  [anon_sym_DOLLAR_LBRACE_LBRACE] = anon_sym_DOLLAR_LBRACE_LBRACE,
  [aux_sym_inline_python_expression_token1] = aux_sym_inline_python_expression_token1,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [sym_variable_name] = sym_variable_name,
  [sym_text_chunk] = sym_text_chunk,
  [sym_comment] = sym_comment,
  [sym__separator] = sym__separator,
  [aux_sym__whitespace_token1] = aux_sym__whitespace_token1,
  [sym__line_break] = sym__line_break,
  [sym_source_file] = sym_source_file,
  [sym_section] = sym_section,
  [sym_settings_section] = sym_settings_section,
  [sym_setting_statement] = sym_setting_statement,
  [sym_variables_section] = sym_variables_section,
  [sym_variable_definition] = sym_variable_definition,
  [sym_keywords_section] = sym_keywords_section,
  [sym_keyword_definition] = sym_keyword_definition,
  [sym_keyword_definition_body] = sym_keyword_definition_body,
  [sym_keyword_setting] = sym_keyword_setting,
  [sym_test_cases_section] = sym_test_cases_section,
  [sym_test_case_definition] = sym_test_case_definition,
  [sym_test_case_definition_body] = sym_keyword_definition_body,
  [sym_test_case_setting] = sym_test_case_setting,
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
  [alias_sym_keyword] = alias_sym_keyword,
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
  [aux_sym_setting_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_statement_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_statement_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_statement_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_statement_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_statement_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_statement_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_statement_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_statement_token9] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_statement_token10] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_statement_token11] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_statement_token12] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_statement_token13] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_statement_token14] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_statement_token15] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_statement_token16] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_statement_token17] = {
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
  [aux_sym_keyword_setting_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_setting_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_setting_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_setting_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_setting_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_setting_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_test_cases_section_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_test_case_setting_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_test_case_setting_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RETURN] = {
    .visible = true,
    .named = false,
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
  [anon_sym_SPACE] = {
    .visible = true,
    .named = false,
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
  [aux_sym__whitespace_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__line_break] = {
    .visible = false,
    .named = true,
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
  [alias_sym_keyword] = {
    .visible = true,
    .named = true,
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
  field_right = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_body] = "body",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_left] = "left",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [5] = {.index = 0, .length = 1},
  [6] = {.index = 1, .length = 1},
  [7] = {.index = 2, .length = 1},
  [8] = {.index = 3, .length = 2},
  [9] = {.index = 5, .length = 1},
  [10] = {.index = 6, .length = 2},
  [11] = {.index = 8, .length = 2},
  [12] = {.index = 10, .length = 2},
  [13] = {.index = 12, .length = 2},
  [14] = {.index = 14, .length = 3},
  [15] = {.index = 17, .length = 3},
  [16] = {.index = 20, .length = 3},
  [17] = {.index = 23, .length = 3},
  [18] = {.index = 26, .length = 4},
  [19] = {.index = 30, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_alternative, 0},
  [1] =
    {field_condition, 1},
  [2] =
    {field_condition, 2},
  [3] =
    {field_alternative, 0, .inherited = true},
    {field_alternative, 1, .inherited = true},
  [5] =
    {field_consequence, 3},
  [6] =
    {field_body, 3},
    {field_condition, 1},
  [8] =
    {field_alternative, 4},
    {field_condition, 2},
  [10] =
    {field_condition, 2},
    {field_consequence, 4},
  [12] =
    {field_alternative, 4, .inherited = true},
    {field_condition, 2},
  [14] =
    {field_alternative, 5},
    {field_condition, 2},
    {field_consequence, 4},
  [17] =
    {field_alternative, 5, .inherited = true},
    {field_condition, 2},
    {field_consequence, 4},
  [20] =
    {field_alternative, 4, .inherited = true},
    {field_alternative, 5},
    {field_condition, 2},
  [23] =
    {field_body, 5},
    {field_left, 1},
    {field_right, 3},
  [26] =
    {field_alternative, 5, .inherited = true},
    {field_alternative, 6},
    {field_condition, 2},
    {field_consequence, 4},
  [30] =
    {field_condition, 3},
    {field_consequence, 5},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_name,
  },
  [2] = {
    [0] = alias_sym_keyword,
  },
  [3] = {
    [1] = alias_sym_python_expression,
  },
  [4] = {
    [2] = alias_sym_return_value,
  },
  [17] = {
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
  [49] = 42,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 7,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 53,
  [61] = 61,
  [62] = 61,
  [63] = 53,
  [64] = 64,
  [65] = 7,
  [66] = 51,
  [67] = 51,
  [68] = 68,
  [69] = 69,
  [70] = 52,
  [71] = 52,
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
  [93] = 93,
  [94] = 94,
  [95] = 91,
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
  [107] = 97,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 94,
  [113] = 113,
  [114] = 108,
  [115] = 115,
  [116] = 106,
  [117] = 104,
  [118] = 83,
  [119] = 106,
  [120] = 120,
  [121] = 110,
  [122] = 84,
  [123] = 98,
  [124] = 108,
  [125] = 110,
  [126] = 83,
  [127] = 104,
  [128] = 101,
  [129] = 101,
  [130] = 99,
  [131] = 120,
  [132] = 98,
  [133] = 89,
  [134] = 84,
  [135] = 93,
  [136] = 113,
  [137] = 137,
  [138] = 99,
  [139] = 139,
  [140] = 140,
  [141] = 120,
  [142] = 94,
  [143] = 89,
  [144] = 93,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 145,
  [150] = 148,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 145,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 148,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 163,
  [171] = 171,
  [172] = 172,
  [173] = 171,
  [174] = 153,
  [175] = 159,
  [176] = 176,
  [177] = 156,
  [178] = 178,
  [179] = 179,
  [180] = 7,
  [181] = 181,
  [182] = 182,
  [183] = 167,
  [184] = 184,
  [185] = 166,
  [186] = 186,
  [187] = 172,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 192,
  [199] = 193,
  [200] = 200,
  [201] = 201,
  [202] = 196,
  [203] = 192,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 204,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 205,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 206,
  [220] = 207,
  [221] = 204,
  [222] = 222,
  [223] = 212,
  [224] = 224,
  [225] = 225,
  [226] = 214,
  [227] = 205,
  [228] = 228,
  [229] = 192,
  [230] = 196,
  [231] = 193,
  [232] = 232,
  [233] = 205,
  [234] = 214,
  [235] = 235,
  [236] = 236,
  [237] = 212,
  [238] = 222,
  [239] = 204,
  [240] = 207,
  [241] = 206,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
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
  [296] = 104,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 101,
  [303] = 303,
  [304] = 304,
  [305] = 98,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 256,
  [315] = 315,
  [316] = 301,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 284,
  [327] = 327,
  [328] = 282,
  [329] = 329,
  [330] = 280,
  [331] = 278,
  [332] = 274,
  [333] = 329,
  [334] = 273,
  [335] = 256,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 284,
  [344] = 344,
  [345] = 282,
  [346] = 346,
  [347] = 280,
  [348] = 274,
  [349] = 329,
  [350] = 273,
  [351] = 256,
  [352] = 352,
  [353] = 353,
  [354] = 284,
  [355] = 274,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 300,
  [360] = 298,
  [361] = 295,
  [362] = 292,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 300,
  [367] = 298,
  [368] = 295,
  [369] = 369,
  [370] = 300,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(380);
      ADVANCE_MAP(
        '\t', 758,
        '\n', 766,
        '\r', 15,
        ' ', 478,
        '#', 756,
        '$', 155,
        '&', 157,
        '*', 53,
        '.', 70,
        '=', 414,
        '@', 159,
        'B', 115,
        'C', 112,
        'E', 100,
        'F', 96,
        'I', 88,
        'R', 77,
        'T', 116,
        'W', 91,
        '[', 16,
        'f', 276,
        'r', 209,
        't', 173,
        '}', 413,
        'D', 210,
        'd', 210,
        'L', 244,
        'l', 244,
        'M', 211,
        'm', 211,
        'S', 352,
        's', 352,
        'V', 176,
        'v', 176,
        0x0b, 15,
        '\f', 15,
      );
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(758);
      if (lookahead == '\n') ADVANCE(766);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(762);
      if (lookahead == '#') ADVANCE(756);
      if (lookahead == '.') ADVANCE(70);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(758);
      if (lookahead == '\n') ADVANCE(766);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '#') ADVANCE(756);
      if (lookahead == '=') ADVANCE(414);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(12);
      if (lookahead == '\n') ADVANCE(766);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(758);
      if (lookahead == '#') ADVANCE(756);
      if (lookahead == '=') ADVANCE(415);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(37);
      if (lookahead == ' ') ADVANCE(760);
      if (lookahead == '#') ADVANCE(756);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(37);
      if (lookahead == ' ') ADVANCE(481);
      if (lookahead == '#') ADVANCE(756);
      if (lookahead == '}') ADVANCE(412);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '\t', 757,
        '\n', 765,
        '\r', 14,
        ' ', 477,
        '#', 754,
        '$', 156,
        '&', 158,
        '@', 160,
        '{', 163,
        0x0b, 14,
        '\f', 14,
      );
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '\t', 11,
        '\n', 765,
        '\r', 14,
        ' ', 480,
        '#', 754,
        '$', 156,
        '{', 163,
        '&', 374,
        '@', 374,
        0x0b, 14,
        '\f', 14,
      );
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 8:
      if (lookahead == '\t') ADVANCE(759);
      if (lookahead == ' ') ADVANCE(479);
      if (lookahead == '#') ADVANCE(754);
      if (lookahead == '$') ADVANCE(156);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\n' <= lookahead && lookahead <= '\r') ||
          lookahead == '{') ADVANCE(163);
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 9:
      if (lookahead == '\t') ADVANCE(760);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '#') ADVANCE(756);
      if (lookahead == '.') ADVANCE(70);
      END_STATE();
    case 10:
      if (lookahead == '\t') ADVANCE(491);
      if (lookahead == ' ') ADVANCE(482);
      if (lookahead == '#') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(492);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(766);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(756);
      if (lookahead == '{') ADVANCE(630);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(766);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(756);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(766);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(386);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(387);
      if (lookahead != 0) ADVANCE(389);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(766);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '{') ADVANCE(630);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(766);
      if (lookahead == '\r') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 16:
      ADVANCE_MAP(
        ' ', 172,
        'A', 296,
        'a', 296,
        'D', 288,
        'd', 288,
        'R', 218,
        'r', 218,
        'S', 226,
        's', 226,
        'T', 175,
        't', 175,
      );
      END_STATE();
    case 17:
      ADVANCE_MAP(
        ' ', 252,
        'K', 212,
        'k', 212,
        'S', 221,
        's', 221,
        'T', 220,
        't', 220,
        'V', 193,
        'v', 193,
      );
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(321);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(131);
      if (lookahead == ']') ADVANCE(422);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(324);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(132);
      if (lookahead == ']') ADVANCE(439);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(201);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(133);
      if (lookahead == ']') ADVANCE(428);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(134);
      if (lookahead == ']') ADVANCE(434);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == ']') ADVANCE(431);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == ']') ADVANCE(442);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == ']') ADVANCE(425);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(138);
      if (lookahead == ']') ADVANCE(419);
      END_STATE();
    case 29:
      if (lookahead == ' ') ADVANCE(62);
      if (lookahead == '*') ADVANCE(54);
      END_STATE();
    case 30:
      if (lookahead == ' ') ADVANCE(337);
      END_STATE();
    case 31:
      if (lookahead == ' ') ADVANCE(65);
      if (lookahead == '*') ADVANCE(55);
      END_STATE();
    case 32:
      if (lookahead == ' ') ADVANCE(348);
      END_STATE();
    case 33:
      if (lookahead == ' ') ADVANCE(67);
      if (lookahead == '*') ADVANCE(56);
      END_STATE();
    case 34:
      if (lookahead == ' ') ADVANCE(68);
      if (lookahead == '*') ADVANCE(59);
      END_STATE();
    case 35:
      if (lookahead == ' ') ADVANCE(323);
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(756);
      if (lookahead == '{') ADVANCE(630);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == '#') ADVANCE(756);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 38:
      ADVANCE_MAP(
        '#', 754,
        '$', 162,
        '.', 507,
        'B', 539,
        'C', 536,
        'F', 537,
        'I', 520,
        'R', 513,
        'T', 540,
        'W', 521,
        '\t', 36,
        ' ', 36,
        '&', 374,
        '@', 374,
      );
      if (('\n' <= lookahead && lookahead <= '\r') ||
          lookahead == '{') ADVANCE(163);
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 39:
      ADVANCE_MAP(
        '#', 754,
        '$', 162,
        'B', 539,
        'C', 536,
        'E', 526,
        'F', 524,
        'I', 520,
        'R', 513,
        'T', 540,
        'W', 521,
        '\t', 36,
        ' ', 36,
        '&', 374,
        '@', 374,
      );
      if (('\n' <= lookahead && lookahead <= '\r') ||
          lookahead == '{') ADVANCE(163);
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 40:
      ADVANCE_MAP(
        '#', 754,
        '$', 162,
        'B', 539,
        'C', 536,
        'E', 530,
        'F', 537,
        'I', 520,
        'R', 513,
        'T', 540,
        'W', 521,
        '\t', 36,
        ' ', 36,
        '&', 374,
        '@', 374,
      );
      if (('\n' <= lookahead && lookahead <= '\r') ||
          lookahead == '{') ADVANCE(163);
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 41:
      ADVANCE_MAP(
        '#', 754,
        '$', 162,
        'B', 539,
        'C', 536,
        'E', 532,
        'F', 537,
        'I', 520,
        'R', 513,
        'T', 540,
        'W', 521,
        '\t', 36,
        ' ', 36,
        '&', 374,
        '@', 374,
      );
      if (('\n' <= lookahead && lookahead <= '\r') ||
          lookahead == '{') ADVANCE(163);
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 42:
      ADVANCE_MAP(
        '#', 754,
        '$', 162,
        'B', 539,
        'C', 536,
        'F', 537,
        'I', 520,
        'R', 513,
        'T', 540,
        'W', 521,
        '[', 631,
        '\t', 36,
        ' ', 36,
        '&', 374,
        '@', 374,
      );
      if (('\n' <= lookahead && lookahead <= '\r') ||
          lookahead == '{') ADVANCE(163);
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 43:
      ADVANCE_MAP(
        '#', 754,
        '$', 162,
        'B', 539,
        'C', 536,
        'F', 537,
        'I', 520,
        'R', 513,
        'T', 540,
        'W', 521,
        '[', 725,
        '\t', 36,
        ' ', 36,
        '&', 374,
        '@', 374,
      );
      if (('\n' <= lookahead && lookahead <= '\r') ||
          lookahead == '{') ADVANCE(163);
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 44:
      ADVANCE_MAP(
        '#', 754,
        '$', 162,
        'B', 539,
        'C', 536,
        'F', 537,
        'I', 520,
        'R', 513,
        'T', 540,
        'W', 521,
        '\t', 36,
        ' ', 36,
        '&', 374,
        '@', 374,
      );
      if (('\n' <= lookahead && lookahead <= '\r') ||
          lookahead == '{') ADVANCE(163);
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 45:
      if (lookahead == '#') ADVANCE(754);
      if (lookahead == '$') ADVANCE(162);
      if (lookahead == 'R') ADVANCE(513);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\n' <= lookahead && lookahead <= '\r') ||
          lookahead == '{') ADVANCE(163);
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 46:
      if (lookahead == '#') ADVANCE(487);
      if (lookahead == '}') ADVANCE(413);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(488);
      END_STATE();
    case 47:
      if (lookahead == '#') ADVANCE(490);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(492);
      END_STATE();
    case 48:
      if (lookahead == '*') ADVANCE(17);
      END_STATE();
    case 49:
      if (lookahead == '*') ADVANCE(416);
      END_STATE();
    case 50:
      if (lookahead == '*') ADVANCE(383);
      END_STATE();
    case 51:
      if (lookahead == '*') ADVANCE(407);
      END_STATE();
    case 52:
      if (lookahead == '*') ADVANCE(437);
      END_STATE();
    case 53:
      if (lookahead == '*') ADVANCE(48);
      END_STATE();
    case 54:
      if (lookahead == '*') ADVANCE(49);
      END_STATE();
    case 55:
      if (lookahead == '*') ADVANCE(50);
      END_STATE();
    case 56:
      if (lookahead == '*') ADVANCE(51);
      END_STATE();
    case 57:
      if (lookahead == '*') ADVANCE(636);
      if (lookahead == '{') ADVANCE(553);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 58:
      if (lookahead == '*') ADVANCE(636);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 59:
      if (lookahead == '*') ADVANCE(52);
      END_STATE();
    case 60:
      if (lookahead == '*') ADVANCE(637);
      if (lookahead == '{') ADVANCE(553);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 61:
      if (lookahead == '*') ADVANCE(637);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 62:
      if (lookahead == '*') ADVANCE(54);
      END_STATE();
    case 63:
      if (lookahead == '*') ADVANCE(638);
      if (lookahead == '{') ADVANCE(553);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 64:
      if (lookahead == '*') ADVANCE(638);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 65:
      if (lookahead == '*') ADVANCE(55);
      END_STATE();
    case 66:
      if (lookahead == '*') ADVANCE(639);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 67:
      if (lookahead == '*') ADVANCE(56);
      END_STATE();
    case 68:
      if (lookahead == '*') ADVANCE(59);
      END_STATE();
    case 69:
      if (lookahead == '.') ADVANCE(475);
      END_STATE();
    case 70:
      if (lookahead == '.') ADVANCE(69);
      END_STATE();
    case 71:
      if (lookahead == 'A') ADVANCE(99);
      END_STATE();
    case 72:
      if (lookahead == 'A') ADVANCE(102);
      END_STATE();
    case 73:
      if (lookahead == 'A') ADVANCE(125);
      END_STATE();
    case 74:
      if (lookahead == 'A') ADVANCE(107);
      END_STATE();
    case 75:
      if (lookahead == 'C') ADVANCE(80);
      END_STATE();
    case 76:
      if (lookahead == 'D') ADVANCE(449);
      END_STATE();
    case 77:
      if (lookahead == 'E') ADVANCE(122);
      if (lookahead == 'e') ADVANCE(316);
      END_STATE();
    case 78:
      if (lookahead == 'E') ADVANCE(71);
      END_STATE();
    case 79:
      if (lookahead == 'E') ADVANCE(456);
      END_STATE();
    case 80:
      if (lookahead == 'E') ADVANCE(114);
      END_STATE();
    case 81:
      if (lookahead == 'E') ADVANCE(463);
      END_STATE();
    case 82:
      if (lookahead == 'E') ADVANCE(471);
      END_STATE();
    case 83:
      if (lookahead == 'E') ADVANCE(468);
      END_STATE();
    case 84:
      if (lookahead == 'E') ADVANCE(469);
      END_STATE();
    case 85:
      if (lookahead == 'E') ADVANCE(453);
      END_STATE();
    case 86:
      if (lookahead == 'E') ADVANCE(118);
      END_STATE();
    case 87:
      if (lookahead == 'E') ADVANCE(110);
      if (lookahead == 'R') ADVANCE(74);
      if (lookahead == 'Z') ADVANCE(97);
      END_STATE();
    case 88:
      if (lookahead == 'F') ADVANCE(447);
      if (lookahead == 'N') ADVANCE(467);
      END_STATE();
    case 89:
      if (lookahead == 'F') ADVANCE(451);
      END_STATE();
    case 90:
      if (lookahead == 'G') ADVANCE(83);
      END_STATE();
    case 91:
      if (lookahead == 'H') ADVANCE(92);
      END_STATE();
    case 92:
      if (lookahead == 'I') ADVANCE(103);
      END_STATE();
    case 93:
      if (lookahead == 'I') ADVANCE(89);
      END_STATE();
    case 94:
      if (lookahead == 'I') ADVANCE(640);
      if (lookahead == '{') ADVANCE(553);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 95:
      if (lookahead == 'I') ADVANCE(109);
      END_STATE();
    case 96:
      if (lookahead == 'I') ADVANCE(109);
      if (lookahead == 'O') ADVANCE(117);
      if (lookahead == 'o') ADVANCE(298);
      END_STATE();
    case 97:
      if (lookahead == 'I') ADVANCE(113);
      END_STATE();
    case 98:
      if (lookahead == 'I') ADVANCE(111);
      END_STATE();
    case 99:
      if (lookahead == 'K') ADVANCE(473);
      END_STATE();
    case 100:
      if (lookahead == 'L') ADVANCE(120);
      if (lookahead == 'N') ADVANCE(76);
      if (lookahead == 'X') ADVANCE(75);
      END_STATE();
    case 101:
      if (lookahead == 'L') ADVANCE(130);
      END_STATE();
    case 102:
      if (lookahead == 'L') ADVANCE(101);
      END_STATE();
    case 103:
      if (lookahead == 'L') ADVANCE(81);
      END_STATE();
    case 104:
      if (lookahead == 'L') ADVANCE(121);
      if (lookahead == 'N') ADVANCE(76);
      if (lookahead == 'X') ADVANCE(75);
      END_STATE();
    case 105:
      if (lookahead == 'M') ADVANCE(86);
      END_STATE();
    case 106:
      if (lookahead == 'N') ADVANCE(124);
      END_STATE();
    case 107:
      if (lookahead == 'N') ADVANCE(90);
      END_STATE();
    case 108:
      if (lookahead == 'N') ADVANCE(445);
      END_STATE();
    case 109:
      if (lookahead == 'N') ADVANCE(72);
      END_STATE();
    case 110:
      if (lookahead == 'N') ADVANCE(126);
      END_STATE();
    case 111:
      if (lookahead == 'N') ADVANCE(128);
      END_STATE();
    case 112:
      if (lookahead == 'O') ADVANCE(106);
      END_STATE();
    case 113:
      if (lookahead == 'P') ADVANCE(470);
      END_STATE();
    case 114:
      if (lookahead == 'P') ADVANCE(123);
      END_STATE();
    case 115:
      if (lookahead == 'R') ADVANCE(78);
      END_STATE();
    case 116:
      if (lookahead == 'R') ADVANCE(129);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(309);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(315);
      END_STATE();
    case 117:
      if (lookahead == 'R') ADVANCE(466);
      if (lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 118:
      if (lookahead == 'R') ADVANCE(73);
      END_STATE();
    case 119:
      if (lookahead == 'R') ADVANCE(108);
      END_STATE();
    case 120:
      if (lookahead == 'S') ADVANCE(79);
      END_STATE();
    case 121:
      if (lookahead == 'S') ADVANCE(85);
      END_STATE();
    case 122:
      if (lookahead == 'T') ADVANCE(127);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(278);
      END_STATE();
    case 123:
      if (lookahead == 'T') ADVANCE(459);
      END_STATE();
    case 124:
      if (lookahead == 'T') ADVANCE(98);
      END_STATE();
    case 125:
      if (lookahead == 'T') ADVANCE(84);
      END_STATE();
    case 126:
      if (lookahead == 'U') ADVANCE(105);
      END_STATE();
    case 127:
      if (lookahead == 'U') ADVANCE(119);
      END_STATE();
    case 128:
      if (lookahead == 'U') ADVANCE(82);
      END_STATE();
    case 129:
      if (lookahead == 'Y') ADVANCE(457);
      END_STATE();
    case 130:
      if (lookahead == 'Y') ADVANCE(461);
      END_STATE();
    case 131:
      if (lookahead == ']') ADVANCE(422);
      END_STATE();
    case 132:
      if (lookahead == ']') ADVANCE(439);
      END_STATE();
    case 133:
      if (lookahead == ']') ADVANCE(428);
      END_STATE();
    case 134:
      if (lookahead == ']') ADVANCE(434);
      END_STATE();
    case 135:
      if (lookahead == ']') ADVANCE(431);
      END_STATE();
    case 136:
      if (lookahead == ']') ADVANCE(442);
      END_STATE();
    case 137:
      if (lookahead == ']') ADVANCE(425);
      END_STATE();
    case 138:
      if (lookahead == ']') ADVANCE(419);
      END_STATE();
    case 139:
      if (lookahead == ']') ADVANCE(424);
      if (lookahead == '{') ADVANCE(553);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 140:
      if (lookahead == ']') ADVANCE(424);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 141:
      if (lookahead == ']') ADVANCE(441);
      if (lookahead == '{') ADVANCE(553);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 142:
      if (lookahead == ']') ADVANCE(441);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 143:
      if (lookahead == ']') ADVANCE(436);
      if (lookahead == '{') ADVANCE(553);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 144:
      if (lookahead == ']') ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 145:
      if (lookahead == ']') ADVANCE(433);
      if (lookahead == '{') ADVANCE(553);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 146:
      if (lookahead == ']') ADVANCE(433);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 147:
      if (lookahead == ']') ADVANCE(444);
      if (lookahead == '{') ADVANCE(553);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 148:
      if (lookahead == ']') ADVANCE(444);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 149:
      if (lookahead == ']') ADVANCE(421);
      if (lookahead == '{') ADVANCE(553);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 150:
      if (lookahead == ']') ADVANCE(421);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 151:
      if (lookahead == ']') ADVANCE(430);
      if (lookahead == '{') ADVANCE(553);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 152:
      if (lookahead == ']') ADVANCE(430);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 153:
      if (lookahead == ']') ADVANCE(427);
      if (lookahead == '{') ADVANCE(553);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 154:
      if (lookahead == ']') ADVANCE(427);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 155:
      if (lookahead == '{') ADVANCE(411);
      END_STATE();
    case 156:
      if (lookahead == '{') ADVANCE(411);
      if (lookahead != 0) ADVANCE(630);
      END_STATE();
    case 157:
      if (lookahead == '{') ADVANCE(484);
      END_STATE();
    case 158:
      if (lookahead == '{') ADVANCE(484);
      if (lookahead != 0) ADVANCE(630);
      END_STATE();
    case 159:
      if (lookahead == '{') ADVANCE(483);
      END_STATE();
    case 160:
      if (lookahead == '{') ADVANCE(483);
      if (lookahead != 0) ADVANCE(630);
      END_STATE();
    case 161:
      if (lookahead == '{') ADVANCE(410);
      END_STATE();
    case 162:
      if (lookahead == '{') ADVANCE(410);
      if (lookahead != 0) ADVANCE(630);
      END_STATE();
    case 163:
      if (lookahead == '{') ADVANCE(630);
      END_STATE();
    case 164:
      ADVANCE_MAP(
        '{', 553,
        'A', 691,
        'a', 691,
        'D', 683,
        'd', 683,
        'R', 662,
        'r', 662,
        'T', 643,
        't', 643,
        '$', 375,
        '&', 375,
        '@', 375,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 165:
      if (lookahead == '{') ADVANCE(553);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(648);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 166:
      ADVANCE_MAP(
        '{', 553,
        'D', 683,
        'd', 683,
        'S', 655,
        's', 655,
        'T', 642,
        't', 642,
        '$', 375,
        '&', 375,
        '@', 375,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 167:
      ADVANCE_MAP(
        '{', 553,
        'K', 657,
        'k', 657,
        'S', 661,
        's', 661,
        'T', 659,
        't', 659,
        'V', 649,
        'v', 649,
        '$', 375,
        '&', 375,
        '@', 375,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 168:
      if (lookahead == '{') ADVANCE(553);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 169:
      if (lookahead == '{') ADVANCE(722);
      END_STATE();
    case 170:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(205);
      END_STATE();
    case 171:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(394);
      END_STATE();
    case 172:
      ADVANCE_MAP(
        'A', 296,
        'a', 296,
        'D', 288,
        'd', 288,
        'R', 218,
        'r', 218,
        'S', 226,
        's', 226,
        'T', 175,
        't', 175,
      );
      END_STATE();
    case 173:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(309);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(315);
      END_STATE();
    case 174:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(194);
      END_STATE();
    case 175:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(239);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(177);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(259);
      END_STATE();
    case 176:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(301);
      END_STATE();
    case 177:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(299);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(289);
      END_STATE();
    case 178:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(354);
      END_STATE();
    case 179:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(300);
      END_STATE();
    case 180:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(325);
      END_STATE();
    case 181:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(333);
      END_STATE();
    case 182:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(240);
      END_STATE();
    case 183:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(344);
      END_STATE();
    case 184:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(305);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(294);
      END_STATE();
    case 185:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(347);
      END_STATE();
    case 186:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(339);
      END_STATE();
    case 187:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(345);
      END_STATE();
    case 188:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(306);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(295);
      END_STATE();
    case 189:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(241);
      END_STATE();
    case 190:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(346);
      END_STATE();
    case 191:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(307);
      END_STATE();
    case 192:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(196);
      END_STATE();
    case 193:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(308);
      END_STATE();
    case 194:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(255);
      END_STATE();
    case 195:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(303);
      END_STATE();
    case 196:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(256);
      END_STATE();
    case 197:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(362);
      END_STATE();
    case 198:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(216);
      END_STATE();
    case 199:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(648);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 200:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(213);
      END_STATE();
    case 201:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(180);
      END_STATE();
    case 202:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(365);
      END_STATE();
    case 203:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(277);
      END_STATE();
    case 204:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(279);
      END_STATE();
    case 205:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(186);
      END_STATE();
    case 206:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(313);
      END_STATE();
    case 207:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(283);
      END_STATE();
    case 208:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(286);
      END_STATE();
    case 209:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(316);
      END_STATE();
    case 210:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(238);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(197);
      END_STATE();
    case 211:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(328);
      END_STATE();
    case 212:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(371);
      END_STATE();
    case 213:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(391);
      END_STATE();
    case 214:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(405);
      END_STATE();
    case 215:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(401);
      END_STATE();
    case 216:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 217:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(274);
      END_STATE();
    case 218:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(331);
      END_STATE();
    case 219:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 220:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(317);
      END_STATE();
    case 221:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(335);
      END_STATE();
    case 222:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(311);
      END_STATE();
    case 223:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 224:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 225:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(280);
      END_STATE();
    case 226:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(334);
      END_STATE();
    case 227:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 228:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(284);
      END_STATE();
    case 229:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(338);
      END_STATE();
    case 230:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(287);
      END_STATE();
    case 231:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(341);
      END_STATE();
    case 232:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(343);
      END_STATE();
    case 233:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(184);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(262);
      END_STATE();
    case 234:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(188);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(263);
      END_STATE();
    case 235:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(320);
      END_STATE();
    case 236:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(322);
      END_STATE();
    case 237:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 238:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(178);
      END_STATE();
    case 239:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(310);
      END_STATE();
    case 240:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(312);
      END_STATE();
    case 241:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(314);
      END_STATE();
    case 242:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(363);
      END_STATE();
    case 243:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(319);
      END_STATE();
    case 244:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(195);
      END_STATE();
    case 245:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(174);
      END_STATE();
    case 246:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(336);
      END_STATE();
    case 247:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(273);
      END_STATE();
    case 248:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(281);
      END_STATE();
    case 249:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(285);
      END_STATE();
    case 250:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(192);
      END_STATE();
    case 251:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(18);
      END_STATE();
    case 252:
      ADVANCE_MAP(
        'K', 212,
        'k', 212,
        'S', 221,
        's', 221,
        'T', 220,
        't', 220,
        'V', 193,
        'v', 193,
      );
      END_STATE();
    case 253:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(183);
      END_STATE();
    case 254:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(350);
      END_STATE();
    case 255:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(222);
      END_STATE();
    case 256:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(235);
      END_STATE();
    case 257:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(187);
      END_STATE();
    case 258:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(190);
      END_STATE();
    case 259:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(225);
      END_STATE();
    case 260:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(217);
      END_STATE();
    case 261:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(219);
      END_STATE();
    case 262:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(228);
      END_STATE();
    case 263:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(230);
      END_STATE();
    case 264:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(237);
      END_STATE();
    case 265:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(404);
      END_STATE();
    case 266:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(400);
      END_STATE();
    case 267:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(393);
      END_STATE();
    case 268:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(396);
      END_STATE();
    case 269:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 270:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 271:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 272:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(340);
      END_STATE();
    case 273:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(243);
      END_STATE();
    case 274:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(342);
      END_STATE();
    case 275:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(349);
      END_STATE();
    case 276:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(298);
      END_STATE();
    case 277:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(370);
      END_STATE();
    case 278:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(364);
      END_STATE();
    case 279:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(366);
      END_STATE();
    case 280:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(359);
      END_STATE();
    case 281:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(267);
      END_STATE();
    case 282:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(302);
      END_STATE();
    case 283:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(367);
      END_STATE();
    case 284:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(360);
      END_STATE();
    case 285:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(271);
      END_STATE();
    case 286:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(368);
      END_STATE();
    case 287:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(361);
      END_STATE();
    case 288:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(202);
      END_STATE();
    case 289:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(253);
      END_STATE();
    case 290:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(403);
      END_STATE();
    case 291:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(399);
      END_STATE();
    case 292:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(395);
      END_STATE();
    case 293:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(21);
      END_STATE();
    case 294:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(257);
      END_STATE();
    case 295:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(258);
      END_STATE();
    case 296:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(242);
      END_STATE();
    case 297:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(269);
      END_STATE();
    case 298:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 299:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 300:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(372);
      END_STATE();
    case 301:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(245);
      END_STATE();
    case 302:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(206);
      END_STATE();
    case 303:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(179);
      END_STATE();
    case 304:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 305:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(204);
      END_STATE();
    case 306:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(207);
      END_STATE();
    case 307:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(208);
      END_STATE();
    case 308:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(250);
      END_STATE();
    case 309:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(251);
      END_STATE();
    case 310:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(19);
      END_STATE();
    case 311:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(392);
      END_STATE();
    case 312:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(397);
      END_STATE();
    case 313:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(29);
      END_STATE();
    case 314:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(398);
      END_STATE();
    case 315:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(351);
      END_STATE();
    case 316:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(278);
      END_STATE();
    case 317:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(329);
      END_STATE();
    case 318:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(27);
      END_STATE();
    case 319:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(31);
      END_STATE();
    case 320:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(33);
      END_STATE();
    case 321:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(229);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(233);
      END_STATE();
    case 322:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(34);
      END_STATE();
    case 323:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(231);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(234);
      END_STATE();
    case 324:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(232);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(227);
      END_STATE();
    case 325:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(236);
      END_STATE();
    case 326:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(406);
      END_STATE();
    case 327:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(402);
      END_STATE();
    case 328:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(170);
      END_STATE();
    case 329:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(22);
      END_STATE();
    case 330:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(247);
      END_STATE();
    case 331:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(358);
      END_STATE();
    case 332:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(24);
      END_STATE();
    case 333:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(248);
      END_STATE();
    case 334:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(353);
      END_STATE();
    case 335:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(330);
      END_STATE();
    case 336:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(224);
      END_STATE();
    case 337:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(182);
      END_STATE();
    case 338:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(355);
      END_STATE();
    case 339:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(171);
      END_STATE();
    case 340:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(318);
      END_STATE();
    case 341:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(356);
      END_STATE();
    case 342:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(181);
      END_STATE();
    case 343:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(357);
      END_STATE();
    case 344:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(223);
      END_STATE();
    case 345:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(214);
      END_STATE();
    case 346:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(215);
      END_STATE();
    case 347:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(249);
      END_STATE();
    case 348:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(189);
      END_STATE();
    case 349:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(185);
      END_STATE();
    case 350:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(32);
      END_STATE();
    case 351:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(35);
      END_STATE();
    case 352:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(246);
      END_STATE();
    case 353:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(293);
      END_STATE();
    case 354:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(254);
      END_STATE();
    case 355:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(290);
      END_STATE();
    case 356:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(291);
      END_STATE();
    case 357:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(292);
      END_STATE();
    case 358:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(297);
      END_STATE();
    case 359:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(332);
      END_STATE();
    case 360:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(326);
      END_STATE();
    case 361:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(327);
      END_STATE();
    case 362:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(260);
      END_STATE();
    case 363:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(261);
      END_STATE();
    case 364:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(304);
      END_STATE();
    case 365:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(264);
      END_STATE();
    case 366:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(265);
      END_STATE();
    case 367:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(266);
      END_STATE();
    case 368:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(268);
      END_STATE();
    case 369:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(282);
      END_STATE();
    case 370:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(270);
      END_STATE();
    case 371:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(369);
      END_STATE();
    case 372:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(390);
      END_STATE();
    case 373:
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 374:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(630);
      END_STATE();
    case 375:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(722);
      END_STATE();
    case 376:
      if (eof) ADVANCE(380);
      ADVANCE_MAP(
        '\t', 757,
        '\n', 765,
        '\r', 14,
        ' ', 761,
        '#', 754,
        '*', 499,
        '{', 163,
        0x0b, 14,
        '\f', 14,
        '$', 374,
        '&', 374,
        '@', 374,
      );
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 377:
      if (eof) ADVANCE(380);
      ADVANCE_MAP(
        '\n', 766,
        '\r', 15,
        '#', 756,
        '$', 161,
        '*', 53,
        '\t', 764,
        ' ', 764,
        'D', 210,
        'd', 210,
        'F', 276,
        'f', 276,
        'L', 244,
        'l', 244,
        'M', 211,
        'm', 211,
        'R', 209,
        'r', 209,
        'S', 352,
        's', 352,
        'T', 173,
        't', 173,
        'V', 176,
        'v', 176,
        0x0b, 15,
        '\f', 15,
      );
      END_STATE();
    case 378:
      if (eof) ADVANCE(380);
      ADVANCE_MAP(
        '\n', 765,
        '\r', 14,
        '#', 754,
        '*', 499,
        '{', 163,
        '\t', 763,
        ' ', 763,
        0x0b, 14,
        '\f', 14,
        '$', 374,
        '&', 374,
        '@', 374,
      );
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 379:
      if (eof) ADVANCE(380);
      if (lookahead == '#') ADVANCE(756);
      if (lookahead == '*') ADVANCE(53);
      if (lookahead == 'E') ADVANCE(104);
      if (lookahead == 'F') ADVANCE(95);
      if (lookahead == '}') ADVANCE(412);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(381);
      if (('\n' <= lookahead && lookahead <= '\r')) ADVANCE(382);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '#') ADVANCE(756);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(381);
      if (('\n' <= lookahead && lookahead <= '\r')) ADVANCE(382);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(382);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead == '\n') ADVANCE(766);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(386);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(387);
      if (lookahead != 0) ADVANCE(389);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead == '\n') ADVANCE(766);
      if (lookahead == '\r') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(387);
      if (lookahead != 0) ADVANCE(389);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead == '\r') ADVANCE(756);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(389);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_setting_statement_token1);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_setting_statement_token2);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_setting_statement_token3);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_setting_statement_token4);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_setting_statement_token5);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_setting_statement_token6);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_setting_statement_token7);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_setting_statement_token8);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_setting_statement_token9);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_setting_statement_token10);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_setting_statement_token11);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_setting_statement_token12);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_setting_statement_token13);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_setting_statement_token14);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_setting_statement_token15);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_setting_statement_token16);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_setting_statement_token17);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      if (lookahead == '{') ADVANCE(485);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '}') ADVANCE(489);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token1);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token1);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token1);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token2);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token2);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token2);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token3);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token3);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token3);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token4);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token4);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token4);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token5);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token5);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token5);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token6);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token6);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token6);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_test_cases_section_token1);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_test_cases_section_token1);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_test_case_setting_token1);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_test_case_setting_token1);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_test_case_setting_token1);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_test_case_setting_token2);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_test_case_setting_token2);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_test_case_setting_token2);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_RETURN);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_RETURN);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_IF);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_IF);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_END);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_END);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_ELSEIF);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_ELSEIF);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_ELSE);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(94);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(93);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_TRY);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_TRY);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_EXCEPT);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_EXCEPT);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_FINALLY);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_FINALLY);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_WHILE);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_WHILE);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_FOR);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_FOR);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(216);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_IN);
      if (lookahead == ' ') ADVANCE(87);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_INRANGE);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_INENUMERATE);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_INZIP);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_continue_statement);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_continue_statement);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_break_statement);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_break_statement);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_ellipses);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_ellipses);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(12);
      if (lookahead == '\n') ADVANCE(766);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(758);
      if (lookahead == '#') ADVANCE(756);
      if (lookahead == '{') ADVANCE(630);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(12);
      if (lookahead == '\n') ADVANCE(766);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(758);
      if (lookahead == '#') ADVANCE(756);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(37);
      if (lookahead == ' ') ADVANCE(760);
      if (lookahead == '#') ADVANCE(756);
      if (lookahead == '{') ADVANCE(630);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\n') ADVANCE(766);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(756);
      if (lookahead == '{') ADVANCE(630);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '#') ADVANCE(756);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '#') ADVANCE(490);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(492);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_AT_LBRACE);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_AMP_LBRACE);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE_LBRACE);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_inline_python_expression_token1);
      if (lookahead == '#') ADVANCE(487);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '}') ADVANCE(488);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_inline_python_expression_token1);
      if (lookahead == '\r' ||
          lookahead == '}') ADVANCE(756);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(487);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_inline_python_expression_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '}') ADVANCE(488);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '\n') ADVANCE(492);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(756);
      if (lookahead != 0) ADVANCE(490);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '#') ADVANCE(490);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(492);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(492);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == ' ') ADVANCE(752);
      if (lookahead == '{') ADVANCE(496);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(750);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(754);
      if (lookahead != 0) ADVANCE(494);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == ' ') ADVANCE(752);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(750);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(754);
      if (lookahead != 0) ADVANCE(494);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == ' ') ADVANCE(752);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(750);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == '{') ADVANCE(754);
      if (lookahead != 0) ADVANCE(494);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead == ' ') ADVANCE(753);
      if (lookahead == '{') ADVANCE(493);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(751);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(755);
      if (lookahead != 0) ADVANCE(497);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead == ' ') ADVANCE(753);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(751);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(755);
      if (lookahead != 0) ADVANCE(497);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead == ' ') ADVANCE(753);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(751);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == '{') ADVANCE(755);
      if (lookahead != 0) ADVANCE(497);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == '*') ADVANCE(500);
      if (lookahead == '{') ADVANCE(629);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == '*') ADVANCE(726);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == '*') ADVANCE(417);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == '*') ADVANCE(384);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == '*') ADVANCE(408);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == '*') ADVANCE(501);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == '*') ADVANCE(502);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == '*') ADVANCE(503);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == '.') ADVANCE(508);
      if (lookahead == '{') ADVANCE(629);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == '.') ADVANCE(476);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'A') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'A') ADVANCE(529);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'C') ADVANCE(518);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'D') ADVANCE(450);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'E') ADVANCE(545);
      if (lookahead == '{') ADVANCE(629);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'E') ADVANCE(509);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'E') ADVANCE(464);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'E') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'E') ADVANCE(454);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'E') ADVANCE(538);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'E') ADVANCE(455);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'F') ADVANCE(448);
      if (lookahead == '{') ADVANCE(629);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'H') ADVANCE(522);
      if (lookahead == '{') ADVANCE(629);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'I') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'I') ADVANCE(535);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'I') ADVANCE(534);
      if (lookahead == 'O') ADVANCE(541);
      if (lookahead == '{') ADVANCE(629);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'K') ADVANCE(474);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_text_chunk);
      ADVANCE_MAP(
        ' ', 168,
        'L', 543,
        'N', 512,
        'X', 511,
        '{', 629,
        '$', 374,
        '&', 374,
        '@', 374,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'L') ADVANCE(515);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'L') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'L') ADVANCE(528);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'L') ADVANCE(544);
      if (lookahead == 'N') ADVANCE(512);
      if (lookahead == '{') ADVANCE(629);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'N') ADVANCE(446);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'N') ADVANCE(512);
      if (lookahead == '{') ADVANCE(629);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'N') ADVANCE(547);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'N') ADVANCE(510);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'N') ADVANCE(549);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'O') ADVANCE(533);
      if (lookahead == '{') ADVANCE(629);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'O') ADVANCE(541);
      if (lookahead == '{') ADVANCE(629);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'P') ADVANCE(546);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'R') ADVANCE(514);
      if (lookahead == '{') ADVANCE(629);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'R') ADVANCE(550);
      if (lookahead == '{') ADVANCE(629);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'R') ADVANCE(465);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'R') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'S') ADVANCE(517);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'S') ADVANCE(519);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'T') ADVANCE(548);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'T') ADVANCE(460);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'T') ADVANCE(523);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'U') ADVANCE(542);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'U') ADVANCE(516);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'Y') ADVANCE(458);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'Y') ADVANCE(462);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == '{') ADVANCE(629);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == '{') ADVANCE(641);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_text_chunk);
      ADVANCE_MAP(
        ' ', 168,
        'A', 576,
        'a', 576,
        'E', 556,
        'e', 556,
        'I', 584,
        'i', 584,
        '$', 374,
        '&', 374,
        '@', 374,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_text_chunk);
      ADVANCE_MAP(
        ' ', 168,
        'A', 576,
        'a', 576,
        'E', 557,
        'e', 557,
        'I', 584,
        'i', 584,
        '$', 374,
        '&', 374,
        '@', 374,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_text_chunk);
      ADVANCE_MAP(
        ' ', 168,
        'A', 600,
        'a', 600,
        'M', 598,
        'm', 598,
        '$', 374,
        '&', 374,
        '@', 374,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(600);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(562);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(616);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(603);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(611);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(583);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(624);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(594);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(606);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(612);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(587);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(628);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(595);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(608);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(737);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(618);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(617);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(589);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(610);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(605);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(625);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(609);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(592);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(558);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(559);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(575);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(567);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(574);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(620);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(735);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(739);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(741);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(578);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(563);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(626);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(622);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(602);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(590);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(582);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(731);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(564);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(577);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(565);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(581);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(591);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(723);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(729);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(743);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(613);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(745);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(747);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(621);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(727);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(733);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(579);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(623);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(615);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(607);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(561);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(599);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(614);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(604);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(585);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(586);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(596);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(627);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == '{') ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_text_chunk);
      ADVANCE_MAP(
        ' ', 166,
        '{', 629,
        'D', 593,
        'd', 593,
        'S', 566,
        's', 566,
        'T', 554,
        't', 554,
        '$', 374,
        '&', 374,
        '@', 374,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == '*') ADVANCE(438);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == '*') ADVANCE(418);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == '*') ADVANCE(385);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == '*') ADVANCE(409);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == '*') ADVANCE(633);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == '*') ADVANCE(634);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == '*') ADVANCE(635);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == '*') ADVANCE(632);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'F') ADVANCE(452);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == '{') ADVANCE(553);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_text_chunk);
      ADVANCE_MAP(
        ' ', 373,
        'A', 666,
        'a', 666,
        'E', 644,
        'e', 644,
        'I', 674,
        'i', 674,
        '$', 375,
        '&', 375,
        '@', 375,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_text_chunk);
      ADVANCE_MAP(
        ' ', 373,
        'A', 666,
        'a', 666,
        'E', 645,
        'e', 645,
        'I', 674,
        'i', 674,
        '$', 375,
        '&', 375,
        '@', 375,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_text_chunk);
      ADVANCE_MAP(
        ' ', 373,
        'A', 690,
        'a', 690,
        'M', 688,
        'm', 688,
        '$', 375,
        '&', 375,
        '@', 375,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(690);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(651);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(708);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(702);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(693);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(703);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(673);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(716);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(684);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(696);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(705);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(677);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(720);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(685);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(698);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(738);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(710);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(709);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(679);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(700);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(701);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(695);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(717);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(699);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(682);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(687);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(646);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(647);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(664);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(658);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(656);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(663);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(712);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(736);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(711);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(740);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(742);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(668);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(652);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(718);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(714);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(692);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(680);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(672);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(732);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(653);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(667);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(654);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(671);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(681);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(724);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(730);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(744);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(704);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(746);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(748);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(749);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(670);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(728);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(713);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(734);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(669);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(660);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(715);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(707);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(697);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(650);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(689);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(706);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(694);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(675);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(676);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(678);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(686);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(719);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == '{') ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(139);
      if (lookahead == ']') ADVANCE(423);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(140);
      if (lookahead == ']') ADVANCE(424);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_text_chunk);
      ADVANCE_MAP(
        ' ', 164,
        '{', 629,
        'A', 601,
        'a', 601,
        'D', 593,
        'd', 593,
        'R', 573,
        'r', 573,
        'T', 555,
        't', 555,
        '$', 374,
        '&', 374,
        '@', 374,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_text_chunk);
      ADVANCE_MAP(
        ' ', 167,
        'K', 568,
        'k', 568,
        'S', 572,
        's', 572,
        'T', 570,
        't', 570,
        'V', 560,
        'v', 560,
        '$', 374,
        '&', 374,
        '@', 374,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(199);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(57);
      if (lookahead == '*') ADVANCE(504);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(58);
      if (lookahead == '*') ADVANCE(636);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(141);
      if (lookahead == ']') ADVANCE(440);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(142);
      if (lookahead == ']') ADVANCE(441);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead == ']') ADVANCE(435);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(144);
      if (lookahead == ']') ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(145);
      if (lookahead == ']') ADVANCE(432);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(146);
      if (lookahead == ']') ADVANCE(433);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(147);
      if (lookahead == ']') ADVANCE(443);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(148);
      if (lookahead == ']') ADVANCE(444);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(149);
      if (lookahead == ']') ADVANCE(420);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(150);
      if (lookahead == ']') ADVANCE(421);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(151);
      if (lookahead == ']') ADVANCE(429);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(152);
      if (lookahead == ']') ADVANCE(430);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(153);
      if (lookahead == ']') ADVANCE(426);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(154);
      if (lookahead == ']') ADVANCE(427);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(60);
      if (lookahead == '*') ADVANCE(505);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(61);
      if (lookahead == '*') ADVANCE(637);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead == '*') ADVANCE(506);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(64);
      if (lookahead == '*') ADVANCE(638);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(66);
      if (lookahead == '*') ADVANCE(639);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(630);
      if (lookahead == '{') ADVANCE(756);
      if (lookahead != 0) ADVANCE(495);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(722);
      if (lookahead == '{') ADVANCE(756);
      if (lookahead != 0) ADVANCE(498);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead == '{') ADVANCE(493);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(751);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(755);
      if (lookahead != 0) ADVANCE(497);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(751);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(755);
      if (lookahead != 0) ADVANCE(497);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '{') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(756);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '{') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(756);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(756);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '\n') ADVANCE(766);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(756);
      if (lookahead == '{') ADVANCE(630);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(758);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '\n') ADVANCE(766);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(756);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(758);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '#') ADVANCE(756);
      if (lookahead == '{') ADVANCE(630);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(760);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '#') ADVANCE(756);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(760);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t') ADVANCE(764);
      if (lookahead == '\n') ADVANCE(766);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(758);
      if (lookahead == '#') ADVANCE(756);
      if (lookahead == '{') ADVANCE(630);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t') ADVANCE(764);
      if (lookahead == '\n') ADVANCE(766);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(758);
      if (lookahead == '#') ADVANCE(756);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\n') ADVANCE(766);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(756);
      if (lookahead == '{') ADVANCE(630);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(764);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\n') ADVANCE(766);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(756);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(764);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(766);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '{') ADVANCE(630);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(766);
      if (lookahead == '\r') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 379},
  [2] = {.lex_state = 377},
  [3] = {.lex_state = 377},
  [4] = {.lex_state = 377},
  [5] = {.lex_state = 377},
  [6] = {.lex_state = 377},
  [7] = {.lex_state = 377},
  [8] = {.lex_state = 42},
  [9] = {.lex_state = 43},
  [10] = {.lex_state = 377},
  [11] = {.lex_state = 39},
  [12] = {.lex_state = 40},
  [13] = {.lex_state = 41},
  [14] = {.lex_state = 38},
  [15] = {.lex_state = 44},
  [16] = {.lex_state = 376},
  [17] = {.lex_state = 376},
  [18] = {.lex_state = 376},
  [19] = {.lex_state = 376},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 377},
  [22] = {.lex_state = 378},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 377},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 377},
  [27] = {.lex_state = 378},
  [28] = {.lex_state = 378},
  [29] = {.lex_state = 378},
  [30] = {.lex_state = 378},
  [31] = {.lex_state = 378},
  [32] = {.lex_state = 378},
  [33] = {.lex_state = 378},
  [34] = {.lex_state = 378},
  [35] = {.lex_state = 377},
  [36] = {.lex_state = 377},
  [37] = {.lex_state = 378},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 376},
  [55] = {.lex_state = 376},
  [56] = {.lex_state = 376},
  [57] = {.lex_state = 378},
  [58] = {.lex_state = 378},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 7},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 8},
  [64] = {.lex_state = 377},
  [65] = {.lex_state = 378},
  [66] = {.lex_state = 7},
  [67] = {.lex_state = 8},
  [68] = {.lex_state = 377},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 8},
  [71] = {.lex_state = 7},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 45},
  [74] = {.lex_state = 45},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 45},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 9},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 9},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 6},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 9},
  [104] = {.lex_state = 6},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 6},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 6},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 6},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 7},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 7},
  [115] = {.lex_state = 9},
  [116] = {.lex_state = 7},
  [117] = {.lex_state = 7},
  [118] = {.lex_state = 8},
  [119] = {.lex_state = 8},
  [120] = {.lex_state = 6},
  [121] = {.lex_state = 7},
  [122] = {.lex_state = 7},
  [123] = {.lex_state = 8},
  [124] = {.lex_state = 8},
  [125] = {.lex_state = 8},
  [126] = {.lex_state = 7},
  [127] = {.lex_state = 8},
  [128] = {.lex_state = 7},
  [129] = {.lex_state = 8},
  [130] = {.lex_state = 7},
  [131] = {.lex_state = 6},
  [132] = {.lex_state = 7},
  [133] = {.lex_state = 7},
  [134] = {.lex_state = 8},
  [135] = {.lex_state = 7},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 9},
  [138] = {.lex_state = 8},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 9},
  [141] = {.lex_state = 6},
  [142] = {.lex_state = 8},
  [143] = {.lex_state = 8},
  [144] = {.lex_state = 8},
  [145] = {.lex_state = 46},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 379},
  [148] = {.lex_state = 46},
  [149] = {.lex_state = 46},
  [150] = {.lex_state = 46},
  [151] = {.lex_state = 9},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 46},
  [155] = {.lex_state = 46},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 9},
  [158] = {.lex_state = 379},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 46},
  [162] = {.lex_state = 9},
  [163] = {.lex_state = 9},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 9},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 9},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 1},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 1},
  [181] = {.lex_state = 9},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 9},
  [189] = {.lex_state = 46},
  [190] = {.lex_state = 9},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 10},
  [193] = {.lex_state = 10},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 10},
  [197] = {.lex_state = 9},
  [198] = {.lex_state = 10},
  [199] = {.lex_state = 10},
  [200] = {.lex_state = 9},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 10},
  [203] = {.lex_state = 10},
  [204] = {.lex_state = 5},
  [205] = {.lex_state = 5},
  [206] = {.lex_state = 5},
  [207] = {.lex_state = 5},
  [208] = {.lex_state = 5},
  [209] = {.lex_state = 13},
  [210] = {.lex_state = 9},
  [211] = {.lex_state = 13},
  [212] = {.lex_state = 5},
  [213] = {.lex_state = 9},
  [214] = {.lex_state = 5},
  [215] = {.lex_state = 5},
  [216] = {.lex_state = 9},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 13},
  [219] = {.lex_state = 5},
  [220] = {.lex_state = 5},
  [221] = {.lex_state = 5},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 5},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 9},
  [226] = {.lex_state = 5},
  [227] = {.lex_state = 5},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 10},
  [230] = {.lex_state = 10},
  [231] = {.lex_state = 10},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 5},
  [234] = {.lex_state = 5},
  [235] = {.lex_state = 9},
  [236] = {.lex_state = 9},
  [237] = {.lex_state = 5},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 5},
  [240] = {.lex_state = 5},
  [241] = {.lex_state = 5},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 9},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 9},
  [252] = {.lex_state = 13},
  [253] = {.lex_state = 9},
  [254] = {.lex_state = 9},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 9},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 9},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 9},
  [271] = {.lex_state = 9},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 379},
  [274] = {.lex_state = 379},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 379},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 379},
  [281] = {.lex_state = 9},
  [282] = {.lex_state = 379},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 379},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 9},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 47},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 47},
  [296] = {.lex_state = 9},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 47},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 47},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 9},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 9},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 379},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 47},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 9},
  [321] = {.lex_state = 9},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 9},
  [326] = {.lex_state = 379},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 379},
  [329] = {.lex_state = 379},
  [330] = {.lex_state = 379},
  [331] = {.lex_state = 379},
  [332] = {.lex_state = 379},
  [333] = {.lex_state = 379},
  [334] = {.lex_state = 379},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 9},
  [337] = {.lex_state = 9},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 9},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 379},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 379},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 379},
  [348] = {.lex_state = 379},
  [349] = {.lex_state = 379},
  [350] = {.lex_state = 379},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 379},
  [355] = {.lex_state = 379},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 47},
  [360] = {.lex_state = 47},
  [361] = {.lex_state = 47},
  [362] = {.lex_state = 47},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 9},
  [366] = {.lex_state = 47},
  [367] = {.lex_state = 47},
  [368] = {.lex_state = 47},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 47},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_settings_section_token1] = ACTIONS(1),
    [aux_sym_setting_statement_token1] = ACTIONS(1),
    [aux_sym_setting_statement_token2] = ACTIONS(1),
    [aux_sym_setting_statement_token3] = ACTIONS(1),
    [aux_sym_setting_statement_token4] = ACTIONS(1),
    [aux_sym_setting_statement_token5] = ACTIONS(1),
    [aux_sym_setting_statement_token6] = ACTIONS(1),
    [aux_sym_setting_statement_token7] = ACTIONS(1),
    [aux_sym_setting_statement_token8] = ACTIONS(1),
    [aux_sym_setting_statement_token9] = ACTIONS(1),
    [aux_sym_setting_statement_token10] = ACTIONS(1),
    [aux_sym_setting_statement_token11] = ACTIONS(1),
    [aux_sym_setting_statement_token12] = ACTIONS(1),
    [aux_sym_setting_statement_token13] = ACTIONS(1),
    [aux_sym_setting_statement_token14] = ACTIONS(1),
    [aux_sym_setting_statement_token15] = ACTIONS(1),
    [aux_sym_setting_statement_token16] = ACTIONS(1),
    [aux_sym_setting_statement_token17] = ACTIONS(1),
    [aux_sym_variables_section_token1] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_keywords_section_token1] = ACTIONS(1),
    [aux_sym_keyword_setting_token1] = ACTIONS(1),
    [aux_sym_keyword_setting_token2] = ACTIONS(1),
    [aux_sym_keyword_setting_token3] = ACTIONS(1),
    [aux_sym_keyword_setting_token4] = ACTIONS(1),
    [aux_sym_keyword_setting_token5] = ACTIONS(1),
    [aux_sym_keyword_setting_token6] = ACTIONS(1),
    [aux_sym_test_cases_section_token1] = ACTIONS(1),
    [aux_sym_test_case_setting_token1] = ACTIONS(1),
    [aux_sym_test_case_setting_token2] = ACTIONS(1),
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
    [anon_sym_SPACE] = ACTIONS(1),
    [anon_sym_AT_LBRACE] = ACTIONS(1),
    [anon_sym_AMP_LBRACE] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__separator] = ACTIONS(1),
    [sym__line_break] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(323),
    [sym_section] = STATE(38),
    [sym_settings_section] = STATE(139),
    [sym_variables_section] = STATE(139),
    [sym_keywords_section] = STATE(139),
    [sym_test_cases_section] = STATE(139),
    [aux_sym_source_file_repeat1] = STATE(38),
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
  [0] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(23), 1,
      sym__line_break,
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
      aux_sym_setting_statement_token1,
      aux_sym_setting_statement_token2,
      aux_sym_setting_statement_token3,
      aux_sym_setting_statement_token4,
      aux_sym_setting_statement_token5,
      aux_sym_setting_statement_token6,
      aux_sym_setting_statement_token7,
      aux_sym_setting_statement_token8,
      aux_sym_setting_statement_token9,
      aux_sym_setting_statement_token10,
      aux_sym_setting_statement_token11,
      aux_sym_setting_statement_token12,
      aux_sym_setting_statement_token13,
      aux_sym_setting_statement_token14,
      aux_sym_setting_statement_token15,
      aux_sym_setting_statement_token16,
      aux_sym_setting_statement_token17,
  [41] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(30), 1,
      aux_sym__whitespace_token1,
    ACTIONS(33), 1,
      sym__line_break,
    STATE(3), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(25), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
    ACTIONS(27), 17,
      aux_sym_setting_statement_token1,
      aux_sym_setting_statement_token2,
      aux_sym_setting_statement_token3,
      aux_sym_setting_statement_token4,
      aux_sym_setting_statement_token5,
      aux_sym_setting_statement_token6,
      aux_sym_setting_statement_token7,
      aux_sym_setting_statement_token8,
      aux_sym_setting_statement_token9,
      aux_sym_setting_statement_token10,
      aux_sym_setting_statement_token11,
      aux_sym_setting_statement_token12,
      aux_sym_setting_statement_token13,
      aux_sym_setting_statement_token14,
      aux_sym_setting_statement_token15,
      aux_sym_setting_statement_token16,
      aux_sym_setting_statement_token17,
  [82] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(38), 1,
      sym__line_break,
    STATE(6), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(36), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
    ACTIONS(19), 17,
      aux_sym_setting_statement_token1,
      aux_sym_setting_statement_token2,
      aux_sym_setting_statement_token3,
      aux_sym_setting_statement_token4,
      aux_sym_setting_statement_token5,
      aux_sym_setting_statement_token6,
      aux_sym_setting_statement_token7,
      aux_sym_setting_statement_token8,
      aux_sym_setting_statement_token9,
      aux_sym_setting_statement_token10,
      aux_sym_setting_statement_token11,
      aux_sym_setting_statement_token12,
      aux_sym_setting_statement_token13,
      aux_sym_setting_statement_token14,
      aux_sym_setting_statement_token15,
      aux_sym_setting_statement_token16,
      aux_sym_setting_statement_token17,
  [123] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(42), 1,
      sym__line_break,
    STATE(3), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(40), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
    ACTIONS(19), 17,
      aux_sym_setting_statement_token1,
      aux_sym_setting_statement_token2,
      aux_sym_setting_statement_token3,
      aux_sym_setting_statement_token4,
      aux_sym_setting_statement_token5,
      aux_sym_setting_statement_token6,
      aux_sym_setting_statement_token7,
      aux_sym_setting_statement_token8,
      aux_sym_setting_statement_token9,
      aux_sym_setting_statement_token10,
      aux_sym_setting_statement_token11,
      aux_sym_setting_statement_token12,
      aux_sym_setting_statement_token13,
      aux_sym_setting_statement_token14,
      aux_sym_setting_statement_token15,
      aux_sym_setting_statement_token16,
      aux_sym_setting_statement_token17,
  [164] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(42), 1,
      sym__line_break,
    STATE(3), 3,
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
      aux_sym_setting_statement_token1,
      aux_sym_setting_statement_token2,
      aux_sym_setting_statement_token3,
      aux_sym_setting_statement_token4,
      aux_sym_setting_statement_token5,
      aux_sym_setting_statement_token6,
      aux_sym_setting_statement_token7,
      aux_sym_setting_statement_token8,
      aux_sym_setting_statement_token9,
      aux_sym_setting_statement_token10,
      aux_sym_setting_statement_token11,
      aux_sym_setting_statement_token12,
      aux_sym_setting_statement_token13,
      aux_sym_setting_statement_token14,
      aux_sym_setting_statement_token15,
      aux_sym_setting_statement_token16,
      aux_sym_setting_statement_token17,
  [205] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 1,
      aux_sym__whitespace_token1,
    ACTIONS(44), 24,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_setting_statement_token1,
      aux_sym_setting_statement_token2,
      aux_sym_setting_statement_token3,
      aux_sym_setting_statement_token4,
      aux_sym_setting_statement_token5,
      aux_sym_setting_statement_token6,
      aux_sym_setting_statement_token7,
      aux_sym_setting_statement_token8,
      aux_sym_setting_statement_token9,
      aux_sym_setting_statement_token10,
      aux_sym_setting_statement_token11,
      aux_sym_setting_statement_token12,
      aux_sym_setting_statement_token13,
      aux_sym_setting_statement_token14,
      aux_sym_setting_statement_token15,
      aux_sym_setting_statement_token16,
      aux_sym_setting_statement_token17,
      aux_sym_variables_section_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym__line_break,
  [238] = 12,
    ACTIONS(48), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(52), 1,
      anon_sym_RETURN,
    ACTIONS(54), 1,
      anon_sym_IF,
    ACTIONS(56), 1,
      anon_sym_TRY,
    ACTIONS(58), 1,
      anon_sym_WHILE,
    ACTIONS(60), 1,
      anon_sym_FOR,
    ACTIONS(64), 1,
      sym_text_chunk,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(62), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(286), 2,
      sym_test_case_setting,
      sym_statement,
    ACTIONS(50), 6,
      aux_sym_keyword_setting_token1,
      aux_sym_keyword_setting_token2,
      aux_sym_keyword_setting_token5,
      aux_sym_keyword_setting_token6,
      aux_sym_test_case_setting_token1,
      aux_sym_test_case_setting_token2,
    STATE(288), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [289] = 12,
    ACTIONS(48), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(52), 1,
      anon_sym_RETURN,
    ACTIONS(54), 1,
      anon_sym_IF,
    ACTIONS(56), 1,
      anon_sym_TRY,
    ACTIONS(58), 1,
      anon_sym_WHILE,
    ACTIONS(60), 1,
      anon_sym_FOR,
    ACTIONS(64), 1,
      sym_text_chunk,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(62), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(287), 2,
      sym_keyword_setting,
      sym_statement,
    ACTIONS(68), 6,
      aux_sym_keyword_setting_token1,
      aux_sym_keyword_setting_token2,
      aux_sym_keyword_setting_token3,
      aux_sym_keyword_setting_token4,
      aux_sym_keyword_setting_token5,
      aux_sym_keyword_setting_token6,
    STATE(288), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [340] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      aux_sym__whitespace_token1,
    ACTIONS(70), 23,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_setting_statement_token1,
      aux_sym_setting_statement_token2,
      aux_sym_setting_statement_token3,
      aux_sym_setting_statement_token4,
      aux_sym_setting_statement_token5,
      aux_sym_setting_statement_token6,
      aux_sym_setting_statement_token7,
      aux_sym_setting_statement_token8,
      aux_sym_setting_statement_token9,
      aux_sym_setting_statement_token10,
      aux_sym_setting_statement_token11,
      aux_sym_setting_statement_token12,
      aux_sym_setting_statement_token13,
      aux_sym_setting_statement_token14,
      aux_sym_setting_statement_token15,
      aux_sym_setting_statement_token16,
      aux_sym_setting_statement_token17,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym__line_break,
  [372] = 15,
    ACTIONS(48), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(52), 1,
      anon_sym_RETURN,
    ACTIONS(54), 1,
      anon_sym_IF,
    ACTIONS(56), 1,
      anon_sym_TRY,
    ACTIONS(58), 1,
      anon_sym_WHILE,
    ACTIONS(60), 1,
      anon_sym_FOR,
    ACTIONS(64), 1,
      sym_text_chunk,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_END,
    ACTIONS(76), 1,
      anon_sym_ELSE,
    ACTIONS(78), 1,
      anon_sym_EXCEPT,
    ACTIONS(80), 1,
      anon_sym_FINALLY,
    STATE(327), 1,
      sym_statement,
    ACTIONS(62), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(288), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [426] = 14,
    ACTIONS(48), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(52), 1,
      anon_sym_RETURN,
    ACTIONS(54), 1,
      anon_sym_IF,
    ACTIONS(56), 1,
      anon_sym_TRY,
    ACTIONS(58), 1,
      anon_sym_WHILE,
    ACTIONS(60), 1,
      anon_sym_FOR,
    ACTIONS(64), 1,
      sym_text_chunk,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_ELSE,
    ACTIONS(82), 1,
      anon_sym_END,
    ACTIONS(84), 1,
      anon_sym_ELSEIF,
    STATE(327), 1,
      sym_statement,
    ACTIONS(62), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(288), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [477] = 12,
    ACTIONS(48), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(52), 1,
      anon_sym_RETURN,
    ACTIONS(54), 1,
      anon_sym_IF,
    ACTIONS(56), 1,
      anon_sym_TRY,
    ACTIONS(58), 1,
      anon_sym_WHILE,
    ACTIONS(60), 1,
      anon_sym_FOR,
    ACTIONS(64), 1,
      sym_text_chunk,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_END,
    STATE(327), 1,
      sym_statement,
    ACTIONS(62), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(288), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [522] = 12,
    ACTIONS(48), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(52), 1,
      anon_sym_RETURN,
    ACTIONS(54), 1,
      anon_sym_IF,
    ACTIONS(56), 1,
      anon_sym_TRY,
    ACTIONS(58), 1,
      anon_sym_WHILE,
    ACTIONS(60), 1,
      anon_sym_FOR,
    ACTIONS(64), 1,
      sym_text_chunk,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(88), 1,
      sym_ellipses,
    STATE(327), 1,
      sym_statement,
    ACTIONS(62), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(288), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [567] = 11,
    ACTIONS(48), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(52), 1,
      anon_sym_RETURN,
    ACTIONS(54), 1,
      anon_sym_IF,
    ACTIONS(56), 1,
      anon_sym_TRY,
    ACTIONS(58), 1,
      anon_sym_WHILE,
    ACTIONS(60), 1,
      anon_sym_FOR,
    ACTIONS(64), 1,
      sym_text_chunk,
    ACTIONS(66), 1,
      sym_comment,
    STATE(327), 1,
      sym_statement,
    ACTIONS(62), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(288), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [609] = 8,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    ACTIONS(94), 1,
      sym__separator,
    ACTIONS(97), 1,
      aux_sym__whitespace_token1,
    ACTIONS(100), 1,
      sym__line_break,
    STATE(8), 1,
      sym__indentation,
    STATE(16), 2,
      sym__empty_line,
      aux_sym_test_case_definition_body_repeat1,
    ACTIONS(92), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [639] = 8,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    ACTIONS(107), 1,
      sym__separator,
    ACTIONS(110), 1,
      aux_sym__whitespace_token1,
    ACTIONS(113), 1,
      sym__line_break,
    STATE(9), 1,
      sym__indentation,
    STATE(17), 2,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
    ACTIONS(105), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [669] = 8,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
    ACTIONS(120), 1,
      sym__separator,
    ACTIONS(122), 1,
      aux_sym__whitespace_token1,
    ACTIONS(124), 1,
      sym__line_break,
    STATE(9), 1,
      sym__indentation,
    STATE(17), 2,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
    ACTIONS(118), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [699] = 8,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(122), 1,
      aux_sym__whitespace_token1,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    ACTIONS(130), 1,
      sym__separator,
    ACTIONS(132), 1,
      sym__line_break,
    STATE(8), 1,
      sym__indentation,
    STATE(16), 2,
      sym__empty_line,
      aux_sym_test_case_definition_body_repeat1,
    ACTIONS(128), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [729] = 8,
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
    STATE(139), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [758] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(141), 1,
      aux_sym__whitespace_token1,
    ACTIONS(144), 1,
      sym__line_break,
    STATE(21), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(136), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [783] = 7,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(147), 1,
      ts_builtin_sym_end,
    ACTIONS(151), 1,
      sym_text_chunk,
    ACTIONS(153), 1,
      aux_sym__whitespace_token1,
    ACTIONS(155), 1,
      sym__line_break,
    STATE(28), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(149), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [810] = 8,
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
    ACTIONS(157), 1,
      ts_builtin_sym_end,
    STATE(20), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(139), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [839] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(161), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(163), 1,
      sym__line_break,
    STATE(35), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(159), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [864] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      ts_builtin_sym_end,
    ACTIONS(167), 1,
      aux_sym_settings_section_token1,
    ACTIONS(170), 1,
      aux_sym_variables_section_token1,
    ACTIONS(173), 1,
      aux_sym_keywords_section_token1,
    ACTIONS(176), 1,
      aux_sym_test_cases_section_token1,
    STATE(25), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(139), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [893] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(161), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(179), 1,
      sym__line_break,
    STATE(21), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(159), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [918] = 7,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(151), 1,
      sym_text_chunk,
    ACTIONS(153), 1,
      aux_sym__whitespace_token1,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
    ACTIONS(185), 1,
      sym__line_break,
    STATE(22), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(183), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [945] = 7,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(187), 1,
      ts_builtin_sym_end,
    ACTIONS(191), 1,
      sym_text_chunk,
    ACTIONS(194), 1,
      aux_sym__whitespace_token1,
    ACTIONS(197), 1,
      sym__line_break,
    STATE(28), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(189), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [972] = 7,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(151), 1,
      sym_text_chunk,
    ACTIONS(153), 1,
      aux_sym__whitespace_token1,
    ACTIONS(155), 1,
      sym__line_break,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
    STATE(28), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(183), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [999] = 7,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(153), 1,
      aux_sym__whitespace_token1,
    ACTIONS(200), 1,
      ts_builtin_sym_end,
    ACTIONS(204), 1,
      sym_text_chunk,
    ACTIONS(206), 1,
      sym__line_break,
    STATE(31), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(202), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1026] = 7,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(153), 1,
      aux_sym__whitespace_token1,
    ACTIONS(204), 1,
      sym_text_chunk,
    ACTIONS(208), 1,
      ts_builtin_sym_end,
    ACTIONS(212), 1,
      sym__line_break,
    STATE(37), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(210), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1053] = 7,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(153), 1,
      aux_sym__whitespace_token1,
    ACTIONS(200), 1,
      ts_builtin_sym_end,
    ACTIONS(204), 1,
      sym_text_chunk,
    ACTIONS(212), 1,
      sym__line_break,
    STATE(37), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(202), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1080] = 7,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(153), 1,
      aux_sym__whitespace_token1,
    ACTIONS(204), 1,
      sym_text_chunk,
    ACTIONS(214), 1,
      ts_builtin_sym_end,
    ACTIONS(218), 1,
      sym__line_break,
    STATE(32), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(216), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1107] = 7,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(151), 1,
      sym_text_chunk,
    ACTIONS(153), 1,
      aux_sym__whitespace_token1,
    ACTIONS(220), 1,
      ts_builtin_sym_end,
    ACTIONS(224), 1,
      sym__line_break,
    STATE(29), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(222), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1134] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(161), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(179), 1,
      sym__line_break,
    STATE(21), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(226), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1159] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym__whitespace_token1,
    ACTIONS(161), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(230), 1,
      sym__line_break,
    STATE(26), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(228), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1184] = 7,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(232), 1,
      ts_builtin_sym_end,
    ACTIONS(236), 1,
      sym_text_chunk,
    ACTIONS(239), 1,
      aux_sym__whitespace_token1,
    ACTIONS(242), 1,
      sym__line_break,
    STATE(37), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(234), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1211] = 8,
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
    ACTIONS(157), 1,
      ts_builtin_sym_end,
    STATE(25), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(139), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [1240] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      sym__separator,
    ACTIONS(247), 1,
      aux_sym__whitespace_token1,
    ACTIONS(249), 1,
      sym__line_break,
    STATE(11), 1,
      sym__indentation,
    STATE(88), 1,
      sym_block,
    STATE(168), 1,
      sym_else_statement,
    STATE(253), 1,
      sym_finally_statement,
    STATE(85), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
    STATE(87), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1273] = 8,
    ACTIONS(66), 1,
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
    STATE(272), 1,
      sym_argument,
    STATE(66), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1301] = 8,
    ACTIONS(66), 1,
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
    STATE(224), 1,
      sym_argument,
    STATE(51), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1329] = 8,
    ACTIONS(66), 1,
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
    STATE(248), 1,
      sym_argument,
    STATE(66), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1357] = 8,
    ACTIONS(66), 1,
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
    STATE(263), 1,
      sym_argument,
    STATE(66), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1385] = 8,
    ACTIONS(66), 1,
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
    STATE(232), 1,
      sym_argument,
    STATE(51), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1413] = 8,
    ACTIONS(66), 1,
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
    STATE(242), 1,
      sym_argument,
    STATE(51), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1441] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      aux_sym__whitespace_token1,
    ACTIONS(249), 1,
      sym__line_break,
    ACTIONS(271), 1,
      sym__separator,
    STATE(12), 1,
      sym__indentation,
    STATE(137), 1,
      sym_block,
    STATE(140), 1,
      aux_sym_if_statement_repeat1,
    STATE(197), 1,
      sym_else_statement,
    STATE(365), 1,
      sym_elseif_statement,
    STATE(87), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1473] = 8,
    ACTIONS(66), 1,
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
    STATE(245), 1,
      sym_argument,
    STATE(51), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1501] = 8,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(275), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(277), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(279), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(281), 1,
      sym_text_chunk,
    STATE(267), 1,
      sym_argument,
    STATE(67), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1529] = 8,
    ACTIONS(66), 1,
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
    STATE(248), 1,
      sym_argument,
    STATE(51), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1557] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(285), 1,
      anon_sym_IN,
    ACTIONS(287), 1,
      anon_sym_INRANGE,
    ACTIONS(289), 1,
      anon_sym_INENUMERATE,
    ACTIONS(291), 1,
      anon_sym_INZIP,
    STATE(270), 1,
      sym_scalar_variable,
    STATE(369), 4,
      sym__for_in,
      sym__for_in_range,
      sym__for_in_enumerate,
      sym__for_in_zip,
  [1585] = 7,
    ACTIONS(66), 1,
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
  [1610] = 7,
    ACTIONS(66), 1,
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
  [1635] = 7,
    ACTIONS(66), 1,
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
  [1660] = 3,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(46), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__separator,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1677] = 3,
    ACTIONS(66), 1,
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
      aux_sym__whitespace_token1,
      sym__line_break,
  [1694] = 3,
    ACTIONS(66), 1,
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
      aux_sym__whitespace_token1,
      sym__line_break,
  [1711] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(325), 1,
      ts_builtin_sym_end,
    ACTIONS(327), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1727] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(329), 1,
      ts_builtin_sym_end,
    ACTIONS(331), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1743] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      aux_sym__whitespace_token1,
    ACTIONS(249), 1,
      sym__line_break,
    ACTIONS(333), 1,
      sym_ellipses,
    ACTIONS(335), 1,
      sym__separator,
    STATE(14), 1,
      sym__indentation,
    STATE(336), 1,
      sym_block,
    STATE(87), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1769] = 7,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(315), 1,
      sym__line_break,
    ACTIONS(338), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(341), 1,
      anon_sym_SPACE,
    ACTIONS(344), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(347), 1,
      sym_text_chunk,
    STATE(60), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [1793] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      sym__separator,
    ACTIONS(355), 1,
      sym__line_break,
    STATE(136), 1,
      aux_sym_arguments_repeat1,
    STATE(247), 1,
      sym_arguments,
    ACTIONS(350), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
    STATE(156), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [1817] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym__separator,
    ACTIONS(362), 1,
      sym__line_break,
    STATE(113), 1,
      aux_sym_arguments_repeat1,
    STATE(247), 1,
      sym_arguments,
    ACTIONS(358), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
    STATE(177), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [1841] = 7,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(315), 1,
      sym__separator,
    ACTIONS(365), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(368), 1,
      anon_sym_SPACE,
    ACTIONS(371), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(374), 1,
      sym_text_chunk,
    STATE(63), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [1865] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      aux_sym__whitespace_token1,
    ACTIONS(377), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym__line_break,
  [1881] = 3,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(46), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      aux_sym__whitespace_token1,
      sym__line_break,
  [1897] = 7,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(257), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(297), 1,
      sym__line_break,
    ACTIONS(381), 1,
      anon_sym_SPACE,
    ACTIONS(383), 1,
      sym_text_chunk,
    STATE(71), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [1921] = 7,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(279), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(297), 1,
      sym__separator,
    ACTIONS(385), 1,
      anon_sym_SPACE,
    ACTIONS(387), 1,
      sym_text_chunk,
    STATE(70), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [1945] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      aux_sym__whitespace_token1,
    ACTIONS(389), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym__line_break,
  [1961] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym__separator,
    ACTIONS(395), 1,
      sym__line_break,
    STATE(113), 1,
      aux_sym_arguments_repeat1,
    STATE(293), 1,
      sym_arguments,
    ACTIONS(393), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
    STATE(177), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [1985] = 7,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(279), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(301), 1,
      sym__separator,
    ACTIONS(385), 1,
      anon_sym_SPACE,
    ACTIONS(397), 1,
      sym_text_chunk,
    STATE(63), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [2009] = 7,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(257), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(301), 1,
      sym__line_break,
    ACTIONS(381), 1,
      anon_sym_SPACE,
    ACTIONS(399), 1,
      sym_text_chunk,
    STATE(60), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [2033] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      sym__separator,
    ACTIONS(122), 1,
      aux_sym__whitespace_token1,
    ACTIONS(401), 1,
      sym__line_break,
    STATE(9), 1,
      sym__indentation,
    STATE(58), 1,
      sym_keyword_definition_body,
    STATE(18), 2,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
  [2056] = 6,
    ACTIONS(48), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(52), 1,
      anon_sym_RETURN,
    ACTIONS(64), 1,
      sym_text_chunk,
    ACTIONS(66), 1,
      sym_comment,
    STATE(268), 1,
      sym_inline_statement,
    STATE(195), 3,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
  [2077] = 6,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(405), 1,
      anon_sym_RETURN,
    ACTIONS(407), 1,
      sym_text_chunk,
    STATE(178), 1,
      sym_inline_statement,
    STATE(195), 3,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
  [2098] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      aux_sym__whitespace_token1,
    ACTIONS(249), 1,
      sym__line_break,
    ACTIONS(409), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(271), 1,
      sym_block,
    STATE(87), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2121] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      aux_sym__whitespace_token1,
    ACTIONS(130), 1,
      sym__separator,
    ACTIONS(411), 1,
      sym__line_break,
    STATE(8), 1,
      sym__indentation,
    STATE(57), 1,
      sym_test_case_definition_body,
    STATE(19), 2,
      sym__empty_line,
      aux_sym_test_case_definition_body_repeat1,
  [2144] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      aux_sym__whitespace_token1,
    ACTIONS(249), 1,
      sym__line_break,
    ACTIONS(413), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(325), 1,
      sym_block,
    STATE(87), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2167] = 6,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(405), 1,
      anon_sym_RETURN,
    ACTIONS(407), 1,
      sym_text_chunk,
    STATE(243), 1,
      sym_inline_statement,
    STATE(195), 3,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
  [2188] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      aux_sym__whitespace_token1,
    ACTIONS(249), 1,
      sym__line_break,
    ACTIONS(409), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(337), 1,
      sym_block,
    STATE(87), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2211] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      aux_sym__whitespace_token1,
    ACTIONS(249), 1,
      sym__line_break,
    ACTIONS(416), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(257), 1,
      sym_block,
    STATE(87), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2234] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      aux_sym__whitespace_token1,
    ACTIONS(249), 1,
      sym__line_break,
    ACTIONS(419), 1,
      sym__separator,
    STATE(13), 1,
      sym__indentation,
    STATE(236), 1,
      sym_block,
    STATE(87), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2257] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      aux_sym__whitespace_token1,
    ACTIONS(249), 1,
      sym__line_break,
    ACTIONS(409), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(225), 1,
      sym_block,
    STATE(87), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2280] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(423), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(421), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2294] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(425), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(315), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2308] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      sym__separator,
    STATE(158), 1,
      sym__indentation,
    STATE(162), 1,
      sym_else_statement,
    STATE(246), 1,
      sym_finally_statement,
    STATE(157), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [2328] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym__separator,
    ACTIONS(395), 1,
      sym__line_break,
    STATE(113), 1,
      aux_sym_arguments_repeat1,
    STATE(310), 1,
      sym_arguments,
    STATE(177), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2348] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      aux_sym__whitespace_token1,
    ACTIONS(429), 1,
      sym__separator,
    ACTIONS(432), 1,
      sym__line_break,
    STATE(15), 1,
      sym__indentation,
    STATE(109), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2368] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      sym__separator,
    STATE(158), 1,
      sym__indentation,
    STATE(162), 1,
      sym_else_statement,
    STATE(246), 1,
      sym_finally_statement,
    STATE(103), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [2388] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(436), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(434), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2402] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym__separator,
    ACTIONS(395), 1,
      sym__line_break,
    STATE(113), 1,
      aux_sym_arguments_repeat1,
    STATE(279), 1,
      sym_arguments,
    STATE(177), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2422] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      sym__separator,
    ACTIONS(441), 1,
      sym__line_break,
    STATE(136), 1,
      aux_sym_arguments_repeat1,
    STATE(194), 1,
      sym_arguments,
    STATE(156), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2442] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym__separator,
    ACTIONS(395), 1,
      sym__line_break,
    STATE(113), 1,
      aux_sym_arguments_repeat1,
    STATE(277), 1,
      sym_arguments,
    STATE(177), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2462] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(446), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(444), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2476] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(450), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(448), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2490] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym__separator,
    ACTIONS(452), 1,
      sym__line_break,
    STATE(113), 1,
      aux_sym_arguments_repeat1,
    STATE(194), 1,
      sym_arguments,
    STATE(177), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2510] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym__separator,
    ACTIONS(395), 1,
      sym__line_break,
    STATE(113), 1,
      aux_sym_arguments_repeat1,
    STATE(344), 1,
      sym_arguments,
    STATE(177), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2530] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym__separator,
    ACTIONS(455), 1,
      sym__line_break,
    STATE(113), 1,
      aux_sym_arguments_repeat1,
    STATE(250), 1,
      sym_arguments,
    STATE(177), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2550] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(460), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(458), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2564] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(464), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(462), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2578] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym__separator,
    ACTIONS(395), 1,
      sym__line_break,
    STATE(113), 1,
      aux_sym_arguments_repeat1,
    STATE(275), 1,
      sym_arguments,
    STATE(177), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2598] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(468), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(466), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2612] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym__separator,
    ACTIONS(395), 1,
      sym__line_break,
    STATE(113), 1,
      aux_sym_arguments_repeat1,
    STATE(346), 1,
      sym_arguments,
    STATE(177), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2632] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      sym__separator,
    STATE(147), 1,
      sym__indentation,
    STATE(188), 1,
      sym_else_statement,
    STATE(200), 1,
      sym_finally_statement,
    STATE(157), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [2652] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(474), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(472), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2666] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym__separator,
    ACTIONS(476), 1,
      sym__line_break,
    STATE(113), 1,
      aux_sym_arguments_repeat1,
    STATE(358), 1,
      sym_arguments,
    STATE(177), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2686] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(480), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(478), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2700] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      sym__separator,
    ACTIONS(485), 1,
      sym__line_break,
    STATE(136), 1,
      aux_sym_arguments_repeat1,
    STATE(250), 1,
      sym_arguments,
    STATE(156), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2720] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(490), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(488), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2734] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      sym__separator,
    ACTIONS(495), 1,
      aux_sym__whitespace_token1,
    ACTIONS(498), 1,
      sym__line_break,
    STATE(15), 1,
      sym__indentation,
    STATE(109), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2754] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(503), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(501), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2768] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym__separator,
    ACTIONS(395), 1,
      sym__line_break,
    STATE(113), 1,
      aux_sym_arguments_repeat1,
    STATE(352), 1,
      sym_arguments,
    STATE(177), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2788] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(450), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(448), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [2801] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym__separator,
    ACTIONS(505), 1,
      sym__line_break,
    STATE(182), 1,
      aux_sym_arguments_repeat1,
    STATE(174), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2818] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(490), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(488), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [2831] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      sym__separator,
    STATE(151), 1,
      aux_sym_if_statement_repeat1,
    STATE(164), 1,
      sym__indentation,
    STATE(235), 1,
      sym_else_statement,
    STATE(365), 1,
      sym_elseif_statement,
  [2850] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(480), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(478), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [2863] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(474), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(472), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [2876] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(423), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(421), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [2889] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(480), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(478), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [2902] = 5,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(257), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(510), 1,
      sym_text_chunk,
    STATE(122), 2,
      sym_scalar_variable,
      sym_inline_python_expression,
  [2919] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(503), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(501), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [2932] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(425), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(315), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [2945] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(460), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(458), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [2958] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(490), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(488), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [2971] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(503), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(501), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [2984] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(423), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(421), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [2997] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(474), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(472), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3010] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(468), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(466), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3023] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(468), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(466), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3036] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(464), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(462), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3049] = 5,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(279), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(512), 1,
      sym_text_chunk,
    STATE(134), 2,
      sym_scalar_variable,
      sym_inline_python_expression,
  [3066] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(460), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(458), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3079] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(436), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(434), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3092] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(425), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(315), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3105] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(446), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(444), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3118] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      sym__separator,
    ACTIONS(517), 1,
      sym__line_break,
    STATE(182), 1,
      aux_sym_arguments_repeat1,
    STATE(153), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3135] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      sym__separator,
    STATE(115), 1,
      aux_sym_if_statement_repeat1,
    STATE(186), 1,
      sym__indentation,
    STATE(210), 1,
      sym_else_statement,
    STATE(365), 1,
      sym_elseif_statement,
  [3154] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(464), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(462), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [3178] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      sym__separator,
    STATE(151), 1,
      aux_sym_if_statement_repeat1,
    STATE(184), 1,
      sym__indentation,
    STATE(213), 1,
      sym_else_statement,
    STATE(365), 1,
      sym_elseif_statement,
  [3197] = 5,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(267), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(526), 1,
      sym_text_chunk,
    STATE(84), 2,
      sym_scalar_variable,
      sym_inline_python_expression,
  [3214] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(450), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(448), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3227] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(436), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(434), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3240] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(446), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(444), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3253] = 4,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(148), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(528), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3267] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_ELSEIF,
    ACTIONS(534), 1,
      anon_sym_ELSE,
    STATE(228), 1,
      sym_inline_elseif_statement,
    STATE(259), 1,
      sym_inline_else_statement,
  [3283] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_END,
    ACTIONS(538), 1,
      anon_sym_ELSE,
    ACTIONS(540), 1,
      anon_sym_EXCEPT,
    ACTIONS(542), 1,
      anon_sym_FINALLY,
  [3299] = 4,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(154), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(528), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3313] = 4,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(161), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(528), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3327] = 4,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(154), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(528), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3341] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      sym__separator,
    STATE(151), 1,
      aux_sym_if_statement_repeat1,
    STATE(285), 1,
      sym__indentation,
    STATE(365), 1,
      sym_elseif_statement,
  [3357] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_ELSEIF,
    ACTIONS(534), 1,
      anon_sym_ELSE,
    STATE(228), 1,
      sym_inline_elseif_statement,
    STATE(319), 1,
      sym_inline_else_statement,
  [3373] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      sym__separator,
    ACTIONS(555), 1,
      sym__line_break,
    STATE(159), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3387] = 4,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(154), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(558), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3401] = 4,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(150), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(528), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3415] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      sym__line_break,
    ACTIONS(565), 1,
      sym__separator,
    STATE(159), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3429] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      sym__separator,
    STATE(357), 1,
      sym__indentation,
    STATE(157), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [3443] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      anon_sym_ELSE,
    ACTIONS(540), 1,
      anon_sym_EXCEPT,
    ACTIONS(542), 1,
      anon_sym_FINALLY,
    ACTIONS(570), 1,
      anon_sym_END,
  [3459] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      sym__separator,
    ACTIONS(574), 1,
      sym__line_break,
    STATE(159), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3473] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym__separator,
    ACTIONS(577), 1,
      sym__line_break,
    STATE(169), 1,
      aux_sym_arguments_repeat1,
    STATE(308), 1,
      sym_arguments_without_continuation,
  [3489] = 4,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(154), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(528), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3503] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      sym__separator,
    STATE(200), 1,
      sym_finally_statement,
    STATE(201), 1,
      sym__indentation,
  [3516] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      sym_ellipses,
    ACTIONS(585), 1,
      sym__separator,
    STATE(316), 1,
      sym__indentation,
  [3529] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_ELSE,
    ACTIONS(587), 1,
      anon_sym_END,
    ACTIONS(589), 1,
      anon_sym_ELSEIF,
  [3542] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      sym__separator,
    ACTIONS(594), 1,
      sym__line_break,
    STATE(165), 1,
      aux_sym_inline_if_statement_repeat1,
  [3555] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 1,
      sym__separator,
    ACTIONS(599), 1,
      sym__line_break,
    STATE(182), 1,
      aux_sym_arguments_repeat1,
  [3568] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 1,
      sym__separator,
    ACTIONS(599), 1,
      sym__line_break,
    STATE(173), 1,
      aux_sym_arguments_repeat1,
  [3581] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      sym__separator,
    STATE(244), 1,
      sym__indentation,
    STATE(246), 1,
      sym_finally_statement,
  [3594] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym__separator,
    ACTIONS(603), 1,
      sym__line_break,
    STATE(182), 1,
      aux_sym_arguments_repeat1,
  [3607] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      sym_ellipses,
    ACTIONS(605), 1,
      sym__separator,
    STATE(301), 1,
      sym__indentation,
  [3620] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym__separator,
    ACTIONS(607), 1,
      sym__line_break,
    STATE(182), 1,
      aux_sym_arguments_repeat1,
  [3633] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      sym__separator,
    ACTIONS(612), 1,
      sym__line_break,
    STATE(166), 1,
      aux_sym_arguments_repeat1,
  [3646] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      sym__line_break,
    ACTIONS(614), 1,
      sym__separator,
    STATE(182), 1,
      aux_sym_arguments_repeat1,
  [3659] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      sym__line_break,
    STATE(175), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3670] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      sym__line_break,
    STATE(175), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3681] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      sym__line_break,
    ACTIONS(623), 2,
      sym__separator,
      aux_sym__whitespace_token1,
  [3692] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      sym__line_break,
    STATE(175), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3703] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      sym__separator,
    ACTIONS(629), 1,
      sym__line_break,
    STATE(179), 1,
      aux_sym_inline_if_statement_repeat1,
  [3716] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      sym__separator,
    ACTIONS(633), 1,
      sym__line_break,
    STATE(165), 1,
      aux_sym_inline_if_statement_repeat1,
  [3729] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      sym__line_break,
    ACTIONS(46), 2,
      sym__separator,
      aux_sym__whitespace_token1,
  [3740] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym__separator,
    STATE(169), 1,
      aux_sym_arguments_repeat1,
    STATE(276), 1,
      sym_arguments_without_continuation,
  [3753] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      sym__separator,
    ACTIONS(638), 1,
      sym__line_break,
    STATE(182), 1,
      aux_sym_arguments_repeat1,
  [3766] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym__separator,
    ACTIONS(599), 1,
      sym__line_break,
    STATE(171), 1,
      aux_sym_arguments_repeat1,
  [3779] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_ELSE,
    ACTIONS(589), 1,
      anon_sym_ELSEIF,
    ACTIONS(640), 1,
      anon_sym_END,
  [3792] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym__separator,
    ACTIONS(599), 1,
      sym__line_break,
    STATE(182), 1,
      aux_sym_arguments_repeat1,
  [3805] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_ELSE,
    ACTIONS(589), 1,
      anon_sym_ELSEIF,
    ACTIONS(642), 1,
      anon_sym_END,
  [3818] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym__separator,
    ACTIONS(612), 1,
      sym__line_break,
    STATE(185), 1,
      aux_sym_arguments_repeat1,
  [3831] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 1,
      sym__separator,
    STATE(216), 1,
      sym_finally_statement,
    STATE(217), 1,
      sym__indentation,
  [3844] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(648), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(646), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3855] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 1,
      sym__separator,
    STATE(254), 1,
      aux_sym_for_statement_repeat1,
  [3865] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(270), 1,
      sym_scalar_variable,
  [3875] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(652), 1,
      anon_sym_SPACE,
    ACTIONS(654), 1,
      sym_variable_name,
  [3885] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(656), 1,
      anon_sym_SPACE,
    ACTIONS(658), 1,
      sym_variable_name,
  [3895] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      sym__separator,
    ACTIONS(662), 1,
      sym__line_break,
  [3905] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      sym__separator,
    ACTIONS(666), 1,
      sym__line_break,
  [3915] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(668), 1,
      anon_sym_SPACE,
    ACTIONS(670), 1,
      sym_variable_name,
  [3925] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 1,
      sym__separator,
    STATE(342), 1,
      sym__indentation,
  [3935] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(674), 1,
      anon_sym_SPACE,
    ACTIONS(676), 1,
      sym_variable_name,
  [3945] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(678), 1,
      anon_sym_SPACE,
    ACTIONS(680), 1,
      sym_variable_name,
  [3955] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      sym__separator,
    STATE(338), 1,
      sym__indentation,
  [3965] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_END,
    ACTIONS(542), 1,
      anon_sym_FINALLY,
  [3975] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_SPACE,
    ACTIONS(686), 1,
      sym_variable_name,
  [3985] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(688), 1,
      anon_sym_SPACE,
    ACTIONS(690), 1,
      sym_variable_name,
  [3995] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      anon_sym_RBRACE,
    ACTIONS(694), 1,
      anon_sym_SPACE,
  [4005] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 1,
      anon_sym_RBRACE,
    ACTIONS(698), 1,
      anon_sym_SPACE,
  [4015] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 1,
      anon_sym_RBRACE,
    ACTIONS(702), 1,
      anon_sym_SPACE,
  [4025] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      anon_sym_RBRACE,
    ACTIONS(706), 1,
      anon_sym_SPACE,
  [4035] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      anon_sym_RBRACE,
    ACTIONS(710), 1,
      anon_sym_SPACE,
  [4045] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(712), 1,
      aux_sym_settings_section_token2,
    ACTIONS(714), 1,
      sym__line_break,
  [4055] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 1,
      sym__separator,
    STATE(303), 1,
      sym__indentation,
  [4065] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(718), 1,
      aux_sym_settings_section_token2,
    ACTIONS(720), 1,
      sym__line_break,
  [4075] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      anon_sym_RBRACE,
    ACTIONS(724), 1,
      anon_sym_SPACE,
  [4085] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      sym__separator,
    STATE(294), 1,
      sym__indentation,
  [4095] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_RBRACE,
    ACTIONS(730), 1,
      anon_sym_SPACE,
  [4105] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_RBRACE,
    ACTIONS(734), 1,
      anon_sym_SPACE,
  [4115] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      sym__separator,
    STATE(312), 1,
      sym__indentation,
  [4125] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      anon_sym_FINALLY,
    ACTIONS(738), 1,
      anon_sym_END,
  [4135] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(740), 1,
      aux_sym_settings_section_token2,
    ACTIONS(742), 1,
      sym__line_break,
  [4145] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(744), 1,
      anon_sym_RBRACE,
    ACTIONS(746), 1,
      anon_sym_SPACE,
  [4155] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 1,
      anon_sym_RBRACE,
    ACTIONS(750), 1,
      anon_sym_SPACE,
  [4165] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      anon_sym_RBRACE,
    ACTIONS(754), 1,
      anon_sym_SPACE,
  [4175] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(756), 1,
      sym__separator,
    ACTIONS(758), 1,
      sym__line_break,
  [4185] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      anon_sym_RBRACE,
    ACTIONS(762), 1,
      anon_sym_SPACE,
  [4195] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      sym__separator,
    ACTIONS(766), 1,
      sym__line_break,
  [4205] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      sym__separator,
    STATE(258), 1,
      sym__indentation,
  [4215] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_RBRACE,
    ACTIONS(772), 1,
      anon_sym_SPACE,
  [4225] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_RBRACE,
    ACTIONS(776), 1,
      anon_sym_SPACE,
  [4235] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      sym__line_break,
    ACTIONS(778), 1,
      sym__separator,
  [4245] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(780), 1,
      anon_sym_SPACE,
    ACTIONS(782), 1,
      sym_variable_name,
  [4255] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(784), 1,
      anon_sym_SPACE,
    ACTIONS(786), 1,
      sym_variable_name,
  [4265] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(788), 1,
      anon_sym_SPACE,
    ACTIONS(790), 1,
      sym_variable_name,
  [4275] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(638), 1,
      sym__line_break,
    ACTIONS(792), 1,
      sym__separator,
  [4285] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 1,
      anon_sym_RBRACE,
    ACTIONS(796), 1,
      anon_sym_SPACE,
  [4295] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 1,
      anon_sym_RBRACE,
    ACTIONS(800), 1,
      anon_sym_SPACE,
  [4305] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 1,
      sym__separator,
    STATE(261), 1,
      sym__indentation,
  [4315] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      sym__separator,
    STATE(356), 1,
      sym__indentation,
  [4325] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 1,
      anon_sym_RBRACE,
    ACTIONS(808), 1,
      anon_sym_SPACE,
  [4335] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      sym__line_break,
    ACTIONS(810), 1,
      sym__separator,
  [4345] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 1,
      anon_sym_RBRACE,
    ACTIONS(814), 1,
      anon_sym_SPACE,
  [4355] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 1,
      anon_sym_RBRACE,
    ACTIONS(818), 1,
      anon_sym_SPACE,
  [4365] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 1,
      anon_sym_RBRACE,
    ACTIONS(822), 1,
      anon_sym_SPACE,
  [4375] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      sym__separator,
    ACTIONS(826), 1,
      sym__line_break,
  [4385] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(828), 1,
      sym__separator,
    ACTIONS(830), 1,
      sym__line_break,
  [4395] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      anon_sym_FINALLY,
    ACTIONS(570), 1,
      anon_sym_END,
  [4405] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(832), 1,
      sym__separator,
    ACTIONS(834), 1,
      sym__line_break,
  [4415] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      sym__separator,
    STATE(364), 1,
      sym__indentation,
  [4425] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(838), 1,
      sym__separator,
    ACTIONS(840), 1,
      sym__line_break,
  [4435] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      sym__separator,
    ACTIONS(844), 1,
      sym__line_break,
  [4445] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_ELSEIF,
    STATE(228), 1,
      sym_inline_elseif_statement,
  [4455] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(846), 1,
      sym__separator,
    ACTIONS(848), 1,
      sym__line_break,
  [4465] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(850), 1,
      sym__separator,
    STATE(251), 1,
      aux_sym_for_statement_repeat1,
  [4475] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(853), 1,
      aux_sym_settings_section_token2,
    ACTIONS(855), 1,
      sym__line_break,
  [4485] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(857), 1,
      sym__separator,
    STATE(297), 1,
      sym__indentation,
  [4495] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      sym__separator,
    STATE(251), 1,
      aux_sym_for_statement_repeat1,
  [4505] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(861), 1,
      sym__line_break,
  [4512] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(863), 1,
      sym__line_break,
  [4519] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      sym__separator,
  [4526] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(867), 1,
      anon_sym_END,
  [4533] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 1,
      sym__line_break,
  [4540] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(871), 1,
      sym__line_break,
  [4547] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      anon_sym_END,
  [4554] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(875), 1,
      sym__line_break,
  [4561] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 1,
      sym__line_break,
  [4568] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 1,
      sym__line_break,
  [4575] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 1,
      sym__line_break,
  [4582] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 1,
      sym__line_break,
  [4589] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(885), 1,
      sym__separator,
  [4596] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(887), 1,
      sym__line_break,
  [4603] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(889), 1,
      sym__line_break,
  [4610] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(891), 1,
      sym__separator,
  [4617] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(893), 1,
      sym__separator,
  [4624] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(895), 1,
      sym__line_break,
  [4631] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(897), 1,
      anon_sym_RBRACE,
  [4638] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(899), 1,
      anon_sym_RBRACE,
  [4645] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(901), 1,
      sym__line_break,
  [4652] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(903), 1,
      sym__line_break,
  [4659] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(905), 1,
      sym__line_break,
  [4666] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(907), 1,
      anon_sym_RBRACE,
  [4673] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(909), 1,
      sym__line_break,
  [4680] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 1,
      anon_sym_RBRACE,
  [4687] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(911), 1,
      sym__separator,
  [4694] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 1,
      anon_sym_RBRACE,
  [4701] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(913), 1,
      sym__line_break,
  [4708] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 1,
      anon_sym_RBRACE,
  [4715] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_ELSEIF,
  [4722] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(915), 1,
      sym__line_break,
  [4729] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(917), 1,
      sym__line_break,
  [4736] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(919), 1,
      sym__line_break,
  [4743] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(921), 1,
      sym__line_break,
  [4750] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(923), 1,
      sym__separator,
  [4757] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(925), 1,
      sym__line_break,
  [4764] = 2,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(927), 1,
      sym_variable_name,
  [4771] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(929), 1,
      sym__line_break,
  [4778] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(931), 1,
      anon_sym_END,
  [4785] = 2,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(933), 1,
      sym_variable_name,
  [4792] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      sym__separator,
  [4799] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      anon_sym_END,
  [4806] = 2,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(935), 1,
      sym_variable_name,
  [4813] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(937), 1,
      sym__line_break,
  [4820] = 2,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(939), 1,
      sym_variable_name,
  [4827] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(941), 1,
      sym_ellipses,
  [4834] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      sym__separator,
  [4841] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(943), 1,
      anon_sym_END,
  [4848] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(945), 1,
      sym__line_break,
  [4855] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      sym__separator,
  [4862] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(947), 1,
      sym__line_break,
  [4869] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(949), 1,
      sym__line_break,
  [4876] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(951), 1,
      sym__line_break,
  [4883] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(953), 1,
      anon_sym_RBRACE,
  [4890] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(955), 1,
      sym__line_break,
  [4897] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(957), 1,
      sym__line_break,
  [4904] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(959), 1,
      anon_sym_END,
  [4911] = 2,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(961), 1,
      sym_variable_name,
  [4918] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(963), 1,
      sym__line_break,
  [4925] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(965), 1,
      sym__line_break,
  [4932] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(967), 1,
      sym_ellipses,
  [4939] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(969), 1,
      sym__line_break,
  [4946] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(971), 1,
      sym__line_break,
  [4953] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(973), 1,
      sym__line_break,
  [4960] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(975), 1,
      sym__separator,
  [4967] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(977), 1,
      sym__separator,
  [4974] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(979), 1,
      sym__line_break,
  [4981] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(981), 1,
      ts_builtin_sym_end,
  [4988] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(983), 1,
      sym__line_break,
  [4995] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(985), 1,
      sym__separator,
  [5002] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      anon_sym_RBRACE,
  [5009] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(987), 1,
      sym__line_break,
  [5016] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 1,
      anon_sym_RBRACE,
  [5023] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(989), 1,
      anon_sym_RBRACE,
  [5030] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(744), 1,
      anon_sym_RBRACE,
  [5037] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(991), 1,
      anon_sym_RBRACE,
  [5044] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(993), 1,
      anon_sym_RBRACE,
  [5051] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(995), 1,
      anon_sym_RBRACE,
  [5058] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(997), 1,
      anon_sym_RBRACE,
  [5065] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(999), 1,
      sym__line_break,
  [5072] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1001), 1,
      sym__separator,
  [5079] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1003), 1,
      sym__separator,
  [5086] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      anon_sym_END,
  [5093] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1005), 1,
      sym__line_break,
  [5100] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1007), 1,
      sym__separator,
  [5107] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1009), 1,
      sym__line_break,
  [5114] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1011), 1,
      anon_sym_END,
  [5121] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      anon_sym_RBRACE,
  [5128] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1013), 1,
      sym__line_break,
  [5135] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      anon_sym_RBRACE,
  [5142] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1015), 1,
      sym__line_break,
  [5149] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 1,
      anon_sym_RBRACE,
  [5156] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1017), 1,
      anon_sym_RBRACE,
  [5163] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1019), 1,
      anon_sym_RBRACE,
  [5170] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1021), 1,
      anon_sym_RBRACE,
  [5177] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1023), 1,
      sym__line_break,
  [5184] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1025), 1,
      sym__line_break,
  [5191] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1027), 1,
      sym__line_break,
  [5198] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      anon_sym_RBRACE,
  [5205] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1029), 1,
      anon_sym_RBRACE,
  [5212] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1031), 1,
      anon_sym_END,
  [5219] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      anon_sym_EXCEPT,
  [5226] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1033), 1,
      sym__line_break,
  [5233] = 2,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(1035), 1,
      sym_variable_name,
  [5240] = 2,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(1037), 1,
      sym_variable_name,
  [5247] = 2,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(1039), 1,
      sym_variable_name,
  [5254] = 2,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(1041), 1,
      sym_variable_name,
  [5261] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1043), 1,
      sym__line_break,
  [5268] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_END,
  [5275] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1045), 1,
      sym__separator,
  [5282] = 2,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(1047), 1,
      sym_variable_name,
  [5289] = 2,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(1049), 1,
      sym_variable_name,
  [5296] = 2,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(1051), 1,
      sym_variable_name,
  [5303] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1053), 1,
      sym__line_break,
  [5310] = 2,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(1055), 1,
      sym_variable_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 41,
  [SMALL_STATE(4)] = 82,
  [SMALL_STATE(5)] = 123,
  [SMALL_STATE(6)] = 164,
  [SMALL_STATE(7)] = 205,
  [SMALL_STATE(8)] = 238,
  [SMALL_STATE(9)] = 289,
  [SMALL_STATE(10)] = 340,
  [SMALL_STATE(11)] = 372,
  [SMALL_STATE(12)] = 426,
  [SMALL_STATE(13)] = 477,
  [SMALL_STATE(14)] = 522,
  [SMALL_STATE(15)] = 567,
  [SMALL_STATE(16)] = 609,
  [SMALL_STATE(17)] = 639,
  [SMALL_STATE(18)] = 669,
  [SMALL_STATE(19)] = 699,
  [SMALL_STATE(20)] = 729,
  [SMALL_STATE(21)] = 758,
  [SMALL_STATE(22)] = 783,
  [SMALL_STATE(23)] = 810,
  [SMALL_STATE(24)] = 839,
  [SMALL_STATE(25)] = 864,
  [SMALL_STATE(26)] = 893,
  [SMALL_STATE(27)] = 918,
  [SMALL_STATE(28)] = 945,
  [SMALL_STATE(29)] = 972,
  [SMALL_STATE(30)] = 999,
  [SMALL_STATE(31)] = 1026,
  [SMALL_STATE(32)] = 1053,
  [SMALL_STATE(33)] = 1080,
  [SMALL_STATE(34)] = 1107,
  [SMALL_STATE(35)] = 1134,
  [SMALL_STATE(36)] = 1159,
  [SMALL_STATE(37)] = 1184,
  [SMALL_STATE(38)] = 1211,
  [SMALL_STATE(39)] = 1240,
  [SMALL_STATE(40)] = 1273,
  [SMALL_STATE(41)] = 1301,
  [SMALL_STATE(42)] = 1329,
  [SMALL_STATE(43)] = 1357,
  [SMALL_STATE(44)] = 1385,
  [SMALL_STATE(45)] = 1413,
  [SMALL_STATE(46)] = 1441,
  [SMALL_STATE(47)] = 1473,
  [SMALL_STATE(48)] = 1501,
  [SMALL_STATE(49)] = 1529,
  [SMALL_STATE(50)] = 1557,
  [SMALL_STATE(51)] = 1585,
  [SMALL_STATE(52)] = 1610,
  [SMALL_STATE(53)] = 1635,
  [SMALL_STATE(54)] = 1660,
  [SMALL_STATE(55)] = 1677,
  [SMALL_STATE(56)] = 1694,
  [SMALL_STATE(57)] = 1711,
  [SMALL_STATE(58)] = 1727,
  [SMALL_STATE(59)] = 1743,
  [SMALL_STATE(60)] = 1769,
  [SMALL_STATE(61)] = 1793,
  [SMALL_STATE(62)] = 1817,
  [SMALL_STATE(63)] = 1841,
  [SMALL_STATE(64)] = 1865,
  [SMALL_STATE(65)] = 1881,
  [SMALL_STATE(66)] = 1897,
  [SMALL_STATE(67)] = 1921,
  [SMALL_STATE(68)] = 1945,
  [SMALL_STATE(69)] = 1961,
  [SMALL_STATE(70)] = 1985,
  [SMALL_STATE(71)] = 2009,
  [SMALL_STATE(72)] = 2033,
  [SMALL_STATE(73)] = 2056,
  [SMALL_STATE(74)] = 2077,
  [SMALL_STATE(75)] = 2098,
  [SMALL_STATE(76)] = 2121,
  [SMALL_STATE(77)] = 2144,
  [SMALL_STATE(78)] = 2167,
  [SMALL_STATE(79)] = 2188,
  [SMALL_STATE(80)] = 2211,
  [SMALL_STATE(81)] = 2234,
  [SMALL_STATE(82)] = 2257,
  [SMALL_STATE(83)] = 2280,
  [SMALL_STATE(84)] = 2294,
  [SMALL_STATE(85)] = 2308,
  [SMALL_STATE(86)] = 2328,
  [SMALL_STATE(87)] = 2348,
  [SMALL_STATE(88)] = 2368,
  [SMALL_STATE(89)] = 2388,
  [SMALL_STATE(90)] = 2402,
  [SMALL_STATE(91)] = 2422,
  [SMALL_STATE(92)] = 2442,
  [SMALL_STATE(93)] = 2462,
  [SMALL_STATE(94)] = 2476,
  [SMALL_STATE(95)] = 2490,
  [SMALL_STATE(96)] = 2510,
  [SMALL_STATE(97)] = 2530,
  [SMALL_STATE(98)] = 2550,
  [SMALL_STATE(99)] = 2564,
  [SMALL_STATE(100)] = 2578,
  [SMALL_STATE(101)] = 2598,
  [SMALL_STATE(102)] = 2612,
  [SMALL_STATE(103)] = 2632,
  [SMALL_STATE(104)] = 2652,
  [SMALL_STATE(105)] = 2666,
  [SMALL_STATE(106)] = 2686,
  [SMALL_STATE(107)] = 2700,
  [SMALL_STATE(108)] = 2720,
  [SMALL_STATE(109)] = 2734,
  [SMALL_STATE(110)] = 2754,
  [SMALL_STATE(111)] = 2768,
  [SMALL_STATE(112)] = 2788,
  [SMALL_STATE(113)] = 2801,
  [SMALL_STATE(114)] = 2818,
  [SMALL_STATE(115)] = 2831,
  [SMALL_STATE(116)] = 2850,
  [SMALL_STATE(117)] = 2863,
  [SMALL_STATE(118)] = 2876,
  [SMALL_STATE(119)] = 2889,
  [SMALL_STATE(120)] = 2902,
  [SMALL_STATE(121)] = 2919,
  [SMALL_STATE(122)] = 2932,
  [SMALL_STATE(123)] = 2945,
  [SMALL_STATE(124)] = 2958,
  [SMALL_STATE(125)] = 2971,
  [SMALL_STATE(126)] = 2984,
  [SMALL_STATE(127)] = 2997,
  [SMALL_STATE(128)] = 3010,
  [SMALL_STATE(129)] = 3023,
  [SMALL_STATE(130)] = 3036,
  [SMALL_STATE(131)] = 3049,
  [SMALL_STATE(132)] = 3066,
  [SMALL_STATE(133)] = 3079,
  [SMALL_STATE(134)] = 3092,
  [SMALL_STATE(135)] = 3105,
  [SMALL_STATE(136)] = 3118,
  [SMALL_STATE(137)] = 3135,
  [SMALL_STATE(138)] = 3154,
  [SMALL_STATE(139)] = 3167,
  [SMALL_STATE(140)] = 3178,
  [SMALL_STATE(141)] = 3197,
  [SMALL_STATE(142)] = 3214,
  [SMALL_STATE(143)] = 3227,
  [SMALL_STATE(144)] = 3240,
  [SMALL_STATE(145)] = 3253,
  [SMALL_STATE(146)] = 3267,
  [SMALL_STATE(147)] = 3283,
  [SMALL_STATE(148)] = 3299,
  [SMALL_STATE(149)] = 3313,
  [SMALL_STATE(150)] = 3327,
  [SMALL_STATE(151)] = 3341,
  [SMALL_STATE(152)] = 3357,
  [SMALL_STATE(153)] = 3373,
  [SMALL_STATE(154)] = 3387,
  [SMALL_STATE(155)] = 3401,
  [SMALL_STATE(156)] = 3415,
  [SMALL_STATE(157)] = 3429,
  [SMALL_STATE(158)] = 3443,
  [SMALL_STATE(159)] = 3459,
  [SMALL_STATE(160)] = 3473,
  [SMALL_STATE(161)] = 3489,
  [SMALL_STATE(162)] = 3503,
  [SMALL_STATE(163)] = 3516,
  [SMALL_STATE(164)] = 3529,
  [SMALL_STATE(165)] = 3542,
  [SMALL_STATE(166)] = 3555,
  [SMALL_STATE(167)] = 3568,
  [SMALL_STATE(168)] = 3581,
  [SMALL_STATE(169)] = 3594,
  [SMALL_STATE(170)] = 3607,
  [SMALL_STATE(171)] = 3620,
  [SMALL_STATE(172)] = 3633,
  [SMALL_STATE(173)] = 3646,
  [SMALL_STATE(174)] = 3659,
  [SMALL_STATE(175)] = 3670,
  [SMALL_STATE(176)] = 3681,
  [SMALL_STATE(177)] = 3692,
  [SMALL_STATE(178)] = 3703,
  [SMALL_STATE(179)] = 3716,
  [SMALL_STATE(180)] = 3729,
  [SMALL_STATE(181)] = 3740,
  [SMALL_STATE(182)] = 3753,
  [SMALL_STATE(183)] = 3766,
  [SMALL_STATE(184)] = 3779,
  [SMALL_STATE(185)] = 3792,
  [SMALL_STATE(186)] = 3805,
  [SMALL_STATE(187)] = 3818,
  [SMALL_STATE(188)] = 3831,
  [SMALL_STATE(189)] = 3844,
  [SMALL_STATE(190)] = 3855,
  [SMALL_STATE(191)] = 3865,
  [SMALL_STATE(192)] = 3875,
  [SMALL_STATE(193)] = 3885,
  [SMALL_STATE(194)] = 3895,
  [SMALL_STATE(195)] = 3905,
  [SMALL_STATE(196)] = 3915,
  [SMALL_STATE(197)] = 3925,
  [SMALL_STATE(198)] = 3935,
  [SMALL_STATE(199)] = 3945,
  [SMALL_STATE(200)] = 3955,
  [SMALL_STATE(201)] = 3965,
  [SMALL_STATE(202)] = 3975,
  [SMALL_STATE(203)] = 3985,
  [SMALL_STATE(204)] = 3995,
  [SMALL_STATE(205)] = 4005,
  [SMALL_STATE(206)] = 4015,
  [SMALL_STATE(207)] = 4025,
  [SMALL_STATE(208)] = 4035,
  [SMALL_STATE(209)] = 4045,
  [SMALL_STATE(210)] = 4055,
  [SMALL_STATE(211)] = 4065,
  [SMALL_STATE(212)] = 4075,
  [SMALL_STATE(213)] = 4085,
  [SMALL_STATE(214)] = 4095,
  [SMALL_STATE(215)] = 4105,
  [SMALL_STATE(216)] = 4115,
  [SMALL_STATE(217)] = 4125,
  [SMALL_STATE(218)] = 4135,
  [SMALL_STATE(219)] = 4145,
  [SMALL_STATE(220)] = 4155,
  [SMALL_STATE(221)] = 4165,
  [SMALL_STATE(222)] = 4175,
  [SMALL_STATE(223)] = 4185,
  [SMALL_STATE(224)] = 4195,
  [SMALL_STATE(225)] = 4205,
  [SMALL_STATE(226)] = 4215,
  [SMALL_STATE(227)] = 4225,
  [SMALL_STATE(228)] = 4235,
  [SMALL_STATE(229)] = 4245,
  [SMALL_STATE(230)] = 4255,
  [SMALL_STATE(231)] = 4265,
  [SMALL_STATE(232)] = 4275,
  [SMALL_STATE(233)] = 4285,
  [SMALL_STATE(234)] = 4295,
  [SMALL_STATE(235)] = 4305,
  [SMALL_STATE(236)] = 4315,
  [SMALL_STATE(237)] = 4325,
  [SMALL_STATE(238)] = 4335,
  [SMALL_STATE(239)] = 4345,
  [SMALL_STATE(240)] = 4355,
  [SMALL_STATE(241)] = 4365,
  [SMALL_STATE(242)] = 4375,
  [SMALL_STATE(243)] = 4385,
  [SMALL_STATE(244)] = 4395,
  [SMALL_STATE(245)] = 4405,
  [SMALL_STATE(246)] = 4415,
  [SMALL_STATE(247)] = 4425,
  [SMALL_STATE(248)] = 4435,
  [SMALL_STATE(249)] = 4445,
  [SMALL_STATE(250)] = 4455,
  [SMALL_STATE(251)] = 4465,
  [SMALL_STATE(252)] = 4475,
  [SMALL_STATE(253)] = 4485,
  [SMALL_STATE(254)] = 4495,
  [SMALL_STATE(255)] = 4505,
  [SMALL_STATE(256)] = 4512,
  [SMALL_STATE(257)] = 4519,
  [SMALL_STATE(258)] = 4526,
  [SMALL_STATE(259)] = 4533,
  [SMALL_STATE(260)] = 4540,
  [SMALL_STATE(261)] = 4547,
  [SMALL_STATE(262)] = 4554,
  [SMALL_STATE(263)] = 4561,
  [SMALL_STATE(264)] = 4568,
  [SMALL_STATE(265)] = 4575,
  [SMALL_STATE(266)] = 4582,
  [SMALL_STATE(267)] = 4589,
  [SMALL_STATE(268)] = 4596,
  [SMALL_STATE(269)] = 4603,
  [SMALL_STATE(270)] = 4610,
  [SMALL_STATE(271)] = 4617,
  [SMALL_STATE(272)] = 4624,
  [SMALL_STATE(273)] = 4631,
  [SMALL_STATE(274)] = 4638,
  [SMALL_STATE(275)] = 4645,
  [SMALL_STATE(276)] = 4652,
  [SMALL_STATE(277)] = 4659,
  [SMALL_STATE(278)] = 4666,
  [SMALL_STATE(279)] = 4673,
  [SMALL_STATE(280)] = 4680,
  [SMALL_STATE(281)] = 4687,
  [SMALL_STATE(282)] = 4694,
  [SMALL_STATE(283)] = 4701,
  [SMALL_STATE(284)] = 4708,
  [SMALL_STATE(285)] = 4715,
  [SMALL_STATE(286)] = 4722,
  [SMALL_STATE(287)] = 4729,
  [SMALL_STATE(288)] = 4736,
  [SMALL_STATE(289)] = 4743,
  [SMALL_STATE(290)] = 4750,
  [SMALL_STATE(291)] = 4757,
  [SMALL_STATE(292)] = 4764,
  [SMALL_STATE(293)] = 4771,
  [SMALL_STATE(294)] = 4778,
  [SMALL_STATE(295)] = 4785,
  [SMALL_STATE(296)] = 4792,
  [SMALL_STATE(297)] = 4799,
  [SMALL_STATE(298)] = 4806,
  [SMALL_STATE(299)] = 4813,
  [SMALL_STATE(300)] = 4820,
  [SMALL_STATE(301)] = 4827,
  [SMALL_STATE(302)] = 4834,
  [SMALL_STATE(303)] = 4841,
  [SMALL_STATE(304)] = 4848,
  [SMALL_STATE(305)] = 4855,
  [SMALL_STATE(306)] = 4862,
  [SMALL_STATE(307)] = 4869,
  [SMALL_STATE(308)] = 4876,
  [SMALL_STATE(309)] = 4883,
  [SMALL_STATE(310)] = 4890,
  [SMALL_STATE(311)] = 4897,
  [SMALL_STATE(312)] = 4904,
  [SMALL_STATE(313)] = 4911,
  [SMALL_STATE(314)] = 4918,
  [SMALL_STATE(315)] = 4925,
  [SMALL_STATE(316)] = 4932,
  [SMALL_STATE(317)] = 4939,
  [SMALL_STATE(318)] = 4946,
  [SMALL_STATE(319)] = 4953,
  [SMALL_STATE(320)] = 4960,
  [SMALL_STATE(321)] = 4967,
  [SMALL_STATE(322)] = 4974,
  [SMALL_STATE(323)] = 4981,
  [SMALL_STATE(324)] = 4988,
  [SMALL_STATE(325)] = 4995,
  [SMALL_STATE(326)] = 5002,
  [SMALL_STATE(327)] = 5009,
  [SMALL_STATE(328)] = 5016,
  [SMALL_STATE(329)] = 5023,
  [SMALL_STATE(330)] = 5030,
  [SMALL_STATE(331)] = 5037,
  [SMALL_STATE(332)] = 5044,
  [SMALL_STATE(333)] = 5051,
  [SMALL_STATE(334)] = 5058,
  [SMALL_STATE(335)] = 5065,
  [SMALL_STATE(336)] = 5072,
  [SMALL_STATE(337)] = 5079,
  [SMALL_STATE(338)] = 5086,
  [SMALL_STATE(339)] = 5093,
  [SMALL_STATE(340)] = 5100,
  [SMALL_STATE(341)] = 5107,
  [SMALL_STATE(342)] = 5114,
  [SMALL_STATE(343)] = 5121,
  [SMALL_STATE(344)] = 5128,
  [SMALL_STATE(345)] = 5135,
  [SMALL_STATE(346)] = 5142,
  [SMALL_STATE(347)] = 5149,
  [SMALL_STATE(348)] = 5156,
  [SMALL_STATE(349)] = 5163,
  [SMALL_STATE(350)] = 5170,
  [SMALL_STATE(351)] = 5177,
  [SMALL_STATE(352)] = 5184,
  [SMALL_STATE(353)] = 5191,
  [SMALL_STATE(354)] = 5198,
  [SMALL_STATE(355)] = 5205,
  [SMALL_STATE(356)] = 5212,
  [SMALL_STATE(357)] = 5219,
  [SMALL_STATE(358)] = 5226,
  [SMALL_STATE(359)] = 5233,
  [SMALL_STATE(360)] = 5240,
  [SMALL_STATE(361)] = 5247,
  [SMALL_STATE(362)] = 5254,
  [SMALL_STATE(363)] = 5261,
  [SMALL_STATE(364)] = 5268,
  [SMALL_STATE(365)] = 5275,
  [SMALL_STATE(366)] = 5282,
  [SMALL_STATE(367)] = 5289,
  [SMALL_STATE(368)] = 5296,
  [SMALL_STATE(369)] = 5303,
  [SMALL_STATE(370)] = 5310,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 3, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2, 0, 0),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_settings_section_repeat1, 2, 0, 0), SHIFT_REPEAT(314),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 2, 0, 0),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 4, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__empty_line, 2, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__empty_line, 2, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_statement, 3, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting_statement, 3, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2, 0, 0),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2, 0, 0), SHIFT_REPEAT(335),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2, 0, 0),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2, 0, 0), SHIFT_REPEAT(335),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition_body, 1, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition_body, 1, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_definition_body, 1, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_definition_body, 1, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2, 0, 0),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2, 0, 0), SHIFT_REPEAT(313),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variables_section_repeat1, 2, 0, 0), SHIFT_REPEAT(314),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 4, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 4, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 3, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(252),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(209),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(211),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(218),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 3, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 3, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keywords_section_repeat1, 2, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2, 0, 0),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2, 0, 0), SHIFT_REPEAT(311),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2, 0, 0), SHIFT_REPEAT(256),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_section, 3, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_section, 3, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_section, 4, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_section, 4, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_section, 2, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_section, 2, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 2, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 2, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 4, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 2, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_cases_section_repeat1, 2, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2, 0, 0),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2, 0, 0), SHIFT_REPEAT(160),
  [239] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2, 0, 0), SHIFT_REPEAT(256),
  [242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 2, 0, 0),
  [303] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(229),
  [306] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(145),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 3, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 3, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 3, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 3, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_definition, 3, 0, 1),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_definition, 3, 0, 1),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition, 3, 0, 1),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition, 3, 0, 1),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [335] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_except_statement, 3, 100, 0), SHIFT(14),
  [338] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(203),
  [341] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(120),
  [344] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(149),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [352] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_variable_assignment, 3, 0, 0), SHIFT(44),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_assignment, 3, 0, 0), SHIFT(163),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_assignment, 3, 0, 0), SHIFT(170),
  [365] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(192),
  [368] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(131),
  [371] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(155),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 6, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 6, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 5, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [413] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_finally_statement, 3, 100, 0), SHIFT(15),
  [416] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_except_statement, 4, 100, 0), SHIFT(15),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_python_expression, 2, 0, 0),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_python_expression, 2, 0, 0),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [429] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_block, 1, 0, 0), SHIFT(15),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 5, 0, 0),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 5, 0, 0),
  [438] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_variable_assignment, 4, 0, 0), SHIFT(44),
  [441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_assignment, 4, 0, 0), SHIFT(163),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 5, 0, 0),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 5, 0, 0),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 4, 0, 0),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 4, 0, 0),
  [452] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_assignment, 4, 0, 0), SHIFT(170),
  [455] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_keyword_invocation, 1, 0, 2), SHIFT(170),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 5, 0, 0),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 5, 0, 0),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 4, 0, 0),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 4, 0, 0),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 4, 0, 0),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 4, 0, 0),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 3, 0, 0),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 3, 0, 0),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 3, 0, 0),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 3, 0, 0),
  [482] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_keyword_invocation, 1, 0, 2), SHIFT(44),
  [485] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_keyword_invocation, 1, 0, 2), SHIFT(163),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 3, 0, 0),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 3, 0, 0),
  [492] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [495] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(351),
  [498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(109),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_python_expression, 3, 0, 3),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_python_expression, 3, 0, 3),
  [505] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 1, 0, 0), SHIFT(170),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [514] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_arguments, 1, 0, 0), SHIFT(44),
  [517] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 1, 0, 0), SHIFT(163),
  [520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1, 0, 0),
  [524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [550] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2, 0, 8), SHIFT_REPEAT(285),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2, 0, 0),
  [555] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 2, 0, 0), SHIFT(163),
  [558] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_python_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(189),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_python_expression_repeat1, 2, 0, 0),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 1, 0, 0),
  [567] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_try_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(357),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 2, 0, 0),
  [574] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2, 0, 0), SHIFT_REPEAT(163),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [591] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_if_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(249),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_if_statement_repeat1, 2, 0, 0),
  [596] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_continuation, 3, 100, 0), SHIFT(44),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 3, 100, 0),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments_without_continuation, 1, 0, 0),
  [605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 4, 100, 0),
  [609] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_continuation, 2, 100, 0), SHIFT(44),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 2, 100, 0),
  [614] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_continuation, 4, 100, 0), SHIFT(44),
  [617] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 2, 0, 0), SHIFT(170),
  [620] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2, 0, 0), SHIFT_REPEAT(170),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 3, 0, 0),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 3, 0, 0),
  [627] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 5, 0, 0),
  [631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 6, 0, 0),
  [635] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [644] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inline_python_expression_repeat1, 1, 0, 0),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_python_expression_repeat1, 1, 0, 0),
  [650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [654] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [656] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [658] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 5, 0, 0),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 5, 0, 0),
  [664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_statement, 1, 0, 0),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_statement, 1, 0, 0),
  [668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [670] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [676] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [694] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [702] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [706] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [710] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [712] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [716] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [724] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [734] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [736] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [740] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [746] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [750] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [754] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [756] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1, 0, 0),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [762] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [764] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_range, 3, 0, 0),
  [768] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [772] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [776] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [778] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inline_if_statement_repeat1, 2, 0, 0),
  [780] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [782] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [784] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [786] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [788] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [790] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [792] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [796] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [800] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [802] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [808] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [810] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [814] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [822] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [824] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_range, 5, 0, 0),
  [828] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_elseif_statement, 5, 100, 0),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_elseif_statement, 5, 100, 0),
  [832] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [836] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [838] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 4, 0, 0),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 4, 0, 0),
  [842] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3, 0, 4),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3, 0, 4),
  [846] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_invocation, 2, 0, 2),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_invocation, 2, 0, 2),
  [850] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(191),
  [853] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [857] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [859] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 4, 200, 0),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [865] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_except_statement, 5, 100, 0),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 8, 0, 0),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, 0, 14),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, 0, 15),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, 0, 16),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 8, 200, 0),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 8, 0, 17),
  [885] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_else_statement, 3, 100, 0),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 9, 0, 18),
  [891] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_for_statement_repeat1, 2, 0, 0),
  [893] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elseif_statement, 6, 100, 19),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_range, 7, 0, 0),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_setting, 2, 0, 0),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting, 2, 0, 0),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [911] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 7, 200, 0),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [923] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, 0, 13),
  [927] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [933] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [935] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, 0, 12),
  [939] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, 0, 11),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [961] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 7, 0, 0),
  [975] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [977] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [981] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 6, 0, 10),
  [985] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_finally_statement, 4, 100, 0),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1001] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_except_statement, 4, 100, 0),
  [1003] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_statement, 4, 100, 9),
  [1005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 6, 200, 0),
  [1007] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, 0, 7),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1013] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_zip, 2, 0, 0),
  [1015] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_enumerate, 2, 0, 0),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1025] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in, 2, 0, 0),
  [1027] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 5, 0, 6),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1035] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [1037] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [1039] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [1041] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [1043] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 5, 200, 0),
  [1045] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 1, 0, 5),
  [1047] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [1049] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [1051] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1055] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
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
