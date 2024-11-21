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
#define STATE_COUNT 373
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 128
#define ALIAS_COUNT 5
#define TOKEN_COUNT 65
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 21

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
  aux_sym_keyword_setting_name_token1 = 27,
  aux_sym_keyword_setting_name_token2 = 28,
  aux_sym_keyword_setting_name_token3 = 29,
  aux_sym_keyword_setting_name_token4 = 30,
  aux_sym_keyword_setting_name_token5 = 31,
  aux_sym_keyword_setting_name_token6 = 32,
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
  sym__line_break = 63,
  aux_sym__empty_line_token1 = 64,
  sym_source_file = 65,
  sym_section = 66,
  sym_settings_section = 67,
  sym_setting_statement = 68,
  sym_setting_name = 69,
  sym_variables_section = 70,
  sym_variable_definition = 71,
  sym_keywords_section = 72,
  sym_keyword_definition = 73,
  sym_keyword_definition_body = 74,
  sym_keyword_setting = 75,
  sym_keyword_setting_name = 76,
  sym_test_cases_section = 77,
  sym_test_case_definition = 78,
  sym_test_case_definition_body = 79,
  sym_test_case_setting = 80,
  sym_statement = 81,
  sym_return_statement = 82,
  sym_variable_assignment = 83,
  sym_keyword_invocation = 84,
  sym_if_statement = 85,
  sym_elseif_statement = 86,
  sym_else_statement = 87,
  sym_inline_if_statement = 88,
  sym_block = 89,
  sym_inline_elseif_statement = 90,
  sym_inline_else_statement = 91,
  sym_inline_statement = 92,
  sym_try_statement = 93,
  sym_except_statement = 94,
  sym_finally_statement = 95,
  sym_while_statement = 96,
  sym_for_statement = 97,
  sym__for_in = 98,
  sym__for_in_range = 99,
  sym__for_in_enumerate = 100,
  sym__for_in_zip = 101,
  sym_arguments = 102,
  sym_arguments_without_continuation = 103,
  sym_continuation = 104,
  sym_argument = 105,
  sym_scalar_variable = 106,
  sym_list_variable = 107,
  sym_dictionary_variable = 108,
  sym_inline_python_expression = 109,
  sym__indentation = 110,
  sym__empty_line = 111,
  aux_sym_source_file_repeat1 = 112,
  aux_sym_settings_section_repeat1 = 113,
  aux_sym_variables_section_repeat1 = 114,
  aux_sym_keywords_section_repeat1 = 115,
  aux_sym_keyword_definition_body_repeat1 = 116,
  aux_sym_test_cases_section_repeat1 = 117,
  aux_sym_test_case_definition_body_repeat1 = 118,
  aux_sym_if_statement_repeat1 = 119,
  aux_sym_inline_if_statement_repeat1 = 120,
  aux_sym_block_repeat1 = 121,
  aux_sym_try_statement_repeat1 = 122,
  aux_sym_for_statement_repeat1 = 123,
  aux_sym_arguments_repeat1 = 124,
  aux_sym_arguments_repeat2 = 125,
  aux_sym_argument_repeat1 = 126,
  aux_sym_inline_python_expression_repeat1 = 127,
  alias_sym_keyword = 128,
  alias_sym_name = 129,
  alias_sym_python_expression = 130,
  alias_sym_return_value = 131,
  alias_sym_variable_list = 132,
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
  [aux_sym_keyword_setting_name_token1] = "keyword_setting_name_token1",
  [aux_sym_keyword_setting_name_token2] = "keyword_setting_name_token2",
  [aux_sym_keyword_setting_name_token3] = "keyword_setting_name_token3",
  [aux_sym_keyword_setting_name_token4] = "keyword_setting_name_token4",
  [aux_sym_keyword_setting_name_token5] = "keyword_setting_name_token5",
  [aux_sym_keyword_setting_name_token6] = "keyword_setting_name_token6",
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
  [aux_sym_keyword_setting_name_token1] = aux_sym_keyword_setting_name_token1,
  [aux_sym_keyword_setting_name_token2] = aux_sym_keyword_setting_name_token2,
  [aux_sym_keyword_setting_name_token3] = aux_sym_keyword_setting_name_token3,
  [aux_sym_keyword_setting_name_token4] = aux_sym_keyword_setting_name_token4,
  [aux_sym_keyword_setting_name_token5] = aux_sym_keyword_setting_name_token5,
  [aux_sym_keyword_setting_name_token6] = aux_sym_keyword_setting_name_token6,
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
  [aux_sym_keyword_setting_name_token6] = {
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
  [6] = {.index = 1, .length = 1},
  [7] = {.index = 2, .length = 1},
  [8] = {.index = 3, .length = 1},
  [9] = {.index = 4, .length = 2},
  [10] = {.index = 6, .length = 1},
  [11] = {.index = 7, .length = 2},
  [12] = {.index = 9, .length = 2},
  [13] = {.index = 11, .length = 2},
  [14] = {.index = 13, .length = 2},
  [15] = {.index = 15, .length = 3},
  [16] = {.index = 18, .length = 3},
  [17] = {.index = 21, .length = 3},
  [18] = {.index = 24, .length = 3},
  [19] = {.index = 27, .length = 4},
  [20] = {.index = 31, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_alternative, 0},
  [2] =
    {field_condition, 1},
  [3] =
    {field_condition, 2},
  [4] =
    {field_alternative, 0, .inherited = true},
    {field_alternative, 1, .inherited = true},
  [6] =
    {field_consequence, 3},
  [7] =
    {field_body, 3},
    {field_condition, 1},
  [9] =
    {field_alternative, 4},
    {field_condition, 2},
  [11] =
    {field_condition, 2},
    {field_consequence, 4},
  [13] =
    {field_alternative, 4, .inherited = true},
    {field_condition, 2},
  [15] =
    {field_alternative, 5},
    {field_condition, 2},
    {field_consequence, 4},
  [18] =
    {field_alternative, 5, .inherited = true},
    {field_condition, 2},
    {field_consequence, 4},
  [21] =
    {field_alternative, 4, .inherited = true},
    {field_alternative, 5},
    {field_condition, 2},
  [24] =
    {field_body, 5},
    {field_left, 1},
    {field_right, 3},
  [27] =
    {field_alternative, 5, .inherited = true},
    {field_alternative, 6},
    {field_condition, 2},
    {field_consequence, 4},
  [31] =
    {field_condition, 3},
    {field_consequence, 5},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [2] = {
    [0] = alias_sym_name,
  },
  [3] = {
    [0] = alias_sym_keyword,
  },
  [4] = {
    [1] = alias_sym_python_expression,
  },
  [5] = {
    [2] = alias_sym_return_value,
  },
  [18] = {
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
  [50] = 40,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 8,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 8,
  [65] = 53,
  [66] = 55,
  [67] = 51,
  [68] = 60,
  [69] = 55,
  [70] = 51,
  [71] = 53,
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
  [95] = 95,
  [96] = 96,
  [97] = 89,
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
  [111] = 90,
  [112] = 112,
  [113] = 113,
  [114] = 113,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 113,
  [119] = 117,
  [120] = 84,
  [121] = 106,
  [122] = 107,
  [123] = 108,
  [124] = 109,
  [125] = 86,
  [126] = 87,
  [127] = 88,
  [128] = 94,
  [129] = 95,
  [130] = 96,
  [131] = 131,
  [132] = 84,
  [133] = 106,
  [134] = 107,
  [135] = 108,
  [136] = 109,
  [137] = 87,
  [138] = 88,
  [139] = 95,
  [140] = 96,
  [141] = 105,
  [142] = 86,
  [143] = 94,
  [144] = 105,
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
  [155] = 145,
  [156] = 156,
  [157] = 150,
  [158] = 158,
  [159] = 159,
  [160] = 145,
  [161] = 150,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 156,
  [169] = 169,
  [170] = 159,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 172,
  [176] = 176,
  [177] = 8,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 163,
  [184] = 184,
  [185] = 184,
  [186] = 181,
  [187] = 158,
  [188] = 188,
  [189] = 171,
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
  [226] = 225,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 204,
  [233] = 220,
  [234] = 216,
  [235] = 235,
  [236] = 212,
  [237] = 205,
  [238] = 210,
  [239] = 214,
  [240] = 240,
  [241] = 204,
  [242] = 220,
  [243] = 216,
  [244] = 244,
  [245] = 205,
  [246] = 210,
  [247] = 214,
  [248] = 204,
  [249] = 205,
  [250] = 225,
  [251] = 230,
  [252] = 191,
  [253] = 225,
  [254] = 230,
  [255] = 191,
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
  [296] = 296,
  [297] = 105,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 86,
  [304] = 304,
  [305] = 305,
  [306] = 94,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 301,
  [314] = 314,
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
  [327] = 263,
  [328] = 328,
  [329] = 272,
  [330] = 330,
  [331] = 276,
  [332] = 298,
  [333] = 318,
  [334] = 334,
  [335] = 268,
  [336] = 301,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 263,
  [345] = 345,
  [346] = 272,
  [347] = 347,
  [348] = 276,
  [349] = 318,
  [350] = 334,
  [351] = 268,
  [352] = 301,
  [353] = 353,
  [354] = 334,
  [355] = 263,
  [356] = 318,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 302,
  [361] = 286,
  [362] = 267,
  [363] = 325,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 302,
  [368] = 286,
  [369] = 267,
  [370] = 370,
  [371] = 302,
  [372] = 341,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(380);
      ADVANCE_MAP(
        '\t', 758,
        '\n', 762,
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
      if (lookahead == '\n') ADVANCE(762);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(764);
      if (lookahead == '#') ADVANCE(756);
      if (lookahead == '.') ADVANCE(70);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(758);
      if (lookahead == '\n') ADVANCE(762);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '#') ADVANCE(756);
      if (lookahead == '=') ADVANCE(414);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(12);
      if (lookahead == '\n') ADVANCE(762);
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
        '\n', 761,
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
        '\n', 761,
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
      if (lookahead == '\n') ADVANCE(762);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(756);
      if (lookahead == '{') ADVANCE(630);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(762);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(756);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(762);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(386);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(387);
      if (lookahead != 0) ADVANCE(389);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(762);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '{') ADVANCE(630);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(762);
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
      if (lookahead == ']') ADVANCE(430);
      if (lookahead == '{') ADVANCE(553);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 142:
      if (lookahead == ']') ADVANCE(430);
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
      if (lookahead == ']') ADVANCE(427);
      if (lookahead == '{') ADVANCE(553);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 148:
      if (lookahead == ']') ADVANCE(427);
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
      if (lookahead == ']') ADVANCE(441);
      if (lookahead == '{') ADVANCE(553);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 152:
      if (lookahead == ']') ADVANCE(441);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 153:
      if (lookahead == ']') ADVANCE(444);
      if (lookahead == '{') ADVANCE(553);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 154:
      if (lookahead == ']') ADVANCE(444);
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
        'A', 692,
        'a', 692,
        'D', 683,
        'd', 683,
        'R', 655,
        'r', 655,
        'T', 645,
        't', 645,
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
          lookahead == 'c') ADVANCE(647);
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
        'S', 662,
        's', 662,
        'T', 646,
        't', 646,
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
        'K', 656,
        'k', 656,
        'S', 660,
        's', 660,
        'T', 658,
        't', 658,
        'V', 648,
        'v', 648,
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
          lookahead == 'c') ADVANCE(647);
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
        '\n', 761,
        '\r', 14,
        ' ', 763,
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
        '\n', 762,
        '\r', 15,
        '#', 756,
        '$', 161,
        '*', 53,
        '\t', 766,
        ' ', 766,
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
        '\n', 761,
        '\r', 14,
        '#', 754,
        '*', 499,
        '{', 163,
        '\t', 765,
        ' ', 765,
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
      if (lookahead == '\n') ADVANCE(762);
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
      if (lookahead == '\n') ADVANCE(762);
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
      ACCEPT_TOKEN(aux_sym_setting_name_token1);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_setting_name_token2);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_setting_name_token3);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_setting_name_token4);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_setting_name_token5);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_setting_name_token6);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_setting_name_token7);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_setting_name_token8);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_setting_name_token9);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_setting_name_token10);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_setting_name_token11);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_setting_name_token12);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_setting_name_token13);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_setting_name_token14);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_setting_name_token15);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_setting_name_token16);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_setting_name_token17);
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
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token1);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token1);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token1);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token2);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token2);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token2);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token3);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token3);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token3);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token4);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token4);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token4);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token5);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token5);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token5);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token6);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token6);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_keyword_setting_name_token6);
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
      if (lookahead == '\n') ADVANCE(762);
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
      if (lookahead == '\n') ADVANCE(762);
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
      if (lookahead == '\n') ADVANCE(762);
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
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(562);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_text_chunk);
      ADVANCE_MAP(
        ' ', 168,
        'A', 577,
        'a', 577,
        'E', 558,
        'e', 558,
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
        'A', 577,
        'a', 577,
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
    case 557:
      ACCEPT_TOKEN(sym_text_chunk);
      ADVANCE_MAP(
        ' ', 168,
        'A', 601,
        'a', 601,
        'M', 598,
        'm', 598,
        '$', 374,
        '&', 374,
        '@', 374,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(601);
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
          lookahead == 'a') ADVANCE(604);
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
          lookahead == 'a') ADVANCE(611);
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
          lookahead == 'a') ADVANCE(617);
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
          lookahead == 'b') ADVANCE(582);
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
          lookahead == 'c') ADVANCE(625);
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
          lookahead == 'e') ADVANCE(628);
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
          lookahead == 'e') ADVANCE(595);
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
          lookahead == 'e') ADVANCE(608);
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
          lookahead == 'e') ADVANCE(589);
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
          lookahead == 'e') ADVANCE(619);
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
          lookahead == 'e') ADVANCE(743);
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
          lookahead == 'e') ADVANCE(618);
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
          lookahead == 'e') ADVANCE(590);
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
          lookahead == 'g') ADVANCE(624);
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
          lookahead == 'g') ADVANCE(605);
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
          lookahead == 'i') ADVANCE(554);
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
          lookahead == 'i') ADVANCE(588);
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
          lookahead == 'i') ADVANCE(597);
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
          lookahead == 'l') ADVANCE(575);
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
          lookahead == 'l') ADVANCE(561);
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
          lookahead == 'm') ADVANCE(568);
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
          lookahead == 'm') ADVANCE(570);
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
          lookahead == 'n') ADVANCE(731);
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
          lookahead == 'n') ADVANCE(578);
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
          lookahead == 'n') ADVANCE(620);
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
          lookahead == 'n') ADVANCE(614);
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
          lookahead == 'n') ADVANCE(735);
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
          lookahead == 'n') ADVANCE(739);
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
          lookahead == 'o') ADVANCE(627);
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
          lookahead == 'o') ADVANCE(621);
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
          lookahead == 'o') ADVANCE(603);
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
          lookahead == 'o') ADVANCE(592);
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
          lookahead == 'p') ADVANCE(583);
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
          lookahead == 'p') ADVANCE(741);
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
          lookahead == 'r') ADVANCE(576);
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
          lookahead == 'r') ADVANCE(564);
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
          lookahead == 'r') ADVANCE(587);
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
          lookahead == 'r') ADVANCE(565);
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
          lookahead == 'r') ADVANCE(579);
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
          lookahead == 's') ADVANCE(737);
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
          lookahead == 't') ADVANCE(581);
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
          lookahead == 't') ADVANCE(623);
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
          lookahead == 't') ADVANCE(560);
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
          lookahead == 't') ADVANCE(733);
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
          lookahead == 't') ADVANCE(580);
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
          lookahead == 't') ADVANCE(572);
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
          lookahead == 't') ADVANCE(622);
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
          lookahead == 't') ADVANCE(616);
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
          lookahead == 't') ADVANCE(607);
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
          lookahead == 'u') ADVANCE(615);
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
          lookahead == 'u') ADVANCE(599);
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
          lookahead == 'u') ADVANCE(602);
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
          lookahead == 'w') ADVANCE(596);
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
          lookahead == 'w') ADVANCE(591);
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
          lookahead == 'y') ADVANCE(626);
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
        ' ', 164,
        '{', 629,
        'A', 600,
        'a', 600,
        'D', 593,
        'd', 593,
        'R', 566,
        'r', 566,
        'T', 555,
        't', 555,
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
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(651);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 643:
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
    case 644:
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
    case 645:
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
    case 646:
      ACCEPT_TOKEN(sym_text_chunk);
      ADVANCE_MAP(
        ' ', 373,
        'A', 666,
        'a', 666,
        'E', 643,
        'e', 643,
        'I', 674,
        'i', 674,
        '$', 375,
        '&', 375,
        '@', 375,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 647:
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
    case 648:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(694);
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
          lookahead == 'a') ADVANCE(703);
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
          lookahead == 'a') ADVANCE(709);
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
          lookahead == 'b') ADVANCE(672);
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
          lookahead == 'c') ADVANCE(717);
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
          lookahead == 'e') ADVANCE(706);
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
          lookahead == 'e') ADVANCE(720);
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
          lookahead == 'e') ADVANCE(685);
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
          lookahead == 'e') ADVANCE(698);
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
          lookahead == 'e') ADVANCE(679);
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
          lookahead == 'e') ADVANCE(711);
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
          lookahead == 'e') ADVANCE(744);
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
          lookahead == 'e') ADVANCE(710);
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
          lookahead == 'e') ADVANCE(680);
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
          lookahead == 'g') ADVANCE(716);
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
          lookahead == 'i') ADVANCE(642);
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
          lookahead == 'i') ADVANCE(678);
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
          lookahead == 'i') ADVANCE(687);
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
          lookahead == 'l') ADVANCE(664);
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
          lookahead == 'l') ADVANCE(650);
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
          lookahead == 'm') ADVANCE(657);
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
          lookahead == 'm') ADVANCE(659);
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
          lookahead == 'n') ADVANCE(732);
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
          lookahead == 'n') ADVANCE(668);
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
          lookahead == 'n') ADVANCE(712);
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
          lookahead == 'n') ADVANCE(705);
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
          lookahead == 'n') ADVANCE(736);
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
          lookahead == 'n') ADVANCE(740);
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
          lookahead == 'o') ADVANCE(719);
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
          lookahead == 'o') ADVANCE(713);
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
          lookahead == 'o') ADVANCE(693);
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
          lookahead == 'o') ADVANCE(682);
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
          lookahead == 'p') ADVANCE(673);
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
          lookahead == 'p') ADVANCE(742);
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
          lookahead == 'r') ADVANCE(677);
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
          lookahead == 'r') ADVANCE(667);
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
          lookahead == 'r') ADVANCE(654);
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
          lookahead == 'r') ADVANCE(669);
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
          lookahead == 's') ADVANCE(738);
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
          lookahead == 't') ADVANCE(671);
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
          lookahead == 't') ADVANCE(649);
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
          lookahead == 't') ADVANCE(715);
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
          lookahead == 't') ADVANCE(734);
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
          lookahead == 't') ADVANCE(670);
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
          lookahead == 't') ADVANCE(661);
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
          lookahead == 't') ADVANCE(714);
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
          lookahead == 't') ADVANCE(708);
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
          lookahead == 't') ADVANCE(697);
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
          lookahead == 'u') ADVANCE(707);
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
          lookahead == 'u') ADVANCE(689);
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
          lookahead == 'u') ADVANCE(691);
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
          lookahead == 'w') ADVANCE(686);
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
          lookahead == 'w') ADVANCE(681);
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
          lookahead == 'y') ADVANCE(718);
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
        ' ', 166,
        '{', 629,
        'D', 593,
        'd', 593,
        'S', 573,
        's', 573,
        'T', 556,
        't', 556,
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
        'K', 567,
        'k', 567,
        'S', 571,
        's', 571,
        'T', 569,
        't', 569,
        'V', 559,
        'v', 559,
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
      if (lookahead == ']') ADVANCE(429);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(142);
      if (lookahead == ']') ADVANCE(430);
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
      if (lookahead == ']') ADVANCE(426);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(148);
      if (lookahead == ']') ADVANCE(427);
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
      if (lookahead == ']') ADVANCE(440);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(152);
      if (lookahead == ']') ADVANCE(441);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(721);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(153);
      if (lookahead == ']') ADVANCE(443);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(154);
      if (lookahead == ']') ADVANCE(444);
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
      if (lookahead == '\n') ADVANCE(762);
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
      if (lookahead == '\n') ADVANCE(762);
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
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(762);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '{') ADVANCE(630);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(762);
      if (lookahead == '\r') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym__empty_line_token1);
      if (lookahead == '\t') ADVANCE(766);
      if (lookahead == '\n') ADVANCE(762);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(758);
      if (lookahead == '#') ADVANCE(756);
      if (lookahead == '{') ADVANCE(630);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym__empty_line_token1);
      if (lookahead == '\t') ADVANCE(766);
      if (lookahead == '\n') ADVANCE(762);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(758);
      if (lookahead == '#') ADVANCE(756);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym__empty_line_token1);
      if (lookahead == '\n') ADVANCE(762);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(756);
      if (lookahead == '{') ADVANCE(630);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(766);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym__empty_line_token1);
      if (lookahead == '\n') ADVANCE(762);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '#') ADVANCE(756);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(766);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
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
  [7] = {.lex_state = 42},
  [8] = {.lex_state = 377},
  [9] = {.lex_state = 43},
  [10] = {.lex_state = 377},
  [11] = {.lex_state = 39},
  [12] = {.lex_state = 40},
  [13] = {.lex_state = 38},
  [14] = {.lex_state = 41},
  [15] = {.lex_state = 44},
  [16] = {.lex_state = 376},
  [17] = {.lex_state = 376},
  [18] = {.lex_state = 376},
  [19] = {.lex_state = 376},
  [20] = {.lex_state = 378},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 378},
  [23] = {.lex_state = 378},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 378},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 377},
  [28] = {.lex_state = 377},
  [29] = {.lex_state = 377},
  [30] = {.lex_state = 378},
  [31] = {.lex_state = 378},
  [32] = {.lex_state = 378},
  [33] = {.lex_state = 378},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 378},
  [36] = {.lex_state = 377},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 378},
  [39] = {.lex_state = 377},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 376},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 376},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 376},
  [57] = {.lex_state = 378},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 377},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 378},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 377},
  [64] = {.lex_state = 378},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 7},
  [67] = {.lex_state = 7},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 8},
  [70] = {.lex_state = 8},
  [71] = {.lex_state = 8},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 45},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 45},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 45},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 9},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 9},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 9},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 6},
  [107] = {.lex_state = 6},
  [108] = {.lex_state = 6},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 9},
  [113] = {.lex_state = 6},
  [114] = {.lex_state = 6},
  [115] = {.lex_state = 9},
  [116] = {.lex_state = 9},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 6},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 7},
  [121] = {.lex_state = 7},
  [122] = {.lex_state = 7},
  [123] = {.lex_state = 7},
  [124] = {.lex_state = 7},
  [125] = {.lex_state = 7},
  [126] = {.lex_state = 7},
  [127] = {.lex_state = 7},
  [128] = {.lex_state = 7},
  [129] = {.lex_state = 7},
  [130] = {.lex_state = 7},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 8},
  [133] = {.lex_state = 8},
  [134] = {.lex_state = 8},
  [135] = {.lex_state = 8},
  [136] = {.lex_state = 8},
  [137] = {.lex_state = 8},
  [138] = {.lex_state = 8},
  [139] = {.lex_state = 8},
  [140] = {.lex_state = 8},
  [141] = {.lex_state = 8},
  [142] = {.lex_state = 8},
  [143] = {.lex_state = 8},
  [144] = {.lex_state = 7},
  [145] = {.lex_state = 46},
  [146] = {.lex_state = 46},
  [147] = {.lex_state = 9},
  [148] = {.lex_state = 379},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 46},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 379},
  [153] = {.lex_state = 9},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 46},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 46},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 46},
  [161] = {.lex_state = 46},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 9},
  [165] = {.lex_state = 9},
  [166] = {.lex_state = 46},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 9},
  [177] = {.lex_state = 1},
  [178] = {.lex_state = 9},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 9},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 9},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 1},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 9},
  [191] = {.lex_state = 10},
  [192] = {.lex_state = 13},
  [193] = {.lex_state = 9},
  [194] = {.lex_state = 9},
  [195] = {.lex_state = 13},
  [196] = {.lex_state = 9},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 9},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 5},
  [205] = {.lex_state = 5},
  [206] = {.lex_state = 9},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 5},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 9},
  [214] = {.lex_state = 5},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 5},
  [217] = {.lex_state = 9},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 9},
  [220] = {.lex_state = 5},
  [221] = {.lex_state = 13},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 13},
  [224] = {.lex_state = 9},
  [225] = {.lex_state = 10},
  [226] = {.lex_state = 10},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 9},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 10},
  [231] = {.lex_state = 9},
  [232] = {.lex_state = 5},
  [233] = {.lex_state = 5},
  [234] = {.lex_state = 5},
  [235] = {.lex_state = 9},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 5},
  [238] = {.lex_state = 5},
  [239] = {.lex_state = 5},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 5},
  [242] = {.lex_state = 5},
  [243] = {.lex_state = 5},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 5},
  [246] = {.lex_state = 5},
  [247] = {.lex_state = 5},
  [248] = {.lex_state = 5},
  [249] = {.lex_state = 5},
  [250] = {.lex_state = 10},
  [251] = {.lex_state = 10},
  [252] = {.lex_state = 10},
  [253] = {.lex_state = 10},
  [254] = {.lex_state = 10},
  [255] = {.lex_state = 10},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 9},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 379},
  [264] = {.lex_state = 9},
  [265] = {.lex_state = 9},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 47},
  [268] = {.lex_state = 379},
  [269] = {.lex_state = 9},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 379},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 9},
  [276] = {.lex_state = 379},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 9},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 9},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 47},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 47},
  [295] = {.lex_state = 9},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 9},
  [298] = {.lex_state = 379},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 47},
  [303] = {.lex_state = 9},
  [304] = {.lex_state = 9},
  [305] = {.lex_state = 379},
  [306] = {.lex_state = 9},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 9},
  [310] = {.lex_state = 9},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 9},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 379},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 47},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 379},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 379},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 379},
  [332] = {.lex_state = 379},
  [333] = {.lex_state = 379},
  [334] = {.lex_state = 379},
  [335] = {.lex_state = 379},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 9},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 379},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 379},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 379},
  [349] = {.lex_state = 379},
  [350] = {.lex_state = 379},
  [351] = {.lex_state = 379},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 379},
  [355] = {.lex_state = 379},
  [356] = {.lex_state = 379},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 47},
  [361] = {.lex_state = 47},
  [362] = {.lex_state = 47},
  [363] = {.lex_state = 47},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 47},
  [368] = {.lex_state = 47},
  [369] = {.lex_state = 47},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 47},
  [372] = {.lex_state = 0},
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
    [aux_sym_keyword_setting_name_token1] = ACTIONS(1),
    [aux_sym_keyword_setting_name_token2] = ACTIONS(1),
    [aux_sym_keyword_setting_name_token3] = ACTIONS(1),
    [aux_sym_keyword_setting_name_token4] = ACTIONS(1),
    [aux_sym_keyword_setting_name_token5] = ACTIONS(1),
    [aux_sym_keyword_setting_name_token6] = ACTIONS(1),
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
    [sym_source_file] = STATE(282),
    [sym_section] = STATE(21),
    [sym_settings_section] = STATE(131),
    [sym_variables_section] = STATE(131),
    [sym_keywords_section] = STATE(131),
    [sym_test_cases_section] = STATE(131),
    [aux_sym_source_file_repeat1] = STATE(21),
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
    STATE(110), 1,
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
  [44] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      aux_sym__empty_line_token1,
    ACTIONS(27), 1,
      sym__line_break,
    STATE(110), 1,
      sym_setting_name,
    STATE(2), 3,
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
    ACTIONS(29), 1,
      sym__line_break,
    STATE(110), 1,
      sym_setting_name,
    STATE(6), 3,
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
  [132] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(36), 1,
      sym__line_break,
    ACTIONS(39), 1,
      aux_sym__empty_line_token1,
    STATE(110), 1,
      sym_setting_name,
    STATE(5), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(31), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
    ACTIONS(33), 17,
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
    ACTIONS(21), 1,
      sym__line_break,
    ACTIONS(23), 1,
      aux_sym__empty_line_token1,
    STATE(110), 1,
      sym_setting_name,
    STATE(5), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(42), 5,
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
  [220] = 13,
    ACTIONS(44), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(48), 1,
      anon_sym_RETURN,
    ACTIONS(50), 1,
      anon_sym_IF,
    ACTIONS(52), 1,
      anon_sym_TRY,
    ACTIONS(54), 1,
      anon_sym_WHILE,
    ACTIONS(56), 1,
      anon_sym_FOR,
    ACTIONS(60), 1,
      sym_text_chunk,
    ACTIONS(62), 1,
      sym_comment,
    STATE(93), 1,
      sym_keyword_setting_name,
    ACTIONS(58), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(307), 2,
      sym_keyword_setting,
      sym_statement,
    ACTIONS(46), 6,
      aux_sym_keyword_setting_name_token1,
      aux_sym_keyword_setting_name_token2,
      aux_sym_keyword_setting_name_token3,
      aux_sym_keyword_setting_name_token4,
      aux_sym_keyword_setting_name_token5,
      aux_sym_keyword_setting_name_token6,
    STATE(284), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [274] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      aux_sym__empty_line_token1,
    ACTIONS(64), 24,
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
  [307] = 12,
    ACTIONS(44), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(48), 1,
      anon_sym_RETURN,
    ACTIONS(50), 1,
      anon_sym_IF,
    ACTIONS(52), 1,
      anon_sym_TRY,
    ACTIONS(54), 1,
      anon_sym_WHILE,
    ACTIONS(56), 1,
      anon_sym_FOR,
    ACTIONS(60), 1,
      sym_text_chunk,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(58), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(370), 2,
      sym_test_case_setting,
      sym_statement,
    ACTIONS(68), 6,
      aux_sym_keyword_setting_name_token1,
      aux_sym_keyword_setting_name_token2,
      aux_sym_keyword_setting_name_token5,
      aux_sym_keyword_setting_name_token6,
      aux_sym_test_case_setting_token1,
      aux_sym_test_case_setting_token2,
    STATE(284), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [358] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      aux_sym__empty_line_token1,
    ACTIONS(70), 23,
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
  [390] = 15,
    ACTIONS(44), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(48), 1,
      anon_sym_RETURN,
    ACTIONS(50), 1,
      anon_sym_IF,
    ACTIONS(52), 1,
      anon_sym_TRY,
    ACTIONS(54), 1,
      anon_sym_WHILE,
    ACTIONS(56), 1,
      anon_sym_FOR,
    ACTIONS(60), 1,
      sym_text_chunk,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_END,
    ACTIONS(76), 1,
      anon_sym_ELSE,
    ACTIONS(78), 1,
      anon_sym_EXCEPT,
    ACTIONS(80), 1,
      anon_sym_FINALLY,
    STATE(292), 1,
      sym_statement,
    ACTIONS(58), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(284), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [444] = 14,
    ACTIONS(44), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(48), 1,
      anon_sym_RETURN,
    ACTIONS(50), 1,
      anon_sym_IF,
    ACTIONS(52), 1,
      anon_sym_TRY,
    ACTIONS(54), 1,
      anon_sym_WHILE,
    ACTIONS(56), 1,
      anon_sym_FOR,
    ACTIONS(60), 1,
      sym_text_chunk,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_ELSE,
    ACTIONS(82), 1,
      anon_sym_END,
    ACTIONS(84), 1,
      anon_sym_ELSEIF,
    STATE(292), 1,
      sym_statement,
    ACTIONS(58), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(284), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [495] = 12,
    ACTIONS(44), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(48), 1,
      anon_sym_RETURN,
    ACTIONS(50), 1,
      anon_sym_IF,
    ACTIONS(52), 1,
      anon_sym_TRY,
    ACTIONS(54), 1,
      anon_sym_WHILE,
    ACTIONS(56), 1,
      anon_sym_FOR,
    ACTIONS(60), 1,
      sym_text_chunk,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(86), 1,
      sym_ellipses,
    STATE(292), 1,
      sym_statement,
    ACTIONS(58), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(284), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [540] = 12,
    ACTIONS(44), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(48), 1,
      anon_sym_RETURN,
    ACTIONS(50), 1,
      anon_sym_IF,
    ACTIONS(52), 1,
      anon_sym_TRY,
    ACTIONS(54), 1,
      anon_sym_WHILE,
    ACTIONS(56), 1,
      anon_sym_FOR,
    ACTIONS(60), 1,
      sym_text_chunk,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_END,
    STATE(292), 1,
      sym_statement,
    ACTIONS(58), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(284), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [585] = 11,
    ACTIONS(44), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(48), 1,
      anon_sym_RETURN,
    ACTIONS(50), 1,
      anon_sym_IF,
    ACTIONS(52), 1,
      anon_sym_TRY,
    ACTIONS(54), 1,
      anon_sym_WHILE,
    ACTIONS(56), 1,
      anon_sym_FOR,
    ACTIONS(60), 1,
      sym_text_chunk,
    ACTIONS(62), 1,
      sym_comment,
    STATE(292), 1,
      sym_statement,
    ACTIONS(58), 2,
      sym_continue_statement,
      sym_break_statement,
    STATE(284), 8,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_if_statement,
      sym_inline_if_statement,
      sym_try_statement,
      sym_while_statement,
      sym_for_statement,
  [627] = 8,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    ACTIONS(94), 1,
      sym__separator,
    ACTIONS(96), 1,
      sym__line_break,
    ACTIONS(98), 1,
      aux_sym__empty_line_token1,
    STATE(7), 1,
      sym__indentation,
    STATE(17), 2,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
    ACTIONS(92), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [657] = 8,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(100), 1,
      ts_builtin_sym_end,
    ACTIONS(104), 1,
      sym__separator,
    ACTIONS(107), 1,
      sym__line_break,
    ACTIONS(110), 1,
      aux_sym__empty_line_token1,
    STATE(7), 1,
      sym__indentation,
    STATE(17), 2,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
    ACTIONS(102), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [687] = 8,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(98), 1,
      aux_sym__empty_line_token1,
    ACTIONS(113), 1,
      ts_builtin_sym_end,
    ACTIONS(117), 1,
      sym__separator,
    ACTIONS(119), 1,
      sym__line_break,
    STATE(9), 1,
      sym__indentation,
    STATE(19), 2,
      sym__empty_line,
      aux_sym_test_case_definition_body_repeat1,
    ACTIONS(115), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
  [717] = 8,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(125), 1,
      sym__separator,
    ACTIONS(128), 1,
      sym__line_break,
    ACTIONS(131), 1,
      aux_sym__empty_line_token1,
    STATE(9), 1,
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
  [747] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(134), 1,
      ts_builtin_sym_end,
    ACTIONS(138), 1,
      sym_text_chunk,
    ACTIONS(140), 1,
      sym__line_break,
    ACTIONS(142), 1,
      aux_sym__empty_line_token1,
    STATE(25), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(136), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [774] = 8,
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
    ACTIONS(144), 1,
      ts_builtin_sym_end,
    STATE(37), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(131), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [803] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(142), 1,
      aux_sym__empty_line_token1,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    ACTIONS(150), 1,
      sym_text_chunk,
    ACTIONS(152), 1,
      sym__line_break,
    STATE(23), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(148), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [830] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(154), 1,
      ts_builtin_sym_end,
    ACTIONS(158), 1,
      sym_text_chunk,
    ACTIONS(161), 1,
      sym__line_break,
    ACTIONS(164), 1,
      aux_sym__empty_line_token1,
    STATE(23), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(156), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [857] = 8,
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
    ACTIONS(144), 1,
      ts_builtin_sym_end,
    STATE(26), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(131), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [886] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(167), 1,
      ts_builtin_sym_end,
    ACTIONS(171), 1,
      sym_text_chunk,
    ACTIONS(174), 1,
      sym__line_break,
    ACTIONS(177), 1,
      aux_sym__empty_line_token1,
    STATE(25), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(169), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [913] = 8,
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
    STATE(37), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(131), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [942] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      aux_sym__empty_line_token1,
    ACTIONS(184), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(186), 1,
      sym__line_break,
    STATE(29), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(182), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [967] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      aux_sym__empty_line_token1,
    ACTIONS(184), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(190), 1,
      sym__line_break,
    STATE(39), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(188), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [992] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      aux_sym__empty_line_token1,
    ACTIONS(184), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(192), 1,
      sym__line_break,
    STATE(36), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(188), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1017] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(142), 1,
      aux_sym__empty_line_token1,
    ACTIONS(150), 1,
      sym_text_chunk,
    ACTIONS(194), 1,
      ts_builtin_sym_end,
    ACTIONS(198), 1,
      sym__line_break,
    STATE(22), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(196), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1044] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(142), 1,
      aux_sym__empty_line_token1,
    ACTIONS(150), 1,
      sym_text_chunk,
    ACTIONS(152), 1,
      sym__line_break,
    ACTIONS(194), 1,
      ts_builtin_sym_end,
    STATE(23), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(196), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1071] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(138), 1,
      sym_text_chunk,
    ACTIONS(142), 1,
      aux_sym__empty_line_token1,
    ACTIONS(200), 1,
      ts_builtin_sym_end,
    ACTIONS(204), 1,
      sym__line_break,
    STATE(20), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(202), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1098] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(138), 1,
      sym_text_chunk,
    ACTIONS(140), 1,
      sym__line_break,
    ACTIONS(142), 1,
      aux_sym__empty_line_token1,
    ACTIONS(200), 1,
      ts_builtin_sym_end,
    STATE(25), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(202), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1125] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      sym__separator,
    ACTIONS(208), 1,
      sym__line_break,
    ACTIONS(210), 1,
      aux_sym__empty_line_token1,
    STATE(11), 1,
      sym__indentation,
    STATE(83), 1,
      sym_block,
    STATE(165), 1,
      sym_else_statement,
    STATE(206), 1,
      sym_finally_statement,
    STATE(91), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
    STATE(92), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [1158] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(142), 1,
      aux_sym__empty_line_token1,
    ACTIONS(150), 1,
      sym_text_chunk,
    ACTIONS(212), 1,
      ts_builtin_sym_end,
    ACTIONS(216), 1,
      sym__line_break,
    STATE(31), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(214), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1185] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(223), 1,
      sym__line_break,
    ACTIONS(226), 1,
      aux_sym__empty_line_token1,
    STATE(36), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(218), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1210] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      ts_builtin_sym_end,
    ACTIONS(231), 1,
      aux_sym_settings_section_token1,
    ACTIONS(234), 1,
      aux_sym_variables_section_token1,
    ACTIONS(237), 1,
      aux_sym_keywords_section_token1,
    ACTIONS(240), 1,
      aux_sym_test_cases_section_token1,
    STATE(37), 2,
      sym_section,
      aux_sym_source_file_repeat1,
    STATE(131), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_section,
  [1239] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(138), 1,
      sym_text_chunk,
    ACTIONS(142), 1,
      aux_sym__empty_line_token1,
    ACTIONS(243), 1,
      ts_builtin_sym_end,
    ACTIONS(247), 1,
      sym__line_break,
    STATE(33), 3,
      sym_test_case_definition,
      sym__empty_line,
      aux_sym_test_cases_section_repeat1,
    ACTIONS(245), 4,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1266] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      aux_sym__empty_line_token1,
    ACTIONS(184), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(192), 1,
      sym__line_break,
    STATE(36), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(249), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [1291] = 8,
    ACTIONS(62), 1,
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
    STATE(202), 1,
      sym_argument,
    STATE(66), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1319] = 8,
    ACTIONS(62), 1,
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
    STATE(55), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1347] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      sym__line_break,
    ACTIONS(210), 1,
      aux_sym__empty_line_token1,
    ACTIONS(271), 1,
      sym__separator,
    STATE(12), 1,
      sym__indentation,
    STATE(115), 1,
      sym_block,
    STATE(116), 1,
      aux_sym_if_statement_repeat1,
    STATE(228), 1,
      sym_else_statement,
    STATE(312), 1,
      sym_elseif_statement,
    STATE(91), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1379] = 8,
    ACTIONS(62), 1,
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
    STATE(198), 1,
      sym_argument,
    STATE(55), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1407] = 8,
    ACTIONS(62), 1,
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
    STATE(199), 1,
      sym_argument,
    STATE(55), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1435] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(275), 1,
      anon_sym_IN,
    ACTIONS(277), 1,
      anon_sym_INRANGE,
    ACTIONS(279), 1,
      anon_sym_INENUMERATE,
    ACTIONS(281), 1,
      anon_sym_INZIP,
    STATE(269), 1,
      sym_scalar_variable,
    STATE(308), 4,
      sym__for_in,
      sym__for_in_range,
      sym__for_in_enumerate,
      sym__for_in_zip,
  [1463] = 8,
    ACTIONS(62), 1,
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
    STATE(364), 1,
      sym_argument,
    STATE(66), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1491] = 8,
    ACTIONS(62), 1,
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
    STATE(208), 1,
      sym_argument,
    STATE(55), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1519] = 8,
    ACTIONS(62), 1,
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
    STATE(259), 1,
      sym_argument,
    STATE(69), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1547] = 8,
    ACTIONS(62), 1,
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
    STATE(266), 1,
      sym_argument,
    STATE(66), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1575] = 8,
    ACTIONS(62), 1,
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
    STATE(202), 1,
      sym_argument,
    STATE(55), 4,
      sym_scalar_variable,
      sym_list_variable,
      sym_dictionary_variable,
      sym_inline_python_expression,
  [1603] = 7,
    ACTIONS(62), 1,
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
    STATE(53), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [1628] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(299), 1,
      ts_builtin_sym_end,
    ACTIONS(301), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__separator,
      sym__line_break,
      aux_sym__empty_line_token1,
  [1645] = 7,
    ACTIONS(62), 1,
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
  [1670] = 3,
    ACTIONS(62), 1,
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
  [1687] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(267), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(293), 1,
      anon_sym_SPACE,
    ACTIONS(321), 1,
      sym_text_chunk,
    ACTIONS(323), 2,
      sym__separator,
      sym__line_break,
    STATE(51), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [1712] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    ACTIONS(66), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__separator,
      sym__line_break,
      aux_sym__empty_line_token1,
  [1729] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(325), 1,
      ts_builtin_sym_end,
    ACTIONS(327), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__line_break,
      aux_sym__empty_line_token1,
  [1745] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      sym__line_break,
    ACTIONS(210), 1,
      aux_sym__empty_line_token1,
    ACTIONS(329), 1,
      sym_ellipses,
    ACTIONS(331), 1,
      sym__separator,
    STATE(13), 1,
      sym__indentation,
    STATE(283), 1,
      sym_block,
    STATE(91), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [1771] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      aux_sym__empty_line_token1,
    ACTIONS(334), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym__line_break,
  [1787] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      sym__separator,
    ACTIONS(342), 1,
      sym__line_break,
    STATE(117), 1,
      aux_sym_arguments_repeat1,
    STATE(215), 1,
      sym_arguments,
    ACTIONS(338), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
    STATE(168), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [1811] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(345), 1,
      ts_builtin_sym_end,
    ACTIONS(347), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__line_break,
      aux_sym__empty_line_token1,
  [1827] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      sym__separator,
    ACTIONS(351), 1,
      sym__line_break,
    STATE(117), 1,
      aux_sym_arguments_repeat1,
    STATE(324), 1,
      sym_arguments,
    ACTIONS(349), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
    STATE(168), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [1851] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      aux_sym__empty_line_token1,
    ACTIONS(353), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym__line_break,
  [1867] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    ACTIONS(66), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
      sym_text_chunk,
      sym__line_break,
      aux_sym__empty_line_token1,
  [1883] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(315), 1,
      sym__line_break,
    ACTIONS(357), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(360), 1,
      anon_sym_SPACE,
    ACTIONS(363), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(366), 1,
      sym_text_chunk,
    STATE(65), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [1907] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(257), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(323), 1,
      sym__line_break,
    ACTIONS(369), 1,
      anon_sym_SPACE,
    ACTIONS(371), 1,
      sym_text_chunk,
    STATE(67), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [1931] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(257), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(297), 1,
      sym__line_break,
    ACTIONS(369), 1,
      anon_sym_SPACE,
    ACTIONS(373), 1,
      sym_text_chunk,
    STATE(65), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [1955] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      sym__separator,
    ACTIONS(380), 1,
      sym__line_break,
    STATE(119), 1,
      aux_sym_arguments_repeat1,
    STATE(215), 1,
      sym_arguments,
    ACTIONS(375), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
    STATE(156), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [1979] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(289), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(323), 1,
      sym__separator,
    ACTIONS(383), 1,
      anon_sym_SPACE,
    ACTIONS(385), 1,
      sym_text_chunk,
    STATE(70), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [2003] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(289), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(297), 1,
      sym__separator,
    ACTIONS(383), 1,
      anon_sym_SPACE,
    ACTIONS(387), 1,
      sym_text_chunk,
    STATE(71), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [2027] = 7,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(315), 1,
      sym__separator,
    ACTIONS(389), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(392), 1,
      anon_sym_SPACE,
    ACTIONS(395), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(398), 1,
      sym_text_chunk,
    STATE(71), 3,
      sym_scalar_variable,
      sym_inline_python_expression,
      aux_sym_argument_repeat1,
  [2051] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      sym__line_break,
    ACTIONS(210), 1,
      aux_sym__empty_line_token1,
    ACTIONS(401), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(200), 1,
      sym_block,
    STATE(91), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2074] = 6,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(405), 1,
      anon_sym_RETURN,
    ACTIONS(407), 1,
      sym_text_chunk,
    STATE(211), 1,
      sym_inline_statement,
    STATE(227), 3,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
  [2095] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      sym__separator,
    ACTIONS(98), 1,
      aux_sym__empty_line_token1,
    ACTIONS(409), 1,
      sym__line_break,
    STATE(7), 1,
      sym__indentation,
    STATE(61), 1,
      sym_keyword_definition_body,
    STATE(16), 2,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
  [2118] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      aux_sym__empty_line_token1,
    ACTIONS(117), 1,
      sym__separator,
    ACTIONS(411), 1,
      sym__line_break,
    STATE(9), 1,
      sym__indentation,
    STATE(57), 1,
      sym_test_case_definition_body,
    STATE(18), 2,
      sym__empty_line,
      aux_sym_test_case_definition_body_repeat1,
  [2141] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      sym__line_break,
    ACTIONS(210), 1,
      aux_sym__empty_line_token1,
    ACTIONS(413), 1,
      sym__separator,
    STATE(14), 1,
      sym__indentation,
    STATE(224), 1,
      sym_block,
    STATE(91), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2164] = 6,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(405), 1,
      anon_sym_RETURN,
    ACTIONS(407), 1,
      sym_text_chunk,
    STATE(182), 1,
      sym_inline_statement,
    STATE(227), 3,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
  [2185] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      sym__line_break,
    ACTIONS(210), 1,
      aux_sym__empty_line_token1,
    ACTIONS(401), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(281), 1,
      sym_block,
    STATE(91), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2208] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      sym__line_break,
    ACTIONS(210), 1,
      aux_sym__empty_line_token1,
    ACTIONS(415), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(295), 1,
      sym_block,
    STATE(91), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2231] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      sym__line_break,
    ACTIONS(210), 1,
      aux_sym__empty_line_token1,
    ACTIONS(418), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(340), 1,
      sym_block,
    STATE(91), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2254] = 6,
    ACTIONS(44), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(48), 1,
      anon_sym_RETURN,
    ACTIONS(60), 1,
      sym_text_chunk,
    ACTIONS(62), 1,
      sym_comment,
    STATE(260), 1,
      sym_inline_statement,
    STATE(227), 3,
      sym_return_statement,
      sym_variable_assignment,
      sym_keyword_invocation,
  [2275] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      sym__line_break,
    ACTIONS(210), 1,
      aux_sym__empty_line_token1,
    ACTIONS(401), 1,
      sym__separator,
    STATE(15), 1,
      sym__indentation,
    STATE(265), 1,
      sym_block,
    STATE(91), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2298] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      sym__separator,
    STATE(152), 1,
      sym__indentation,
    STATE(164), 1,
      sym_else_statement,
    STATE(217), 1,
      sym_finally_statement,
    STATE(99), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [2318] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(425), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(423), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2332] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      sym__separator,
    ACTIONS(351), 1,
      sym__line_break,
    STATE(117), 1,
      aux_sym_arguments_repeat1,
    STATE(290), 1,
      sym_arguments,
    STATE(168), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2352] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(429), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(427), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2366] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(433), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(431), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2380] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(437), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(435), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2394] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      sym__separator,
    ACTIONS(442), 1,
      sym__line_break,
    STATE(119), 1,
      aux_sym_arguments_repeat1,
    STATE(256), 1,
      sym_arguments,
    STATE(156), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2414] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      sym__separator,
    ACTIONS(445), 1,
      sym__line_break,
    STATE(117), 1,
      aux_sym_arguments_repeat1,
    STATE(244), 1,
      sym_arguments,
    STATE(168), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2434] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      aux_sym__empty_line_token1,
    ACTIONS(448), 1,
      sym__separator,
    ACTIONS(451), 1,
      sym__line_break,
    STATE(15), 1,
      sym__indentation,
    STATE(101), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2454] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      sym__separator,
    STATE(152), 1,
      sym__indentation,
    STATE(164), 1,
      sym_else_statement,
    STATE(217), 1,
      sym_finally_statement,
    STATE(147), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [2474] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      sym__separator,
    ACTIONS(351), 1,
      sym__line_break,
    STATE(117), 1,
      aux_sym_arguments_repeat1,
    STATE(317), 1,
      sym_arguments,
    STATE(168), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2494] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(455), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(453), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2508] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(459), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(457), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2522] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(463), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(461), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2536] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      sym__separator,
    ACTIONS(465), 1,
      sym__line_break,
    STATE(117), 1,
      aux_sym_arguments_repeat1,
    STATE(256), 1,
      sym_arguments,
    STATE(168), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2556] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      sym__separator,
    ACTIONS(351), 1,
      sym__line_break,
    STATE(117), 1,
      aux_sym_arguments_repeat1,
    STATE(347), 1,
      sym_arguments,
    STATE(168), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2576] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      sym__separator,
    STATE(148), 1,
      sym__indentation,
    STATE(176), 1,
      sym_else_statement,
    STATE(235), 1,
      sym_finally_statement,
    STATE(147), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [2596] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      sym__separator,
    ACTIONS(470), 1,
      sym__line_break,
    STATE(117), 1,
      aux_sym_arguments_repeat1,
    STATE(316), 1,
      sym_arguments,
    STATE(168), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2616] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      sym__separator,
    ACTIONS(475), 1,
      sym__line_break,
    ACTIONS(478), 1,
      aux_sym__empty_line_token1,
    STATE(15), 1,
      sym__indentation,
    STATE(101), 2,
      sym__empty_line,
      aux_sym_block_repeat1,
  [2636] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      sym__separator,
    ACTIONS(351), 1,
      sym__line_break,
    STATE(117), 1,
      aux_sym_arguments_repeat1,
    STATE(285), 1,
      sym_arguments,
    STATE(168), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2656] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      sym__separator,
    ACTIONS(351), 1,
      sym__line_break,
    STATE(117), 1,
      aux_sym_arguments_repeat1,
    STATE(300), 1,
      sym_arguments,
    STATE(168), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2676] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      sym__separator,
    ACTIONS(351), 1,
      sym__line_break,
    STATE(117), 1,
      aux_sym_arguments_repeat1,
    STATE(314), 1,
      sym_arguments,
    STATE(168), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2696] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(483), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(481), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2710] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(487), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(485), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2724] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(491), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(489), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2738] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(495), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(493), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2752] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(497), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(315), 4,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
      sym__line_break,
  [2766] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      sym__separator,
    ACTIONS(351), 1,
      sym__line_break,
    STATE(117), 1,
      aux_sym_arguments_repeat1,
    STATE(299), 1,
      sym_arguments,
    STATE(168), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2786] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      sym__separator,
    ACTIONS(502), 1,
      sym__line_break,
    STATE(119), 1,
      aux_sym_arguments_repeat1,
    STATE(244), 1,
      sym_arguments,
    STATE(156), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2806] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      sym__separator,
    STATE(153), 1,
      aux_sym_if_statement_repeat1,
    STATE(174), 1,
      sym__indentation,
    STATE(190), 1,
      sym_else_statement,
    STATE(312), 1,
      sym_elseif_statement,
  [2825] = 5,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(257), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(507), 1,
      sym_text_chunk,
    STATE(124), 2,
      sym_scalar_variable,
      sym_inline_python_expression,
  [2842] = 5,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(267), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(509), 1,
      sym_text_chunk,
    STATE(109), 2,
      sym_scalar_variable,
      sym_inline_python_expression,
  [2859] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      sym__separator,
    STATE(112), 1,
      aux_sym_if_statement_repeat1,
    STATE(167), 1,
      sym__indentation,
    STATE(193), 1,
      sym_else_statement,
    STATE(312), 1,
      sym_elseif_statement,
  [2878] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      sym__separator,
    STATE(153), 1,
      aux_sym_if_statement_repeat1,
    STATE(169), 1,
      sym__indentation,
    STATE(194), 1,
      sym_else_statement,
    STATE(312), 1,
      sym_elseif_statement,
  [2897] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      sym__separator,
    ACTIONS(515), 1,
      sym__line_break,
    STATE(179), 1,
      aux_sym_arguments_repeat1,
    STATE(187), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2914] = 5,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(289), 1,
      anon_sym_DOLLAR_LBRACE_LBRACE,
    ACTIONS(518), 1,
      sym_text_chunk,
    STATE(136), 2,
      sym_scalar_variable,
      sym_inline_python_expression,
  [2931] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      sym__separator,
    ACTIONS(523), 1,
      sym__line_break,
    STATE(179), 1,
      aux_sym_arguments_repeat1,
    STATE(158), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [2948] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(425), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(423), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [2961] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(487), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(485), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [2974] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(491), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(489), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [2987] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(495), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(493), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3000] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(497), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(315), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3013] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(429), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(427), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3026] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(433), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(431), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3039] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(437), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(435), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3052] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(455), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(453), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3065] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(459), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(457), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3078] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(463), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(461), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3091] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 5,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_section_token1,
  [3102] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(425), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(423), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3115] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(487), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(485), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3128] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(491), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(489), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3141] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(495), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(493), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3154] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(497), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(315), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3167] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(433), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(431), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3180] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(437), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(435), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3193] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(459), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(457), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3206] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(463), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(461), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3219] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(483), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(481), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3232] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(429), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(427), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3245] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(455), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(453), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__separator,
  [3258] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(483), 2,
      anon_sym_DOLLAR_LBRACE_LBRACE,
      sym_text_chunk,
    ACTIONS(481), 3,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_SPACE,
      sym__line_break,
  [3271] = 4,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(146), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(528), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3285] = 4,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(146), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(532), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3299] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      sym__separator,
    STATE(271), 1,
      sym__indentation,
    STATE(147), 2,
      sym_except_statement,
      aux_sym_try_statement_repeat1,
  [3313] = 5,
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
  [3329] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      sym__separator,
    ACTIONS(548), 1,
      sym__line_break,
    STATE(180), 1,
      aux_sym_arguments_repeat1,
    STATE(270), 1,
      sym_arguments_without_continuation,
  [3345] = 4,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(155), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(528), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3359] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      anon_sym_ELSEIF,
    ACTIONS(554), 1,
      anon_sym_ELSE,
    STATE(201), 1,
      sym_inline_elseif_statement,
    STATE(315), 1,
      sym_inline_else_statement,
  [3375] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      anon_sym_ELSE,
    ACTIONS(544), 1,
      anon_sym_EXCEPT,
    ACTIONS(546), 1,
      anon_sym_FINALLY,
    ACTIONS(556), 1,
      anon_sym_END,
  [3391] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      sym__separator,
    STATE(153), 1,
      aux_sym_if_statement_repeat1,
    STATE(312), 1,
      sym_elseif_statement,
    STATE(337), 1,
      sym__indentation,
  [3407] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      anon_sym_ELSEIF,
    ACTIONS(554), 1,
      anon_sym_ELSE,
    STATE(201), 1,
      sym_inline_elseif_statement,
    STATE(353), 1,
      sym_inline_else_statement,
  [3423] = 4,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(146), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(528), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3437] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      sym__line_break,
    ACTIONS(563), 1,
      sym__separator,
    STATE(159), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3451] = 4,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(565), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(160), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(528), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3465] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      sym__separator,
    ACTIONS(569), 1,
      sym__line_break,
    STATE(159), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3479] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      sym__separator,
    ACTIONS(574), 1,
      sym__line_break,
    STATE(159), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3493] = 4,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(577), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(146), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(528), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3507] = 4,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(145), 1,
      aux_sym_inline_python_expression_repeat1,
    ACTIONS(528), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3521] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      sym__separator,
    ACTIONS(583), 1,
      sym__line_break,
    STATE(173), 1,
      aux_sym_inline_if_statement_repeat1,
  [3534] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      sym__separator,
    ACTIONS(585), 1,
      sym__line_break,
    STATE(179), 1,
      aux_sym_arguments_repeat1,
  [3547] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      sym__separator,
    STATE(235), 1,
      sym_finally_statement,
    STATE(240), 1,
      sym__indentation,
  [3560] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      sym__separator,
    STATE(217), 1,
      sym_finally_statement,
    STATE(218), 1,
      sym__indentation,
  [3573] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(591), 2,
      anon_sym_RBRACE,
      aux_sym_inline_python_expression_token1,
  [3584] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_ELSE,
    ACTIONS(595), 1,
      anon_sym_END,
    ACTIONS(597), 1,
      anon_sym_ELSEIF,
  [3597] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      sym__line_break,
    STATE(170), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3608] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_ELSE,
    ACTIONS(597), 1,
      anon_sym_ELSEIF,
    ACTIONS(599), 1,
      anon_sym_END,
  [3621] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      sym__line_break,
    STATE(170), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3632] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      sym__separator,
    ACTIONS(604), 1,
      sym__line_break,
    STATE(163), 1,
      aux_sym_arguments_repeat1,
  [3645] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      sym__separator,
    ACTIONS(609), 1,
      sym__line_break,
    STATE(184), 1,
      aux_sym_arguments_repeat1,
  [3658] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      sym__separator,
    ACTIONS(614), 1,
      sym__line_break,
    STATE(173), 1,
      aux_sym_inline_if_statement_repeat1,
  [3671] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_ELSE,
    ACTIONS(597), 1,
      anon_sym_ELSEIF,
    ACTIONS(616), 1,
      anon_sym_END,
  [3684] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      sym__separator,
    ACTIONS(609), 1,
      sym__line_break,
    STATE(185), 1,
      aux_sym_arguments_repeat1,
  [3697] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      sym__separator,
    STATE(196), 1,
      sym_finally_statement,
    STATE(197), 1,
      sym__indentation,
  [3710] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 1,
      sym__line_break,
    ACTIONS(66), 2,
      sym__separator,
      aux_sym__empty_line_token1,
  [3721] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      sym__separator,
    STATE(180), 1,
      aux_sym_arguments_repeat1,
    STATE(311), 1,
      sym_arguments_without_continuation,
  [3734] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      sym__separator,
    ACTIONS(623), 1,
      sym__line_break,
    STATE(179), 1,
      aux_sym_arguments_repeat1,
  [3747] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      sym__separator,
    ACTIONS(625), 1,
      sym__line_break,
    STATE(179), 1,
      aux_sym_arguments_repeat1,
  [3760] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      sym_ellipses,
    ACTIONS(629), 1,
      sym__separator,
    STATE(372), 1,
      sym__indentation,
  [3773] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      sym__separator,
    ACTIONS(633), 1,
      sym__line_break,
    STATE(162), 1,
      aux_sym_inline_if_statement_repeat1,
  [3786] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      sym__line_break,
    ACTIONS(635), 1,
      sym__separator,
    STATE(179), 1,
      aux_sym_arguments_repeat1,
  [3799] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      sym__line_break,
    ACTIONS(638), 1,
      sym__separator,
    STATE(179), 1,
      aux_sym_arguments_repeat1,
  [3812] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      sym__separator,
    ACTIONS(604), 1,
      sym__line_break,
    STATE(179), 1,
      aux_sym_arguments_repeat1,
  [3825] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      sym_ellipses,
    ACTIONS(641), 1,
      sym__separator,
    STATE(341), 1,
      sym__indentation,
  [3838] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      sym__line_break,
    STATE(170), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
  [3849] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 1,
      sym__line_break,
    ACTIONS(646), 2,
      sym__separator,
      aux_sym__empty_line_token1,
  [3860] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      sym__line_break,
    ACTIONS(638), 1,
      sym__separator,
    STATE(183), 1,
      aux_sym_arguments_repeat1,
  [3873] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 1,
      sym__separator,
    STATE(358), 1,
      sym__indentation,
  [3883] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(652), 1,
      anon_sym_SPACE,
    ACTIONS(654), 1,
      sym_variable_name,
  [3893] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(656), 1,
      aux_sym_settings_section_token2,
    ACTIONS(658), 1,
      sym__line_break,
  [3903] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      sym__separator,
    STATE(321), 1,
      sym__indentation,
  [3913] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 1,
      sym__separator,
    STATE(328), 1,
      sym__indentation,
  [3923] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(664), 1,
      aux_sym_settings_section_token2,
    ACTIONS(666), 1,
      sym__line_break,
  [3933] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      sym__separator,
    STATE(339), 1,
      sym__indentation,
  [3943] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_FINALLY,
    ACTIONS(670), 1,
      anon_sym_END,
  [3953] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      sym__line_break,
    ACTIONS(672), 1,
      sym__separator,
  [3963] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      sym__separator,
    ACTIONS(676), 1,
      sym__line_break,
  [3973] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 1,
      sym__separator,
    STATE(343), 1,
      sym__indentation,
  [3983] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 1,
      sym__line_break,
    ACTIONS(680), 1,
      sym__separator,
  [3993] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      sym__separator,
    ACTIONS(684), 1,
      sym__line_break,
  [4003] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      sym__separator,
    ACTIONS(688), 1,
      sym__line_break,
  [4013] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 1,
      anon_sym_RBRACE,
    ACTIONS(692), 1,
      anon_sym_SPACE,
  [4023] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      anon_sym_RBRACE,
    ACTIONS(696), 1,
      anon_sym_SPACE,
  [4033] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      sym__separator,
    STATE(257), 1,
      sym__indentation,
  [4043] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      anon_sym_ELSEIF,
    STATE(201), 1,
      sym_inline_elseif_statement,
  [4053] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 1,
      sym__separator,
    ACTIONS(702), 1,
      sym__line_break,
  [4063] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      sym__separator,
    ACTIONS(706), 1,
      sym__line_break,
  [4073] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      anon_sym_RBRACE,
    ACTIONS(710), 1,
      anon_sym_SPACE,
  [4083] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      sym__separator,
    ACTIONS(714), 1,
      sym__line_break,
  [4093] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 1,
      sym__separator,
    ACTIONS(718), 1,
      sym__line_break,
  [4103] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 1,
      sym__separator,
    STATE(213), 1,
      aux_sym_for_statement_repeat1,
  [4113] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(723), 1,
      anon_sym_RBRACE,
    ACTIONS(725), 1,
      anon_sym_SPACE,
  [4123] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      sym__separator,
    ACTIONS(729), 1,
      sym__line_break,
  [4133] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 1,
      anon_sym_RBRACE,
    ACTIONS(733), 1,
      anon_sym_SPACE,
  [4143] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(735), 1,
      sym__separator,
    STATE(319), 1,
      sym__indentation,
  [4153] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_FINALLY,
    ACTIONS(556), 1,
      anon_sym_END,
  [4163] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 1,
      sym__separator,
    STATE(231), 1,
      aux_sym_for_statement_repeat1,
  [4173] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      anon_sym_RBRACE,
    ACTIONS(741), 1,
      anon_sym_SPACE,
  [4183] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(743), 1,
      aux_sym_settings_section_token2,
    ACTIONS(745), 1,
      sym__line_break,
  [4193] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      sym__separator,
    ACTIONS(749), 1,
      sym__line_break,
  [4203] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(751), 1,
      aux_sym_settings_section_token2,
    ACTIONS(753), 1,
      sym__line_break,
  [4213] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 1,
      sym__separator,
    STATE(279), 1,
      sym__indentation,
  [4223] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(757), 1,
      anon_sym_SPACE,
    ACTIONS(759), 1,
      sym_variable_name,
  [4233] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(761), 1,
      anon_sym_SPACE,
    ACTIONS(763), 1,
      sym_variable_name,
  [4243] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(765), 1,
      sym__separator,
    ACTIONS(767), 1,
      sym__line_break,
  [4253] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 1,
      sym__separator,
    STATE(326), 1,
      sym__indentation,
  [4263] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(269), 1,
      sym_scalar_variable,
  [4273] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(771), 1,
      anon_sym_SPACE,
    ACTIONS(773), 1,
      sym_variable_name,
  [4283] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(775), 1,
      sym__separator,
    STATE(213), 1,
      aux_sym_for_statement_repeat1,
  [4293] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(777), 1,
      anon_sym_RBRACE,
    ACTIONS(779), 1,
      anon_sym_SPACE,
  [4303] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_RBRACE,
    ACTIONS(783), 1,
      anon_sym_SPACE,
  [4313] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(785), 1,
      anon_sym_RBRACE,
    ACTIONS(787), 1,
      anon_sym_SPACE,
  [4323] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(789), 1,
      sym__separator,
    STATE(277), 1,
      sym__indentation,
  [4333] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      sym__line_break,
    ACTIONS(791), 1,
      sym__separator,
  [4343] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(793), 1,
      anon_sym_RBRACE,
    ACTIONS(795), 1,
      anon_sym_SPACE,
  [4353] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(797), 1,
      anon_sym_RBRACE,
    ACTIONS(799), 1,
      anon_sym_SPACE,
  [4363] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 1,
      anon_sym_RBRACE,
    ACTIONS(803), 1,
      anon_sym_SPACE,
  [4373] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      anon_sym_END,
    ACTIONS(546), 1,
      anon_sym_FINALLY,
  [4383] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(805), 1,
      anon_sym_RBRACE,
    ACTIONS(807), 1,
      anon_sym_SPACE,
  [4393] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(809), 1,
      anon_sym_RBRACE,
    ACTIONS(811), 1,
      anon_sym_SPACE,
  [4403] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_RBRACE,
    ACTIONS(815), 1,
      anon_sym_SPACE,
  [4413] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(817), 1,
      sym__separator,
    ACTIONS(819), 1,
      sym__line_break,
  [4423] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 1,
      anon_sym_RBRACE,
    ACTIONS(823), 1,
      anon_sym_SPACE,
  [4433] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
      anon_sym_RBRACE,
    ACTIONS(827), 1,
      anon_sym_SPACE,
  [4443] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(829), 1,
      anon_sym_RBRACE,
    ACTIONS(831), 1,
      anon_sym_SPACE,
  [4453] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(833), 1,
      anon_sym_RBRACE,
    ACTIONS(835), 1,
      anon_sym_SPACE,
  [4463] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym_RBRACE,
    ACTIONS(839), 1,
      anon_sym_SPACE,
  [4473] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(841), 1,
      anon_sym_SPACE,
    ACTIONS(843), 1,
      sym_variable_name,
  [4483] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(845), 1,
      anon_sym_SPACE,
    ACTIONS(847), 1,
      sym_variable_name,
  [4493] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(849), 1,
      anon_sym_SPACE,
    ACTIONS(851), 1,
      sym_variable_name,
  [4503] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(853), 1,
      anon_sym_SPACE,
    ACTIONS(855), 1,
      sym_variable_name,
  [4513] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(857), 1,
      anon_sym_SPACE,
    ACTIONS(859), 1,
      sym_variable_name,
  [4523] = 3,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(861), 1,
      anon_sym_SPACE,
    ACTIONS(863), 1,
      sym_variable_name,
  [4533] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      sym__separator,
    ACTIONS(867), 1,
      sym__line_break,
  [4543] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_END,
  [4550] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 1,
      sym__line_break,
  [4557] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(871), 1,
      sym__separator,
  [4564] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      sym__line_break,
  [4571] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(875), 1,
      sym__line_break,
  [4578] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 1,
      sym__line_break,
  [4585] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      anon_sym_RBRACE,
  [4592] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 1,
      sym__separator,
  [4599] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 1,
      sym__separator,
  [4606] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 1,
      sym__line_break,
  [4613] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(885), 1,
      sym_variable_name,
  [4620] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(887), 1,
      anon_sym_RBRACE,
  [4627] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(889), 1,
      sym__separator,
  [4634] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(891), 1,
      sym__line_break,
  [4641] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_EXCEPT,
  [4648] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      anon_sym_RBRACE,
  [4655] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(893), 1,
      sym__line_break,
  [4662] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(895), 1,
      sym__line_break,
  [4669] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(897), 1,
      sym__separator,
  [4676] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(723), 1,
      anon_sym_RBRACE,
  [4683] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_END,
  [4690] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(899), 1,
      sym__line_break,
  [4697] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(901), 1,
      anon_sym_END,
  [4704] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(903), 1,
      sym__line_break,
  [4711] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(905), 1,
      sym__separator,
  [4718] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(907), 1,
      ts_builtin_sym_end,
  [4725] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(909), 1,
      sym__separator,
  [4732] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(911), 1,
      sym__line_break,
  [4739] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(913), 1,
      sym__line_break,
  [4746] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(915), 1,
      sym_variable_name,
  [4753] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(917), 1,
      sym__line_break,
  [4760] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(919), 1,
      sym__line_break,
  [4767] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(921), 1,
      sym__line_break,
  [4774] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(923), 1,
      sym__line_break,
  [4781] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(925), 1,
      sym__line_break,
  [4788] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(927), 1,
      sym__line_break,
  [4795] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(929), 1,
      sym__line_break,
  [4802] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(931), 1,
      sym_variable_name,
  [4809] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(933), 1,
      sym__separator,
  [4816] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(935), 1,
      sym__line_break,
  [4823] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      sym__separator,
  [4830] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(937), 1,
      anon_sym_RBRACE,
  [4837] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(939), 1,
      sym__line_break,
  [4844] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(941), 1,
      sym__line_break,
  [4851] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(943), 1,
      sym__line_break,
  [4858] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(945), 1,
      sym_variable_name,
  [4865] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      sym__separator,
  [4872] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(947), 1,
      sym__separator,
  [4879] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(949), 1,
      anon_sym_RBRACE,
  [4886] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      sym__separator,
  [4893] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(951), 1,
      sym__line_break,
  [4900] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(953), 1,
      sym__line_break,
  [4907] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(955), 1,
      sym__separator,
  [4914] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(957), 1,
      sym__separator,
  [4921] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(959), 1,
      sym__line_break,
  [4928] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(961), 1,
      sym__separator,
  [4935] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(963), 1,
      sym__line_break,
  [4942] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(965), 1,
      sym__line_break,
  [4949] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(967), 1,
      sym__line_break,
  [4956] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(969), 1,
      sym__line_break,
  [4963] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(971), 1,
      sym__line_break,
  [4970] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(973), 1,
      anon_sym_RBRACE,
  [4977] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      anon_sym_END,
  [4984] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(975), 1,
      sym__line_break,
  [4991] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(977), 1,
      anon_sym_END,
  [4998] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(979), 1,
      sym__line_break,
  [5005] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(981), 1,
      sym__line_break,
  [5012] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(983), 1,
      sym__line_break,
  [5019] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(985), 1,
      sym_variable_name,
  [5026] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(987), 1,
      anon_sym_END,
  [5033] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(793), 1,
      anon_sym_RBRACE,
  [5040] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(989), 1,
      anon_sym_END,
  [5047] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(797), 1,
      anon_sym_RBRACE,
  [5054] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(991), 1,
      sym__line_break,
  [5061] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 1,
      anon_sym_RBRACE,
  [5068] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(993), 1,
      anon_sym_RBRACE,
  [5075] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(995), 1,
      anon_sym_RBRACE,
  [5082] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(997), 1,
      anon_sym_RBRACE,
  [5089] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(999), 1,
      anon_sym_RBRACE,
  [5096] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1001), 1,
      sym__line_break,
  [5103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_ELSEIF,
  [5110] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1003), 1,
      sym__line_break,
  [5117] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1005), 1,
      anon_sym_END,
  [5124] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1007), 1,
      sym__separator,
  [5131] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1009), 1,
      sym_ellipses,
  [5138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1011), 1,
      sym__line_break,
  [5145] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1013), 1,
      anon_sym_END,
  [5152] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 1,
      anon_sym_RBRACE,
  [5159] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1015), 1,
      sym__line_break,
  [5166] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
      anon_sym_RBRACE,
  [5173] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1017), 1,
      sym__line_break,
  [5180] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(829), 1,
      anon_sym_RBRACE,
  [5187] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1019), 1,
      anon_sym_RBRACE,
  [5194] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1021), 1,
      anon_sym_RBRACE,
  [5201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1023), 1,
      anon_sym_RBRACE,
  [5208] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1025), 1,
      sym__line_break,
  [5215] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1027), 1,
      sym__line_break,
  [5222] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1029), 1,
      anon_sym_RBRACE,
  [5229] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym_RBRACE,
  [5236] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1031), 1,
      anon_sym_RBRACE,
  [5243] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1033), 1,
      sym__line_break,
  [5250] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1035), 1,
      anon_sym_END,
  [5257] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1037), 1,
      sym__line_break,
  [5264] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(1039), 1,
      sym_variable_name,
  [5271] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(1041), 1,
      sym_variable_name,
  [5278] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(1043), 1,
      sym_variable_name,
  [5285] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(1045), 1,
      sym_variable_name,
  [5292] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1047), 1,
      sym__line_break,
  [5299] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1049), 1,
      sym__line_break,
  [5306] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1051), 1,
      sym__line_break,
  [5313] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(1053), 1,
      sym_variable_name,
  [5320] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(1055), 1,
      sym_variable_name,
  [5327] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(1057), 1,
      sym_variable_name,
  [5334] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1059), 1,
      sym__line_break,
  [5341] = 2,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(1061), 1,
      sym_variable_name,
  [5348] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1063), 1,
      sym_ellipses,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 44,
  [SMALL_STATE(4)] = 88,
  [SMALL_STATE(5)] = 132,
  [SMALL_STATE(6)] = 176,
  [SMALL_STATE(7)] = 220,
  [SMALL_STATE(8)] = 274,
  [SMALL_STATE(9)] = 307,
  [SMALL_STATE(10)] = 358,
  [SMALL_STATE(11)] = 390,
  [SMALL_STATE(12)] = 444,
  [SMALL_STATE(13)] = 495,
  [SMALL_STATE(14)] = 540,
  [SMALL_STATE(15)] = 585,
  [SMALL_STATE(16)] = 627,
  [SMALL_STATE(17)] = 657,
  [SMALL_STATE(18)] = 687,
  [SMALL_STATE(19)] = 717,
  [SMALL_STATE(20)] = 747,
  [SMALL_STATE(21)] = 774,
  [SMALL_STATE(22)] = 803,
  [SMALL_STATE(23)] = 830,
  [SMALL_STATE(24)] = 857,
  [SMALL_STATE(25)] = 886,
  [SMALL_STATE(26)] = 913,
  [SMALL_STATE(27)] = 942,
  [SMALL_STATE(28)] = 967,
  [SMALL_STATE(29)] = 992,
  [SMALL_STATE(30)] = 1017,
  [SMALL_STATE(31)] = 1044,
  [SMALL_STATE(32)] = 1071,
  [SMALL_STATE(33)] = 1098,
  [SMALL_STATE(34)] = 1125,
  [SMALL_STATE(35)] = 1158,
  [SMALL_STATE(36)] = 1185,
  [SMALL_STATE(37)] = 1210,
  [SMALL_STATE(38)] = 1239,
  [SMALL_STATE(39)] = 1266,
  [SMALL_STATE(40)] = 1291,
  [SMALL_STATE(41)] = 1319,
  [SMALL_STATE(42)] = 1347,
  [SMALL_STATE(43)] = 1379,
  [SMALL_STATE(44)] = 1407,
  [SMALL_STATE(45)] = 1435,
  [SMALL_STATE(46)] = 1463,
  [SMALL_STATE(47)] = 1491,
  [SMALL_STATE(48)] = 1519,
  [SMALL_STATE(49)] = 1547,
  [SMALL_STATE(50)] = 1575,
  [SMALL_STATE(51)] = 1603,
  [SMALL_STATE(52)] = 1628,
  [SMALL_STATE(53)] = 1645,
  [SMALL_STATE(54)] = 1670,
  [SMALL_STATE(55)] = 1687,
  [SMALL_STATE(56)] = 1712,
  [SMALL_STATE(57)] = 1729,
  [SMALL_STATE(58)] = 1745,
  [SMALL_STATE(59)] = 1771,
  [SMALL_STATE(60)] = 1787,
  [SMALL_STATE(61)] = 1811,
  [SMALL_STATE(62)] = 1827,
  [SMALL_STATE(63)] = 1851,
  [SMALL_STATE(64)] = 1867,
  [SMALL_STATE(65)] = 1883,
  [SMALL_STATE(66)] = 1907,
  [SMALL_STATE(67)] = 1931,
  [SMALL_STATE(68)] = 1955,
  [SMALL_STATE(69)] = 1979,
  [SMALL_STATE(70)] = 2003,
  [SMALL_STATE(71)] = 2027,
  [SMALL_STATE(72)] = 2051,
  [SMALL_STATE(73)] = 2074,
  [SMALL_STATE(74)] = 2095,
  [SMALL_STATE(75)] = 2118,
  [SMALL_STATE(76)] = 2141,
  [SMALL_STATE(77)] = 2164,
  [SMALL_STATE(78)] = 2185,
  [SMALL_STATE(79)] = 2208,
  [SMALL_STATE(80)] = 2231,
  [SMALL_STATE(81)] = 2254,
  [SMALL_STATE(82)] = 2275,
  [SMALL_STATE(83)] = 2298,
  [SMALL_STATE(84)] = 2318,
  [SMALL_STATE(85)] = 2332,
  [SMALL_STATE(86)] = 2352,
  [SMALL_STATE(87)] = 2366,
  [SMALL_STATE(88)] = 2380,
  [SMALL_STATE(89)] = 2394,
  [SMALL_STATE(90)] = 2414,
  [SMALL_STATE(91)] = 2434,
  [SMALL_STATE(92)] = 2454,
  [SMALL_STATE(93)] = 2474,
  [SMALL_STATE(94)] = 2494,
  [SMALL_STATE(95)] = 2508,
  [SMALL_STATE(96)] = 2522,
  [SMALL_STATE(97)] = 2536,
  [SMALL_STATE(98)] = 2556,
  [SMALL_STATE(99)] = 2576,
  [SMALL_STATE(100)] = 2596,
  [SMALL_STATE(101)] = 2616,
  [SMALL_STATE(102)] = 2636,
  [SMALL_STATE(103)] = 2656,
  [SMALL_STATE(104)] = 2676,
  [SMALL_STATE(105)] = 2696,
  [SMALL_STATE(106)] = 2710,
  [SMALL_STATE(107)] = 2724,
  [SMALL_STATE(108)] = 2738,
  [SMALL_STATE(109)] = 2752,
  [SMALL_STATE(110)] = 2766,
  [SMALL_STATE(111)] = 2786,
  [SMALL_STATE(112)] = 2806,
  [SMALL_STATE(113)] = 2825,
  [SMALL_STATE(114)] = 2842,
  [SMALL_STATE(115)] = 2859,
  [SMALL_STATE(116)] = 2878,
  [SMALL_STATE(117)] = 2897,
  [SMALL_STATE(118)] = 2914,
  [SMALL_STATE(119)] = 2931,
  [SMALL_STATE(120)] = 2948,
  [SMALL_STATE(121)] = 2961,
  [SMALL_STATE(122)] = 2974,
  [SMALL_STATE(123)] = 2987,
  [SMALL_STATE(124)] = 3000,
  [SMALL_STATE(125)] = 3013,
  [SMALL_STATE(126)] = 3026,
  [SMALL_STATE(127)] = 3039,
  [SMALL_STATE(128)] = 3052,
  [SMALL_STATE(129)] = 3065,
  [SMALL_STATE(130)] = 3078,
  [SMALL_STATE(131)] = 3091,
  [SMALL_STATE(132)] = 3102,
  [SMALL_STATE(133)] = 3115,
  [SMALL_STATE(134)] = 3128,
  [SMALL_STATE(135)] = 3141,
  [SMALL_STATE(136)] = 3154,
  [SMALL_STATE(137)] = 3167,
  [SMALL_STATE(138)] = 3180,
  [SMALL_STATE(139)] = 3193,
  [SMALL_STATE(140)] = 3206,
  [SMALL_STATE(141)] = 3219,
  [SMALL_STATE(142)] = 3232,
  [SMALL_STATE(143)] = 3245,
  [SMALL_STATE(144)] = 3258,
  [SMALL_STATE(145)] = 3271,
  [SMALL_STATE(146)] = 3285,
  [SMALL_STATE(147)] = 3299,
  [SMALL_STATE(148)] = 3313,
  [SMALL_STATE(149)] = 3329,
  [SMALL_STATE(150)] = 3345,
  [SMALL_STATE(151)] = 3359,
  [SMALL_STATE(152)] = 3375,
  [SMALL_STATE(153)] = 3391,
  [SMALL_STATE(154)] = 3407,
  [SMALL_STATE(155)] = 3423,
  [SMALL_STATE(156)] = 3437,
  [SMALL_STATE(157)] = 3451,
  [SMALL_STATE(158)] = 3465,
  [SMALL_STATE(159)] = 3479,
  [SMALL_STATE(160)] = 3493,
  [SMALL_STATE(161)] = 3507,
  [SMALL_STATE(162)] = 3521,
  [SMALL_STATE(163)] = 3534,
  [SMALL_STATE(164)] = 3547,
  [SMALL_STATE(165)] = 3560,
  [SMALL_STATE(166)] = 3573,
  [SMALL_STATE(167)] = 3584,
  [SMALL_STATE(168)] = 3597,
  [SMALL_STATE(169)] = 3608,
  [SMALL_STATE(170)] = 3621,
  [SMALL_STATE(171)] = 3632,
  [SMALL_STATE(172)] = 3645,
  [SMALL_STATE(173)] = 3658,
  [SMALL_STATE(174)] = 3671,
  [SMALL_STATE(175)] = 3684,
  [SMALL_STATE(176)] = 3697,
  [SMALL_STATE(177)] = 3710,
  [SMALL_STATE(178)] = 3721,
  [SMALL_STATE(179)] = 3734,
  [SMALL_STATE(180)] = 3747,
  [SMALL_STATE(181)] = 3760,
  [SMALL_STATE(182)] = 3773,
  [SMALL_STATE(183)] = 3786,
  [SMALL_STATE(184)] = 3799,
  [SMALL_STATE(185)] = 3812,
  [SMALL_STATE(186)] = 3825,
  [SMALL_STATE(187)] = 3838,
  [SMALL_STATE(188)] = 3849,
  [SMALL_STATE(189)] = 3860,
  [SMALL_STATE(190)] = 3873,
  [SMALL_STATE(191)] = 3883,
  [SMALL_STATE(192)] = 3893,
  [SMALL_STATE(193)] = 3903,
  [SMALL_STATE(194)] = 3913,
  [SMALL_STATE(195)] = 3923,
  [SMALL_STATE(196)] = 3933,
  [SMALL_STATE(197)] = 3943,
  [SMALL_STATE(198)] = 3953,
  [SMALL_STATE(199)] = 3963,
  [SMALL_STATE(200)] = 3973,
  [SMALL_STATE(201)] = 3983,
  [SMALL_STATE(202)] = 3993,
  [SMALL_STATE(203)] = 4003,
  [SMALL_STATE(204)] = 4013,
  [SMALL_STATE(205)] = 4023,
  [SMALL_STATE(206)] = 4033,
  [SMALL_STATE(207)] = 4043,
  [SMALL_STATE(208)] = 4053,
  [SMALL_STATE(209)] = 4063,
  [SMALL_STATE(210)] = 4073,
  [SMALL_STATE(211)] = 4083,
  [SMALL_STATE(212)] = 4093,
  [SMALL_STATE(213)] = 4103,
  [SMALL_STATE(214)] = 4113,
  [SMALL_STATE(215)] = 4123,
  [SMALL_STATE(216)] = 4133,
  [SMALL_STATE(217)] = 4143,
  [SMALL_STATE(218)] = 4153,
  [SMALL_STATE(219)] = 4163,
  [SMALL_STATE(220)] = 4173,
  [SMALL_STATE(221)] = 4183,
  [SMALL_STATE(222)] = 4193,
  [SMALL_STATE(223)] = 4203,
  [SMALL_STATE(224)] = 4213,
  [SMALL_STATE(225)] = 4223,
  [SMALL_STATE(226)] = 4233,
  [SMALL_STATE(227)] = 4243,
  [SMALL_STATE(228)] = 4253,
  [SMALL_STATE(229)] = 4263,
  [SMALL_STATE(230)] = 4273,
  [SMALL_STATE(231)] = 4283,
  [SMALL_STATE(232)] = 4293,
  [SMALL_STATE(233)] = 4303,
  [SMALL_STATE(234)] = 4313,
  [SMALL_STATE(235)] = 4323,
  [SMALL_STATE(236)] = 4333,
  [SMALL_STATE(237)] = 4343,
  [SMALL_STATE(238)] = 4353,
  [SMALL_STATE(239)] = 4363,
  [SMALL_STATE(240)] = 4373,
  [SMALL_STATE(241)] = 4383,
  [SMALL_STATE(242)] = 4393,
  [SMALL_STATE(243)] = 4403,
  [SMALL_STATE(244)] = 4413,
  [SMALL_STATE(245)] = 4423,
  [SMALL_STATE(246)] = 4433,
  [SMALL_STATE(247)] = 4443,
  [SMALL_STATE(248)] = 4453,
  [SMALL_STATE(249)] = 4463,
  [SMALL_STATE(250)] = 4473,
  [SMALL_STATE(251)] = 4483,
  [SMALL_STATE(252)] = 4493,
  [SMALL_STATE(253)] = 4503,
  [SMALL_STATE(254)] = 4513,
  [SMALL_STATE(255)] = 4523,
  [SMALL_STATE(256)] = 4533,
  [SMALL_STATE(257)] = 4543,
  [SMALL_STATE(258)] = 4550,
  [SMALL_STATE(259)] = 4557,
  [SMALL_STATE(260)] = 4564,
  [SMALL_STATE(261)] = 4571,
  [SMALL_STATE(262)] = 4578,
  [SMALL_STATE(263)] = 4585,
  [SMALL_STATE(264)] = 4592,
  [SMALL_STATE(265)] = 4599,
  [SMALL_STATE(266)] = 4606,
  [SMALL_STATE(267)] = 4613,
  [SMALL_STATE(268)] = 4620,
  [SMALL_STATE(269)] = 4627,
  [SMALL_STATE(270)] = 4634,
  [SMALL_STATE(271)] = 4641,
  [SMALL_STATE(272)] = 4648,
  [SMALL_STATE(273)] = 4655,
  [SMALL_STATE(274)] = 4662,
  [SMALL_STATE(275)] = 4669,
  [SMALL_STATE(276)] = 4676,
  [SMALL_STATE(277)] = 4683,
  [SMALL_STATE(278)] = 4690,
  [SMALL_STATE(279)] = 4697,
  [SMALL_STATE(280)] = 4704,
  [SMALL_STATE(281)] = 4711,
  [SMALL_STATE(282)] = 4718,
  [SMALL_STATE(283)] = 4725,
  [SMALL_STATE(284)] = 4732,
  [SMALL_STATE(285)] = 4739,
  [SMALL_STATE(286)] = 4746,
  [SMALL_STATE(287)] = 4753,
  [SMALL_STATE(288)] = 4760,
  [SMALL_STATE(289)] = 4767,
  [SMALL_STATE(290)] = 4774,
  [SMALL_STATE(291)] = 4781,
  [SMALL_STATE(292)] = 4788,
  [SMALL_STATE(293)] = 4795,
  [SMALL_STATE(294)] = 4802,
  [SMALL_STATE(295)] = 4809,
  [SMALL_STATE(296)] = 4816,
  [SMALL_STATE(297)] = 4823,
  [SMALL_STATE(298)] = 4830,
  [SMALL_STATE(299)] = 4837,
  [SMALL_STATE(300)] = 4844,
  [SMALL_STATE(301)] = 4851,
  [SMALL_STATE(302)] = 4858,
  [SMALL_STATE(303)] = 4865,
  [SMALL_STATE(304)] = 4872,
  [SMALL_STATE(305)] = 4879,
  [SMALL_STATE(306)] = 4886,
  [SMALL_STATE(307)] = 4893,
  [SMALL_STATE(308)] = 4900,
  [SMALL_STATE(309)] = 4907,
  [SMALL_STATE(310)] = 4914,
  [SMALL_STATE(311)] = 4921,
  [SMALL_STATE(312)] = 4928,
  [SMALL_STATE(313)] = 4935,
  [SMALL_STATE(314)] = 4942,
  [SMALL_STATE(315)] = 4949,
  [SMALL_STATE(316)] = 4956,
  [SMALL_STATE(317)] = 4963,
  [SMALL_STATE(318)] = 4970,
  [SMALL_STATE(319)] = 4977,
  [SMALL_STATE(320)] = 4984,
  [SMALL_STATE(321)] = 4991,
  [SMALL_STATE(322)] = 4998,
  [SMALL_STATE(323)] = 5005,
  [SMALL_STATE(324)] = 5012,
  [SMALL_STATE(325)] = 5019,
  [SMALL_STATE(326)] = 5026,
  [SMALL_STATE(327)] = 5033,
  [SMALL_STATE(328)] = 5040,
  [SMALL_STATE(329)] = 5047,
  [SMALL_STATE(330)] = 5054,
  [SMALL_STATE(331)] = 5061,
  [SMALL_STATE(332)] = 5068,
  [SMALL_STATE(333)] = 5075,
  [SMALL_STATE(334)] = 5082,
  [SMALL_STATE(335)] = 5089,
  [SMALL_STATE(336)] = 5096,
  [SMALL_STATE(337)] = 5103,
  [SMALL_STATE(338)] = 5110,
  [SMALL_STATE(339)] = 5117,
  [SMALL_STATE(340)] = 5124,
  [SMALL_STATE(341)] = 5131,
  [SMALL_STATE(342)] = 5138,
  [SMALL_STATE(343)] = 5145,
  [SMALL_STATE(344)] = 5152,
  [SMALL_STATE(345)] = 5159,
  [SMALL_STATE(346)] = 5166,
  [SMALL_STATE(347)] = 5173,
  [SMALL_STATE(348)] = 5180,
  [SMALL_STATE(349)] = 5187,
  [SMALL_STATE(350)] = 5194,
  [SMALL_STATE(351)] = 5201,
  [SMALL_STATE(352)] = 5208,
  [SMALL_STATE(353)] = 5215,
  [SMALL_STATE(354)] = 5222,
  [SMALL_STATE(355)] = 5229,
  [SMALL_STATE(356)] = 5236,
  [SMALL_STATE(357)] = 5243,
  [SMALL_STATE(358)] = 5250,
  [SMALL_STATE(359)] = 5257,
  [SMALL_STATE(360)] = 5264,
  [SMALL_STATE(361)] = 5271,
  [SMALL_STATE(362)] = 5278,
  [SMALL_STATE(363)] = 5285,
  [SMALL_STATE(364)] = 5292,
  [SMALL_STATE(365)] = 5299,
  [SMALL_STATE(366)] = 5306,
  [SMALL_STATE(367)] = 5313,
  [SMALL_STATE(368)] = 5320,
  [SMALL_STATE(369)] = 5327,
  [SMALL_STATE(370)] = 5334,
  [SMALL_STATE(371)] = 5341,
  [SMALL_STATE(372)] = 5348,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 3, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 2, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2, 0, 0),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2, 0, 0), SHIFT_REPEAT(222),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_settings_section_repeat1, 2, 0, 0), SHIFT_REPEAT(301),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 4, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__empty_line, 2, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__empty_line, 2, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_statement, 3, 0, 1),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting_statement, 3, 0, 1),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition_body, 1, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition_body, 1, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2, 0, 0),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2, 0, 0), SHIFT_REPEAT(336),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_definition_body, 1, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_definition_body, 1, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2, 0, 0),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 2, 0, 0), SHIFT_REPEAT(336),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_section, 4, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_section, 4, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 4, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 4, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keywords_section_repeat1, 2, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2, 0, 0),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2, 0, 0), SHIFT_REPEAT(345),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2, 0, 0), SHIFT_REPEAT(313),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_cases_section_repeat1, 2, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2, 0, 0),
  [171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2, 0, 0), SHIFT_REPEAT(149),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_section_repeat1, 2, 0, 0), SHIFT_REPEAT(313),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 2, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 3, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 3, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 3, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_section, 3, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_section, 3, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 2, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 2, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2, 0, 0),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2, 0, 0), SHIFT_REPEAT(294),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variables_section_repeat1, 2, 0, 0), SHIFT_REPEAT(301),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(221),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(223),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(195),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(192),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_section, 2, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_section, 2, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 4, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 2, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 3, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 3, 0, 0),
  [303] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(225),
  [306] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(114),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(150),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 3, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_case_definition_body_repeat1, 3, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_definition, 3, 0, 2),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_definition, 3, 0, 2),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [331] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_except_statement, 3, 100, 0), SHIFT(13),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 6, 0, 0),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 6, 0, 0),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_assignment, 3, 0, 0), SHIFT(186),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition, 3, 0, 2),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition, 3, 0, 2),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 5, 0, 0),
  [357] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(250),
  [360] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(113),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(157),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [377] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_variable_assignment, 3, 0, 0), SHIFT(43),
  [380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_assignment, 3, 0, 0), SHIFT(181),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [389] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(226),
  [392] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(118),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(161),
  [398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [415] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_finally_statement, 3, 100, 0), SHIFT(15),
  [418] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_except_statement, 4, 100, 0), SHIFT(15),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_python_expression, 2, 0, 0),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_python_expression, 2, 0, 0),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 4, 0, 0),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 4, 0, 0),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 4, 0, 0),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 4, 0, 0),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 4, 0, 0),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 4, 0, 0),
  [439] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_variable_assignment, 4, 0, 0), SHIFT(43),
  [442] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_assignment, 4, 0, 0), SHIFT(181),
  [445] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_keyword_invocation, 1, 0, 3), SHIFT(186),
  [448] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_block, 1, 0, 0), SHIFT(15),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 5, 0, 0),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 5, 0, 0),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 5, 0, 0),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 5, 0, 0),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 5, 0, 0),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 5, 0, 0),
  [465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_assignment, 4, 0, 0), SHIFT(186),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [472] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [475] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(101),
  [478] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(352),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 3, 0, 0),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 3, 0, 0),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 3, 0, 0),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 3, 0, 0),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 3, 0, 0),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 3, 0, 0),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_python_expression, 3, 0, 4),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_python_expression, 3, 0, 4),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0),
  [499] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_keyword_invocation, 1, 0, 3), SHIFT(43),
  [502] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_keyword_invocation, 1, 0, 3), SHIFT(181),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [515] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 1, 0, 0), SHIFT(186),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [520] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_arguments, 1, 0, 0), SHIFT(43),
  [523] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 1, 0, 0), SHIFT(181),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1, 0, 0),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [532] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_python_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(166),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_python_expression_repeat1, 2, 0, 0),
  [537] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_try_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(271),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [558] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2, 0, 9), SHIFT_REPEAT(337),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 1, 0, 0),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2, 0, 0),
  [569] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 2, 0, 0), SHIFT(181),
  [572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 2, 0, 0),
  [574] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2, 0, 0), SHIFT_REPEAT(181),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 6, 0, 0),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 4, 100, 0),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inline_python_expression_repeat1, 1, 0, 0),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_python_expression_repeat1, 1, 0, 0),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [601] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2, 0, 0), SHIFT_REPEAT(186),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 3, 100, 0),
  [606] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_continuation, 2, 100, 0), SHIFT(43),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 2, 100, 0),
  [611] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_if_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(207),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_if_statement_repeat1, 2, 0, 0),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [620] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments_without_continuation, 1, 0, 0),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 5, 0, 0),
  [635] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_continuation, 4, 100, 0), SHIFT(43),
  [638] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_continuation, 3, 100, 0), SHIFT(43),
  [641] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [643] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arguments, 2, 0, 0), SHIFT(186),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 3, 0, 0),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 3, 0, 0),
  [650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [654] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [656] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [660] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [662] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [664] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0),
  [674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_range, 3, 0, 0),
  [678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inline_if_statement_repeat1, 2, 0, 0),
  [682] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3, 0, 5),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3, 0, 5),
  [686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_range, 5, 0, 0),
  [704] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_setting_name, 1, 0, 0),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting_name, 1, 0, 0),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [710] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [712] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_elseif_statement, 5, 100, 0),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_elseif_statement, 5, 100, 0),
  [716] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1, 0, 0),
  [720] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(229),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [727] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 4, 0, 0),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 4, 0, 0),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [733] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [735] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [737] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [741] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [743] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [747] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting_name, 1, 0, 0),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_name, 1, 0, 0),
  [751] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [755] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [757] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [759] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [761] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [763] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [765] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_statement, 1, 0, 0),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_statement, 1, 0, 0),
  [769] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [771] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [773] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [775] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [779] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [783] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [787] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [789] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [791] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [795] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [803] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [807] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [811] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [815] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [817] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_invocation, 2, 0, 3),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_invocation, 2, 0, 3),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [823] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [827] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [831] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [835] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [839] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [841] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [843] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [845] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [847] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [849] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [851] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [853] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [855] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [857] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [859] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [861] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [863] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [865] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 5, 0, 0),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 5, 0, 0),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 8, 0, 18),
  [871] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_else_statement, 3, 100, 0),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 9, 0, 19),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, 0, 8),
  [879] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [881] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elseif_statement, 6, 100, 20),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_range, 7, 0, 0),
  [885] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [889] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_for_statement_repeat1, 2, 0, 0),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 6, 200, 0),
  [897] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 5, 0, 7),
  [905] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_statement, 4, 100, 10),
  [907] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [909] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_except_statement, 4, 100, 0),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in, 2, 0, 0),
  [915] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 4, 200, 0),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [931] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [933] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_finally_statement, 4, 100, 0),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 6, 0, 11),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_enumerate, 2, 0, 0),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [945] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [947] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [955] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [957] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [961] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 1, 0, 6),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_in_zip, 2, 0, 0),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 7, 0, 0),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting, 2, 0, 1),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, 0, 12),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, 0, 13),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 5, 200, 0),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [985] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, 0, 14),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 7, 200, 0),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1007] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_except_statement, 5, 100, 0),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1017] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_setting, 2, 0, 0),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1027] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_if_statement, 8, 0, 0),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1033] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, 0, 15),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1037] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, 0, 16),
  [1039] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [1041] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [1043] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [1045] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1049] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, 0, 17),
  [1051] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_statement, 8, 200, 0),
  [1053] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [1055] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [1057] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1061] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
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
